#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 1263
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 340
#define ALIAS_COUNT 0
#define TOKEN_COUNT 151
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 22
#define PRODUCTION_ID_COUNT 18

enum {
  anon_sym_SEMI = 1,
  aux_sym_select_statement_token1 = 2,
  aux_sym_select_statement_token2 = 3,
  aux_sym_select_statement_token3 = 4,
  aux_sym_select_statement_token4 = 5,
  aux_sym_select_statement_token5 = 6,
  aux_sym_limit_spec_token1 = 7,
  anon_sym_STAR = 8,
  anon_sym_COMMA = 9,
  anon_sym_DOT = 10,
  aux_sym_select_element_token1 = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  aux_sym_constant_token1 = 14,
  sym_uuid = 15,
  sym__hex_digit = 16,
  sym_string_literal = 17,
  anon_sym_DASH = 18,
  aux_sym_decimal_literal_token1 = 19,
  anon_sym_X_SQUOTE = 20,
  anon_sym_SQUOTE = 21,
  anon_sym_0X = 22,
  aux_sym_boolean_literal_token1 = 23,
  aux_sym_boolean_literal_token2 = 24,
  anon_sym_DOLLAR_DOLLAR = 25,
  aux_sym_code_block_token1 = 26,
  sym_object_name = 27,
  aux_sym_from_spec_token1 = 28,
  aux_sym_where_spec_token1 = 29,
  aux_sym_relation_elements_token1 = 30,
  anon_sym_LT = 31,
  anon_sym_LT_EQ = 32,
  anon_sym_LT_GT = 33,
  anon_sym_EQ = 34,
  anon_sym_GT = 35,
  anon_sym_GT_EQ = 36,
  aux_sym_relation_element_token1 = 37,
  aux_sym_relation_contains_key_token1 = 38,
  aux_sym_relation_contains_key_token2 = 39,
  aux_sym_order_spec_token1 = 40,
  aux_sym_order_spec_token2 = 41,
  aux_sym_delete_statement_token1 = 42,
  aux_sym_begin_batch_token1 = 43,
  aux_sym_begin_batch_token2 = 44,
  aux_sym_begin_batch_token3 = 45,
  aux_sym_begin_batch_token4 = 46,
  anon_sym_LBRACK = 47,
  anon_sym_RBRACK = 48,
  aux_sym_using_timestamp_spec_token1 = 49,
  aux_sym_timestamp_token1 = 50,
  sym_if_exist = 51,
  aux_sym_if_spec_token1 = 52,
  aux_sym_insert_statement_token1 = 53,
  aux_sym_insert_statement_token2 = 54,
  sym__dquote = 55,
  aux_sym_insert_values_spec_token1 = 56,
  anon_sym_LBRACE = 57,
  anon_sym_COLON = 58,
  anon_sym_RBRACE = 59,
  aux_sym_if_not_exist_token1 = 60,
  aux_sym_if_not_exist_token2 = 61,
  aux_sym_ttl_token1 = 62,
  aux_sym_truncate_token1 = 63,
  aux_sym_truncate_token2 = 64,
  aux_sym_create_index_token1 = 65,
  aux_sym_create_index_token2 = 66,
  aux_sym_create_index_token3 = 67,
  aux_sym_index_keys_spec_token1 = 68,
  aux_sym_index_entries_s_spec_token1 = 69,
  aux_sym_index_full_spec_token1 = 70,
  aux_sym_drop_index_token1 = 71,
  aux_sym_update_token1 = 72,
  aux_sym_update_token2 = 73,
  anon_sym_PLUS = 74,
  aux_sym_use_token1 = 75,
  aux_sym_grant_token1 = 76,
  aux_sym_grant_token2 = 77,
  aux_sym_priviledge_token1 = 78,
  aux_sym_priviledge_token2 = 79,
  aux_sym_priviledge_token3 = 80,
  aux_sym_priviledge_token4 = 81,
  aux_sym_priviledge_token5 = 82,
  aux_sym_priviledge_token6 = 83,
  aux_sym_priviledge_token7 = 84,
  aux_sym_resource_token1 = 85,
  aux_sym_resource_token2 = 86,
  aux_sym_resource_token3 = 87,
  aux_sym_resource_token4 = 88,
  aux_sym_resource_token5 = 89,
  aux_sym_resource_token6 = 90,
  aux_sym_revoke_token1 = 91,
  aux_sym_list_roles_token1 = 92,
  aux_sym_list_roles_token2 = 93,
  aux_sym_list_roles_token3 = 94,
  aux_sym_drop_aggregate_token1 = 95,
  aux_sym_drop_materialized_view_token1 = 96,
  aux_sym_drop_materialized_view_token2 = 97,
  aux_sym_drop_trigger_token1 = 98,
  aux_sym_drop_type_token1 = 99,
  aux_sym_drop_user_token1 = 100,
  aux_sym_create_aggregate_token1 = 101,
  aux_sym_create_aggregate_token2 = 102,
  aux_sym_create_aggregate_token3 = 103,
  aux_sym_create_aggregate_token4 = 104,
  aux_sym_or_replace_token1 = 105,
  aux_sym_or_replace_token2 = 106,
  aux_sym_create_materialized_view_token1 = 107,
  aux_sym_create_materialized_view_token2 = 108,
  aux_sym_column_not_null_token1 = 109,
  aux_sym_create_function_token1 = 110,
  aux_sym_create_function_token2 = 111,
  aux_sym_data_type_name_token1 = 112,
  aux_sym_data_type_name_token2 = 113,
  aux_sym_data_type_name_token3 = 114,
  aux_sym_data_type_name_token4 = 115,
  aux_sym_data_type_name_token5 = 116,
  aux_sym_data_type_name_token6 = 117,
  aux_sym_data_type_name_token7 = 118,
  aux_sym_data_type_name_token8 = 119,
  aux_sym_data_type_name_token9 = 120,
  aux_sym_data_type_name_token10 = 121,
  aux_sym_data_type_name_token11 = 122,
  aux_sym_data_type_name_token12 = 123,
  aux_sym_data_type_name_token13 = 124,
  aux_sym_data_type_name_token14 = 125,
  aux_sym_data_type_name_token15 = 126,
  aux_sym_data_type_name_token16 = 127,
  aux_sym_data_type_name_token17 = 128,
  aux_sym_data_type_name_token18 = 129,
  aux_sym_data_type_name_token19 = 130,
  aux_sym_data_type_name_token20 = 131,
  aux_sym_data_type_name_token21 = 132,
  aux_sym_data_type_name_token22 = 133,
  aux_sym_return_mode_token1 = 134,
  aux_sym_return_mode_token2 = 135,
  aux_sym_create_keyspace_token1 = 136,
  aux_sym_durable_writes_token1 = 137,
  aux_sym_role_with_options_token1 = 138,
  aux_sym_role_with_options_token2 = 139,
  aux_sym_role_with_options_token3 = 140,
  aux_sym_role_with_options_token4 = 141,
  aux_sym_clustering_order_token1 = 142,
  aux_sym_order_direction_token1 = 143,
  aux_sym_order_direction_token2 = 144,
  aux_sym_alter_table_add_token1 = 145,
  aux_sym_alter_table_drop_compact_storage_token1 = 146,
  aux_sym_alter_table_drop_compact_storage_token2 = 147,
  aux_sym_alter_table_rename_token1 = 148,
  aux_sym_user_super_user_token1 = 149,
  aux_sym_apply_batch_token1 = 150,
  sym_source_file = 151,
  sym__statement = 152,
  sym_select_statement = 153,
  sym_limit_spec = 154,
  sym_select_elements = 155,
  sym_select_element = 156,
  sym_function_call = 157,
  sym_function_name = 158,
  sym_function_args = 159,
  sym_constant = 160,
  sym_decimal_literal = 161,
  sym_float_literal = 162,
  sym_hexadecimal_literal = 163,
  sym_boolean_literal = 164,
  sym_code_block = 165,
  sym_from_spec = 166,
  sym_from_spec_element = 167,
  sym_where_spec = 168,
  sym_relation_elements = 169,
  sym_relation_element = 170,
  sym_assignment_tuple = 171,
  sym_relation_contains_key = 172,
  sym_relation_contains = 173,
  sym_order_spec = 174,
  sym_order_spec_element = 175,
  sym_delete_statement = 176,
  sym_begin_batch = 177,
  sym_delete_column_list = 178,
  sym_delete_column_item = 179,
  sym_using_timestamp_spec = 180,
  sym_timestamp = 181,
  sym_if_spec = 182,
  sym_if_condition_list = 183,
  sym_if_condition = 184,
  sym_insert_statement = 185,
  sym_keyspace = 186,
  sym_table = 187,
  sym_insert_column_spec = 188,
  sym_column_list = 189,
  sym_column = 190,
  sym_insert_values_spec = 191,
  sym_expression_list = 192,
  sym_expression = 193,
  sym_assignment_map = 194,
  sym_assignment_set = 195,
  sym_assignment_list = 196,
  sym_if_not_exist = 197,
  sym_using_ttl_timestamp = 198,
  sym_ttl = 199,
  sym_truncate = 200,
  sym_create_index = 201,
  sym_index_name = 202,
  sym_index_column_spec = 203,
  sym_index_keys_spec = 204,
  sym_index_entries_s_spec = 205,
  sym_index_full_spec = 206,
  sym_drop_index = 207,
  sym_update = 208,
  sym_assignment_element = 209,
  sym_use = 210,
  sym_grant = 211,
  sym_priviledge = 212,
  sym_resource = 213,
  sym_role = 214,
  sym_function = 215,
  sym_revoke = 216,
  sym_list_roles = 217,
  sym_list_permissions = 218,
  sym_drop_aggregate = 219,
  sym_drop_materialized_view = 220,
  sym_drop_function = 221,
  sym_drop_keyspace = 222,
  sym_drop_role = 223,
  sym_drop_table = 224,
  sym_drop_trigger = 225,
  sym_drop_type = 226,
  sym_drop_user = 227,
  sym_user = 228,
  sym_create_aggregate = 229,
  sym_or_replace = 230,
  sym_aggregate = 231,
  sym_init_cond_definition = 232,
  sym_init_cond_list = 233,
  sym_init_cond_list_nested = 234,
  sym_init_cond_hash = 235,
  sym_init_cond_hash_item = 236,
  sym_hash_key = 237,
  sym_create_materialized_view = 238,
  sym_materialized_view_where = 239,
  sym_column_not_null_list = 240,
  sym_column_not_null = 241,
  sym_materialized_view_options = 242,
  sym_create_function = 243,
  sym_param = 244,
  sym_data_type = 245,
  sym_data_type_name = 246,
  sym_data_type_definition = 247,
  sym_return_mode = 248,
  sym_language = 249,
  sym_create_keyspace = 250,
  sym_replication_list_item = 251,
  sym_durable_writes = 252,
  sym_create_role = 253,
  sym_role_with = 254,
  sym_role_with_options = 255,
  sym_option_hash = 256,
  sym_option_hash_item = 257,
  sym_create_table = 258,
  sym_column_definition_list = 259,
  sym_column_definition = 260,
  sym_primary_key_column = 261,
  sym_primary_key_element = 262,
  sym_primary_key_definition = 263,
  sym_single_primary_key = 264,
  sym_compound_key = 265,
  sym_partition_key = 266,
  sym_clustering_key_list = 267,
  sym_clustering_key = 268,
  sym_composite_key = 269,
  sym_partition_key_list = 270,
  sym_with_element = 271,
  sym_table_options = 272,
  sym_table_option_item = 273,
  sym_table_option_name = 274,
  sym_table_option_value = 275,
  sym_clustering_order = 276,
  sym_order_direction = 277,
  sym_create_trigger = 278,
  sym_trigger = 279,
  sym_trigger_class = 280,
  sym_create_type = 281,
  sym_type_member_column_list = 282,
  sym_create_user = 283,
  sym_alter_materialized_view = 284,
  sym_materialized_view = 285,
  sym_alter_keyspace = 286,
  sym_replication_list = 287,
  sym_alter_role = 288,
  sym_alter_table = 289,
  sym_alter_table_operation = 290,
  sym_alter_table_add = 291,
  sym_alter_table_column_definition = 292,
  sym_alter_table_drop_columns = 293,
  sym_alter_table_drop_column_list = 294,
  sym_alter_table_drop_compact_storage = 295,
  sym_alter_table_rename = 296,
  sym_alter_table_with = 297,
  sym_alter_type = 298,
  sym_type = 299,
  sym_alter_type_operation = 300,
  sym_alter_type_alter_type = 301,
  sym_alter_type_add = 302,
  sym_alter_type_rename = 303,
  sym_alter_type_rename_list = 304,
  sym_alter_type_rename_item = 305,
  sym_alter_user = 306,
  sym_user_password = 307,
  sym_user_super_user = 308,
  sym_apply_batch = 309,
  sym__dotted_name = 310,
  aux_sym_source_file_repeat1 = 311,
  aux_sym_select_elements_repeat1 = 312,
  aux_sym_function_args_repeat1 = 313,
  aux_sym_hexadecimal_literal_repeat1 = 314,
  aux_sym_hexadecimal_literal_repeat2 = 315,
  aux_sym_relation_elements_repeat1 = 316,
  aux_sym_relation_element_repeat1 = 317,
  aux_sym_relation_element_repeat2 = 318,
  aux_sym_assignment_tuple_repeat1 = 319,
  aux_sym_delete_column_list_repeat1 = 320,
  aux_sym_if_condition_list_repeat1 = 321,
  aux_sym_column_list_repeat1 = 322,
  aux_sym_expression_list_repeat1 = 323,
  aux_sym_assignment_map_repeat1 = 324,
  aux_sym_update_repeat1 = 325,
  aux_sym_init_cond_list_nested_repeat1 = 326,
  aux_sym_init_cond_hash_repeat1 = 327,
  aux_sym_column_not_null_list_repeat1 = 328,
  aux_sym_create_function_repeat1 = 329,
  aux_sym_data_type_definition_repeat1 = 330,
  aux_sym_role_with_repeat1 = 331,
  aux_sym_option_hash_repeat1 = 332,
  aux_sym_column_definition_list_repeat1 = 333,
  aux_sym_clustering_key_list_repeat1 = 334,
  aux_sym_partition_key_list_repeat1 = 335,
  aux_sym_table_options_repeat1 = 336,
  aux_sym_type_member_column_list_repeat1 = 337,
  aux_sym_replication_list_repeat1 = 338,
  aux_sym_alter_type_rename_list_repeat1 = 339,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_select_statement_token1] = "SELECT",
  [aux_sym_select_statement_token2] = "DISTINCT",
  [aux_sym_select_statement_token3] = "JSON",
  [aux_sym_select_statement_token4] = "ALLOW",
  [aux_sym_select_statement_token5] = "FILTERING",
  [aux_sym_limit_spec_token1] = "LIMIT",
  [anon_sym_STAR] = "*",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [aux_sym_select_element_token1] = "AS",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_constant_token1] = "NULL",
  [sym_uuid] = "uuid",
  [sym__hex_digit] = "_hex_digit",
  [sym_string_literal] = "string_literal",
  [anon_sym_DASH] = "-",
  [aux_sym_decimal_literal_token1] = "decimal_literal_token1",
  [anon_sym_X_SQUOTE] = "X'",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_0X] = "0X",
  [aux_sym_boolean_literal_token1] = "TRUE",
  [aux_sym_boolean_literal_token2] = "FALSE",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [aux_sym_code_block_token1] = "code_block_token1",
  [sym_object_name] = "object_name",
  [aux_sym_from_spec_token1] = "FROM",
  [aux_sym_where_spec_token1] = "WHERE",
  [aux_sym_relation_elements_token1] = "AND",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_EQ] = "=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [aux_sym_relation_element_token1] = "IN",
  [aux_sym_relation_contains_key_token1] = "CONTAINS",
  [aux_sym_relation_contains_key_token2] = "KEY",
  [aux_sym_order_spec_token1] = "ORDER",
  [aux_sym_order_spec_token2] = "BY",
  [aux_sym_delete_statement_token1] = "DELETE",
  [aux_sym_begin_batch_token1] = "BEGIN",
  [aux_sym_begin_batch_token2] = "LOGGED",
  [aux_sym_begin_batch_token3] = "UNLOGGED",
  [aux_sym_begin_batch_token4] = "BATCH",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_using_timestamp_spec_token1] = "USING",
  [aux_sym_timestamp_token1] = "TIMESTAMP",
  [sym_if_exist] = "if_exist",
  [aux_sym_if_spec_token1] = "IF",
  [aux_sym_insert_statement_token1] = "INSERT",
  [aux_sym_insert_statement_token2] = "INTO",
  [sym__dquote] = "_dquote",
  [aux_sym_insert_values_spec_token1] = "VALUES",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [aux_sym_if_not_exist_token1] = "NOT",
  [aux_sym_if_not_exist_token2] = "EXISTS",
  [aux_sym_ttl_token1] = "TTL",
  [aux_sym_truncate_token1] = "TRUNCATE",
  [aux_sym_truncate_token2] = "TABLE",
  [aux_sym_create_index_token1] = "CREATE",
  [aux_sym_create_index_token2] = "INDEX",
  [aux_sym_create_index_token3] = "ON",
  [aux_sym_index_keys_spec_token1] = "KEYS",
  [aux_sym_index_entries_s_spec_token1] = "ENTRIES",
  [aux_sym_index_full_spec_token1] = "FULL",
  [aux_sym_drop_index_token1] = "DROP",
  [aux_sym_update_token1] = "UPDATE",
  [aux_sym_update_token2] = "SET",
  [anon_sym_PLUS] = "+",
  [aux_sym_use_token1] = "USE",
  [aux_sym_grant_token1] = "GRANT",
  [aux_sym_grant_token2] = "TO",
  [aux_sym_priviledge_token1] = "ALL",
  [aux_sym_priviledge_token2] = "PERMISSIONS",
  [aux_sym_priviledge_token3] = "ALTER",
  [aux_sym_priviledge_token4] = "AUTHORIZE",
  [aux_sym_priviledge_token5] = "DESCRIBE",
  [aux_sym_priviledge_token6] = "EXECUTE",
  [aux_sym_priviledge_token7] = "MODIFY",
  [aux_sym_resource_token1] = "FUNCTIONS",
  [aux_sym_resource_token2] = "KEYSPACE",
  [aux_sym_resource_token3] = "FUNCTION",
  [aux_sym_resource_token4] = "KEYSPACES",
  [aux_sym_resource_token5] = "ROLES",
  [aux_sym_resource_token6] = "ROLE",
  [aux_sym_revoke_token1] = "REVOKE",
  [aux_sym_list_roles_token1] = "LIST",
  [aux_sym_list_roles_token2] = "OF",
  [aux_sym_list_roles_token3] = "NORECURSIVE",
  [aux_sym_drop_aggregate_token1] = "AGGREGATE",
  [aux_sym_drop_materialized_view_token1] = "MATERIALIZED",
  [aux_sym_drop_materialized_view_token2] = "VIEW",
  [aux_sym_drop_trigger_token1] = "TRIGGER",
  [aux_sym_drop_type_token1] = "TYPE",
  [aux_sym_drop_user_token1] = "USER",
  [aux_sym_create_aggregate_token1] = "SFUNC",
  [aux_sym_create_aggregate_token2] = "STYPE",
  [aux_sym_create_aggregate_token3] = "FINALFUNC",
  [aux_sym_create_aggregate_token4] = "INITCOND",
  [aux_sym_or_replace_token1] = "OR",
  [aux_sym_or_replace_token2] = "REPLACE",
  [aux_sym_create_materialized_view_token1] = "PRIMARY",
  [aux_sym_create_materialized_view_token2] = "WITH",
  [aux_sym_column_not_null_token1] = "IS",
  [aux_sym_create_function_token1] = "RETURNS",
  [aux_sym_create_function_token2] = "LANGUAGE",
  [aux_sym_data_type_name_token1] = "ASCII",
  [aux_sym_data_type_name_token2] = "BIGINT",
  [aux_sym_data_type_name_token3] = "BLOB",
  [aux_sym_data_type_name_token4] = "BOOLEAN",
  [aux_sym_data_type_name_token5] = "COUNTER",
  [aux_sym_data_type_name_token6] = "DATE",
  [aux_sym_data_type_name_token7] = "DECIMAL",
  [aux_sym_data_type_name_token8] = "DOUBLE",
  [aux_sym_data_type_name_token9] = "FLOAT",
  [aux_sym_data_type_name_token10] = "FROZEN",
  [aux_sym_data_type_name_token11] = "INET",
  [aux_sym_data_type_name_token12] = "INT",
  [aux_sym_data_type_name_token13] = "MAP",
  [aux_sym_data_type_name_token14] = "SMALLINT",
  [aux_sym_data_type_name_token15] = "TEXT",
  [aux_sym_data_type_name_token16] = "TIME",
  [aux_sym_data_type_name_token17] = "TIMEUUID",
  [aux_sym_data_type_name_token18] = "TINYINT",
  [aux_sym_data_type_name_token19] = "TUPLE",
  [aux_sym_data_type_name_token20] = "VARCHAR",
  [aux_sym_data_type_name_token21] = "VARINT",
  [aux_sym_data_type_name_token22] = "UUID",
  [aux_sym_return_mode_token1] = "CALLED",
  [aux_sym_return_mode_token2] = "INPUT",
  [aux_sym_create_keyspace_token1] = "REPLICATION",
  [aux_sym_durable_writes_token1] = "DURABLE_WRITES",
  [aux_sym_role_with_options_token1] = "PASSWORD",
  [aux_sym_role_with_options_token2] = "LOGIN",
  [aux_sym_role_with_options_token3] = "SUPERUSER",
  [aux_sym_role_with_options_token4] = "OPTIONS",
  [aux_sym_clustering_order_token1] = "CLUSTERING",
  [aux_sym_order_direction_token1] = "ASC",
  [aux_sym_order_direction_token2] = "DESC",
  [aux_sym_alter_table_add_token1] = "ADD",
  [aux_sym_alter_table_drop_compact_storage_token1] = "COMPACT",
  [aux_sym_alter_table_drop_compact_storage_token2] = "STORAGE",
  [aux_sym_alter_table_rename_token1] = "RENAME",
  [aux_sym_user_super_user_token1] = "NOSUPERUSER",
  [aux_sym_apply_batch_token1] = "APPLY",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_select_statement] = "select_statement",
  [sym_limit_spec] = "limit_spec",
  [sym_select_elements] = "select_elements",
  [sym_select_element] = "select_element",
  [sym_function_call] = "function_call",
  [sym_function_name] = "function_name",
  [sym_function_args] = "function_args",
  [sym_constant] = "constant",
  [sym_decimal_literal] = "decimal_literal",
  [sym_float_literal] = "float_literal",
  [sym_hexadecimal_literal] = "hexadecimal_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_code_block] = "code_block",
  [sym_from_spec] = "from_spec",
  [sym_from_spec_element] = "from_spec_element",
  [sym_where_spec] = "where_spec",
  [sym_relation_elements] = "relation_elements",
  [sym_relation_element] = "relation_element",
  [sym_assignment_tuple] = "assignment_tuple",
  [sym_relation_contains_key] = "relation_contains_key",
  [sym_relation_contains] = "relation_contains",
  [sym_order_spec] = "order_spec",
  [sym_order_spec_element] = "order_spec_element",
  [sym_delete_statement] = "delete_statement",
  [sym_begin_batch] = "begin_batch",
  [sym_delete_column_list] = "delete_column_list",
  [sym_delete_column_item] = "delete_column_item",
  [sym_using_timestamp_spec] = "using_timestamp_spec",
  [sym_timestamp] = "timestamp",
  [sym_if_spec] = "if_spec",
  [sym_if_condition_list] = "if_condition_list",
  [sym_if_condition] = "if_condition",
  [sym_insert_statement] = "insert_statement",
  [sym_keyspace] = "keyspace",
  [sym_table] = "table",
  [sym_insert_column_spec] = "insert_column_spec",
  [sym_column_list] = "column_list",
  [sym_column] = "column",
  [sym_insert_values_spec] = "insert_values_spec",
  [sym_expression_list] = "expression_list",
  [sym_expression] = "expression",
  [sym_assignment_map] = "assignment_map",
  [sym_assignment_set] = "assignment_set",
  [sym_assignment_list] = "assignment_list",
  [sym_if_not_exist] = "if_not_exist",
  [sym_using_ttl_timestamp] = "using_ttl_timestamp",
  [sym_ttl] = "ttl",
  [sym_truncate] = "truncate",
  [sym_create_index] = "create_index",
  [sym_index_name] = "index_name",
  [sym_index_column_spec] = "index_column_spec",
  [sym_index_keys_spec] = "index_keys_spec",
  [sym_index_entries_s_spec] = "index_entries_s_spec",
  [sym_index_full_spec] = "index_full_spec",
  [sym_drop_index] = "drop_index",
  [sym_update] = "update",
  [sym_assignment_element] = "assignment_element",
  [sym_use] = "use",
  [sym_grant] = "grant",
  [sym_priviledge] = "priviledge",
  [sym_resource] = "resource",
  [sym_role] = "role",
  [sym_function] = "function",
  [sym_revoke] = "revoke",
  [sym_list_roles] = "list_roles",
  [sym_list_permissions] = "list_permissions",
  [sym_drop_aggregate] = "drop_aggregate",
  [sym_drop_materialized_view] = "drop_materialized_view",
  [sym_drop_function] = "drop_function",
  [sym_drop_keyspace] = "drop_keyspace",
  [sym_drop_role] = "drop_role",
  [sym_drop_table] = "drop_table",
  [sym_drop_trigger] = "drop_trigger",
  [sym_drop_type] = "drop_type",
  [sym_drop_user] = "drop_user",
  [sym_user] = "user",
  [sym_create_aggregate] = "create_aggregate",
  [sym_or_replace] = "or_replace",
  [sym_aggregate] = "aggregate",
  [sym_init_cond_definition] = "init_cond_definition",
  [sym_init_cond_list] = "init_cond_list",
  [sym_init_cond_list_nested] = "init_cond_list_nested",
  [sym_init_cond_hash] = "init_cond_hash",
  [sym_init_cond_hash_item] = "init_cond_hash_item",
  [sym_hash_key] = "hash_key",
  [sym_create_materialized_view] = "create_materialized_view",
  [sym_materialized_view_where] = "materialized_view_where",
  [sym_column_not_null_list] = "column_not_null_list",
  [sym_column_not_null] = "column_not_null",
  [sym_materialized_view_options] = "materialized_view_options",
  [sym_create_function] = "create_function",
  [sym_param] = "param",
  [sym_data_type] = "data_type",
  [sym_data_type_name] = "data_type_name",
  [sym_data_type_definition] = "data_type_definition",
  [sym_return_mode] = "return_mode",
  [sym_language] = "language",
  [sym_create_keyspace] = "create_keyspace",
  [sym_replication_list_item] = "replication_list_item",
  [sym_durable_writes] = "durable_writes",
  [sym_create_role] = "create_role",
  [sym_role_with] = "role_with",
  [sym_role_with_options] = "role_with_options",
  [sym_option_hash] = "option_hash",
  [sym_option_hash_item] = "option_hash_item",
  [sym_create_table] = "create_table",
  [sym_column_definition_list] = "column_definition_list",
  [sym_column_definition] = "column_definition",
  [sym_primary_key_column] = "primary_key_column",
  [sym_primary_key_element] = "primary_key_element",
  [sym_primary_key_definition] = "primary_key_definition",
  [sym_single_primary_key] = "single_primary_key",
  [sym_compound_key] = "compound_key",
  [sym_partition_key] = "partition_key",
  [sym_clustering_key_list] = "clustering_key_list",
  [sym_clustering_key] = "clustering_key",
  [sym_composite_key] = "composite_key",
  [sym_partition_key_list] = "partition_key_list",
  [sym_with_element] = "with_element",
  [sym_table_options] = "table_options",
  [sym_table_option_item] = "table_option_item",
  [sym_table_option_name] = "table_option_name",
  [sym_table_option_value] = "table_option_value",
  [sym_clustering_order] = "clustering_order",
  [sym_order_direction] = "order_direction",
  [sym_create_trigger] = "create_trigger",
  [sym_trigger] = "trigger",
  [sym_trigger_class] = "trigger_class",
  [sym_create_type] = "create_type",
  [sym_type_member_column_list] = "type_member_column_list",
  [sym_create_user] = "create_user",
  [sym_alter_materialized_view] = "alter_materialized_view",
  [sym_materialized_view] = "materialized_view",
  [sym_alter_keyspace] = "alter_keyspace",
  [sym_replication_list] = "replication_list",
  [sym_alter_role] = "alter_role",
  [sym_alter_table] = "alter_table",
  [sym_alter_table_operation] = "alter_table_operation",
  [sym_alter_table_add] = "alter_table_add",
  [sym_alter_table_column_definition] = "alter_table_column_definition",
  [sym_alter_table_drop_columns] = "alter_table_drop_columns",
  [sym_alter_table_drop_column_list] = "alter_table_drop_column_list",
  [sym_alter_table_drop_compact_storage] = "alter_table_drop_compact_storage",
  [sym_alter_table_rename] = "alter_table_rename",
  [sym_alter_table_with] = "alter_table_with",
  [sym_alter_type] = "alter_type",
  [sym_type] = "type",
  [sym_alter_type_operation] = "alter_type_operation",
  [sym_alter_type_alter_type] = "alter_type_alter_type",
  [sym_alter_type_add] = "alter_type_add",
  [sym_alter_type_rename] = "alter_type_rename",
  [sym_alter_type_rename_list] = "alter_type_rename_list",
  [sym_alter_type_rename_item] = "alter_type_rename_item",
  [sym_alter_user] = "alter_user",
  [sym_user_password] = "user_password",
  [sym_user_super_user] = "user_super_user",
  [sym_apply_batch] = "apply_batch",
  [sym__dotted_name] = "_dotted_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_select_elements_repeat1] = "select_elements_repeat1",
  [aux_sym_function_args_repeat1] = "function_args_repeat1",
  [aux_sym_hexadecimal_literal_repeat1] = "hexadecimal_literal_repeat1",
  [aux_sym_hexadecimal_literal_repeat2] = "hexadecimal_literal_repeat2",
  [aux_sym_relation_elements_repeat1] = "relation_elements_repeat1",
  [aux_sym_relation_element_repeat1] = "relation_element_repeat1",
  [aux_sym_relation_element_repeat2] = "relation_element_repeat2",
  [aux_sym_assignment_tuple_repeat1] = "assignment_tuple_repeat1",
  [aux_sym_delete_column_list_repeat1] = "delete_column_list_repeat1",
  [aux_sym_if_condition_list_repeat1] = "if_condition_list_repeat1",
  [aux_sym_column_list_repeat1] = "column_list_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_assignment_map_repeat1] = "assignment_map_repeat1",
  [aux_sym_update_repeat1] = "update_repeat1",
  [aux_sym_init_cond_list_nested_repeat1] = "init_cond_list_nested_repeat1",
  [aux_sym_init_cond_hash_repeat1] = "init_cond_hash_repeat1",
  [aux_sym_column_not_null_list_repeat1] = "column_not_null_list_repeat1",
  [aux_sym_create_function_repeat1] = "create_function_repeat1",
  [aux_sym_data_type_definition_repeat1] = "data_type_definition_repeat1",
  [aux_sym_role_with_repeat1] = "role_with_repeat1",
  [aux_sym_option_hash_repeat1] = "option_hash_repeat1",
  [aux_sym_column_definition_list_repeat1] = "column_definition_list_repeat1",
  [aux_sym_clustering_key_list_repeat1] = "clustering_key_list_repeat1",
  [aux_sym_partition_key_list_repeat1] = "partition_key_list_repeat1",
  [aux_sym_table_options_repeat1] = "table_options_repeat1",
  [aux_sym_type_member_column_list_repeat1] = "type_member_column_list_repeat1",
  [aux_sym_replication_list_repeat1] = "replication_list_repeat1",
  [aux_sym_alter_type_rename_list_repeat1] = "alter_type_rename_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_select_statement_token1] = aux_sym_select_statement_token1,
  [aux_sym_select_statement_token2] = aux_sym_select_statement_token2,
  [aux_sym_select_statement_token3] = aux_sym_select_statement_token3,
  [aux_sym_select_statement_token4] = aux_sym_select_statement_token4,
  [aux_sym_select_statement_token5] = aux_sym_select_statement_token5,
  [aux_sym_limit_spec_token1] = aux_sym_limit_spec_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_select_element_token1] = aux_sym_select_element_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [sym_uuid] = sym_uuid,
  [sym__hex_digit] = sym__hex_digit,
  [sym_string_literal] = sym_string_literal,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_decimal_literal_token1] = aux_sym_decimal_literal_token1,
  [anon_sym_X_SQUOTE] = anon_sym_X_SQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_0X] = anon_sym_0X,
  [aux_sym_boolean_literal_token1] = aux_sym_boolean_literal_token1,
  [aux_sym_boolean_literal_token2] = aux_sym_boolean_literal_token2,
  [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
  [aux_sym_code_block_token1] = aux_sym_code_block_token1,
  [sym_object_name] = sym_object_name,
  [aux_sym_from_spec_token1] = aux_sym_from_spec_token1,
  [aux_sym_where_spec_token1] = aux_sym_where_spec_token1,
  [aux_sym_relation_elements_token1] = aux_sym_relation_elements_token1,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [aux_sym_relation_element_token1] = aux_sym_relation_element_token1,
  [aux_sym_relation_contains_key_token1] = aux_sym_relation_contains_key_token1,
  [aux_sym_relation_contains_key_token2] = aux_sym_relation_contains_key_token2,
  [aux_sym_order_spec_token1] = aux_sym_order_spec_token1,
  [aux_sym_order_spec_token2] = aux_sym_order_spec_token2,
  [aux_sym_delete_statement_token1] = aux_sym_delete_statement_token1,
  [aux_sym_begin_batch_token1] = aux_sym_begin_batch_token1,
  [aux_sym_begin_batch_token2] = aux_sym_begin_batch_token2,
  [aux_sym_begin_batch_token3] = aux_sym_begin_batch_token3,
  [aux_sym_begin_batch_token4] = aux_sym_begin_batch_token4,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_using_timestamp_spec_token1] = aux_sym_using_timestamp_spec_token1,
  [aux_sym_timestamp_token1] = aux_sym_timestamp_token1,
  [sym_if_exist] = sym_if_exist,
  [aux_sym_if_spec_token1] = aux_sym_if_spec_token1,
  [aux_sym_insert_statement_token1] = aux_sym_insert_statement_token1,
  [aux_sym_insert_statement_token2] = aux_sym_insert_statement_token2,
  [sym__dquote] = sym__dquote,
  [aux_sym_insert_values_spec_token1] = aux_sym_insert_values_spec_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_if_not_exist_token1] = aux_sym_if_not_exist_token1,
  [aux_sym_if_not_exist_token2] = aux_sym_if_not_exist_token2,
  [aux_sym_ttl_token1] = aux_sym_ttl_token1,
  [aux_sym_truncate_token1] = aux_sym_truncate_token1,
  [aux_sym_truncate_token2] = aux_sym_truncate_token2,
  [aux_sym_create_index_token1] = aux_sym_create_index_token1,
  [aux_sym_create_index_token2] = aux_sym_create_index_token2,
  [aux_sym_create_index_token3] = aux_sym_create_index_token3,
  [aux_sym_index_keys_spec_token1] = aux_sym_index_keys_spec_token1,
  [aux_sym_index_entries_s_spec_token1] = aux_sym_index_entries_s_spec_token1,
  [aux_sym_index_full_spec_token1] = aux_sym_index_full_spec_token1,
  [aux_sym_drop_index_token1] = aux_sym_drop_index_token1,
  [aux_sym_update_token1] = aux_sym_update_token1,
  [aux_sym_update_token2] = aux_sym_update_token2,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [aux_sym_use_token1] = aux_sym_use_token1,
  [aux_sym_grant_token1] = aux_sym_grant_token1,
  [aux_sym_grant_token2] = aux_sym_grant_token2,
  [aux_sym_priviledge_token1] = aux_sym_priviledge_token1,
  [aux_sym_priviledge_token2] = aux_sym_priviledge_token2,
  [aux_sym_priviledge_token3] = aux_sym_priviledge_token3,
  [aux_sym_priviledge_token4] = aux_sym_priviledge_token4,
  [aux_sym_priviledge_token5] = aux_sym_priviledge_token5,
  [aux_sym_priviledge_token6] = aux_sym_priviledge_token6,
  [aux_sym_priviledge_token7] = aux_sym_priviledge_token7,
  [aux_sym_resource_token1] = aux_sym_resource_token1,
  [aux_sym_resource_token2] = aux_sym_resource_token2,
  [aux_sym_resource_token3] = aux_sym_resource_token3,
  [aux_sym_resource_token4] = aux_sym_resource_token4,
  [aux_sym_resource_token5] = aux_sym_resource_token5,
  [aux_sym_resource_token6] = aux_sym_resource_token6,
  [aux_sym_revoke_token1] = aux_sym_revoke_token1,
  [aux_sym_list_roles_token1] = aux_sym_list_roles_token1,
  [aux_sym_list_roles_token2] = aux_sym_list_roles_token2,
  [aux_sym_list_roles_token3] = aux_sym_list_roles_token3,
  [aux_sym_drop_aggregate_token1] = aux_sym_drop_aggregate_token1,
  [aux_sym_drop_materialized_view_token1] = aux_sym_drop_materialized_view_token1,
  [aux_sym_drop_materialized_view_token2] = aux_sym_drop_materialized_view_token2,
  [aux_sym_drop_trigger_token1] = aux_sym_drop_trigger_token1,
  [aux_sym_drop_type_token1] = aux_sym_drop_type_token1,
  [aux_sym_drop_user_token1] = aux_sym_drop_user_token1,
  [aux_sym_create_aggregate_token1] = aux_sym_create_aggregate_token1,
  [aux_sym_create_aggregate_token2] = aux_sym_create_aggregate_token2,
  [aux_sym_create_aggregate_token3] = aux_sym_create_aggregate_token3,
  [aux_sym_create_aggregate_token4] = aux_sym_create_aggregate_token4,
  [aux_sym_or_replace_token1] = aux_sym_or_replace_token1,
  [aux_sym_or_replace_token2] = aux_sym_or_replace_token2,
  [aux_sym_create_materialized_view_token1] = aux_sym_create_materialized_view_token1,
  [aux_sym_create_materialized_view_token2] = aux_sym_create_materialized_view_token2,
  [aux_sym_column_not_null_token1] = aux_sym_column_not_null_token1,
  [aux_sym_create_function_token1] = aux_sym_create_function_token1,
  [aux_sym_create_function_token2] = aux_sym_create_function_token2,
  [aux_sym_data_type_name_token1] = aux_sym_data_type_name_token1,
  [aux_sym_data_type_name_token2] = aux_sym_data_type_name_token2,
  [aux_sym_data_type_name_token3] = aux_sym_data_type_name_token3,
  [aux_sym_data_type_name_token4] = aux_sym_data_type_name_token4,
  [aux_sym_data_type_name_token5] = aux_sym_data_type_name_token5,
  [aux_sym_data_type_name_token6] = aux_sym_data_type_name_token6,
  [aux_sym_data_type_name_token7] = aux_sym_data_type_name_token7,
  [aux_sym_data_type_name_token8] = aux_sym_data_type_name_token8,
  [aux_sym_data_type_name_token9] = aux_sym_data_type_name_token9,
  [aux_sym_data_type_name_token10] = aux_sym_data_type_name_token10,
  [aux_sym_data_type_name_token11] = aux_sym_data_type_name_token11,
  [aux_sym_data_type_name_token12] = aux_sym_data_type_name_token12,
  [aux_sym_data_type_name_token13] = aux_sym_data_type_name_token13,
  [aux_sym_data_type_name_token14] = aux_sym_data_type_name_token14,
  [aux_sym_data_type_name_token15] = aux_sym_data_type_name_token15,
  [aux_sym_data_type_name_token16] = aux_sym_data_type_name_token16,
  [aux_sym_data_type_name_token17] = aux_sym_data_type_name_token17,
  [aux_sym_data_type_name_token18] = aux_sym_data_type_name_token18,
  [aux_sym_data_type_name_token19] = aux_sym_data_type_name_token19,
  [aux_sym_data_type_name_token20] = aux_sym_data_type_name_token20,
  [aux_sym_data_type_name_token21] = aux_sym_data_type_name_token21,
  [aux_sym_data_type_name_token22] = aux_sym_data_type_name_token22,
  [aux_sym_return_mode_token1] = aux_sym_return_mode_token1,
  [aux_sym_return_mode_token2] = aux_sym_return_mode_token2,
  [aux_sym_create_keyspace_token1] = aux_sym_create_keyspace_token1,
  [aux_sym_durable_writes_token1] = aux_sym_durable_writes_token1,
  [aux_sym_role_with_options_token1] = aux_sym_role_with_options_token1,
  [aux_sym_role_with_options_token2] = aux_sym_role_with_options_token2,
  [aux_sym_role_with_options_token3] = aux_sym_role_with_options_token3,
  [aux_sym_role_with_options_token4] = aux_sym_role_with_options_token4,
  [aux_sym_clustering_order_token1] = aux_sym_clustering_order_token1,
  [aux_sym_order_direction_token1] = aux_sym_order_direction_token1,
  [aux_sym_order_direction_token2] = aux_sym_order_direction_token2,
  [aux_sym_alter_table_add_token1] = aux_sym_alter_table_add_token1,
  [aux_sym_alter_table_drop_compact_storage_token1] = aux_sym_alter_table_drop_compact_storage_token1,
  [aux_sym_alter_table_drop_compact_storage_token2] = aux_sym_alter_table_drop_compact_storage_token2,
  [aux_sym_alter_table_rename_token1] = aux_sym_alter_table_rename_token1,
  [aux_sym_user_super_user_token1] = aux_sym_user_super_user_token1,
  [aux_sym_apply_batch_token1] = aux_sym_apply_batch_token1,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_select_statement] = sym_select_statement,
  [sym_limit_spec] = sym_limit_spec,
  [sym_select_elements] = sym_select_elements,
  [sym_select_element] = sym_select_element,
  [sym_function_call] = sym_function_call,
  [sym_function_name] = sym_function_name,
  [sym_function_args] = sym_function_args,
  [sym_constant] = sym_constant,
  [sym_decimal_literal] = sym_decimal_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_hexadecimal_literal] = sym_hexadecimal_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_code_block] = sym_code_block,
  [sym_from_spec] = sym_from_spec,
  [sym_from_spec_element] = sym_from_spec_element,
  [sym_where_spec] = sym_where_spec,
  [sym_relation_elements] = sym_relation_elements,
  [sym_relation_element] = sym_relation_element,
  [sym_assignment_tuple] = sym_assignment_tuple,
  [sym_relation_contains_key] = sym_relation_contains_key,
  [sym_relation_contains] = sym_relation_contains,
  [sym_order_spec] = sym_order_spec,
  [sym_order_spec_element] = sym_order_spec_element,
  [sym_delete_statement] = sym_delete_statement,
  [sym_begin_batch] = sym_begin_batch,
  [sym_delete_column_list] = sym_delete_column_list,
  [sym_delete_column_item] = sym_delete_column_item,
  [sym_using_timestamp_spec] = sym_using_timestamp_spec,
  [sym_timestamp] = sym_timestamp,
  [sym_if_spec] = sym_if_spec,
  [sym_if_condition_list] = sym_if_condition_list,
  [sym_if_condition] = sym_if_condition,
  [sym_insert_statement] = sym_insert_statement,
  [sym_keyspace] = sym_keyspace,
  [sym_table] = sym_table,
  [sym_insert_column_spec] = sym_insert_column_spec,
  [sym_column_list] = sym_column_list,
  [sym_column] = sym_column,
  [sym_insert_values_spec] = sym_insert_values_spec,
  [sym_expression_list] = sym_expression_list,
  [sym_expression] = sym_expression,
  [sym_assignment_map] = sym_assignment_map,
  [sym_assignment_set] = sym_assignment_set,
  [sym_assignment_list] = sym_assignment_list,
  [sym_if_not_exist] = sym_if_not_exist,
  [sym_using_ttl_timestamp] = sym_using_ttl_timestamp,
  [sym_ttl] = sym_ttl,
  [sym_truncate] = sym_truncate,
  [sym_create_index] = sym_create_index,
  [sym_index_name] = sym_index_name,
  [sym_index_column_spec] = sym_index_column_spec,
  [sym_index_keys_spec] = sym_index_keys_spec,
  [sym_index_entries_s_spec] = sym_index_entries_s_spec,
  [sym_index_full_spec] = sym_index_full_spec,
  [sym_drop_index] = sym_drop_index,
  [sym_update] = sym_update,
  [sym_assignment_element] = sym_assignment_element,
  [sym_use] = sym_use,
  [sym_grant] = sym_grant,
  [sym_priviledge] = sym_priviledge,
  [sym_resource] = sym_resource,
  [sym_role] = sym_role,
  [sym_function] = sym_function,
  [sym_revoke] = sym_revoke,
  [sym_list_roles] = sym_list_roles,
  [sym_list_permissions] = sym_list_permissions,
  [sym_drop_aggregate] = sym_drop_aggregate,
  [sym_drop_materialized_view] = sym_drop_materialized_view,
  [sym_drop_function] = sym_drop_function,
  [sym_drop_keyspace] = sym_drop_keyspace,
  [sym_drop_role] = sym_drop_role,
  [sym_drop_table] = sym_drop_table,
  [sym_drop_trigger] = sym_drop_trigger,
  [sym_drop_type] = sym_drop_type,
  [sym_drop_user] = sym_drop_user,
  [sym_user] = sym_user,
  [sym_create_aggregate] = sym_create_aggregate,
  [sym_or_replace] = sym_or_replace,
  [sym_aggregate] = sym_aggregate,
  [sym_init_cond_definition] = sym_init_cond_definition,
  [sym_init_cond_list] = sym_init_cond_list,
  [sym_init_cond_list_nested] = sym_init_cond_list_nested,
  [sym_init_cond_hash] = sym_init_cond_hash,
  [sym_init_cond_hash_item] = sym_init_cond_hash_item,
  [sym_hash_key] = sym_hash_key,
  [sym_create_materialized_view] = sym_create_materialized_view,
  [sym_materialized_view_where] = sym_materialized_view_where,
  [sym_column_not_null_list] = sym_column_not_null_list,
  [sym_column_not_null] = sym_column_not_null,
  [sym_materialized_view_options] = sym_materialized_view_options,
  [sym_create_function] = sym_create_function,
  [sym_param] = sym_param,
  [sym_data_type] = sym_data_type,
  [sym_data_type_name] = sym_data_type_name,
  [sym_data_type_definition] = sym_data_type_definition,
  [sym_return_mode] = sym_return_mode,
  [sym_language] = sym_language,
  [sym_create_keyspace] = sym_create_keyspace,
  [sym_replication_list_item] = sym_replication_list_item,
  [sym_durable_writes] = sym_durable_writes,
  [sym_create_role] = sym_create_role,
  [sym_role_with] = sym_role_with,
  [sym_role_with_options] = sym_role_with_options,
  [sym_option_hash] = sym_option_hash,
  [sym_option_hash_item] = sym_option_hash_item,
  [sym_create_table] = sym_create_table,
  [sym_column_definition_list] = sym_column_definition_list,
  [sym_column_definition] = sym_column_definition,
  [sym_primary_key_column] = sym_primary_key_column,
  [sym_primary_key_element] = sym_primary_key_element,
  [sym_primary_key_definition] = sym_primary_key_definition,
  [sym_single_primary_key] = sym_single_primary_key,
  [sym_compound_key] = sym_compound_key,
  [sym_partition_key] = sym_partition_key,
  [sym_clustering_key_list] = sym_clustering_key_list,
  [sym_clustering_key] = sym_clustering_key,
  [sym_composite_key] = sym_composite_key,
  [sym_partition_key_list] = sym_partition_key_list,
  [sym_with_element] = sym_with_element,
  [sym_table_options] = sym_table_options,
  [sym_table_option_item] = sym_table_option_item,
  [sym_table_option_name] = sym_table_option_name,
  [sym_table_option_value] = sym_table_option_value,
  [sym_clustering_order] = sym_clustering_order,
  [sym_order_direction] = sym_order_direction,
  [sym_create_trigger] = sym_create_trigger,
  [sym_trigger] = sym_trigger,
  [sym_trigger_class] = sym_trigger_class,
  [sym_create_type] = sym_create_type,
  [sym_type_member_column_list] = sym_type_member_column_list,
  [sym_create_user] = sym_create_user,
  [sym_alter_materialized_view] = sym_alter_materialized_view,
  [sym_materialized_view] = sym_materialized_view,
  [sym_alter_keyspace] = sym_alter_keyspace,
  [sym_replication_list] = sym_replication_list,
  [sym_alter_role] = sym_alter_role,
  [sym_alter_table] = sym_alter_table,
  [sym_alter_table_operation] = sym_alter_table_operation,
  [sym_alter_table_add] = sym_alter_table_add,
  [sym_alter_table_column_definition] = sym_alter_table_column_definition,
  [sym_alter_table_drop_columns] = sym_alter_table_drop_columns,
  [sym_alter_table_drop_column_list] = sym_alter_table_drop_column_list,
  [sym_alter_table_drop_compact_storage] = sym_alter_table_drop_compact_storage,
  [sym_alter_table_rename] = sym_alter_table_rename,
  [sym_alter_table_with] = sym_alter_table_with,
  [sym_alter_type] = sym_alter_type,
  [sym_type] = sym_type,
  [sym_alter_type_operation] = sym_alter_type_operation,
  [sym_alter_type_alter_type] = sym_alter_type_alter_type,
  [sym_alter_type_add] = sym_alter_type_add,
  [sym_alter_type_rename] = sym_alter_type_rename,
  [sym_alter_type_rename_list] = sym_alter_type_rename_list,
  [sym_alter_type_rename_item] = sym_alter_type_rename_item,
  [sym_alter_user] = sym_alter_user,
  [sym_user_password] = sym_user_password,
  [sym_user_super_user] = sym_user_super_user,
  [sym_apply_batch] = sym_apply_batch,
  [sym__dotted_name] = sym__dotted_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_select_elements_repeat1] = aux_sym_select_elements_repeat1,
  [aux_sym_function_args_repeat1] = aux_sym_function_args_repeat1,
  [aux_sym_hexadecimal_literal_repeat1] = aux_sym_hexadecimal_literal_repeat1,
  [aux_sym_hexadecimal_literal_repeat2] = aux_sym_hexadecimal_literal_repeat2,
  [aux_sym_relation_elements_repeat1] = aux_sym_relation_elements_repeat1,
  [aux_sym_relation_element_repeat1] = aux_sym_relation_element_repeat1,
  [aux_sym_relation_element_repeat2] = aux_sym_relation_element_repeat2,
  [aux_sym_assignment_tuple_repeat1] = aux_sym_assignment_tuple_repeat1,
  [aux_sym_delete_column_list_repeat1] = aux_sym_delete_column_list_repeat1,
  [aux_sym_if_condition_list_repeat1] = aux_sym_if_condition_list_repeat1,
  [aux_sym_column_list_repeat1] = aux_sym_column_list_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_assignment_map_repeat1] = aux_sym_assignment_map_repeat1,
  [aux_sym_update_repeat1] = aux_sym_update_repeat1,
  [aux_sym_init_cond_list_nested_repeat1] = aux_sym_init_cond_list_nested_repeat1,
  [aux_sym_init_cond_hash_repeat1] = aux_sym_init_cond_hash_repeat1,
  [aux_sym_column_not_null_list_repeat1] = aux_sym_column_not_null_list_repeat1,
  [aux_sym_create_function_repeat1] = aux_sym_create_function_repeat1,
  [aux_sym_data_type_definition_repeat1] = aux_sym_data_type_definition_repeat1,
  [aux_sym_role_with_repeat1] = aux_sym_role_with_repeat1,
  [aux_sym_option_hash_repeat1] = aux_sym_option_hash_repeat1,
  [aux_sym_column_definition_list_repeat1] = aux_sym_column_definition_list_repeat1,
  [aux_sym_clustering_key_list_repeat1] = aux_sym_clustering_key_list_repeat1,
  [aux_sym_partition_key_list_repeat1] = aux_sym_partition_key_list_repeat1,
  [aux_sym_table_options_repeat1] = aux_sym_table_options_repeat1,
  [aux_sym_type_member_column_list_repeat1] = aux_sym_type_member_column_list_repeat1,
  [aux_sym_replication_list_repeat1] = aux_sym_replication_list_repeat1,
  [aux_sym_alter_type_rename_list_repeat1] = aux_sym_alter_type_rename_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_statement_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_statement_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_statement_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_limit_spec_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_element_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_constant_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_uuid] = {
    .visible = true,
    .named = true,
  },
  [sym__hex_digit] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_decimal_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_X_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0X] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_boolean_literal_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_boolean_literal_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_code_block_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_object_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_from_spec_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_where_spec_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_relation_elements_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_relation_element_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_relation_contains_key_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_relation_contains_key_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_spec_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_spec_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_delete_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_begin_batch_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_begin_batch_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_begin_batch_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_begin_batch_token4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_timestamp_spec_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_timestamp_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_if_exist] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_if_spec_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_insert_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_insert_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [sym__dquote] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_insert_values_spec_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_if_not_exist_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_if_not_exist_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ttl_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_truncate_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_truncate_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_index_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_index_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_index_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_index_keys_spec_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_index_entries_s_spec_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_index_full_spec_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_drop_index_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_update_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_update_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_use_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grant_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grant_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_priviledge_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_priviledge_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_priviledge_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_priviledge_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_priviledge_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_priviledge_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_priviledge_token7] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_resource_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_resource_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_resource_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_resource_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_resource_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_resource_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_revoke_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_list_roles_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_list_roles_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_list_roles_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_drop_aggregate_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_drop_materialized_view_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_drop_materialized_view_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_drop_trigger_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_drop_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_drop_user_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_aggregate_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_aggregate_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_aggregate_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_aggregate_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_or_replace_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_or_replace_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_materialized_view_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_materialized_view_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_not_null_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_function_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_function_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token7] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token8] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token9] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token10] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token11] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token12] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token13] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token14] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token15] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token16] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token17] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token18] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token19] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token20] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token21] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_type_name_token22] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_return_mode_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_return_mode_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_keyspace_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_durable_writes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_role_with_options_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_role_with_options_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_role_with_options_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_role_with_options_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_clustering_order_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_direction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_direction_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_alter_table_add_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_alter_table_drop_compact_storage_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_alter_table_drop_compact_storage_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_alter_table_rename_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_user_super_user_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_apply_batch_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_select_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_limit_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_select_elements] = {
    .visible = true,
    .named = true,
  },
  [sym_select_element] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_function_args] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_from_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_from_spec_element] = {
    .visible = true,
    .named = true,
  },
  [sym_where_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_elements] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_element] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_contains_key] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_contains] = {
    .visible = true,
    .named = true,
  },
  [sym_order_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_order_spec_element] = {
    .visible = true,
    .named = true,
  },
  [sym_delete_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_batch] = {
    .visible = true,
    .named = true,
  },
  [sym_delete_column_list] = {
    .visible = true,
    .named = true,
  },
  [sym_delete_column_item] = {
    .visible = true,
    .named = true,
  },
  [sym_using_timestamp_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_timestamp] = {
    .visible = true,
    .named = true,
  },
  [sym_if_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_if_condition_list] = {
    .visible = true,
    .named = true,
  },
  [sym_if_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_insert_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyspace] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_insert_column_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_column_list] = {
    .visible = true,
    .named = true,
  },
  [sym_column] = {
    .visible = true,
    .named = true,
  },
  [sym_insert_values_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_map] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_set] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_list] = {
    .visible = true,
    .named = true,
  },
  [sym_if_not_exist] = {
    .visible = true,
    .named = true,
  },
  [sym_using_ttl_timestamp] = {
    .visible = true,
    .named = true,
  },
  [sym_ttl] = {
    .visible = true,
    .named = true,
  },
  [sym_truncate] = {
    .visible = true,
    .named = true,
  },
  [sym_create_index] = {
    .visible = true,
    .named = true,
  },
  [sym_index_name] = {
    .visible = true,
    .named = true,
  },
  [sym_index_column_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_index_keys_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_index_entries_s_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_index_full_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_drop_index] = {
    .visible = true,
    .named = true,
  },
  [sym_update] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_element] = {
    .visible = true,
    .named = true,
  },
  [sym_use] = {
    .visible = true,
    .named = true,
  },
  [sym_grant] = {
    .visible = true,
    .named = true,
  },
  [sym_priviledge] = {
    .visible = true,
    .named = true,
  },
  [sym_resource] = {
    .visible = true,
    .named = true,
  },
  [sym_role] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_revoke] = {
    .visible = true,
    .named = true,
  },
  [sym_list_roles] = {
    .visible = true,
    .named = true,
  },
  [sym_list_permissions] = {
    .visible = true,
    .named = true,
  },
  [sym_drop_aggregate] = {
    .visible = true,
    .named = true,
  },
  [sym_drop_materialized_view] = {
    .visible = true,
    .named = true,
  },
  [sym_drop_function] = {
    .visible = true,
    .named = true,
  },
  [sym_drop_keyspace] = {
    .visible = true,
    .named = true,
  },
  [sym_drop_role] = {
    .visible = true,
    .named = true,
  },
  [sym_drop_table] = {
    .visible = true,
    .named = true,
  },
  [sym_drop_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_drop_type] = {
    .visible = true,
    .named = true,
  },
  [sym_drop_user] = {
    .visible = true,
    .named = true,
  },
  [sym_user] = {
    .visible = true,
    .named = true,
  },
  [sym_create_aggregate] = {
    .visible = true,
    .named = true,
  },
  [sym_or_replace] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregate] = {
    .visible = true,
    .named = true,
  },
  [sym_init_cond_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_init_cond_list] = {
    .visible = true,
    .named = true,
  },
  [sym_init_cond_list_nested] = {
    .visible = true,
    .named = true,
  },
  [sym_init_cond_hash] = {
    .visible = true,
    .named = true,
  },
  [sym_init_cond_hash_item] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_key] = {
    .visible = true,
    .named = true,
  },
  [sym_create_materialized_view] = {
    .visible = true,
    .named = true,
  },
  [sym_materialized_view_where] = {
    .visible = true,
    .named = true,
  },
  [sym_column_not_null_list] = {
    .visible = true,
    .named = true,
  },
  [sym_column_not_null] = {
    .visible = true,
    .named = true,
  },
  [sym_materialized_view_options] = {
    .visible = true,
    .named = true,
  },
  [sym_create_function] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_data_type] = {
    .visible = true,
    .named = true,
  },
  [sym_data_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_data_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_return_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_language] = {
    .visible = true,
    .named = true,
  },
  [sym_create_keyspace] = {
    .visible = true,
    .named = true,
  },
  [sym_replication_list_item] = {
    .visible = true,
    .named = true,
  },
  [sym_durable_writes] = {
    .visible = true,
    .named = true,
  },
  [sym_create_role] = {
    .visible = true,
    .named = true,
  },
  [sym_role_with] = {
    .visible = true,
    .named = true,
  },
  [sym_role_with_options] = {
    .visible = true,
    .named = true,
  },
  [sym_option_hash] = {
    .visible = true,
    .named = true,
  },
  [sym_option_hash_item] = {
    .visible = true,
    .named = true,
  },
  [sym_create_table] = {
    .visible = true,
    .named = true,
  },
  [sym_column_definition_list] = {
    .visible = true,
    .named = true,
  },
  [sym_column_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_key_column] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_key_element] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_key_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_single_primary_key] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_key] = {
    .visible = true,
    .named = true,
  },
  [sym_partition_key] = {
    .visible = true,
    .named = true,
  },
  [sym_clustering_key_list] = {
    .visible = true,
    .named = true,
  },
  [sym_clustering_key] = {
    .visible = true,
    .named = true,
  },
  [sym_composite_key] = {
    .visible = true,
    .named = true,
  },
  [sym_partition_key_list] = {
    .visible = true,
    .named = true,
  },
  [sym_with_element] = {
    .visible = true,
    .named = true,
  },
  [sym_table_options] = {
    .visible = true,
    .named = true,
  },
  [sym_table_option_item] = {
    .visible = true,
    .named = true,
  },
  [sym_table_option_name] = {
    .visible = true,
    .named = true,
  },
  [sym_table_option_value] = {
    .visible = true,
    .named = true,
  },
  [sym_clustering_order] = {
    .visible = true,
    .named = true,
  },
  [sym_order_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_create_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_trigger_class] = {
    .visible = true,
    .named = true,
  },
  [sym_create_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_member_column_list] = {
    .visible = true,
    .named = true,
  },
  [sym_create_user] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_materialized_view] = {
    .visible = true,
    .named = true,
  },
  [sym_materialized_view] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_keyspace] = {
    .visible = true,
    .named = true,
  },
  [sym_replication_list] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_role] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_table] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_table_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_table_add] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_table_column_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_table_drop_columns] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_table_drop_column_list] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_table_drop_compact_storage] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_table_rename] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_table_with] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_type_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_type_alter_type] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_type_add] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_type_rename] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_type_rename_list] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_type_rename_item] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_user] = {
    .visible = true,
    .named = true,
  },
  [sym_user_password] = {
    .visible = true,
    .named = true,
  },
  [sym_user_super_user] = {
    .visible = true,
    .named = true,
  },
  [sym_apply_batch] = {
    .visible = true,
    .named = true,
  },
  [sym__dotted_name] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_elements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hexadecimal_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hexadecimal_literal_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relation_elements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relation_element_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relation_element_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignment_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_delete_column_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_condition_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_column_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignment_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_update_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_init_cond_list_nested_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_init_cond_hash_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_column_not_null_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_type_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_role_with_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_option_hash_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_column_definition_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_clustering_key_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_partition_key_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_member_column_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_replication_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alter_type_rename_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_code_block = 1,
  field_column = 2,
  field_content = 3,
  field_function = 4,
  field_keyspace = 5,
  field_language = 6,
  field_operator = 7,
  field_option = 8,
  field_param_name = 9,
  field_role = 10,
  field_table = 11,
  field_trigger = 12,
  field_user = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_code_block] = "code_block",
  [field_column] = "column",
  [field_content] = "content",
  [field_function] = "function",
  [field_keyspace] = "keyspace",
  [field_language] = "language",
  [field_operator] = "operator",
  [field_option] = "option",
  [field_param_name] = "param_name",
  [field_role] = "role",
  [field_table] = "table",
  [field_trigger] = "trigger",
  [field_user] = "user",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 3},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 3},
  [12] = {.index = 17, .length = 1},
  [13] = {.index = 18, .length = 1},
  [14] = {.index = 19, .length = 3},
  [15] = {.index = 22, .length = 1},
  [16] = {.index = 23, .length = 1},
  [17] = {.index = 24, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_keyspace, 0},
  [1] =
    {field_table, 0},
  [2] =
    {field_function, 0},
  [3] =
    {field_role, 0},
  [4] =
    {field_trigger, 0},
  [5] =
    {field_user, 0},
  [6] =
    {field_keyspace, 0},
    {field_keyspace, 1},
    {field_keyspace, 2},
  [9] =
    {field_table, 0},
    {field_table, 1},
    {field_table, 2},
  [12] =
    {field_column, 0},
  [13] =
    {field_option, 0},
  [14] =
    {field_code_block, 0},
    {field_code_block, 2},
    {field_content, 1},
  [17] =
    {field_operator, 1},
  [18] =
    {field_param_name, 0},
  [19] =
    {field_column, 0},
    {field_column, 1},
    {field_column, 2},
  [22] =
    {field_operator, 3},
  [23] =
    {field_operator, 4},
  [24] =
    {field_language, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 41,
  [56] = 56,
  [57] = 16,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 72,
  [86] = 86,
  [87] = 74,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 74,
  [96] = 96,
  [97] = 97,
  [98] = 72,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 103,
  [110] = 110,
  [111] = 6,
  [112] = 5,
  [113] = 7,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 106,
  [121] = 79,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 8,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 10,
  [150] = 9,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 133,
  [156] = 156,
  [157] = 157,
  [158] = 133,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 11,
  [165] = 12,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 162,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 131,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 234,
  [250] = 250,
  [251] = 234,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 300,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 300,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 307,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 307,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 423,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 72,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 423,
  [437] = 437,
  [438] = 74,
  [439] = 439,
  [440] = 440,
  [441] = 439,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 443,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 461,
  [470] = 468,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 461,
  [476] = 476,
  [477] = 477,
  [478] = 468,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 225,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 651,
  [671] = 654,
  [672] = 636,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 692,
  [693] = 693,
  [694] = 694,
  [695] = 695,
  [696] = 696,
  [697] = 697,
  [698] = 632,
  [699] = 142,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 735,
  [736] = 736,
  [737] = 737,
  [738] = 738,
  [739] = 739,
  [740] = 740,
  [741] = 741,
  [742] = 742,
  [743] = 743,
  [744] = 744,
  [745] = 745,
  [746] = 746,
  [747] = 747,
  [748] = 748,
  [749] = 749,
  [750] = 750,
  [751] = 751,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 757,
  [758] = 758,
  [759] = 759,
  [760] = 760,
  [761] = 761,
  [762] = 762,
  [763] = 763,
  [764] = 764,
  [765] = 765,
  [766] = 766,
  [767] = 767,
  [768] = 768,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 775,
  [776] = 776,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 780,
  [781] = 781,
  [782] = 782,
  [783] = 783,
  [784] = 784,
  [785] = 785,
  [786] = 786,
  [787] = 787,
  [788] = 788,
  [789] = 789,
  [790] = 790,
  [791] = 791,
  [792] = 792,
  [793] = 793,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 797,
  [798] = 798,
  [799] = 799,
  [800] = 800,
  [801] = 801,
  [802] = 802,
  [803] = 803,
  [804] = 804,
  [805] = 805,
  [806] = 806,
  [807] = 807,
  [808] = 808,
  [809] = 809,
  [810] = 810,
  [811] = 811,
  [812] = 812,
  [813] = 813,
  [814] = 814,
  [815] = 815,
  [816] = 816,
  [817] = 817,
  [818] = 818,
  [819] = 819,
  [820] = 820,
  [821] = 821,
  [822] = 822,
  [823] = 823,
  [824] = 824,
  [825] = 825,
  [826] = 826,
  [827] = 827,
  [828] = 828,
  [829] = 829,
  [830] = 830,
  [831] = 831,
  [832] = 832,
  [833] = 833,
  [834] = 834,
  [835] = 835,
  [836] = 836,
  [837] = 837,
  [838] = 838,
  [839] = 839,
  [840] = 840,
  [841] = 225,
  [842] = 842,
  [843] = 843,
  [844] = 844,
  [845] = 845,
  [846] = 846,
  [847] = 847,
  [848] = 848,
  [849] = 849,
  [850] = 850,
  [851] = 851,
  [852] = 852,
  [853] = 853,
  [854] = 854,
  [855] = 855,
  [856] = 856,
  [857] = 857,
  [858] = 858,
  [859] = 859,
  [860] = 860,
  [861] = 861,
  [862] = 862,
  [863] = 863,
  [864] = 864,
  [865] = 865,
  [866] = 866,
  [867] = 867,
  [868] = 868,
  [869] = 869,
  [870] = 870,
  [871] = 871,
  [872] = 872,
  [873] = 873,
  [874] = 874,
  [875] = 875,
  [876] = 876,
  [877] = 877,
  [878] = 878,
  [879] = 879,
  [880] = 880,
  [881] = 881,
  [882] = 882,
  [883] = 883,
  [884] = 884,
  [885] = 885,
  [886] = 886,
  [887] = 887,
  [888] = 788,
  [889] = 889,
  [890] = 890,
  [891] = 891,
  [892] = 892,
  [893] = 893,
  [894] = 894,
  [895] = 895,
  [896] = 896,
  [897] = 897,
  [898] = 898,
  [899] = 899,
  [900] = 900,
  [901] = 901,
  [902] = 902,
  [903] = 903,
  [904] = 904,
  [905] = 905,
  [906] = 906,
  [907] = 907,
  [908] = 908,
  [909] = 909,
  [910] = 910,
  [911] = 911,
  [912] = 912,
  [913] = 913,
  [914] = 914,
  [915] = 915,
  [916] = 788,
  [917] = 917,
  [918] = 918,
  [919] = 919,
  [920] = 920,
  [921] = 921,
  [922] = 922,
  [923] = 923,
  [924] = 924,
  [925] = 925,
  [926] = 788,
  [927] = 927,
  [928] = 928,
  [929] = 784,
  [930] = 930,
  [931] = 931,
  [932] = 932,
  [933] = 933,
  [934] = 934,
  [935] = 935,
  [936] = 936,
  [937] = 937,
  [938] = 938,
  [939] = 939,
  [940] = 940,
  [941] = 941,
  [942] = 942,
  [943] = 943,
  [944] = 944,
  [945] = 945,
  [946] = 946,
  [947] = 947,
  [948] = 948,
  [949] = 949,
  [950] = 950,
  [951] = 951,
  [952] = 952,
  [953] = 953,
  [954] = 954,
  [955] = 955,
  [956] = 956,
  [957] = 957,
  [958] = 958,
  [959] = 959,
  [960] = 960,
  [961] = 961,
  [962] = 962,
  [963] = 963,
  [964] = 964,
  [965] = 965,
  [966] = 966,
  [967] = 967,
  [968] = 968,
  [969] = 969,
  [970] = 970,
  [971] = 971,
  [972] = 972,
  [973] = 973,
  [974] = 974,
  [975] = 975,
  [976] = 976,
  [977] = 977,
  [978] = 978,
  [979] = 979,
  [980] = 980,
  [981] = 981,
  [982] = 982,
  [983] = 983,
  [984] = 984,
  [985] = 985,
  [986] = 986,
  [987] = 987,
  [988] = 988,
  [989] = 989,
  [990] = 990,
  [991] = 991,
  [992] = 992,
  [993] = 993,
  [994] = 994,
  [995] = 995,
  [996] = 996,
  [997] = 997,
  [998] = 998,
  [999] = 999,
  [1000] = 1000,
  [1001] = 1001,
  [1002] = 1002,
  [1003] = 1003,
  [1004] = 1004,
  [1005] = 1005,
  [1006] = 1006,
  [1007] = 1007,
  [1008] = 1008,
  [1009] = 1009,
  [1010] = 1010,
  [1011] = 1011,
  [1012] = 1012,
  [1013] = 1013,
  [1014] = 1014,
  [1015] = 1015,
  [1016] = 1016,
  [1017] = 1017,
  [1018] = 1018,
  [1019] = 1019,
  [1020] = 1020,
  [1021] = 1021,
  [1022] = 1022,
  [1023] = 1023,
  [1024] = 1024,
  [1025] = 1025,
  [1026] = 1026,
  [1027] = 1027,
  [1028] = 1028,
  [1029] = 1029,
  [1030] = 1030,
  [1031] = 1031,
  [1032] = 1032,
  [1033] = 1033,
  [1034] = 1034,
  [1035] = 1035,
  [1036] = 1036,
  [1037] = 1037,
  [1038] = 1038,
  [1039] = 1039,
  [1040] = 1040,
  [1041] = 1041,
  [1042] = 1042,
  [1043] = 1043,
  [1044] = 1044,
  [1045] = 1045,
  [1046] = 1046,
  [1047] = 1047,
  [1048] = 1048,
  [1049] = 1049,
  [1050] = 1050,
  [1051] = 1051,
  [1052] = 1052,
  [1053] = 1053,
  [1054] = 1054,
  [1055] = 1055,
  [1056] = 1056,
  [1057] = 1057,
  [1058] = 1058,
  [1059] = 1059,
  [1060] = 1060,
  [1061] = 1061,
  [1062] = 1062,
  [1063] = 1063,
  [1064] = 1064,
  [1065] = 1065,
  [1066] = 1066,
  [1067] = 1067,
  [1068] = 1068,
  [1069] = 1069,
  [1070] = 1070,
  [1071] = 1071,
  [1072] = 1072,
  [1073] = 1073,
  [1074] = 1074,
  [1075] = 1075,
  [1076] = 1076,
  [1077] = 1077,
  [1078] = 1078,
  [1079] = 1079,
  [1080] = 1080,
  [1081] = 1081,
  [1082] = 1082,
  [1083] = 1083,
  [1084] = 1084,
  [1085] = 1085,
  [1086] = 1086,
  [1087] = 1087,
  [1088] = 1088,
  [1089] = 1089,
  [1090] = 1090,
  [1091] = 1091,
  [1092] = 1092,
  [1093] = 1093,
  [1094] = 1094,
  [1095] = 1095,
  [1096] = 1096,
  [1097] = 1097,
  [1098] = 1098,
  [1099] = 1099,
  [1100] = 1100,
  [1101] = 1101,
  [1102] = 1102,
  [1103] = 1103,
  [1104] = 1104,
  [1105] = 1105,
  [1106] = 1106,
  [1107] = 1107,
  [1108] = 1108,
  [1109] = 1109,
  [1110] = 1110,
  [1111] = 1111,
  [1112] = 1112,
  [1113] = 1113,
  [1114] = 1114,
  [1115] = 1115,
  [1116] = 1116,
  [1117] = 1117,
  [1118] = 1118,
  [1119] = 1119,
  [1120] = 1120,
  [1121] = 1121,
  [1122] = 1122,
  [1123] = 1123,
  [1124] = 1124,
  [1125] = 1125,
  [1126] = 1126,
  [1127] = 1127,
  [1128] = 1128,
  [1129] = 1129,
  [1130] = 1130,
  [1131] = 1131,
  [1132] = 1132,
  [1133] = 1133,
  [1134] = 1134,
  [1135] = 1135,
  [1136] = 1136,
  [1137] = 1137,
  [1138] = 1138,
  [1139] = 1139,
  [1140] = 1140,
  [1141] = 1141,
  [1142] = 1142,
  [1143] = 1143,
  [1144] = 1144,
  [1145] = 1145,
  [1146] = 1146,
  [1147] = 1147,
  [1148] = 1148,
  [1149] = 1149,
  [1150] = 1150,
  [1151] = 1151,
  [1152] = 1152,
  [1153] = 1153,
  [1154] = 1154,
  [1155] = 1155,
  [1156] = 1156,
  [1157] = 1157,
  [1158] = 1158,
  [1159] = 1159,
  [1160] = 1160,
  [1161] = 1161,
  [1162] = 1162,
  [1163] = 1163,
  [1164] = 1164,
  [1165] = 1165,
  [1166] = 1166,
  [1167] = 1167,
  [1168] = 1168,
  [1169] = 1169,
  [1170] = 1170,
  [1171] = 1171,
  [1172] = 1172,
  [1173] = 1173,
  [1174] = 1174,
  [1175] = 1175,
  [1176] = 1176,
  [1177] = 1177,
  [1178] = 1178,
  [1179] = 1179,
  [1180] = 1180,
  [1181] = 1181,
  [1182] = 1182,
  [1183] = 1183,
  [1184] = 1184,
  [1185] = 1185,
  [1186] = 1186,
  [1187] = 1187,
  [1188] = 1188,
  [1189] = 1189,
  [1190] = 1190,
  [1191] = 1191,
  [1192] = 1192,
  [1193] = 1193,
  [1194] = 1194,
  [1195] = 1195,
  [1196] = 1196,
  [1197] = 1197,
  [1198] = 1198,
  [1199] = 1199,
  [1200] = 1200,
  [1201] = 1201,
  [1202] = 1202,
  [1203] = 1203,
  [1204] = 1204,
  [1205] = 1205,
  [1206] = 1206,
  [1207] = 1207,
  [1208] = 1208,
  [1209] = 1209,
  [1210] = 1210,
  [1211] = 1211,
  [1212] = 1212,
  [1213] = 1213,
  [1214] = 1214,
  [1215] = 1215,
  [1216] = 1216,
  [1217] = 1217,
  [1218] = 1218,
  [1219] = 1219,
  [1220] = 1220,
  [1221] = 1221,
  [1222] = 1222,
  [1223] = 1223,
  [1224] = 1224,
  [1225] = 1225,
  [1226] = 1226,
  [1227] = 1227,
  [1228] = 1228,
  [1229] = 1229,
  [1230] = 1230,
  [1231] = 1231,
  [1232] = 1089,
  [1233] = 1233,
  [1234] = 1234,
  [1235] = 1235,
  [1236] = 1236,
  [1237] = 1022,
  [1238] = 1238,
  [1239] = 986,
  [1240] = 1001,
  [1241] = 1241,
  [1242] = 1242,
  [1243] = 1243,
  [1244] = 1244,
  [1245] = 1206,
  [1246] = 1246,
  [1247] = 1247,
  [1248] = 1248,
  [1249] = 1249,
  [1250] = 1250,
  [1251] = 1251,
  [1252] = 1252,
  [1253] = 1253,
  [1254] = 1022,
  [1255] = 1255,
  [1256] = 1256,
  [1257] = 1199,
  [1258] = 1258,
  [1259] = 1078,
  [1260] = 1260,
  [1261] = 1121,
  [1262] = 1199,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(513);
      if (lookahead == '"') ADVANCE(771);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == '(') ADVANCE(527);
      if (lookahead == ')') ADVANCE(528);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == '+') ADVANCE(789);
      if (lookahead == ',') ADVANCE(524);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == '.') ADVANCE(525);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(774);
      if (lookahead == ';') ADVANCE(514);
      if (lookahead == '<') ADVANCE(744);
      if (lookahead == '=') ADVANCE(747);
      if (lookahead == '>') ADVANCE(748);
      if (lookahead == 'X') ADVANCE(8);
      if (lookahead == '[') ADVANCE(762);
      if (lookahead == ']') ADVANCE(763);
      if (lookahead == '{') ADVANCE(773);
      if (lookahead == '}') ADVANCE(775);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(537);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(535);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(540);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(536);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(539);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(382);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(93);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(21);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(23);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(300);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(30);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(94);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(129);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(276);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(26);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9') ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(532);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(771);
      if (lookahead == '\'') ADVANCE(505);
      if (lookahead == '(') ADVANCE(527);
      if (lookahead == ')') ADVANCE(528);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == ',') ADVANCE(524);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(641);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(625);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(645);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(567);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(647);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(617);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(597);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(626);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(569);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(690);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(676);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(602);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(570);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(721);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(771);
      if (lookahead == '\'') ADVANCE(505);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(669);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(723);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(619);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(613);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(771);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(619);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(663);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(527);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == '0') ADVANCE(544);
      if (lookahead == 'X') ADVANCE(564);
      if (lookahead == '[') ADVANCE(762);
      if (lookahead == '{') ADVANCE(773);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(571);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(725);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(693);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(739);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(560);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(561);
      if (lookahead != 0) ADVANCE(562);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == '(') ADVANCE(527);
      if (lookahead == ')') ADVANCE(528);
      if (lookahead == ',') ADVANCE(524);
      if (lookahead == ':') ADVANCE(774);
      if (lookahead == ']') ADVANCE(763);
      if (lookahead == '}') ADVANCE(775);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(337);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(532);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(553);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(541);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(505);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(637);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(702);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(505);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(702);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(563);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(618);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(663);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(486);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(492);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(498);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(504);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(457);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(264);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(264);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(323);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(459);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(792);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(333);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(331);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(57);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(331);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(309);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(488);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(347);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(156);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(451);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(291);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(164);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(54);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(345);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(316);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(347);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(156);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(305);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(320);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(384);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(67);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(445);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(260);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(309);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(286);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(418);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(756);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(427);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(419);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 56:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(126);
      END_STATE();
    case 57:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(252);
      END_STATE();
    case 58:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(256);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(816);
      END_STATE();
    case 60:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(818);
      END_STATE();
    case 61:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(849);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(850);
      END_STATE();
    case 63:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(199);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 64:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(195);
      END_STATE();
    case 65:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 66:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(439);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(311);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(361);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(434);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(743);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(839);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(759);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(819);
      END_STATE();
    case 81:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(844);
      END_STATE();
    case 82:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(834);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(760);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(811);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(851);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(840);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 89:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 90:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(85);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(328);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(526);
      END_STATE();
    case 91:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(357);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(790);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(790);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(833);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(556);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(780);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(836);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(742);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(781);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(853);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(806);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(787);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(798);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(852);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(801);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(827);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(809);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(488);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(488);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(797);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(796);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(437);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(43);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(330);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(470);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 165:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(768);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(750);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(825);
      END_STATE();
    case 166:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(768);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 167:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(768);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 168:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(808);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(783);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(417);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(821);
      END_STATE();
    case 169:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(808);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 170:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(767);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(751);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(825);
      END_STATE();
    case 171:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(767);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 172:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(465);
      END_STATE();
    case 173:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(446);
      END_STATE();
    case 174:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(185);
      END_STATE();
    case 175:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(764);
      END_STATE();
    case 176:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(521);
      END_STATE();
    case 177:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(848);
      END_STATE();
    case 178:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(211);
      END_STATE();
    case 179:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(482);
      END_STATE();
    case 180:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(186);
      END_STATE();
    case 181:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(449);
      END_STATE();
    case 182:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(190);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(328);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(488);
      END_STATE();
    case 183:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(190);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(234);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(416);
      END_STATE();
    case 184:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 185:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(137);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 186:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 187:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 188:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(145);
      END_STATE();
    case 189:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 190:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(363);
      END_STATE();
    case 191:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(188);
      END_STATE();
    case 192:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(184);
      END_STATE();
    case 193:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 194:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(824);
      END_STATE();
    case 195:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(761);
      END_STATE();
    case 196:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(135);
      END_STATE();
    case 197:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(400);
      END_STATE();
    case 198:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(321);
      END_STATE();
    case 199:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 200:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 201:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 202:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(472);
      END_STATE();
    case 203:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(453);
      END_STATE();
    case 204:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 205:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 206:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 207:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 208:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 209:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 210:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(412);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(441);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(303);
      END_STATE();
    case 211:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 212:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 213:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 214:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 215:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 216:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(473);
      END_STATE();
    case 217:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 218:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 219:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(386);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(428);
      END_STATE();
    case 231:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(111);
      END_STATE();
    case 232:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(778);
      END_STATE();
    case 233:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(529);
      END_STATE();
    case 234:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(793);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 235:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 236:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 237:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(234);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(416);
      END_STATE();
    case 238:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 239:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(464);
      END_STATE();
    case 240:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 241:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(442);
      END_STATE();
    case 242:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(442);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 243:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 244:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(482);
      END_STATE();
    case 245:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 246:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 247:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(445);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(298);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(488);
      END_STATE();
    case 248:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 249:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 250:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 251:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(134);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(788);
      END_STATE();
    case 252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(482);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(430);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 262:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(741);
      END_STATE();
    case 263:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(325);
      END_STATE();
    case 264:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(214);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(402);
      END_STATE();
    case 265:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 266:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(217);
      END_STATE();
    case 267:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(101);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(468);
      END_STATE();
    case 268:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 269:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(518);
      END_STATE();
    case 270:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(758);
      END_STATE();
    case 271:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(845);
      END_STATE();
    case 272:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(842);
      END_STATE();
    case 273:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(802);
      END_STATE();
    case 274:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 275:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(91);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      END_STATE();
    case 276:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(91);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 277:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(235);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(438);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(304);
      END_STATE();
    case 278:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(438);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(304);
      END_STATE();
    case 279:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 280:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 281:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 282:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 283:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 284:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 285:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 286:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 287:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 288:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(404);
      END_STATE();
    case 289:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 290:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 291:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 292:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 293:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 294:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 295:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 296:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 297:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 298:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 300:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(354);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 301:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(792);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 302:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(792);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(435);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(331);
      END_STATE();
    case 303:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(770);
      END_STATE();
    case 304:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 305:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 306:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 307:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 308:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 309:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 310:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 311:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 312:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 313:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 314:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 315:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(349);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 316:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 317:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 318:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 319:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 320:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 321:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 322:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 323:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(830);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      END_STATE();
    case 324:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(786);
      END_STATE();
    case 325:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(765);
      END_STATE();
    case 326:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(91);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      END_STATE();
    case 327:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(91);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      END_STATE();
    case 328:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 329:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 330:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 331:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 332:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 333:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 334:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 335:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 336:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 337:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 338:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 339:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(795);
      END_STATE();
    case 340:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(755);
      END_STATE();
    case 341:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(813);
      END_STATE();
    case 342:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(837);
      END_STATE();
    case 343:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(846);
      END_STATE();
    case 344:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(854);
      END_STATE();
    case 345:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(820);
      END_STATE();
    case 346:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(815);
      END_STATE();
    case 347:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 348:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(466);
      END_STATE();
    case 349:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 350:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 351:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 352:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 353:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 354:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(450);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(776);
      END_STATE();
    case 355:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 356:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 357:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 358:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 359:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 360:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 361:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 362:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 363:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 364:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 365:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 366:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 367:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 368:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 369:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 370:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(777);
      END_STATE();
    case 371:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(772);
      END_STATE();
    case 372:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(785);
      END_STATE();
    case 373:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(847);
      END_STATE();
    case 374:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(826);
      END_STATE();
    case 375:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(766);
      END_STATE();
    case 376:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(794);
      END_STATE();
    case 377:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(804);
      END_STATE();
    case 378:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(800);
      END_STATE();
    case 379:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(803);
      END_STATE();
    case 380:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(843);
      END_STATE();
    case 381:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(752);
      END_STATE();
    case 382:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(308);
      END_STATE();
    case 383:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(456);
      END_STATE();
    case 384:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(383);
      END_STATE();
    case 385:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(334);
      END_STATE();
    case 386:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(402);
      END_STATE();
    case 387:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      END_STATE();
    case 388:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(397);
      END_STATE();
    case 389:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(414);
      END_STATE();
    case 390:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(203);
      END_STATE();
    case 391:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      END_STATE();
    case 392:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      END_STATE();
    case 393:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      END_STATE();
    case 394:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      END_STATE();
    case 395:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 396:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      END_STATE();
    case 397:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      END_STATE();
    case 398:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(329);
      END_STATE();
    case 399:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(432);
      END_STATE();
    case 400:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 401:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(828);
      END_STATE();
    case 402:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(807);
      END_STATE();
    case 403:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(832);
      END_STATE();
    case 404:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(791);
      END_STATE();
    case 405:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(841);
      END_STATE();
    case 406:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(522);
      END_STATE();
    case 407:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(769);
      END_STATE();
    case 408:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(515);
      END_STATE();
    case 409:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(838);
      END_STATE();
    case 410:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(835);
      END_STATE();
    case 411:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(831);
      END_STATE();
    case 412:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 413:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(351);
      END_STATE();
    case 414:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      END_STATE();
    case 415:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 416:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      END_STATE();
    case 417:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      END_STATE();
    case 418:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 419:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      END_STATE();
    case 420:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(33);
      END_STATE();
    case 421:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(375);
      END_STATE();
    case 422:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 423:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 424:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 425:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 426:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 427:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 428:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(154);
      END_STATE();
    case 429:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      END_STATE();
    case 430:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 431:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      END_STATE();
    case 432:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 433:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      END_STATE();
    case 434:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      END_STATE();
    case 435:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 436:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 437:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 438:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(365);
      END_STATE();
    case 439:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(358);
      END_STATE();
    case 440:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(393);
      END_STATE();
    case 441:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(405);
      END_STATE();
    case 442:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 443:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 444:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(394);
      END_STATE();
    case 445:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(399);
      END_STATE();
    case 446:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 447:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 448:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(426);
      END_STATE();
    case 449:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 450:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(335);
      END_STATE();
    case 451:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 452:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(304);
      END_STATE();
    case 453:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(119);
      END_STATE();
    case 454:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(812);
      END_STATE();
    case 455:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(520);
      END_STATE();
    case 456:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(314);
      END_STATE();
    case 457:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(364);
      END_STATE();
    case 458:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(782);
      END_STATE();
    case 459:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(403);
      END_STATE();
    case 460:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(219);
      END_STATE();
    case 461:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(206);
      END_STATE();
    case 462:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(95);
      END_STATE();
    case 463:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(754);
      END_STATE();
    case 464:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(855);
      END_STATE();
    case 465:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(799);
      END_STATE();
    case 466:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(823);
      END_STATE();
    case 467:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(753);
      END_STATE();
    case 468:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(221);
      END_STATE();
    case 469:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(385);
      END_STATE();
    case 470:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 471:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(398);
      END_STATE();
    case 472:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(146);
      END_STATE();
    case 473:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(127);
      END_STATE();
    case 474:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 475:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 476:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(474);
      END_STATE();
    case 477:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(475);
      END_STATE();
    case 478:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(476);
      END_STATE();
    case 479:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(477);
      END_STATE();
    case 480:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(478);
      END_STATE();
    case 481:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(479);
      END_STATE();
    case 482:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      END_STATE();
    case 483:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 484:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(483);
      END_STATE();
    case 485:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(484);
      END_STATE();
    case 486:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 487:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(481);
      END_STATE();
    case 488:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(482);
      END_STATE();
    case 489:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 490:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 491:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(490);
      END_STATE();
    case 492:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(491);
      END_STATE();
    case 493:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 494:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(488);
      END_STATE();
    case 495:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 496:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(495);
      END_STATE();
    case 497:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(496);
      END_STATE();
    case 498:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(497);
      END_STATE();
    case 499:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(493);
      END_STATE();
    case 500:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 501:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(500);
      END_STATE();
    case 502:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(501);
      END_STATE();
    case 503:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 504:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(503);
      END_STATE();
    case 505:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 506:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(562);
      END_STATE();
    case 507:
      if (eof) ADVANCE(513);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(527);
      if (lookahead == ')') ADVANCE(528);
      if (lookahead == ',') ADVANCE(524);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == '.') ADVANCE(525);
      if (lookahead == '0') ADVANCE(544);
      if (lookahead == ':') ADVANCE(774);
      if (lookahead == ';') ADVANCE(514);
      if (lookahead == '<') ADVANCE(744);
      if (lookahead == '=') ADVANCE(747);
      if (lookahead == '>') ADVANCE(748);
      if (lookahead == 'X') ADVANCE(8);
      if (lookahead == '[') ADVANCE(762);
      if (lookahead == ']') ADVANCE(763);
      if (lookahead == '{') ADVANCE(773);
      if (lookahead == '}') ADVANCE(775);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(123);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(247);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(27);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(143);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(200);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(436);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(337);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(128);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(302);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(326);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(507)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(552);
      END_STATE();
    case 508:
      if (eof) ADVANCE(513);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(527);
      if (lookahead == ')') ADVANCE(528);
      if (lookahead == ',') ADVANCE(524);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == '.') ADVANCE(525);
      if (lookahead == ';') ADVANCE(514);
      if (lookahead == '<') ADVANCE(744);
      if (lookahead == '=') ADVANCE(747);
      if (lookahead == '>') ADVANCE(748);
      if (lookahead == '[') ADVANCE(762);
      if (lookahead == '{') ADVANCE(773);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(42);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(461);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(38);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(382);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(22);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(317);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(337);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(120);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(301);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(275);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(39);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(508)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      END_STATE();
    case 509:
      if (eof) ADVANCE(513);
      if (lookahead == '\'') ADVANCE(505);
      if (lookahead == ';') ADVANCE(514);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(656);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(612);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(646);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(614);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(697);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(670);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(626);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(601);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(616);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(694);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(684);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(509)
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 510:
      if (eof) ADVANCE(513);
      if (lookahead == ';') ADVANCE(514);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(537);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(534);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(540);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(536);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(164);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(200);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(369);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(510)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(532);
      END_STATE();
    case 511:
      if (eof) ADVANCE(513);
      if (lookahead == ';') ADVANCE(514);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(538);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(534);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(540);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(536);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(369);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(511)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(532);
      END_STATE();
    case 512:
      if (eof) ADVANCE(513);
      if (lookahead == ';') ADVANCE(514);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(538);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(534);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(540);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(536);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(369);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(512)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(532);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_limit_spec_token1);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_uuid);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'X') ADVANCE(555);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(756);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(328);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(415);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(328);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(413);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(96);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (lookahead == '-') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (lookahead == 'X') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(488);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(476);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(546);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(474);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(478);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(549);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(482);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(488);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_X_SQUOTE);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_0X);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token1);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token2);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      if (lookahead == '$') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(561);
      if (lookahead != 0) ADVANCE(562);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      if (lookahead == '$') ADVANCE(506);
      if (lookahead != 0) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(553);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(711);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(592);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(719);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(711);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(682);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(583);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(727);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(659);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(683);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(738);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(689);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(708);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(658);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(692);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(585);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(667);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(688);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(652);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(663);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(586);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(740);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(644);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(623);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(667);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(595);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(708);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(715);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(633);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(709);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(710);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(568);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(636);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(740);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(568);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(740);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(711);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(730);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(700);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(557);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(559);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(726);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(708);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(579);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(708);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(740);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(728);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(663);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(698);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(580);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(691);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(568);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(695);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(732);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(654);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(673);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(655);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(740);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(603);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(740);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(604);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(740);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(629);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(578);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(740);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(621);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(677);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(678);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(699);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(662);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(593);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(667);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(663);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(680);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(624);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(607);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(701);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(661);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(706);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(672);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(595);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(740);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(640);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(588);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(530);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(595);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(720);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(660);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(720);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(610);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(679);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(674);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(665);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(729);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(608);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(737);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(629);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(651);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(643);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(596);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(615);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(714);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(686);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(740);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(606);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(740);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(682);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(598);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(731);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(685);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(671);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(566);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(575);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(740);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(519);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(587);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(620);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(708);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(591);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(718);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(704);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(714);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(590);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(682);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(657);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(639);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(644);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(582);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(649);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(573);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(663);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(664);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(740);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(644);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(594);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(595);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(581);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(648);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(576);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(740);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(584);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(627);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(708);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(729);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(722);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(724);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(632);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(634);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(577);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(740);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(708);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(716);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(721);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(712);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(681);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(600);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(609);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(713);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(717);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(687);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(740);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(517);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(698);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(611);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(605);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(631);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(574);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(638);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(696);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(583);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(705);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(628);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(599);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(642);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(668);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(653);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(675);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(708);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(635);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(740);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(707);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(629);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(698);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(565);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(733);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(734);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(735);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(736);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(737);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(738);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(745);
      if (lookahead == '>') ADVANCE(746);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(749);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(412);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(441);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(829);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token1);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(784);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_if_exist);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_if_spec_token1);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_if_spec_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__dquote);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_if_not_exist_token1);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_if_not_exist_token2);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_ttl_token1);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_update_token2);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_priviledge_token1);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_priviledge_token2);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_priviledge_token3);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_priviledge_token4);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_priviledge_token5);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_priviledge_token6);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_priviledge_token7);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_resource_token3);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_resource_token4);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_drop_aggregate_token1);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token1);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token2);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_drop_trigger_token1);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_drop_type_token1);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token2);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token3);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token4);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_or_replace_token1);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_or_replace_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_or_replace_token2);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token1);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token2);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_column_not_null_token1);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(770);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(420);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(443);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_return_mode_token1);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_return_mode_token2);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token1);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_durable_writes_token1);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_role_with_options_token1);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_role_with_options_token2);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_role_with_options_token3);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_role_with_options_token4);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_order_direction_token1);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_order_direction_token2);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_alter_table_add_token1);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_alter_table_drop_compact_storage_token2);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_alter_table_rename_token1);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_user_super_user_token1);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_apply_batch_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 508},
  [5] = {.lex_state = 507},
  [6] = {.lex_state = 507},
  [7] = {.lex_state = 507},
  [8] = {.lex_state = 507},
  [9] = {.lex_state = 507},
  [10] = {.lex_state = 507},
  [11] = {.lex_state = 507},
  [12] = {.lex_state = 507},
  [13] = {.lex_state = 508},
  [14] = {.lex_state = 508},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 508},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 508},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 508},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 508},
  [47] = {.lex_state = 508},
  [48] = {.lex_state = 508},
  [49] = {.lex_state = 508},
  [50] = {.lex_state = 508},
  [51] = {.lex_state = 508},
  [52] = {.lex_state = 508},
  [53] = {.lex_state = 508},
  [54] = {.lex_state = 507},
  [55] = {.lex_state = 507},
  [56] = {.lex_state = 508},
  [57] = {.lex_state = 507},
  [58] = {.lex_state = 507},
  [59] = {.lex_state = 508},
  [60] = {.lex_state = 508},
  [61] = {.lex_state = 508},
  [62] = {.lex_state = 508},
  [63] = {.lex_state = 508},
  [64] = {.lex_state = 508},
  [65] = {.lex_state = 508},
  [66] = {.lex_state = 508},
  [67] = {.lex_state = 508},
  [68] = {.lex_state = 508},
  [69] = {.lex_state = 508},
  [70] = {.lex_state = 508},
  [71] = {.lex_state = 508},
  [72] = {.lex_state = 510},
  [73] = {.lex_state = 508},
  [74] = {.lex_state = 510},
  [75] = {.lex_state = 508},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 509},
  [78] = {.lex_state = 508},
  [79] = {.lex_state = 508},
  [80] = {.lex_state = 508},
  [81] = {.lex_state = 507},
  [82] = {.lex_state = 507},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 507},
  [85] = {.lex_state = 511},
  [86] = {.lex_state = 507},
  [87] = {.lex_state = 511},
  [88] = {.lex_state = 508},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 508},
  [91] = {.lex_state = 508},
  [92] = {.lex_state = 508},
  [93] = {.lex_state = 508},
  [94] = {.lex_state = 507},
  [95] = {.lex_state = 512},
  [96] = {.lex_state = 508},
  [97] = {.lex_state = 507},
  [98] = {.lex_state = 512},
  [99] = {.lex_state = 508},
  [100] = {.lex_state = 508},
  [101] = {.lex_state = 507},
  [102] = {.lex_state = 508},
  [103] = {.lex_state = 508},
  [104] = {.lex_state = 508},
  [105] = {.lex_state = 508},
  [106] = {.lex_state = 508},
  [107] = {.lex_state = 507},
  [108] = {.lex_state = 507},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 507},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 507},
  [115] = {.lex_state = 507},
  [116] = {.lex_state = 508},
  [117] = {.lex_state = 508},
  [118] = {.lex_state = 507},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 508},
  [124] = {.lex_state = 508},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 508},
  [128] = {.lex_state = 508},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 508},
  [131] = {.lex_state = 508},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 508},
  [135] = {.lex_state = 508},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 508},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 508},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 508},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 508},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 508},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 508},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 507},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 508},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 507},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 507},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 508},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 508},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 508},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 507},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 508},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 507},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 507},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 507},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 507},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 507},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 507},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 507},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 507},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 507},
  [308] = {.lex_state = 507},
  [309] = {.lex_state = 507},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 507},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 507},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 507},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 507},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 507},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 507},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 507},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 507},
  [416] = {.lex_state = 507},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 28},
  [420] = {.lex_state = 29},
  [421] = {.lex_state = 28},
  [422] = {.lex_state = 1},
  [423] = {.lex_state = 507},
  [424] = {.lex_state = 507},
  [425] = {.lex_state = 2},
  [426] = {.lex_state = 508},
  [427] = {.lex_state = 2},
  [428] = {.lex_state = 7},
  [429] = {.lex_state = 2},
  [430] = {.lex_state = 28},
  [431] = {.lex_state = 2},
  [432] = {.lex_state = 2},
  [433] = {.lex_state = 28},
  [434] = {.lex_state = 1},
  [435] = {.lex_state = 508},
  [436] = {.lex_state = 507},
  [437] = {.lex_state = 1},
  [438] = {.lex_state = 7},
  [439] = {.lex_state = 1},
  [440] = {.lex_state = 1},
  [441] = {.lex_state = 1},
  [442] = {.lex_state = 508},
  [443] = {.lex_state = 1},
  [444] = {.lex_state = 1},
  [445] = {.lex_state = 508},
  [446] = {.lex_state = 1},
  [447] = {.lex_state = 12},
  [448] = {.lex_state = 1},
  [449] = {.lex_state = 508},
  [450] = {.lex_state = 507},
  [451] = {.lex_state = 1},
  [452] = {.lex_state = 1},
  [453] = {.lex_state = 1},
  [454] = {.lex_state = 1},
  [455] = {.lex_state = 1},
  [456] = {.lex_state = 508},
  [457] = {.lex_state = 507},
  [458] = {.lex_state = 13},
  [459] = {.lex_state = 1},
  [460] = {.lex_state = 1},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 1},
  [463] = {.lex_state = 1},
  [464] = {.lex_state = 1},
  [465] = {.lex_state = 1},
  [466] = {.lex_state = 3},
  [467] = {.lex_state = 1},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 1},
  [472] = {.lex_state = 1},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 1},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 28},
  [477] = {.lex_state = 1},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 15},
  [480] = {.lex_state = 1},
  [481] = {.lex_state = 508},
  [482] = {.lex_state = 2},
  [483] = {.lex_state = 1},
  [484] = {.lex_state = 1},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 1},
  [488] = {.lex_state = 3},
  [489] = {.lex_state = 1},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 1},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 1},
  [497] = {.lex_state = 1},
  [498] = {.lex_state = 1},
  [499] = {.lex_state = 1},
  [500] = {.lex_state = 1},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 2},
  [503] = {.lex_state = 1},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 1},
  [506] = {.lex_state = 508},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 1},
  [511] = {.lex_state = 2},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 2},
  [514] = {.lex_state = 2},
  [515] = {.lex_state = 1},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 2},
  [520] = {.lex_state = 2},
  [521] = {.lex_state = 1},
  [522] = {.lex_state = 1},
  [523] = {.lex_state = 1},
  [524] = {.lex_state = 1},
  [525] = {.lex_state = 1},
  [526] = {.lex_state = 1},
  [527] = {.lex_state = 2},
  [528] = {.lex_state = 1},
  [529] = {.lex_state = 1},
  [530] = {.lex_state = 1},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 1},
  [533] = {.lex_state = 1},
  [534] = {.lex_state = 1},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 1},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 1},
  [539] = {.lex_state = 1},
  [540] = {.lex_state = 3},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 1},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 1},
  [545] = {.lex_state = 1},
  [546] = {.lex_state = 1},
  [547] = {.lex_state = 1},
  [548] = {.lex_state = 1},
  [549] = {.lex_state = 1},
  [550] = {.lex_state = 1},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 1},
  [553] = {.lex_state = 1},
  [554] = {.lex_state = 508},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 1},
  [557] = {.lex_state = 1},
  [558] = {.lex_state = 1},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 1},
  [561] = {.lex_state = 1},
  [562] = {.lex_state = 507},
  [563] = {.lex_state = 1},
  [564] = {.lex_state = 1},
  [565] = {.lex_state = 1},
  [566] = {.lex_state = 1},
  [567] = {.lex_state = 1},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 1},
  [570] = {.lex_state = 1},
  [571] = {.lex_state = 1},
  [572] = {.lex_state = 1},
  [573] = {.lex_state = 1},
  [574] = {.lex_state = 1},
  [575] = {.lex_state = 1},
  [576] = {.lex_state = 1},
  [577] = {.lex_state = 1},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 1},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 1},
  [582] = {.lex_state = 1},
  [583] = {.lex_state = 1},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 1},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 1},
  [588] = {.lex_state = 1},
  [589] = {.lex_state = 1},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 1},
  [592] = {.lex_state = 508},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 1},
  [597] = {.lex_state = 1},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 1},
  [600] = {.lex_state = 1},
  [601] = {.lex_state = 1},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 1},
  [604] = {.lex_state = 1},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 1},
  [607] = {.lex_state = 1},
  [608] = {.lex_state = 1},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 1},
  [613] = {.lex_state = 508},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 508},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 1},
  [622] = {.lex_state = 3},
  [623] = {.lex_state = 1},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 508},
  [626] = {.lex_state = 508},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 508},
  [632] = {.lex_state = 508},
  [633] = {.lex_state = 1},
  [634] = {.lex_state = 508},
  [635] = {.lex_state = 1},
  [636] = {.lex_state = 7},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 508},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 508},
  [641] = {.lex_state = 508},
  [642] = {.lex_state = 508},
  [643] = {.lex_state = 1},
  [644] = {.lex_state = 1},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 1},
  [647] = {.lex_state = 2},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 1},
  [651] = {.lex_state = 508},
  [652] = {.lex_state = 1},
  [653] = {.lex_state = 1},
  [654] = {.lex_state = 1},
  [655] = {.lex_state = 1},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 1},
  [658] = {.lex_state = 1},
  [659] = {.lex_state = 3},
  [660] = {.lex_state = 1},
  [661] = {.lex_state = 508},
  [662] = {.lex_state = 1},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 1},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 1},
  [668] = {.lex_state = 1},
  [669] = {.lex_state = 1},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 1},
  [672] = {.lex_state = 7},
  [673] = {.lex_state = 508},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 1},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 1},
  [680] = {.lex_state = 1},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 1},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 7},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 508},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 1},
  [695] = {.lex_state = 1},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 1},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 1},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 508},
  [711] = {.lex_state = 1},
  [712] = {.lex_state = 508},
  [713] = {.lex_state = 508},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 1},
  [718] = {.lex_state = 1},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 1},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 1},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 1},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 1},
  [727] = {.lex_state = 508},
  [728] = {.lex_state = 508},
  [729] = {.lex_state = 508},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 1},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 508},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 508},
  [742] = {.lex_state = 1},
  [743] = {.lex_state = 1},
  [744] = {.lex_state = 1},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 508},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 1},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 1},
  [756] = {.lex_state = 508},
  [757] = {.lex_state = 1},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 508},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 1},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 508},
  [768] = {.lex_state = 3},
  [769] = {.lex_state = 1},
  [770] = {.lex_state = 1},
  [771] = {.lex_state = 1},
  [772] = {.lex_state = 508},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 1},
  [778] = {.lex_state = 1},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 1},
  [781] = {.lex_state = 508},
  [782] = {.lex_state = 1},
  [783] = {.lex_state = 1},
  [784] = {.lex_state = 7},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 1},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 7},
  [789] = {.lex_state = 1},
  [790] = {.lex_state = 1},
  [791] = {.lex_state = 508},
  [792] = {.lex_state = 1},
  [793] = {.lex_state = 1},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 1},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 1},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 1},
  [803] = {.lex_state = 1},
  [804] = {.lex_state = 508},
  [805] = {.lex_state = 508},
  [806] = {.lex_state = 508},
  [807] = {.lex_state = 1},
  [808] = {.lex_state = 1},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 1},
  [812] = {.lex_state = 508},
  [813] = {.lex_state = 1},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 1},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 1},
  [821] = {.lex_state = 1},
  [822] = {.lex_state = 508},
  [823] = {.lex_state = 1},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 508},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 1},
  [830] = {.lex_state = 1},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 1},
  [833] = {.lex_state = 1},
  [834] = {.lex_state = 1},
  [835] = {.lex_state = 1},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 1},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 1},
  [842] = {.lex_state = 507},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 1},
  [847] = {.lex_state = 1},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 1},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 1},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 1},
  [854] = {.lex_state = 1},
  [855] = {.lex_state = 508},
  [856] = {.lex_state = 1},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 7},
  [860] = {.lex_state = 1},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 508},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 508},
  [865] = {.lex_state = 1},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 508},
  [868] = {.lex_state = 1},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 1},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 1},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 508},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 1},
  [882] = {.lex_state = 1},
  [883] = {.lex_state = 1},
  [884] = {.lex_state = 1},
  [885] = {.lex_state = 507},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 1},
  [888] = {.lex_state = 7},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 1},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 1},
  [894] = {.lex_state = 508},
  [895] = {.lex_state = 1},
  [896] = {.lex_state = 1},
  [897] = {.lex_state = 508},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 1},
  [900] = {.lex_state = 508},
  [901] = {.lex_state = 1},
  [902] = {.lex_state = 1},
  [903] = {.lex_state = 1},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 1},
  [906] = {.lex_state = 1},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 1},
  [909] = {.lex_state = 1},
  [910] = {.lex_state = 1},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 1},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 508},
  [916] = {.lex_state = 7},
  [917] = {.lex_state = 1},
  [918] = {.lex_state = 508},
  [919] = {.lex_state = 508},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 1},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 1},
  [925] = {.lex_state = 508},
  [926] = {.lex_state = 7},
  [927] = {.lex_state = 1},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 7},
  [930] = {.lex_state = 1},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 508},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 508},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 508},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 508},
  [964] = {.lex_state = 0},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 0},
  [967] = {.lex_state = 0},
  [968] = {.lex_state = 0},
  [969] = {.lex_state = 0},
  [970] = {.lex_state = 0},
  [971] = {.lex_state = 0},
  [972] = {.lex_state = 0},
  [973] = {.lex_state = 0},
  [974] = {.lex_state = 0},
  [975] = {.lex_state = 0},
  [976] = {.lex_state = 508},
  [977] = {.lex_state = 508},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 0},
  [980] = {.lex_state = 0},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 508},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 508},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 508},
  [988] = {.lex_state = 0},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 508},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 0},
  [993] = {.lex_state = 7},
  [994] = {.lex_state = 0},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 0},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 0},
  [999] = {.lex_state = 0},
  [1000] = {.lex_state = 0},
  [1001] = {.lex_state = 508},
  [1002] = {.lex_state = 0},
  [1003] = {.lex_state = 0},
  [1004] = {.lex_state = 0},
  [1005] = {.lex_state = 0},
  [1006] = {.lex_state = 0},
  [1007] = {.lex_state = 0},
  [1008] = {.lex_state = 0},
  [1009] = {.lex_state = 0},
  [1010] = {.lex_state = 0},
  [1011] = {.lex_state = 0},
  [1012] = {.lex_state = 0},
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 508},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 0},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 508},
  [1020] = {.lex_state = 0},
  [1021] = {.lex_state = 0},
  [1022] = {.lex_state = 508},
  [1023] = {.lex_state = 0},
  [1024] = {.lex_state = 508},
  [1025] = {.lex_state = 0},
  [1026] = {.lex_state = 0},
  [1027] = {.lex_state = 0},
  [1028] = {.lex_state = 1},
  [1029] = {.lex_state = 0},
  [1030] = {.lex_state = 0},
  [1031] = {.lex_state = 0},
  [1032] = {.lex_state = 0},
  [1033] = {.lex_state = 508},
  [1034] = {.lex_state = 507},
  [1035] = {.lex_state = 0},
  [1036] = {.lex_state = 0},
  [1037] = {.lex_state = 0},
  [1038] = {.lex_state = 0},
  [1039] = {.lex_state = 0},
  [1040] = {.lex_state = 0},
  [1041] = {.lex_state = 0},
  [1042] = {.lex_state = 0},
  [1043] = {.lex_state = 0},
  [1044] = {.lex_state = 0},
  [1045] = {.lex_state = 0},
  [1046] = {.lex_state = 0},
  [1047] = {.lex_state = 0},
  [1048] = {.lex_state = 0},
  [1049] = {.lex_state = 0},
  [1050] = {.lex_state = 508},
  [1051] = {.lex_state = 0},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 0},
  [1054] = {.lex_state = 0},
  [1055] = {.lex_state = 508},
  [1056] = {.lex_state = 508},
  [1057] = {.lex_state = 0},
  [1058] = {.lex_state = 0},
  [1059] = {.lex_state = 508},
  [1060] = {.lex_state = 0},
  [1061] = {.lex_state = 0},
  [1062] = {.lex_state = 0},
  [1063] = {.lex_state = 0},
  [1064] = {.lex_state = 507},
  [1065] = {.lex_state = 0},
  [1066] = {.lex_state = 1},
  [1067] = {.lex_state = 1},
  [1068] = {.lex_state = 0},
  [1069] = {.lex_state = 0},
  [1070] = {.lex_state = 0},
  [1071] = {.lex_state = 0},
  [1072] = {.lex_state = 0},
  [1073] = {.lex_state = 0},
  [1074] = {.lex_state = 0},
  [1075] = {.lex_state = 0},
  [1076] = {.lex_state = 0},
  [1077] = {.lex_state = 0},
  [1078] = {.lex_state = 6},
  [1079] = {.lex_state = 508},
  [1080] = {.lex_state = 0},
  [1081] = {.lex_state = 0},
  [1082] = {.lex_state = 508},
  [1083] = {.lex_state = 508},
  [1084] = {.lex_state = 0},
  [1085] = {.lex_state = 0},
  [1086] = {.lex_state = 0},
  [1087] = {.lex_state = 508},
  [1088] = {.lex_state = 508},
  [1089] = {.lex_state = 508},
  [1090] = {.lex_state = 0},
  [1091] = {.lex_state = 507},
  [1092] = {.lex_state = 0},
  [1093] = {.lex_state = 0},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 0},
  [1096] = {.lex_state = 508},
  [1097] = {.lex_state = 0},
  [1098] = {.lex_state = 508},
  [1099] = {.lex_state = 0},
  [1100] = {.lex_state = 508},
  [1101] = {.lex_state = 0},
  [1102] = {.lex_state = 508},
  [1103] = {.lex_state = 0},
  [1104] = {.lex_state = 0},
  [1105] = {.lex_state = 1},
  [1106] = {.lex_state = 0},
  [1107] = {.lex_state = 0},
  [1108] = {.lex_state = 508},
  [1109] = {.lex_state = 0},
  [1110] = {.lex_state = 508},
  [1111] = {.lex_state = 0},
  [1112] = {.lex_state = 0},
  [1113] = {.lex_state = 0},
  [1114] = {.lex_state = 0},
  [1115] = {.lex_state = 0},
  [1116] = {.lex_state = 0},
  [1117] = {.lex_state = 0},
  [1118] = {.lex_state = 508},
  [1119] = {.lex_state = 507},
  [1120] = {.lex_state = 0},
  [1121] = {.lex_state = 1},
  [1122] = {.lex_state = 0},
  [1123] = {.lex_state = 0},
  [1124] = {.lex_state = 508},
  [1125] = {.lex_state = 508},
  [1126] = {.lex_state = 0},
  [1127] = {.lex_state = 508},
  [1128] = {.lex_state = 0},
  [1129] = {.lex_state = 508},
  [1130] = {.lex_state = 0},
  [1131] = {.lex_state = 0},
  [1132] = {.lex_state = 0},
  [1133] = {.lex_state = 0},
  [1134] = {.lex_state = 0},
  [1135] = {.lex_state = 0},
  [1136] = {.lex_state = 0},
  [1137] = {.lex_state = 507},
  [1138] = {.lex_state = 0},
  [1139] = {.lex_state = 0},
  [1140] = {.lex_state = 0},
  [1141] = {.lex_state = 0},
  [1142] = {.lex_state = 0},
  [1143] = {.lex_state = 0},
  [1144] = {.lex_state = 0},
  [1145] = {.lex_state = 0},
  [1146] = {.lex_state = 0},
  [1147] = {.lex_state = 0},
  [1148] = {.lex_state = 0},
  [1149] = {.lex_state = 0},
  [1150] = {.lex_state = 1},
  [1151] = {.lex_state = 1},
  [1152] = {.lex_state = 0},
  [1153] = {.lex_state = 1},
  [1154] = {.lex_state = 0},
  [1155] = {.lex_state = 0},
  [1156] = {.lex_state = 0},
  [1157] = {.lex_state = 0},
  [1158] = {.lex_state = 0},
  [1159] = {.lex_state = 0},
  [1160] = {.lex_state = 507},
  [1161] = {.lex_state = 0},
  [1162] = {.lex_state = 0},
  [1163] = {.lex_state = 0},
  [1164] = {.lex_state = 508},
  [1165] = {.lex_state = 508},
  [1166] = {.lex_state = 0},
  [1167] = {.lex_state = 507},
  [1168] = {.lex_state = 0},
  [1169] = {.lex_state = 0},
  [1170] = {.lex_state = 0},
  [1171] = {.lex_state = 0},
  [1172] = {.lex_state = 507},
  [1173] = {.lex_state = 0},
  [1174] = {.lex_state = 0},
  [1175] = {.lex_state = 0},
  [1176] = {.lex_state = 0},
  [1177] = {.lex_state = 0},
  [1178] = {.lex_state = 0},
  [1179] = {.lex_state = 0},
  [1180] = {.lex_state = 0},
  [1181] = {.lex_state = 0},
  [1182] = {.lex_state = 0},
  [1183] = {.lex_state = 0},
  [1184] = {.lex_state = 0},
  [1185] = {.lex_state = 0},
  [1186] = {.lex_state = 0},
  [1187] = {.lex_state = 508},
  [1188] = {.lex_state = 0},
  [1189] = {.lex_state = 0},
  [1190] = {.lex_state = 0},
  [1191] = {.lex_state = 0},
  [1192] = {.lex_state = 0},
  [1193] = {.lex_state = 1},
  [1194] = {.lex_state = 0},
  [1195] = {.lex_state = 0},
  [1196] = {.lex_state = 0},
  [1197] = {.lex_state = 0},
  [1198] = {.lex_state = 0},
  [1199] = {.lex_state = 0},
  [1200] = {.lex_state = 508},
  [1201] = {.lex_state = 0},
  [1202] = {.lex_state = 0},
  [1203] = {.lex_state = 0},
  [1204] = {.lex_state = 0},
  [1205] = {.lex_state = 0},
  [1206] = {.lex_state = 0},
  [1207] = {.lex_state = 0},
  [1208] = {.lex_state = 0},
  [1209] = {.lex_state = 1},
  [1210] = {.lex_state = 0},
  [1211] = {.lex_state = 0},
  [1212] = {.lex_state = 0},
  [1213] = {.lex_state = 508},
  [1214] = {.lex_state = 0},
  [1215] = {.lex_state = 0},
  [1216] = {.lex_state = 0},
  [1217] = {.lex_state = 0},
  [1218] = {.lex_state = 0},
  [1219] = {.lex_state = 0},
  [1220] = {.lex_state = 0},
  [1221] = {.lex_state = 1},
  [1222] = {.lex_state = 0},
  [1223] = {.lex_state = 0},
  [1224] = {.lex_state = 510},
  [1225] = {.lex_state = 0},
  [1226] = {.lex_state = 0},
  [1227] = {.lex_state = 0},
  [1228] = {.lex_state = 0},
  [1229] = {.lex_state = 0},
  [1230] = {.lex_state = 0},
  [1231] = {.lex_state = 0},
  [1232] = {.lex_state = 508},
  [1233] = {.lex_state = 0},
  [1234] = {.lex_state = 1},
  [1235] = {.lex_state = 508},
  [1236] = {.lex_state = 0},
  [1237] = {.lex_state = 508},
  [1238] = {.lex_state = 0},
  [1239] = {.lex_state = 0},
  [1240] = {.lex_state = 508},
  [1241] = {.lex_state = 0},
  [1242] = {.lex_state = 0},
  [1243] = {.lex_state = 0},
  [1244] = {.lex_state = 0},
  [1245] = {.lex_state = 0},
  [1246] = {.lex_state = 0},
  [1247] = {.lex_state = 0},
  [1248] = {.lex_state = 508},
  [1249] = {.lex_state = 0},
  [1250] = {.lex_state = 0},
  [1251] = {.lex_state = 0},
  [1252] = {.lex_state = 0},
  [1253] = {.lex_state = 508},
  [1254] = {.lex_state = 508},
  [1255] = {.lex_state = 0},
  [1256] = {.lex_state = 508},
  [1257] = {.lex_state = 0},
  [1258] = {.lex_state = 0},
  [1259] = {.lex_state = 6},
  [1260] = {.lex_state = 508},
  [1261] = {.lex_state = 1},
  [1262] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_select_statement_token1] = ACTIONS(1),
    [aux_sym_select_statement_token3] = ACTIONS(1),
    [aux_sym_select_statement_token4] = ACTIONS(1),
    [aux_sym_limit_spec_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [sym__hex_digit] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_X_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_0X] = ACTIONS(1),
    [aux_sym_boolean_literal_token1] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [aux_sym_where_spec_token1] = ACTIONS(1),
    [aux_sym_relation_elements_token1] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [aux_sym_relation_element_token1] = ACTIONS(1),
    [aux_sym_relation_contains_key_token2] = ACTIONS(1),
    [aux_sym_order_spec_token1] = ACTIONS(1),
    [aux_sym_order_spec_token2] = ACTIONS(1),
    [aux_sym_delete_statement_token1] = ACTIONS(1),
    [aux_sym_begin_batch_token1] = ACTIONS(1),
    [aux_sym_begin_batch_token2] = ACTIONS(1),
    [aux_sym_begin_batch_token3] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_using_timestamp_spec_token1] = ACTIONS(1),
    [aux_sym_timestamp_token1] = ACTIONS(1),
    [sym_if_exist] = ACTIONS(1),
    [aux_sym_if_spec_token1] = ACTIONS(1),
    [aux_sym_insert_statement_token1] = ACTIONS(1),
    [aux_sym_insert_statement_token2] = ACTIONS(1),
    [sym__dquote] = ACTIONS(1),
    [aux_sym_insert_values_spec_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_if_not_exist_token1] = ACTIONS(1),
    [aux_sym_if_not_exist_token2] = ACTIONS(1),
    [aux_sym_ttl_token1] = ACTIONS(1),
    [aux_sym_truncate_token1] = ACTIONS(1),
    [aux_sym_truncate_token2] = ACTIONS(1),
    [aux_sym_create_index_token1] = ACTIONS(1),
    [aux_sym_create_index_token2] = ACTIONS(1),
    [aux_sym_create_index_token3] = ACTIONS(1),
    [aux_sym_index_keys_spec_token1] = ACTIONS(1),
    [aux_sym_index_entries_s_spec_token1] = ACTIONS(1),
    [aux_sym_drop_index_token1] = ACTIONS(1),
    [aux_sym_update_token1] = ACTIONS(1),
    [aux_sym_update_token2] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_use_token1] = ACTIONS(1),
    [aux_sym_grant_token1] = ACTIONS(1),
    [aux_sym_grant_token2] = ACTIONS(1),
    [aux_sym_priviledge_token2] = ACTIONS(1),
    [aux_sym_priviledge_token3] = ACTIONS(1),
    [aux_sym_priviledge_token6] = ACTIONS(1),
    [aux_sym_priviledge_token7] = ACTIONS(1),
    [aux_sym_resource_token2] = ACTIONS(1),
    [aux_sym_resource_token6] = ACTIONS(1),
    [aux_sym_revoke_token1] = ACTIONS(1),
    [aux_sym_list_roles_token1] = ACTIONS(1),
    [aux_sym_list_roles_token2] = ACTIONS(1),
    [aux_sym_list_roles_token3] = ACTIONS(1),
    [aux_sym_drop_materialized_view_token1] = ACTIONS(1),
    [aux_sym_drop_materialized_view_token2] = ACTIONS(1),
    [aux_sym_drop_trigger_token1] = ACTIONS(1),
    [aux_sym_drop_type_token1] = ACTIONS(1),
    [aux_sym_create_aggregate_token1] = ACTIONS(1),
    [aux_sym_create_aggregate_token2] = ACTIONS(1),
    [aux_sym_create_aggregate_token4] = ACTIONS(1),
    [aux_sym_or_replace_token1] = ACTIONS(1),
    [aux_sym_or_replace_token2] = ACTIONS(1),
    [aux_sym_create_materialized_view_token1] = ACTIONS(1),
    [aux_sym_create_materialized_view_token2] = ACTIONS(1),
    [aux_sym_column_not_null_token1] = ACTIONS(1),
    [aux_sym_create_function_token1] = ACTIONS(1),
    [aux_sym_create_function_token2] = ACTIONS(1),
    [aux_sym_data_type_name_token11] = ACTIONS(1),
    [aux_sym_data_type_name_token12] = ACTIONS(1),
    [aux_sym_data_type_name_token13] = ACTIONS(1),
    [aux_sym_data_type_name_token14] = ACTIONS(1),
    [aux_sym_data_type_name_token15] = ACTIONS(1),
    [aux_sym_data_type_name_token16] = ACTIONS(1),
    [aux_sym_data_type_name_token17] = ACTIONS(1),
    [aux_sym_data_type_name_token18] = ACTIONS(1),
    [aux_sym_data_type_name_token19] = ACTIONS(1),
    [aux_sym_data_type_name_token20] = ACTIONS(1),
    [aux_sym_data_type_name_token21] = ACTIONS(1),
    [aux_sym_data_type_name_token22] = ACTIONS(1),
    [aux_sym_return_mode_token2] = ACTIONS(1),
    [aux_sym_create_keyspace_token1] = ACTIONS(1),
    [aux_sym_role_with_options_token1] = ACTIONS(1),
    [aux_sym_role_with_options_token2] = ACTIONS(1),
    [aux_sym_role_with_options_token3] = ACTIONS(1),
    [aux_sym_role_with_options_token4] = ACTIONS(1),
    [aux_sym_alter_table_drop_compact_storage_token2] = ACTIONS(1),
    [aux_sym_alter_table_rename_token1] = ACTIONS(1),
    [aux_sym_user_super_user_token1] = ACTIONS(1),
    [aux_sym_apply_batch_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(1252),
    [sym__statement] = STATE(3),
    [sym_select_statement] = STATE(291),
    [sym_delete_statement] = STATE(291),
    [sym_begin_batch] = STATE(615),
    [sym_insert_statement] = STATE(291),
    [sym_truncate] = STATE(291),
    [sym_create_index] = STATE(291),
    [sym_drop_index] = STATE(291),
    [sym_update] = STATE(291),
    [sym_use] = STATE(291),
    [sym_grant] = STATE(291),
    [sym_revoke] = STATE(291),
    [sym_list_roles] = STATE(291),
    [sym_list_permissions] = STATE(291),
    [sym_drop_aggregate] = STATE(291),
    [sym_drop_materialized_view] = STATE(291),
    [sym_drop_function] = STATE(291),
    [sym_drop_keyspace] = STATE(291),
    [sym_drop_role] = STATE(291),
    [sym_drop_table] = STATE(291),
    [sym_drop_trigger] = STATE(291),
    [sym_drop_type] = STATE(291),
    [sym_drop_user] = STATE(291),
    [sym_create_aggregate] = STATE(291),
    [sym_create_materialized_view] = STATE(291),
    [sym_create_function] = STATE(291),
    [sym_create_keyspace] = STATE(291),
    [sym_create_role] = STATE(291),
    [sym_create_table] = STATE(291),
    [sym_create_trigger] = STATE(291),
    [sym_create_type] = STATE(291),
    [sym_create_user] = STATE(291),
    [sym_alter_materialized_view] = STATE(291),
    [sym_alter_keyspace] = STATE(291),
    [sym_alter_role] = STATE(291),
    [sym_alter_table] = STATE(291),
    [sym_alter_type] = STATE(291),
    [sym_alter_user] = STATE(291),
    [sym_apply_batch] = STATE(291),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_select_statement_token1] = ACTIONS(5),
    [aux_sym_delete_statement_token1] = ACTIONS(7),
    [aux_sym_begin_batch_token1] = ACTIONS(9),
    [aux_sym_insert_statement_token1] = ACTIONS(11),
    [aux_sym_truncate_token1] = ACTIONS(13),
    [aux_sym_create_index_token1] = ACTIONS(15),
    [aux_sym_drop_index_token1] = ACTIONS(17),
    [aux_sym_update_token1] = ACTIONS(19),
    [aux_sym_use_token1] = ACTIONS(21),
    [aux_sym_grant_token1] = ACTIONS(23),
    [aux_sym_priviledge_token3] = ACTIONS(25),
    [aux_sym_revoke_token1] = ACTIONS(27),
    [aux_sym_list_roles_token1] = ACTIONS(29),
    [aux_sym_apply_batch_token1] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym_select_statement_token1,
    ACTIONS(38), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(41), 1,
      aux_sym_begin_batch_token1,
    ACTIONS(44), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(47), 1,
      aux_sym_truncate_token1,
    ACTIONS(50), 1,
      aux_sym_create_index_token1,
    ACTIONS(53), 1,
      aux_sym_drop_index_token1,
    ACTIONS(56), 1,
      aux_sym_update_token1,
    ACTIONS(59), 1,
      aux_sym_use_token1,
    ACTIONS(62), 1,
      aux_sym_grant_token1,
    ACTIONS(65), 1,
      aux_sym_priviledge_token3,
    ACTIONS(68), 1,
      aux_sym_revoke_token1,
    ACTIONS(71), 1,
      aux_sym_list_roles_token1,
    ACTIONS(74), 1,
      aux_sym_apply_batch_token1,
    STATE(615), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(291), 37,
      sym_select_statement,
      sym_delete_statement,
      sym_insert_statement,
      sym_truncate,
      sym_create_index,
      sym_drop_index,
      sym_update,
      sym_use,
      sym_grant,
      sym_revoke,
      sym_list_roles,
      sym_list_permissions,
      sym_drop_aggregate,
      sym_drop_materialized_view,
      sym_drop_function,
      sym_drop_keyspace,
      sym_drop_role,
      sym_drop_table,
      sym_drop_trigger,
      sym_drop_type,
      sym_drop_user,
      sym_create_aggregate,
      sym_create_materialized_view,
      sym_create_function,
      sym_create_keyspace,
      sym_create_role,
      sym_create_table,
      sym_create_trigger,
      sym_create_type,
      sym_create_user,
      sym_alter_materialized_view,
      sym_alter_keyspace,
      sym_alter_role,
      sym_alter_table,
      sym_alter_type,
      sym_alter_user,
      sym_apply_batch,
  [92] = 18,
    ACTIONS(5), 1,
      aux_sym_select_statement_token1,
    ACTIONS(7), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(9), 1,
      aux_sym_begin_batch_token1,
    ACTIONS(11), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(13), 1,
      aux_sym_truncate_token1,
    ACTIONS(15), 1,
      aux_sym_create_index_token1,
    ACTIONS(17), 1,
      aux_sym_drop_index_token1,
    ACTIONS(19), 1,
      aux_sym_update_token1,
    ACTIONS(21), 1,
      aux_sym_use_token1,
    ACTIONS(23), 1,
      aux_sym_grant_token1,
    ACTIONS(25), 1,
      aux_sym_priviledge_token3,
    ACTIONS(27), 1,
      aux_sym_revoke_token1,
    ACTIONS(29), 1,
      aux_sym_list_roles_token1,
    ACTIONS(31), 1,
      aux_sym_apply_batch_token1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(615), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(291), 37,
      sym_select_statement,
      sym_delete_statement,
      sym_insert_statement,
      sym_truncate,
      sym_create_index,
      sym_drop_index,
      sym_update,
      sym_use,
      sym_grant,
      sym_revoke,
      sym_list_roles,
      sym_list_permissions,
      sym_drop_aggregate,
      sym_drop_materialized_view,
      sym_drop_function,
      sym_drop_keyspace,
      sym_drop_role,
      sym_drop_table,
      sym_drop_trigger,
      sym_drop_type,
      sym_drop_user,
      sym_create_aggregate,
      sym_create_materialized_view,
      sym_create_function,
      sym_create_keyspace,
      sym_create_role,
      sym_create_table,
      sym_create_trigger,
      sym_create_type,
      sym_create_user,
      sym_alter_materialized_view,
      sym_alter_keyspace,
      sym_alter_role,
      sym_alter_table,
      sym_alter_type,
      sym_alter_user,
      sym_apply_batch,
  [184] = 2,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_if_spec_token1,
    ACTIONS(79), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_COMMA,
      aux_sym_select_element_token1,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
      aux_sym_relation_elements_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [222] = 1,
    ACTIONS(83), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      anon_sym_RBRACK,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_spec_token1,
      aux_sym_insert_statement_token1,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [257] = 1,
    ACTIONS(85), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      anon_sym_RBRACK,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_spec_token1,
      aux_sym_insert_statement_token1,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [292] = 2,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(87), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      anon_sym_RBRACK,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_spec_token1,
      aux_sym_insert_statement_token1,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [328] = 1,
    ACTIONS(91), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      anon_sym_RBRACK,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_spec_token1,
      aux_sym_insert_statement_token1,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [362] = 1,
    ACTIONS(93), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      anon_sym_RBRACK,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_spec_token1,
      aux_sym_insert_statement_token1,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [395] = 1,
    ACTIONS(95), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      anon_sym_RBRACK,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_spec_token1,
      aux_sym_insert_statement_token1,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [428] = 1,
    ACTIONS(97), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      anon_sym_RBRACK,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_spec_token1,
      aux_sym_insert_statement_token1,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [461] = 1,
    ACTIONS(87), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      anon_sym_RBRACK,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_spec_token1,
      aux_sym_insert_statement_token1,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [494] = 2,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(99), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token3,
      anon_sym_LPAREN,
      aux_sym_from_spec_token1,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_insert_values_spec_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_create_materialized_view_token2,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [528] = 2,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(103), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token3,
      anon_sym_LPAREN,
      aux_sym_from_spec_token1,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_insert_values_spec_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_create_materialized_view_token2,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [562] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(1123), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [599] = 2,
    ACTIONS(111), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_object_name,
    ACTIONS(113), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [632] = 1,
    ACTIONS(103), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token3,
      anon_sym_LPAREN,
      aux_sym_from_spec_token1,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_insert_values_spec_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_create_materialized_view_token2,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [663] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(206), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [700] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(938), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [737] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(193), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [774] = 1,
    ACTIONS(99), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token3,
      anon_sym_LPAREN,
      aux_sym_from_spec_token1,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_insert_values_spec_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_create_materialized_view_token2,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [805] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(396), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [842] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(985), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [879] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(1084), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [916] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(970), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [953] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(207), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [990] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(568), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [1027] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(1024), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [1064] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(949), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [1101] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(1056), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [1138] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(1032), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [1175] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(1124), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [1212] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(1025), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [1249] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(1133), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [1286] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(898), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [1323] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(1052), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [1360] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(1080), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [1397] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(1130), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [1434] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(620), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [1471] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(1016), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [1508] = 2,
    ACTIONS(115), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_object_name,
    ACTIONS(117), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [1541] = 4,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(62), 1,
      sym_data_type_name,
    STATE(1087), 1,
      sym_data_type,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [1578] = 3,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(747), 1,
      sym_data_type_name,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [1612] = 2,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_where_spec_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [1644] = 3,
    ACTIONS(107), 1,
      sym_object_name,
    STATE(904), 1,
      sym_data_type_name,
    ACTIONS(109), 25,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
  [1678] = 4,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(128), 1,
      aux_sym_if_spec_token1,
    STATE(46), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(123), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_RPAREN,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [1713] = 4,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      aux_sym_if_spec_token1,
    STATE(52), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(130), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [1747] = 4,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      aux_sym_if_spec_token1,
    STATE(46), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(136), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [1781] = 2,
    ACTIONS(142), 1,
      aux_sym_if_spec_token1,
    ACTIONS(140), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [1811] = 2,
    ACTIONS(146), 1,
      aux_sym_if_spec_token1,
    ACTIONS(144), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [1841] = 2,
    ACTIONS(128), 1,
      aux_sym_if_spec_token1,
    ACTIONS(123), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [1871] = 4,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      aux_sym_if_spec_token1,
    STATE(46), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(148), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [1905] = 2,
    ACTIONS(154), 1,
      aux_sym_if_spec_token1,
    ACTIONS(152), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [1935] = 15,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(666), 1,
      sym_expression,
    STATE(1207), 1,
      sym_expression_list,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
    STATE(870), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [1991] = 1,
    ACTIONS(115), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_drop_type_token1,
      aux_sym_column_not_null_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_apply_batch_token1,
  [2019] = 4,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      aux_sym_if_spec_token1,
    STATE(48), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(176), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2053] = 1,
    ACTIONS(111), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_drop_type_token1,
      aux_sym_column_not_null_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_apply_batch_token1,
  [2081] = 14,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(814), 1,
      sym_expression,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
    STATE(870), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [2134] = 2,
    ACTIONS(182), 1,
      aux_sym_if_spec_token1,
    ACTIONS(180), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2162] = 2,
    ACTIONS(186), 1,
      aux_sym_if_spec_token1,
    ACTIONS(184), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2190] = 1,
    ACTIONS(188), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token3,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [2216] = 3,
    ACTIONS(192), 1,
      anon_sym_LT,
    STATE(90), 1,
      sym_data_type_definition,
    ACTIONS(190), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token3,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [2246] = 2,
    ACTIONS(196), 1,
      aux_sym_if_spec_token1,
    ACTIONS(194), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2274] = 2,
    ACTIONS(200), 1,
      aux_sym_if_spec_token1,
    ACTIONS(198), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2302] = 8,
    ACTIONS(204), 1,
      aux_sym_select_statement_token4,
    ACTIONS(206), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(208), 1,
      aux_sym_where_spec_token1,
    ACTIONS(210), 1,
      aux_sym_order_spec_token1,
    STATE(80), 1,
      sym_where_spec,
    STATE(122), 1,
      sym_order_spec,
    STATE(245), 1,
      sym_limit_spec,
    ACTIONS(202), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2342] = 8,
    ACTIONS(206), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(208), 1,
      aux_sym_where_spec_token1,
    ACTIONS(210), 1,
      aux_sym_order_spec_token1,
    ACTIONS(214), 1,
      aux_sym_select_statement_token4,
    STATE(91), 1,
      sym_where_spec,
    STATE(141), 1,
      sym_order_spec,
    STATE(229), 1,
      sym_limit_spec,
    ACTIONS(212), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2382] = 2,
    ACTIONS(218), 1,
      aux_sym_if_spec_token1,
    ACTIONS(216), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2410] = 2,
    ACTIONS(222), 1,
      aux_sym_if_spec_token1,
    ACTIONS(220), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2438] = 2,
    ACTIONS(226), 1,
      aux_sym_if_spec_token1,
    ACTIONS(224), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2466] = 2,
    ACTIONS(230), 1,
      aux_sym_if_spec_token1,
    ACTIONS(228), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2494] = 8,
    ACTIONS(206), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(208), 1,
      aux_sym_where_spec_token1,
    ACTIONS(210), 1,
      aux_sym_order_spec_token1,
    ACTIONS(234), 1,
      aux_sym_select_statement_token4,
    STATE(88), 1,
      sym_where_spec,
    STATE(143), 1,
      sym_order_spec,
    STATE(224), 1,
      sym_limit_spec,
    ACTIONS(232), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2534] = 3,
    ACTIONS(238), 1,
      sym__hex_digit,
    STATE(72), 1,
      aux_sym_hexadecimal_literal_repeat2,
    ACTIONS(236), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2563] = 2,
    ACTIONS(243), 1,
      aux_sym_if_spec_token1,
    ACTIONS(241), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2590] = 3,
    ACTIONS(247), 1,
      sym__hex_digit,
    STATE(72), 1,
      aux_sym_hexadecimal_literal_repeat2,
    ACTIONS(245), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2619] = 1,
    ACTIONS(249), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_LPAREN,
      aux_sym_from_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_create_aggregate_token2,
      aux_sym_create_aggregate_token4,
      aux_sym_apply_batch_token1,
  [2644] = 15,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(251), 1,
      aux_sym_constant_token1,
    ACTIONS(255), 1,
      sym_object_name,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(889), 1,
      sym_constant,
    ACTIONS(158), 2,
      sym_uuid,
      sym_string_literal,
    ACTIONS(253), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    STATE(584), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [2697] = 8,
    ACTIONS(261), 1,
      sym_object_name,
    ACTIONS(263), 1,
      aux_sym_clustering_order_token1,
    STATE(162), 1,
      sym_table_option_item,
    STATE(171), 1,
      sym_table_options,
    STATE(408), 1,
      sym_clustering_order,
    STATE(1174), 1,
      sym_table_option_name,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(259), 14,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2736] = 2,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(265), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_where_spec_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2763] = 3,
    ACTIONS(269), 1,
      aux_sym_relation_elements_token1,
    STATE(79), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(241), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2791] = 6,
    ACTIONS(206), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(210), 1,
      aux_sym_order_spec_token1,
    ACTIONS(214), 1,
      aux_sym_select_statement_token4,
    STATE(141), 1,
      sym_order_spec,
    STATE(229), 1,
      sym_limit_spec,
    ACTIONS(212), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2825] = 12,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(369), 1,
      sym_init_cond_definition,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
    STATE(199), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [2871] = 12,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(359), 1,
      sym_init_cond_definition,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
    STATE(199), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [2917] = 16,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(251), 1,
      aux_sym_constant_token1,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      sym_object_name,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(732), 1,
      sym_init_cond_hash_item,
    STATE(734), 1,
      sym_init_cond_list,
    STATE(735), 1,
      sym_constant,
    STATE(1136), 1,
      sym_hash_key,
    ACTIONS(158), 2,
      sym_uuid,
      sym_string_literal,
    ACTIONS(253), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [2971] = 12,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(383), 1,
      sym_init_cond_definition,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
    STATE(199), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [3017] = 3,
    ACTIONS(280), 1,
      sym__hex_digit,
    STATE(85), 1,
      aux_sym_hexadecimal_literal_repeat2,
    ACTIONS(236), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3045] = 12,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(411), 1,
      sym_init_cond_definition,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
    STATE(199), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [3091] = 3,
    ACTIONS(283), 1,
      sym__hex_digit,
    STATE(85), 1,
      aux_sym_hexadecimal_literal_repeat2,
    ACTIONS(245), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3119] = 6,
    ACTIONS(204), 1,
      aux_sym_select_statement_token4,
    ACTIONS(206), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(210), 1,
      aux_sym_order_spec_token1,
    STATE(122), 1,
      sym_order_spec,
    STATE(245), 1,
      sym_limit_spec,
    ACTIONS(202), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3153] = 15,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(251), 1,
      aux_sym_constant_token1,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      sym_object_name,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(1099), 1,
      sym_function_args,
    STATE(1246), 1,
      sym_function_name,
    ACTIONS(158), 2,
      sym_uuid,
      sym_string_literal,
    ACTIONS(253), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    STATE(763), 2,
      sym_function_call,
      sym_constant,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [3205] = 1,
    ACTIONS(289), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token3,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [3229] = 6,
    ACTIONS(206), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(210), 1,
      aux_sym_order_spec_token1,
    ACTIONS(293), 1,
      aux_sym_select_statement_token4,
    STATE(138), 1,
      sym_order_spec,
    STATE(228), 1,
      sym_limit_spec,
    ACTIONS(291), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3263] = 1,
    ACTIONS(295), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_where_spec_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3287] = 1,
    ACTIONS(297), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_where_spec_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3311] = 12,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(844), 1,
      sym_init_cond_definition,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
    STATE(199), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [3357] = 4,
    ACTIONS(299), 1,
      sym__hex_digit,
    ACTIONS(301), 1,
      aux_sym_if_spec_token1,
    STATE(98), 1,
      aux_sym_hexadecimal_literal_repeat2,
    ACTIONS(245), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3387] = 1,
    ACTIONS(303), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token3,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [3411] = 3,
    STATE(222), 1,
      sym_order_direction,
    ACTIONS(307), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(305), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3439] = 4,
    ACTIONS(309), 1,
      sym__hex_digit,
    ACTIONS(312), 1,
      aux_sym_if_spec_token1,
    STATE(98), 1,
      aux_sym_hexadecimal_literal_repeat2,
    ACTIONS(236), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3469] = 1,
    ACTIONS(101), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_DOT,
      aux_sym_from_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_create_materialized_view_token2,
      aux_sym_apply_batch_token1,
  [3493] = 2,
    ACTIONS(316), 1,
      aux_sym_if_spec_token1,
    ACTIONS(314), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3519] = 12,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(385), 1,
      sym_init_cond_definition,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
    STATE(199), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [3565] = 2,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(249), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_LPAREN,
      aux_sym_from_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3591] = 3,
    ACTIONS(320), 1,
      aux_sym_relation_elements_token1,
    STATE(79), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(318), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3619] = 1,
    ACTIONS(322), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token3,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [3643] = 1,
    ACTIONS(324), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_from_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_list_roles_token3,
      aux_sym_create_materialized_view_token2,
      aux_sym_apply_batch_token1,
  [3667] = 3,
    ACTIONS(320), 1,
      aux_sym_relation_elements_token1,
    STATE(103), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(326), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3695] = 5,
    ACTIONS(330), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(332), 1,
      aux_sym_if_spec_token1,
    STATE(211), 1,
      sym_if_not_exist,
    STATE(330), 1,
      sym_using_ttl_timestamp,
    ACTIONS(328), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3726] = 2,
    ACTIONS(336), 1,
      aux_sym_relation_element_token1,
    ACTIONS(334), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_from_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3751] = 4,
    ACTIONS(338), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(340), 1,
      aux_sym_if_spec_token1,
    STATE(121), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(318), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3780] = 5,
    ACTIONS(330), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(332), 1,
      aux_sym_if_spec_token1,
    STATE(200), 1,
      sym_if_not_exist,
    STATE(302), 1,
      sym_using_ttl_timestamp,
    ACTIONS(342), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3811] = 2,
    ACTIONS(344), 1,
      aux_sym_if_spec_token1,
    ACTIONS(85), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_DOT,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3836] = 2,
    ACTIONS(346), 1,
      aux_sym_if_spec_token1,
    ACTIONS(83), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_DOT,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3861] = 3,
    ACTIONS(348), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      aux_sym_if_spec_token1,
    ACTIONS(87), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3888] = 5,
    ACTIONS(330), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(332), 1,
      aux_sym_if_spec_token1,
    STATE(175), 1,
      sym_if_not_exist,
    STATE(400), 1,
      sym_using_ttl_timestamp,
    ACTIONS(352), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3919] = 5,
    ACTIONS(330), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(332), 1,
      aux_sym_if_spec_token1,
    STATE(204), 1,
      sym_if_not_exist,
    STATE(343), 1,
      sym_using_ttl_timestamp,
    ACTIONS(354), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3950] = 2,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(356), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_LPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [3975] = 1,
    ACTIONS(105), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_from_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_create_materialized_view_token2,
      aux_sym_apply_batch_token1,
  [3998] = 5,
    ACTIONS(330), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(332), 1,
      aux_sym_if_spec_token1,
    STATE(202), 1,
      sym_if_not_exist,
    STATE(412), 1,
      sym_using_ttl_timestamp,
    ACTIONS(358), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4029] = 14,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(251), 1,
      aux_sym_constant_token1,
    ACTIONS(287), 1,
      sym_object_name,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(1189), 1,
      sym_function_args,
    STATE(1246), 1,
      sym_function_name,
    ACTIONS(158), 2,
      sym_uuid,
      sym_string_literal,
    ACTIONS(253), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    STATE(763), 2,
      sym_function_call,
      sym_constant,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [4078] = 4,
    ACTIONS(338), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(360), 1,
      aux_sym_if_spec_token1,
    STATE(109), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(326), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4107] = 4,
    ACTIONS(243), 1,
      aux_sym_if_spec_token1,
    ACTIONS(362), 1,
      aux_sym_relation_elements_token1,
    STATE(121), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(241), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4136] = 4,
    ACTIONS(206), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(214), 1,
      aux_sym_select_statement_token4,
    STATE(229), 1,
      sym_limit_spec,
    ACTIONS(212), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4164] = 1,
    ACTIONS(334), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_from_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [4186] = 1,
    ACTIONS(356), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_LPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [4208] = 4,
    ACTIONS(367), 1,
      sym_if_exist,
    ACTIONS(369), 1,
      aux_sym_if_spec_token1,
    STATE(289), 1,
      sym_if_spec,
    ACTIONS(365), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4236] = 3,
    STATE(365), 1,
      sym_user_super_user,
    ACTIONS(373), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(371), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4262] = 1,
    ACTIONS(375), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4284] = 2,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(377), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_element_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token2,
      aux_sym_apply_batch_token1,
  [4308] = 4,
    ACTIONS(369), 1,
      aux_sym_if_spec_token1,
    ACTIONS(381), 1,
      sym_if_exist,
    STATE(382), 1,
      sym_if_spec,
    ACTIONS(379), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4336] = 1,
    ACTIONS(383), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_from_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [4358] = 3,
    ACTIONS(387), 1,
      aux_sym_relation_elements_token1,
    STATE(134), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(385), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4384] = 4,
    ACTIONS(369), 1,
      aux_sym_if_spec_token1,
    ACTIONS(391), 1,
      sym_if_exist,
    STATE(398), 1,
      sym_if_spec,
    ACTIONS(389), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4412] = 13,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(251), 1,
      aux_sym_constant_token1,
    ACTIONS(393), 1,
      sym_object_name,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(1246), 1,
      sym_function_name,
    ACTIONS(158), 2,
      sym_uuid,
      sym_string_literal,
    ACTIONS(253), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    STATE(63), 2,
      sym_function_call,
      sym_constant,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [4458] = 3,
    ACTIONS(397), 1,
      aux_sym_relation_elements_token1,
    STATE(134), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(395), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4484] = 1,
    ACTIONS(400), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4506] = 4,
    ACTIONS(369), 1,
      aux_sym_if_spec_token1,
    ACTIONS(404), 1,
      sym_if_exist,
    STATE(389), 1,
      sym_if_spec,
    ACTIONS(402), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4534] = 4,
    ACTIONS(369), 1,
      aux_sym_if_spec_token1,
    ACTIONS(408), 1,
      sym_if_exist,
    STATE(404), 1,
      sym_if_spec,
    ACTIONS(406), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4562] = 4,
    ACTIONS(206), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(412), 1,
      aux_sym_select_statement_token4,
    STATE(239), 1,
      sym_limit_spec,
    ACTIONS(410), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4590] = 1,
    ACTIONS(414), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_RPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4612] = 1,
    ACTIONS(416), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_from_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [4634] = 4,
    ACTIONS(206), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(293), 1,
      aux_sym_select_statement_token4,
    STATE(228), 1,
      sym_limit_spec,
    ACTIONS(291), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4662] = 3,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(418), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_from_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4688] = 4,
    ACTIONS(204), 1,
      aux_sym_select_statement_token4,
    ACTIONS(206), 1,
      aux_sym_limit_spec_token1,
    STATE(245), 1,
      sym_limit_spec,
    ACTIONS(202), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4716] = 2,
    ACTIONS(423), 1,
      aux_sym_if_spec_token1,
    ACTIONS(91), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4740] = 3,
    STATE(313), 1,
      sym_user_super_user,
    ACTIONS(373), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(425), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4766] = 2,
    ACTIONS(429), 1,
      aux_sym_priviledge_token2,
    ACTIONS(427), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_create_index_token3,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [4790] = 1,
    ACTIONS(431), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_from_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [4812] = 3,
    STATE(265), 1,
      sym_user_super_user,
    ACTIONS(373), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(433), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4838] = 2,
    ACTIONS(435), 1,
      aux_sym_if_spec_token1,
    ACTIONS(95), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4862] = 2,
    ACTIONS(437), 1,
      aux_sym_if_spec_token1,
    ACTIONS(93), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4886] = 1,
    ACTIONS(439), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_from_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [4908] = 4,
    ACTIONS(369), 1,
      aux_sym_if_spec_token1,
    ACTIONS(443), 1,
      sym_if_exist,
    STATE(370), 1,
      sym_if_spec,
    ACTIONS(441), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4936] = 4,
    ACTIONS(369), 1,
      aux_sym_if_spec_token1,
    ACTIONS(447), 1,
      sym_if_exist,
    STATE(312), 1,
      sym_if_spec,
    ACTIONS(445), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4964] = 3,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_type_member_column_list_repeat1,
    ACTIONS(449), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_RPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4990] = 13,
    ACTIONS(393), 1,
      sym_object_name,
    ACTIONS(454), 1,
      aux_sym_constant_token1,
    ACTIONS(458), 1,
      anon_sym_DASH,
    ACTIONS(460), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(462), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(464), 1,
      anon_sym_0X,
    ACTIONS(468), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(113), 1,
      sym_decimal_literal,
    STATE(1246), 1,
      sym_function_name,
    ACTIONS(456), 2,
      sym_uuid,
      sym_string_literal,
    ACTIONS(466), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    STATE(63), 2,
      sym_function_call,
      sym_constant,
    STATE(165), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [5036] = 1,
    ACTIONS(418), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5058] = 4,
    ACTIONS(369), 1,
      aux_sym_if_spec_token1,
    ACTIONS(472), 1,
      sym_if_exist,
    STATE(316), 1,
      sym_if_spec,
    ACTIONS(470), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5086] = 13,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(251), 1,
      aux_sym_constant_token1,
    ACTIONS(393), 1,
      sym_object_name,
    ACTIONS(474), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(1246), 1,
      sym_function_name,
    ACTIONS(158), 2,
      sym_uuid,
      sym_string_literal,
    ACTIONS(253), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    STATE(63), 2,
      sym_function_call,
      sym_constant,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [5132] = 13,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(251), 1,
      aux_sym_constant_token1,
    ACTIONS(476), 1,
      sym_object_name,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(1246), 1,
      sym_function_name,
    ACTIONS(158), 2,
      sym_uuid,
      sym_string_literal,
    ACTIONS(253), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    STATE(866), 2,
      sym_function_call,
      sym_constant,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [5178] = 4,
    ACTIONS(369), 1,
      aux_sym_if_spec_token1,
    ACTIONS(480), 1,
      sym_if_exist,
    STATE(292), 1,
      sym_if_spec,
    ACTIONS(478), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5206] = 1,
    ACTIONS(482), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5228] = 3,
    ACTIONS(387), 1,
      aux_sym_relation_elements_token1,
    STATE(131), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(484), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [5254] = 4,
    ACTIONS(369), 1,
      aux_sym_if_spec_token1,
    ACTIONS(488), 1,
      sym_if_exist,
    STATE(284), 1,
      sym_if_spec,
    ACTIONS(486), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5282] = 2,
    ACTIONS(490), 1,
      aux_sym_if_spec_token1,
    ACTIONS(97), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5306] = 2,
    ACTIONS(350), 1,
      aux_sym_if_spec_token1,
    ACTIONS(87), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      sym_if_exist,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5330] = 1,
    ACTIONS(492), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5351] = 3,
    ACTIONS(496), 1,
      aux_sym_relation_elements_token1,
    STATE(167), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(494), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5376] = 3,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(499), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5401] = 1,
    ACTIONS(504), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
      aux_sym_apply_batch_token1,
  [5422] = 3,
    ACTIONS(508), 1,
      aux_sym_create_materialized_view_token2,
    STATE(326), 1,
      sym_with_element,
    ACTIONS(506), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5447] = 3,
    ACTIONS(512), 1,
      aux_sym_clustering_order_token1,
    STATE(325), 1,
      sym_clustering_order,
    ACTIONS(510), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5472] = 3,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_type_member_column_list_repeat1,
    ACTIONS(514), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5497] = 1,
    ACTIONS(518), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5518] = 3,
    ACTIONS(522), 1,
      aux_sym_create_materialized_view_token2,
    STATE(268), 1,
      sym_role_with,
    ACTIONS(520), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5543] = 3,
    ACTIONS(330), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(302), 1,
      sym_using_ttl_timestamp,
    ACTIONS(342), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5568] = 3,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(524), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5593] = 3,
    ACTIONS(508), 1,
      aux_sym_create_materialized_view_token2,
    STATE(406), 1,
      sym_with_element,
    ACTIONS(528), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5618] = 1,
    ACTIONS(530), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5639] = 1,
    ACTIONS(532), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5660] = 1,
    ACTIONS(534), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5681] = 2,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(536), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_LPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5704] = 3,
    ACTIONS(540), 1,
      aux_sym_relation_elements_token1,
    STATE(215), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(538), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5729] = 11,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_decimal_literal,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    STATE(838), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [5770] = 1,
    ACTIONS(542), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5791] = 3,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(544), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5816] = 3,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_type_member_column_list_repeat1,
    ACTIONS(548), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5841] = 1,
    ACTIONS(550), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_create_index_token3,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [5862] = 3,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(552), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5887] = 1,
    ACTIONS(377), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_element_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token2,
      aux_sym_apply_batch_token1,
  [5908] = 3,
    ACTIONS(522), 1,
      aux_sym_create_materialized_view_token2,
    STATE(340), 1,
      sym_role_with,
    ACTIONS(554), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5933] = 1,
    ACTIONS(556), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [5954] = 3,
    ACTIONS(560), 1,
      aux_sym_create_index_token3,
    ACTIONS(562), 1,
      aux_sym_list_roles_token2,
    ACTIONS(558), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5979] = 3,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_type_member_column_list_repeat1,
    ACTIONS(564), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6004] = 3,
    ACTIONS(522), 1,
      aux_sym_create_materialized_view_token2,
    STATE(410), 1,
      sym_role_with,
    ACTIONS(566), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6029] = 3,
    ACTIONS(570), 1,
      aux_sym_list_roles_token2,
    ACTIONS(572), 1,
      aux_sym_list_roles_token3,
    ACTIONS(568), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6054] = 3,
    ACTIONS(508), 1,
      aux_sym_create_materialized_view_token2,
    STATE(341), 1,
      sym_with_element,
    ACTIONS(574), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6079] = 2,
    STATE(212), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(484), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6102] = 1,
    ACTIONS(576), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [6123] = 1,
    ACTIONS(578), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6144] = 3,
    ACTIONS(330), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(330), 1,
      sym_using_ttl_timestamp,
    ACTIONS(328), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6169] = 3,
    ACTIONS(582), 1,
      aux_sym_relation_elements_token1,
    STATE(214), 1,
      aux_sym_alter_type_rename_list_repeat1,
    ACTIONS(580), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6194] = 3,
    ACTIONS(330), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(343), 1,
      sym_using_ttl_timestamp,
    ACTIONS(354), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6219] = 1,
    ACTIONS(584), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6240] = 3,
    ACTIONS(330), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(266), 1,
      sym_using_ttl_timestamp,
    ACTIONS(586), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6265] = 1,
    ACTIONS(427), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_create_index_token3,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [6286] = 1,
    ACTIONS(588), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6307] = 3,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_type_member_column_list_repeat1,
    ACTIONS(590), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6332] = 3,
    ACTIONS(594), 1,
      aux_sym_relation_elements_token1,
    STATE(208), 1,
      aux_sym_alter_type_rename_list_repeat1,
    ACTIONS(592), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6357] = 1,
    ACTIONS(597), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6378] = 1,
    ACTIONS(599), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6399] = 3,
    ACTIONS(330), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(412), 1,
      sym_using_ttl_timestamp,
    ACTIONS(358), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6424] = 2,
    STATE(134), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(385), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6447] = 12,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(51), 1,
      sym_assignment_tuple,
    STATE(593), 1,
      sym_constant,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [6490] = 3,
    ACTIONS(582), 1,
      aux_sym_relation_elements_token1,
    STATE(208), 1,
      aux_sym_alter_type_rename_list_repeat1,
    ACTIONS(601), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6515] = 3,
    ACTIONS(540), 1,
      aux_sym_relation_elements_token1,
    STATE(167), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(603), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6540] = 2,
    ACTIONS(607), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(605), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6563] = 3,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(609), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6588] = 1,
    ACTIONS(395), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [6609] = 2,
    ACTIONS(611), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(605), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6632] = 3,
    ACTIONS(508), 1,
      aux_sym_create_materialized_view_token2,
    STATE(276), 1,
      sym_with_element,
    ACTIONS(613), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6657] = 1,
    ACTIONS(615), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6678] = 1,
    ACTIONS(617), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6699] = 1,
    ACTIONS(592), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6719] = 2,
    ACTIONS(204), 1,
      aux_sym_select_statement_token4,
    ACTIONS(202), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6741] = 1,
    ACTIONS(619), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6761] = 1,
    ACTIONS(621), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token2,
      aux_sym_apply_batch_token1,
  [6781] = 1,
    ACTIONS(623), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_create_index_token3,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6801] = 2,
    ACTIONS(412), 1,
      aux_sym_select_statement_token4,
    ACTIONS(410), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6823] = 2,
    ACTIONS(293), 1,
      aux_sym_select_statement_token4,
    ACTIONS(291), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6845] = 2,
    ACTIONS(627), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(625), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6867] = 1,
    ACTIONS(629), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6887] = 2,
    ACTIONS(633), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(631), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6909] = 1,
    ACTIONS(494), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6929] = 11,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(635), 1,
      aux_sym_relation_contains_key_token2,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(60), 1,
      sym_constant,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [6969] = 2,
    ACTIONS(639), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(637), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6991] = 2,
    ACTIONS(643), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(641), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7013] = 2,
    ACTIONS(647), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(645), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7035] = 2,
    ACTIONS(651), 1,
      aux_sym_list_roles_token3,
    ACTIONS(649), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7057] = 2,
    ACTIONS(655), 1,
      aux_sym_select_statement_token4,
    ACTIONS(653), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7079] = 11,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(559), 1,
      sym_constant,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [7119] = 2,
    ACTIONS(661), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(659), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7141] = 1,
    ACTIONS(536), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_LPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7161] = 1,
    ACTIONS(663), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7181] = 2,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(623), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7203] = 2,
    ACTIONS(214), 1,
      aux_sym_select_statement_token4,
    ACTIONS(212), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7225] = 2,
    ACTIONS(667), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(665), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7247] = 1,
    ACTIONS(669), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7267] = 2,
    ACTIONS(673), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(671), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7289] = 11,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(474), 1,
      anon_sym_0X,
    ACTIONS(675), 1,
      aux_sym_relation_contains_key_token2,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(60), 1,
      sym_constant,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [7329] = 2,
    ACTIONS(679), 1,
      aux_sym_list_roles_token2,
    ACTIONS(677), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7351] = 11,
    ACTIONS(458), 1,
      anon_sym_DASH,
    ACTIONS(460), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(462), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(464), 1,
      anon_sym_0X,
    ACTIONS(468), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(683), 1,
      aux_sym_relation_contains_key_token2,
    STATE(60), 1,
      sym_constant,
    STATE(113), 1,
      sym_decimal_literal,
    ACTIONS(681), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(456), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(165), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [7391] = 2,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(621), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7413] = 1,
    ACTIONS(685), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_update_token2,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7433] = 2,
    ACTIONS(689), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(687), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7455] = 1,
    ACTIONS(691), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7475] = 2,
    ACTIONS(695), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(693), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7497] = 2,
    ACTIONS(699), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(697), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7519] = 2,
    ACTIONS(703), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(701), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7541] = 1,
    ACTIONS(499), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      anon_sym_COMMA,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7561] = 1,
    ACTIONS(705), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7580] = 1,
    ACTIONS(645), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7599] = 1,
    ACTIONS(707), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7618] = 1,
    ACTIONS(709), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7637] = 1,
    ACTIONS(711), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7656] = 1,
    ACTIONS(371), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7675] = 1,
    ACTIONS(713), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7694] = 1,
    ACTIONS(715), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7713] = 1,
    ACTIONS(566), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7732] = 1,
    ACTIONS(717), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7751] = 1,
    ACTIONS(719), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7770] = 1,
    ACTIONS(721), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7789] = 1,
    ACTIONS(723), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7808] = 1,
    ACTIONS(725), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7827] = 1,
    ACTIONS(727), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7846] = 1,
    ACTIONS(729), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7865] = 1,
    ACTIONS(731), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7884] = 1,
    ACTIONS(733), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7903] = 1,
    ACTIONS(735), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7922] = 10,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(1002), 1,
      sym_constant,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [7959] = 1,
    ACTIONS(737), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7978] = 1,
    ACTIONS(739), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7997] = 1,
    ACTIONS(741), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8016] = 1,
    ACTIONS(743), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8035] = 1,
    ACTIONS(379), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8054] = 1,
    ACTIONS(745), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8073] = 1,
    ACTIONS(747), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8092] = 1,
    ACTIONS(749), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8111] = 1,
    ACTIONS(751), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8130] = 1,
    ACTIONS(753), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8149] = 1,
    ACTIONS(755), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8168] = 2,
    ACTIONS(759), 1,
      anon_sym_SEMI,
    ACTIONS(757), 15,
      ts_builtin_sym_end,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8189] = 1,
    ACTIONS(389), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8208] = 1,
    ACTIONS(761), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8227] = 1,
    ACTIONS(763), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8246] = 1,
    ACTIONS(765), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8265] = 10,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(274), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(179), 1,
      sym_constant,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [8302] = 1,
    ACTIONS(767), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8321] = 1,
    ACTIONS(769), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8340] = 1,
    ACTIONS(771), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8359] = 10,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(59), 1,
      sym_constant,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [8396] = 1,
    ACTIONS(773), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8415] = 1,
    ACTIONS(328), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8434] = 1,
    ACTIONS(665), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8453] = 10,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(799), 1,
      sym_constant,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [8490] = 1,
    ACTIONS(775), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8509] = 1,
    ACTIONS(777), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8528] = 10,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(63), 1,
      sym_constant,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [8565] = 10,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(701), 1,
      sym_constant,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [8602] = 10,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(473), 1,
      sym_constant,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [8639] = 1,
    ACTIONS(779), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8658] = 1,
    ACTIONS(781), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8677] = 1,
    ACTIONS(402), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8696] = 1,
    ACTIONS(783), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8715] = 1,
    ACTIONS(785), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8734] = 1,
    ACTIONS(787), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8753] = 1,
    ACTIONS(406), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8772] = 1,
    ACTIONS(789), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8791] = 1,
    ACTIONS(791), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8810] = 1,
    ACTIONS(793), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8829] = 10,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(274), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(231), 1,
      sym_constant,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [8866] = 1,
    ACTIONS(795), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8885] = 10,
    ACTIONS(458), 1,
      anon_sym_DASH,
    ACTIONS(460), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(462), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(464), 1,
      anon_sym_0X,
    ACTIONS(468), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(59), 1,
      sym_constant,
    STATE(113), 1,
      sym_decimal_literal,
    ACTIONS(681), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(456), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(165), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [8922] = 1,
    ACTIONS(410), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8941] = 1,
    ACTIONS(291), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8960] = 1,
    ACTIONS(797), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8979] = 1,
    ACTIONS(613), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8998] = 10,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(474), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(59), 1,
      sym_constant,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [9035] = 1,
    ACTIONS(799), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9054] = 1,
    ACTIONS(801), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9073] = 1,
    ACTIONS(358), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9092] = 1,
    ACTIONS(803), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9111] = 10,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(474), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(63), 1,
      sym_constant,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [9148] = 1,
    ACTIONS(805), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9167] = 1,
    ACTIONS(807), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9186] = 1,
    ACTIONS(809), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9205] = 1,
    ACTIONS(811), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9224] = 1,
    ACTIONS(813), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9243] = 1,
    ACTIONS(815), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9262] = 1,
    ACTIONS(817), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9281] = 1,
    ACTIONS(819), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9300] = 1,
    ACTIONS(528), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9319] = 1,
    ACTIONS(821), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9338] = 1,
    ACTIONS(586), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9357] = 1,
    ACTIONS(823), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9376] = 1,
    ACTIONS(825), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9395] = 1,
    ACTIONS(827), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9414] = 1,
    ACTIONS(829), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9433] = 1,
    ACTIONS(831), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9452] = 1,
    ACTIONS(833), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9471] = 1,
    ACTIONS(697), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9490] = 1,
    ACTIONS(835), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9509] = 1,
    ACTIONS(837), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9528] = 1,
    ACTIONS(677), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9547] = 1,
    ACTIONS(839), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9566] = 1,
    ACTIONS(841), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9585] = 1,
    ACTIONS(843), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9604] = 1,
    ACTIONS(845), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9623] = 1,
    ACTIONS(847), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9642] = 1,
    ACTIONS(849), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9661] = 10,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(912), 1,
      sym_constant,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [9698] = 1,
    ACTIONS(851), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9717] = 1,
    ACTIONS(853), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9736] = 1,
    ACTIONS(855), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9755] = 1,
    ACTIONS(212), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9774] = 1,
    ACTIONS(857), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9793] = 1,
    ACTIONS(859), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9812] = 1,
    ACTIONS(861), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9831] = 1,
    ACTIONS(863), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9850] = 1,
    ACTIONS(865), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9869] = 1,
    ACTIONS(478), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9888] = 1,
    ACTIONS(867), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9907] = 1,
    ACTIONS(869), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9926] = 1,
    ACTIONS(871), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9945] = 10,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(735), 1,
      sym_constant,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [9982] = 1,
    ACTIONS(873), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10001] = 1,
    ACTIONS(875), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10020] = 1,
    ACTIONS(637), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10039] = 1,
    ACTIONS(877), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10058] = 1,
    ACTIONS(879), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10077] = 1,
    ACTIONS(881), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10096] = 1,
    ACTIONS(883), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10115] = 1,
    ACTIONS(441), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10134] = 1,
    ACTIONS(885), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10153] = 10,
    ACTIONS(458), 1,
      anon_sym_DASH,
    ACTIONS(460), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(462), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(464), 1,
      anon_sym_0X,
    ACTIONS(468), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(63), 1,
      sym_constant,
    STATE(113), 1,
      sym_decimal_literal,
    ACTIONS(681), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(456), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(165), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10190] = 1,
    ACTIONS(887), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10209] = 1,
    ACTIONS(889), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10228] = 1,
    ACTIONS(891), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10247] = 1,
    ACTIONS(893), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10266] = 1,
    ACTIONS(470), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10285] = 1,
    ACTIONS(659), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10304] = 1,
    ACTIONS(895), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10323] = 1,
    ACTIONS(897), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10342] = 1,
    ACTIONS(899), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10361] = 1,
    ACTIONS(901), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10380] = 1,
    ACTIONS(903), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10399] = 1,
    ACTIONS(905), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10418] = 1,
    ACTIONS(907), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10437] = 1,
    ACTIONS(365), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10456] = 1,
    ACTIONS(701), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10475] = 1,
    ACTIONS(342), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10494] = 1,
    ACTIONS(909), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10513] = 1,
    ACTIONS(911), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10532] = 1,
    ACTIONS(913), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10551] = 1,
    ACTIONS(915), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10570] = 1,
    ACTIONS(917), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10589] = 1,
    ACTIONS(506), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10608] = 1,
    ACTIONS(653), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10627] = 1,
    ACTIONS(510), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10646] = 1,
    ACTIONS(919), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10665] = 1,
    ACTIONS(921), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10684] = 1,
    ACTIONS(923), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10703] = 1,
    ACTIONS(354), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10722] = 1,
    ACTIONS(925), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10741] = 1,
    ACTIONS(927), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10760] = 10,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(645), 1,
      sym_constant,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10797] = 10,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(164), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_0X,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(593), 1,
      sym_constant,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(158), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(12), 4,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10834] = 1,
    ACTIONS(929), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10853] = 1,
    ACTIONS(931), 15,
      ts_builtin_sym_end,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10871] = 12,
    ACTIONS(933), 1,
      aux_sym_truncate_token2,
    ACTIONS(935), 1,
      aux_sym_create_index_token2,
    ACTIONS(937), 1,
      aux_sym_resource_token2,
    ACTIONS(939), 1,
      aux_sym_resource_token3,
    ACTIONS(941), 1,
      aux_sym_resource_token6,
    ACTIONS(943), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(945), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(947), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(949), 1,
      aux_sym_drop_type_token1,
    ACTIONS(951), 1,
      aux_sym_drop_user_token1,
    ACTIONS(953), 1,
      aux_sym_or_replace_token1,
    STATE(885), 1,
      sym_or_replace,
  [10908] = 4,
    ACTIONS(957), 1,
      aux_sym_priviledge_token1,
    ACTIONS(959), 1,
      aux_sym_resource_token5,
    STATE(192), 1,
      sym_priviledge,
    ACTIONS(955), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10928] = 3,
    ACTIONS(957), 1,
      aux_sym_priviledge_token1,
    STATE(1220), 1,
      sym_priviledge,
    ACTIONS(955), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10945] = 10,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    ACTIONS(965), 1,
      aux_sym_truncate_token2,
    ACTIONS(967), 1,
      aux_sym_priviledge_token1,
    ACTIONS(969), 1,
      aux_sym_resource_token2,
    ACTIONS(971), 1,
      aux_sym_resource_token3,
    ACTIONS(973), 1,
      aux_sym_resource_token6,
    STATE(140), 1,
      sym_table,
    STATE(934), 1,
      sym_keyspace,
    STATE(981), 1,
      sym_resource,
  [10976] = 6,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
    ACTIONS(979), 1,
      aux_sym_relation_element_token1,
    ACTIONS(981), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(977), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10999] = 6,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
    ACTIONS(979), 1,
      aux_sym_relation_element_token1,
    ACTIONS(983), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(977), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11022] = 7,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    ACTIONS(989), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(991), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(993), 1,
      aux_sym_index_full_spec_token1,
    STATE(964), 1,
      sym_index_column_spec,
    STATE(1222), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11047] = 6,
    ACTIONS(995), 1,
      aux_sym_drop_index_token1,
    ACTIONS(997), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(999), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1001), 1,
      aux_sym_alter_table_rename_token1,
    STATE(287), 1,
      sym_alter_table_operation,
    STATE(338), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [11070] = 7,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    ACTIONS(989), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(991), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(993), 1,
      aux_sym_index_full_spec_token1,
    STATE(1048), 1,
      sym_index_column_spec,
    STATE(1222), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11095] = 3,
    ACTIONS(1003), 1,
      sym__hex_digit,
    STATE(428), 1,
      aux_sym_hexadecimal_literal_repeat2,
    ACTIONS(236), 8,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_create_materialized_view_token1,
  [11112] = 7,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    ACTIONS(989), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(991), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(993), 1,
      aux_sym_index_full_spec_token1,
    STATE(1146), 1,
      sym_index_column_spec,
    STATE(1222), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11137] = 3,
    ACTIONS(957), 1,
      aux_sym_priviledge_token1,
    STATE(1214), 1,
      sym_priviledge,
    ACTIONS(955), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [11154] = 7,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    ACTIONS(989), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(991), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(993), 1,
      aux_sym_index_full_spec_token1,
    STATE(974), 1,
      sym_index_column_spec,
    STATE(1222), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11179] = 7,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    ACTIONS(989), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(991), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(993), 1,
      aux_sym_index_full_spec_token1,
    STATE(1223), 1,
      sym_index_column_spec,
    STATE(1222), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11204] = 10,
    ACTIONS(1006), 1,
      aux_sym_truncate_token2,
    ACTIONS(1008), 1,
      aux_sym_create_index_token2,
    ACTIONS(1010), 1,
      aux_sym_resource_token2,
    ACTIONS(1012), 1,
      aux_sym_resource_token3,
    ACTIONS(1014), 1,
      aux_sym_resource_token6,
    ACTIONS(1016), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(1018), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1020), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(1022), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1024), 1,
      aux_sym_drop_user_token1,
  [11235] = 10,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    ACTIONS(965), 1,
      aux_sym_truncate_token2,
    ACTIONS(967), 1,
      aux_sym_priviledge_token1,
    ACTIONS(969), 1,
      aux_sym_resource_token2,
    ACTIONS(971), 1,
      aux_sym_resource_token3,
    ACTIONS(973), 1,
      aux_sym_resource_token6,
    STATE(140), 1,
      sym_table,
    STATE(250), 1,
      sym_resource,
    STATE(934), 1,
      sym_keyspace,
  [11266] = 6,
    ACTIONS(995), 1,
      aux_sym_drop_index_token1,
    ACTIONS(997), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(999), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1001), 1,
      aux_sym_alter_table_rename_token1,
    STATE(337), 1,
      sym_alter_table_operation,
    STATE(338), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [11289] = 6,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
    ACTIONS(979), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1026), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(977), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11312] = 10,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    ACTIONS(965), 1,
      aux_sym_truncate_token2,
    ACTIONS(967), 1,
      aux_sym_priviledge_token1,
    ACTIONS(969), 1,
      aux_sym_resource_token2,
    ACTIONS(971), 1,
      aux_sym_resource_token3,
    ACTIONS(973), 1,
      aux_sym_resource_token6,
    STATE(140), 1,
      sym_table,
    STATE(934), 1,
      sym_keyspace,
    STATE(1096), 1,
      sym_resource,
  [11343] = 3,
    ACTIONS(1028), 1,
      sym__hex_digit,
    STATE(428), 1,
      aux_sym_hexadecimal_literal_repeat2,
    ACTIONS(245), 8,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_create_materialized_view_token1,
  [11360] = 8,
    ACTIONS(1030), 1,
      anon_sym_LPAREN,
    ACTIONS(1032), 1,
      sym_object_name,
    STATE(100), 1,
      sym_relation_elements,
    STATE(106), 1,
      sym_relation_element,
    STATE(461), 1,
      sym__dotted_name,
    STATE(470), 1,
      sym_function_call,
    STATE(1246), 1,
      sym_function_name,
    STATE(67), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11386] = 7,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    ACTIONS(1034), 1,
      anon_sym_LPAREN,
    STATE(920), 1,
      sym_column,
    STATE(959), 1,
      sym_primary_key_definition,
    STATE(961), 1,
      sym_partition_key,
    STATE(960), 3,
      sym_single_primary_key,
      sym_compound_key,
      sym_composite_key,
  [11410] = 8,
    ACTIONS(1030), 1,
      anon_sym_LPAREN,
    ACTIONS(1036), 1,
      sym_object_name,
    STATE(100), 1,
      sym_relation_elements,
    STATE(120), 1,
      sym_relation_element,
    STATE(475), 1,
      sym__dotted_name,
    STATE(478), 1,
      sym_function_call,
    STATE(1246), 1,
      sym_function_name,
    STATE(67), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11436] = 7,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(1038), 1,
      anon_sym_LPAREN,
    ACTIONS(1040), 1,
      sym_string_literal,
    ACTIONS(1042), 1,
      aux_sym_decimal_literal_token1,
    STATE(191), 1,
      sym_float_literal,
    STATE(1092), 1,
      sym_decimal_literal,
    STATE(198), 2,
      sym_option_hash,
      sym_table_option_value,
  [11459] = 7,
    ACTIONS(1030), 1,
      anon_sym_LPAREN,
    ACTIONS(1032), 1,
      sym_object_name,
    STATE(73), 1,
      sym_relation_element,
    STATE(461), 1,
      sym__dotted_name,
    STATE(470), 1,
      sym_function_call,
    STATE(1246), 1,
      sym_function_name,
    STATE(67), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11482] = 7,
    ACTIONS(1030), 1,
      anon_sym_LPAREN,
    ACTIONS(1044), 1,
      sym_object_name,
    STATE(468), 1,
      sym_function_call,
    STATE(469), 1,
      sym__dotted_name,
    STATE(932), 1,
      sym_relation_element,
    STATE(1246), 1,
      sym_function_name,
    STATE(67), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11505] = 5,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(1042), 1,
      aux_sym_decimal_literal_token1,
    STATE(871), 4,
      sym_decimal_literal,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [11524] = 7,
    ACTIONS(1030), 1,
      anon_sym_LPAREN,
    ACTIONS(1036), 1,
      sym_object_name,
    STATE(73), 1,
      sym_relation_element,
    STATE(475), 1,
      sym__dotted_name,
    STATE(478), 1,
      sym_function_call,
    STATE(1246), 1,
      sym_function_name,
    STATE(67), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11547] = 8,
    ACTIONS(1046), 1,
      aux_sym_select_statement_token2,
    ACTIONS(1048), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1050), 1,
      anon_sym_STAR,
    ACTIONS(1052), 1,
      sym_object_name,
    STATE(618), 1,
      sym_select_element,
    STATE(626), 1,
      sym_function_call,
    STATE(915), 1,
      sym_select_elements,
    STATE(1246), 1,
      sym_function_name,
  [11572] = 7,
    ACTIONS(263), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(1054), 1,
      sym_object_name,
    STATE(197), 1,
      sym_table_option_item,
    STATE(237), 1,
      sym_table_options,
    STATE(261), 1,
      sym_clustering_order,
    STATE(390), 1,
      sym_materialized_view_options,
    STATE(1174), 1,
      sym_table_option_name,
  [11594] = 5,
    ACTIONS(1056), 1,
      aux_sym_priviledge_token3,
    ACTIONS(1058), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1060), 1,
      aux_sym_alter_table_rename_token1,
    STATE(347), 1,
      sym_alter_type_operation,
    STATE(348), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [11612] = 3,
    ACTIONS(1066), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1062), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1064), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11626] = 7,
    ACTIONS(263), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(1054), 1,
      sym_object_name,
    STATE(197), 1,
      sym_table_option_item,
    STATE(237), 1,
      sym_table_options,
    STATE(261), 1,
      sym_clustering_order,
    STATE(399), 1,
      sym_materialized_view_options,
    STATE(1174), 1,
      sym_table_option_name,
  [11648] = 7,
    ACTIONS(263), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(1054), 1,
      sym_object_name,
    STATE(197), 1,
      sym_table_option_item,
    STATE(237), 1,
      sym_table_options,
    STATE(261), 1,
      sym_clustering_order,
    STATE(346), 1,
      sym_materialized_view_options,
    STATE(1174), 1,
      sym_table_option_name,
  [11670] = 7,
    ACTIONS(263), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(1054), 1,
      sym_object_name,
    STATE(197), 1,
      sym_table_option_item,
    STATE(237), 1,
      sym_table_options,
    STATE(261), 1,
      sym_clustering_order,
    STATE(377), 1,
      sym_materialized_view_options,
    STATE(1174), 1,
      sym_table_option_name,
  [11692] = 7,
    ACTIONS(263), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(1054), 1,
      sym_object_name,
    STATE(197), 1,
      sym_table_option_item,
    STATE(237), 1,
      sym_table_options,
    STATE(261), 1,
      sym_clustering_order,
    STATE(350), 1,
      sym_materialized_view_options,
    STATE(1174), 1,
      sym_table_option_name,
  [11714] = 7,
    ACTIONS(263), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(1054), 1,
      sym_object_name,
    STATE(197), 1,
      sym_table_option_item,
    STATE(237), 1,
      sym_table_options,
    STATE(261), 1,
      sym_clustering_order,
    STATE(342), 1,
      sym_materialized_view_options,
    STATE(1174), 1,
      sym_table_option_name,
  [11736] = 5,
    ACTIONS(1056), 1,
      aux_sym_priviledge_token3,
    ACTIONS(1058), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1060), 1,
      aux_sym_alter_table_rename_token1,
    STATE(306), 1,
      sym_alter_type_operation,
    STATE(348), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [11754] = 3,
    ACTIONS(1072), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1068), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1070), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11768] = 7,
    ACTIONS(1050), 1,
      anon_sym_STAR,
    ACTIONS(1052), 1,
      sym_object_name,
    ACTIONS(1074), 1,
      aux_sym_select_statement_token3,
    STATE(618), 1,
      sym_select_element,
    STATE(626), 1,
      sym_function_call,
    STATE(879), 1,
      sym_select_elements,
    STATE(1246), 1,
      sym_function_name,
  [11790] = 6,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    ACTIONS(1076), 1,
      aux_sym_create_materialized_view_token1,
    STATE(27), 1,
      sym_column,
    STATE(836), 1,
      sym_column_definition,
    STATE(1163), 1,
      sym_primary_key_element,
  [11809] = 6,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    ACTIONS(1076), 1,
      aux_sym_create_materialized_view_token1,
    STATE(27), 1,
      sym_column,
    STATE(836), 1,
      sym_column_definition,
    STATE(1051), 1,
      sym_primary_key_element,
  [11828] = 2,
    ACTIONS(1078), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1080), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11839] = 6,
    ACTIONS(1050), 1,
      anon_sym_STAR,
    ACTIONS(1082), 1,
      sym_object_name,
    STATE(618), 1,
      sym_select_element,
    STATE(626), 1,
      sym_function_call,
    STATE(879), 1,
      sym_select_elements,
    STATE(1246), 1,
      sym_function_name,
  [11858] = 6,
    ACTIONS(1084), 1,
      sym_object_name,
    ACTIONS(1086), 1,
      aux_sym_if_spec_token1,
    ACTIONS(1088), 1,
      sym__dquote,
    STATE(574), 1,
      sym_if_not_exist,
    STATE(1182), 1,
      sym_trigger,
    STATE(1183), 1,
      sym_keyspace,
  [11877] = 6,
    ACTIONS(1086), 1,
      aux_sym_if_spec_token1,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1090), 1,
      sym_object_name,
    STATE(579), 1,
      sym_if_not_exist,
    STATE(1180), 1,
      sym_type,
    STATE(1181), 1,
      sym_keyspace,
  [11896] = 6,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    ACTIONS(1086), 1,
      aux_sym_if_spec_token1,
    STATE(538), 1,
      sym_if_not_exist,
    STATE(1197), 1,
      sym_table,
    STATE(1198), 1,
      sym_keyspace,
  [11915] = 6,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1092), 1,
      sym_string_literal,
    ACTIONS(1094), 1,
      sym_object_name,
    ACTIONS(1096), 1,
      sym_if_exist,
    STATE(413), 1,
      sym_index_name,
    STATE(1168), 1,
      sym_keyspace,
  [11934] = 6,
    ACTIONS(1086), 1,
      aux_sym_if_spec_token1,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1098), 1,
      sym_object_name,
    STATE(591), 1,
      sym_if_not_exist,
    STATE(963), 1,
      sym_materialized_view,
    STATE(969), 1,
      sym_keyspace,
  [11953] = 2,
    ACTIONS(1100), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1102), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11964] = 2,
    ACTIONS(1104), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1106), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11975] = 2,
    ACTIONS(1108), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1110), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11986] = 6,
    ACTIONS(1086), 1,
      aux_sym_if_spec_token1,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1112), 1,
      sym_object_name,
    STATE(577), 1,
      sym_if_not_exist,
    STATE(991), 1,
      sym_function,
    STATE(995), 1,
      sym_keyspace,
  [12005] = 6,
    ACTIONS(1086), 1,
      aux_sym_if_spec_token1,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1114), 1,
      sym_object_name,
    STATE(572), 1,
      sym_if_not_exist,
    STATE(1138), 1,
      sym_aggregate,
    STATE(1188), 1,
      sym_keyspace,
  [12024] = 6,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(1116), 1,
      anon_sym_COMMA,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    STATE(752), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(753), 1,
      aux_sym_relation_element_repeat2,
    STATE(754), 1,
      sym_assignment_tuple,
  [12043] = 6,
    ACTIONS(1086), 1,
      aux_sym_if_spec_token1,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1114), 1,
      sym_object_name,
    STATE(576), 1,
      sym_if_not_exist,
    STATE(971), 1,
      sym_aggregate,
    STATE(980), 1,
      sym_keyspace,
  [12062] = 2,
    ACTIONS(1120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1122), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [12073] = 6,
    ACTIONS(1124), 1,
      aux_sym_truncate_token2,
    ACTIONS(1126), 1,
      aux_sym_resource_token2,
    ACTIONS(1128), 1,
      aux_sym_resource_token6,
    ACTIONS(1130), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1132), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1134), 1,
      aux_sym_drop_user_token1,
  [12092] = 6,
    ACTIONS(1086), 1,
      aux_sym_if_spec_token1,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1112), 1,
      sym_object_name,
    STATE(549), 1,
      sym_if_not_exist,
    STATE(1190), 1,
      sym_function,
    STATE(1192), 1,
      sym_keyspace,
  [12111] = 2,
    ACTIONS(1136), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1138), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [12122] = 6,
    ACTIONS(1092), 1,
      sym_string_literal,
    ACTIONS(1140), 1,
      sym_object_name,
    ACTIONS(1142), 1,
      aux_sym_if_spec_token1,
    ACTIONS(1144), 1,
      aux_sym_create_index_token3,
    STATE(540), 1,
      sym_if_not_exist,
    STATE(1195), 1,
      sym_index_name,
  [12141] = 6,
    ACTIONS(1050), 1,
      anon_sym_STAR,
    ACTIONS(1082), 1,
      sym_object_name,
    STATE(618), 1,
      sym_select_element,
    STATE(626), 1,
      sym_function_call,
    STATE(805), 1,
      sym_select_elements,
    STATE(1246), 1,
      sym_function_name,
  [12160] = 4,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
    ACTIONS(1148), 1,
      anon_sym_DOT,
    ACTIONS(1150), 1,
      aux_sym_select_element_token1,
    ACTIONS(1146), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12174] = 5,
    ACTIONS(1084), 1,
      sym_object_name,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1152), 1,
      sym_if_exist,
    STATE(1157), 1,
      sym_trigger,
    STATE(1161), 1,
      sym_keyspace,
  [12190] = 5,
    ACTIONS(1154), 1,
      sym_object_name,
    ACTIONS(1156), 1,
      sym__dquote,
    STATE(705), 1,
      sym_column_not_null,
    STATE(843), 1,
      sym_column_not_null_list,
    STATE(1031), 1,
      sym_column,
  [12206] = 5,
    ACTIONS(1158), 1,
      sym_object_name,
    ACTIONS(1160), 1,
      aux_sym_from_spec_token1,
    STATE(555), 1,
      sym_from_spec,
    STATE(640), 1,
      sym_delete_column_item,
    STATE(897), 1,
      sym_delete_column_list,
  [12222] = 5,
    ACTIONS(1162), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1164), 1,
      anon_sym_LPAREN,
    ACTIONS(1166), 1,
      aux_sym_insert_values_spec_token1,
    STATE(110), 1,
      sym_insert_values_spec,
    STATE(693), 1,
      sym_insert_column_spec,
  [12238] = 1,
    ACTIONS(1168), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [12246] = 5,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    ACTIONS(1170), 1,
      aux_sym_truncate_token2,
    STATE(321), 1,
      sym_table,
    STATE(1231), 1,
      sym_keyspace,
  [12262] = 5,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1092), 1,
      sym_string_literal,
    ACTIONS(1094), 1,
      sym_object_name,
    STATE(293), 1,
      sym_index_name,
    STATE(942), 1,
      sym_keyspace,
  [12278] = 5,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(27), 1,
      sym_column,
    STATE(740), 1,
      sym_column_definition,
    STATE(1212), 1,
      sym_column_definition_list,
  [12294] = 5,
    ACTIONS(1162), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1164), 1,
      anon_sym_LPAREN,
    ACTIONS(1166), 1,
      aux_sym_insert_values_spec_token1,
    STATE(114), 1,
      sym_insert_values_spec,
    STATE(723), 1,
      sym_insert_column_spec,
  [12310] = 5,
    ACTIONS(1154), 1,
      sym_object_name,
    ACTIONS(1156), 1,
      sym__dquote,
    STATE(201), 1,
      sym_alter_type_rename_item,
    STATE(331), 1,
      sym_alter_type_rename_list,
    STATE(1185), 1,
      sym_column,
  [12326] = 4,
    ACTIONS(1172), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1176), 1,
      aux_sym_role_with_options_token4,
    STATE(259), 1,
      sym_role_with_options,
    ACTIONS(1174), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [12340] = 4,
    ACTIONS(1172), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1176), 1,
      aux_sym_role_with_options_token4,
    STATE(217), 1,
      sym_role_with_options,
    ACTIONS(1174), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [12354] = 1,
    ACTIONS(1178), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [12362] = 3,
    ACTIONS(1182), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(725), 1,
      sym_using_timestamp_spec,
    ACTIONS(1180), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12374] = 5,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(739), 1,
      sym_clustering_key,
    STATE(827), 1,
      sym_column,
    STATE(1103), 1,
      sym_clustering_key_list,
  [12390] = 5,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(739), 1,
      sym_clustering_key,
    STATE(827), 1,
      sym_column,
    STATE(1046), 1,
      sym_clustering_key_list,
  [12406] = 5,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(27), 1,
      sym_column,
    STATE(740), 1,
      sym_column_definition,
    STATE(1049), 1,
      sym_column_definition_list,
  [12422] = 5,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(27), 1,
      sym_column,
    STATE(740), 1,
      sym_column_definition,
    STATE(1042), 1,
      sym_column_definition_list,
  [12438] = 5,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(696), 1,
      sym_partition_key,
    STATE(857), 1,
      sym_column,
    STATE(1008), 1,
      sym_partition_key_list,
  [12454] = 1,
    ACTIONS(1184), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [12462] = 5,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1098), 1,
      sym_object_name,
    ACTIONS(1186), 1,
      sym_if_exist,
    STATE(260), 1,
      sym_materialized_view,
    STATE(984), 1,
      sym_keyspace,
  [12478] = 5,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(27), 1,
      sym_column,
    STATE(740), 1,
      sym_column_definition,
    STATE(1173), 1,
      sym_column_definition_list,
  [12494] = 1,
    ACTIONS(1188), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [12502] = 5,
    ACTIONS(1158), 1,
      sym_object_name,
    ACTIONS(1160), 1,
      aux_sym_from_spec_token1,
    STATE(594), 1,
      sym_from_spec,
    STATE(640), 1,
      sym_delete_column_item,
    STATE(812), 1,
      sym_delete_column_list,
  [12518] = 5,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(1042), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(1190), 1,
      sym_string_literal,
    STATE(978), 1,
      sym_float_literal,
    STATE(1092), 1,
      sym_decimal_literal,
  [12534] = 5,
    ACTIONS(1162), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1164), 1,
      anon_sym_LPAREN,
    ACTIONS(1166), 1,
      aux_sym_insert_values_spec_token1,
    STATE(107), 1,
      sym_insert_values_spec,
    STATE(674), 1,
      sym_insert_column_spec,
  [12550] = 1,
    ACTIONS(1192), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [12558] = 3,
    ACTIONS(1182), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(676), 1,
      sym_using_timestamp_spec,
    ACTIONS(1194), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12570] = 5,
    ACTIONS(1154), 1,
      sym_object_name,
    ACTIONS(1156), 1,
      sym__dquote,
    ACTIONS(1196), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    STATE(185), 1,
      sym_column,
    STATE(339), 1,
      sym_alter_table_drop_column_list,
  [12586] = 5,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1114), 1,
      sym_object_name,
    ACTIONS(1198), 1,
      sym_if_exist,
    STATE(397), 1,
      sym_aggregate,
    STATE(1162), 1,
      sym_keyspace,
  [12602] = 3,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    STATE(512), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(1203), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [12614] = 5,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1112), 1,
      sym_object_name,
    ACTIONS(1205), 1,
      sym_if_exist,
    STATE(405), 1,
      sym_function,
    STATE(1166), 1,
      sym_keyspace,
  [12630] = 5,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    ACTIONS(1207), 1,
      sym_if_exist,
    STATE(409), 1,
      sym_table,
    STATE(1170), 1,
      sym_keyspace,
  [12646] = 5,
    ACTIONS(1086), 1,
      aux_sym_if_spec_token1,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1209), 1,
      sym_object_name,
    STATE(679), 1,
      sym_if_not_exist,
    STATE(1194), 1,
      sym_keyspace,
  [12662] = 1,
    ACTIONS(1211), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [12670] = 1,
    ACTIONS(1213), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [12678] = 5,
    ACTIONS(1162), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1164), 1,
      anon_sym_LPAREN,
    ACTIONS(1166), 1,
      aux_sym_insert_values_spec_token1,
    STATE(118), 1,
      sym_insert_values_spec,
    STATE(765), 1,
      sym_insert_column_spec,
  [12694] = 5,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1215), 1,
      sym_object_name,
    ACTIONS(1217), 1,
      sym_if_exist,
    STATE(388), 1,
      sym_user,
    STATE(1152), 1,
      sym_keyspace,
  [12710] = 5,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1090), 1,
      sym_object_name,
    ACTIONS(1219), 1,
      sym_if_exist,
    STATE(392), 1,
      sym_type,
    STATE(1155), 1,
      sym_keyspace,
  [12726] = 4,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    STATE(394), 1,
      sym_table,
    STATE(1201), 1,
      sym_keyspace,
  [12739] = 4,
    ACTIONS(1084), 1,
      sym_object_name,
    ACTIONS(1088), 1,
      sym__dquote,
    STATE(973), 1,
      sym_trigger,
    STATE(979), 1,
      sym_keyspace,
  [12752] = 4,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1090), 1,
      sym_object_name,
    STATE(449), 1,
      sym_type,
    STATE(1010), 1,
      sym_keyspace,
  [12765] = 4,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    STATE(435), 1,
      sym_table,
    STATE(1145), 1,
      sym_keyspace,
  [12778] = 4,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    STATE(1215), 1,
      sym_table,
    STATE(1227), 1,
      sym_keyspace,
  [12791] = 4,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1112), 1,
      sym_object_name,
    STATE(123), 1,
      sym_function,
    STATE(1156), 1,
      sym_keyspace,
  [12804] = 4,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1209), 1,
      sym_object_name,
    ACTIONS(1221), 1,
      sym_if_exist,
    STATE(417), 1,
      sym_keyspace,
  [12817] = 4,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(698), 1,
      sym_column,
    STATE(1141), 1,
      sym_column_list,
  [12830] = 4,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    STATE(123), 1,
      sym_table,
    STATE(1154), 1,
      sym_keyspace,
  [12843] = 4,
    ACTIONS(1086), 1,
      aux_sym_if_spec_token1,
    ACTIONS(1223), 1,
      sym_object_name,
    STATE(851), 1,
      sym_if_not_exist,
    STATE(1176), 1,
      sym_user,
  [12856] = 4,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1227), 1,
      aux_sym_where_spec_token1,
    STATE(132), 1,
      sym_where_spec,
    STATE(648), 1,
      aux_sym_update_repeat1,
  [12869] = 4,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    STATE(372), 1,
      sym_table,
    STATE(997), 1,
      sym_keyspace,
  [12882] = 4,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1098), 1,
      sym_object_name,
    STATE(230), 1,
      sym_materialized_view,
    STATE(936), 1,
      sym_keyspace,
  [12895] = 4,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(698), 1,
      sym_column,
    STATE(1159), 1,
      sym_column_list,
  [12908] = 4,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1227), 1,
      aux_sym_where_spec_token1,
    STATE(160), 1,
      sym_where_spec,
    STATE(648), 1,
      aux_sym_update_repeat1,
  [12921] = 4,
    ACTIONS(1086), 1,
      aux_sym_if_spec_token1,
    ACTIONS(1229), 1,
      sym_object_name,
    STATE(174), 1,
      sym_role,
    STATE(860), 1,
      sym_if_not_exist,
  [12934] = 4,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1227), 1,
      aux_sym_where_spec_token1,
    STATE(160), 1,
      sym_where_spec,
    STATE(531), 1,
      aux_sym_update_repeat1,
  [12947] = 4,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    STATE(1011), 1,
      sym_table,
    STATE(1013), 1,
      sym_keyspace,
  [12960] = 4,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    STATE(999), 1,
      sym_keyspace,
    STATE(1003), 1,
      sym_table,
  [12973] = 4,
    ACTIONS(1092), 1,
      sym_string_literal,
    ACTIONS(1140), 1,
      sym_object_name,
    ACTIONS(1231), 1,
      aux_sym_create_index_token3,
    STATE(1000), 1,
      sym_index_name,
  [12986] = 4,
    ACTIONS(1233), 1,
      aux_sym_timestamp_token1,
    ACTIONS(1235), 1,
      aux_sym_ttl_token1,
    STATE(216), 1,
      sym_timestamp,
    STATE(219), 1,
      sym_ttl,
  [12999] = 4,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(39), 1,
      sym_column,
    STATE(1249), 1,
      sym_type_member_column_list,
  [13012] = 4,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1227), 1,
      aux_sym_where_spec_token1,
    STATE(163), 1,
      sym_where_spec,
    STATE(598), 1,
      aux_sym_update_repeat1,
  [13025] = 4,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    STATE(277), 1,
      sym_table,
    STATE(1244), 1,
      sym_keyspace,
  [13038] = 4,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    STATE(490), 1,
      sym_table,
    STATE(1203), 1,
      sym_keyspace,
  [13051] = 4,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(39), 1,
      sym_column,
    STATE(996), 1,
      sym_type_member_column_list,
  [13064] = 4,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    STATE(907), 1,
      sym_table,
    STATE(933), 1,
      sym_keyspace,
  [13077] = 4,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1215), 1,
      sym_object_name,
    STATE(314), 1,
      sym_user,
    STATE(937), 1,
      sym_keyspace,
  [13090] = 4,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1112), 1,
      sym_object_name,
    STATE(991), 1,
      sym_function,
    STATE(995), 1,
      sym_keyspace,
  [13103] = 4,
    ACTIONS(1054), 1,
      sym_object_name,
    STATE(162), 1,
      sym_table_option_item,
    STATE(303), 1,
      sym_table_options,
    STATE(1174), 1,
      sym_table_option_name,
  [13116] = 1,
    ACTIONS(1237), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13123] = 4,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1090), 1,
      sym_object_name,
    STATE(311), 1,
      sym_type,
    STATE(955), 1,
      sym_keyspace,
  [13136] = 4,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(698), 1,
      sym_column,
    STATE(1196), 1,
      sym_column_list,
  [13149] = 4,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(1042), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(1239), 1,
      sym_string_literal,
    STATE(922), 1,
      sym_decimal_literal,
  [13162] = 4,
    ACTIONS(1182), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1227), 1,
      aux_sym_where_spec_token1,
    STATE(153), 1,
      sym_where_spec,
    STATE(875), 1,
      sym_using_timestamp_spec,
  [13175] = 4,
    ACTIONS(1154), 1,
      sym_object_name,
    ACTIONS(1156), 1,
      sym__dquote,
    STATE(223), 1,
      sym_alter_type_rename_item,
    STATE(1185), 1,
      sym_column,
  [13188] = 4,
    ACTIONS(1154), 1,
      sym_object_name,
    ACTIONS(1156), 1,
      sym__dquote,
    STATE(632), 1,
      sym_column,
    STATE(983), 1,
      sym_column_list,
  [13201] = 4,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    STATE(356), 1,
      sym_table,
    STATE(1114), 1,
      sym_keyspace,
  [13214] = 4,
    ACTIONS(1241), 1,
      anon_sym_COMMA,
    ACTIONS(1243), 1,
      anon_sym_COLON,
    ACTIONS(1245), 1,
      anon_sym_RBRACE,
    STATE(746), 1,
      aux_sym_assignment_tuple_repeat1,
  [13227] = 4,
    ACTIONS(1054), 1,
      sym_object_name,
    STATE(162), 1,
      sym_table_option_item,
    STATE(335), 1,
      sym_table_options,
    STATE(1174), 1,
      sym_table_option_name,
  [13240] = 4,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(796), 1,
      sym_partition_key,
    STATE(857), 1,
      sym_column,
  [13253] = 3,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
    STATE(1074), 1,
      sym_order_direction,
    ACTIONS(307), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [13264] = 4,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1098), 1,
      sym_object_name,
    STATE(366), 1,
      sym_materialized_view,
    STATE(1109), 1,
      sym_keyspace,
  [13277] = 4,
    ACTIONS(1154), 1,
      sym_object_name,
    ACTIONS(1156), 1,
      sym__dquote,
    STATE(774), 1,
      sym_column_not_null,
    STATE(1031), 1,
      sym_column,
  [13290] = 4,
    ACTIONS(1154), 1,
      sym_object_name,
    ACTIONS(1156), 1,
      sym__dquote,
    STATE(632), 1,
      sym_column,
    STATE(987), 1,
      sym_column_list,
  [13303] = 4,
    ACTIONS(1054), 1,
      sym_object_name,
    STATE(162), 1,
      sym_table_option_item,
    STATE(357), 1,
      sym_table_options,
    STATE(1174), 1,
      sym_table_option_name,
  [13316] = 4,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    STATE(751), 1,
      sym_table,
    STATE(1120), 1,
      sym_keyspace,
  [13329] = 3,
    ACTIONS(1251), 1,
      aux_sym_create_materialized_view_token1,
    STATE(839), 1,
      sym_primary_key_column,
    ACTIONS(1249), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13340] = 4,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    STATE(873), 1,
      sym_table,
    STATE(988), 1,
      sym_keyspace,
  [13353] = 4,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(20), 1,
      sym_column,
    STATE(334), 1,
      sym_alter_table_column_definition,
  [13366] = 4,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(698), 1,
      sym_column,
    STATE(1017), 1,
      sym_column_list,
  [13379] = 4,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1114), 1,
      sym_object_name,
    STATE(971), 1,
      sym_aggregate,
    STATE(980), 1,
      sym_keyspace,
  [13392] = 4,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(698), 1,
      sym_column,
    STATE(1179), 1,
      sym_column_list,
  [13405] = 4,
    ACTIONS(1084), 1,
      sym_object_name,
    ACTIONS(1088), 1,
      sym__dquote,
    STATE(954), 1,
      sym_trigger,
    STATE(957), 1,
      sym_keyspace,
  [13418] = 4,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1114), 1,
      sym_object_name,
    STATE(301), 1,
      sym_aggregate,
    STATE(935), 1,
      sym_keyspace,
  [13431] = 4,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1114), 1,
      sym_object_name,
    STATE(1077), 1,
      sym_aggregate,
    STATE(1106), 1,
      sym_keyspace,
  [13444] = 4,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1112), 1,
      sym_object_name,
    STATE(931), 1,
      sym_keyspace,
    STATE(1063), 1,
      sym_function,
  [13457] = 4,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1227), 1,
      aux_sym_where_spec_token1,
    STATE(125), 1,
      sym_where_spec,
    STATE(648), 1,
      aux_sym_update_repeat1,
  [13470] = 4,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1090), 1,
      sym_object_name,
    STATE(948), 1,
      sym_type,
    STATE(950), 1,
      sym_keyspace,
  [13483] = 4,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1227), 1,
      aux_sym_where_spec_token1,
    STATE(152), 1,
      sym_where_spec,
    STATE(648), 1,
      aux_sym_update_repeat1,
  [13496] = 4,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(27), 1,
      sym_column,
    STATE(836), 1,
      sym_column_definition,
  [13509] = 4,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(698), 1,
      sym_column,
    STATE(1186), 1,
      sym_column_list,
  [13522] = 4,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(39), 1,
      sym_column,
    STATE(1097), 1,
      sym_type_member_column_list,
  [13535] = 2,
    ACTIONS(1253), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [13544] = 4,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    STATE(290), 1,
      sym_table,
    STATE(945), 1,
      sym_keyspace,
  [13557] = 4,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1227), 1,
      aux_sym_where_spec_token1,
    STATE(152), 1,
      sym_where_spec,
    STATE(535), 1,
      aux_sym_update_repeat1,
  [13570] = 4,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    STATE(801), 1,
      sym_table,
    STATE(1062), 1,
      sym_keyspace,
  [13583] = 4,
    ACTIONS(1082), 1,
      sym_object_name,
    STATE(626), 1,
      sym_function_call,
    STATE(804), 1,
      sym_select_element,
    STATE(1246), 1,
      sym_function_name,
  [13596] = 4,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    STATE(375), 1,
      sym_table,
    STATE(1107), 1,
      sym_keyspace,
  [13609] = 4,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
    ACTIONS(1257), 1,
      anon_sym_COMMA,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
    STATE(682), 1,
      aux_sym_function_args_repeat1,
  [13622] = 4,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1098), 1,
      sym_object_name,
    STATE(1081), 1,
      sym_keyspace,
    STATE(1083), 1,
      sym_materialized_view,
  [13635] = 4,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(1042), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(1261), 1,
      sym_string_literal,
    STATE(1073), 1,
      sym_decimal_literal,
  [13648] = 1,
    ACTIONS(1203), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13655] = 4,
    ACTIONS(1182), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1227), 1,
      aux_sym_where_spec_token1,
    STATE(136), 1,
      sym_where_spec,
    STATE(819), 1,
      sym_using_timestamp_spec,
  [13668] = 4,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1227), 1,
      aux_sym_where_spec_token1,
    STATE(129), 1,
      sym_where_spec,
    STATE(580), 1,
      aux_sym_update_repeat1,
  [13681] = 4,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    STATE(1054), 1,
      sym_keyspace,
    STATE(1057), 1,
      sym_table,
  [13694] = 4,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    STATE(845), 1,
      sym_table,
    STATE(1026), 1,
      sym_keyspace,
  [13707] = 4,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1227), 1,
      aux_sym_where_spec_token1,
    STATE(129), 1,
      sym_where_spec,
    STATE(648), 1,
      aux_sym_update_repeat1,
  [13720] = 4,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(775), 1,
      sym_clustering_key,
    STATE(827), 1,
      sym_column,
  [13733] = 4,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    STATE(649), 1,
      sym_table,
    STATE(1225), 1,
      sym_keyspace,
  [13746] = 4,
    ACTIONS(1154), 1,
      sym_object_name,
    ACTIONS(1156), 1,
      sym__dquote,
    STATE(632), 1,
      sym_column,
    STATE(1118), 1,
      sym_column_list,
  [13759] = 4,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1227), 1,
      aux_sym_where_spec_token1,
    STATE(132), 1,
      sym_where_spec,
    STATE(578), 1,
      aux_sym_update_repeat1,
  [13772] = 4,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1112), 1,
      sym_object_name,
    STATE(297), 1,
      sym_function,
    STATE(940), 1,
      sym_keyspace,
  [13785] = 4,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(698), 1,
      sym_column,
    STATE(1122), 1,
      sym_column_list,
  [13798] = 4,
    ACTIONS(1182), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1227), 1,
      aux_sym_where_spec_token1,
    STATE(157), 1,
      sym_where_spec,
    STATE(858), 1,
      sym_using_timestamp_spec,
  [13811] = 4,
    ACTIONS(1154), 1,
      sym_object_name,
    ACTIONS(1156), 1,
      sym__dquote,
    STATE(632), 1,
      sym_column,
    STATE(1014), 1,
      sym_column_list,
  [13824] = 4,
    ACTIONS(961), 1,
      sym_object_name,
    ACTIONS(963), 1,
      sym__dquote,
    STATE(485), 1,
      sym_table,
    STATE(1007), 1,
      sym_keyspace,
  [13837] = 4,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(39), 1,
      sym_column,
    STATE(1115), 1,
      sym_type_member_column_list,
  [13850] = 3,
    ACTIONS(330), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1263), 1,
      aux_sym_update_token2,
    STATE(1004), 1,
      sym_using_ttl_timestamp,
  [13860] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1268), 1,
      anon_sym_RPAREN,
    STATE(610), 1,
      aux_sym_clustering_key_list_repeat1,
  [13870] = 3,
    ACTIONS(1270), 1,
      anon_sym_COMMA,
    ACTIONS(1273), 1,
      anon_sym_RPAREN,
    STATE(611), 1,
      aux_sym_option_hash_repeat1,
  [13880] = 3,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1209), 1,
      sym_object_name,
    STATE(328), 1,
      sym_keyspace,
  [13890] = 3,
    ACTIONS(1275), 1,
      aux_sym_create_function_token1,
    ACTIONS(1277), 1,
      aux_sym_return_mode_token1,
    STATE(1018), 1,
      sym_return_mode,
  [13900] = 3,
    ACTIONS(1279), 1,
      anon_sym_COMMA,
    ACTIONS(1282), 1,
      anon_sym_RBRACE,
    STATE(614), 1,
      aux_sym_replication_list_repeat1,
  [13910] = 3,
    ACTIONS(1284), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1286), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1288), 1,
      aux_sym_update_token1,
  [13920] = 3,
    ACTIONS(1290), 1,
      anon_sym_COMMA,
    ACTIONS(1292), 1,
      anon_sym_RBRACE,
    STATE(690), 1,
      aux_sym_assignment_map_repeat1,
  [13930] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    STATE(686), 1,
      aux_sym_relation_element_repeat2,
  [13940] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1298), 1,
      aux_sym_from_spec_token1,
    STATE(661), 1,
      aux_sym_select_elements_repeat1,
  [13950] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_relation_element_repeat2,
  [13960] = 3,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(1300), 1,
      anon_sym_RPAREN,
    STATE(758), 1,
      aux_sym_type_member_column_list_repeat1,
  [13970] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(380), 1,
      sym_table,
  [13980] = 3,
    ACTIONS(1092), 1,
      sym_string_literal,
    ACTIONS(1140), 1,
      sym_object_name,
    STATE(376), 1,
      sym_index_name,
  [13990] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(262), 1,
      sym_table,
  [14000] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
    STATE(675), 1,
      aux_sym_create_function_repeat1,
  [14010] = 2,
    STATE(255), 1,
      sym_boolean_literal,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
  [14018] = 2,
    ACTIONS(1150), 1,
      aux_sym_select_element_token1,
    ACTIONS(1146), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14026] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1310), 1,
      anon_sym_RPAREN,
    STATE(738), 1,
      aux_sym_create_function_repeat1,
  [14036] = 3,
    ACTIONS(1312), 1,
      anon_sym_COMMA,
    ACTIONS(1315), 1,
      anon_sym_GT,
    STATE(628), 1,
      aux_sym_data_type_definition_repeat1,
  [14046] = 3,
    ACTIONS(1317), 1,
      anon_sym_COMMA,
    ACTIONS(1319), 1,
      anon_sym_RPAREN,
    STATE(611), 1,
      aux_sym_option_hash_repeat1,
  [14056] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
    STATE(738), 1,
      aux_sym_create_function_repeat1,
  [14066] = 2,
    ACTIONS(1323), 1,
      anon_sym_LBRACK,
    ACTIONS(1321), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14074] = 3,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    ACTIONS(1325), 1,
      aux_sym_from_spec_token1,
    STATE(651), 1,
      aux_sym_column_list_repeat1,
  [14084] = 3,
    ACTIONS(1327), 1,
      sym_object_name,
    STATE(92), 1,
      sym_from_spec_element,
    STATE(93), 1,
      sym__dotted_name,
  [14094] = 3,
    ACTIONS(1275), 1,
      aux_sym_create_function_token1,
    ACTIONS(1277), 1,
      aux_sym_return_mode_token1,
    STATE(972), 1,
      sym_return_mode,
  [14104] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(375), 1,
      sym_table,
  [14114] = 3,
    ACTIONS(1329), 1,
      sym__hex_digit,
    ACTIONS(1331), 1,
      anon_sym_SQUOTE,
    STATE(687), 1,
      aux_sym_hexadecimal_literal_repeat1,
  [14124] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1310), 1,
      anon_sym_RPAREN,
    STATE(733), 1,
      aux_sym_create_function_repeat1,
  [14134] = 3,
    ACTIONS(1275), 1,
      aux_sym_create_function_token1,
    ACTIONS(1277), 1,
      aux_sym_return_mode_token1,
    STATE(1143), 1,
      sym_return_mode,
  [14144] = 3,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1335), 1,
      anon_sym_RBRACE,
    STATE(614), 1,
      aux_sym_replication_list_repeat1,
  [14154] = 3,
    ACTIONS(1337), 1,
      anon_sym_COMMA,
    ACTIONS(1339), 1,
      aux_sym_from_spec_token1,
    STATE(673), 1,
      aux_sym_delete_column_list_repeat1,
  [14164] = 3,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(1042), 1,
      aux_sym_decimal_literal_token1,
    STATE(173), 1,
      sym_decimal_literal,
  [14174] = 2,
    ACTIONS(1341), 1,
      aux_sym_resource_token1,
    ACTIONS(1343), 2,
      aux_sym_resource_token4,
      aux_sym_resource_token5,
  [14182] = 3,
    ACTIONS(1310), 1,
      anon_sym_RPAREN,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(730), 1,
      sym_param,
  [14192] = 3,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1209), 1,
      sym_object_name,
    STATE(123), 1,
      sym_keyspace,
  [14202] = 3,
    ACTIONS(1290), 1,
      anon_sym_COMMA,
    ACTIONS(1347), 1,
      anon_sym_RBRACE,
    STATE(616), 1,
      aux_sym_assignment_map_repeat1,
  [14212] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(426), 1,
      sym_table,
  [14222] = 3,
    ACTIONS(1229), 1,
      sym_object_name,
    ACTIONS(1349), 1,
      sym_if_exist,
    STATE(402), 1,
      sym_role,
  [14232] = 3,
    ACTIONS(1351), 1,
      anon_sym_COMMA,
    ACTIONS(1354), 1,
      aux_sym_where_spec_token1,
    STATE(648), 1,
      aux_sym_update_repeat1,
  [14242] = 3,
    ACTIONS(330), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1356), 1,
      aux_sym_update_token2,
    STATE(1148), 1,
      sym_using_ttl_timestamp,
  [14252] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(147), 1,
      sym_table,
  [14262] = 3,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    ACTIONS(1358), 1,
      aux_sym_from_spec_token1,
    STATE(142), 1,
      aux_sym_column_list_repeat1,
  [14272] = 3,
    ACTIONS(1154), 1,
      sym_object_name,
    ACTIONS(1156), 1,
      sym__dquote,
    STATE(1175), 1,
      sym_column,
  [14282] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(1149), 1,
      sym_table,
  [14292] = 3,
    ACTIONS(1154), 1,
      sym_object_name,
    ACTIONS(1156), 1,
      sym__dquote,
    STATE(156), 1,
      sym_column,
  [14302] = 3,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1209), 1,
      sym_object_name,
    STATE(1142), 1,
      sym_keyspace,
  [14312] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(1360), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_relation_element_repeat2,
  [14322] = 3,
    ACTIONS(1154), 1,
      sym_object_name,
    ACTIONS(1156), 1,
      sym__dquote,
    STATE(1184), 1,
      sym_column,
  [14332] = 3,
    ACTIONS(1054), 1,
      sym_object_name,
    STATE(218), 1,
      sym_table_option_item,
    STATE(1174), 1,
      sym_table_option_name,
  [14342] = 2,
    ACTIONS(619), 1,
      sym_string_literal,
    ACTIONS(1362), 2,
      sym_object_name,
      aux_sym_create_index_token3,
  [14350] = 3,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(26), 1,
      sym_column,
  [14360] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1364), 1,
      aux_sym_from_spec_token1,
    STATE(756), 1,
      aux_sym_select_elements_repeat1,
  [14370] = 3,
    ACTIONS(1154), 1,
      sym_object_name,
    ACTIONS(1156), 1,
      sym__dquote,
    STATE(395), 1,
      sym_column,
  [14380] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(1366), 1,
      anon_sym_RPAREN,
    STATE(619), 1,
      aux_sym_relation_element_repeat2,
  [14390] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(692), 1,
      sym_table,
  [14400] = 3,
    ACTIONS(1368), 1,
      anon_sym_COMMA,
    ACTIONS(1370), 1,
      anon_sym_RPAREN,
    STATE(716), 1,
      aux_sym_column_definition_list_repeat1,
  [14410] = 3,
    ACTIONS(1372), 1,
      anon_sym_COMMA,
    ACTIONS(1374), 1,
      anon_sym_RPAREN,
    STATE(706), 1,
      aux_sym_expression_list_repeat1,
  [14420] = 3,
    ACTIONS(1345), 1,
      sym_object_name,
    ACTIONS(1376), 1,
      anon_sym_RPAREN,
    STATE(760), 1,
      sym_param,
  [14430] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(845), 1,
      sym_table,
  [14440] = 3,
    ACTIONS(1154), 1,
      sym_object_name,
    ACTIONS(1156), 1,
      sym__dquote,
    STATE(243), 1,
      sym_column,
  [14450] = 3,
    ACTIONS(1358), 1,
      anon_sym_RPAREN,
    ACTIONS(1378), 1,
      anon_sym_COMMA,
    STATE(699), 1,
      aux_sym_column_list_repeat1,
  [14460] = 3,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(156), 1,
      sym_column,
  [14470] = 3,
    ACTIONS(1329), 1,
      sym__hex_digit,
    ACTIONS(1380), 1,
      anon_sym_SQUOTE,
    STATE(687), 1,
      aux_sym_hexadecimal_literal_repeat1,
  [14480] = 3,
    ACTIONS(1337), 1,
      anon_sym_COMMA,
    ACTIONS(1382), 1,
      aux_sym_from_spec_token1,
    STATE(728), 1,
      aux_sym_delete_column_list_repeat1,
  [14490] = 3,
    ACTIONS(1162), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1166), 1,
      aux_sym_insert_values_spec_token1,
    STATE(118), 1,
      sym_insert_values_spec,
  [14500] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1384), 1,
      anon_sym_RPAREN,
    STATE(738), 1,
      aux_sym_create_function_repeat1,
  [14510] = 1,
    ACTIONS(1180), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [14516] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(281), 1,
      sym_table,
  [14526] = 3,
    ACTIONS(1386), 1,
      anon_sym_COMMA,
    ACTIONS(1388), 1,
      anon_sym_RPAREN,
    STATE(688), 1,
      aux_sym_relation_element_repeat1,
  [14536] = 3,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1209), 1,
      sym_object_name,
    STATE(998), 1,
      sym_keyspace,
  [14546] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(294), 1,
      sym_table,
  [14556] = 3,
    ACTIONS(1390), 1,
      anon_sym_COMMA,
    ACTIONS(1393), 1,
      anon_sym_RPAREN,
    STATE(681), 1,
      aux_sym_function_args_repeat1,
  [14566] = 3,
    ACTIONS(1257), 1,
      anon_sym_COMMA,
    ACTIONS(1395), 1,
      anon_sym_RPAREN,
    STATE(681), 1,
      aux_sym_function_args_repeat1,
  [14576] = 2,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
    ACTIONS(1393), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14584] = 3,
    ACTIONS(1345), 1,
      sym_object_name,
    ACTIONS(1397), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      sym_param,
  [14594] = 3,
    ACTIONS(1386), 1,
      anon_sym_COMMA,
    ACTIONS(1399), 1,
      anon_sym_RPAREN,
    STATE(678), 1,
      aux_sym_relation_element_repeat1,
  [14604] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(1401), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_relation_element_repeat2,
  [14614] = 3,
    ACTIONS(1403), 1,
      sym__hex_digit,
    ACTIONS(1406), 1,
      anon_sym_SQUOTE,
    STATE(687), 1,
      aux_sym_hexadecimal_literal_repeat1,
  [14624] = 3,
    ACTIONS(1408), 1,
      anon_sym_COMMA,
    ACTIONS(1411), 1,
      anon_sym_RPAREN,
    STATE(688), 1,
      aux_sym_relation_element_repeat1,
  [14634] = 2,
    ACTIONS(1415), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1413), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [14642] = 3,
    ACTIONS(1417), 1,
      anon_sym_COMMA,
    ACTIONS(1420), 1,
      anon_sym_RBRACE,
    STATE(690), 1,
      aux_sym_assignment_map_repeat1,
  [14652] = 2,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(1422), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [14660] = 3,
    ACTIONS(330), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1424), 1,
      aux_sym_update_token2,
    STATE(1204), 1,
      sym_using_ttl_timestamp,
  [14670] = 3,
    ACTIONS(1162), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1166), 1,
      aux_sym_insert_values_spec_token1,
    STATE(107), 1,
      sym_insert_values_spec,
  [14680] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(518), 1,
      sym_table,
  [14690] = 3,
    ACTIONS(1154), 1,
      sym_object_name,
    ACTIONS(1156), 1,
      sym__dquote,
    STATE(562), 1,
      sym_column,
  [14700] = 3,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    ACTIONS(1428), 1,
      anon_sym_RPAREN,
    STATE(737), 1,
      aux_sym_partition_key_list_repeat1,
  [14710] = 3,
    ACTIONS(1430), 1,
      anon_sym_COMMA,
    ACTIONS(1432), 1,
      anon_sym_GT,
    STATE(628), 1,
      aux_sym_data_type_definition_repeat1,
  [14720] = 3,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
    ACTIONS(1378), 1,
      anon_sym_COMMA,
    STATE(670), 1,
      aux_sym_column_list_repeat1,
  [14730] = 3,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(699), 1,
      aux_sym_column_list_repeat1,
  [14740] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(1041), 1,
      sym_table,
  [14750] = 3,
    ACTIONS(1241), 1,
      anon_sym_COMMA,
    ACTIONS(1437), 1,
      anon_sym_RBRACK,
    STATE(749), 1,
      aux_sym_assignment_tuple_repeat1,
  [14760] = 3,
    ACTIONS(1317), 1,
      anon_sym_COMMA,
    ACTIONS(1439), 1,
      anon_sym_RPAREN,
    STATE(629), 1,
      aux_sym_option_hash_repeat1,
  [14770] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(801), 1,
      sym_table,
  [14780] = 3,
    ACTIONS(1441), 1,
      anon_sym_COMMA,
    ACTIONS(1444), 1,
      anon_sym_RPAREN,
    STATE(704), 1,
      aux_sym_init_cond_hash_repeat1,
  [14790] = 2,
    STATE(761), 1,
      aux_sym_column_not_null_list_repeat1,
    ACTIONS(1446), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [14798] = 3,
    ACTIONS(1372), 1,
      anon_sym_COMMA,
    ACTIONS(1448), 1,
      anon_sym_RPAREN,
    STATE(745), 1,
      aux_sym_expression_list_repeat1,
  [14808] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1397), 1,
      anon_sym_RPAREN,
    STATE(630), 1,
      aux_sym_create_function_repeat1,
  [14818] = 3,
    ACTIONS(1450), 1,
      anon_sym_COMMA,
    ACTIONS(1453), 1,
      anon_sym_RPAREN,
    STATE(708), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [14828] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1397), 1,
      anon_sym_RPAREN,
    STATE(738), 1,
      aux_sym_create_function_repeat1,
  [14838] = 3,
    ACTIONS(1275), 1,
      aux_sym_create_function_token1,
    ACTIONS(1277), 1,
      aux_sym_return_mode_token1,
    STATE(943), 1,
      sym_return_mode,
  [14848] = 3,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1209), 1,
      sym_object_name,
    STATE(295), 1,
      sym_keyspace,
  [14858] = 3,
    ACTIONS(1275), 1,
      aux_sym_create_function_token1,
    ACTIONS(1277), 1,
      aux_sym_return_mode_token1,
    STATE(1070), 1,
      sym_return_mode,
  [14868] = 3,
    ACTIONS(1455), 1,
      sym_string_literal,
    STATE(715), 1,
      sym_replication_list_item,
    STATE(939), 1,
      sym_replication_list,
  [14878] = 3,
    ACTIONS(1457), 1,
      anon_sym_COMMA,
    ACTIONS(1459), 1,
      anon_sym_RPAREN,
    STATE(704), 1,
      aux_sym_init_cond_hash_repeat1,
  [14888] = 3,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1461), 1,
      anon_sym_RBRACE,
    STATE(639), 1,
      aux_sym_replication_list_repeat1,
  [14898] = 3,
    ACTIONS(1463), 1,
      anon_sym_COMMA,
    ACTIONS(1466), 1,
      anon_sym_RPAREN,
    STATE(716), 1,
      aux_sym_column_definition_list_repeat1,
  [14908] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(130), 1,
      sym_table,
  [14918] = 3,
    ACTIONS(1468), 1,
      sym_object_name,
    STATE(840), 1,
      sym_init_cond_hash_item,
    STATE(1136), 1,
      sym_hash_key,
  [14928] = 3,
    ACTIONS(1470), 1,
      anon_sym_COMMA,
    ACTIONS(1472), 1,
      anon_sym_RPAREN,
    STATE(708), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [14938] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(609), 1,
      sym_table,
  [14948] = 3,
    ACTIONS(1241), 1,
      anon_sym_COMMA,
    ACTIONS(1474), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      aux_sym_assignment_tuple_repeat1,
  [14958] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(401), 1,
      sym_table,
  [14968] = 3,
    ACTIONS(1162), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1166), 1,
      aux_sym_insert_values_spec_token1,
    STATE(110), 1,
      sym_insert_values_spec,
  [14978] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(507), 1,
      sym_table,
  [14988] = 1,
    ACTIONS(1476), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [14994] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(1040), 1,
      sym_table,
  [15004] = 3,
    ACTIONS(1455), 1,
      sym_string_literal,
    STATE(715), 1,
      sym_replication_list_item,
    STATE(1037), 1,
      sym_replication_list,
  [15014] = 3,
    ACTIONS(1478), 1,
      anon_sym_COMMA,
    ACTIONS(1481), 1,
      aux_sym_from_spec_token1,
    STATE(728), 1,
      aux_sym_delete_column_list_repeat1,
  [15024] = 3,
    ACTIONS(1275), 1,
      aux_sym_create_function_token1,
    ACTIONS(1277), 1,
      aux_sym_return_mode_token1,
    STATE(1036), 1,
      sym_return_mode,
  [15034] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1483), 1,
      anon_sym_RPAREN,
    STATE(709), 1,
      aux_sym_create_function_repeat1,
  [15044] = 3,
    ACTIONS(1345), 1,
      sym_object_name,
    ACTIONS(1483), 1,
      anon_sym_RPAREN,
    STATE(707), 1,
      sym_param,
  [15054] = 3,
    ACTIONS(1457), 1,
      anon_sym_COMMA,
    ACTIONS(1485), 1,
      anon_sym_RPAREN,
    STATE(714), 1,
      aux_sym_init_cond_hash_repeat1,
  [15064] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1483), 1,
      anon_sym_RPAREN,
    STATE(738), 1,
      aux_sym_create_function_repeat1,
  [15074] = 3,
    ACTIONS(1470), 1,
      anon_sym_COMMA,
    ACTIONS(1487), 1,
      anon_sym_RPAREN,
    STATE(719), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [15084] = 3,
    ACTIONS(1241), 1,
      anon_sym_COMMA,
    ACTIONS(1489), 1,
      anon_sym_RPAREN,
    STATE(721), 1,
      aux_sym_assignment_tuple_repeat1,
  [15094] = 3,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(1042), 1,
      aux_sym_decimal_literal_token1,
    STATE(1236), 1,
      sym_decimal_literal,
  [15104] = 3,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    ACTIONS(1491), 1,
      anon_sym_RPAREN,
    STATE(762), 1,
      aux_sym_partition_key_list_repeat1,
  [15114] = 3,
    ACTIONS(1493), 1,
      anon_sym_COMMA,
    ACTIONS(1496), 1,
      anon_sym_RPAREN,
    STATE(738), 1,
      aux_sym_create_function_repeat1,
  [15124] = 3,
    ACTIONS(1498), 1,
      anon_sym_COMMA,
    ACTIONS(1500), 1,
      anon_sym_RPAREN,
    STATE(766), 1,
      aux_sym_clustering_key_list_repeat1,
  [15134] = 3,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
    ACTIONS(1504), 1,
      anon_sym_RPAREN,
    STATE(665), 1,
      aux_sym_column_definition_list_repeat1,
  [15144] = 2,
    STATE(345), 1,
      sym_boolean_literal,
    ACTIONS(168), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
  [15152] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(1208), 1,
      sym_table,
  [15162] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(1215), 1,
      sym_table,
  [15172] = 3,
    ACTIONS(1506), 1,
      sym_object_name,
    STATE(182), 1,
      sym_if_condition,
    STATE(387), 1,
      sym_if_condition_list,
  [15182] = 3,
    ACTIONS(1508), 1,
      anon_sym_COMMA,
    ACTIONS(1511), 1,
      anon_sym_RPAREN,
    STATE(745), 1,
      aux_sym_expression_list_repeat1,
  [15192] = 3,
    ACTIONS(1241), 1,
      anon_sym_COMMA,
    ACTIONS(1513), 1,
      anon_sym_RBRACE,
    STATE(512), 1,
      aux_sym_assignment_tuple_repeat1,
  [15202] = 3,
    ACTIONS(1430), 1,
      anon_sym_COMMA,
    ACTIONS(1515), 1,
      anon_sym_GT,
    STATE(697), 1,
      aux_sym_data_type_definition_repeat1,
  [15212] = 3,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(1042), 1,
      aux_sym_decimal_literal_token1,
    STATE(161), 1,
      sym_decimal_literal,
  [15222] = 3,
    ACTIONS(1241), 1,
      anon_sym_COMMA,
    ACTIONS(1517), 1,
      anon_sym_RBRACK,
    STATE(512), 1,
      aux_sym_assignment_tuple_repeat1,
  [15232] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(779), 1,
      sym_table,
  [15242] = 3,
    ACTIONS(330), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1519), 1,
      aux_sym_update_token2,
    STATE(953), 1,
      sym_using_ttl_timestamp,
  [15252] = 3,
    ACTIONS(1241), 1,
      anon_sym_COMMA,
    ACTIONS(1521), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      aux_sym_assignment_tuple_repeat1,
  [15262] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(1521), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_relation_element_repeat2,
  [15272] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(1521), 1,
      anon_sym_RPAREN,
    STATE(656), 1,
      aux_sym_relation_element_repeat2,
  [15282] = 3,
    ACTIONS(1345), 1,
      sym_object_name,
    ACTIONS(1523), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      sym_param,
  [15292] = 3,
    ACTIONS(1525), 1,
      anon_sym_COMMA,
    ACTIONS(1528), 1,
      aux_sym_from_spec_token1,
    STATE(756), 1,
      aux_sym_select_elements_repeat1,
  [15302] = 3,
    ACTIONS(985), 1,
      sym_object_name,
    ACTIONS(987), 1,
      sym__dquote,
    STATE(18), 1,
      sym_column,
  [15312] = 3,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(1530), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_type_member_column_list_repeat1,
  [15322] = 3,
    ACTIONS(1275), 1,
      aux_sym_create_function_token1,
    ACTIONS(1277), 1,
      aux_sym_return_mode_token1,
    STATE(1243), 1,
      sym_return_mode,
  [15332] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1523), 1,
      anon_sym_RPAREN,
    STATE(627), 1,
      aux_sym_create_function_repeat1,
  [15342] = 2,
    STATE(773), 1,
      aux_sym_column_not_null_list_repeat1,
    ACTIONS(1532), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [15350] = 3,
    ACTIONS(1534), 1,
      anon_sym_COMMA,
    ACTIONS(1537), 1,
      anon_sym_RPAREN,
    STATE(762), 1,
      aux_sym_partition_key_list_repeat1,
  [15360] = 3,
    ACTIONS(1257), 1,
      anon_sym_COMMA,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
    STATE(682), 1,
      aux_sym_function_args_repeat1,
  [15370] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(372), 1,
      sym_table,
  [15380] = 3,
    ACTIONS(1162), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1166), 1,
      aux_sym_insert_values_spec_token1,
    STATE(115), 1,
      sym_insert_values_spec,
  [15390] = 3,
    ACTIONS(1498), 1,
      anon_sym_COMMA,
    ACTIONS(1539), 1,
      anon_sym_RPAREN,
    STATE(610), 1,
      aux_sym_clustering_key_list_repeat1,
  [15400] = 3,
    ACTIONS(1455), 1,
      sym_string_literal,
    STATE(715), 1,
      sym_replication_list_item,
    STATE(989), 1,
      sym_replication_list,
  [15410] = 3,
    ACTIONS(1092), 1,
      sym_string_literal,
    ACTIONS(1140), 1,
      sym_object_name,
    STATE(270), 1,
      sym_index_name,
  [15420] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(267), 1,
      sym_table,
  [15430] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    ACTIONS(1304), 1,
      sym__dquote,
    STATE(809), 1,
      sym_table,
  [15440] = 3,
    ACTIONS(1088), 1,
      sym__dquote,
    ACTIONS(1209), 1,
      sym_object_name,
    STATE(151), 1,
      sym_keyspace,
  [15450] = 3,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(1042), 1,
      aux_sym_decimal_literal_token1,
    STATE(247), 1,
      sym_decimal_literal,
  [15460] = 3,
    ACTIONS(1541), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1544), 1,
      aux_sym_create_materialized_view_token1,
    STATE(773), 1,
      aux_sym_column_not_null_list_repeat1,
  [15470] = 1,
    ACTIONS(1544), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [15475] = 1,
    ACTIONS(1268), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15480] = 2,
    ACTIONS(1546), 1,
      aux_sym_role_with_options_token1,
    STATE(126), 1,
      sym_user_password,
  [15487] = 2,
    ACTIONS(1548), 1,
      sym_object_name,
    STATE(1077), 1,
      sym_aggregate,
  [15494] = 2,
    ACTIONS(1550), 1,
      sym_object_name,
    STATE(1250), 1,
      sym_type,
  [15501] = 2,
    ACTIONS(1552), 1,
      aux_sym_where_spec_token1,
    STATE(1116), 1,
      sym_materialized_view_where,
  [15508] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(1110), 1,
      sym_function,
  [15515] = 2,
    ACTIONS(1556), 1,
      sym_string_literal,
    STATE(263), 1,
      sym_trigger_class,
  [15522] = 2,
    ACTIONS(1558), 1,
      sym_object_name,
    STATE(1251), 1,
      sym_trigger,
  [15529] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(271), 1,
      sym_function,
  [15536] = 2,
    ACTIONS(1329), 1,
      sym__hex_digit,
    STATE(672), 1,
      aux_sym_hexadecimal_literal_repeat1,
  [15543] = 1,
    ACTIONS(1422), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [15548] = 2,
    ACTIONS(1560), 1,
      sym_object_name,
    STATE(1108), 1,
      sym_language,
  [15555] = 2,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(358), 1,
      sym_code_block,
  [15562] = 2,
    ACTIONS(1562), 1,
      sym__hex_digit,
    STATE(438), 1,
      aux_sym_hexadecimal_literal_repeat2,
  [15569] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(1256), 1,
      sym_materialized_view,
  [15576] = 2,
    ACTIONS(1548), 1,
      sym_object_name,
    STATE(273), 1,
      sym_aggregate,
  [15583] = 1,
    ACTIONS(1566), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [15588] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(602), 1,
      sym_assignment_element,
  [15595] = 2,
    ACTIONS(1548), 1,
      sym_object_name,
    STATE(1101), 1,
      sym_aggregate,
  [15602] = 2,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(363), 1,
      sym_code_block,
  [15609] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(275), 1,
      sym_materialized_view,
  [15616] = 1,
    ACTIONS(1537), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15621] = 2,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    STATE(663), 1,
      sym_assignment_tuple,
  [15628] = 2,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_assignment_tuple,
  [15635] = 1,
    ACTIONS(1570), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15640] = 2,
    ACTIONS(1560), 1,
      sym_object_name,
    STATE(1127), 1,
      sym_language,
  [15647] = 2,
    ACTIONS(1552), 1,
      aux_sym_where_spec_token1,
    STATE(1093), 1,
      sym_materialized_view_where,
  [15654] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(1129), 1,
      sym_function,
  [15661] = 2,
    ACTIONS(1558), 1,
      sym_object_name,
    STATE(1247), 1,
      sym_trigger,
  [15668] = 1,
    ACTIONS(1528), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [15673] = 2,
    ACTIONS(1572), 1,
      aux_sym_from_spec_token1,
    STATE(66), 1,
      sym_from_spec,
  [15680] = 2,
    ACTIONS(1556), 1,
      sym_string_literal,
    STATE(379), 1,
      sym_trigger_class,
  [15687] = 2,
    ACTIONS(1550), 1,
      sym_object_name,
    STATE(278), 1,
      sym_type,
  [15694] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(1238), 1,
      sym_function,
  [15701] = 2,
    ACTIONS(1552), 1,
      aux_sym_where_spec_token1,
    STATE(1139), 1,
      sym_materialized_view_where,
  [15708] = 1,
    ACTIONS(1574), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [15713] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(1088), 1,
      sym_function,
  [15720] = 2,
    ACTIONS(1572), 1,
      aux_sym_from_spec_token1,
    STATE(605), 1,
      sym_from_spec,
  [15727] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(1021), 1,
      sym_function,
  [15734] = 1,
    ACTIONS(1511), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15739] = 2,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(381), 1,
      sym_code_block,
  [15746] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(586), 1,
      sym_assignment_element,
  [15753] = 1,
    ACTIONS(1576), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15758] = 2,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(269), 1,
      sym_code_block,
  [15765] = 2,
    ACTIONS(1227), 1,
      aux_sym_where_spec_token1,
    STATE(157), 1,
      sym_where_spec,
  [15772] = 2,
    ACTIONS(1229), 1,
      sym_object_name,
    STATE(353), 1,
      sym_role,
  [15779] = 2,
    ACTIONS(1560), 1,
      sym_object_name,
    STATE(1082), 1,
      sym_language,
  [15786] = 1,
    ACTIONS(1481), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [15791] = 2,
    ACTIONS(1229), 1,
      sym_object_name,
    STATE(238), 1,
      sym_role,
  [15798] = 2,
    ACTIONS(1235), 1,
      aux_sym_ttl_token1,
    STATE(253), 1,
      sym_ttl,
  [15805] = 2,
    ACTIONS(1578), 1,
      sym_string_literal,
    STATE(702), 1,
      sym_option_hash_item,
  [15812] = 2,
    ACTIONS(1233), 1,
      aux_sym_timestamp_token1,
    STATE(253), 1,
      sym_timestamp,
  [15819] = 1,
    ACTIONS(1580), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15824] = 1,
    ACTIONS(1496), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15829] = 2,
    ACTIONS(1560), 1,
      sym_object_name,
    STATE(1164), 1,
      sym_language,
  [15836] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(1165), 1,
      sym_function,
  [15843] = 2,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(414), 1,
      sym_code_block,
  [15850] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(886), 1,
      sym_assignment_element,
  [15857] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(543), 1,
      sym_assignment_element,
  [15864] = 2,
    ACTIONS(1229), 1,
      sym_object_name,
    STATE(285), 1,
      sym_role,
  [15871] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(1071), 1,
      sym_function,
  [15878] = 1,
    ACTIONS(1466), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15883] = 2,
    ACTIONS(1229), 1,
      sym_object_name,
    STATE(299), 1,
      sym_role,
  [15890] = 1,
    ACTIONS(1453), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15895] = 1,
    ACTIONS(1582), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15900] = 1,
    ACTIONS(1444), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15905] = 1,
    ACTIONS(619), 2,
      sym_object_name,
      sym__dquote,
  [15910] = 1,
    ACTIONS(1584), 2,
      aux_sym_resource_token3,
      aux_sym_drop_aggregate_token1,
  [15915] = 2,
    ACTIONS(1586), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1588), 1,
      aux_sym_create_materialized_view_token1,
  [15922] = 1,
    ACTIONS(1590), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15927] = 2,
    ACTIONS(1552), 1,
      aux_sym_where_spec_token1,
    STATE(1061), 1,
      sym_materialized_view_where,
  [15934] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(246), 1,
      sym_materialized_view,
  [15941] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(1059), 1,
      sym_function,
  [15948] = 1,
    ACTIONS(1592), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15953] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(968), 1,
      sym_function,
  [15960] = 2,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(318), 1,
      sym_code_block,
  [15967] = 2,
    ACTIONS(1223), 1,
      sym_object_name,
    STATE(947), 1,
      sym_user,
  [15974] = 2,
    ACTIONS(170), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(386), 1,
      sym_code_block,
  [15981] = 2,
    ACTIONS(1229), 1,
      sym_object_name,
    STATE(315), 1,
      sym_role,
  [15988] = 2,
    ACTIONS(1560), 1,
      sym_object_name,
    STATE(1050), 1,
      sym_language,
  [15995] = 2,
    ACTIONS(1594), 1,
      aux_sym_durable_writes_token1,
    STATE(310), 1,
      sym_durable_writes,
  [16002] = 2,
    ACTIONS(1223), 1,
      sym_object_name,
    STATE(282), 1,
      sym_user,
  [16009] = 1,
    ACTIONS(1596), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16014] = 2,
    ACTIONS(1227), 1,
      aux_sym_where_spec_token1,
    STATE(137), 1,
      sym_where_spec,
  [16021] = 1,
    ACTIONS(1406), 2,
      sym__hex_digit,
      anon_sym_SQUOTE,
  [16026] = 2,
    ACTIONS(1229), 1,
      sym_object_name,
    STATE(194), 1,
      sym_role,
  [16033] = 2,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_assignment_tuple,
  [16040] = 1,
    ACTIONS(1598), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [16045] = 1,
    ACTIONS(1411), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16050] = 2,
    ACTIONS(1594), 1,
      aux_sym_durable_writes_token1,
    STATE(286), 1,
      sym_durable_writes,
  [16057] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(1063), 1,
      sym_function,
  [16064] = 1,
    ACTIONS(1393), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16069] = 2,
    ACTIONS(512), 1,
      aux_sym_clustering_order_token1,
    STATE(351), 1,
      sym_clustering_order,
  [16076] = 2,
    ACTIONS(1506), 1,
      sym_object_name,
    STATE(233), 1,
      sym_if_condition,
  [16083] = 1,
    ACTIONS(1600), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [16088] = 1,
    ACTIONS(1602), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16093] = 1,
    ACTIONS(1604), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [16098] = 2,
    ACTIONS(1606), 1,
      sym_object_name,
    STATE(221), 1,
      sym_order_spec_element,
  [16105] = 2,
    ACTIONS(1552), 1,
      aux_sym_where_spec_token1,
    STATE(1030), 1,
      sym_materialized_view_where,
  [16112] = 2,
    ACTIONS(1158), 1,
      sym_object_name,
    STATE(822), 1,
      sym_delete_column_item,
  [16119] = 2,
    ACTIONS(1227), 1,
      aux_sym_where_spec_token1,
    STATE(136), 1,
      sym_where_spec,
  [16126] = 2,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_assignment_tuple,
  [16133] = 2,
    ACTIONS(1546), 1,
      aux_sym_role_with_options_token1,
    STATE(145), 1,
      sym_user_password,
  [16140] = 2,
    ACTIONS(1233), 1,
      aux_sym_timestamp_token1,
    STATE(551), 1,
      sym_timestamp,
  [16147] = 2,
    ACTIONS(1572), 1,
      aux_sym_from_spec_token1,
    STATE(65), 1,
      sym_from_spec,
  [16154] = 2,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    STATE(617), 1,
      sym_assignment_tuple,
  [16161] = 2,
    ACTIONS(1223), 1,
      sym_object_name,
    STATE(1131), 1,
      sym_user,
  [16168] = 2,
    ACTIONS(1550), 1,
      sym_object_name,
    STATE(456), 1,
      sym_type,
  [16175] = 2,
    ACTIONS(1229), 1,
      sym_object_name,
    STATE(190), 1,
      sym_role,
  [16182] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(147), 1,
      sym_function,
  [16189] = 2,
    ACTIONS(1608), 1,
      aux_sym_resource_token3,
    ACTIONS(1610), 1,
      aux_sym_drop_aggregate_token1,
  [16196] = 1,
    ACTIONS(1354), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [16201] = 2,
    ACTIONS(1229), 1,
      sym_object_name,
    STATE(123), 1,
      sym_role,
  [16208] = 2,
    ACTIONS(1612), 1,
      sym__hex_digit,
    STATE(87), 1,
      aux_sym_hexadecimal_literal_repeat2,
  [16215] = 1,
    ACTIONS(1253), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [16220] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(595), 1,
      sym_assignment_element,
  [16227] = 2,
    ACTIONS(1614), 1,
      anon_sym_EQ,
    ACTIONS(1616), 1,
      anon_sym_LBRACK,
  [16234] = 1,
    ACTIONS(1618), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16239] = 2,
    ACTIONS(1223), 1,
      sym_object_name,
    STATE(352), 1,
      sym_user,
  [16246] = 2,
    ACTIONS(1455), 1,
      sym_string_literal,
    STATE(923), 1,
      sym_replication_list_item,
  [16253] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(537), 1,
      sym_assignment_element,
  [16260] = 2,
    ACTIONS(1550), 1,
      sym_object_name,
    STATE(354), 1,
      sym_type,
  [16267] = 2,
    ACTIONS(1572), 1,
      aux_sym_from_spec_token1,
    STATE(594), 1,
      sym_from_spec,
  [16274] = 1,
    ACTIONS(1620), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16279] = 2,
    ACTIONS(1560), 1,
      sym_object_name,
    STATE(977), 1,
      sym_language,
  [16286] = 2,
    ACTIONS(1578), 1,
      sym_string_literal,
    STATE(928), 1,
      sym_option_hash_item,
  [16293] = 2,
    ACTIONS(1558), 1,
      sym_object_name,
    STATE(1113), 1,
      sym_trigger,
  [16300] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(368), 1,
      sym_materialized_view,
  [16307] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(982), 1,
      sym_function,
  [16314] = 1,
    ACTIONS(1315), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [16319] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(828), 1,
      sym_param,
  [16326] = 2,
    ACTIONS(1548), 1,
      sym_object_name,
    STATE(371), 1,
      sym_aggregate,
  [16333] = 2,
    ACTIONS(1552), 1,
      aux_sym_where_spec_token1,
    STATE(992), 1,
      sym_materialized_view_where,
  [16340] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(373), 1,
      sym_function,
  [16347] = 2,
    ACTIONS(1548), 1,
      sym_object_name,
    STATE(1111), 1,
      sym_aggregate,
  [16354] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(1112), 1,
      sym_function,
  [16361] = 2,
    ACTIONS(1038), 1,
      anon_sym_LPAREN,
    STATE(255), 1,
      sym_option_hash,
  [16368] = 1,
    ACTIONS(1622), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [16373] = 2,
    ACTIONS(1229), 1,
      sym_object_name,
    STATE(319), 1,
      sym_role,
  [16380] = 2,
    ACTIONS(1546), 1,
      aux_sym_role_with_options_token1,
    STATE(148), 1,
      sym_user_password,
  [16387] = 2,
    ACTIONS(1572), 1,
      aux_sym_from_spec_token1,
    STATE(71), 1,
      sym_from_spec,
  [16394] = 2,
    ACTIONS(1624), 1,
      sym__hex_digit,
    STATE(95), 1,
      aux_sym_hexadecimal_literal_repeat2,
  [16401] = 2,
    ACTIONS(1550), 1,
      sym_object_name,
    STATE(1090), 1,
      sym_type,
  [16408] = 2,
    ACTIONS(1556), 1,
      sym_string_literal,
    STATE(391), 1,
      sym_trigger_class,
  [16415] = 2,
    ACTIONS(1556), 1,
      sym_string_literal,
    STATE(361), 1,
      sym_trigger_class,
  [16422] = 2,
    ACTIONS(1596), 1,
      anon_sym_COMMA,
    ACTIONS(1626), 1,
      anon_sym_RPAREN,
  [16429] = 2,
    ACTIONS(1558), 1,
      sym_object_name,
    STATE(1086), 1,
      sym_trigger,
  [16436] = 1,
    ACTIONS(1628), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16441] = 1,
    ACTIONS(1282), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16446] = 2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(1125), 1,
      sym_materialized_view,
  [16453] = 2,
    ACTIONS(1594), 1,
      aux_sym_durable_writes_token1,
    STATE(280), 1,
      sym_durable_writes,
  [16460] = 2,
    ACTIONS(1630), 1,
      sym__hex_digit,
    STATE(74), 1,
      aux_sym_hexadecimal_literal_repeat2,
  [16467] = 2,
    ACTIONS(1560), 1,
      sym_object_name,
    STATE(1019), 1,
      sym_language,
  [16474] = 1,
    ACTIONS(1273), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16479] = 2,
    ACTIONS(1329), 1,
      sym__hex_digit,
    STATE(636), 1,
      aux_sym_hexadecimal_literal_repeat1,
  [16486] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(1023), 1,
      sym_function,
  [16493] = 1,
    ACTIONS(1632), 1,
      anon_sym_DOT,
  [16497] = 1,
    ACTIONS(1634), 1,
      aux_sym_create_materialized_view_token1,
  [16501] = 1,
    ACTIONS(1636), 1,
      anon_sym_DOT,
  [16505] = 1,
    ACTIONS(1638), 1,
      anon_sym_DOT,
  [16509] = 1,
    ACTIONS(1640), 1,
      anon_sym_DOT,
  [16513] = 1,
    ACTIONS(1642), 1,
      anon_sym_DOT,
  [16517] = 1,
    ACTIONS(1644), 1,
      anon_sym_DOT,
  [16521] = 1,
    ACTIONS(1646), 1,
      anon_sym_RPAREN,
  [16525] = 1,
    ACTIONS(1648), 1,
      anon_sym_RBRACE,
  [16529] = 1,
    ACTIONS(1650), 1,
      anon_sym_DOT,
  [16533] = 1,
    ACTIONS(1652), 1,
      aux_sym_order_spec_token2,
  [16537] = 1,
    ACTIONS(1654), 1,
      anon_sym_DOT,
  [16541] = 1,
    ACTIONS(1656), 1,
      aux_sym_create_function_token1,
  [16545] = 1,
    ACTIONS(1658), 1,
      aux_sym_create_keyspace_token1,
  [16549] = 1,
    ACTIONS(1660), 1,
      anon_sym_DOT,
  [16553] = 1,
    ACTIONS(1662), 1,
      aux_sym_select_statement_token5,
  [16557] = 1,
    ACTIONS(1664), 1,
      aux_sym_create_materialized_view_token2,
  [16561] = 1,
    ACTIONS(1666), 1,
      anon_sym_LPAREN,
  [16565] = 1,
    ACTIONS(1668), 1,
      aux_sym_create_function_token2,
  [16569] = 1,
    ACTIONS(1670), 1,
      anon_sym_DOT,
  [16573] = 1,
    ACTIONS(1672), 1,
      aux_sym_return_mode_token2,
  [16577] = 1,
    ACTIONS(1674), 1,
      aux_sym_create_function_token1,
  [16581] = 1,
    ACTIONS(1263), 1,
      aux_sym_update_token2,
  [16585] = 1,
    ACTIONS(1676), 1,
      aux_sym_using_timestamp_spec_token1,
  [16589] = 1,
    ACTIONS(1678), 1,
      anon_sym_DOT,
  [16593] = 1,
    ACTIONS(1680), 1,
      anon_sym_LPAREN,
  [16597] = 1,
    ACTIONS(1682), 1,
      anon_sym_DOT,
  [16601] = 1,
    ACTIONS(1684), 1,
      aux_sym_create_keyspace_token1,
  [16605] = 1,
    ACTIONS(1686), 1,
      anon_sym_RPAREN,
  [16609] = 1,
    ACTIONS(1688), 1,
      anon_sym_RPAREN,
  [16613] = 1,
    ACTIONS(1690), 1,
      anon_sym_COMMA,
  [16617] = 1,
    ACTIONS(1692), 1,
      anon_sym_RPAREN,
  [16621] = 1,
    ACTIONS(1694), 1,
      aux_sym_select_element_token1,
  [16625] = 1,
    ACTIONS(1696), 1,
      anon_sym_RPAREN,
  [16629] = 1,
    ACTIONS(1698), 1,
      anon_sym_RPAREN,
  [16633] = 1,
    ACTIONS(1700), 1,
      anon_sym_RPAREN,
  [16637] = 1,
    ACTIONS(1702), 1,
      aux_sym_create_aggregate_token1,
  [16641] = 1,
    ACTIONS(1704), 1,
      aux_sym_create_aggregate_token2,
  [16645] = 1,
    ACTIONS(1706), 1,
      anon_sym_DOT,
  [16649] = 1,
    ACTIONS(1708), 1,
      aux_sym_create_function_token2,
  [16653] = 1,
    ACTIONS(1710), 1,
      anon_sym_LPAREN,
  [16657] = 1,
    ACTIONS(1712), 1,
      aux_sym_create_function_token1,
  [16661] = 1,
    ACTIONS(1714), 1,
      aux_sym_create_index_token3,
  [16665] = 1,
    ACTIONS(1716), 1,
      anon_sym_RPAREN,
  [16669] = 1,
    ACTIONS(1718), 1,
      aux_sym_create_function_token1,
  [16673] = 1,
    ACTIONS(1720), 1,
      aux_sym_select_element_token1,
  [16677] = 1,
    ACTIONS(1722), 1,
      aux_sym_select_element_token1,
  [16681] = 1,
    ACTIONS(1724), 1,
      anon_sym_RPAREN,
  [16685] = 1,
    ACTIONS(1726), 1,
      anon_sym_DOT,
  [16689] = 1,
    ACTIONS(1728), 1,
      anon_sym_DOT,
  [16693] = 1,
    ACTIONS(1730), 1,
      aux_sym_grant_token2,
  [16697] = 1,
    ACTIONS(1732), 1,
      aux_sym_create_aggregate_token2,
  [16701] = 1,
    ACTIONS(1734), 1,
      aux_sym_from_spec_token1,
  [16705] = 1,
    ACTIONS(1736), 1,
      anon_sym_DOT,
  [16709] = 1,
    ACTIONS(1738), 1,
      aux_sym_create_aggregate_token3,
  [16713] = 1,
    ACTIONS(1740), 1,
      anon_sym_DOLLAR_DOLLAR,
  [16717] = 1,
    ACTIONS(1742), 1,
      aux_sym_from_spec_token1,
  [16721] = 1,
    ACTIONS(1744), 1,
      anon_sym_DOT,
  [16725] = 1,
    ACTIONS(1746), 1,
      anon_sym_RBRACE,
  [16729] = 1,
    ACTIONS(1748), 1,
      aux_sym_select_statement_token5,
  [16733] = 1,
    ACTIONS(1750), 1,
      anon_sym_LPAREN,
  [16737] = 1,
    ACTIONS(1752), 1,
      aux_sym_create_materialized_view_token1,
  [16741] = 1,
    ACTIONS(1754), 1,
      sym__hex_digit,
  [16745] = 1,
    ACTIONS(1756), 1,
      aux_sym_create_aggregate_token1,
  [16749] = 1,
    ACTIONS(1758), 1,
      anon_sym_DOT,
  [16753] = 1,
    ACTIONS(1760), 1,
      anon_sym_RPAREN,
  [16757] = 1,
    ACTIONS(1762), 1,
      anon_sym_DOT,
  [16761] = 1,
    ACTIONS(1764), 1,
      aux_sym_create_materialized_view_token2,
  [16765] = 1,
    ACTIONS(1766), 1,
      anon_sym_DOT,
  [16769] = 1,
    ACTIONS(1768), 1,
      aux_sym_create_index_token3,
  [16773] = 1,
    ACTIONS(1770), 1,
      aux_sym_decimal_literal_token1,
  [16777] = 1,
    ACTIONS(1772), 1,
      anon_sym_COLON,
  [16781] = 1,
    ACTIONS(1774), 1,
      anon_sym_LPAREN,
  [16785] = 1,
    ACTIONS(1424), 1,
      aux_sym_update_token2,
  [16789] = 1,
    ACTIONS(1776), 1,
      anon_sym_LPAREN,
  [16793] = 1,
    ACTIONS(1778), 1,
      anon_sym_EQ,
  [16797] = 1,
    ACTIONS(1780), 1,
      anon_sym_DOT,
  [16801] = 1,
    ACTIONS(1782), 1,
      anon_sym_RPAREN,
  [16805] = 1,
    ACTIONS(1784), 1,
      anon_sym_RPAREN,
  [16809] = 1,
    ACTIONS(1786), 1,
      anon_sym_DOT,
  [16813] = 1,
    ACTIONS(1788), 1,
      anon_sym_LPAREN,
  [16817] = 1,
    ACTIONS(1790), 1,
      anon_sym_EQ,
  [16821] = 1,
    ACTIONS(1792), 1,
      anon_sym_DOT,
  [16825] = 1,
    ACTIONS(1794), 1,
      aux_sym_from_spec_token1,
  [16829] = 1,
    ACTIONS(1796), 1,
      aux_sym_select_statement_token1,
  [16833] = 1,
    ACTIONS(1798), 1,
      aux_sym_create_function_token2,
  [16837] = 1,
    ACTIONS(1800), 1,
      anon_sym_RPAREN,
  [16841] = 1,
    ACTIONS(1802), 1,
      aux_sym_create_function_token1,
  [16845] = 1,
    ACTIONS(1804), 1,
      aux_sym_select_element_token1,
  [16849] = 1,
    ACTIONS(1806), 1,
      sym__dquote,
  [16853] = 1,
    ACTIONS(1808), 1,
      aux_sym_create_aggregate_token2,
  [16857] = 1,
    ACTIONS(1810), 1,
      aux_sym_if_not_exist_token2,
  [16861] = 1,
    ACTIONS(1812), 1,
      aux_sym_create_aggregate_token2,
  [16865] = 1,
    ACTIONS(1814), 1,
      aux_sym_create_aggregate_token3,
  [16869] = 1,
    ACTIONS(1816), 1,
      anon_sym_RPAREN,
  [16873] = 1,
    ACTIONS(1818), 1,
      anon_sym_DOT,
  [16877] = 1,
    ACTIONS(1820), 1,
      aux_sym_create_aggregate_token1,
  [16881] = 1,
    ACTIONS(1822), 1,
      sym_object_name,
  [16885] = 1,
    ACTIONS(1824), 1,
      anon_sym_COLON,
  [16889] = 1,
    ACTIONS(1826), 1,
      aux_sym_create_materialized_view_token1,
  [16893] = 1,
    ACTIONS(1828), 1,
      aux_sym_column_not_null_token1,
  [16897] = 1,
    ACTIONS(1830), 1,
      aux_sym_create_function_token2,
  [16901] = 1,
    ACTIONS(1832), 1,
      aux_sym_return_mode_token2,
  [16905] = 1,
    ACTIONS(1834), 1,
      aux_sym_relation_contains_key_token2,
  [16909] = 1,
    ACTIONS(1836), 1,
      aux_sym_constant_token1,
  [16913] = 1,
    ACTIONS(1838), 1,
      aux_sym_create_function_token1,
  [16917] = 1,
    ACTIONS(1840), 1,
      anon_sym_RBRACE,
  [16921] = 1,
    ACTIONS(1842), 1,
      anon_sym_COLON,
  [16925] = 1,
    ACTIONS(1844), 1,
      anon_sym_LPAREN,
  [16929] = 1,
    ACTIONS(1846), 1,
      anon_sym_LPAREN,
  [16933] = 1,
    ACTIONS(1848), 1,
      anon_sym_LPAREN,
  [16937] = 1,
    ACTIONS(1850), 1,
      anon_sym_RPAREN,
  [16941] = 1,
    ACTIONS(1852), 1,
      anon_sym_RPAREN,
  [16945] = 1,
    ACTIONS(1854), 1,
      anon_sym_COMMA,
  [16949] = 1,
    ACTIONS(1856), 1,
      anon_sym_RPAREN,
  [16953] = 1,
    ACTIONS(1858), 1,
      anon_sym_RPAREN,
  [16957] = 1,
    ACTIONS(1860), 1,
      anon_sym_RPAREN,
  [16961] = 1,
    ACTIONS(1862), 1,
      anon_sym_RPAREN,
  [16965] = 1,
    ACTIONS(1864), 1,
      anon_sym_RPAREN,
  [16969] = 1,
    ACTIONS(1866), 1,
      aux_sym_select_element_token1,
  [16973] = 1,
    ACTIONS(1868), 1,
      anon_sym_RPAREN,
  [16977] = 1,
    ACTIONS(1870), 1,
      aux_sym_create_function_token2,
  [16981] = 1,
    ACTIONS(1872), 1,
      anon_sym_LPAREN,
  [16985] = 1,
    ACTIONS(1874), 1,
      anon_sym_DOT,
  [16989] = 1,
    ACTIONS(1876), 1,
      aux_sym_order_spec_token1,
  [16993] = 1,
    ACTIONS(1878), 1,
      aux_sym_create_aggregate_token3,
  [16997] = 1,
    ACTIONS(1880), 1,
      anon_sym_LPAREN,
  [17001] = 1,
    ACTIONS(1882), 1,
      anon_sym_GT,
  [17005] = 1,
    ACTIONS(1884), 1,
      aux_sym_create_aggregate_token4,
  [17009] = 1,
    ACTIONS(1886), 1,
      aux_sym_create_keyspace_token1,
  [17013] = 1,
    ACTIONS(1888), 1,
      aux_sym_create_materialized_view_token1,
  [17017] = 1,
    ACTIONS(1890), 1,
      anon_sym_DOT,
  [17021] = 1,
    ACTIONS(1892), 1,
      anon_sym_LPAREN,
  [17025] = 1,
    ACTIONS(1894), 1,
      aux_sym_relation_contains_key_token2,
  [17029] = 1,
    ACTIONS(1896), 1,
      aux_sym_if_not_exist_token1,
  [17033] = 1,
    ACTIONS(1898), 1,
      sym_object_name,
  [17037] = 1,
    ACTIONS(1900), 1,
      sym_object_name,
  [17041] = 1,
    ACTIONS(1902), 1,
      anon_sym_EQ,
  [17045] = 1,
    ACTIONS(1904), 1,
      anon_sym_LPAREN,
  [17049] = 1,
    ACTIONS(1906), 1,
      aux_sym_create_function_token1,
  [17053] = 1,
    ACTIONS(1908), 1,
      aux_sym_create_aggregate_token2,
  [17057] = 1,
    ACTIONS(1910), 1,
      anon_sym_EQ,
  [17061] = 1,
    ACTIONS(1912), 1,
      anon_sym_RBRACK,
  [17065] = 1,
    ACTIONS(1914), 1,
      anon_sym_RPAREN,
  [17069] = 1,
    ACTIONS(1916), 1,
      anon_sym_LPAREN,
  [17073] = 1,
    ACTIONS(1918), 1,
      anon_sym_EQ,
  [17077] = 1,
    ACTIONS(1920), 1,
      anon_sym_LPAREN,
  [17081] = 1,
    ACTIONS(1922), 1,
      aux_sym_code_block_token1,
  [17085] = 1,
    ACTIONS(1924), 1,
      aux_sym_select_statement_token5,
  [17089] = 1,
    ACTIONS(1926), 1,
      anon_sym_RPAREN,
  [17093] = 1,
    ACTIONS(1928), 1,
      anon_sym_DOT,
  [17097] = 1,
    ACTIONS(1930), 1,
      aux_sym_select_element_token1,
  [17101] = 1,
    ACTIONS(1932), 1,
      aux_sym_select_element_token1,
  [17105] = 1,
    ACTIONS(1934), 1,
      aux_sym_create_function_token2,
  [17109] = 1,
    ACTIONS(1936), 1,
      aux_sym_select_statement_token1,
  [17113] = 1,
    ACTIONS(1938), 1,
      aux_sym_using_timestamp_spec_token1,
  [17117] = 1,
    ACTIONS(1940), 1,
      aux_sym_create_aggregate_token3,
  [17121] = 1,
    ACTIONS(1942), 1,
      aux_sym_create_aggregate_token4,
  [17125] = 1,
    ACTIONS(1944), 1,
      aux_sym_decimal_literal_token1,
  [17129] = 1,
    ACTIONS(1946), 1,
      anon_sym_LPAREN,
  [17133] = 1,
    ACTIONS(1948), 1,
      aux_sym_relation_contains_key_token2,
  [17137] = 1,
    ACTIONS(89), 1,
      anon_sym_DOT,
  [17141] = 1,
    ACTIONS(1950), 1,
      aux_sym_create_materialized_view_token1,
  [17145] = 1,
    ACTIONS(1952), 1,
      anon_sym_LPAREN,
  [17149] = 1,
    ACTIONS(1954), 1,
      aux_sym_constant_token1,
  [17153] = 1,
    ACTIONS(1956), 1,
      aux_sym_from_spec_token1,
  [17157] = 1,
    ACTIONS(1958), 1,
      anon_sym_RPAREN,
  [17161] = 1,
    ACTIONS(1960), 1,
      sym_string_literal,
  [17165] = 1,
    ACTIONS(1962), 1,
      anon_sym_RPAREN,
  [17169] = 1,
    ACTIONS(1964), 1,
      aux_sym_order_spec_token2,
  [17173] = 1,
    ACTIONS(1966), 1,
      anon_sym_LPAREN,
  [17177] = 1,
    ACTIONS(1968), 1,
      aux_sym_select_statement_token5,
  [17181] = 1,
    ACTIONS(1970), 1,
      anon_sym_RPAREN,
  [17185] = 1,
    ACTIONS(1972), 1,
      anon_sym_EQ,
  [17189] = 1,
    ACTIONS(1974), 1,
      sym_object_name,
  [17193] = 1,
    ACTIONS(1976), 1,
      anon_sym_DOT,
  [17197] = 1,
    ACTIONS(1978), 1,
      anon_sym_DOT,
  [17201] = 1,
    ACTIONS(1980), 1,
      aux_sym_select_element_token1,
  [17205] = 1,
    ACTIONS(1982), 1,
      anon_sym_DOT,
  [17209] = 1,
    ACTIONS(1984), 1,
      aux_sym_create_aggregate_token4,
  [17213] = 1,
    ACTIONS(1986), 1,
      anon_sym_LPAREN,
  [17217] = 1,
    ACTIONS(1988), 1,
      anon_sym_LPAREN,
  [17221] = 1,
    ACTIONS(1990), 1,
      aux_sym_create_index_token3,
  [17225] = 1,
    ACTIONS(1992), 1,
      anon_sym_DOT,
  [17229] = 1,
    ACTIONS(1994), 1,
      anon_sym_RPAREN,
  [17233] = 1,
    ACTIONS(1996), 1,
      aux_sym_create_materialized_view_token1,
  [17237] = 1,
    ACTIONS(1998), 1,
      anon_sym_LPAREN,
  [17241] = 1,
    ACTIONS(2000), 1,
      aux_sym_from_spec_token1,
  [17245] = 1,
    ACTIONS(2002), 1,
      aux_sym_relation_contains_key_token2,
  [17249] = 1,
    ACTIONS(2004), 1,
      anon_sym_DOT,
  [17253] = 1,
    ACTIONS(2006), 1,
      sym_object_name,
  [17257] = 1,
    ACTIONS(2008), 1,
      anon_sym_RPAREN,
  [17261] = 1,
    ACTIONS(2010), 1,
      aux_sym_create_function_token2,
  [17265] = 1,
    ACTIONS(2012), 1,
      aux_sym_create_aggregate_token3,
  [17269] = 1,
    ACTIONS(2014), 1,
      aux_sym_select_element_token1,
  [17273] = 1,
    ACTIONS(2016), 1,
      aux_sym_select_statement_token1,
  [17277] = 1,
    ACTIONS(2018), 1,
      aux_sym_select_element_token1,
  [17281] = 1,
    ACTIONS(2020), 1,
      aux_sym_create_aggregate_token1,
  [17285] = 1,
    ACTIONS(2022), 1,
      aux_sym_create_aggregate_token4,
  [17289] = 1,
    ACTIONS(2024), 1,
      anon_sym_RPAREN,
  [17293] = 1,
    ACTIONS(2026), 1,
      aux_sym_create_materialized_view_token2,
  [17297] = 1,
    ACTIONS(2028), 1,
      anon_sym_COLON,
  [17301] = 1,
    ACTIONS(2030), 1,
      anon_sym_RPAREN,
  [17305] = 1,
    ACTIONS(2032), 1,
      aux_sym_constant_token1,
  [17309] = 1,
    ACTIONS(2034), 1,
      aux_sym_create_index_token3,
  [17313] = 1,
    ACTIONS(2036), 1,
      anon_sym_COLON,
  [17317] = 1,
    ACTIONS(2038), 1,
      aux_sym_relation_contains_key_token2,
  [17321] = 1,
    ACTIONS(2040), 1,
      anon_sym_LPAREN,
  [17325] = 1,
    ACTIONS(2042), 1,
      aux_sym_create_materialized_view_token1,
  [17329] = 1,
    ACTIONS(2044), 1,
      anon_sym_LPAREN,
  [17333] = 1,
    ACTIONS(2046), 1,
      anon_sym_RPAREN,
  [17337] = 1,
    ACTIONS(2048), 1,
      aux_sym_create_materialized_view_token2,
  [17341] = 1,
    ACTIONS(2050), 1,
      aux_sym_create_function_token1,
  [17345] = 1,
    ACTIONS(2052), 1,
      anon_sym_LBRACE,
  [17349] = 1,
    ACTIONS(2054), 1,
      anon_sym_DOT,
  [17353] = 1,
    ACTIONS(2056), 1,
      anon_sym_RPAREN,
  [17357] = 1,
    ACTIONS(2058), 1,
      sym__dquote,
  [17361] = 1,
    ACTIONS(1519), 1,
      aux_sym_update_token2,
  [17365] = 1,
    ACTIONS(2060), 1,
      anon_sym_LPAREN,
  [17369] = 1,
    ACTIONS(2062), 1,
      sym_object_name,
  [17373] = 1,
    ACTIONS(2064), 1,
      sym_object_name,
  [17377] = 1,
    ACTIONS(2066), 1,
      anon_sym_DOT,
  [17381] = 1,
    ACTIONS(2068), 1,
      sym_object_name,
  [17385] = 1,
    ACTIONS(2070), 1,
      anon_sym_DOT,
  [17389] = 1,
    ACTIONS(2072), 1,
      anon_sym_DOT,
  [17393] = 1,
    ACTIONS(2074), 1,
      anon_sym_DOT,
  [17397] = 1,
    ACTIONS(2076), 1,
      aux_sym_create_index_token3,
  [17401] = 1,
    ACTIONS(2078), 1,
      anon_sym_LPAREN,
  [17405] = 1,
    ACTIONS(2080), 1,
      anon_sym_RPAREN,
  [17409] = 1,
    ACTIONS(2082), 1,
      aux_sym_relation_contains_key_token2,
  [17413] = 1,
    ACTIONS(2084), 1,
      anon_sym_DOT,
  [17417] = 1,
    ACTIONS(2086), 1,
      anon_sym_DOT,
  [17421] = 1,
    ACTIONS(2088), 1,
      anon_sym_RPAREN,
  [17425] = 1,
    ACTIONS(2090), 1,
      aux_sym_select_element_token1,
  [17429] = 1,
    ACTIONS(2092), 1,
      aux_sym_create_aggregate_token4,
  [17433] = 1,
    ACTIONS(2094), 1,
      anon_sym_DOT,
  [17437] = 1,
    ACTIONS(2096), 1,
      aux_sym_relation_contains_key_token2,
  [17441] = 1,
    ACTIONS(2098), 1,
      anon_sym_DOT,
  [17445] = 1,
    ACTIONS(2100), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [17449] = 1,
    ACTIONS(2102), 1,
      anon_sym_DOT,
  [17453] = 1,
    ACTIONS(2104), 1,
      anon_sym_EQ,
  [17457] = 1,
    ACTIONS(2106), 1,
      aux_sym_relation_contains_key_token2,
  [17461] = 1,
    ACTIONS(2108), 1,
      anon_sym_RPAREN,
  [17465] = 1,
    ACTIONS(2110), 1,
      anon_sym_EQ,
  [17469] = 1,
    ACTIONS(2112), 1,
      aux_sym_grant_token2,
  [17473] = 1,
    ACTIONS(2114), 1,
      aux_sym_create_materialized_view_token2,
  [17477] = 1,
    ACTIONS(2116), 1,
      anon_sym_EQ,
  [17481] = 1,
    ACTIONS(2118), 1,
      anon_sym_LPAREN,
  [17485] = 1,
    ACTIONS(2120), 1,
      anon_sym_RPAREN,
  [17489] = 1,
    ACTIONS(2122), 1,
      anon_sym_LPAREN,
  [17493] = 1,
    ACTIONS(2124), 1,
      anon_sym_DOT,
  [17497] = 1,
    ACTIONS(2126), 1,
      aux_sym_using_timestamp_spec_token1,
  [17501] = 1,
    ACTIONS(2128), 1,
      anon_sym_DOT,
  [17505] = 1,
    ACTIONS(2130), 1,
      aux_sym_drop_type_token1,
  [17509] = 1,
    ACTIONS(2132), 1,
      aux_sym_grant_token2,
  [17513] = 1,
    ACTIONS(2134), 1,
      anon_sym_RPAREN,
  [17517] = 1,
    ACTIONS(2136), 1,
      aux_sym_select_statement_token5,
  [17521] = 1,
    ACTIONS(2138), 1,
      anon_sym_DOT,
  [17525] = 1,
    ACTIONS(2140), 1,
      anon_sym_RPAREN,
  [17529] = 1,
    ACTIONS(2142), 1,
      anon_sym_LPAREN,
  [17533] = 1,
    ACTIONS(2144), 1,
      anon_sym_LPAREN,
  [17537] = 1,
    ACTIONS(2146), 1,
      anon_sym_DOT,
  [17541] = 1,
    ACTIONS(2148), 1,
      sym_object_name,
  [17545] = 1,
    ACTIONS(2150), 1,
      aux_sym_create_materialized_view_token2,
  [17549] = 1,
    ACTIONS(2152), 1,
      aux_sym_create_index_token3,
  [17553] = 1,
    ACTIONS(2154), 1,
      anon_sym_RPAREN,
  [17557] = 1,
    ACTIONS(2156), 1,
      anon_sym_LPAREN,
  [17561] = 1,
    ACTIONS(2158), 1,
      anon_sym_DOT,
  [17565] = 1,
    ACTIONS(2160), 1,
      aux_sym_if_not_exist_token1,
  [17569] = 1,
    ACTIONS(2162), 1,
      aux_sym_select_statement_token5,
  [17573] = 1,
    ACTIONS(2164), 1,
      anon_sym_DOT,
  [17577] = 1,
    ACTIONS(2166), 1,
      sym__dquote,
  [17581] = 1,
    ACTIONS(2168), 1,
      anon_sym_DOT,
  [17585] = 1,
    ACTIONS(2170), 1,
      aux_sym_update_token2,
  [17589] = 1,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
  [17593] = 1,
    ACTIONS(2172), 1,
      sym__dquote,
  [17597] = 1,
    ACTIONS(2174), 1,
      anon_sym_RPAREN,
  [17601] = 1,
    ACTIONS(2176), 1,
      anon_sym_LPAREN,
  [17605] = 1,
    ACTIONS(2178), 1,
      sym_object_name,
  [17609] = 1,
    ACTIONS(2178), 1,
      anon_sym_STAR,
  [17613] = 1,
    ACTIONS(2180), 1,
      anon_sym_LBRACE,
  [17617] = 1,
    ACTIONS(2182), 1,
      anon_sym_RPAREN,
  [17621] = 1,
    ACTIONS(2184), 1,
      aux_sym_insert_statement_token2,
  [17625] = 1,
    ACTIONS(2186), 1,
      aux_sym_create_index_token3,
  [17629] = 1,
    ACTIONS(2188), 1,
      anon_sym_LPAREN,
  [17633] = 1,
    ACTIONS(2190), 1,
      anon_sym_LPAREN,
  [17637] = 1,
    ACTIONS(2192), 1,
      aux_sym_drop_materialized_view_token2,
  [17641] = 1,
    ACTIONS(2194), 1,
      anon_sym_LPAREN,
  [17645] = 1,
    ACTIONS(2196), 1,
      anon_sym_LPAREN,
  [17649] = 1,
    ACTIONS(2198), 1,
      aux_sym_create_index_token3,
  [17653] = 1,
    ACTIONS(2200), 1,
      sym_object_name,
  [17657] = 1,
    ACTIONS(2202), 1,
      anon_sym_RPAREN,
  [17661] = 1,
    ACTIONS(2204), 1,
      anon_sym_RPAREN,
  [17665] = 1,
    ACTIONS(2206), 1,
      aux_sym_resource_token2,
  [17669] = 1,
    ACTIONS(2208), 1,
      anon_sym_DOT,
  [17673] = 1,
    ACTIONS(2210), 1,
      aux_sym_drop_materialized_view_token2,
  [17677] = 1,
    ACTIONS(2212), 1,
      anon_sym_DOT,
  [17681] = 1,
    ACTIONS(2214), 1,
      anon_sym_LBRACE,
  [17685] = 1,
    ACTIONS(2216), 1,
      aux_sym_or_replace_token2,
  [17689] = 1,
    ACTIONS(2218), 1,
      aux_sym_drop_materialized_view_token2,
  [17693] = 1,
    ACTIONS(2220), 1,
      anon_sym_DOT,
  [17697] = 1,
    ACTIONS(2222), 1,
      aux_sym_decimal_literal_token1,
  [17701] = 1,
    ACTIONS(2224), 1,
      anon_sym_GT,
  [17705] = 1,
    ACTIONS(2226), 1,
      sym_object_name,
  [17709] = 1,
    ACTIONS(2228), 1,
      aux_sym_begin_batch_token4,
  [17713] = 1,
    ACTIONS(2230), 1,
      anon_sym_RBRACK,
  [17717] = 1,
    ACTIONS(2232), 1,
      aux_sym_if_not_exist_token2,
  [17721] = 1,
    ACTIONS(2234), 1,
      anon_sym_LPAREN,
  [17725] = 1,
    ACTIONS(2236), 1,
      anon_sym_DOLLAR_DOLLAR,
  [17729] = 1,
    ACTIONS(2238), 1,
      aux_sym_decimal_literal_token1,
  [17733] = 1,
    ACTIONS(2240), 1,
      aux_sym_constant_token1,
  [17737] = 1,
    ACTIONS(2242), 1,
      aux_sym_create_index_token3,
  [17741] = 1,
    ACTIONS(2244), 1,
      aux_sym_create_function_token1,
  [17745] = 1,
    ACTIONS(2246), 1,
      anon_sym_DOT,
  [17749] = 1,
    ACTIONS(2248), 1,
      sym__dquote,
  [17753] = 1,
    ACTIONS(2250), 1,
      anon_sym_LPAREN,
  [17757] = 1,
    ACTIONS(2252), 1,
      aux_sym_create_index_token3,
  [17761] = 1,
    ACTIONS(2254), 1,
      sym_string_literal,
  [17765] = 1,
    ACTIONS(2256), 1,
      anon_sym_RPAREN,
  [17769] = 1,
    ACTIONS(2258), 1,
      anon_sym_LPAREN,
  [17773] = 1,
    ACTIONS(2260), 1,
      aux_sym_using_timestamp_spec_token1,
  [17777] = 1,
    ACTIONS(2262), 1,
      ts_builtin_sym_end,
  [17781] = 1,
    ACTIONS(2264), 1,
      aux_sym_begin_batch_token4,
  [17785] = 1,
    ACTIONS(2266), 1,
      aux_sym_if_not_exist_token2,
  [17789] = 1,
    ACTIONS(2268), 1,
      aux_sym_select_statement_token1,
  [17793] = 1,
    ACTIONS(2270), 1,
      aux_sym_select_element_token1,
  [17797] = 1,
    ACTIONS(2272), 1,
      aux_sym_if_not_exist_token1,
  [17801] = 1,
    ACTIONS(2274), 1,
      aux_sym_create_aggregate_token1,
  [17805] = 1,
    ACTIONS(2276), 1,
      aux_sym_code_block_token1,
  [17809] = 1,
    ACTIONS(2278), 1,
      aux_sym_insert_statement_token2,
  [17813] = 1,
    ACTIONS(2280), 1,
      sym_object_name,
  [17817] = 1,
    ACTIONS(2282), 1,
      aux_sym_if_not_exist_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 92,
  [SMALL_STATE(4)] = 184,
  [SMALL_STATE(5)] = 222,
  [SMALL_STATE(6)] = 257,
  [SMALL_STATE(7)] = 292,
  [SMALL_STATE(8)] = 328,
  [SMALL_STATE(9)] = 362,
  [SMALL_STATE(10)] = 395,
  [SMALL_STATE(11)] = 428,
  [SMALL_STATE(12)] = 461,
  [SMALL_STATE(13)] = 494,
  [SMALL_STATE(14)] = 528,
  [SMALL_STATE(15)] = 562,
  [SMALL_STATE(16)] = 599,
  [SMALL_STATE(17)] = 632,
  [SMALL_STATE(18)] = 663,
  [SMALL_STATE(19)] = 700,
  [SMALL_STATE(20)] = 737,
  [SMALL_STATE(21)] = 774,
  [SMALL_STATE(22)] = 805,
  [SMALL_STATE(23)] = 842,
  [SMALL_STATE(24)] = 879,
  [SMALL_STATE(25)] = 916,
  [SMALL_STATE(26)] = 953,
  [SMALL_STATE(27)] = 990,
  [SMALL_STATE(28)] = 1027,
  [SMALL_STATE(29)] = 1064,
  [SMALL_STATE(30)] = 1101,
  [SMALL_STATE(31)] = 1138,
  [SMALL_STATE(32)] = 1175,
  [SMALL_STATE(33)] = 1212,
  [SMALL_STATE(34)] = 1249,
  [SMALL_STATE(35)] = 1286,
  [SMALL_STATE(36)] = 1323,
  [SMALL_STATE(37)] = 1360,
  [SMALL_STATE(38)] = 1397,
  [SMALL_STATE(39)] = 1434,
  [SMALL_STATE(40)] = 1471,
  [SMALL_STATE(41)] = 1508,
  [SMALL_STATE(42)] = 1541,
  [SMALL_STATE(43)] = 1578,
  [SMALL_STATE(44)] = 1612,
  [SMALL_STATE(45)] = 1644,
  [SMALL_STATE(46)] = 1678,
  [SMALL_STATE(47)] = 1713,
  [SMALL_STATE(48)] = 1747,
  [SMALL_STATE(49)] = 1781,
  [SMALL_STATE(50)] = 1811,
  [SMALL_STATE(51)] = 1841,
  [SMALL_STATE(52)] = 1871,
  [SMALL_STATE(53)] = 1905,
  [SMALL_STATE(54)] = 1935,
  [SMALL_STATE(55)] = 1991,
  [SMALL_STATE(56)] = 2019,
  [SMALL_STATE(57)] = 2053,
  [SMALL_STATE(58)] = 2081,
  [SMALL_STATE(59)] = 2134,
  [SMALL_STATE(60)] = 2162,
  [SMALL_STATE(61)] = 2190,
  [SMALL_STATE(62)] = 2216,
  [SMALL_STATE(63)] = 2246,
  [SMALL_STATE(64)] = 2274,
  [SMALL_STATE(65)] = 2302,
  [SMALL_STATE(66)] = 2342,
  [SMALL_STATE(67)] = 2382,
  [SMALL_STATE(68)] = 2410,
  [SMALL_STATE(69)] = 2438,
  [SMALL_STATE(70)] = 2466,
  [SMALL_STATE(71)] = 2494,
  [SMALL_STATE(72)] = 2534,
  [SMALL_STATE(73)] = 2563,
  [SMALL_STATE(74)] = 2590,
  [SMALL_STATE(75)] = 2619,
  [SMALL_STATE(76)] = 2644,
  [SMALL_STATE(77)] = 2697,
  [SMALL_STATE(78)] = 2736,
  [SMALL_STATE(79)] = 2763,
  [SMALL_STATE(80)] = 2791,
  [SMALL_STATE(81)] = 2825,
  [SMALL_STATE(82)] = 2871,
  [SMALL_STATE(83)] = 2917,
  [SMALL_STATE(84)] = 2971,
  [SMALL_STATE(85)] = 3017,
  [SMALL_STATE(86)] = 3045,
  [SMALL_STATE(87)] = 3091,
  [SMALL_STATE(88)] = 3119,
  [SMALL_STATE(89)] = 3153,
  [SMALL_STATE(90)] = 3205,
  [SMALL_STATE(91)] = 3229,
  [SMALL_STATE(92)] = 3263,
  [SMALL_STATE(93)] = 3287,
  [SMALL_STATE(94)] = 3311,
  [SMALL_STATE(95)] = 3357,
  [SMALL_STATE(96)] = 3387,
  [SMALL_STATE(97)] = 3411,
  [SMALL_STATE(98)] = 3439,
  [SMALL_STATE(99)] = 3469,
  [SMALL_STATE(100)] = 3493,
  [SMALL_STATE(101)] = 3519,
  [SMALL_STATE(102)] = 3565,
  [SMALL_STATE(103)] = 3591,
  [SMALL_STATE(104)] = 3619,
  [SMALL_STATE(105)] = 3643,
  [SMALL_STATE(106)] = 3667,
  [SMALL_STATE(107)] = 3695,
  [SMALL_STATE(108)] = 3726,
  [SMALL_STATE(109)] = 3751,
  [SMALL_STATE(110)] = 3780,
  [SMALL_STATE(111)] = 3811,
  [SMALL_STATE(112)] = 3836,
  [SMALL_STATE(113)] = 3861,
  [SMALL_STATE(114)] = 3888,
  [SMALL_STATE(115)] = 3919,
  [SMALL_STATE(116)] = 3950,
  [SMALL_STATE(117)] = 3975,
  [SMALL_STATE(118)] = 3998,
  [SMALL_STATE(119)] = 4029,
  [SMALL_STATE(120)] = 4078,
  [SMALL_STATE(121)] = 4107,
  [SMALL_STATE(122)] = 4136,
  [SMALL_STATE(123)] = 4164,
  [SMALL_STATE(124)] = 4186,
  [SMALL_STATE(125)] = 4208,
  [SMALL_STATE(126)] = 4236,
  [SMALL_STATE(127)] = 4262,
  [SMALL_STATE(128)] = 4284,
  [SMALL_STATE(129)] = 4308,
  [SMALL_STATE(130)] = 4336,
  [SMALL_STATE(131)] = 4358,
  [SMALL_STATE(132)] = 4384,
  [SMALL_STATE(133)] = 4412,
  [SMALL_STATE(134)] = 4458,
  [SMALL_STATE(135)] = 4484,
  [SMALL_STATE(136)] = 4506,
  [SMALL_STATE(137)] = 4534,
  [SMALL_STATE(138)] = 4562,
  [SMALL_STATE(139)] = 4590,
  [SMALL_STATE(140)] = 4612,
  [SMALL_STATE(141)] = 4634,
  [SMALL_STATE(142)] = 4662,
  [SMALL_STATE(143)] = 4688,
  [SMALL_STATE(144)] = 4716,
  [SMALL_STATE(145)] = 4740,
  [SMALL_STATE(146)] = 4766,
  [SMALL_STATE(147)] = 4790,
  [SMALL_STATE(148)] = 4812,
  [SMALL_STATE(149)] = 4838,
  [SMALL_STATE(150)] = 4862,
  [SMALL_STATE(151)] = 4886,
  [SMALL_STATE(152)] = 4908,
  [SMALL_STATE(153)] = 4936,
  [SMALL_STATE(154)] = 4964,
  [SMALL_STATE(155)] = 4990,
  [SMALL_STATE(156)] = 5036,
  [SMALL_STATE(157)] = 5058,
  [SMALL_STATE(158)] = 5086,
  [SMALL_STATE(159)] = 5132,
  [SMALL_STATE(160)] = 5178,
  [SMALL_STATE(161)] = 5206,
  [SMALL_STATE(162)] = 5228,
  [SMALL_STATE(163)] = 5254,
  [SMALL_STATE(164)] = 5282,
  [SMALL_STATE(165)] = 5306,
  [SMALL_STATE(166)] = 5330,
  [SMALL_STATE(167)] = 5351,
  [SMALL_STATE(168)] = 5376,
  [SMALL_STATE(169)] = 5401,
  [SMALL_STATE(170)] = 5422,
  [SMALL_STATE(171)] = 5447,
  [SMALL_STATE(172)] = 5472,
  [SMALL_STATE(173)] = 5497,
  [SMALL_STATE(174)] = 5518,
  [SMALL_STATE(175)] = 5543,
  [SMALL_STATE(176)] = 5568,
  [SMALL_STATE(177)] = 5593,
  [SMALL_STATE(178)] = 5618,
  [SMALL_STATE(179)] = 5639,
  [SMALL_STATE(180)] = 5660,
  [SMALL_STATE(181)] = 5681,
  [SMALL_STATE(182)] = 5704,
  [SMALL_STATE(183)] = 5729,
  [SMALL_STATE(184)] = 5770,
  [SMALL_STATE(185)] = 5791,
  [SMALL_STATE(186)] = 5816,
  [SMALL_STATE(187)] = 5841,
  [SMALL_STATE(188)] = 5862,
  [SMALL_STATE(189)] = 5887,
  [SMALL_STATE(190)] = 5908,
  [SMALL_STATE(191)] = 5933,
  [SMALL_STATE(192)] = 5954,
  [SMALL_STATE(193)] = 5979,
  [SMALL_STATE(194)] = 6004,
  [SMALL_STATE(195)] = 6029,
  [SMALL_STATE(196)] = 6054,
  [SMALL_STATE(197)] = 6079,
  [SMALL_STATE(198)] = 6102,
  [SMALL_STATE(199)] = 6123,
  [SMALL_STATE(200)] = 6144,
  [SMALL_STATE(201)] = 6169,
  [SMALL_STATE(202)] = 6194,
  [SMALL_STATE(203)] = 6219,
  [SMALL_STATE(204)] = 6240,
  [SMALL_STATE(205)] = 6265,
  [SMALL_STATE(206)] = 6286,
  [SMALL_STATE(207)] = 6307,
  [SMALL_STATE(208)] = 6332,
  [SMALL_STATE(209)] = 6357,
  [SMALL_STATE(210)] = 6378,
  [SMALL_STATE(211)] = 6399,
  [SMALL_STATE(212)] = 6424,
  [SMALL_STATE(213)] = 6447,
  [SMALL_STATE(214)] = 6490,
  [SMALL_STATE(215)] = 6515,
  [SMALL_STATE(216)] = 6540,
  [SMALL_STATE(217)] = 6563,
  [SMALL_STATE(218)] = 6588,
  [SMALL_STATE(219)] = 6609,
  [SMALL_STATE(220)] = 6632,
  [SMALL_STATE(221)] = 6657,
  [SMALL_STATE(222)] = 6678,
  [SMALL_STATE(223)] = 6699,
  [SMALL_STATE(224)] = 6719,
  [SMALL_STATE(225)] = 6741,
  [SMALL_STATE(226)] = 6761,
  [SMALL_STATE(227)] = 6781,
  [SMALL_STATE(228)] = 6801,
  [SMALL_STATE(229)] = 6823,
  [SMALL_STATE(230)] = 6845,
  [SMALL_STATE(231)] = 6867,
  [SMALL_STATE(232)] = 6887,
  [SMALL_STATE(233)] = 6909,
  [SMALL_STATE(234)] = 6929,
  [SMALL_STATE(235)] = 6969,
  [SMALL_STATE(236)] = 6991,
  [SMALL_STATE(237)] = 7013,
  [SMALL_STATE(238)] = 7035,
  [SMALL_STATE(239)] = 7057,
  [SMALL_STATE(240)] = 7079,
  [SMALL_STATE(241)] = 7119,
  [SMALL_STATE(242)] = 7141,
  [SMALL_STATE(243)] = 7161,
  [SMALL_STATE(244)] = 7181,
  [SMALL_STATE(245)] = 7203,
  [SMALL_STATE(246)] = 7225,
  [SMALL_STATE(247)] = 7247,
  [SMALL_STATE(248)] = 7267,
  [SMALL_STATE(249)] = 7289,
  [SMALL_STATE(250)] = 7329,
  [SMALL_STATE(251)] = 7351,
  [SMALL_STATE(252)] = 7391,
  [SMALL_STATE(253)] = 7413,
  [SMALL_STATE(254)] = 7433,
  [SMALL_STATE(255)] = 7455,
  [SMALL_STATE(256)] = 7475,
  [SMALL_STATE(257)] = 7497,
  [SMALL_STATE(258)] = 7519,
  [SMALL_STATE(259)] = 7541,
  [SMALL_STATE(260)] = 7561,
  [SMALL_STATE(261)] = 7580,
  [SMALL_STATE(262)] = 7599,
  [SMALL_STATE(263)] = 7618,
  [SMALL_STATE(264)] = 7637,
  [SMALL_STATE(265)] = 7656,
  [SMALL_STATE(266)] = 7675,
  [SMALL_STATE(267)] = 7694,
  [SMALL_STATE(268)] = 7713,
  [SMALL_STATE(269)] = 7732,
  [SMALL_STATE(270)] = 7751,
  [SMALL_STATE(271)] = 7770,
  [SMALL_STATE(272)] = 7789,
  [SMALL_STATE(273)] = 7808,
  [SMALL_STATE(274)] = 7827,
  [SMALL_STATE(275)] = 7846,
  [SMALL_STATE(276)] = 7865,
  [SMALL_STATE(277)] = 7884,
  [SMALL_STATE(278)] = 7903,
  [SMALL_STATE(279)] = 7922,
  [SMALL_STATE(280)] = 7959,
  [SMALL_STATE(281)] = 7978,
  [SMALL_STATE(282)] = 7997,
  [SMALL_STATE(283)] = 8016,
  [SMALL_STATE(284)] = 8035,
  [SMALL_STATE(285)] = 8054,
  [SMALL_STATE(286)] = 8073,
  [SMALL_STATE(287)] = 8092,
  [SMALL_STATE(288)] = 8111,
  [SMALL_STATE(289)] = 8130,
  [SMALL_STATE(290)] = 8149,
  [SMALL_STATE(291)] = 8168,
  [SMALL_STATE(292)] = 8189,
  [SMALL_STATE(293)] = 8208,
  [SMALL_STATE(294)] = 8227,
  [SMALL_STATE(295)] = 8246,
  [SMALL_STATE(296)] = 8265,
  [SMALL_STATE(297)] = 8302,
  [SMALL_STATE(298)] = 8321,
  [SMALL_STATE(299)] = 8340,
  [SMALL_STATE(300)] = 8359,
  [SMALL_STATE(301)] = 8396,
  [SMALL_STATE(302)] = 8415,
  [SMALL_STATE(303)] = 8434,
  [SMALL_STATE(304)] = 8453,
  [SMALL_STATE(305)] = 8490,
  [SMALL_STATE(306)] = 8509,
  [SMALL_STATE(307)] = 8528,
  [SMALL_STATE(308)] = 8565,
  [SMALL_STATE(309)] = 8602,
  [SMALL_STATE(310)] = 8639,
  [SMALL_STATE(311)] = 8658,
  [SMALL_STATE(312)] = 8677,
  [SMALL_STATE(313)] = 8696,
  [SMALL_STATE(314)] = 8715,
  [SMALL_STATE(315)] = 8734,
  [SMALL_STATE(316)] = 8753,
  [SMALL_STATE(317)] = 8772,
  [SMALL_STATE(318)] = 8791,
  [SMALL_STATE(319)] = 8810,
  [SMALL_STATE(320)] = 8829,
  [SMALL_STATE(321)] = 8866,
  [SMALL_STATE(322)] = 8885,
  [SMALL_STATE(323)] = 8922,
  [SMALL_STATE(324)] = 8941,
  [SMALL_STATE(325)] = 8960,
  [SMALL_STATE(326)] = 8979,
  [SMALL_STATE(327)] = 8998,
  [SMALL_STATE(328)] = 9035,
  [SMALL_STATE(329)] = 9054,
  [SMALL_STATE(330)] = 9073,
  [SMALL_STATE(331)] = 9092,
  [SMALL_STATE(332)] = 9111,
  [SMALL_STATE(333)] = 9148,
  [SMALL_STATE(334)] = 9167,
  [SMALL_STATE(335)] = 9186,
  [SMALL_STATE(336)] = 9205,
  [SMALL_STATE(337)] = 9224,
  [SMALL_STATE(338)] = 9243,
  [SMALL_STATE(339)] = 9262,
  [SMALL_STATE(340)] = 9281,
  [SMALL_STATE(341)] = 9300,
  [SMALL_STATE(342)] = 9319,
  [SMALL_STATE(343)] = 9338,
  [SMALL_STATE(344)] = 9357,
  [SMALL_STATE(345)] = 9376,
  [SMALL_STATE(346)] = 9395,
  [SMALL_STATE(347)] = 9414,
  [SMALL_STATE(348)] = 9433,
  [SMALL_STATE(349)] = 9452,
  [SMALL_STATE(350)] = 9471,
  [SMALL_STATE(351)] = 9490,
  [SMALL_STATE(352)] = 9509,
  [SMALL_STATE(353)] = 9528,
  [SMALL_STATE(354)] = 9547,
  [SMALL_STATE(355)] = 9566,
  [SMALL_STATE(356)] = 9585,
  [SMALL_STATE(357)] = 9604,
  [SMALL_STATE(358)] = 9623,
  [SMALL_STATE(359)] = 9642,
  [SMALL_STATE(360)] = 9661,
  [SMALL_STATE(361)] = 9698,
  [SMALL_STATE(362)] = 9717,
  [SMALL_STATE(363)] = 9736,
  [SMALL_STATE(364)] = 9755,
  [SMALL_STATE(365)] = 9774,
  [SMALL_STATE(366)] = 9793,
  [SMALL_STATE(367)] = 9812,
  [SMALL_STATE(368)] = 9831,
  [SMALL_STATE(369)] = 9850,
  [SMALL_STATE(370)] = 9869,
  [SMALL_STATE(371)] = 9888,
  [SMALL_STATE(372)] = 9907,
  [SMALL_STATE(373)] = 9926,
  [SMALL_STATE(374)] = 9945,
  [SMALL_STATE(375)] = 9982,
  [SMALL_STATE(376)] = 10001,
  [SMALL_STATE(377)] = 10020,
  [SMALL_STATE(378)] = 10039,
  [SMALL_STATE(379)] = 10058,
  [SMALL_STATE(380)] = 10077,
  [SMALL_STATE(381)] = 10096,
  [SMALL_STATE(382)] = 10115,
  [SMALL_STATE(383)] = 10134,
  [SMALL_STATE(384)] = 10153,
  [SMALL_STATE(385)] = 10190,
  [SMALL_STATE(386)] = 10209,
  [SMALL_STATE(387)] = 10228,
  [SMALL_STATE(388)] = 10247,
  [SMALL_STATE(389)] = 10266,
  [SMALL_STATE(390)] = 10285,
  [SMALL_STATE(391)] = 10304,
  [SMALL_STATE(392)] = 10323,
  [SMALL_STATE(393)] = 10342,
  [SMALL_STATE(394)] = 10361,
  [SMALL_STATE(395)] = 10380,
  [SMALL_STATE(396)] = 10399,
  [SMALL_STATE(397)] = 10418,
  [SMALL_STATE(398)] = 10437,
  [SMALL_STATE(399)] = 10456,
  [SMALL_STATE(400)] = 10475,
  [SMALL_STATE(401)] = 10494,
  [SMALL_STATE(402)] = 10513,
  [SMALL_STATE(403)] = 10532,
  [SMALL_STATE(404)] = 10551,
  [SMALL_STATE(405)] = 10570,
  [SMALL_STATE(406)] = 10589,
  [SMALL_STATE(407)] = 10608,
  [SMALL_STATE(408)] = 10627,
  [SMALL_STATE(409)] = 10646,
  [SMALL_STATE(410)] = 10665,
  [SMALL_STATE(411)] = 10684,
  [SMALL_STATE(412)] = 10703,
  [SMALL_STATE(413)] = 10722,
  [SMALL_STATE(414)] = 10741,
  [SMALL_STATE(415)] = 10760,
  [SMALL_STATE(416)] = 10797,
  [SMALL_STATE(417)] = 10834,
  [SMALL_STATE(418)] = 10853,
  [SMALL_STATE(419)] = 10871,
  [SMALL_STATE(420)] = 10908,
  [SMALL_STATE(421)] = 10928,
  [SMALL_STATE(422)] = 10945,
  [SMALL_STATE(423)] = 10976,
  [SMALL_STATE(424)] = 10999,
  [SMALL_STATE(425)] = 11022,
  [SMALL_STATE(426)] = 11047,
  [SMALL_STATE(427)] = 11070,
  [SMALL_STATE(428)] = 11095,
  [SMALL_STATE(429)] = 11112,
  [SMALL_STATE(430)] = 11137,
  [SMALL_STATE(431)] = 11154,
  [SMALL_STATE(432)] = 11179,
  [SMALL_STATE(433)] = 11204,
  [SMALL_STATE(434)] = 11235,
  [SMALL_STATE(435)] = 11266,
  [SMALL_STATE(436)] = 11289,
  [SMALL_STATE(437)] = 11312,
  [SMALL_STATE(438)] = 11343,
  [SMALL_STATE(439)] = 11360,
  [SMALL_STATE(440)] = 11386,
  [SMALL_STATE(441)] = 11410,
  [SMALL_STATE(442)] = 11436,
  [SMALL_STATE(443)] = 11459,
  [SMALL_STATE(444)] = 11482,
  [SMALL_STATE(445)] = 11505,
  [SMALL_STATE(446)] = 11524,
  [SMALL_STATE(447)] = 11547,
  [SMALL_STATE(448)] = 11572,
  [SMALL_STATE(449)] = 11594,
  [SMALL_STATE(450)] = 11612,
  [SMALL_STATE(451)] = 11626,
  [SMALL_STATE(452)] = 11648,
  [SMALL_STATE(453)] = 11670,
  [SMALL_STATE(454)] = 11692,
  [SMALL_STATE(455)] = 11714,
  [SMALL_STATE(456)] = 11736,
  [SMALL_STATE(457)] = 11754,
  [SMALL_STATE(458)] = 11768,
  [SMALL_STATE(459)] = 11790,
  [SMALL_STATE(460)] = 11809,
  [SMALL_STATE(461)] = 11828,
  [SMALL_STATE(462)] = 11839,
  [SMALL_STATE(463)] = 11858,
  [SMALL_STATE(464)] = 11877,
  [SMALL_STATE(465)] = 11896,
  [SMALL_STATE(466)] = 11915,
  [SMALL_STATE(467)] = 11934,
  [SMALL_STATE(468)] = 11953,
  [SMALL_STATE(469)] = 11964,
  [SMALL_STATE(470)] = 11975,
  [SMALL_STATE(471)] = 11986,
  [SMALL_STATE(472)] = 12005,
  [SMALL_STATE(473)] = 12024,
  [SMALL_STATE(474)] = 12043,
  [SMALL_STATE(475)] = 12062,
  [SMALL_STATE(476)] = 12073,
  [SMALL_STATE(477)] = 12092,
  [SMALL_STATE(478)] = 12111,
  [SMALL_STATE(479)] = 12122,
  [SMALL_STATE(480)] = 12141,
  [SMALL_STATE(481)] = 12160,
  [SMALL_STATE(482)] = 12174,
  [SMALL_STATE(483)] = 12190,
  [SMALL_STATE(484)] = 12206,
  [SMALL_STATE(485)] = 12222,
  [SMALL_STATE(486)] = 12238,
  [SMALL_STATE(487)] = 12246,
  [SMALL_STATE(488)] = 12262,
  [SMALL_STATE(489)] = 12278,
  [SMALL_STATE(490)] = 12294,
  [SMALL_STATE(491)] = 12310,
  [SMALL_STATE(492)] = 12326,
  [SMALL_STATE(493)] = 12340,
  [SMALL_STATE(494)] = 12354,
  [SMALL_STATE(495)] = 12362,
  [SMALL_STATE(496)] = 12374,
  [SMALL_STATE(497)] = 12390,
  [SMALL_STATE(498)] = 12406,
  [SMALL_STATE(499)] = 12422,
  [SMALL_STATE(500)] = 12438,
  [SMALL_STATE(501)] = 12454,
  [SMALL_STATE(502)] = 12462,
  [SMALL_STATE(503)] = 12478,
  [SMALL_STATE(504)] = 12494,
  [SMALL_STATE(505)] = 12502,
  [SMALL_STATE(506)] = 12518,
  [SMALL_STATE(507)] = 12534,
  [SMALL_STATE(508)] = 12550,
  [SMALL_STATE(509)] = 12558,
  [SMALL_STATE(510)] = 12570,
  [SMALL_STATE(511)] = 12586,
  [SMALL_STATE(512)] = 12602,
  [SMALL_STATE(513)] = 12614,
  [SMALL_STATE(514)] = 12630,
  [SMALL_STATE(515)] = 12646,
  [SMALL_STATE(516)] = 12662,
  [SMALL_STATE(517)] = 12670,
  [SMALL_STATE(518)] = 12678,
  [SMALL_STATE(519)] = 12694,
  [SMALL_STATE(520)] = 12710,
  [SMALL_STATE(521)] = 12726,
  [SMALL_STATE(522)] = 12739,
  [SMALL_STATE(523)] = 12752,
  [SMALL_STATE(524)] = 12765,
  [SMALL_STATE(525)] = 12778,
  [SMALL_STATE(526)] = 12791,
  [SMALL_STATE(527)] = 12804,
  [SMALL_STATE(528)] = 12817,
  [SMALL_STATE(529)] = 12830,
  [SMALL_STATE(530)] = 12843,
  [SMALL_STATE(531)] = 12856,
  [SMALL_STATE(532)] = 12869,
  [SMALL_STATE(533)] = 12882,
  [SMALL_STATE(534)] = 12895,
  [SMALL_STATE(535)] = 12908,
  [SMALL_STATE(536)] = 12921,
  [SMALL_STATE(537)] = 12934,
  [SMALL_STATE(538)] = 12947,
  [SMALL_STATE(539)] = 12960,
  [SMALL_STATE(540)] = 12973,
  [SMALL_STATE(541)] = 12986,
  [SMALL_STATE(542)] = 12999,
  [SMALL_STATE(543)] = 13012,
  [SMALL_STATE(544)] = 13025,
  [SMALL_STATE(545)] = 13038,
  [SMALL_STATE(546)] = 13051,
  [SMALL_STATE(547)] = 13064,
  [SMALL_STATE(548)] = 13077,
  [SMALL_STATE(549)] = 13090,
  [SMALL_STATE(550)] = 13103,
  [SMALL_STATE(551)] = 13116,
  [SMALL_STATE(552)] = 13123,
  [SMALL_STATE(553)] = 13136,
  [SMALL_STATE(554)] = 13149,
  [SMALL_STATE(555)] = 13162,
  [SMALL_STATE(556)] = 13175,
  [SMALL_STATE(557)] = 13188,
  [SMALL_STATE(558)] = 13201,
  [SMALL_STATE(559)] = 13214,
  [SMALL_STATE(560)] = 13227,
  [SMALL_STATE(561)] = 13240,
  [SMALL_STATE(562)] = 13253,
  [SMALL_STATE(563)] = 13264,
  [SMALL_STATE(564)] = 13277,
  [SMALL_STATE(565)] = 13290,
  [SMALL_STATE(566)] = 13303,
  [SMALL_STATE(567)] = 13316,
  [SMALL_STATE(568)] = 13329,
  [SMALL_STATE(569)] = 13340,
  [SMALL_STATE(570)] = 13353,
  [SMALL_STATE(571)] = 13366,
  [SMALL_STATE(572)] = 13379,
  [SMALL_STATE(573)] = 13392,
  [SMALL_STATE(574)] = 13405,
  [SMALL_STATE(575)] = 13418,
  [SMALL_STATE(576)] = 13431,
  [SMALL_STATE(577)] = 13444,
  [SMALL_STATE(578)] = 13457,
  [SMALL_STATE(579)] = 13470,
  [SMALL_STATE(580)] = 13483,
  [SMALL_STATE(581)] = 13496,
  [SMALL_STATE(582)] = 13509,
  [SMALL_STATE(583)] = 13522,
  [SMALL_STATE(584)] = 13535,
  [SMALL_STATE(585)] = 13544,
  [SMALL_STATE(586)] = 13557,
  [SMALL_STATE(587)] = 13570,
  [SMALL_STATE(588)] = 13583,
  [SMALL_STATE(589)] = 13596,
  [SMALL_STATE(590)] = 13609,
  [SMALL_STATE(591)] = 13622,
  [SMALL_STATE(592)] = 13635,
  [SMALL_STATE(593)] = 13648,
  [SMALL_STATE(594)] = 13655,
  [SMALL_STATE(595)] = 13668,
  [SMALL_STATE(596)] = 13681,
  [SMALL_STATE(597)] = 13694,
  [SMALL_STATE(598)] = 13707,
  [SMALL_STATE(599)] = 13720,
  [SMALL_STATE(600)] = 13733,
  [SMALL_STATE(601)] = 13746,
  [SMALL_STATE(602)] = 13759,
  [SMALL_STATE(603)] = 13772,
  [SMALL_STATE(604)] = 13785,
  [SMALL_STATE(605)] = 13798,
  [SMALL_STATE(606)] = 13811,
  [SMALL_STATE(607)] = 13824,
  [SMALL_STATE(608)] = 13837,
  [SMALL_STATE(609)] = 13850,
  [SMALL_STATE(610)] = 13860,
  [SMALL_STATE(611)] = 13870,
  [SMALL_STATE(612)] = 13880,
  [SMALL_STATE(613)] = 13890,
  [SMALL_STATE(614)] = 13900,
  [SMALL_STATE(615)] = 13910,
  [SMALL_STATE(616)] = 13920,
  [SMALL_STATE(617)] = 13930,
  [SMALL_STATE(618)] = 13940,
  [SMALL_STATE(619)] = 13950,
  [SMALL_STATE(620)] = 13960,
  [SMALL_STATE(621)] = 13970,
  [SMALL_STATE(622)] = 13980,
  [SMALL_STATE(623)] = 13990,
  [SMALL_STATE(624)] = 14000,
  [SMALL_STATE(625)] = 14010,
  [SMALL_STATE(626)] = 14018,
  [SMALL_STATE(627)] = 14026,
  [SMALL_STATE(628)] = 14036,
  [SMALL_STATE(629)] = 14046,
  [SMALL_STATE(630)] = 14056,
  [SMALL_STATE(631)] = 14066,
  [SMALL_STATE(632)] = 14074,
  [SMALL_STATE(633)] = 14084,
  [SMALL_STATE(634)] = 14094,
  [SMALL_STATE(635)] = 14104,
  [SMALL_STATE(636)] = 14114,
  [SMALL_STATE(637)] = 14124,
  [SMALL_STATE(638)] = 14134,
  [SMALL_STATE(639)] = 14144,
  [SMALL_STATE(640)] = 14154,
  [SMALL_STATE(641)] = 14164,
  [SMALL_STATE(642)] = 14174,
  [SMALL_STATE(643)] = 14182,
  [SMALL_STATE(644)] = 14192,
  [SMALL_STATE(645)] = 14202,
  [SMALL_STATE(646)] = 14212,
  [SMALL_STATE(647)] = 14222,
  [SMALL_STATE(648)] = 14232,
  [SMALL_STATE(649)] = 14242,
  [SMALL_STATE(650)] = 14252,
  [SMALL_STATE(651)] = 14262,
  [SMALL_STATE(652)] = 14272,
  [SMALL_STATE(653)] = 14282,
  [SMALL_STATE(654)] = 14292,
  [SMALL_STATE(655)] = 14302,
  [SMALL_STATE(656)] = 14312,
  [SMALL_STATE(657)] = 14322,
  [SMALL_STATE(658)] = 14332,
  [SMALL_STATE(659)] = 14342,
  [SMALL_STATE(660)] = 14350,
  [SMALL_STATE(661)] = 14360,
  [SMALL_STATE(662)] = 14370,
  [SMALL_STATE(663)] = 14380,
  [SMALL_STATE(664)] = 14390,
  [SMALL_STATE(665)] = 14400,
  [SMALL_STATE(666)] = 14410,
  [SMALL_STATE(667)] = 14420,
  [SMALL_STATE(668)] = 14430,
  [SMALL_STATE(669)] = 14440,
  [SMALL_STATE(670)] = 14450,
  [SMALL_STATE(671)] = 14460,
  [SMALL_STATE(672)] = 14470,
  [SMALL_STATE(673)] = 14480,
  [SMALL_STATE(674)] = 14490,
  [SMALL_STATE(675)] = 14500,
  [SMALL_STATE(676)] = 14510,
  [SMALL_STATE(677)] = 14516,
  [SMALL_STATE(678)] = 14526,
  [SMALL_STATE(679)] = 14536,
  [SMALL_STATE(680)] = 14546,
  [SMALL_STATE(681)] = 14556,
  [SMALL_STATE(682)] = 14566,
  [SMALL_STATE(683)] = 14576,
  [SMALL_STATE(684)] = 14584,
  [SMALL_STATE(685)] = 14594,
  [SMALL_STATE(686)] = 14604,
  [SMALL_STATE(687)] = 14614,
  [SMALL_STATE(688)] = 14624,
  [SMALL_STATE(689)] = 14634,
  [SMALL_STATE(690)] = 14642,
  [SMALL_STATE(691)] = 14652,
  [SMALL_STATE(692)] = 14660,
  [SMALL_STATE(693)] = 14670,
  [SMALL_STATE(694)] = 14680,
  [SMALL_STATE(695)] = 14690,
  [SMALL_STATE(696)] = 14700,
  [SMALL_STATE(697)] = 14710,
  [SMALL_STATE(698)] = 14720,
  [SMALL_STATE(699)] = 14730,
  [SMALL_STATE(700)] = 14740,
  [SMALL_STATE(701)] = 14750,
  [SMALL_STATE(702)] = 14760,
  [SMALL_STATE(703)] = 14770,
  [SMALL_STATE(704)] = 14780,
  [SMALL_STATE(705)] = 14790,
  [SMALL_STATE(706)] = 14798,
  [SMALL_STATE(707)] = 14808,
  [SMALL_STATE(708)] = 14818,
  [SMALL_STATE(709)] = 14828,
  [SMALL_STATE(710)] = 14838,
  [SMALL_STATE(711)] = 14848,
  [SMALL_STATE(712)] = 14858,
  [SMALL_STATE(713)] = 14868,
  [SMALL_STATE(714)] = 14878,
  [SMALL_STATE(715)] = 14888,
  [SMALL_STATE(716)] = 14898,
  [SMALL_STATE(717)] = 14908,
  [SMALL_STATE(718)] = 14918,
  [SMALL_STATE(719)] = 14928,
  [SMALL_STATE(720)] = 14938,
  [SMALL_STATE(721)] = 14948,
  [SMALL_STATE(722)] = 14958,
  [SMALL_STATE(723)] = 14968,
  [SMALL_STATE(724)] = 14978,
  [SMALL_STATE(725)] = 14988,
  [SMALL_STATE(726)] = 14994,
  [SMALL_STATE(727)] = 15004,
  [SMALL_STATE(728)] = 15014,
  [SMALL_STATE(729)] = 15024,
  [SMALL_STATE(730)] = 15034,
  [SMALL_STATE(731)] = 15044,
  [SMALL_STATE(732)] = 15054,
  [SMALL_STATE(733)] = 15064,
  [SMALL_STATE(734)] = 15074,
  [SMALL_STATE(735)] = 15084,
  [SMALL_STATE(736)] = 15094,
  [SMALL_STATE(737)] = 15104,
  [SMALL_STATE(738)] = 15114,
  [SMALL_STATE(739)] = 15124,
  [SMALL_STATE(740)] = 15134,
  [SMALL_STATE(741)] = 15144,
  [SMALL_STATE(742)] = 15152,
  [SMALL_STATE(743)] = 15162,
  [SMALL_STATE(744)] = 15172,
  [SMALL_STATE(745)] = 15182,
  [SMALL_STATE(746)] = 15192,
  [SMALL_STATE(747)] = 15202,
  [SMALL_STATE(748)] = 15212,
  [SMALL_STATE(749)] = 15222,
  [SMALL_STATE(750)] = 15232,
  [SMALL_STATE(751)] = 15242,
  [SMALL_STATE(752)] = 15252,
  [SMALL_STATE(753)] = 15262,
  [SMALL_STATE(754)] = 15272,
  [SMALL_STATE(755)] = 15282,
  [SMALL_STATE(756)] = 15292,
  [SMALL_STATE(757)] = 15302,
  [SMALL_STATE(758)] = 15312,
  [SMALL_STATE(759)] = 15322,
  [SMALL_STATE(760)] = 15332,
  [SMALL_STATE(761)] = 15342,
  [SMALL_STATE(762)] = 15350,
  [SMALL_STATE(763)] = 15360,
  [SMALL_STATE(764)] = 15370,
  [SMALL_STATE(765)] = 15380,
  [SMALL_STATE(766)] = 15390,
  [SMALL_STATE(767)] = 15400,
  [SMALL_STATE(768)] = 15410,
  [SMALL_STATE(769)] = 15420,
  [SMALL_STATE(770)] = 15430,
  [SMALL_STATE(771)] = 15440,
  [SMALL_STATE(772)] = 15450,
  [SMALL_STATE(773)] = 15460,
  [SMALL_STATE(774)] = 15470,
  [SMALL_STATE(775)] = 15475,
  [SMALL_STATE(776)] = 15480,
  [SMALL_STATE(777)] = 15487,
  [SMALL_STATE(778)] = 15494,
  [SMALL_STATE(779)] = 15501,
  [SMALL_STATE(780)] = 15508,
  [SMALL_STATE(781)] = 15515,
  [SMALL_STATE(782)] = 15522,
  [SMALL_STATE(783)] = 15529,
  [SMALL_STATE(784)] = 15536,
  [SMALL_STATE(785)] = 15543,
  [SMALL_STATE(786)] = 15548,
  [SMALL_STATE(787)] = 15555,
  [SMALL_STATE(788)] = 15562,
  [SMALL_STATE(789)] = 15569,
  [SMALL_STATE(790)] = 15576,
  [SMALL_STATE(791)] = 15583,
  [SMALL_STATE(792)] = 15588,
  [SMALL_STATE(793)] = 15595,
  [SMALL_STATE(794)] = 15602,
  [SMALL_STATE(795)] = 15609,
  [SMALL_STATE(796)] = 15616,
  [SMALL_STATE(797)] = 15621,
  [SMALL_STATE(798)] = 15628,
  [SMALL_STATE(799)] = 15635,
  [SMALL_STATE(800)] = 15640,
  [SMALL_STATE(801)] = 15647,
  [SMALL_STATE(802)] = 15654,
  [SMALL_STATE(803)] = 15661,
  [SMALL_STATE(804)] = 15668,
  [SMALL_STATE(805)] = 15673,
  [SMALL_STATE(806)] = 15680,
  [SMALL_STATE(807)] = 15687,
  [SMALL_STATE(808)] = 15694,
  [SMALL_STATE(809)] = 15701,
  [SMALL_STATE(810)] = 15708,
  [SMALL_STATE(811)] = 15713,
  [SMALL_STATE(812)] = 15720,
  [SMALL_STATE(813)] = 15727,
  [SMALL_STATE(814)] = 15734,
  [SMALL_STATE(815)] = 15739,
  [SMALL_STATE(816)] = 15746,
  [SMALL_STATE(817)] = 15753,
  [SMALL_STATE(818)] = 15758,
  [SMALL_STATE(819)] = 15765,
  [SMALL_STATE(820)] = 15772,
  [SMALL_STATE(821)] = 15779,
  [SMALL_STATE(822)] = 15786,
  [SMALL_STATE(823)] = 15791,
  [SMALL_STATE(824)] = 15798,
  [SMALL_STATE(825)] = 15805,
  [SMALL_STATE(826)] = 15812,
  [SMALL_STATE(827)] = 15819,
  [SMALL_STATE(828)] = 15824,
  [SMALL_STATE(829)] = 15829,
  [SMALL_STATE(830)] = 15836,
  [SMALL_STATE(831)] = 15843,
  [SMALL_STATE(832)] = 15850,
  [SMALL_STATE(833)] = 15857,
  [SMALL_STATE(834)] = 15864,
  [SMALL_STATE(835)] = 15871,
  [SMALL_STATE(836)] = 15878,
  [SMALL_STATE(837)] = 15883,
  [SMALL_STATE(838)] = 15890,
  [SMALL_STATE(839)] = 15895,
  [SMALL_STATE(840)] = 15900,
  [SMALL_STATE(841)] = 15905,
  [SMALL_STATE(842)] = 15910,
  [SMALL_STATE(843)] = 15915,
  [SMALL_STATE(844)] = 15922,
  [SMALL_STATE(845)] = 15927,
  [SMALL_STATE(846)] = 15934,
  [SMALL_STATE(847)] = 15941,
  [SMALL_STATE(848)] = 15948,
  [SMALL_STATE(849)] = 15953,
  [SMALL_STATE(850)] = 15960,
  [SMALL_STATE(851)] = 15967,
  [SMALL_STATE(852)] = 15974,
  [SMALL_STATE(853)] = 15981,
  [SMALL_STATE(854)] = 15988,
  [SMALL_STATE(855)] = 15995,
  [SMALL_STATE(856)] = 16002,
  [SMALL_STATE(857)] = 16009,
  [SMALL_STATE(858)] = 16014,
  [SMALL_STATE(859)] = 16021,
  [SMALL_STATE(860)] = 16026,
  [SMALL_STATE(861)] = 16033,
  [SMALL_STATE(862)] = 16040,
  [SMALL_STATE(863)] = 16045,
  [SMALL_STATE(864)] = 16050,
  [SMALL_STATE(865)] = 16057,
  [SMALL_STATE(866)] = 16064,
  [SMALL_STATE(867)] = 16069,
  [SMALL_STATE(868)] = 16076,
  [SMALL_STATE(869)] = 16083,
  [SMALL_STATE(870)] = 16088,
  [SMALL_STATE(871)] = 16093,
  [SMALL_STATE(872)] = 16098,
  [SMALL_STATE(873)] = 16105,
  [SMALL_STATE(874)] = 16112,
  [SMALL_STATE(875)] = 16119,
  [SMALL_STATE(876)] = 16126,
  [SMALL_STATE(877)] = 16133,
  [SMALL_STATE(878)] = 16140,
  [SMALL_STATE(879)] = 16147,
  [SMALL_STATE(880)] = 16154,
  [SMALL_STATE(881)] = 16161,
  [SMALL_STATE(882)] = 16168,
  [SMALL_STATE(883)] = 16175,
  [SMALL_STATE(884)] = 16182,
  [SMALL_STATE(885)] = 16189,
  [SMALL_STATE(886)] = 16196,
  [SMALL_STATE(887)] = 16201,
  [SMALL_STATE(888)] = 16208,
  [SMALL_STATE(889)] = 16215,
  [SMALL_STATE(890)] = 16220,
  [SMALL_STATE(891)] = 16227,
  [SMALL_STATE(892)] = 16234,
  [SMALL_STATE(893)] = 16239,
  [SMALL_STATE(894)] = 16246,
  [SMALL_STATE(895)] = 16253,
  [SMALL_STATE(896)] = 16260,
  [SMALL_STATE(897)] = 16267,
  [SMALL_STATE(898)] = 16274,
  [SMALL_STATE(899)] = 16279,
  [SMALL_STATE(900)] = 16286,
  [SMALL_STATE(901)] = 16293,
  [SMALL_STATE(902)] = 16300,
  [SMALL_STATE(903)] = 16307,
  [SMALL_STATE(904)] = 16314,
  [SMALL_STATE(905)] = 16319,
  [SMALL_STATE(906)] = 16326,
  [SMALL_STATE(907)] = 16333,
  [SMALL_STATE(908)] = 16340,
  [SMALL_STATE(909)] = 16347,
  [SMALL_STATE(910)] = 16354,
  [SMALL_STATE(911)] = 16361,
  [SMALL_STATE(912)] = 16368,
  [SMALL_STATE(913)] = 16373,
  [SMALL_STATE(914)] = 16380,
  [SMALL_STATE(915)] = 16387,
  [SMALL_STATE(916)] = 16394,
  [SMALL_STATE(917)] = 16401,
  [SMALL_STATE(918)] = 16408,
  [SMALL_STATE(919)] = 16415,
  [SMALL_STATE(920)] = 16422,
  [SMALL_STATE(921)] = 16429,
  [SMALL_STATE(922)] = 16436,
  [SMALL_STATE(923)] = 16441,
  [SMALL_STATE(924)] = 16446,
  [SMALL_STATE(925)] = 16453,
  [SMALL_STATE(926)] = 16460,
  [SMALL_STATE(927)] = 16467,
  [SMALL_STATE(928)] = 16474,
  [SMALL_STATE(929)] = 16479,
  [SMALL_STATE(930)] = 16486,
  [SMALL_STATE(931)] = 16493,
  [SMALL_STATE(932)] = 16497,
  [SMALL_STATE(933)] = 16501,
  [SMALL_STATE(934)] = 16505,
  [SMALL_STATE(935)] = 16509,
  [SMALL_STATE(936)] = 16513,
  [SMALL_STATE(937)] = 16517,
  [SMALL_STATE(938)] = 16521,
  [SMALL_STATE(939)] = 16525,
  [SMALL_STATE(940)] = 16529,
  [SMALL_STATE(941)] = 16533,
  [SMALL_STATE(942)] = 16537,
  [SMALL_STATE(943)] = 16541,
  [SMALL_STATE(944)] = 16545,
  [SMALL_STATE(945)] = 16549,
  [SMALL_STATE(946)] = 16553,
  [SMALL_STATE(947)] = 16557,
  [SMALL_STATE(948)] = 16561,
  [SMALL_STATE(949)] = 16565,
  [SMALL_STATE(950)] = 16569,
  [SMALL_STATE(951)] = 16573,
  [SMALL_STATE(952)] = 16577,
  [SMALL_STATE(953)] = 16581,
  [SMALL_STATE(954)] = 16585,
  [SMALL_STATE(955)] = 16589,
  [SMALL_STATE(956)] = 16593,
  [SMALL_STATE(957)] = 16597,
  [SMALL_STATE(958)] = 16601,
  [SMALL_STATE(959)] = 16605,
  [SMALL_STATE(960)] = 16609,
  [SMALL_STATE(961)] = 16613,
  [SMALL_STATE(962)] = 16617,
  [SMALL_STATE(963)] = 16621,
  [SMALL_STATE(964)] = 16625,
  [SMALL_STATE(965)] = 16629,
  [SMALL_STATE(966)] = 16633,
  [SMALL_STATE(967)] = 16637,
  [SMALL_STATE(968)] = 16641,
  [SMALL_STATE(969)] = 16645,
  [SMALL_STATE(970)] = 16649,
  [SMALL_STATE(971)] = 16653,
  [SMALL_STATE(972)] = 16657,
  [SMALL_STATE(973)] = 16661,
  [SMALL_STATE(974)] = 16665,
  [SMALL_STATE(975)] = 16669,
  [SMALL_STATE(976)] = 16673,
  [SMALL_STATE(977)] = 16677,
  [SMALL_STATE(978)] = 16681,
  [SMALL_STATE(979)] = 16685,
  [SMALL_STATE(980)] = 16689,
  [SMALL_STATE(981)] = 16693,
  [SMALL_STATE(982)] = 16697,
  [SMALL_STATE(983)] = 16701,
  [SMALL_STATE(984)] = 16705,
  [SMALL_STATE(985)] = 16709,
  [SMALL_STATE(986)] = 16713,
  [SMALL_STATE(987)] = 16717,
  [SMALL_STATE(988)] = 16721,
  [SMALL_STATE(989)] = 16725,
  [SMALL_STATE(990)] = 16729,
  [SMALL_STATE(991)] = 16733,
  [SMALL_STATE(992)] = 16737,
  [SMALL_STATE(993)] = 16741,
  [SMALL_STATE(994)] = 16745,
  [SMALL_STATE(995)] = 16749,
  [SMALL_STATE(996)] = 16753,
  [SMALL_STATE(997)] = 16757,
  [SMALL_STATE(998)] = 16761,
  [SMALL_STATE(999)] = 16765,
  [SMALL_STATE(1000)] = 16769,
  [SMALL_STATE(1001)] = 16773,
  [SMALL_STATE(1002)] = 16777,
  [SMALL_STATE(1003)] = 16781,
  [SMALL_STATE(1004)] = 16785,
  [SMALL_STATE(1005)] = 16789,
  [SMALL_STATE(1006)] = 16793,
  [SMALL_STATE(1007)] = 16797,
  [SMALL_STATE(1008)] = 16801,
  [SMALL_STATE(1009)] = 16805,
  [SMALL_STATE(1010)] = 16809,
  [SMALL_STATE(1011)] = 16813,
  [SMALL_STATE(1012)] = 16817,
  [SMALL_STATE(1013)] = 16821,
  [SMALL_STATE(1014)] = 16825,
  [SMALL_STATE(1015)] = 16829,
  [SMALL_STATE(1016)] = 16833,
  [SMALL_STATE(1017)] = 16837,
  [SMALL_STATE(1018)] = 16841,
  [SMALL_STATE(1019)] = 16845,
  [SMALL_STATE(1020)] = 16849,
  [SMALL_STATE(1021)] = 16853,
  [SMALL_STATE(1022)] = 16857,
  [SMALL_STATE(1023)] = 16861,
  [SMALL_STATE(1024)] = 16865,
  [SMALL_STATE(1025)] = 16869,
  [SMALL_STATE(1026)] = 16873,
  [SMALL_STATE(1027)] = 16877,
  [SMALL_STATE(1028)] = 16881,
  [SMALL_STATE(1029)] = 16885,
  [SMALL_STATE(1030)] = 16889,
  [SMALL_STATE(1031)] = 16893,
  [SMALL_STATE(1032)] = 16897,
  [SMALL_STATE(1033)] = 16901,
  [SMALL_STATE(1034)] = 16905,
  [SMALL_STATE(1035)] = 16909,
  [SMALL_STATE(1036)] = 16913,
  [SMALL_STATE(1037)] = 16917,
  [SMALL_STATE(1038)] = 16921,
  [SMALL_STATE(1039)] = 16925,
  [SMALL_STATE(1040)] = 16929,
  [SMALL_STATE(1041)] = 16933,
  [SMALL_STATE(1042)] = 16937,
  [SMALL_STATE(1043)] = 16941,
  [SMALL_STATE(1044)] = 16945,
  [SMALL_STATE(1045)] = 16949,
  [SMALL_STATE(1046)] = 16953,
  [SMALL_STATE(1047)] = 16957,
  [SMALL_STATE(1048)] = 16961,
  [SMALL_STATE(1049)] = 16965,
  [SMALL_STATE(1050)] = 16969,
  [SMALL_STATE(1051)] = 16973,
  [SMALL_STATE(1052)] = 16977,
  [SMALL_STATE(1053)] = 16981,
  [SMALL_STATE(1054)] = 16985,
  [SMALL_STATE(1055)] = 16989,
  [SMALL_STATE(1056)] = 16993,
  [SMALL_STATE(1057)] = 16997,
  [SMALL_STATE(1058)] = 17001,
  [SMALL_STATE(1059)] = 17005,
  [SMALL_STATE(1060)] = 17009,
  [SMALL_STATE(1061)] = 17013,
  [SMALL_STATE(1062)] = 17017,
  [SMALL_STATE(1063)] = 17021,
  [SMALL_STATE(1064)] = 17025,
  [SMALL_STATE(1065)] = 17029,
  [SMALL_STATE(1066)] = 17033,
  [SMALL_STATE(1067)] = 17037,
  [SMALL_STATE(1068)] = 17041,
  [SMALL_STATE(1069)] = 17045,
  [SMALL_STATE(1070)] = 17049,
  [SMALL_STATE(1071)] = 17053,
  [SMALL_STATE(1072)] = 17057,
  [SMALL_STATE(1073)] = 17061,
  [SMALL_STATE(1074)] = 17065,
  [SMALL_STATE(1075)] = 17069,
  [SMALL_STATE(1076)] = 17073,
  [SMALL_STATE(1077)] = 17077,
  [SMALL_STATE(1078)] = 17081,
  [SMALL_STATE(1079)] = 17085,
  [SMALL_STATE(1080)] = 17089,
  [SMALL_STATE(1081)] = 17093,
  [SMALL_STATE(1082)] = 17097,
  [SMALL_STATE(1083)] = 17101,
  [SMALL_STATE(1084)] = 17105,
  [SMALL_STATE(1085)] = 17109,
  [SMALL_STATE(1086)] = 17113,
  [SMALL_STATE(1087)] = 17117,
  [SMALL_STATE(1088)] = 17121,
  [SMALL_STATE(1089)] = 17125,
  [SMALL_STATE(1090)] = 17129,
  [SMALL_STATE(1091)] = 17133,
  [SMALL_STATE(1092)] = 17137,
  [SMALL_STATE(1093)] = 17141,
  [SMALL_STATE(1094)] = 17145,
  [SMALL_STATE(1095)] = 17149,
  [SMALL_STATE(1096)] = 17153,
  [SMALL_STATE(1097)] = 17157,
  [SMALL_STATE(1098)] = 17161,
  [SMALL_STATE(1099)] = 17165,
  [SMALL_STATE(1100)] = 17169,
  [SMALL_STATE(1101)] = 17173,
  [SMALL_STATE(1102)] = 17177,
  [SMALL_STATE(1103)] = 17181,
  [SMALL_STATE(1104)] = 17185,
  [SMALL_STATE(1105)] = 17189,
  [SMALL_STATE(1106)] = 17193,
  [SMALL_STATE(1107)] = 17197,
  [SMALL_STATE(1108)] = 17201,
  [SMALL_STATE(1109)] = 17205,
  [SMALL_STATE(1110)] = 17209,
  [SMALL_STATE(1111)] = 17213,
  [SMALL_STATE(1112)] = 17217,
  [SMALL_STATE(1113)] = 17221,
  [SMALL_STATE(1114)] = 17225,
  [SMALL_STATE(1115)] = 17229,
  [SMALL_STATE(1116)] = 17233,
  [SMALL_STATE(1117)] = 17237,
  [SMALL_STATE(1118)] = 17241,
  [SMALL_STATE(1119)] = 17245,
  [SMALL_STATE(1120)] = 17249,
  [SMALL_STATE(1121)] = 17253,
  [SMALL_STATE(1122)] = 17257,
  [SMALL_STATE(1123)] = 17261,
  [SMALL_STATE(1124)] = 17265,
  [SMALL_STATE(1125)] = 17269,
  [SMALL_STATE(1126)] = 17273,
  [SMALL_STATE(1127)] = 17277,
  [SMALL_STATE(1128)] = 17281,
  [SMALL_STATE(1129)] = 17285,
  [SMALL_STATE(1130)] = 17289,
  [SMALL_STATE(1131)] = 17293,
  [SMALL_STATE(1132)] = 17297,
  [SMALL_STATE(1133)] = 17301,
  [SMALL_STATE(1134)] = 17305,
  [SMALL_STATE(1135)] = 17309,
  [SMALL_STATE(1136)] = 17313,
  [SMALL_STATE(1137)] = 17317,
  [SMALL_STATE(1138)] = 17321,
  [SMALL_STATE(1139)] = 17325,
  [SMALL_STATE(1140)] = 17329,
  [SMALL_STATE(1141)] = 17333,
  [SMALL_STATE(1142)] = 17337,
  [SMALL_STATE(1143)] = 17341,
  [SMALL_STATE(1144)] = 17345,
  [SMALL_STATE(1145)] = 17349,
  [SMALL_STATE(1146)] = 17353,
  [SMALL_STATE(1147)] = 17357,
  [SMALL_STATE(1148)] = 17361,
  [SMALL_STATE(1149)] = 17365,
  [SMALL_STATE(1150)] = 17369,
  [SMALL_STATE(1151)] = 17373,
  [SMALL_STATE(1152)] = 17377,
  [SMALL_STATE(1153)] = 17381,
  [SMALL_STATE(1154)] = 17385,
  [SMALL_STATE(1155)] = 17389,
  [SMALL_STATE(1156)] = 17393,
  [SMALL_STATE(1157)] = 17397,
  [SMALL_STATE(1158)] = 17401,
  [SMALL_STATE(1159)] = 17405,
  [SMALL_STATE(1160)] = 17409,
  [SMALL_STATE(1161)] = 17413,
  [SMALL_STATE(1162)] = 17417,
  [SMALL_STATE(1163)] = 17421,
  [SMALL_STATE(1164)] = 17425,
  [SMALL_STATE(1165)] = 17429,
  [SMALL_STATE(1166)] = 17433,
  [SMALL_STATE(1167)] = 17437,
  [SMALL_STATE(1168)] = 17441,
  [SMALL_STATE(1169)] = 17445,
  [SMALL_STATE(1170)] = 17449,
  [SMALL_STATE(1171)] = 17453,
  [SMALL_STATE(1172)] = 17457,
  [SMALL_STATE(1173)] = 17461,
  [SMALL_STATE(1174)] = 17465,
  [SMALL_STATE(1175)] = 17469,
  [SMALL_STATE(1176)] = 17473,
  [SMALL_STATE(1177)] = 17477,
  [SMALL_STATE(1178)] = 17481,
  [SMALL_STATE(1179)] = 17485,
  [SMALL_STATE(1180)] = 17489,
  [SMALL_STATE(1181)] = 17493,
  [SMALL_STATE(1182)] = 17497,
  [SMALL_STATE(1183)] = 17501,
  [SMALL_STATE(1184)] = 17505,
  [SMALL_STATE(1185)] = 17509,
  [SMALL_STATE(1186)] = 17513,
  [SMALL_STATE(1187)] = 17517,
  [SMALL_STATE(1188)] = 17521,
  [SMALL_STATE(1189)] = 17525,
  [SMALL_STATE(1190)] = 17529,
  [SMALL_STATE(1191)] = 17533,
  [SMALL_STATE(1192)] = 17537,
  [SMALL_STATE(1193)] = 17541,
  [SMALL_STATE(1194)] = 17545,
  [SMALL_STATE(1195)] = 17549,
  [SMALL_STATE(1196)] = 17553,
  [SMALL_STATE(1197)] = 17557,
  [SMALL_STATE(1198)] = 17561,
  [SMALL_STATE(1199)] = 17565,
  [SMALL_STATE(1200)] = 17569,
  [SMALL_STATE(1201)] = 17573,
  [SMALL_STATE(1202)] = 17577,
  [SMALL_STATE(1203)] = 17581,
  [SMALL_STATE(1204)] = 17585,
  [SMALL_STATE(1205)] = 17589,
  [SMALL_STATE(1206)] = 17593,
  [SMALL_STATE(1207)] = 17597,
  [SMALL_STATE(1208)] = 17601,
  [SMALL_STATE(1209)] = 17605,
  [SMALL_STATE(1210)] = 17609,
  [SMALL_STATE(1211)] = 17613,
  [SMALL_STATE(1212)] = 17617,
  [SMALL_STATE(1213)] = 17621,
  [SMALL_STATE(1214)] = 17625,
  [SMALL_STATE(1215)] = 17629,
  [SMALL_STATE(1216)] = 17633,
  [SMALL_STATE(1217)] = 17637,
  [SMALL_STATE(1218)] = 17641,
  [SMALL_STATE(1219)] = 17645,
  [SMALL_STATE(1220)] = 17649,
  [SMALL_STATE(1221)] = 17653,
  [SMALL_STATE(1222)] = 17657,
  [SMALL_STATE(1223)] = 17661,
  [SMALL_STATE(1224)] = 17665,
  [SMALL_STATE(1225)] = 17669,
  [SMALL_STATE(1226)] = 17673,
  [SMALL_STATE(1227)] = 17677,
  [SMALL_STATE(1228)] = 17681,
  [SMALL_STATE(1229)] = 17685,
  [SMALL_STATE(1230)] = 17689,
  [SMALL_STATE(1231)] = 17693,
  [SMALL_STATE(1232)] = 17697,
  [SMALL_STATE(1233)] = 17701,
  [SMALL_STATE(1234)] = 17705,
  [SMALL_STATE(1235)] = 17709,
  [SMALL_STATE(1236)] = 17713,
  [SMALL_STATE(1237)] = 17717,
  [SMALL_STATE(1238)] = 17721,
  [SMALL_STATE(1239)] = 17725,
  [SMALL_STATE(1240)] = 17729,
  [SMALL_STATE(1241)] = 17733,
  [SMALL_STATE(1242)] = 17737,
  [SMALL_STATE(1243)] = 17741,
  [SMALL_STATE(1244)] = 17745,
  [SMALL_STATE(1245)] = 17749,
  [SMALL_STATE(1246)] = 17753,
  [SMALL_STATE(1247)] = 17757,
  [SMALL_STATE(1248)] = 17761,
  [SMALL_STATE(1249)] = 17765,
  [SMALL_STATE(1250)] = 17769,
  [SMALL_STATE(1251)] = 17773,
  [SMALL_STATE(1252)] = 17777,
  [SMALL_STATE(1253)] = 17781,
  [SMALL_STATE(1254)] = 17785,
  [SMALL_STATE(1255)] = 17789,
  [SMALL_STATE(1256)] = 17793,
  [SMALL_STATE(1257)] = 17797,
  [SMALL_STATE(1258)] = 17801,
  [SMALL_STATE(1259)] = 17805,
  [SMALL_STATE(1260)] = 17809,
  [SMALL_STATE(1261)] = 17813,
  [SMALL_STATE(1262)] = 17817,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1260),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1253),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(447),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(484),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(689),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1260),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(487),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(419),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(433),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(600),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(612),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(421),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(476),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(430),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(420),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1253),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal_literal, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3, .production_id = 11),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 8),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 3, .production_id = 7),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1, .production_id = 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 1, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 14),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 14),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 9),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 1, .production_id = 9),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dotted_name, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dotted_name, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(876),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 16),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_element, 6, .production_id = 16),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 15),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_element, 6, .production_id = 15),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_tuple, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_tuple, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 16),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_element, 7, .production_id = 16),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_tuple, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 15),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_element, 5, .production_id = 15),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_contains_key, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_contains, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 12),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_element, 3, .production_id = 12),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_element, 8),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_element, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_element, 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_element, 9),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_element, 7),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hexadecimal_literal_repeat2, 2),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(72),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal_literal, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1, .production_id = 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(892),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1171),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1055),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dotted_name, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1067),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(443),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1132),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(85),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal_literal, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(98),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hexadecimal_literal_repeat2, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_spec, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, .production_id = 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1262),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1224),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_elements, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1240),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_elements, 1),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(446),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 6),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1205),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(658),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1079),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(654),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_literal, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 5),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 5),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3, .production_id = 11),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal_literal, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_member_column_list_repeat1, 2),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_member_column_list_repeat1, 2), SHIFT_REPEAT(757),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1232),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1259),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(683),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(868),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(492),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 1),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_member_column_list_repeat1, 3),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(556),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_not_exist, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user, 1, .production_id = 6),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 16),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 10),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 6),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 6),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 6),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 6),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 6),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 6),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 6),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 6),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 11),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 4),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 4),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 4),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 4),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 4),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 4),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 6),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 4),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 6),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 4),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 9),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 3),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 7),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 5),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 7),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 15),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 8),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 5),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1230),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1229),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1234),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(887),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dotted_name, 1),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1216),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1218),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1219),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(428),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1171),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(861),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1191),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1075),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1167),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1199),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1221),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1217),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1257),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1210),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1209),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1261),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1076),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1169),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [1200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(416),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1105),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(599),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [1270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(900),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1241),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [1279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(894),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1213),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_member_column_list, 2),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(45),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 2),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(837),
  [1351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(832),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_not_exist, 3),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1193),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(159),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hexadecimal_literal_repeat1, 2), SHIFT_REPEAT(993),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hexadecimal_literal_repeat1, 2),
  [1408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(1193),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1235),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(279),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger, 1, .production_id = 5),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(671),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(718),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null_list, 1),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(183),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 1),
  [1463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(581),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(874),
  [1481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(905),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [1508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(58),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(588),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_member_column_list, 3),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null_list, 2),
  [1534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_partition_key_list_repeat1, 2), SHIFT_REPEAT(561),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_partition_key_list_repeat1, 2),
  [1539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_not_null_list_repeat1, 2), SHIFT_REPEAT(564),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_not_null_list_repeat1, 2),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1098),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key, 1),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_replace, 2),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 4),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key, 1),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 13),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_primary_key, 1),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [1674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [1688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language, 1, .production_id = 17),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [1784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [1858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1228),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1233),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1094),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1248),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1258),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1255),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1137),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1140),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1206),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [2028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_key, 1),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1128),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1158),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1160),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1178),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [2088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [2104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 10),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1211),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1147),
  [2202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1202),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1104),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [2262] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1126),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1237),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1239),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1245),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1254),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cql(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
