function kw(keyword) {
    if (keyword.toUpperCase() != keyword) {
        throw new Error(`Expected upper case keyword got ${keyword}`);
    }
    const words = keyword.split(" ");
    const regExps = words.map(createCaseInsensitiveRegex);

    if (regExps.length == 1) {
        return alias(regExps[0], keyword);
    } else {
        return alias(seq(...regExps), keyword.replace(/ /g, "_"));
    }
}

function createCaseInsensitiveRegex(word) {
    return new RegExp(
        word
            .split("")
            .map(letter => `[${letter.toLowerCase()}${letter.toUpperCase()}]`)
            .join(""),
    );
}

module.exports = grammar({
    name: 'cql',

    rules: {
        source_file: $ => repeat($._statement),

        _statement: $ =>
            seq(
                choice(
                    $.select_statement,
                ),
                optional(";"),
            ),

        select_statement: $ =>
            seq(
                kw("SELECT"),
                optional( kw("DISTINCT")),
                optional( kw("JSON") ),
                $.select_elements,
                $.from_spec,
                optional($.where_spec),
                optional($.order_spec),
                optional(seq( kw("LIMIT"), $._decimal_literal)),
                optional(kw("ALLOW FILTERING")),
            ),
        select_elements: $ =>
            seq(
            choice( "*", $.select_element),
            repeat(seq(",", $.select_element)),
            ),
        select_element: $ =>
            choice(
                seq(
                    $.object_name,
                    ".",
                    "*"
                ),
                seq(
                    choice( $.object_name, $.function_call),
                    optional( seq( kw("AS"), $.object_name )),
                ),
            ),
        function_call: $ =>
            seq(
                field("function", $.object_name),
                "(",
                choice(
                    "*",
                    optional(field("arguments", $.function_args)),
                ),
                ")",
            ),
        function_args: $ =>
            seq (
                choice(
                    $.constant,
                    $.object_name,
                    $.function_call
                ),
                repeat(
                    seq(
                        ",",
                        choice(
                            $.constant,
                            $.object_name,
                            $.function_call
                        ),
                    )
                )
            ),
        constant: $ => prec.left( 2,
            choice(
                $._uuid,
                $._string_literal,
                $._decimal_literal,
                $._float_literal,
                $._hexadecimal_literal,
                $._boolean_literal,
                //$.code_block,
                kw("NULL")
            ) ),
        _uuid : $ =>
            seq (
                $._hex_4digit,
                "-",
                $._hex_4digit,
                "-",
                $._hex_4digit,
                "-",
                $._hex_4digit,
                "-",
                $._hex_4digit,
                $._hex_4digit,
                $._hex_4digit,
            ),
        _hex_4digit : $ => /[0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F]/,
        _hex_digit : $ => /[0-9a-fA-F]/,
        _string_literal: $ =>
            choice(
                seq("'", field("content", /[^']*/), "'"),
                seq("$$", field("content", /(\$?[^$]+)+/), "$$"), // FIXME empty string test, maybe read a bit more into c comments answer
            ),
        _decimal_literal : $ =>  repeat1( $._dec_digit ),
        _dec_digit : $ => /[0-9]/,
        _float_literal : $ =>
            seq(
                optional("-"),
                $._decimal_literal,
                optional(
                    seq (
                        ".",
                        $._decimal_literal,
                    )
                ),
            ),
        _hexadecimal_literal : $ =>
            choice(
                seq(
                    "X'",
                    repeat1(
                        seq(
                            $._hex_digit,
                            $._hex_digit,
                        )
                    ),
                    "'",
                ),
                seq(
                    "0X",
                    repeat1( $._hex_digit ),
                ),
            ),
        _boolean_literal : $ => token(choice( kw("TRUE"), kw("FALSE"))),
        //code_block : $ => seq( "$$",field("content", /(\$?[^$]+)+/), "$$"),
        object_name : $ => token(
            choice(
                /[a-zA-Z][A-Za-z0-9_$]*/,
                seq("'", /[a-zA-Z][A-Za-z0-9_$]*/, "'"),
            )),

        from_spec : $ => seq( kw("FROM"), $.from_spec_element ),
        from_spec_element : $ => seq( $.object_name, optional(seq(".", $.object_name))),
        where_spec : $ => seq( kw("WHERE"), $.relation_elements),
        relation_elements : $ => seq( $.relation_element, repeat(seq( kw("AND"), $.relation_element))),
        relation_element : $=>
            choice(
                seq(
                    $.object_name,
                    choice( "=","<",">","<=",">="),
                    $.constant,
                    ),
                seq(
                    $.object_name,
                    ".",
                    $.object_name,
                    choice( "=","<",">","<=",">="),
                    $.constant,
                ),
                seq(
                    $.function_call,
                    choice( "=","<",">","<=",">="),
                    $.constant,
                ),
                seq(
                    $.function_call,
                    choice( "=","<",">","<=",">="),
                    $.function_call,
                ),
                seq(
                    $.object_name,
                    kw("IN"),
                    "(",
                     $.function_args,
                    ")",
                ),

                seq(
                    "(",
                    $.object_name,
                    repeat( seq( ",", $.object_name)),
                    ")",
                    kw("IN"),
                    "(",
                    $.assignment_tuple,
                    repeat( seq(",", $.assignment_tuple)),
                    ")",
                ),
                seq(
                    "(",
                    $.object_name,
                    repeat( seq( ",", $.object_name)),
                    ")",
                    choice( "=","<",">","<=",">="),
                    "(",
                    $.assignment_tuple,
                    repeat( seq(",", $.assignment_tuple)),
                    ")",
                ),
                $.relalationContainsKey,
                $.relalationContains,
            ),
        assignment_tuple : $ =>
            seq(
                "(",
                $.constant,
                choice (
                    repeat( seq( ",", $.constant)),
                    repeat( seq( ",", $.assignment_tuple)),
                    seq(
                        $.assignment_tuple, repeat( seq(",", $.assignment_tuple))
                    )
                ),
                ")",
            ),
        relalationContainsKey : $ => seq( $.object_name, kw("CONTAINS KEY"), $.constant),
        relalationContains : $ => seq( $.object_name, kw("CONTAINS"), $.constant),
        order_spec : $ => seq ( kw("ORDER BY"), $.order_spec_element),
        order_spec_element : $ => seq( $.object_name, optional( choice( kw( "ASC"), kw("DESC")))),

    },
});

