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
                    //alterKeyspace
                    // alterMaterializedView
                    // alterRole
                    // alterTable
                    // alterType
                    // alterUser
                    // applyBatch
                    // createAggregate
                    // createFunction
                    $.create_index,
                    // createKeyspace
                    // createMaterializedView
                    // createRole
                    // createTable
                    // createTrigger
                    // createType
                    // createUser
                    $.delete_statement,
                    // dropAggregate
                    $.drop_function,
                    $.drop_index,
                    $.drop_keyspace,
                    // dropMaterializedView
                    $.drop_role,
                    $.drop_table,
                    // dropTrigger
                    // dropType
                    $.drop_user,
                    $.grant,
                    $.insert_statement,
                    $.list_permissions,
                    $.list_roles,
                    $.revoke,
                    $.select_statement,
                    $.truncate,
                    $.update,
                    $.use,
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
                    commaSep1( $.object_name ),
                    ")",
                    kw("IN"),
                    "(",
                    commaSep1($.assignment_tuple),
                    ")",
                ),
                seq(
                    "(",
                    commaSep1( $.object_name ),
                    ")",
                    choice( "=","<",">","<=",">="),
                    "(",
                    commaSep1($.assignment_tuple),
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
        delete_statement : $ =>
            seq(
                optional( $.begin_batch ),
                kw("DELETE"),
                optional( $.delete_column_list ),
                $.from_spec,
                optional( $.using_timestamp_spec),
                $.where_spec,
                optional( choice( $.if_exist, $.if_spec))
            ),
        begin_batch : $ =>
            seq(
                kw("BEGIN"),
                optional( choice( kw("LOGGED"), kw("UNLOGGED"))),
                kw( "BATCH"),
                optional( $.using_timestamp_spec),
            ),
        delete_column_list : $ => seq( $.delete_column_item, repeat( seq( ",", $.delete_column_item))),
        delete_column_item : $ =>
            seq(
                $.object_name,
                optional(
                    seq(
                        "[",
                        choice( $._string_literal, $._decimal_literal),
                        "]"
                    )
                ),
            ),
        using_timestamp_spec : $ => seq( kw("USING"), $.timestamp ),
        timestamp : $ => seq( kw("TIMESTAMP"), $._decimal_literal),
        if_exist : $ => kw( "IF EXISTS"),
        if_spec : $ => seq( kw("IF"), $.if_condition_list),
        if_condition_list : $ => seq( $.if_condition, repeat( seq( kw("AND"), $.if_condition))),
        if_condition : $ => seq( $.object_name, "=", $.constant),
        insert_statement : $ =>
            seq(
                optional( $.begin_batch),
                kw("INSERT INTO"),
                optional( seq( $.keyspace, ".")),
                $.table,
                optional( $.insert_column_spec ),
                $.insert_values_spec,
                optional( $.if_not_exist ),
                optional( $.using_ttl_timestamp )
            ),
        keyspace : $ => field( "keyspace",
            choice(
                $.object_name,
                seq( $._dquote, $.object_name, $._dquote)
            )),
        _dquote : $ => "\"",
        table : $ => field( "table",
            choice(
                $.object_name,
                seq( $._dquote, $.object_name, $._dquote)
            )),
        insert_column_spec : $ => seq( "(", $.column_list, ")" ),
        column_list : $ => commaSep1( $.column),
        column : $ => field( "column",
            choice(
                $.object_name,
                seq( $._dquote, $.object_name, $._dquote)
            )),
        insert_values_spec : $ =>
            choice(
                seq( kw("VALUES"), "(", $.expression_list, ")", ),
                seq( kw("JSON"), $.constant),
            ),
        expression_list : $ => commaSep1( $.expression ),
        expression : $ =>
            choice(
                $.constant,
                $.assignment_map,
                $.assignment_set,
                $.assignment_list,
                $.assignment_tuple,
            ),
        assignment_map : $ => seq("{", commaSep1( seq( $.constant, ":", $.constant)),"}"),
        assignment_set : $ => seq("{", optional( commaSep1( $.constant ) ),"}"),
        assignment_list : $  => seq( "[", commaSep1( $.constant ), "]"),
        assignment_tuple : $ =>
            seq(
                "(",
                $.constant,
                choice(
                    repeat( seq( ",", $.constant)),
                    repeat( seq( ",", $.assignment_tuple)),
                    commaSep1( $.assignment_tuple ),
                ),
                ")",
            ),
        if_not_exist : $ => kw( "IF NOT EXISTS"),
        using_ttl_timestamp : $ =>
            seq(
                kw( "USING"),
                choice(
                    seq( $.ttl, optional( seq(kw("AND"), $.timestamp))),
                    seq( $.timestamp, optional( seq(kw("AND"), $.ttl))),
                )
            ),
        ttl : $ => seq( kw("TTL"), $._decimal_literal),
        truncate : $ =>
            seq(
                kw("TRUNCATE"),
                optional( kw ("TABLE")),
                optional( seq( $.keyspace, ".")),
                $.table
            ),
        create_index : $ =>
            seq(
                kw( "CREATE INDEX"),
                optional( $.if_not_exist),
                optional( $.index_name ),
                kw( "ON"),
                optional( seq( $.keyspace, ".")),
                $.table,
                "(",
                $.index_column_spec,
                ")"
            ),
        index_name : $ => choice( $.object_name, $._string_literal),
        index_column_spec : $ => choice( $.column, $.index_keys_spec, $.index_entries_s_spec, $.index_full_spec),
        index_keys_spec : $ => seq( kw("KEYS"), "(", $.object_name, ")"),
        index_entries_s_spec : $ => seq( kw( "ENTRIES"), "(", $.object_name, ")"),
        index_full_spec : $ => seq( kw( "FULL"), "(", $.object_name, ")"),
        drop_index : $ =>
            seq(
                kw( "DROP INDEX"),
                optional( $.if_exist),
                optional( seq( $.keyspace, ".")),
                $.index_name,
            ),
        update : $ =>
            seq (
                optional( $.begin_batch),
                kw( "UPDATE"),
                optional( seq( $.keyspace, ".")),
                $.table,
                optional( $.using_ttl_timestamp),
                kw( "SET"),
                commaSep1( $.assignment_element),
                $.where_spec,
                optional( choice( $.if_exist, $.if_spec))
            ),
        assignment_element : $ =>
            choice(
                seq( $.object_name, "=", choice( $.constant, $.assignment_map, $.assignment_set, $.assignment_list )),
                seq( $.object_name, "=", $.object_name, choice( "+", "-" ), $._decimal_literal),
                seq( $.object_name, "=", $.object_name, choice( "+", "-" ), $.assignment_set),
                seq( $.object_name, "=", $.assignment_set, choice( "+", "-" ), $.object_name),
                seq( $.object_name, "=", $.object_name, choice( "+", "-" ), $.assignment_map),
                seq( $.object_name, "=", $.assignment_map, choice( "+", "-" ), $.object_name),
                seq( $.object_name, "=", $.object_name, choice( "+", "-" ), $.assignment_list),
                seq( $.object_name, "=", $.assignment_list, choice( "+", "-" ), $.object_name),
                seq( $.object_name, "[", $._decimal_literal, "]", "=", $.constant),
            ),
        use : $ => seq( kw("USE"), $.keyspace),
        grant : $ => seq( kw("GRANT"), $.priviledge,  kw("ON"), $.resource, kw("TO"), $.role ),
        priviledge : $ =>
            choice(
                choice( kw("ALL"), kw( "ALL PERMISSIONS")),
                kw( "ALTER"),
                kw( "AUTHORIZE"),
                kw( "DESCRIBE"),
                kw( "EXECUTE"),
                kw( "CREATE"),
                kw( "DROP"),
                kw( "MODIFY"),
                kw( "SELECT"),
            ),
        resource : $ =>
            choice(
                kw("ALL FUNCTIONS"),
                seq( kw("ALL FUNCTIONS IN KEYSPACE"), $.keyspace),
                seq( kw("FUNCTION"), optional( seq( $.keyspace, ".")), $.function ),
                kw("ALL KEYSPACES"),
                seq( kw("KEYSPACE"), $.keyspace),
                seq( optional( kw("TABLE")), optional( seq( $.keyspace, ".")), $.table ),
                kw("ALL ROLES"),
                seq( kw("ROLE"), $.role ),
            ),
        role : $ => field( "role", $.object_name),
        function : $ => field( "function", $.object_name),
        revoke : $ => seq( kw("REVOKE"), $.priviledge, kw("ON"), $.resource, kw("FROM"), $.role),
        list_roles : $ =>
            seq(
                kw("LIST ROLES"),
                optional( seq( kw("OF"), $.role)),
                optional( kw( "NORECURSIVE")),
            ),
        list_permissions : $ =>
            seq(
                kw("LIST"),
                $.priviledge,
                optional( seq( kw("ON"), $.resource)),
                optional( seq( kw( "OF"), $.role))
            ),
        drop_function : $ =>
            seq(
                kw( "DROP"),
                kw( "FUNCTION"),
                optional( $.if_exist ),
                optional( seq( $.keyspace, ".")),
                $.function
            ),
        drop_keyspace : $ =>
            seq(
                kw( "DROP"),
                kw( "KEYSPACE"),
                optional( $.if_exist ),
                $.keyspace
            ),
        drop_role : $ =>
            seq(
                kw( "DROP"),
                kw( "ROLE"),
                optional( $.if_exist ),
                $.role
            ),
        drop_table : $ =>
            seq(
                kw( "DROP"),
                kw( "TABLE"),
                optional( $.if_exist ),
                optional( seq( $.keyspace, ".")),
                $.table
            ),
        drop_user : $ =>
            seq(
                kw( "DROP"),
                kw( "USER"),
                optional( $.if_exist ),
                optional( seq( $.keyspace, ".")),
                $.user
            ),
        user : $ => field( "user", $.object_name),
    },
});

function commaSep1(rule) {
    return sep1(rule, ",");
}

function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)));
}
