const
    PREC = {
        primary: 7,
        unary: 6,
        multiplicative: 5,
        additive: 4,
        comparative: 3,
        and: 2,
        or: 1,
        composite_literal: -1,
    },
    comparative_operators = ['<', '<=', '<>', '=', '>=', '>'],
    squote = "'",
    dquote = "\"",
    dot = ".",
    star = "*",

    if_not_exists = seq(kw( "IF"),kw("NOT"),kw("EXISTS")),
    if_exists = seq(kw( "IF"),kw("EXISTS")),
    primary_key = seq(kw( "PRIMARY"),kw( "KEY")),
    or_replace = seq(kw( "OR"),kw("REPLACE")),
    order_direction = choice( kw( "ASC"), kw("DESC")),

    string_str =  seq(squote, field("content", /[^']*/), squote),

    uuid_str = /[0-9a-fA-F]{8}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{12}/,
    hex_digit = /[0-9a-fA-F]/,
    decimal_digits = /[0-9]+/,
    hex_str = choice(
        seq(
            "X'",
            repeat1(
                seq(
                    hex_digit,
                    hex_digit,
                )
            ),
            squote,
        ),
        seq(
            "0X",
            repeat1( hex_digit ),
        ),
    ),
    decimal_str =  seq( optional("-"), decimal_digits),
    float_str  = seq( optional("-"), decimal_digits, dot ,decimal_digits),
    code  =  /\$\$(\$?[^$]+)+\$\$/,
    name_chars  = /[a-zA-Z][A-Za-z0-9_$]*/
    timestamp  = seq( kw("TIMESTAMP"), alias( token( decimal_str), "time")),
        ttl  = seq( kw("TTL"), alias( token( decimal_str), "ttl")),

    module.exports = grammar({
    name: 'cql',

    conflicts: ($, original) => original.concat([
    ]),
    rules: {
        source_file: $ => repeat($._statement),

        _statement: $ =>
            seq(
                choice(
                    $.alter_keyspace,
                    $.alter_materialized_view,
                    $.alter_role,
                    $.alter_table,
                    $.alter_type,
                    $.alter_user,
                    $.apply_batch,
                    $.create_aggregate,
                    $.create_function,
                    $.create_index,
                    $.create_keyspace,
                    $.create_materialized_view,
                    $.create_role,
                    $.create_table,
                    $.create_trigger,
                    $.create_type,
                    $.create_user,
                    $.delete_statement,
                    $.drop_aggregate,
                    $.drop_function,
                    $.drop_index,
                    $.drop_keyspace,
                    $.drop_materialized_view,
                    $.drop_role,
                    $.drop_table,
                    $.drop_trigger,
                    $.drop_type,
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
                optional($.limit_spec ),
                optional(seq( kw("ALLOW"), kw("FILTERING"))),
            ),
        limit_spec: $ => seq( kw("LIMIT"), alias($._decimal_literal, "limit_value")),
        select_elements: $ =>
            seq(
            choice( star, $.select_element),
            repeat(seq(",", $.select_element)),
            ),
        select_element: $ =>
            choice(
                seq($.object_name, dot, star ),
                seq(
                    choice(  alias( $.object_name, "column"), $.function_call),
                    optional( seq( kw("AS"), alias( $.object_name, "alias" ))),
                ),
            ),
        function_call: $ =>
            seq(
                alias( $.object_name, "function_name"),
                "(",
                choice(
                    star,
                    $.function_args,
                ),
                ")",
            ),
        function_args: $ =>
            commaSep1(choice(
                $.constant,
                $.object_name,
                $.function_call,
            )),
        constant: $ =>
            choice(
                $._decimal_literal,
                $._float_literal,
                token(hex_str),
                $._boolean_literal,
                $._code_block,
                kw("NULL"),
                $._string_literal,
                token(uuid_str ),
            ),
        _string_literal: $ => token(string_str),
        _decimal_literal : $ =>  token( decimal_str ),
        _float_literal : $ => token( float_str),
        _boolean_literal : $ => token(choice( kw("TRUE"), kw("FALSE"))),
        _code_block : $ => token(code),
        from_spec : $ => seq( kw("FROM"), $.table_name),
    where_spec : $ =>
            seq( kw("WHERE"), $.relation_elements ),
        relation_elements : $ => prec.left(PREC.and,sep1( $.relation_element, kw("AND"))),
        relation_element : $=>
            choice (
                seq( alias( $.object_name, "column" ),
                    choice("<", "<=", "<>", "=", ">", ">="),
                    $.constant,),
                seq( $.function_call,
                    choice("<", "<=", "<>", "=", ">", ">="),
                    $.constant,),
                seq(
                    $.function_call,
                    choice("<", "<=", "<>", "=", ">", ">="),
                    $.function_call,
                ),
                seq(
                    alias( $.object_name, "column" ),
                    kw("IN"),
                    "(",
                     $.function_args,
                    ")",
                ),
                seq(
                    "(",
                    commaSep1( alias( $.object_name, "column" ), ),
                    ")",
                    kw("IN"),
                    "(",
                    commaSep1($.assignment_tuple),
                    ")",
                ),
                seq(
                    "(",
                    commaSep1( alias( $.object_name, "column" ), ),
                    ")",
                    choice( "<", "<=", "<>", "=", ">", ">="),
                    commaSep1($.assignment_tuple),
                ),
                $.relation_contains_key,
                $.relation_contains,

            ),
        relation_contains_key : $ => seq( alias( $.object_name, "column" ), kw("CONTAINS"),kw("KEY"), $.constant),
        relation_contains : $ => seq( alias( $.object_name, "column" ), kw("CONTAINS"), $.constant),
        order_spec : $ =>
            seq (
                kw("ORDER"),
                kw("BY"),
                $.object_name,
                optional( order_direction)
            ),
        delete_statement : $ =>
            seq(
                optional( $.begin_batch ),
                kw("DELETE"),
                optional( $.delete_column_list ),
                $.from_spec,
                optional( $.using_timestamp_spec),
                $.where_spec,
                optional( choice( if_exists, $.if_spec))
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
                alias( $.object_name, "column"),
                optional(
                    seq(
                        "[",
                        alias( choice( $._string_literal, $._decimal_literal), "index"),
                        "]"
                    )
                ),
            ),
        using_timestamp_spec : $ => seq( kw("USING"), timestamp ),
        //timestamp : $ => seq( kw("TIMESTAMP"), alias( $._decimal_literal, "timestamp")),
        if_exist : $ => token( if_exists),
        if_spec : $ => seq( kw( "IF"), $.relation_elements),
//        if_condition_list : $ => seq( $.if_condition, repeat( seq( kw("AND"), $.if_condition))),
//        if_condition : $ => seq( alias( $.object_name, "column"), "=", $.constant),
        insert_statement : $ =>
            seq(
                optional( $.begin_batch),
                kw("INSERT"),
                kw("INTO"),
                $.table_name,
                optional( $.insert_column_spec ),
                $.insert_values_spec,
                optional( if_not_exists ),
                optional( $.using_ttl_timestamp )
            ),
        insert_column_spec : $ => seq( "(", $.column_list, ")" ),
        column_list : $ => commaSep1( alias( $.object_name, "column")),
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
                $.expression_list,
                ")",
            ),
        using_ttl_timestamp : $ =>
            seq(
                kw( "USING"),
                choice(
                    seq( ttl, optional( seq(kw("AND"), timestamp))),
                    seq( timestamp, optional( seq(kw("AND"), ttl))),
                )
            ),
        //ttl : $ => seq( kw("TTL"), $._decimal_literal),
        truncate : $ =>
            seq(
                kw("TRUNCATE"),
                optional( kw ("TABLE") ),
                $.table_name,
            ),
        create_index : $ =>
            seq(
                kw( "CREATE"),
                kw("INDEX"),
                optional( if_not_exists ),
                optional( $.short_index_name ),
                kw( "ON"),
                $.table_name,
                "(",
                $.index_column_spec,
                ")",
            ),
        index_column_spec : $ => choice( alias($.object_name, "column"), $.index_keys_spec, $.index_entries_s_spec, $.index_full_spec),
        index_keys_spec : $ => seq( kw("KEYS"), "(", alias( $.object_name, "key"), ")"),
        index_entries_s_spec : $ => seq( kw( "ENTRIES"), "(", alias( $.object_name, "entry"), ")"),
        index_full_spec : $ => seq( kw( "FULL"), "(", alias( $.object_name, "full"), ")"),
        drop_index : $ =>
            seq(
                kw( "DROP"),
                kw("INDEX"),
                optional( if_exists ),
                $.index_name,
        ),
        update : $ =>
            seq (
                optional( $.begin_batch),
                kw( "UPDATE"),
                dotted_name( $.object_name, $.object_name, "table"),
                optional( $.using_ttl_timestamp),
                kw( "SET"),
                commaSep1( $.assignment_element),
                $.where_spec,
                optional( choice( if_exists, $.if_spec))
            ),
        assignment_element : $ =>
            choice(
                seq( $.object_name, "=", choice( $.constant, $.assignment_map, $.assignment_set, $.assignment_list )),
                seq( $.object_name, "=", $.object_name, choice( "+", "-" ), alias($._decimal_literal, "assignment_operand")),
                seq( $.object_name, "=", $.object_name, choice( "+", "-" ), $.assignment_set),
                seq( $.object_name, "=", $.assignment_set, choice( "+", "-" ), alias($.object_name, "assignment_operand")),
                seq( $.object_name, "=", $.object_name, choice( "+", "-" ), $.assignment_map),
                seq( $.object_name, "=", $.assignment_map, choice( "+", "-" ), alias($.object_name, "assignment_operand")),
                seq( $.object_name, "=", $.object_name, choice( "+", "-" ), $.assignment_list),
                seq( $.object_name, "=", $.assignment_list, choice( "+", "-" ), alias($.object_name, "assignment_operand")),
                seq( $.indexed_column, "=", $.constant),
            ),
        indexed_column : $ => seq($.object_name, "[", alias($._decimal_literal,"index"), "]",),

        use : $ => seq( kw("USE"), alias($.object_name, "keyspace")),
        grant : $ =>
            seq(
                seq( kw("GRANT"), $.privilege,),
                seq( kw("ON"), $.resource, ),
                seq( kw("TO"), alias( $.object_name, "role") ),
            ),
        revoke : $ =>
            seq(
                seq( kw("REVOKE"), $.privilege,),
                seq( kw("ON"), $.resource,),
                seq( kw("FROM"), alias( $.object_name, "role"))
            ),
        privilege : $ =>
            choice(
                seq( kw( "ALL"), optional( kw("PERMISSIONS"))),
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
                seq( kw( "ALL"),
                    choice(
                        seq(
                            kw("FUNCTIONS"),
                            optional( seq(
                                kw("IN"),kw("KEYSPACE"), alias( $.object_name, "keyspace") )
                            ),
                        ),
                        kw("KEYSPACES"),
                        kw("ROLES"),
                    ),
                ),
                seq( kw("FUNCTION"), dotted_name( $.object_name, $.object_name, "function" )),
                seq( kw("KEYSPACE"), alias( $.object_name, "keyspace")),
                seq( kw("ROLE"), alias( $.object_name, "role") ),
                seq( optional( kw("TABLE")), dotted_name( $.object_name, $.object_name, "table")),
            ),
        list_roles : $ =>
            seq(
                kw("LIST"),
                kw("ROLES"),
                optional( seq( kw("OF"), alias( $.object_name, "role"))),
                optional( kw( "NORECURSIVE")),
            ),
        list_permissions : $ =>
            seq(
                kw("LIST"),
                $.privilege,
                optional( seq( kw("ON"), $.resource)),
                optional( seq( kw( "OF"), alias( $.object_name, "role")))
            ),
        drop_aggregate : $ =>
            seq(
                kw( "DROP"),
                kw( "AGGREGATE"),
                optional( if_exists ),
                $.aggregate_name,
            ),
        drop_materialized_view : $ =>
            seq(
                kw( "DROP"),
                kw( "MATERIALIZED"),
                kw( "VIEW"),
                optional( if_exists ),
                $.materialized_view_name,
            ),
        drop_function : $ =>
            seq(
                kw( "DROP"),
                kw( "FUNCTION"),
                optional( if_exists ),
                $.function_name,
            ),
        drop_keyspace : $ =>
            seq(
                kw( "DROP"),
                kw( "KEYSPACE"),
                optional( if_exists ),
                $.keyspace_name,
            ),
        drop_role : $ =>
            seq(
                kw( "DROP"),
                kw( "ROLE"),
                optional( if_exists ),
                $.role_name,
            ),
        drop_table : $ =>
            seq(
                kw( "DROP"),
                kw( "TABLE"),
                optional( if_exists ),
                $.table_name
            ),
        drop_trigger : $ =>
            seq(
                kw( "DROP"),
                kw( "TRIGGER"),
                optional( if_exists ),
                $.trigger_name,
                kw( "ON"),
                $.table_name,
            ),

        drop_type : $ =>
            seq(
                kw( "DROP"),
                kw( "TYPE"),
                optional( if_exists ),
                $.type_name,
            ),
        drop_user : $ =>
            seq(
                kw( "DROP"),
                kw("USER"),
                optional( if_exists ),
                $.user_name,
            ),
        create_aggregate : $ =>
            seq(
                kw("CREATE"),
                optional( or_replace ),
                kw("AGGREGATE"),
                optional( if_not_exists ),
                $.aggregate_name,
                "(",
                $.data_type,
                ")",
                kw( "SFUNC"),
                alias( $.object_name, "sfunc"),
                kw( "STYPE"),
                $.data_type,
                kw( "FINALFUNC"),
                alias( $.object_name, "finalfunc"),
                kw("INITCOND"),
                $.init_cond_definition,
            ),
        init_cond_definition : $ =>
            choice(
                $.constant,
                $.init_cond_list,
                $.init_cond_nested_list,
                $.init_cond_hash,
            ),
        init_cond_list : $ => seq( "(", commaSep1( $.constant), ")"),
        init_cond_nested_list : $ =>
            seq(
                "(",
                $.init_cond_list,
                repeat( seq( ",", choice( $.constant, $.init_cond_list))),
                ")"
            ),
        init_cond_hash : $ =>
            seq(
                "(",
                commaSep1( $.init_cond_hash_item  ),
                ")"
            ),
        init_cond_hash_item : $ => seq( alias( $.object_name,"hash_key"), ":", $.init_cond_definition ),
        create_materialized_view : $ =>
            seq(
                kw("CREATE"), kw("MATERIALIZED"), kw("VIEW"),
                optional( if_not_exists),
                $.materialized_view_name,
                kw( "AS"), kw( "SELECT"),
                $.column_list,
                kw( "FROM"),
                $.table_name,
                $.materialized_view_where,
                $.primary_key_element,
                optional( $.with_element ),
            ),
        materialized_view_columns : $ => $.column_list,
        materialized_view_where : $ =>
            seq(
                kw("WHERE"),
                $.column_not_null,
                optional( repeat(seq(kw("AND"), $.column_not_null))),
                optional( repeat(seq( kw("AND"), $.relation_element))),
            ),
        column_not_null_list : $ => prec.left(sep1( $.column_not_null, kw("AND"))),
        column_not_null : $ => seq( $.object_name, kw("IS"), kw("NOT"), kw("NULL")),
        create_function : $ =>
            seq(
                kw("CREATE"),
                optional( or_replace ),
                kw( "FUNCTION"),
                optional( if_not_exists ),
                $.function_name,
                "(",
                optional( commaSep1( $.typed_name ) ),
                ")",
                $.return_mode,
                kw( "RETURNS"),
                $.data_type,
                kw("LANGUAGE"),
                alias( $.object_name, "language"),
                kw( "AS"),
                alias($._code_block,"code_block"),
            ),
        data_type : $ => seq( $.data_type_name, optional($.data_type_definition)),
        data_type_name : $ =>
            choice (
                $.object_name,
                kw( "TIMESTAMP"),
                kw( "SET"),
                kw( "ASCII"),
                kw( "BIGINT"),
                kw( "BLOB"),
                kw( "BOOLEAN"),
                kw( "COUNTER"),
                kw( "DATE"),
                kw( "DECIMAL"),
                kw( "DOUBLE"),
                kw( "FLOAT"),
                kw( "FROZEN"),
                kw( "INET"),
                kw( "INT"),
                kw( "LIST"),
                kw( "MAP"),
                kw( "SMALLINT"),
                kw( "TEXT"),
                kw( "TIME"),
                kw( "TIMEUUID"),
                kw( "TINYINT"),
                kw( "TUPLE"),
                kw( "VARCHAR"),
                kw( "VARINT"),
                kw( "UUID"),
            ),
        data_type_definition : $ => seq( "<", commaSep1( $.data_type_name), ">"),
        return_mode : $ =>
            seq(
                choice(
                    kw("CALLED"),
                    seq(
                        kw( "RETURNS"),
                        kw( "NULL"),
                    ),
                ),
                kw( "ON"),
                kw( "NULL"),
                kw( "INPUT"),
            ),
        create_keyspace : $ =>
            seq(
                kw("CREATE"),
                kw( "KEYSPACE"),
                optional( if_not_exists ),
                $.keyspace_name,
                kw( "WITH"),
                kw( "REPLICATION"),
                "=",
                $.replication_list,
                optional( seq( kw("AND"), $.durable_writes)),
            ),
        replication_list_item : $ =>
            choice(
                seq( alias($._string_literal,"key"), ":", alias( $._string_literal, "value")),
                seq( alias($._string_literal, "key"), ":", alias($._decimal_literal,"value")),
            ),
        durable_writes : $ =>
            seq(
                kw("DURABLE_WRITES"),
                "=",
                alias( $._boolean_literal, "value"),
            ),
        create_role : $ =>
            seq(
                kw("CREATE"),
                kw("ROLE"),
                optional( if_not_exists),
                $.role_name,
                optional( $.role_with ),
            ),
        role_with : $ => seq( kw("WITH"), sep1( $.role_with_option, kw("AND"))),
        role_with_option : $ =>
            choice(
                seq( kw("PASSWORD"), "=", alias($._string_literal, "password")),
                seq( kw("LOGIN"), "=", alias( $._boolean_literal, "login")),
                seq( kw("SUPERUSER"), "=", alias($._boolean_literal, "user")),
                seq( kw("OPTIONS"), "=", $.option_hash),
            ),
        option_hash : $ => seq( "{", commaSep1( $.option_hash_item), "}"),
        option_hash_item : $ => seq( alias($._string_literal,"key"), ":", alias( choice( $._string_literal, $._float_literal), "value"), ),
        create_table : $ =>
            seq(
                kw("CREATE"),
                kw("TABLE"),
                optional( if_not_exists ),
                $.table_name,
                "(",
                $.column_definition_list,
                ")",
                optional( $.with_element),
            ),
        column_definition_list : $ =>
            seq(
                commaSep1( $.column_definition),
                optional( seq( ",", $.primary_key_element)),
            ),
        column_definition : $ => seq( alias($.object_name, "column"), $.data_type, optional( $.primary_key_column)),
        primary_key_column : $ => primary_key,
        primary_key_element : $ =>
            seq(
                primary_key,
                "(",
                $.primary_key_definition,
                ")",
            ),
        primary_key_definition : $ => choice( alias($.object_name, "primary_key"), $.compound_key, $.composite_key ),
        compound_key : $ => seq( alias( $.object_name,"partition_key"), ",", $.clustering_key_list ),
        clustering_key_list : $ => commaSep1( $.object_name ),
        composite_key : $ =>
            seq(
                "(",
                $.partition_key_list,
                ")",
                ",",
                $.clustering_key_list
            ),
        partition_key_list : $ => commaSep1( $.object_name),
        with_element : $ => seq( kw("WITH"),  $.table_options),
        table_options : $ => prec.left(PREC.and,sep1(
            choice(
                $.clustering_order,
                $.compact_storage,
                $.table_option_item,
            ), kw("AND"))),
        table_option_item : $ =>
            choice(
                seq( $.table_option_name, "=", $.table_option_value ),
                seq( $.table_option_name, "=", $.option_hash ),
            ),
        table_option_name : $ => $.object_name,
        table_option_value : $ => choice( $._string_literal, $._float_literal ),
        compact_storage : $ => seq( kw("COMPACT"), kw("STORAGE")),
        clustering_order : $ =>
            seq(
                kw("CLUSTERING"),
                kw( "ORDER"),
                kw( "BY"),
                "(",
                alias( $.object_name, "column" ),
                optional( order_direction ),
                ")",
            ),
        create_trigger : $ =>
            seq(
                kw("CREATE"),
                kw( "TRIGGER"),
                optional( if_not_exists ),
                $.trigger_name,
                kw( "USING"),
                $.trigger_class,
            ),
        trigger_class : $ => $._string_literal,
        create_type : $ =>
            seq(
                kw("CREATE"),
                kw("TYPE"),
                optional( if_not_exists ),
                $.type_name,
                "(",
                commaSep1( $.typed_name ),
                ")",
            ),
        typed_name : $ => seq( alias( $.object_name, "column"), $.data_type),
        create_user : $ =>
            seq(
                kw("CREATE"),
                kw("USER"),
                optional( if_not_exists ),
                $.user_name,
                $.user_with,
            ),
        user_with : $ => seq( kw("WITH"), $.user_password, optional( $.user_super_user)),
        user_password : $ => seq( kw("PASSWORD"), alias( $._string_literal, "password")),
        user_super_user : $ => choice( kw("SUPERUSER"), kw("NOSUPERUSER")),

        alter_materialized_view : $ =>
            seq(
                kw("ALTER"),
                kw( "MATERIALIZED"),
                kw( "VIEW"),
                $.materialized_view_name,
                optional( $.with_element),
            ),
        alter_keyspace : $ =>
            seq(
                kw("ALTER"),
                kw( "KEYSPACE"),
                $.keyspace_name,
                kw("WITH"),
                kw("REPLICATION"),
                "=",
                $.replication_list,
                optional( seq( kw("AND"),$.durable_writes) ),
            ),
        replication_list : $ => seq( "{", commaSep1( $.replication_list_item ), "}" ),
        alter_role : $ =>
            seq(
                kw("ALTER"),
                kw( "ROLE"),
                $.role_name,
                optional( $.role_with ),
            ),
        alter_table : $ =>
            seq(
                kw("ALTER"),
                kw( "TABLE"),
                $.table_name,
                $.alter_table_operation,
            ),
        alter_table_operation : $ =>
            choice(
                $.alter_table_add,
                $.alter_table_drop_columns,
                $.alter_table_drop_compact_storage,
                $.alter_table_rename,
                $.with_element,
            ),
        alter_table_add : $ => seq( kw("ADD"), commaSep1( $.typed_name )),
        alter_table_drop_columns : $ => seq( kw("DROP"), commaSep1( $.object_name  )),
        alter_table_drop_compact_storage : $ => seq( kw("DROP"), kw("COMPACT"), kw("STORAGE") ),
        alter_table_rename : $ => seq( kw("RENAME"), alias( $.object_name, "column"), kw("TO"), alias( $.object_name, "column") ),
        alter_type : $ =>
            seq(
                kw("ALTER"),
                kw( "TYPE"),
                $.type_name,
                $.alter_type_operation,
            ),
        alter_type_operation : $ =>
            choice(
                $.alter_type_alter_type,
                $.alter_type_add,
                $.alter_type_rename,
            ),
        alter_type_alter_type : $ =>
            seq(
                kw("ALTER"),
                alias( $.object_name, "column"),
                kw("TYPE"),
                $.data_type,
            ),
        alter_type_add : $ =>
            seq(
                kw("ADD"),
                commaSep1( $.typed_name ),
            ),
        alter_type_rename : $ => seq( kw("RENAME"), sep1( $.alter_type_rename_item, kw( "AND") )),
        alter_type_rename_item : $ => seq( alias( $.object_name, "column"), kw("TO"), alias( $.object_name, "column") ),
        alter_user : $ =>
            seq(
                kw("ALTER"),
                kw( "USER"),
                $.user_name,
                $.user_with,
            ),
        apply_batch : $ => seq( kw("APPLY"), kw("BATCH")),

        object_name : $ => token( choice( name_chars, seq(squote, name_chars, squote))),

        // names
        aggregate_name : $ => dotted_name( $.object_name, $.object_name, "aggregate"),
        function_name : $ => dotted_name( $.object_name, $.object_name, "function"),
        short_index_name : $ => alias( choice( $.object_name, $._string_literal), "index" ),
        index_name : $ => dotted_name( $.object_name, $.object_name, "index"),
        keyspace_name : $ => alias( $.object_name, "keyspace"),
        materialized_view_name : $ => dotted_name( $.object_name, $.object_name, "materialized_view"),
        role_name : $ => alias( $.object_name, "role"),
        table_name : $ => dotted_name( $.object_name, $.object_name, "table" ),
        trigger_name : $ => dotted_name( $.object_name, $.object_name, "trigger"),
        type_name : $ => dotted_name( $.object_name, $.object_name, "type"),
        user_name : $ => alias( $.object_name, "user"),


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

function commaSep1(rule) {
    return sep1(rule, ",");
}

function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)));
}

function dotted_name(rule1, rule2, name) {
    return choice(
        seq( alias( rule1, "keyspace"),
            ".", alias(rule2, name)),
        alias( rule2, name ),
    )
}