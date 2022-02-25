const

    squote = "'",
    dot = ".",

    if_exists = seq(kw( "IF"),kw("EXISTS")),

    name_chars  = /[a-zA-Z][A-Za-z0-9_$]+/
    //qname  = choice( name_chars, seq(squote, name_chars, squote))

    //user = field( "user", qname),
    //keyspace = field( "keyspace",  qname )


module.exports = grammar({
    name: 'cql',

    conflicts: ($, original) => original.concat([
    ]),
    rules: {
        source_file: $ => repeat($._statement),

        _statement: $ =>
            seq(
                choice(
                    $.drop_user,
                ),
                optional(";"),
            ),

        //keyspace : $ => token( keyspace ),
        //if_exists : $ => seq(kw( "IF"),kw("EXISTS")),
        drop_user : $ =>
            seq(
                kw( "DROP"),
                kw("USER"),
                optional( if_exists ),
                dotted_name( "keyspace",  "name"),
            ),
        qname : $ => token(choice( name_chars, seq(squote, name_chars, squote))),
    },
});

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

function dotted_name_orig(item1, name1, item2, name2) {
    return choice(
        seq( alias( item1, name1), ".", alias(item2, name2) ),
        alias( item2, name2 ),
    )
}

function dotted_name(name1, name2) {
    return choice(
        seq( alias( token( choice( name_chars, seq(squote, name_chars, squote))), name1),
            alias(".",""), alias(token( choice( name_chars, seq(squote, name_chars, squote))), name2) ),
        alias( token( choice( name_chars, seq(squote, name_chars, squote))), name2 ),
    )
}


