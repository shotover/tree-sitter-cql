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
#define STATE_COUNT 1257
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 339
#define ALIAS_COUNT 0
#define TOKEN_COUNT 150
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
  aux_sym_if_exist_token1 = 51,
  aux_sym_if_exist_token2 = 52,
  aux_sym_insert_statement_token1 = 53,
  aux_sym_insert_statement_token2 = 54,
  sym__dquote = 55,
  aux_sym_insert_values_spec_token1 = 56,
  anon_sym_LBRACE = 57,
  anon_sym_COLON = 58,
  anon_sym_RBRACE = 59,
  aux_sym_if_not_exist_token1 = 60,
  aux_sym_ttl_token1 = 61,
  aux_sym_truncate_token1 = 62,
  aux_sym_truncate_token2 = 63,
  aux_sym_create_index_token1 = 64,
  aux_sym_create_index_token2 = 65,
  aux_sym_create_index_token3 = 66,
  aux_sym_index_keys_spec_token1 = 67,
  aux_sym_index_entries_s_spec_token1 = 68,
  aux_sym_index_full_spec_token1 = 69,
  aux_sym_drop_index_token1 = 70,
  aux_sym_update_token1 = 71,
  aux_sym_update_token2 = 72,
  anon_sym_PLUS = 73,
  aux_sym_use_token1 = 74,
  aux_sym_grant_token1 = 75,
  aux_sym_grant_token2 = 76,
  aux_sym_priviledge_token1 = 77,
  aux_sym_priviledge_token2 = 78,
  aux_sym_priviledge_token3 = 79,
  aux_sym_priviledge_token4 = 80,
  aux_sym_priviledge_token5 = 81,
  aux_sym_priviledge_token6 = 82,
  aux_sym_priviledge_token7 = 83,
  aux_sym_resource_token1 = 84,
  aux_sym_resource_token2 = 85,
  aux_sym_resource_token3 = 86,
  aux_sym_resource_token4 = 87,
  aux_sym_resource_token5 = 88,
  aux_sym_resource_token6 = 89,
  aux_sym_revoke_token1 = 90,
  aux_sym_list_roles_token1 = 91,
  aux_sym_list_roles_token2 = 92,
  aux_sym_list_roles_token3 = 93,
  aux_sym_drop_aggregate_token1 = 94,
  aux_sym_drop_materialized_view_token1 = 95,
  aux_sym_drop_materialized_view_token2 = 96,
  aux_sym_drop_trigger_token1 = 97,
  aux_sym_drop_type_token1 = 98,
  aux_sym_drop_user_token1 = 99,
  aux_sym_create_aggregate_token1 = 100,
  aux_sym_create_aggregate_token2 = 101,
  aux_sym_create_aggregate_token3 = 102,
  aux_sym_create_aggregate_token4 = 103,
  aux_sym_or_replace_token1 = 104,
  aux_sym_or_replace_token2 = 105,
  aux_sym_create_materialized_view_token1 = 106,
  aux_sym_create_materialized_view_token2 = 107,
  aux_sym_column_not_null_token1 = 108,
  aux_sym_create_function_token1 = 109,
  aux_sym_create_function_token2 = 110,
  aux_sym_data_type_name_token1 = 111,
  aux_sym_data_type_name_token2 = 112,
  aux_sym_data_type_name_token3 = 113,
  aux_sym_data_type_name_token4 = 114,
  aux_sym_data_type_name_token5 = 115,
  aux_sym_data_type_name_token6 = 116,
  aux_sym_data_type_name_token7 = 117,
  aux_sym_data_type_name_token8 = 118,
  aux_sym_data_type_name_token9 = 119,
  aux_sym_data_type_name_token10 = 120,
  aux_sym_data_type_name_token11 = 121,
  aux_sym_data_type_name_token12 = 122,
  aux_sym_data_type_name_token13 = 123,
  aux_sym_data_type_name_token14 = 124,
  aux_sym_data_type_name_token15 = 125,
  aux_sym_data_type_name_token16 = 126,
  aux_sym_data_type_name_token17 = 127,
  aux_sym_data_type_name_token18 = 128,
  aux_sym_data_type_name_token19 = 129,
  aux_sym_data_type_name_token20 = 130,
  aux_sym_data_type_name_token21 = 131,
  aux_sym_data_type_name_token22 = 132,
  aux_sym_return_mode_token1 = 133,
  aux_sym_return_mode_token2 = 134,
  aux_sym_create_keyspace_token1 = 135,
  aux_sym_durable_writes_token1 = 136,
  aux_sym_role_with_options_token1 = 137,
  aux_sym_role_with_options_token2 = 138,
  aux_sym_role_with_options_token3 = 139,
  aux_sym_role_with_options_token4 = 140,
  aux_sym_clustering_order_token1 = 141,
  aux_sym_order_direction_token1 = 142,
  aux_sym_order_direction_token2 = 143,
  aux_sym_alter_table_add_token1 = 144,
  aux_sym_alter_table_drop_compact_storage_token1 = 145,
  aux_sym_alter_table_drop_compact_storage_token2 = 146,
  aux_sym_alter_table_rename_token1 = 147,
  aux_sym_user_super_user_token1 = 148,
  aux_sym_apply_batch_token1 = 149,
  sym_source_file = 150,
  sym__statement = 151,
  sym_select_statement = 152,
  sym_limit_spec = 153,
  sym_select_elements = 154,
  sym_select_element = 155,
  sym_function_call = 156,
  sym_function_name = 157,
  sym_function_args = 158,
  sym_constant = 159,
  sym_decimal_literal = 160,
  sym_float_literal = 161,
  sym_hexadecimal_literal = 162,
  sym_boolean_literal = 163,
  sym_code_block = 164,
  sym_from_spec = 165,
  sym_from_spec_element = 166,
  sym_where_spec = 167,
  sym_relation_elements = 168,
  sym_relation_element = 169,
  sym_assignment_tuple = 170,
  sym_relation_contains_key = 171,
  sym_relation_contains = 172,
  sym_order_spec = 173,
  sym_order_spec_element = 174,
  sym_delete_statement = 175,
  sym_begin_batch = 176,
  sym_delete_column_list = 177,
  sym_delete_column_item = 178,
  sym_using_timestamp_spec = 179,
  sym_timestamp = 180,
  sym_if_exist = 181,
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
  aux_sym_source_file_repeat1 = 310,
  aux_sym_select_elements_repeat1 = 311,
  aux_sym_function_args_repeat1 = 312,
  aux_sym_hexadecimal_literal_repeat1 = 313,
  aux_sym_hexadecimal_literal_repeat2 = 314,
  aux_sym_relation_elements_repeat1 = 315,
  aux_sym_relation_element_repeat1 = 316,
  aux_sym_relation_element_repeat2 = 317,
  aux_sym_assignment_tuple_repeat1 = 318,
  aux_sym_delete_column_list_repeat1 = 319,
  aux_sym_if_condition_list_repeat1 = 320,
  aux_sym_column_list_repeat1 = 321,
  aux_sym_expression_list_repeat1 = 322,
  aux_sym_assignment_map_repeat1 = 323,
  aux_sym_update_repeat1 = 324,
  aux_sym_init_cond_list_nested_repeat1 = 325,
  aux_sym_init_cond_hash_repeat1 = 326,
  aux_sym_column_not_null_list_repeat1 = 327,
  aux_sym_create_function_repeat1 = 328,
  aux_sym_data_type_definition_repeat1 = 329,
  aux_sym_role_with_repeat1 = 330,
  aux_sym_option_hash_repeat1 = 331,
  aux_sym_column_definition_list_repeat1 = 332,
  aux_sym_clustering_key_list_repeat1 = 333,
  aux_sym_partition_key_list_repeat1 = 334,
  aux_sym_table_options_repeat1 = 335,
  aux_sym_type_member_column_list_repeat1 = 336,
  aux_sym_replication_list_repeat1 = 337,
  aux_sym_alter_type_rename_list_repeat1 = 338,
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
  [aux_sym_if_exist_token1] = "IF",
  [aux_sym_if_exist_token2] = "EXISTS",
  [aux_sym_insert_statement_token1] = "INSERT",
  [aux_sym_insert_statement_token2] = "INTO",
  [sym__dquote] = "_dquote",
  [aux_sym_insert_values_spec_token1] = "VALUES",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [aux_sym_if_not_exist_token1] = "NOT",
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
  [sym_if_exist] = "if_exist",
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
  [aux_sym_if_exist_token1] = aux_sym_if_exist_token1,
  [aux_sym_if_exist_token2] = aux_sym_if_exist_token2,
  [aux_sym_insert_statement_token1] = aux_sym_insert_statement_token1,
  [aux_sym_insert_statement_token2] = aux_sym_insert_statement_token2,
  [sym__dquote] = sym__dquote,
  [aux_sym_insert_values_spec_token1] = aux_sym_insert_values_spec_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_if_not_exist_token1] = aux_sym_if_not_exist_token1,
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
  [sym_if_exist] = sym_if_exist,
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
  [aux_sym_if_exist_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_if_exist_token2] = {
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
  [sym_if_exist] = {
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
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 3},
  [14] = {.index = 19, .length = 1},
  [15] = {.index = 20, .length = 1},
  [16] = {.index = 21, .length = 1},
  [17] = {.index = 22, .length = 3},
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
    {field_operator, 1},
  [15] =
    {field_param_name, 0},
  [16] =
    {field_column, 0},
    {field_column, 1},
    {field_column, 2},
  [19] =
    {field_operator, 3},
  [20] =
    {field_operator, 4},
  [21] =
    {field_language, 0},
  [22] =
    {field_code_block, 0},
    {field_code_block, 2},
    {field_content, 1},
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
  [45] = 32,
  [46] = 20,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
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
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 75,
  [89] = 66,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 93,
  [106] = 106,
  [107] = 79,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
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
  [141] = 78,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
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
  [191] = 145,
  [192] = 128,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
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
  [212] = 212,
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
  [229] = 215,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 215,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
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
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
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
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 389,
  [392] = 392,
  [393] = 389,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 396,
  [398] = 396,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 394,
  [408] = 408,
  [409] = 409,
  [410] = 394,
  [411] = 404,
  [412] = 404,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 75,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 420,
  [423] = 423,
  [424] = 424,
  [425] = 66,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 420,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 435,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 442,
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
  [468] = 454,
  [469] = 469,
  [470] = 470,
  [471] = 469,
  [472] = 472,
  [473] = 469,
  [474] = 474,
  [475] = 454,
  [476] = 476,
  [477] = 477,
  [478] = 478,
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
  [643] = 228,
  [644] = 644,
  [645] = 274,
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
  [659] = 659,
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
  [670] = 670,
  [671] = 622,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 633,
  [676] = 676,
  [677] = 637,
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
  [698] = 698,
  [699] = 119,
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
  [841] = 841,
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
  [885] = 274,
  [886] = 886,
  [887] = 887,
  [888] = 888,
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
  [909] = 822,
  [910] = 910,
  [911] = 911,
  [912] = 912,
  [913] = 822,
  [914] = 914,
  [915] = 915,
  [916] = 916,
  [917] = 917,
  [918] = 918,
  [919] = 919,
  [920] = 920,
  [921] = 921,
  [922] = 228,
  [923] = 923,
  [924] = 924,
  [925] = 925,
  [926] = 926,
  [927] = 927,
  [928] = 928,
  [929] = 929,
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
  [1224] = 1197,
  [1225] = 1225,
  [1226] = 1226,
  [1227] = 1227,
  [1228] = 1228,
  [1229] = 1229,
  [1230] = 1230,
  [1231] = 1231,
  [1232] = 1171,
  [1233] = 1233,
  [1234] = 1234,
  [1235] = 1226,
  [1236] = 1100,
  [1237] = 1237,
  [1238] = 1238,
  [1239] = 1239,
  [1240] = 1240,
  [1241] = 1241,
  [1242] = 944,
  [1243] = 1243,
  [1244] = 1244,
  [1245] = 1245,
  [1246] = 1100,
  [1247] = 1247,
  [1248] = 1248,
  [1249] = 1041,
  [1250] = 1250,
  [1251] = 1251,
  [1252] = 1226,
  [1253] = 1253,
  [1254] = 1254,
  [1255] = 1255,
  [1256] = 1041,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(510);
      if (lookahead == '"') ADVANCE(765);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(524);
      if (lookahead == ')') ADVANCE(525);
      if (lookahead == '*') ADVANCE(520);
      if (lookahead == '+') ADVANCE(782);
      if (lookahead == ',') ADVANCE(521);
      if (lookahead == '-') ADVANCE(539);
      if (lookahead == '.') ADVANCE(522);
      if (lookahead == '0') ADVANCE(530);
      if (lookahead == ':') ADVANCE(768);
      if (lookahead == ';') ADVANCE(511);
      if (lookahead == '<') ADVANCE(739);
      if (lookahead == '=') ADVANCE(742);
      if (lookahead == '>') ADVANCE(743);
      if (lookahead == 'X') ADVANCE(12);
      if (lookahead == '[') ADVANCE(757);
      if (lookahead == ']') ADVANCE(758);
      if (lookahead == '{') ADVANCE(767);
      if (lookahead == '}') ADVANCE(769);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(532);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(537);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(533);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(337);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(382);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(96);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(24);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(26);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(300);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(33);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(276);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(29);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9') ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(529);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(765);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(614);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(658);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(765);
      if (lookahead == '\'') ADVANCE(502);
      if (lookahead == '(') ADVANCE(524);
      if (lookahead == ')') ADVANCE(525);
      if (lookahead == '*') ADVANCE(520);
      if (lookahead == ',') ADVANCE(521);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(636);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(620);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(640);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(564);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(723);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(642);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(613);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(594);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(621);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(566);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(685);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(671);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(599);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(567);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(716);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(569);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(765);
      if (lookahead == '\'') ADVANCE(502);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(717);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(557);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(538);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(504);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '(') ADVANCE(524);
      if (lookahead == '*') ADVANCE(520);
      if (lookahead == '-') ADVANCE(539);
      if (lookahead == '0') ADVANCE(541);
      if (lookahead == 'X') ADVANCE(561);
      if (lookahead == '[') ADVANCE(757);
      if (lookahead == '{') ADVANCE(767);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(568);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(720);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(689);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(549);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(734);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(558);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(6);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(524);
      if (lookahead == ')') ADVANCE(525);
      if (lookahead == ',') ADVANCE(521);
      if (lookahead == ':') ADVANCE(768);
      if (lookahead == ']') ADVANCE(758);
      if (lookahead == '}') ADVANCE(769);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(338);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(550);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(538);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(538);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(538);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(502);
      if (lookahead == '*') ADVANCE(520);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(632);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(697);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(502);
      if (lookahead == '*') ADVANCE(520);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(697);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(560);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(483);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(489);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(495);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(501);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(455);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(263);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(263);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(457);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(785);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(334);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(309);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(348);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(157);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(459);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(449);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(291);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(166);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(57);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(346);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(316);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(348);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(157);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(459);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(305);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(320);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(384);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(421);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(442);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(256);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(259);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(309);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(286);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(343);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(417);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(751);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(427);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(418);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 59:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(129);
      END_STATE();
    case 60:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(251);
      END_STATE();
    case 61:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(255);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(809);
      END_STATE();
    case 63:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(811);
      END_STATE();
    case 64:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(842);
      END_STATE();
    case 65:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(843);
      END_STATE();
    case 66:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(200);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(407);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(446);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(437);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(311);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(362);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(431);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(738);
      END_STATE();
    case 81:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(832);
      END_STATE();
    case 82:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(754);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(812);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(837);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(827);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(755);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(804);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(844);
      END_STATE();
    case 89:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(833);
      END_STATE();
    case 90:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 91:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 92:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 93:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(88);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(329);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(523);
      END_STATE();
    case 94:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(359);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(783);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(798);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(826);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(807);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(773);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(829);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(737);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(774);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(752);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(846);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(799);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(780);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(791);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(845);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(794);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(820);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(772);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(802);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(790);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(435);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(46);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(331);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(467);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 167:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(761);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(745);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(818);
      END_STATE();
    case 168:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(761);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 169:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(761);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 170:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(801);
      END_STATE();
    case 171:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(801);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(776);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(416);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(814);
      END_STATE();
    case 172:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(801);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 173:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(462);
      END_STATE();
    case 174:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(444);
      END_STATE();
    case 175:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(186);
      END_STATE();
    case 176:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(759);
      END_STATE();
    case 177:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(518);
      END_STATE();
    case 178:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(841);
      END_STATE();
    case 179:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(212);
      END_STATE();
    case 180:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(479);
      END_STATE();
    case 181:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(187);
      END_STATE();
    case 182:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(447);
      END_STATE();
    case 183:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(191);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(329);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 184:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(191);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(234);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(413);
      END_STATE();
    case 185:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(139);
      END_STATE();
    case 186:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(139);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 187:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(150);
      END_STATE();
    case 188:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 189:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 190:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 191:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(364);
      END_STATE();
    case 192:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 193:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(185);
      END_STATE();
    case 194:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 195:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(817);
      END_STATE();
    case 196:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(756);
      END_STATE();
    case 197:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 198:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(137);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 199:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(322);
      END_STATE();
    case 200:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 201:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 202:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 203:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 204:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 205:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 206:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 207:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 208:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 209:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 210:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 211:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(411);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(439);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(303);
      END_STATE();
    case 212:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 213:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 214:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 215:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 216:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 217:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(470);
      END_STATE();
    case 218:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 219:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
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
          lookahead == 'i') ADVANCE(386);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
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
          lookahead == 'i') ADVANCE(426);
      END_STATE();
    case 231:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(114);
      END_STATE();
    case 232:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(771);
      END_STATE();
    case 233:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(526);
      END_STATE();
    case 234:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(786);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 235:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 236:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 237:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(234);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(413);
      END_STATE();
    case 238:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 239:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(461);
      END_STATE();
    case 240:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(323);
      END_STATE();
    case 241:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 242:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(440);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 243:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 244:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(161);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(479);
      END_STATE();
    case 245:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 246:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 247:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 248:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 249:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 250:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(781);
      END_STATE();
    case 251:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(394);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(479);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(428);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 261:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(736);
      END_STATE();
    case 262:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(326);
      END_STATE();
    case 263:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(215);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(401);
      END_STATE();
    case 264:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 265:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 266:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(104);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 267:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 268:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(515);
      END_STATE();
    case 269:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(753);
      END_STATE();
    case 270:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(838);
      END_STATE();
    case 271:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(835);
      END_STATE();
    case 272:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(746);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(818);
      END_STATE();
    case 273:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(795);
      END_STATE();
    case 274:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 275:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(94);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(101);
      END_STATE();
    case 276:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(94);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(101);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 277:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(235);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(436);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(304);
      END_STATE();
    case 278:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(436);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(304);
      END_STATE();
    case 279:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 280:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 281:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 282:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 283:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 284:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 285:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 286:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 287:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 288:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 289:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 290:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 291:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 292:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 293:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(408);
      END_STATE();
    case 294:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 295:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
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
          lookahead == 'n') ADVANCE(420);
      END_STATE();
    case 299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 300:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(355);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 301:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(785);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(433);
      END_STATE();
    case 302:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(785);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(433);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 303:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(764);
      END_STATE();
    case 304:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 305:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 306:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 307:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 308:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 309:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(261);
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
          lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 313:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 314:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 315:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(350);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(333);
      END_STATE();
    case 316:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 317:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 318:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 319:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 320:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 321:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(298);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 322:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 323:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 324:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(823);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 325:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(779);
      END_STATE();
    case 326:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(760);
      END_STATE();
    case 327:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(94);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(101);
      END_STATE();
    case 328:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(94);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      END_STATE();
    case 329:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 330:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 331:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 332:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 333:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 334:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 335:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 336:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 337:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 338:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 339:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 340:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(788);
      END_STATE();
    case 341:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(750);
      END_STATE();
    case 342:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(806);
      END_STATE();
    case 343:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(830);
      END_STATE();
    case 344:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(839);
      END_STATE();
    case 345:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(847);
      END_STATE();
    case 346:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(813);
      END_STATE();
    case 347:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(808);
      END_STATE();
    case 348:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 349:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 350:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 351:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 352:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 353:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 354:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 355:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(448);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(770);
      END_STATE();
    case 356:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 357:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 358:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 359:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 360:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 361:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 362:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 363:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 364:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 365:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 366:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 367:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 368:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 369:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 370:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 371:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(762);
      END_STATE();
    case 372:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(766);
      END_STATE();
    case 373:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(778);
      END_STATE();
    case 374:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(840);
      END_STATE();
    case 375:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(819);
      END_STATE();
    case 376:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(787);
      END_STATE();
    case 377:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(797);
      END_STATE();
    case 378:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(793);
      END_STATE();
    case 379:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(796);
      END_STATE();
    case 380:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(836);
      END_STATE();
    case 381:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(747);
      END_STATE();
    case 382:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(308);
      END_STATE();
    case 383:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(454);
      END_STATE();
    case 384:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(383);
      END_STATE();
    case 385:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(335);
      END_STATE();
    case 386:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(401);
      END_STATE();
    case 387:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      END_STATE();
    case 388:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(396);
      END_STATE();
    case 389:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(414);
      END_STATE();
    case 390:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(204);
      END_STATE();
    case 391:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      END_STATE();
    case 392:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(152);
      END_STATE();
    case 393:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(154);
      END_STATE();
    case 394:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 395:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      END_STATE();
    case 396:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(224);
      END_STATE();
    case 397:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(330);
      END_STATE();
    case 398:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(430);
      END_STATE();
    case 399:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 400:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(821);
      END_STATE();
    case 401:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(800);
      END_STATE();
    case 402:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(825);
      END_STATE();
    case 403:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(784);
      END_STATE();
    case 404:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(834);
      END_STATE();
    case 405:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(519);
      END_STATE();
    case 406:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(763);
      END_STATE();
    case 407:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(512);
      END_STATE();
    case 408:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(831);
      END_STATE();
    case 409:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(828);
      END_STATE();
    case 410:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(824);
      END_STATE();
    case 411:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(75);
      END_STATE();
    case 412:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(352);
      END_STATE();
    case 413:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      END_STATE();
    case 414:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      END_STATE();
    case 415:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 416:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      END_STATE();
    case 417:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 418:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 419:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(36);
      END_STATE();
    case 420:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 421:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 422:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 423:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 424:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 425:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 426:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      END_STATE();
    case 427:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 428:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(162);
      END_STATE();
    case 429:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      END_STATE();
    case 430:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(165);
      END_STATE();
    case 431:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      END_STATE();
    case 432:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      END_STATE();
    case 433:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 434:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 435:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 436:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(366);
      END_STATE();
    case 437:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(357);
      END_STATE();
    case 438:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(392);
      END_STATE();
    case 439:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(404);
      END_STATE();
    case 440:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 441:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 442:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(398);
      END_STATE();
    case 443:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(393);
      END_STATE();
    case 444:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 445:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 446:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(424);
      END_STATE();
    case 447:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 448:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(336);
      END_STATE();
    case 449:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 450:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(304);
      END_STATE();
    case 451:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      END_STATE();
    case 452:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(805);
      END_STATE();
    case 453:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(517);
      END_STATE();
    case 454:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(314);
      END_STATE();
    case 455:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(365);
      END_STATE();
    case 456:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(775);
      END_STATE();
    case 457:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(402);
      END_STATE();
    case 458:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(207);
      END_STATE();
    case 459:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(98);
      END_STATE();
    case 460:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(749);
      END_STATE();
    case 461:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(848);
      END_STATE();
    case 462:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(792);
      END_STATE();
    case 463:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(816);
      END_STATE();
    case 464:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(748);
      END_STATE();
    case 465:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(221);
      END_STATE();
    case 466:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(385);
      END_STATE();
    case 467:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(333);
      END_STATE();
    case 468:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(397);
      END_STATE();
    case 469:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(148);
      END_STATE();
    case 470:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(130);
      END_STATE();
    case 471:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 472:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 473:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(471);
      END_STATE();
    case 474:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(472);
      END_STATE();
    case 475:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 481:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      END_STATE();
    case 482:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(481);
      END_STATE();
    case 483:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(482);
      END_STATE();
    case 484:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(478);
      END_STATE();
    case 485:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(479);
      END_STATE();
    case 486:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 487:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(486);
      END_STATE();
    case 488:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 489:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(488);
      END_STATE();
    case 490:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(484);
      END_STATE();
    case 491:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 492:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 493:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(492);
      END_STATE();
    case 494:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(493);
      END_STATE();
    case 495:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(494);
      END_STATE();
    case 496:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(490);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(498);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 503:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(559);
      END_STATE();
    case 504:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(10);
      END_STATE();
    case 505:
      if (eof) ADVANCE(510);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(524);
      if (lookahead == ')') ADVANCE(525);
      if (lookahead == ',') ADVANCE(521);
      if (lookahead == '-') ADVANCE(539);
      if (lookahead == '.') ADVANCE(522);
      if (lookahead == '0') ADVANCE(541);
      if (lookahead == ';') ADVANCE(511);
      if (lookahead == '<') ADVANCE(739);
      if (lookahead == '=') ADVANCE(742);
      if (lookahead == '>') ADVANCE(743);
      if (lookahead == 'X') ADVANCE(12);
      if (lookahead == '[') ADVANCE(757);
      if (lookahead == '{') ADVANCE(767);
      if (lookahead == '}') ADVANCE(769);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(126);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(321);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(30);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(337);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(145);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(434);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(170);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(302);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(505)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(549);
      END_STATE();
    case 506:
      if (eof) ADVANCE(510);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(524);
      if (lookahead == ')') ADVANCE(525);
      if (lookahead == ',') ADVANCE(521);
      if (lookahead == '-') ADVANCE(539);
      if (lookahead == '.') ADVANCE(522);
      if (lookahead == ':') ADVANCE(768);
      if (lookahead == ';') ADVANCE(511);
      if (lookahead == '<') ADVANCE(739);
      if (lookahead == '=') ADVANCE(742);
      if (lookahead == '>') ADVANCE(743);
      if (lookahead == '[') ADVANCE(757);
      if (lookahead == ']') ADVANCE(758);
      if (lookahead == '{') ADVANCE(767);
      if (lookahead == '}') ADVANCE(769);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(45);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(95);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(458);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(337);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(382);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(142);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(25);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(317);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(338);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(123);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(301);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(275);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(42);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(506)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(542);
      END_STATE();
    case 507:
      if (eof) ADVANCE(510);
      if (lookahead == '\'') ADVANCE(502);
      if (lookahead == ';') ADVANCE(511);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(651);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(608);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(641);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(610);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(692);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(664);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(621);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(596);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(612);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(688);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(679);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(507)
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 508:
      if (eof) ADVANCE(510);
      if (lookahead == ';') ADVANCE(511);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(531);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(537);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(533);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(337);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(166);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(358);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(508)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(529);
      END_STATE();
    case 509:
      if (eof) ADVANCE(510);
      if (lookahead == ';') ADVANCE(511);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(531);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(537);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(533);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(337);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(509)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(529);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_limit_spec_token1);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_uuid);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'X') ADVANCE(552);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(751);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(329);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(415);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(329);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(412);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(99);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (lookahead == '-') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(542);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (lookahead == 'X') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(542);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(471);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(475);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(546);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(477);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(479);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_X_SQUOTE);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_0X);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token1);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token2);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      if (lookahead == '$') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(558);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_code_block_token1);
      if (lookahead == '$') ADVANCE(503);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '-') ADVANCE(495);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(635);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(706);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(714);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(706);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(677);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(580);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(722);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(678);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(733);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(684);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(703);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(653);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(687);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(582);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(662);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(683);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(646);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(658);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(583);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(735);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(639);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(618);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(662);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(703);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(628);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(710);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(704);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(705);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(565);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(631);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(735);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(565);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(735);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(706);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(725);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(696);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(721);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(556);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(703);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(576);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(703);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(658);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(693);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(577);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(686);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(565);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(726);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(648);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(668);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(649);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(735);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(735);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(735);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(624);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(625);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(575);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(735);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(616);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(672);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(673);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(694);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(657);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(590);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(662);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(658);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(675);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(661);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(619);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(603);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(695);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(656);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(667);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(735);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(635);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(584);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(635);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(527);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(715);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(655);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(715);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(606);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(674);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(669);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(660);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(724);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(604);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(624);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(645);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(638);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(593);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(611);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(732);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(709);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(681);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(735);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(602);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(735);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(677);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(727);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(680);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(563);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(572);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(735);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(516);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(585);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(615);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(703);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(588);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(698);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(713);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(709);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(587);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(677);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(652);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(634);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(639);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(579);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(644);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(570);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(658);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(659);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(735);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(639);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(591);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(578);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(643);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(573);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(735);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(581);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(622);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(703);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(724);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(719);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(718);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(627);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(629);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(574);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(735);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(703);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(707);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(711);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(716);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(676);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(605);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(598);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(708);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(682);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(712);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(513);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(514);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(693);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(607);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(601);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(626);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(571);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(633);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(691);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(580);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(700);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(623);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(597);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(663);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(647);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(670);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(703);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(735);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(701);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(693);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(624);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(562);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(728);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(729);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(730);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(731);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(732);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(733);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(740);
      if (lookahead == '>') ADVANCE(741);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(744);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(411);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(439);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(822);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token1);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(777);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_if_exist_token1);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_if_exist_token2);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__dquote);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_if_not_exist_token1);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_ttl_token1);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_update_token2);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_priviledge_token1);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_priviledge_token2);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_priviledge_token3);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_priviledge_token4);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_priviledge_token5);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_priviledge_token6);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_priviledge_token7);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_resource_token3);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_resource_token4);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_drop_aggregate_token1);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token1);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token2);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_drop_trigger_token1);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_drop_type_token1);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token2);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token3);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token4);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_or_replace_token1);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_or_replace_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_or_replace_token2);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token1);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token2);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_column_not_null_token1);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(764);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(441);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_return_mode_token1);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_return_mode_token2);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token1);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_durable_writes_token1);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_role_with_options_token1);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_role_with_options_token2);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_role_with_options_token3);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_role_with_options_token4);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_order_direction_token1);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_order_direction_token2);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_alter_table_add_token1);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_alter_table_drop_compact_storage_token2);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_alter_table_rename_token1);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_user_super_user_token1);
      END_STATE();
    case 848:
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
  [4] = {.lex_state = 506},
  [5] = {.lex_state = 506},
  [6] = {.lex_state = 506},
  [7] = {.lex_state = 506},
  [8] = {.lex_state = 506},
  [9] = {.lex_state = 506},
  [10] = {.lex_state = 506},
  [11] = {.lex_state = 506},
  [12] = {.lex_state = 506},
  [13] = {.lex_state = 506},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 506},
  [35] = {.lex_state = 506},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 506},
  [45] = {.lex_state = 505},
  [46] = {.lex_state = 505},
  [47] = {.lex_state = 506},
  [48] = {.lex_state = 506},
  [49] = {.lex_state = 506},
  [50] = {.lex_state = 506},
  [51] = {.lex_state = 506},
  [52] = {.lex_state = 506},
  [53] = {.lex_state = 506},
  [54] = {.lex_state = 506},
  [55] = {.lex_state = 505},
  [56] = {.lex_state = 506},
  [57] = {.lex_state = 506},
  [58] = {.lex_state = 506},
  [59] = {.lex_state = 506},
  [60] = {.lex_state = 506},
  [61] = {.lex_state = 507},
  [62] = {.lex_state = 506},
  [63] = {.lex_state = 506},
  [64] = {.lex_state = 506},
  [65] = {.lex_state = 506},
  [66] = {.lex_state = 508},
  [67] = {.lex_state = 506},
  [68] = {.lex_state = 505},
  [69] = {.lex_state = 506},
  [70] = {.lex_state = 506},
  [71] = {.lex_state = 506},
  [72] = {.lex_state = 506},
  [73] = {.lex_state = 506},
  [74] = {.lex_state = 506},
  [75] = {.lex_state = 508},
  [76] = {.lex_state = 506},
  [77] = {.lex_state = 506},
  [78] = {.lex_state = 506},
  [79] = {.lex_state = 506},
  [80] = {.lex_state = 506},
  [81] = {.lex_state = 506},
  [82] = {.lex_state = 506},
  [83] = {.lex_state = 506},
  [84] = {.lex_state = 506},
  [85] = {.lex_state = 506},
  [86] = {.lex_state = 505},
  [87] = {.lex_state = 506},
  [88] = {.lex_state = 509},
  [89] = {.lex_state = 509},
  [90] = {.lex_state = 506},
  [91] = {.lex_state = 506},
  [92] = {.lex_state = 506},
  [93] = {.lex_state = 506},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 506},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 505},
  [102] = {.lex_state = 506},
  [103] = {.lex_state = 506},
  [104] = {.lex_state = 506},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 506},
  [112] = {.lex_state = 505},
  [113] = {.lex_state = 506},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 506},
  [116] = {.lex_state = 506},
  [117] = {.lex_state = 505},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 506},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 506},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 506},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 506},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 506},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 505},
  [137] = {.lex_state = 506},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 505},
  [140] = {.lex_state = 506},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 505},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 505},
  [145] = {.lex_state = 506},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 506},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 506},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 506},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 506},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 506},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 506},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 8},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 8},
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
  [229] = {.lex_state = 8},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 8},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
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
  [279] = {.lex_state = 0},
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
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 505},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 505},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
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
  [360] = {.lex_state = 0},
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
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 505},
  [390] = {.lex_state = 505},
  [391] = {.lex_state = 505},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 505},
  [394] = {.lex_state = 505},
  [395] = {.lex_state = 505},
  [396] = {.lex_state = 505},
  [397] = {.lex_state = 505},
  [398] = {.lex_state = 505},
  [399] = {.lex_state = 505},
  [400] = {.lex_state = 505},
  [401] = {.lex_state = 505},
  [402] = {.lex_state = 505},
  [403] = {.lex_state = 505},
  [404] = {.lex_state = 505},
  [405] = {.lex_state = 505},
  [406] = {.lex_state = 505},
  [407] = {.lex_state = 505},
  [408] = {.lex_state = 505},
  [409] = {.lex_state = 505},
  [410] = {.lex_state = 505},
  [411] = {.lex_state = 505},
  [412] = {.lex_state = 505},
  [413] = {.lex_state = 31},
  [414] = {.lex_state = 32},
  [415] = {.lex_state = 31},
  [416] = {.lex_state = 2},
  [417] = {.lex_state = 506},
  [418] = {.lex_state = 11},
  [419] = {.lex_state = 31},
  [420] = {.lex_state = 505},
  [421] = {.lex_state = 506},
  [422] = {.lex_state = 505},
  [423] = {.lex_state = 3},
  [424] = {.lex_state = 3},
  [425] = {.lex_state = 11},
  [426] = {.lex_state = 3},
  [427] = {.lex_state = 31},
  [428] = {.lex_state = 3},
  [429] = {.lex_state = 505},
  [430] = {.lex_state = 2},
  [431] = {.lex_state = 2},
  [432] = {.lex_state = 3},
  [433] = {.lex_state = 2},
  [434] = {.lex_state = 16},
  [435] = {.lex_state = 2},
  [436] = {.lex_state = 506},
  [437] = {.lex_state = 506},
  [438] = {.lex_state = 2},
  [439] = {.lex_state = 506},
  [440] = {.lex_state = 505},
  [441] = {.lex_state = 2},
  [442] = {.lex_state = 2},
  [443] = {.lex_state = 505},
  [444] = {.lex_state = 2},
  [445] = {.lex_state = 2},
  [446] = {.lex_state = 2},
  [447] = {.lex_state = 506},
  [448] = {.lex_state = 2},
  [449] = {.lex_state = 17},
  [450] = {.lex_state = 2},
  [451] = {.lex_state = 2},
  [452] = {.lex_state = 2},
  [453] = {.lex_state = 1},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 31},
  [456] = {.lex_state = 2},
  [457] = {.lex_state = 2},
  [458] = {.lex_state = 2},
  [459] = {.lex_state = 1},
  [460] = {.lex_state = 2},
  [461] = {.lex_state = 2},
  [462] = {.lex_state = 2},
  [463] = {.lex_state = 2},
  [464] = {.lex_state = 2},
  [465] = {.lex_state = 2},
  [466] = {.lex_state = 2},
  [467] = {.lex_state = 2},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 2},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 2},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 2},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 2},
  [478] = {.lex_state = 2},
  [479] = {.lex_state = 2},
  [480] = {.lex_state = 2},
  [481] = {.lex_state = 2},
  [482] = {.lex_state = 2},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 2},
  [486] = {.lex_state = 2},
  [487] = {.lex_state = 2},
  [488] = {.lex_state = 506},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 2},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 2},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 1},
  [499] = {.lex_state = 2},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 2},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 506},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 2},
  [508] = {.lex_state = 2},
  [509] = {.lex_state = 2},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 2},
  [512] = {.lex_state = 2},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 2},
  [515] = {.lex_state = 2},
  [516] = {.lex_state = 2},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 2},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 2},
  [521] = {.lex_state = 2},
  [522] = {.lex_state = 2},
  [523] = {.lex_state = 2},
  [524] = {.lex_state = 2},
  [525] = {.lex_state = 2},
  [526] = {.lex_state = 2},
  [527] = {.lex_state = 2},
  [528] = {.lex_state = 1},
  [529] = {.lex_state = 2},
  [530] = {.lex_state = 2},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 2},
  [533] = {.lex_state = 2},
  [534] = {.lex_state = 2},
  [535] = {.lex_state = 2},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 2},
  [538] = {.lex_state = 2},
  [539] = {.lex_state = 2},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 2},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 2},
  [544] = {.lex_state = 2},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 506},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 2},
  [550] = {.lex_state = 2},
  [551] = {.lex_state = 2},
  [552] = {.lex_state = 2},
  [553] = {.lex_state = 2},
  [554] = {.lex_state = 2},
  [555] = {.lex_state = 2},
  [556] = {.lex_state = 2},
  [557] = {.lex_state = 2},
  [558] = {.lex_state = 2},
  [559] = {.lex_state = 2},
  [560] = {.lex_state = 2},
  [561] = {.lex_state = 2},
  [562] = {.lex_state = 2},
  [563] = {.lex_state = 2},
  [564] = {.lex_state = 2},
  [565] = {.lex_state = 2},
  [566] = {.lex_state = 2},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 2},
  [569] = {.lex_state = 2},
  [570] = {.lex_state = 2},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 2},
  [573] = {.lex_state = 2},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 2},
  [576] = {.lex_state = 2},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 2},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 2},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 2},
  [586] = {.lex_state = 2},
  [587] = {.lex_state = 2},
  [588] = {.lex_state = 2},
  [589] = {.lex_state = 2},
  [590] = {.lex_state = 2},
  [591] = {.lex_state = 506},
  [592] = {.lex_state = 2},
  [593] = {.lex_state = 2},
  [594] = {.lex_state = 2},
  [595] = {.lex_state = 2},
  [596] = {.lex_state = 2},
  [597] = {.lex_state = 505},
  [598] = {.lex_state = 2},
  [599] = {.lex_state = 2},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 2},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 2},
  [604] = {.lex_state = 2},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 506},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 2},
  [611] = {.lex_state = 506},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 506},
  [614] = {.lex_state = 2},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 2},
  [617] = {.lex_state = 2},
  [618] = {.lex_state = 2},
  [619] = {.lex_state = 2},
  [620] = {.lex_state = 506},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 506},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 2},
  [627] = {.lex_state = 2},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 2},
  [630] = {.lex_state = 2},
  [631] = {.lex_state = 506},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 506},
  [634] = {.lex_state = 2},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 506},
  [637] = {.lex_state = 2},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 2},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 1},
  [644] = {.lex_state = 506},
  [645] = {.lex_state = 1},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 2},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 2},
  [652] = {.lex_state = 2},
  [653] = {.lex_state = 2},
  [654] = {.lex_state = 1},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 2},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 506},
  [660] = {.lex_state = 2},
  [661] = {.lex_state = 2},
  [662] = {.lex_state = 2},
  [663] = {.lex_state = 2},
  [664] = {.lex_state = 1},
  [665] = {.lex_state = 2},
  [666] = {.lex_state = 506},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 2},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 506},
  [677] = {.lex_state = 2},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 2},
  [681] = {.lex_state = 506},
  [682] = {.lex_state = 506},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 506},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 2},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 506},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 506},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 2},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 2},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 506},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 506},
  [705] = {.lex_state = 2},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 506},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 506},
  [711] = {.lex_state = 506},
  [712] = {.lex_state = 2},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 506},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 11},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 2},
  [727] = {.lex_state = 506},
  [728] = {.lex_state = 2},
  [729] = {.lex_state = 506},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 2},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 506},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 2},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 2},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 2},
  [745] = {.lex_state = 506},
  [746] = {.lex_state = 11},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 2},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 2},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 506},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 2},
  [757] = {.lex_state = 2},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 2},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 2},
  [763] = {.lex_state = 2},
  [764] = {.lex_state = 2},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 2},
  [767] = {.lex_state = 2},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 2},
  [770] = {.lex_state = 2},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 2},
  [774] = {.lex_state = 2},
  [775] = {.lex_state = 2},
  [776] = {.lex_state = 2},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 506},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 2},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 2},
  [788] = {.lex_state = 2},
  [789] = {.lex_state = 2},
  [790] = {.lex_state = 2},
  [791] = {.lex_state = 2},
  [792] = {.lex_state = 2},
  [793] = {.lex_state = 2},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 506},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 2},
  [802] = {.lex_state = 11},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 2},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 506},
  [809] = {.lex_state = 2},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 2},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 2},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 506},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 11},
  [823] = {.lex_state = 11},
  [824] = {.lex_state = 2},
  [825] = {.lex_state = 2},
  [826] = {.lex_state = 2},
  [827] = {.lex_state = 2},
  [828] = {.lex_state = 506},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 2},
  [831] = {.lex_state = 2},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 2},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 2},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 2},
  [839] = {.lex_state = 2},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 506},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 2},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 506},
  [850] = {.lex_state = 2},
  [851] = {.lex_state = 2},
  [852] = {.lex_state = 506},
  [853] = {.lex_state = 2},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 2},
  [856] = {.lex_state = 506},
  [857] = {.lex_state = 2},
  [858] = {.lex_state = 2},
  [859] = {.lex_state = 2},
  [860] = {.lex_state = 2},
  [861] = {.lex_state = 506},
  [862] = {.lex_state = 2},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 505},
  [865] = {.lex_state = 2},
  [866] = {.lex_state = 506},
  [867] = {.lex_state = 2},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 2},
  [870] = {.lex_state = 505},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 2},
  [874] = {.lex_state = 2},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 2},
  [877] = {.lex_state = 506},
  [878] = {.lex_state = 506},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 2},
  [881] = {.lex_state = 2},
  [882] = {.lex_state = 2},
  [883] = {.lex_state = 2},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 2},
  [886] = {.lex_state = 2},
  [887] = {.lex_state = 2},
  [888] = {.lex_state = 2},
  [889] = {.lex_state = 506},
  [890] = {.lex_state = 506},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 2},
  [894] = {.lex_state = 2},
  [895] = {.lex_state = 506},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 2},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 2},
  [901] = {.lex_state = 506},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 2},
  [904] = {.lex_state = 2},
  [905] = {.lex_state = 2},
  [906] = {.lex_state = 2},
  [907] = {.lex_state = 2},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 11},
  [910] = {.lex_state = 2},
  [911] = {.lex_state = 506},
  [912] = {.lex_state = 2},
  [913] = {.lex_state = 11},
  [914] = {.lex_state = 2},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 506},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 2},
  [921] = {.lex_state = 506},
  [922] = {.lex_state = 2},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 506},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 506},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 506},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 2},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 0},
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
  [963] = {.lex_state = 506},
  [964] = {.lex_state = 0},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 0},
  [967] = {.lex_state = 0},
  [968] = {.lex_state = 0},
  [969] = {.lex_state = 506},
  [970] = {.lex_state = 2},
  [971] = {.lex_state = 0},
  [972] = {.lex_state = 0},
  [973] = {.lex_state = 0},
  [974] = {.lex_state = 0},
  [975] = {.lex_state = 506},
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 506},
  [978] = {.lex_state = 506},
  [979] = {.lex_state = 0},
  [980] = {.lex_state = 0},
  [981] = {.lex_state = 506},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 0},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 0},
  [986] = {.lex_state = 506},
  [987] = {.lex_state = 0},
  [988] = {.lex_state = 506},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 506},
  [992] = {.lex_state = 0},
  [993] = {.lex_state = 0},
  [994] = {.lex_state = 0},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 506},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 0},
  [999] = {.lex_state = 0},
  [1000] = {.lex_state = 2},
  [1001] = {.lex_state = 506},
  [1002] = {.lex_state = 0},
  [1003] = {.lex_state = 0},
  [1004] = {.lex_state = 506},
  [1005] = {.lex_state = 0},
  [1006] = {.lex_state = 0},
  [1007] = {.lex_state = 0},
  [1008] = {.lex_state = 0},
  [1009] = {.lex_state = 0},
  [1010] = {.lex_state = 0},
  [1011] = {.lex_state = 506},
  [1012] = {.lex_state = 506},
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 0},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 0},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 0},
  [1020] = {.lex_state = 506},
  [1021] = {.lex_state = 0},
  [1022] = {.lex_state = 0},
  [1023] = {.lex_state = 0},
  [1024] = {.lex_state = 0},
  [1025] = {.lex_state = 506},
  [1026] = {.lex_state = 0},
  [1027] = {.lex_state = 0},
  [1028] = {.lex_state = 0},
  [1029] = {.lex_state = 506},
  [1030] = {.lex_state = 0},
  [1031] = {.lex_state = 0},
  [1032] = {.lex_state = 0},
  [1033] = {.lex_state = 0},
  [1034] = {.lex_state = 0},
  [1035] = {.lex_state = 505},
  [1036] = {.lex_state = 0},
  [1037] = {.lex_state = 0},
  [1038] = {.lex_state = 0},
  [1039] = {.lex_state = 0},
  [1040] = {.lex_state = 0},
  [1041] = {.lex_state = 2},
  [1042] = {.lex_state = 0},
  [1043] = {.lex_state = 0},
  [1044] = {.lex_state = 506},
  [1045] = {.lex_state = 0},
  [1046] = {.lex_state = 0},
  [1047] = {.lex_state = 0},
  [1048] = {.lex_state = 0},
  [1049] = {.lex_state = 2},
  [1050] = {.lex_state = 0},
  [1051] = {.lex_state = 506},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 0},
  [1054] = {.lex_state = 0},
  [1055] = {.lex_state = 0},
  [1056] = {.lex_state = 9},
  [1057] = {.lex_state = 506},
  [1058] = {.lex_state = 506},
  [1059] = {.lex_state = 0},
  [1060] = {.lex_state = 0},
  [1061] = {.lex_state = 506},
  [1062] = {.lex_state = 0},
  [1063] = {.lex_state = 0},
  [1064] = {.lex_state = 0},
  [1065] = {.lex_state = 0},
  [1066] = {.lex_state = 505},
  [1067] = {.lex_state = 0},
  [1068] = {.lex_state = 11},
  [1069] = {.lex_state = 0},
  [1070] = {.lex_state = 0},
  [1071] = {.lex_state = 0},
  [1072] = {.lex_state = 0},
  [1073] = {.lex_state = 0},
  [1074] = {.lex_state = 0},
  [1075] = {.lex_state = 2},
  [1076] = {.lex_state = 0},
  [1077] = {.lex_state = 0},
  [1078] = {.lex_state = 0},
  [1079] = {.lex_state = 0},
  [1080] = {.lex_state = 2},
  [1081] = {.lex_state = 0},
  [1082] = {.lex_state = 0},
  [1083] = {.lex_state = 0},
  [1084] = {.lex_state = 506},
  [1085] = {.lex_state = 2},
  [1086] = {.lex_state = 0},
  [1087] = {.lex_state = 506},
  [1088] = {.lex_state = 0},
  [1089] = {.lex_state = 0},
  [1090] = {.lex_state = 506},
  [1091] = {.lex_state = 0},
  [1092] = {.lex_state = 0},
  [1093] = {.lex_state = 0},
  [1094] = {.lex_state = 505},
  [1095] = {.lex_state = 0},
  [1096] = {.lex_state = 0},
  [1097] = {.lex_state = 0},
  [1098] = {.lex_state = 0},
  [1099] = {.lex_state = 0},
  [1100] = {.lex_state = 0},
  [1101] = {.lex_state = 0},
  [1102] = {.lex_state = 0},
  [1103] = {.lex_state = 0},
  [1104] = {.lex_state = 506},
  [1105] = {.lex_state = 0},
  [1106] = {.lex_state = 0},
  [1107] = {.lex_state = 0},
  [1108] = {.lex_state = 506},
  [1109] = {.lex_state = 506},
  [1110] = {.lex_state = 506},
  [1111] = {.lex_state = 506},
  [1112] = {.lex_state = 0},
  [1113] = {.lex_state = 0},
  [1114] = {.lex_state = 506},
  [1115] = {.lex_state = 0},
  [1116] = {.lex_state = 0},
  [1117] = {.lex_state = 0},
  [1118] = {.lex_state = 0},
  [1119] = {.lex_state = 0},
  [1120] = {.lex_state = 0},
  [1121] = {.lex_state = 0},
  [1122] = {.lex_state = 0},
  [1123] = {.lex_state = 505},
  [1124] = {.lex_state = 0},
  [1125] = {.lex_state = 0},
  [1126] = {.lex_state = 0},
  [1127] = {.lex_state = 0},
  [1128] = {.lex_state = 506},
  [1129] = {.lex_state = 506},
  [1130] = {.lex_state = 0},
  [1131] = {.lex_state = 506},
  [1132] = {.lex_state = 0},
  [1133] = {.lex_state = 506},
  [1134] = {.lex_state = 0},
  [1135] = {.lex_state = 0},
  [1136] = {.lex_state = 0},
  [1137] = {.lex_state = 0},
  [1138] = {.lex_state = 0},
  [1139] = {.lex_state = 2},
  [1140] = {.lex_state = 0},
  [1141] = {.lex_state = 505},
  [1142] = {.lex_state = 0},
  [1143] = {.lex_state = 0},
  [1144] = {.lex_state = 0},
  [1145] = {.lex_state = 0},
  [1146] = {.lex_state = 2},
  [1147] = {.lex_state = 2},
  [1148] = {.lex_state = 0},
  [1149] = {.lex_state = 0},
  [1150] = {.lex_state = 505},
  [1151] = {.lex_state = 2},
  [1152] = {.lex_state = 0},
  [1153] = {.lex_state = 506},
  [1154] = {.lex_state = 505},
  [1155] = {.lex_state = 0},
  [1156] = {.lex_state = 0},
  [1157] = {.lex_state = 0},
  [1158] = {.lex_state = 0},
  [1159] = {.lex_state = 0},
  [1160] = {.lex_state = 0},
  [1161] = {.lex_state = 0},
  [1162] = {.lex_state = 0},
  [1163] = {.lex_state = 0},
  [1164] = {.lex_state = 505},
  [1165] = {.lex_state = 0},
  [1166] = {.lex_state = 0},
  [1167] = {.lex_state = 0},
  [1168] = {.lex_state = 506},
  [1169] = {.lex_state = 506},
  [1170] = {.lex_state = 0},
  [1171] = {.lex_state = 0},
  [1172] = {.lex_state = 0},
  [1173] = {.lex_state = 0},
  [1174] = {.lex_state = 0},
  [1175] = {.lex_state = 0},
  [1176] = {.lex_state = 0},
  [1177] = {.lex_state = 506},
  [1178] = {.lex_state = 0},
  [1179] = {.lex_state = 0},
  [1180] = {.lex_state = 0},
  [1181] = {.lex_state = 0},
  [1182] = {.lex_state = 0},
  [1183] = {.lex_state = 0},
  [1184] = {.lex_state = 0},
  [1185] = {.lex_state = 0},
  [1186] = {.lex_state = 0},
  [1187] = {.lex_state = 0},
  [1188] = {.lex_state = 0},
  [1189] = {.lex_state = 0},
  [1190] = {.lex_state = 0},
  [1191] = {.lex_state = 0},
  [1192] = {.lex_state = 0},
  [1193] = {.lex_state = 0},
  [1194] = {.lex_state = 0},
  [1195] = {.lex_state = 0},
  [1196] = {.lex_state = 0},
  [1197] = {.lex_state = 506},
  [1198] = {.lex_state = 0},
  [1199] = {.lex_state = 0},
  [1200] = {.lex_state = 0},
  [1201] = {.lex_state = 0},
  [1202] = {.lex_state = 0},
  [1203] = {.lex_state = 0},
  [1204] = {.lex_state = 0},
  [1205] = {.lex_state = 508},
  [1206] = {.lex_state = 0},
  [1207] = {.lex_state = 0},
  [1208] = {.lex_state = 0},
  [1209] = {.lex_state = 0},
  [1210] = {.lex_state = 0},
  [1211] = {.lex_state = 0},
  [1212] = {.lex_state = 0},
  [1213] = {.lex_state = 506},
  [1214] = {.lex_state = 0},
  [1215] = {.lex_state = 0},
  [1216] = {.lex_state = 0},
  [1217] = {.lex_state = 0},
  [1218] = {.lex_state = 0},
  [1219] = {.lex_state = 0},
  [1220] = {.lex_state = 0},
  [1221] = {.lex_state = 0},
  [1222] = {.lex_state = 506},
  [1223] = {.lex_state = 0},
  [1224] = {.lex_state = 506},
  [1225] = {.lex_state = 0},
  [1226] = {.lex_state = 506},
  [1227] = {.lex_state = 0},
  [1228] = {.lex_state = 0},
  [1229] = {.lex_state = 0},
  [1230] = {.lex_state = 0},
  [1231] = {.lex_state = 0},
  [1232] = {.lex_state = 0},
  [1233] = {.lex_state = 0},
  [1234] = {.lex_state = 506},
  [1235] = {.lex_state = 506},
  [1236] = {.lex_state = 0},
  [1237] = {.lex_state = 0},
  [1238] = {.lex_state = 0},
  [1239] = {.lex_state = 0},
  [1240] = {.lex_state = 0},
  [1241] = {.lex_state = 0},
  [1242] = {.lex_state = 2},
  [1243] = {.lex_state = 0},
  [1244] = {.lex_state = 0},
  [1245] = {.lex_state = 0},
  [1246] = {.lex_state = 0},
  [1247] = {.lex_state = 0},
  [1248] = {.lex_state = 0},
  [1249] = {.lex_state = 2},
  [1250] = {.lex_state = 0},
  [1251] = {.lex_state = 506},
  [1252] = {.lex_state = 506},
  [1253] = {.lex_state = 0},
  [1254] = {.lex_state = 2},
  [1255] = {.lex_state = 0},
  [1256] = {.lex_state = 2},
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
    [aux_sym_if_exist_token1] = ACTIONS(1),
    [aux_sym_if_exist_token2] = ACTIONS(1),
    [aux_sym_insert_statement_token1] = ACTIONS(1),
    [aux_sym_insert_statement_token2] = ACTIONS(1),
    [sym__dquote] = ACTIONS(1),
    [aux_sym_insert_values_spec_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_if_not_exist_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(1211),
    [sym__statement] = STATE(3),
    [sym_select_statement] = STATE(279),
    [sym_delete_statement] = STATE(279),
    [sym_begin_batch] = STATE(650),
    [sym_insert_statement] = STATE(279),
    [sym_truncate] = STATE(279),
    [sym_create_index] = STATE(279),
    [sym_drop_index] = STATE(279),
    [sym_update] = STATE(279),
    [sym_use] = STATE(279),
    [sym_grant] = STATE(279),
    [sym_revoke] = STATE(279),
    [sym_list_roles] = STATE(279),
    [sym_list_permissions] = STATE(279),
    [sym_drop_aggregate] = STATE(279),
    [sym_drop_materialized_view] = STATE(279),
    [sym_drop_function] = STATE(279),
    [sym_drop_keyspace] = STATE(279),
    [sym_drop_role] = STATE(279),
    [sym_drop_table] = STATE(279),
    [sym_drop_trigger] = STATE(279),
    [sym_drop_type] = STATE(279),
    [sym_drop_user] = STATE(279),
    [sym_create_aggregate] = STATE(279),
    [sym_create_materialized_view] = STATE(279),
    [sym_create_function] = STATE(279),
    [sym_create_keyspace] = STATE(279),
    [sym_create_role] = STATE(279),
    [sym_create_table] = STATE(279),
    [sym_create_trigger] = STATE(279),
    [sym_create_type] = STATE(279),
    [sym_create_user] = STATE(279),
    [sym_alter_materialized_view] = STATE(279),
    [sym_alter_keyspace] = STATE(279),
    [sym_alter_role] = STATE(279),
    [sym_alter_table] = STATE(279),
    [sym_alter_type] = STATE(279),
    [sym_alter_user] = STATE(279),
    [sym_apply_batch] = STATE(279),
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
    STATE(650), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(279), 37,
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
    STATE(650), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(279), 37,
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
  [184] = 1,
    ACTIONS(79), 32,
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
      aux_sym_if_exist_token1,
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
  [219] = 2,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 30,
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
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
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
  [256] = 1,
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
      aux_sym_if_exist_token1,
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
  [291] = 2,
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
      aux_sym_if_exist_token1,
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
  [327] = 1,
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
      aux_sym_if_exist_token1,
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
  [361] = 1,
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
      aux_sym_if_exist_token1,
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
  [394] = 1,
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
      aux_sym_if_exist_token1,
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
  [427] = 1,
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
      aux_sym_if_exist_token1,
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
  [460] = 2,
    ACTIONS(99), 1,
      anon_sym_DOT,
    ACTIONS(97), 28,
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
  [494] = 2,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(101), 28,
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
  [528] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(1008), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [565] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(1053), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [602] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(990), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [639] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(959), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [676] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(971), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [713] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(928), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [750] = 2,
    ACTIONS(109), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_object_name,
    ACTIONS(111), 25,
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
  [783] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(986), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [820] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(161), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [857] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(567), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [894] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(939), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [931] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(923), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [968] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(1250), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [1005] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(1017), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [1042] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(1025), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [1079] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(625), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [1116] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(190), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [1153] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(165), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [1190] = 2,
    ACTIONS(113), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_object_name,
    ACTIONS(115), 25,
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
  [1223] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(1058), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [1260] = 1,
    ACTIONS(97), 28,
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
  [1291] = 1,
    ACTIONS(101), 28,
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
  [1322] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(1116), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [1359] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(1086), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [1396] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(320), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [1433] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(1128), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [1470] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(1127), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [1507] = 4,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(56), 1,
      sym_data_type_name,
    STATE(1090), 1,
      sym_data_type,
    ACTIONS(107), 25,
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
  [1544] = 3,
    ACTIONS(105), 1,
      sym_object_name,
    STATE(747), 1,
      sym_data_type_name,
    ACTIONS(107), 25,
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
    ACTIONS(105), 1,
      sym_object_name,
    STATE(899), 1,
      sym_data_type_name,
    ACTIONS(107), 25,
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
  [1612] = 3,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(117), 23,
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
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
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
  [1644] = 1,
    ACTIONS(113), 25,
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
  [1672] = 1,
    ACTIONS(109), 25,
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
  [1700] = 3,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(122), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
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
  [1731] = 3,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(126), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
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
  [1762] = 1,
    ACTIONS(117), 24,
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
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
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
  [1789] = 1,
    ACTIONS(128), 24,
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
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
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
  [1816] = 1,
    ACTIONS(130), 24,
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
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
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
  [1843] = 3,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(132), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
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
  [1874] = 1,
    ACTIONS(134), 24,
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
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
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
  [1901] = 3,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    STATE(44), 1,
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
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
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
  [1932] = 14,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(672), 1,
      sym_expression,
    STATE(1179), 1,
      sym_expression_list,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
    STATE(848), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [1984] = 3,
    ACTIONS(158), 1,
      anon_sym_LT,
    STATE(90), 1,
      sym_data_type_definition,
    ACTIONS(156), 21,
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
  [2014] = 1,
    ACTIONS(160), 23,
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
  [2040] = 8,
    ACTIONS(164), 1,
      aux_sym_select_statement_token4,
    ACTIONS(166), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(168), 1,
      aux_sym_where_spec_token1,
    ACTIONS(170), 1,
      aux_sym_order_spec_token1,
    STATE(84), 1,
      sym_where_spec,
    STATE(109), 1,
      sym_order_spec,
    STATE(208), 1,
      sym_limit_spec,
    ACTIONS(162), 16,
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
  [2080] = 8,
    ACTIONS(166), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(168), 1,
      aux_sym_where_spec_token1,
    ACTIONS(170), 1,
      aux_sym_order_spec_token1,
    ACTIONS(174), 1,
      aux_sym_select_statement_token4,
    STATE(87), 1,
      sym_where_spec,
    STATE(131), 1,
      sym_order_spec,
    STATE(206), 1,
      sym_limit_spec,
    ACTIONS(172), 16,
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
  [2120] = 8,
    ACTIONS(166), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(168), 1,
      aux_sym_where_spec_token1,
    ACTIONS(170), 1,
      aux_sym_order_spec_token1,
    ACTIONS(178), 1,
      aux_sym_select_statement_token4,
    STATE(92), 1,
      sym_where_spec,
    STATE(121), 1,
      sym_order_spec,
    STATE(219), 1,
      sym_limit_spec,
    ACTIONS(176), 16,
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
  [2160] = 8,
    ACTIONS(184), 1,
      sym_object_name,
    ACTIONS(186), 1,
      aux_sym_clustering_order_token1,
    STATE(128), 1,
      sym_table_option_item,
    STATE(175), 1,
      sym_table_options,
    STATE(327), 1,
      sym_clustering_order,
    STATE(1065), 1,
      sym_table_option_name,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(182), 14,
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
  [2199] = 1,
    ACTIONS(132), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
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
  [2224] = 1,
    ACTIONS(188), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
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
  [2249] = 1,
    ACTIONS(190), 22,
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
  [2274] = 2,
    ACTIONS(194), 1,
      anon_sym_DOT,
    ACTIONS(192), 21,
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
  [2301] = 3,
    ACTIONS(198), 1,
      sym__hex_digit,
    STATE(75), 1,
      aux_sym_hexadecimal_literal_repeat2,
    ACTIONS(196), 20,
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
  [2330] = 1,
    ACTIONS(200), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
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
  [2355] = 13,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(815), 1,
      sym_expression,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
    STATE(848), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [2404] = 1,
    ACTIONS(202), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
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
  [2429] = 1,
    ACTIONS(204), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
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
  [2454] = 1,
    ACTIONS(206), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
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
  [2479] = 1,
    ACTIONS(208), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
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
  [2504] = 1,
    ACTIONS(210), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
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
  [2529] = 1,
    ACTIONS(212), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
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
  [2554] = 3,
    ACTIONS(216), 1,
      sym__hex_digit,
    STATE(75), 1,
      aux_sym_hexadecimal_literal_repeat2,
    ACTIONS(214), 20,
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
  [2583] = 2,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(190), 20,
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
  [2609] = 1,
    ACTIONS(219), 21,
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
  [2633] = 3,
    ACTIONS(223), 1,
      aux_sym_relation_elements_token1,
    STATE(78), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(221), 19,
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
  [2661] = 3,
    ACTIONS(228), 1,
      aux_sym_relation_elements_token1,
    STATE(78), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(226), 19,
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
  [2689] = 1,
    ACTIONS(230), 21,
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
  [2713] = 1,
    ACTIONS(221), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2737] = 1,
    ACTIONS(99), 21,
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
  [2761] = 1,
    ACTIONS(232), 21,
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
  [2785] = 6,
    ACTIONS(166), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(170), 1,
      aux_sym_order_spec_token1,
    ACTIONS(178), 1,
      aux_sym_select_statement_token4,
    STATE(121), 1,
      sym_order_spec,
    STATE(219), 1,
      sym_limit_spec,
    ACTIONS(176), 16,
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
  [2819] = 1,
    ACTIONS(234), 21,
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
  [2843] = 3,
    STATE(173), 1,
      sym_order_direction,
    ACTIONS(238), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(236), 18,
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
  [2871] = 6,
    ACTIONS(166), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(170), 1,
      aux_sym_order_spec_token1,
    ACTIONS(242), 1,
      aux_sym_select_statement_token4,
    STATE(135), 1,
      sym_order_spec,
    STATE(226), 1,
      sym_limit_spec,
    ACTIONS(240), 16,
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
  [2905] = 3,
    ACTIONS(244), 1,
      sym__hex_digit,
    STATE(88), 1,
      aux_sym_hexadecimal_literal_repeat2,
    ACTIONS(214), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2933] = 3,
    ACTIONS(247), 1,
      sym__hex_digit,
    STATE(88), 1,
      aux_sym_hexadecimal_literal_repeat2,
    ACTIONS(196), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2961] = 1,
    ACTIONS(249), 21,
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
  [2985] = 1,
    ACTIONS(251), 21,
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
  [3009] = 6,
    ACTIONS(166), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(170), 1,
      aux_sym_order_spec_token1,
    ACTIONS(174), 1,
      aux_sym_select_statement_token4,
    STATE(131), 1,
      sym_order_spec,
    STATE(206), 1,
      sym_limit_spec,
    ACTIONS(172), 16,
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
  [3043] = 3,
    ACTIONS(228), 1,
      aux_sym_relation_elements_token1,
    STATE(79), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(253), 19,
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
  [3071] = 5,
    ACTIONS(257), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(259), 1,
      aux_sym_if_exist_token1,
    STATE(151), 1,
      sym_if_not_exist,
    STATE(325), 1,
      sym_using_ttl_timestamp,
    ACTIONS(255), 16,
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
  [3102] = 5,
    ACTIONS(257), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(259), 1,
      aux_sym_if_exist_token1,
    STATE(150), 1,
      sym_if_not_exist,
    STATE(380), 1,
      sym_using_ttl_timestamp,
    ACTIONS(261), 16,
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
  [3133] = 1,
    ACTIONS(263), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3156] = 14,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      aux_sym_constant_token1,
    ACTIONS(269), 1,
      sym_object_name,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(896), 1,
      sym_constant,
    ACTIONS(140), 2,
      sym_uuid,
      sym_string_literal,
    ACTIONS(267), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
    STATE(582), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [3205] = 5,
    ACTIONS(257), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(259), 1,
      aux_sym_if_exist_token1,
    STATE(185), 1,
      sym_if_not_exist,
    STATE(277), 1,
      sym_using_ttl_timestamp,
    ACTIONS(271), 16,
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
  [3236] = 5,
    ACTIONS(257), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(259), 1,
      aux_sym_if_exist_token1,
    STATE(153), 1,
      sym_if_not_exist,
    STATE(362), 1,
      sym_using_ttl_timestamp,
    ACTIONS(273), 16,
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
  [3267] = 5,
    ACTIONS(257), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(259), 1,
      aux_sym_if_exist_token1,
    STATE(160), 1,
      sym_if_not_exist,
    STATE(268), 1,
      sym_using_ttl_timestamp,
    ACTIONS(275), 16,
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
  [3298] = 2,
    ACTIONS(279), 1,
      aux_sym_relation_element_token1,
    ACTIONS(277), 19,
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
  [3323] = 1,
    ACTIONS(103), 20,
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
  [3346] = 2,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(281), 19,
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
  [3371] = 1,
    ACTIONS(283), 19,
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
  [3393] = 3,
    ACTIONS(285), 1,
      aux_sym_relation_elements_token1,
    STATE(107), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(253), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3419] = 3,
    ACTIONS(289), 1,
      aux_sym_if_exist_token1,
    STATE(350), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(287), 16,
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
  [3445] = 3,
    ACTIONS(285), 1,
      aux_sym_relation_elements_token1,
    STATE(141), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(226), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3471] = 1,
    ACTIONS(291), 19,
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
  [3493] = 4,
    ACTIONS(166), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(178), 1,
      aux_sym_select_statement_token4,
    STATE(219), 1,
      sym_limit_spec,
    ACTIONS(176), 16,
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
  [3521] = 3,
    ACTIONS(289), 1,
      aux_sym_if_exist_token1,
    STATE(275), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(293), 16,
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
  [3547] = 3,
    ACTIONS(297), 1,
      aux_sym_relation_elements_token1,
    STATE(111), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(295), 17,
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
  [3573] = 11,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(295), 1,
      sym_init_cond_definition,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
    STATE(159), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [3615] = 2,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(304), 18,
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
  [3639] = 3,
    ACTIONS(289), 1,
      aux_sym_if_exist_token1,
    STATE(355), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(306), 16,
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
  [3665] = 1,
    ACTIONS(308), 19,
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
  [3687] = 1,
    ACTIONS(281), 19,
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
  [3709] = 11,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(854), 1,
      sym_init_cond_definition,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
    STATE(159), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [3751] = 3,
    STATE(253), 1,
      sym_user_super_user,
    ACTIONS(312), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(310), 16,
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
  [3777] = 3,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(314), 17,
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
  [3803] = 3,
    ACTIONS(289), 1,
      aux_sym_if_exist_token1,
    STATE(260), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(319), 16,
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
  [3829] = 4,
    ACTIONS(166), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(174), 1,
      aux_sym_select_statement_token4,
    STATE(206), 1,
      sym_limit_spec,
    ACTIONS(172), 16,
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
  [3857] = 1,
    ACTIONS(314), 19,
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
  [3879] = 3,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_type_member_column_list_repeat1,
    ACTIONS(321), 17,
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
  [3905] = 1,
    ACTIONS(277), 19,
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
  [3927] = 3,
    ACTIONS(289), 1,
      aux_sym_if_exist_token1,
    STATE(374), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(326), 16,
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
  [3953] = 1,
    ACTIONS(328), 19,
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
  [3975] = 14,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    ACTIONS(265), 1,
      aux_sym_constant_token1,
    ACTIONS(330), 1,
      anon_sym_STAR,
    ACTIONS(332), 1,
      sym_object_name,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(1014), 1,
      sym_function_args,
    STATE(1174), 1,
      sym_function_name,
    ACTIONS(140), 2,
      sym_uuid,
      sym_string_literal,
    ACTIONS(267), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    STATE(743), 2,
      sym_function_call,
      sym_constant,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [4023] = 3,
    ACTIONS(336), 1,
      aux_sym_relation_elements_token1,
    STATE(145), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(334), 17,
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
  [4049] = 3,
    STATE(270), 1,
      sym_user_super_user,
    ACTIONS(312), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(338), 16,
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
  [4075] = 2,
    ACTIONS(342), 1,
      aux_sym_priviledge_token2,
    ACTIONS(340), 18,
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
  [4099] = 4,
    ACTIONS(166), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(242), 1,
      aux_sym_select_statement_token4,
    STATE(226), 1,
      sym_limit_spec,
    ACTIONS(240), 16,
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
  [4127] = 3,
    ACTIONS(289), 1,
      aux_sym_if_exist_token1,
    STATE(379), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(344), 16,
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
  [4153] = 3,
    ACTIONS(289), 1,
      aux_sym_if_exist_token1,
    STATE(388), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(346), 16,
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
  [4179] = 1,
    ACTIONS(348), 19,
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
  [4201] = 4,
    ACTIONS(166), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(352), 1,
      aux_sym_select_statement_token4,
    STATE(207), 1,
      sym_limit_spec,
    ACTIONS(350), 16,
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
  [4229] = 11,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(314), 1,
      sym_init_cond_definition,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
    STATE(159), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [4271] = 1,
    ACTIONS(354), 19,
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
  [4293] = 3,
    ACTIONS(289), 1,
      aux_sym_if_exist_token1,
    STATE(321), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(356), 16,
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
  [4319] = 11,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(322), 1,
      sym_init_cond_definition,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
    STATE(159), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [4361] = 1,
    ACTIONS(358), 19,
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
  [4383] = 3,
    ACTIONS(360), 1,
      aux_sym_relation_elements_token1,
    STATE(141), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(221), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4409] = 11,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(338), 1,
      sym_init_cond_definition,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
    STATE(159), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [4451] = 3,
    ACTIONS(289), 1,
      aux_sym_if_exist_token1,
    STATE(383), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(363), 16,
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
  [4477] = 11,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(329), 1,
      sym_init_cond_definition,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
    STATE(159), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
  [4519] = 3,
    ACTIONS(336), 1,
      aux_sym_relation_elements_token1,
    STATE(111), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(365), 17,
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
  [4545] = 3,
    STATE(301), 1,
      sym_user_super_user,
    ACTIONS(312), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(367), 16,
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
  [4571] = 1,
    ACTIONS(369), 19,
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
  [4593] = 3,
    ACTIONS(289), 1,
      aux_sym_if_exist_token1,
    STATE(308), 2,
      sym_if_exist,
      sym_if_spec,
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
  [4619] = 15,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    ACTIONS(265), 1,
      aux_sym_constant_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_object_name,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(721), 1,
      sym_init_cond_hash_item,
    STATE(722), 1,
      sym_init_cond_list,
    STATE(724), 1,
      sym_constant,
    STATE(1140), 1,
      sym_hash_key,
    ACTIONS(140), 2,
      sym_uuid,
      sym_string_literal,
    ACTIONS(267), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [4669] = 3,
    ACTIONS(257), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(268), 1,
      sym_using_ttl_timestamp,
    ACTIONS(275), 16,
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
  [4694] = 3,
    ACTIONS(257), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(362), 1,
      sym_using_ttl_timestamp,
    ACTIONS(273), 16,
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
  [4719] = 3,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(377), 16,
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
  [4744] = 3,
    ACTIONS(257), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(384), 1,
      sym_using_ttl_timestamp,
    ACTIONS(381), 16,
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
  [4769] = 1,
    ACTIONS(383), 18,
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
  [4790] = 3,
    ACTIONS(387), 1,
      aux_sym_create_materialized_view_token2,
    STATE(371), 1,
      sym_role_with,
    ACTIONS(385), 16,
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
  [4815] = 1,
    ACTIONS(304), 18,
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
  [4836] = 3,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_role_with_repeat1,
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
  [4861] = 3,
    ACTIONS(395), 1,
      aux_sym_create_materialized_view_token2,
    STATE(278), 1,
      sym_with_element,
    ACTIONS(393), 16,
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
  [4886] = 1,
    ACTIONS(397), 18,
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
  [4907] = 3,
    ACTIONS(257), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(277), 1,
      sym_using_ttl_timestamp,
    ACTIONS(271), 16,
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
  [4932] = 1,
    ACTIONS(399), 18,
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
  [4953] = 3,
    ACTIONS(403), 1,
      aux_sym_relation_elements_token1,
    STATE(180), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(401), 16,
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
  [4978] = 2,
    ACTIONS(407), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(405), 17,
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
  [5001] = 2,
    ACTIONS(409), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(405), 17,
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
  [5024] = 3,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_type_member_column_list_repeat1,
    ACTIONS(411), 16,
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
  [5049] = 13,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    ACTIONS(265), 1,
      aux_sym_constant_token1,
    ACTIONS(332), 1,
      sym_object_name,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(1170), 1,
      sym_function_args,
    STATE(1174), 1,
      sym_function_name,
    ACTIONS(140), 2,
      sym_uuid,
      sym_string_literal,
    ACTIONS(267), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    STATE(743), 2,
      sym_function_call,
      sym_constant,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [5094] = 1,
    ACTIONS(340), 18,
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
  [5115] = 3,
    ACTIONS(417), 1,
      aux_sym_relation_elements_token1,
    STATE(195), 1,
      aux_sym_alter_type_rename_list_repeat1,
    ACTIONS(415), 16,
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
  [5140] = 1,
    ACTIONS(419), 18,
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
  [5161] = 1,
    ACTIONS(421), 18,
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
  [5182] = 3,
    ACTIONS(395), 1,
      aux_sym_create_materialized_view_token2,
    STATE(376), 1,
      sym_with_element,
    ACTIONS(423), 16,
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
  [5207] = 3,
    ACTIONS(427), 1,
      aux_sym_list_roles_token2,
    ACTIONS(429), 1,
      aux_sym_list_roles_token3,
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
  [5232] = 1,
    ACTIONS(431), 18,
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
  [5253] = 3,
    ACTIONS(435), 1,
      aux_sym_create_index_token3,
    ACTIONS(437), 1,
      aux_sym_list_roles_token2,
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
  [5278] = 3,
    ACTIONS(441), 1,
      aux_sym_clustering_order_token1,
    STATE(367), 1,
      sym_clustering_order,
    ACTIONS(439), 16,
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
  [5303] = 3,
    ACTIONS(395), 1,
      aux_sym_create_materialized_view_token2,
    STATE(364), 1,
      sym_with_element,
    ACTIONS(443), 16,
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
  [5328] = 3,
    ACTIONS(417), 1,
      aux_sym_relation_elements_token1,
    STATE(168), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [5353] = 1,
    ACTIONS(447), 18,
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
  [5374] = 1,
    ACTIONS(449), 18,
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
  [5395] = 3,
    ACTIONS(453), 1,
      aux_sym_relation_elements_token1,
    STATE(180), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(451), 16,
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
  [5420] = 1,
    ACTIONS(456), 18,
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
  [5441] = 3,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(458), 16,
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
  [5466] = 2,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(460), 17,
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
  [5489] = 3,
    ACTIONS(387), 1,
      aux_sym_create_materialized_view_token2,
    STATE(266), 1,
      sym_role_with,
    ACTIONS(462), 16,
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
  [5514] = 3,
    ACTIONS(257), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(325), 1,
      sym_using_ttl_timestamp,
    ACTIONS(255), 16,
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
  [5539] = 3,
    ACTIONS(387), 1,
      aux_sym_create_materialized_view_token2,
    STATE(339), 1,
      sym_role_with,
    ACTIONS(464), 16,
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
  [5564] = 1,
    ACTIONS(466), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5585] = 1,
    ACTIONS(468), 18,
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
  [5606] = 3,
    ACTIONS(395), 1,
      aux_sym_create_materialized_view_token2,
    STATE(332), 1,
      sym_with_element,
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
  [5631] = 3,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      aux_sym_type_member_column_list_repeat1,
    ACTIONS(472), 16,
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
  [5656] = 2,
    STATE(111), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(365), 17,
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
  [5679] = 2,
    STATE(191), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(334), 17,
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
  [5702] = 1,
    ACTIONS(474), 18,
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
  [5723] = 1,
    ACTIONS(476), 18,
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
  [5744] = 3,
    ACTIONS(480), 1,
      aux_sym_relation_elements_token1,
    STATE(195), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [5769] = 3,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(483), 16,
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
  [5794] = 1,
    ACTIONS(485), 18,
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
  [5815] = 3,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_type_member_column_list_repeat1,
    ACTIONS(487), 16,
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
  [5840] = 3,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_type_member_column_list_repeat1,
    ACTIONS(489), 16,
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
  [5865] = 1,
    ACTIONS(491), 18,
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
  [5886] = 3,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(493), 16,
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
  [5911] = 1,
    ACTIONS(295), 18,
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
  [5932] = 3,
    ACTIONS(403), 1,
      aux_sym_relation_elements_token1,
    STATE(162), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(498), 16,
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
  [5957] = 1,
    ACTIONS(500), 18,
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
  [5978] = 1,
    ACTIONS(502), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5999] = 2,
    ACTIONS(242), 1,
      aux_sym_select_statement_token4,
    ACTIONS(240), 16,
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
  [6021] = 2,
    ACTIONS(506), 1,
      aux_sym_select_statement_token4,
    ACTIONS(504), 16,
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
  [6043] = 2,
    ACTIONS(178), 1,
      aux_sym_select_statement_token4,
    ACTIONS(176), 16,
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
  [6065] = 1,
    ACTIONS(493), 17,
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
  [6085] = 2,
    ACTIONS(510), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(508), 16,
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
  [6107] = 2,
    ACTIONS(514), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(512), 16,
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
  [6129] = 2,
    ACTIONS(518), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(516), 16,
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
  [6151] = 1,
    ACTIONS(520), 17,
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
  [6171] = 1,
    ACTIONS(478), 17,
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
  [6191] = 12,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(265), 1,
      aux_sym_constant_token1,
    ACTIONS(302), 1,
      anon_sym_0X,
    ACTIONS(522), 1,
      sym_object_name,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(1174), 1,
      sym_function_name,
    ACTIONS(140), 2,
      sym_uuid,
      sym_string_literal,
    ACTIONS(267), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    STATE(71), 2,
      sym_function_call,
      sym_constant,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [6233] = 1,
    ACTIONS(460), 17,
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
  [6253] = 2,
    ACTIONS(526), 1,
      aux_sym_create_materialized_view_token2,
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
  [6275] = 12,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    ACTIONS(265), 1,
      aux_sym_constant_token1,
    ACTIONS(528), 1,
      sym_object_name,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(1174), 1,
      sym_function_name,
    ACTIONS(140), 2,
      sym_uuid,
      sym_string_literal,
    ACTIONS(267), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    STATE(814), 2,
      sym_function_call,
      sym_constant,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [6317] = 2,
    ACTIONS(174), 1,
      aux_sym_select_statement_token4,
    ACTIONS(172), 16,
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
  [6339] = 1,
    ACTIONS(530), 17,
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
  [6359] = 1,
    ACTIONS(532), 17,
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
  [6379] = 1,
    ACTIONS(534), 17,
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
  [6399] = 1,
    ACTIONS(451), 17,
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
  [6419] = 2,
    ACTIONS(538), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(536), 16,
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
  [6441] = 2,
    ACTIONS(542), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(540), 16,
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
  [6463] = 2,
    ACTIONS(352), 1,
      aux_sym_select_statement_token4,
    ACTIONS(350), 16,
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
  [6485] = 2,
    ACTIONS(103), 1,
      anon_sym_DOT,
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
  [6507] = 1,
    ACTIONS(546), 17,
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
  [6527] = 12,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    ACTIONS(265), 1,
      aux_sym_constant_token1,
    ACTIONS(522), 1,
      sym_object_name,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(1174), 1,
      sym_function_name,
    ACTIONS(140), 2,
      sym_uuid,
      sym_string_literal,
    ACTIONS(267), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    STATE(71), 2,
      sym_function_call,
      sym_constant,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [6569] = 2,
    ACTIONS(550), 1,
      aux_sym_list_roles_token2,
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
  [6591] = 2,
    ACTIONS(554), 1,
      aux_sym_list_roles_token3,
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
  [6613] = 2,
    ACTIONS(558), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(556), 16,
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
  [6635] = 1,
    ACTIONS(560), 17,
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
  [6655] = 2,
    ACTIONS(564), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(562), 16,
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
  [6677] = 2,
    ACTIONS(568), 1,
      aux_sym_relation_elements_token1,
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
  [6699] = 1,
    ACTIONS(544), 17,
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
  [6719] = 2,
    ACTIONS(572), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(570), 16,
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
  [6741] = 2,
    ACTIONS(576), 1,
      aux_sym_relation_elements_token1,
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
  [6763] = 12,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(265), 1,
      aux_sym_constant_token1,
    ACTIONS(522), 1,
      sym_object_name,
    ACTIONS(578), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(1174), 1,
      sym_function_name,
    ACTIONS(140), 2,
      sym_uuid,
      sym_string_literal,
    ACTIONS(267), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    STATE(71), 2,
      sym_function_call,
      sym_constant,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [6805] = 2,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(532), 16,
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
  [6827] = 2,
    ACTIONS(582), 1,
      aux_sym_create_materialized_view_token2,
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
  [6849] = 1,
    ACTIONS(584), 17,
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
  [6869] = 1,
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
  [6888] = 1,
    ACTIONS(588), 16,
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
  [6907] = 1,
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
  [6926] = 1,
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
  [6945] = 1,
    ACTIONS(594), 16,
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
  [6964] = 1,
    ACTIONS(596), 16,
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
  [6983] = 1,
    ACTIONS(598), 16,
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
  [7002] = 1,
    ACTIONS(600), 16,
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
  [7021] = 1,
    ACTIONS(602), 16,
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
  [7040] = 1,
    ACTIONS(604), 16,
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
  [7059] = 1,
    ACTIONS(367), 16,
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
  [7078] = 1,
    ACTIONS(606), 16,
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
  [7097] = 1,
    ACTIONS(608), 16,
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
  [7116] = 1,
    ACTIONS(610), 16,
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
  [7135] = 1,
    ACTIONS(612), 16,
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
  [7154] = 1,
    ACTIONS(614), 16,
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
  [7173] = 1,
    ACTIONS(616), 16,
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
  [7192] = 1,
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
  [7211] = 1,
    ACTIONS(618), 16,
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
  [7230] = 1,
    ACTIONS(620), 16,
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
  [7249] = 1,
    ACTIONS(622), 16,
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
  [7268] = 1,
    ACTIONS(570), 16,
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
  [7287] = 1,
    ACTIONS(624), 16,
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
  [7306] = 1,
    ACTIONS(385), 16,
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
  [7325] = 1,
    ACTIONS(626), 16,
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
  [7344] = 1,
    ACTIONS(271), 16,
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
  [7363] = 1,
    ACTIONS(628), 16,
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
  [7382] = 1,
    ACTIONS(630), 16,
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
  [7401] = 1,
    ACTIONS(632), 16,
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
  [7420] = 1,
    ACTIONS(634), 16,
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
  [7439] = 1,
    ACTIONS(350), 16,
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
  [7458] = 1,
    ACTIONS(636), 16,
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
  [7477] = 1,
    ACTIONS(356), 16,
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
  [7496] = 1,
    ACTIONS(638), 16,
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
  [7515] = 1,
    ACTIONS(255), 16,
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
  [7534] = 1,
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
  [7553] = 2,
    ACTIONS(642), 1,
      anon_sym_SEMI,
    ACTIONS(640), 15,
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
  [7574] = 1,
    ACTIONS(644), 16,
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
  [7593] = 1,
    ACTIONS(646), 16,
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
  [7612] = 1,
    ACTIONS(648), 16,
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
  [7631] = 1,
    ACTIONS(650), 16,
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
  [7650] = 1,
    ACTIONS(516), 16,
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
  [7669] = 1,
    ACTIONS(240), 16,
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
  [7688] = 1,
    ACTIONS(652), 16,
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
  [7707] = 1,
    ACTIONS(654), 16,
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
  [7726] = 1,
    ACTIONS(656), 16,
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
  [7745] = 1,
    ACTIONS(658), 16,
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
  [7764] = 1,
    ACTIONS(660), 16,
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
  [7783] = 1,
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
  [7802] = 1,
    ACTIONS(662), 16,
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
  [7821] = 1,
    ACTIONS(664), 16,
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
  [7840] = 1,
    ACTIONS(666), 16,
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
  [7859] = 1,
    ACTIONS(668), 16,
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
  [7878] = 1,
    ACTIONS(670), 16,
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
  [7897] = 1,
    ACTIONS(672), 16,
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
  [7916] = 1,
    ACTIONS(674), 16,
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
  [7935] = 1,
    ACTIONS(540), 16,
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
  [7954] = 1,
    ACTIONS(676), 16,
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
  [7973] = 1,
    ACTIONS(678), 16,
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
  [7992] = 1,
    ACTIONS(680), 16,
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
  [8011] = 1,
    ACTIONS(682), 16,
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
  [8030] = 1,
    ACTIONS(684), 16,
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
  [8049] = 1,
    ACTIONS(686), 16,
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
  [8068] = 1,
    ACTIONS(508), 16,
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
  [8087] = 1,
    ACTIONS(688), 16,
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
  [8106] = 1,
    ACTIONS(306), 16,
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
  [8125] = 1,
    ACTIONS(512), 16,
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
  [8144] = 1,
    ACTIONS(690), 16,
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
  [8163] = 1,
    ACTIONS(692), 16,
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
  [8182] = 1,
    ACTIONS(694), 16,
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
  [8201] = 1,
    ACTIONS(696), 16,
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
  [8220] = 1,
    ACTIONS(698), 16,
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
  [8239] = 1,
    ACTIONS(700), 16,
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
  [8258] = 1,
    ACTIONS(702), 16,
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
  [8277] = 1,
    ACTIONS(704), 16,
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
  [8296] = 1,
    ACTIONS(706), 16,
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
  [8315] = 10,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_decimal_literal,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    STATE(846), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [8352] = 1,
    ACTIONS(708), 16,
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
  [8371] = 1,
    ACTIONS(710), 16,
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
  [8390] = 1,
    ACTIONS(712), 16,
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
  [8409] = 1,
    ACTIONS(504), 16,
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
  [8428] = 1,
    ACTIONS(714), 16,
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
  [8447] = 1,
    ACTIONS(273), 16,
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
  [8466] = 11,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(49), 1,
      sym_assignment_tuple,
    STATE(583), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [8505] = 1,
    ACTIONS(439), 16,
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
  [8524] = 1,
    ACTIONS(716), 16,
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
  [8543] = 1,
    ACTIONS(718), 16,
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
  [8562] = 1,
    ACTIONS(720), 16,
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
  [8581] = 1,
    ACTIONS(722), 16,
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
  [8600] = 1,
    ACTIONS(443), 16,
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
  [8619] = 1,
    ACTIONS(724), 16,
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
  [8638] = 1,
    ACTIONS(726), 16,
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
  [8657] = 1,
    ACTIONS(728), 16,
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
  [8676] = 1,
    ACTIONS(730), 16,
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
  [8695] = 1,
    ACTIONS(732), 16,
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
  [8714] = 1,
    ACTIONS(734), 16,
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
  [8733] = 1,
    ACTIONS(736), 16,
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
  [8752] = 1,
    ACTIONS(738), 16,
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
  [8771] = 1,
    ACTIONS(740), 16,
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
  [8790] = 1,
    ACTIONS(742), 16,
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
  [8809] = 1,
    ACTIONS(744), 16,
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
  [8828] = 1,
    ACTIONS(746), 16,
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
  [8847] = 1,
    ACTIONS(748), 16,
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
  [8866] = 1,
    ACTIONS(750), 16,
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
  [8885] = 1,
    ACTIONS(752), 16,
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
  [8904] = 1,
    ACTIONS(754), 16,
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
  [8923] = 1,
    ACTIONS(756), 16,
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
  [8942] = 1,
    ACTIONS(346), 16,
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
  [8961] = 1,
    ACTIONS(758), 16,
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
  [8980] = 1,
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
  [8999] = 1,
    ACTIONS(760), 16,
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
  [9018] = 1,
    ACTIONS(762), 16,
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
  [9037] = 1,
    ACTIONS(326), 16,
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
  [9056] = 1,
    ACTIONS(764), 16,
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
  [9075] = 1,
    ACTIONS(766), 16,
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
  [9094] = 1,
    ACTIONS(768), 16,
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
  [9113] = 1,
    ACTIONS(770), 16,
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
  [9132] = 1,
    ACTIONS(772), 16,
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
  [9151] = 1,
    ACTIONS(774), 16,
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
  [9170] = 1,
    ACTIONS(381), 16,
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
  [9189] = 1,
    ACTIONS(172), 16,
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
  [9208] = 1,
    ACTIONS(423), 16,
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
  [9227] = 1,
    ACTIONS(776), 16,
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
  [9246] = 1,
    ACTIONS(778), 16,
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
  [9265] = 1,
    ACTIONS(780), 16,
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
  [9284] = 1,
    ACTIONS(782), 16,
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
  [9303] = 1,
    ACTIONS(784), 16,
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
  [9322] = 1,
    ACTIONS(786), 16,
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
  [9341] = 1,
    ACTIONS(788), 16,
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
  [9360] = 1,
    ACTIONS(790), 16,
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
  [9379] = 1,
    ACTIONS(792), 16,
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
  [9398] = 1,
    ACTIONS(363), 16,
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
  [9417] = 1,
    ACTIONS(794), 16,
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
  [9436] = 1,
    ACTIONS(796), 16,
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
  [9455] = 1,
    ACTIONS(798), 16,
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
  [9474] = 1,
    ACTIONS(800), 16,
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
  [9493] = 1,
    ACTIONS(802), 16,
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
  [9512] = 1,
    ACTIONS(275), 16,
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
  [9531] = 1,
    ACTIONS(804), 16,
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
  [9550] = 1,
    ACTIONS(806), 16,
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
  [9569] = 1,
    ACTIONS(344), 16,
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
  [9588] = 1,
    ACTIONS(808), 16,
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
  [9607] = 1,
    ACTIONS(810), 16,
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
  [9626] = 1,
    ACTIONS(812), 16,
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
  [9645] = 1,
    ACTIONS(814), 16,
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
  [9664] = 1,
    ACTIONS(293), 16,
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
  [9683] = 10,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_0X,
    ACTIONS(816), 1,
      aux_sym_relation_contains_key_token2,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(74), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [9719] = 10,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    ACTIONS(818), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(536), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [9755] = 10,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    ACTIONS(820), 1,
      aux_sym_relation_contains_key_token2,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(74), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [9791] = 1,
    ACTIONS(822), 15,
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
  [9809] = 10,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(578), 1,
      anon_sym_0X,
    ACTIONS(824), 1,
      aux_sym_relation_contains_key_token2,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(74), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [9845] = 9,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(62), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [9878] = 9,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(476), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [9911] = 9,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(71), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [9944] = 9,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(578), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(71), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [9977] = 9,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(71), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [10010] = 9,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(648), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [10043] = 9,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(908), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [10076] = 9,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(583), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [10109] = 9,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(779), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [10142] = 9,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(724), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [10175] = 9,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(70), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [10208] = 9,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(1003), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [10241] = 9,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(205), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [10274] = 9,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(62), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [10307] = 9,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(233), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [10340] = 9,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(701), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [10373] = 9,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(578), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(62), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [10406] = 9,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(578), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(70), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [10439] = 9,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(146), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_0X,
    STATE(7), 1,
      sym_decimal_literal,
    STATE(70), 1,
      sym_constant,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(140), 3,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
    STATE(9), 3,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
  [10472] = 12,
    ACTIONS(826), 1,
      aux_sym_truncate_token2,
    ACTIONS(828), 1,
      aux_sym_create_index_token2,
    ACTIONS(830), 1,
      aux_sym_resource_token2,
    ACTIONS(832), 1,
      aux_sym_resource_token3,
    ACTIONS(834), 1,
      aux_sym_resource_token6,
    ACTIONS(836), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(838), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(840), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(842), 1,
      aux_sym_drop_type_token1,
    ACTIONS(844), 1,
      aux_sym_drop_user_token1,
    ACTIONS(846), 1,
      aux_sym_or_replace_token1,
    STATE(870), 1,
      sym_or_replace,
  [10509] = 4,
    ACTIONS(850), 1,
      aux_sym_priviledge_token1,
    ACTIONS(852), 1,
      aux_sym_resource_token5,
    STATE(174), 1,
      sym_priviledge,
    ACTIONS(848), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10529] = 10,
    ACTIONS(854), 1,
      aux_sym_truncate_token2,
    ACTIONS(856), 1,
      aux_sym_create_index_token2,
    ACTIONS(858), 1,
      aux_sym_resource_token2,
    ACTIONS(860), 1,
      aux_sym_resource_token3,
    ACTIONS(862), 1,
      aux_sym_resource_token6,
    ACTIONS(864), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(866), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(868), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(870), 1,
      aux_sym_drop_type_token1,
    ACTIONS(872), 1,
      aux_sym_drop_user_token1,
  [10560] = 10,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    ACTIONS(878), 1,
      aux_sym_truncate_token2,
    ACTIONS(880), 1,
      aux_sym_priviledge_token1,
    ACTIONS(882), 1,
      aux_sym_resource_token2,
    ACTIONS(884), 1,
      aux_sym_resource_token3,
    ACTIONS(886), 1,
      aux_sym_resource_token6,
    STATE(137), 1,
      sym_table,
    STATE(1134), 1,
      sym_resource,
    STATE(1142), 1,
      sym_keyspace,
  [10591] = 6,
    ACTIONS(888), 1,
      aux_sym_drop_index_token1,
    ACTIONS(890), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(892), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(894), 1,
      aux_sym_alter_table_rename_token1,
    STATE(262), 1,
      sym_alter_table_operation,
    STATE(337), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10614] = 3,
    ACTIONS(896), 1,
      sym__hex_digit,
    STATE(418), 1,
      aux_sym_hexadecimal_literal_repeat2,
    ACTIONS(214), 8,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_create_materialized_view_token1,
  [10631] = 3,
    ACTIONS(850), 1,
      aux_sym_priviledge_token1,
    STATE(946), 1,
      sym_priviledge,
    ACTIONS(848), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10648] = 6,
    ACTIONS(899), 1,
      anon_sym_DOT,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    ACTIONS(907), 1,
      aux_sym_relation_element_token1,
    ACTIONS(909), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(903), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(905), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10671] = 6,
    ACTIONS(888), 1,
      aux_sym_drop_index_token1,
    ACTIONS(890), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(892), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(894), 1,
      aux_sym_alter_table_rename_token1,
    STATE(336), 1,
      sym_alter_table_operation,
    STATE(337), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10694] = 6,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    ACTIONS(907), 1,
      aux_sym_relation_element_token1,
    ACTIONS(911), 1,
      anon_sym_DOT,
    ACTIONS(917), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(913), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(915), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10717] = 7,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    ACTIONS(923), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(925), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(927), 1,
      aux_sym_index_full_spec_token1,
    STATE(1137), 1,
      sym_index_column_spec,
    STATE(1202), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10742] = 7,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    ACTIONS(923), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(925), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(927), 1,
      aux_sym_index_full_spec_token1,
    STATE(940), 1,
      sym_index_column_spec,
    STATE(1202), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10767] = 3,
    ACTIONS(929), 1,
      sym__hex_digit,
    STATE(418), 1,
      aux_sym_hexadecimal_literal_repeat2,
    ACTIONS(196), 8,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      aux_sym_create_materialized_view_token1,
  [10784] = 7,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    ACTIONS(923), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(925), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(927), 1,
      aux_sym_index_full_spec_token1,
    STATE(1204), 1,
      sym_index_column_spec,
    STATE(1202), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10809] = 3,
    ACTIONS(850), 1,
      aux_sym_priviledge_token1,
    STATE(950), 1,
      sym_priviledge,
    ACTIONS(848), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10826] = 7,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    ACTIONS(923), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(925), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(927), 1,
      aux_sym_index_full_spec_token1,
    STATE(965), 1,
      sym_index_column_spec,
    STATE(1202), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10851] = 6,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    ACTIONS(907), 1,
      aux_sym_relation_element_token1,
    ACTIONS(931), 1,
      anon_sym_DOT,
    ACTIONS(937), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(933), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(935), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10874] = 10,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    ACTIONS(878), 1,
      aux_sym_truncate_token2,
    ACTIONS(880), 1,
      aux_sym_priviledge_token1,
    ACTIONS(882), 1,
      aux_sym_resource_token2,
    ACTIONS(884), 1,
      aux_sym_resource_token3,
    ACTIONS(886), 1,
      aux_sym_resource_token6,
    STATE(137), 1,
      sym_table,
    STATE(1104), 1,
      sym_resource,
    STATE(1142), 1,
      sym_keyspace,
  [10905] = 10,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    ACTIONS(878), 1,
      aux_sym_truncate_token2,
    ACTIONS(880), 1,
      aux_sym_priviledge_token1,
    ACTIONS(882), 1,
      aux_sym_resource_token2,
    ACTIONS(884), 1,
      aux_sym_resource_token3,
    ACTIONS(886), 1,
      aux_sym_resource_token6,
    STATE(137), 1,
      sym_table,
    STATE(230), 1,
      sym_resource,
    STATE(1142), 1,
      sym_keyspace,
  [10936] = 7,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    ACTIONS(923), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(925), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(927), 1,
      aux_sym_index_full_spec_token1,
    STATE(1037), 1,
      sym_index_column_spec,
    STATE(1202), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10961] = 7,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    ACTIONS(939), 1,
      anon_sym_LPAREN,
    STATE(916), 1,
      sym_column,
    STATE(960), 1,
      sym_primary_key_definition,
    STATE(962), 1,
      sym_partition_key,
    STATE(961), 3,
      sym_single_primary_key,
      sym_compound_key,
      sym_composite_key,
  [10985] = 8,
    ACTIONS(941), 1,
      aux_sym_select_statement_token2,
    ACTIONS(943), 1,
      aux_sym_select_statement_token3,
    ACTIONS(945), 1,
      anon_sym_STAR,
    ACTIONS(947), 1,
      sym_object_name,
    STATE(659), 1,
      sym_select_element,
    STATE(676), 1,
      sym_function_call,
    STATE(861), 1,
      sym_select_elements,
    STATE(1174), 1,
      sym_function_name,
  [11010] = 7,
    ACTIONS(949), 1,
      anon_sym_LPAREN,
    ACTIONS(951), 1,
      sym_object_name,
    STATE(96), 1,
      sym_relation_elements,
    STATE(105), 1,
      sym_relation_element,
    STATE(471), 1,
      sym_function_call,
    STATE(1174), 1,
      sym_function_name,
    STATE(73), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11033] = 5,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    ACTIONS(953), 1,
      aux_sym_decimal_literal_token1,
    STATE(872), 4,
      sym_decimal_literal,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [11052] = 7,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(953), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(955), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 1,
      sym_string_literal,
    STATE(204), 1,
      sym_float_literal,
    STATE(1077), 1,
      sym_decimal_literal,
    STATE(200), 2,
      sym_option_hash,
      sym_table_option_value,
  [11075] = 7,
    ACTIONS(949), 1,
      anon_sym_LPAREN,
    ACTIONS(959), 1,
      sym_object_name,
    STATE(93), 1,
      sym_relation_element,
    STATE(96), 1,
      sym_relation_elements,
    STATE(469), 1,
      sym_function_call,
    STATE(1174), 1,
      sym_function_name,
    STATE(73), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11098] = 5,
    ACTIONS(961), 1,
      aux_sym_priviledge_token3,
    ACTIONS(963), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(965), 1,
      aux_sym_alter_table_rename_token1,
    STATE(346), 1,
      sym_alter_type_operation,
    STATE(347), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [11116] = 3,
    ACTIONS(971), 1,
      aux_sym_relation_element_token1,
    ACTIONS(967), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(969), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11130] = 6,
    ACTIONS(949), 1,
      anon_sym_LPAREN,
    ACTIONS(973), 1,
      sym_object_name,
    STATE(473), 1,
      sym_function_call,
    STATE(1099), 1,
      sym_relation_element,
    STATE(1174), 1,
      sym_function_name,
    STATE(73), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11150] = 6,
    ACTIONS(949), 1,
      anon_sym_LPAREN,
    ACTIONS(951), 1,
      sym_object_name,
    STATE(81), 1,
      sym_relation_element,
    STATE(471), 1,
      sym_function_call,
    STATE(1174), 1,
      sym_function_name,
    STATE(73), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11170] = 3,
    ACTIONS(979), 1,
      aux_sym_relation_element_token1,
    ACTIONS(975), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(977), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11184] = 7,
    ACTIONS(186), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(981), 1,
      sym_object_name,
    STATE(192), 1,
      sym_table_option_item,
    STATE(210), 1,
      sym_table_options,
    STATE(306), 1,
      sym_clustering_order,
    STATE(309), 1,
      sym_materialized_view_options,
    STATE(1065), 1,
      sym_table_option_name,
  [11206] = 7,
    ACTIONS(186), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(981), 1,
      sym_object_name,
    STATE(192), 1,
      sym_table_option_item,
    STATE(210), 1,
      sym_table_options,
    STATE(299), 1,
      sym_materialized_view_options,
    STATE(306), 1,
      sym_clustering_order,
    STATE(1065), 1,
      sym_table_option_name,
  [11228] = 6,
    ACTIONS(949), 1,
      anon_sym_LPAREN,
    ACTIONS(959), 1,
      sym_object_name,
    STATE(81), 1,
      sym_relation_element,
    STATE(469), 1,
      sym_function_call,
    STATE(1174), 1,
      sym_function_name,
    STATE(73), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11248] = 5,
    ACTIONS(961), 1,
      aux_sym_priviledge_token3,
    ACTIONS(963), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(965), 1,
      aux_sym_alter_table_rename_token1,
    STATE(265), 1,
      sym_alter_type_operation,
    STATE(347), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [11266] = 7,
    ACTIONS(186), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(981), 1,
      sym_object_name,
    STATE(192), 1,
      sym_table_option_item,
    STATE(210), 1,
      sym_table_options,
    STATE(291), 1,
      sym_materialized_view_options,
    STATE(306), 1,
      sym_clustering_order,
    STATE(1065), 1,
      sym_table_option_name,
  [11288] = 7,
    ACTIONS(945), 1,
      anon_sym_STAR,
    ACTIONS(947), 1,
      sym_object_name,
    ACTIONS(983), 1,
      aux_sym_select_statement_token3,
    STATE(659), 1,
      sym_select_element,
    STATE(676), 1,
      sym_function_call,
    STATE(852), 1,
      sym_select_elements,
    STATE(1174), 1,
      sym_function_name,
  [11310] = 7,
    ACTIONS(186), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(981), 1,
      sym_object_name,
    STATE(192), 1,
      sym_table_option_item,
    STATE(210), 1,
      sym_table_options,
    STATE(284), 1,
      sym_materialized_view_options,
    STATE(306), 1,
      sym_clustering_order,
    STATE(1065), 1,
      sym_table_option_name,
  [11332] = 7,
    ACTIONS(186), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(981), 1,
      sym_object_name,
    STATE(192), 1,
      sym_table_option_item,
    STATE(210), 1,
      sym_table_options,
    STATE(283), 1,
      sym_materialized_view_options,
    STATE(306), 1,
      sym_clustering_order,
    STATE(1065), 1,
      sym_table_option_name,
  [11354] = 7,
    ACTIONS(186), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(981), 1,
      sym_object_name,
    STATE(192), 1,
      sym_table_option_item,
    STATE(210), 1,
      sym_table_options,
    STATE(280), 1,
      sym_materialized_view_options,
    STATE(306), 1,
      sym_clustering_order,
    STATE(1065), 1,
      sym_table_option_name,
  [11376] = 7,
    ACTIONS(985), 1,
      sym_string_literal,
    ACTIONS(987), 1,
      sym_object_name,
    ACTIONS(989), 1,
      aux_sym_if_exist_token1,
    ACTIONS(991), 1,
      sym__dquote,
    STATE(302), 1,
      sym_index_name,
    STATE(498), 1,
      sym_if_exist,
    STATE(1052), 1,
      sym_keyspace,
  [11398] = 2,
    ACTIONS(993), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(995), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11409] = 6,
    ACTIONS(997), 1,
      aux_sym_truncate_token2,
    ACTIONS(999), 1,
      aux_sym_resource_token2,
    ACTIONS(1001), 1,
      aux_sym_resource_token6,
    ACTIONS(1003), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1005), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1007), 1,
      aux_sym_drop_user_token1,
  [11428] = 6,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    ACTIONS(1009), 1,
      aux_sym_create_materialized_view_token1,
    STATE(23), 1,
      sym_column,
    STATE(817), 1,
      sym_column_definition,
    STATE(1039), 1,
      sym_primary_key_element,
  [11447] = 6,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    ACTIONS(1011), 1,
      aux_sym_if_exist_token1,
    STATE(259), 1,
      sym_table,
    STATE(578), 1,
      sym_if_exist,
    STATE(1209), 1,
      sym_keyspace,
  [11466] = 6,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    ACTIONS(1009), 1,
      aux_sym_create_materialized_view_token1,
    STATE(23), 1,
      sym_column,
    STATE(817), 1,
      sym_column_definition,
    STATE(1149), 1,
      sym_primary_key_element,
  [11485] = 6,
    ACTIONS(985), 1,
      sym_string_literal,
    ACTIONS(1013), 1,
      sym_object_name,
    ACTIONS(1015), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1017), 1,
      aux_sym_create_index_token3,
    STATE(528), 1,
      sym_if_not_exist,
    STATE(1148), 1,
      sym_index_name,
  [11504] = 6,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    ACTIONS(1019), 1,
      aux_sym_if_exist_token1,
    STATE(522), 1,
      sym_if_not_exist,
    STATE(1118), 1,
      sym_table,
    STATE(1165), 1,
      sym_keyspace,
  [11523] = 6,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1019), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1021), 1,
      sym_object_name,
    STATE(590), 1,
      sym_if_not_exist,
    STATE(1161), 1,
      sym_keyspace,
    STATE(1166), 1,
      sym_aggregate,
  [11542] = 6,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1019), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1023), 1,
      sym_object_name,
    STATE(556), 1,
      sym_if_not_exist,
    STATE(1176), 1,
      sym_keyspace,
    STATE(1180), 1,
      sym_type,
  [11561] = 6,
    ACTIONS(945), 1,
      anon_sym_STAR,
    ACTIONS(1025), 1,
      sym_object_name,
    STATE(659), 1,
      sym_select_element,
    STATE(676), 1,
      sym_function_call,
    STATE(852), 1,
      sym_select_elements,
    STATE(1174), 1,
      sym_function_name,
  [11580] = 6,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1011), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1027), 1,
      sym_object_name,
    STATE(267), 1,
      sym_function,
    STATE(599), 1,
      sym_if_exist,
    STATE(1255), 1,
      sym_keyspace,
  [11599] = 6,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1019), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1029), 1,
      sym_object_name,
    STATE(553), 1,
      sym_if_not_exist,
    STATE(1173), 1,
      sym_keyspace,
    STATE(1175), 1,
      sym_trigger,
  [11618] = 6,
    ACTIONS(945), 1,
      anon_sym_STAR,
    ACTIONS(1025), 1,
      sym_object_name,
    STATE(659), 1,
      sym_select_element,
    STATE(676), 1,
      sym_function_call,
    STATE(917), 1,
      sym_select_elements,
    STATE(1174), 1,
      sym_function_name,
  [11637] = 6,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1019), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1021), 1,
      sym_object_name,
    STATE(523), 1,
      sym_if_not_exist,
    STATE(1227), 1,
      sym_aggregate,
    STATE(1228), 1,
      sym_keyspace,
  [11656] = 2,
    ACTIONS(1031), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1033), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11667] = 2,
    ACTIONS(1035), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1037), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11678] = 6,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1019), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1027), 1,
      sym_object_name,
    STATE(525), 1,
      sym_if_not_exist,
    STATE(1237), 1,
      sym_function,
    STATE(1238), 1,
      sym_keyspace,
  [11697] = 2,
    ACTIONS(1039), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1041), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11708] = 6,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1011), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1021), 1,
      sym_object_name,
    STATE(276), 1,
      sym_aggregate,
    STATE(552), 1,
      sym_if_exist,
    STATE(1167), 1,
      sym_keyspace,
  [11727] = 2,
    ACTIONS(1043), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1045), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11738] = 6,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1011), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1029), 1,
      sym_object_name,
    STATE(543), 1,
      sym_if_exist,
    STATE(1157), 1,
      sym_trigger,
    STATE(1158), 1,
      sym_keyspace,
  [11757] = 2,
    ACTIONS(1047), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1049), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11768] = 6,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    ACTIONS(1053), 1,
      anon_sym_RPAREN,
    STATE(725), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(732), 1,
      aux_sym_relation_element_repeat2,
    STATE(735), 1,
      sym_assignment_tuple,
  [11787] = 6,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1011), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1023), 1,
      sym_object_name,
    STATE(282), 1,
      sym_type,
    STATE(535), 1,
      sym_if_exist,
    STATE(1125), 1,
      sym_keyspace,
  [11806] = 6,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1011), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1055), 1,
      sym_object_name,
    STATE(286), 1,
      sym_user,
    STATE(526), 1,
      sym_if_exist,
    STATE(1005), 1,
      sym_keyspace,
  [11825] = 6,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1011), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1057), 1,
      sym_object_name,
    STATE(304), 1,
      sym_materialized_view,
    STATE(533), 1,
      sym_if_exist,
    STATE(1193), 1,
      sym_keyspace,
  [11844] = 6,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1019), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1057), 1,
      sym_object_name,
    STATE(554), 1,
      sym_if_not_exist,
    STATE(1222), 1,
      sym_materialized_view,
    STATE(1223), 1,
      sym_keyspace,
  [11863] = 6,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1019), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1027), 1,
      sym_object_name,
    STATE(541), 1,
      sym_if_not_exist,
    STATE(1156), 1,
      sym_keyspace,
    STATE(1160), 1,
      sym_function,
  [11882] = 5,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(23), 1,
      sym_column,
    STATE(615), 1,
      sym_column_definition,
    STATE(958), 1,
      sym_column_definition_list,
  [11898] = 5,
    ACTIONS(1059), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1061), 1,
      anon_sym_LPAREN,
    ACTIONS(1063), 1,
      aux_sym_insert_values_spec_token1,
    STATE(95), 1,
      sym_insert_values_spec,
    STATE(734), 1,
      sym_insert_column_spec,
  [11914] = 1,
    ACTIONS(1065), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [11922] = 5,
    ACTIONS(1067), 1,
      sym_object_name,
    ACTIONS(1069), 1,
      aux_sym_from_spec_token1,
    STATE(540), 1,
      sym_from_spec,
    STATE(702), 1,
      sym_delete_column_item,
    STATE(828), 1,
      sym_delete_column_list,
  [11938] = 5,
    ACTIONS(1071), 1,
      sym_object_name,
    ACTIONS(1073), 1,
      sym__dquote,
    STATE(697), 1,
      sym_column_not_null,
    STATE(829), 1,
      sym_column_not_null_list,
    STATE(1032), 1,
      sym_column,
  [11954] = 5,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(736), 1,
      sym_clustering_key,
    STATE(810), 1,
      sym_column,
    STATE(1106), 1,
      sym_clustering_key_list,
  [11970] = 5,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(953), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(1075), 1,
      sym_string_literal,
    STATE(979), 1,
      sym_float_literal,
    STATE(1077), 1,
      sym_decimal_literal,
  [11986] = 5,
    ACTIONS(1059), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1061), 1,
      anon_sym_LPAREN,
    ACTIONS(1063), 1,
      aux_sym_insert_values_spec_token1,
    STATE(98), 1,
      sym_insert_values_spec,
    STATE(688), 1,
      sym_insert_column_spec,
  [12002] = 5,
    ACTIONS(1067), 1,
      sym_object_name,
    ACTIONS(1069), 1,
      aux_sym_from_spec_token1,
    STATE(545), 1,
      sym_from_spec,
    STATE(702), 1,
      sym_delete_column_item,
    STATE(889), 1,
      sym_delete_column_list,
  [12018] = 1,
    ACTIONS(1077), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [12026] = 5,
    ACTIONS(1071), 1,
      sym_object_name,
    ACTIONS(1073), 1,
      sym__dquote,
    ACTIONS(1079), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    STATE(182), 1,
      sym_column,
    STATE(318), 1,
      sym_alter_table_drop_column_list,
  [12042] = 1,
    ACTIONS(1081), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [12050] = 3,
    ACTIONS(1085), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(692), 1,
      sym_using_timestamp_spec,
    ACTIONS(1083), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12062] = 1,
    ACTIONS(1087), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [12070] = 3,
    ACTIONS(1089), 1,
      anon_sym_COMMA,
    STATE(496), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(1092), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [12082] = 1,
    ACTIONS(1094), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [12090] = 5,
    ACTIONS(985), 1,
      sym_string_literal,
    ACTIONS(987), 1,
      sym_object_name,
    ACTIONS(991), 1,
      sym__dquote,
    STATE(292), 1,
      sym_index_name,
    STATE(1201), 1,
      sym_keyspace,
  [12106] = 5,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    ACTIONS(1096), 1,
      aux_sym_truncate_token2,
    STATE(341), 1,
      sym_table,
    STATE(1117), 1,
      sym_keyspace,
  [12122] = 3,
    ACTIONS(1085), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(748), 1,
      sym_using_timestamp_spec,
    ACTIONS(1098), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12134] = 5,
    ACTIONS(1059), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1061), 1,
      anon_sym_LPAREN,
    ACTIONS(1063), 1,
      aux_sym_insert_values_spec_token1,
    STATE(94), 1,
      sym_insert_values_spec,
    STATE(742), 1,
      sym_insert_column_spec,
  [12150] = 4,
    ACTIONS(1100), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1104), 1,
      aux_sym_role_with_options_token4,
    STATE(209), 1,
      sym_role_with_options,
    ACTIONS(1102), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [12164] = 5,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1019), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1106), 1,
      sym_object_name,
    STATE(705), 1,
      sym_if_not_exist,
    STATE(1152), 1,
      sym_keyspace,
  [12180] = 1,
    ACTIONS(1108), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [12188] = 4,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    ACTIONS(1112), 1,
      anon_sym_DOT,
    ACTIONS(1114), 1,
      aux_sym_select_element_token1,
    ACTIONS(1110), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12202] = 5,
    ACTIONS(1059), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1061), 1,
      anon_sym_LPAREN,
    ACTIONS(1063), 1,
      aux_sym_insert_values_spec_token1,
    STATE(100), 1,
      sym_insert_values_spec,
    STATE(755), 1,
      sym_insert_column_spec,
  [12218] = 5,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(23), 1,
      sym_column,
    STATE(615), 1,
      sym_column_definition,
    STATE(1155), 1,
      sym_column_definition_list,
  [12234] = 5,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(23), 1,
      sym_column,
    STATE(615), 1,
      sym_column_definition,
    STATE(1187), 1,
      sym_column_definition_list,
  [12250] = 5,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1011), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1106), 1,
      sym_object_name,
    STATE(246), 1,
      sym_keyspace,
    STATE(617), 1,
      sym_if_exist,
  [12266] = 1,
    ACTIONS(1116), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
  [12274] = 5,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(606), 1,
      sym_partition_key,
    STATE(845), 1,
      sym_column,
    STATE(1009), 1,
      sym_partition_key_list,
  [12290] = 5,
    ACTIONS(1071), 1,
      sym_object_name,
    ACTIONS(1073), 1,
      sym__dquote,
    STATE(177), 1,
      sym_alter_type_rename_item,
    STATE(305), 1,
      sym_alter_type_rename_list,
    STATE(1095), 1,
      sym_column,
  [12306] = 4,
    ACTIONS(1100), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1104), 1,
      aux_sym_role_with_options_token4,
    STATE(196), 1,
      sym_role_with_options,
    ACTIONS(1102), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [12320] = 5,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(23), 1,
      sym_column,
    STATE(615), 1,
      sym_column_definition,
    STATE(1038), 1,
      sym_column_definition_list,
  [12336] = 5,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(736), 1,
      sym_clustering_key,
    STATE(810), 1,
      sym_column,
    STATE(1047), 1,
      sym_clustering_key_list,
  [12352] = 4,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(784), 1,
      sym_clustering_key,
    STATE(810), 1,
      sym_column,
  [12365] = 4,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      aux_sym_where_spec_token1,
    STATE(125), 1,
      sym_where_spec,
    STATE(574), 1,
      aux_sym_update_repeat1,
  [12378] = 4,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(29), 1,
      sym_column,
    STATE(992), 1,
      sym_type_member_column_list,
  [12391] = 4,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      aux_sym_where_spec_token1,
    STATE(125), 1,
      sym_where_spec,
    STATE(647), 1,
      aux_sym_update_repeat1,
  [12404] = 4,
    ACTIONS(1071), 1,
      sym_object_name,
    ACTIONS(1073), 1,
      sym__dquote,
    STATE(622), 1,
      sym_column,
    STATE(996), 1,
      sym_column_list,
  [12417] = 4,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(671), 1,
      sym_column,
    STATE(1190), 1,
      sym_column_list,
  [12430] = 4,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    STATE(1247), 1,
      sym_table,
    STATE(1248), 1,
      sym_keyspace,
  [12443] = 4,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1021), 1,
      sym_object_name,
    STATE(941), 1,
      sym_aggregate,
    STATE(987), 1,
      sym_keyspace,
  [12456] = 4,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    STATE(1244), 1,
      sym_table,
    STATE(1245), 1,
      sym_keyspace,
  [12469] = 4,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1027), 1,
      sym_object_name,
    STATE(943), 1,
      sym_function,
    STATE(984), 1,
      sym_keyspace,
  [12482] = 4,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1055), 1,
      sym_object_name,
    STATE(313), 1,
      sym_user,
    STATE(1184), 1,
      sym_keyspace,
  [12495] = 4,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(29), 1,
      sym_column,
    STATE(967), 1,
      sym_type_member_column_list,
  [12508] = 4,
    ACTIONS(985), 1,
      sym_string_literal,
    ACTIONS(1013), 1,
      sym_object_name,
    ACTIONS(1122), 1,
      aux_sym_create_index_token3,
    STATE(1243), 1,
      sym_index_name,
  [12521] = 4,
    ACTIONS(981), 1,
      sym_object_name,
    STATE(128), 1,
      sym_table_option_item,
    STATE(264), 1,
      sym_table_options,
    STATE(1065), 1,
      sym_table_option_name,
  [12534] = 4,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    STATE(354), 1,
      sym_table,
    STATE(980), 1,
      sym_keyspace,
  [12547] = 4,
    ACTIONS(1124), 1,
      aux_sym_timestamp_token1,
    ACTIONS(1126), 1,
      aux_sym_ttl_token1,
    STATE(163), 1,
      sym_timestamp,
    STATE(164), 1,
      sym_ttl,
  [12560] = 4,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(671), 1,
      sym_column,
    STATE(1200), 1,
      sym_column_list,
  [12573] = 4,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1057), 1,
      sym_object_name,
    STATE(335), 1,
      sym_materialized_view,
    STATE(994), 1,
      sym_keyspace,
  [12586] = 4,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    STATE(333), 1,
      sym_table,
    STATE(1030), 1,
      sym_keyspace,
  [12599] = 4,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1023), 1,
      sym_object_name,
    STATE(310), 1,
      sym_type,
    STATE(1186), 1,
      sym_keyspace,
  [12612] = 4,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    ACTIONS(1130), 1,
      anon_sym_COLON,
    ACTIONS(1132), 1,
      anon_sym_RBRACE,
    STATE(717), 1,
      aux_sym_assignment_tuple_repeat1,
  [12625] = 4,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    STATE(781), 1,
      sym_table,
    STATE(1064), 1,
      sym_keyspace,
  [12638] = 4,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(671), 1,
      sym_column,
    STATE(1183), 1,
      sym_column_list,
  [12651] = 4,
    ACTIONS(981), 1,
      sym_object_name,
    STATE(128), 1,
      sym_table_option_item,
    STATE(356), 1,
      sym_table_options,
    STATE(1065), 1,
      sym_table_option_name,
  [12664] = 4,
    ACTIONS(1085), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1120), 1,
      aux_sym_where_spec_token1,
    STATE(106), 1,
      sym_where_spec,
    STATE(796), 1,
      sym_using_timestamp_spec,
  [12677] = 4,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1027), 1,
      sym_object_name,
    STATE(1237), 1,
      sym_function,
    STATE(1238), 1,
      sym_keyspace,
  [12690] = 4,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      aux_sym_where_spec_token1,
    STATE(120), 1,
      sym_where_spec,
    STATE(548), 1,
      aux_sym_update_repeat1,
  [12703] = 4,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1029), 1,
      sym_object_name,
    STATE(1191), 1,
      sym_trigger,
    STATE(1192), 1,
      sym_keyspace,
  [12716] = 4,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    STATE(124), 1,
      sym_table,
    STATE(1050), 1,
      sym_keyspace,
  [12729] = 4,
    ACTIONS(1085), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1120), 1,
      aux_sym_where_spec_token1,
    STATE(133), 1,
      sym_where_spec,
    STATE(795), 1,
      sym_using_timestamp_spec,
  [12742] = 4,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(953), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(1134), 1,
      sym_string_literal,
    STATE(1069), 1,
      sym_decimal_literal,
  [12755] = 4,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      aux_sym_where_spec_token1,
    STATE(148), 1,
      sym_where_spec,
    STATE(579), 1,
      aux_sym_update_repeat1,
  [12768] = 4,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      aux_sym_where_spec_token1,
    STATE(148), 1,
      sym_where_spec,
    STATE(647), 1,
      aux_sym_update_repeat1,
  [12781] = 4,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1057), 1,
      sym_object_name,
    STATE(232), 1,
      sym_materialized_view,
    STATE(1119), 1,
      sym_keyspace,
  [12794] = 4,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    STATE(483), 1,
      sym_table,
    STATE(1070), 1,
      sym_keyspace,
  [12807] = 4,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1027), 1,
      sym_object_name,
    STATE(124), 1,
      sym_function,
    STATE(1054), 1,
      sym_keyspace,
  [12820] = 4,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1021), 1,
      sym_object_name,
    STATE(300), 1,
      sym_aggregate,
    STATE(1196), 1,
      sym_keyspace,
  [12833] = 4,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1029), 1,
      sym_object_name,
    STATE(1218), 1,
      sym_trigger,
    STATE(1219), 1,
      sym_keyspace,
  [12846] = 4,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1057), 1,
      sym_object_name,
    STATE(969), 1,
      sym_materialized_view,
    STATE(974), 1,
      sym_keyspace,
  [12859] = 4,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(671), 1,
      sym_column,
    STATE(1163), 1,
      sym_column_list,
  [12872] = 4,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1023), 1,
      sym_object_name,
    STATE(1208), 1,
      sym_type,
    STATE(1210), 1,
      sym_keyspace,
  [12885] = 4,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(23), 1,
      sym_column,
    STATE(817), 1,
      sym_column_definition,
  [12898] = 4,
    ACTIONS(981), 1,
      sym_object_name,
    STATE(128), 1,
      sym_table_option_item,
    STATE(317), 1,
      sym_table_options,
    STATE(1065), 1,
      sym_table_option_name,
  [12911] = 4,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(30), 1,
      sym_column,
    STATE(312), 1,
      sym_alter_table_column_definition,
  [12924] = 4,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    STATE(640), 1,
      sym_table,
    STATE(924), 1,
      sym_keyspace,
  [12937] = 4,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    STATE(256), 1,
      sym_table,
    STATE(1221), 1,
      sym_keyspace,
  [12950] = 4,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(671), 1,
      sym_column,
    STATE(999), 1,
      sym_column_list,
  [12963] = 4,
    ACTIONS(1025), 1,
      sym_object_name,
    STATE(676), 1,
      sym_function_call,
    STATE(866), 1,
      sym_select_element,
    STATE(1174), 1,
      sym_function_name,
  [12976] = 4,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(671), 1,
      sym_column,
    STATE(1145), 1,
      sym_column_list,
  [12989] = 4,
    ACTIONS(1071), 1,
      sym_object_name,
    ACTIONS(1073), 1,
      sym__dquote,
    STATE(214), 1,
      sym_alter_type_rename_item,
    STATE(1095), 1,
      sym_column,
  [13002] = 4,
    ACTIONS(1071), 1,
      sym_object_name,
    ACTIONS(1073), 1,
      sym__dquote,
    STATE(622), 1,
      sym_column,
    STATE(931), 1,
      sym_column_list,
  [13015] = 3,
    ACTIONS(1138), 1,
      aux_sym_create_materialized_view_token1,
    STATE(821), 1,
      sym_primary_key_column,
    ACTIONS(1136), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13026] = 4,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    STATE(311), 1,
      sym_table,
    STATE(1079), 1,
      sym_keyspace,
  [13039] = 4,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    STATE(902), 1,
      sym_table,
    STATE(934), 1,
      sym_keyspace,
  [13052] = 4,
    ACTIONS(1140), 1,
      sym_object_name,
    ACTIONS(1142), 1,
      aux_sym_if_exist_token2,
    STATE(203), 1,
      sym_if_condition,
    STATE(386), 1,
      sym_if_condition_list,
  [13065] = 4,
    ACTIONS(1085), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1120), 1,
      aux_sym_where_spec_token1,
    STATE(110), 1,
      sym_where_spec,
    STATE(777), 1,
      sym_using_timestamp_spec,
  [13078] = 4,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    STATE(624), 1,
      sym_table,
    STATE(936), 1,
      sym_keyspace,
  [13091] = 4,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(671), 1,
      sym_column,
    STATE(1126), 1,
      sym_column_list,
  [13104] = 4,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      aux_sym_where_spec_token1,
    STATE(143), 1,
      sym_where_spec,
    STATE(647), 1,
      aux_sym_update_repeat1,
  [13117] = 4,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(29), 1,
      sym_column,
    STATE(1229), 1,
      sym_type_member_column_list,
  [13130] = 4,
    ACTIONS(1019), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1144), 1,
      sym_object_name,
    STATE(857), 1,
      sym_if_not_exist,
    STATE(1181), 1,
      sym_user,
  [13143] = 4,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      aux_sym_where_spec_token1,
    STATE(143), 1,
      sym_where_spec,
    STATE(600), 1,
      aux_sym_update_repeat1,
  [13156] = 4,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    STATE(289), 1,
      sym_table,
    STATE(1203), 1,
      sym_keyspace,
  [13169] = 4,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      aux_sym_where_spec_token1,
    STATE(114), 1,
      sym_where_spec,
    STATE(647), 1,
      aux_sym_update_repeat1,
  [13182] = 1,
    ACTIONS(1146), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13189] = 4,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1023), 1,
      sym_object_name,
    STATE(439), 1,
      sym_type,
    STATE(1048), 1,
      sym_keyspace,
  [13202] = 2,
    ACTIONS(1148), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1150), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [13211] = 1,
    ACTIONS(1092), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13218] = 4,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      aux_sym_where_spec_token1,
    STATE(114), 1,
      sym_where_spec,
    STATE(519), 1,
      aux_sym_update_repeat1,
  [13231] = 4,
    ACTIONS(1071), 1,
      sym_object_name,
    ACTIONS(1073), 1,
      sym__dquote,
    STATE(772), 1,
      sym_column_not_null,
    STATE(1032), 1,
      sym_column,
  [13244] = 4,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    STATE(421), 1,
      sym_table,
    STATE(1060), 1,
      sym_keyspace,
  [13257] = 4,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    STATE(307), 1,
      sym_table,
    STATE(1101), 1,
      sym_keyspace,
  [13270] = 4,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    STATE(949), 1,
      sym_table,
    STATE(951), 1,
      sym_keyspace,
  [13283] = 4,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    STATE(506), 1,
      sym_table,
    STATE(1103), 1,
      sym_keyspace,
  [13296] = 4,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1021), 1,
      sym_object_name,
    STATE(1227), 1,
      sym_aggregate,
    STATE(1228), 1,
      sym_keyspace,
  [13309] = 4,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(953), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(1152), 1,
      sym_string_literal,
    STATE(918), 1,
      sym_decimal_literal,
  [13322] = 4,
    ACTIONS(1019), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(184), 1,
      sym_role,
    STATE(835), 1,
      sym_if_not_exist,
  [13335] = 4,
    ACTIONS(1071), 1,
      sym_object_name,
    ACTIONS(1073), 1,
      sym__dquote,
    STATE(622), 1,
      sym_column,
    STATE(1108), 1,
      sym_column_list,
  [13348] = 4,
    ACTIONS(1071), 1,
      sym_object_name,
    ACTIONS(1073), 1,
      sym__dquote,
    STATE(622), 1,
      sym_column,
    STATE(988), 1,
      sym_column_list,
  [13361] = 4,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    STATE(863), 1,
      sym_table,
    STATE(989), 1,
      sym_keyspace,
  [13374] = 4,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(778), 1,
      sym_partition_key,
    STATE(845), 1,
      sym_column,
  [13387] = 3,
    ACTIONS(1156), 1,
      anon_sym_RPAREN,
    STATE(1076), 1,
      sym_order_direction,
    ACTIONS(238), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [13398] = 4,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(29), 1,
      sym_column,
    STATE(1107), 1,
      sym_type_member_column_list,
  [13411] = 4,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1027), 1,
      sym_object_name,
    STATE(296), 1,
      sym_function,
    STATE(1198), 1,
      sym_keyspace,
  [13424] = 4,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      aux_sym_where_spec_token1,
    STATE(132), 1,
      sym_where_spec,
    STATE(647), 1,
      aux_sym_update_repeat1,
  [13437] = 4,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    STATE(1189), 1,
      sym_table,
    STATE(1206), 1,
      sym_keyspace,
  [13450] = 4,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    ACTIONS(1160), 1,
      anon_sym_RPAREN,
    STATE(740), 1,
      aux_sym_function_args_repeat1,
  [13463] = 4,
    ACTIONS(1011), 1,
      aux_sym_if_exist_token1,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(269), 1,
      sym_role,
    STATE(851), 1,
      sym_if_exist,
  [13476] = 4,
    ACTIONS(874), 1,
      sym_object_name,
    ACTIONS(876), 1,
      sym__dquote,
    STATE(832), 1,
      sym_table,
    STATE(1027), 1,
      sym_keyspace,
  [13489] = 3,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_relation_element_repeat2,
  [13499] = 3,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
    STATE(713), 1,
      aux_sym_partition_key_list_repeat1,
  [13509] = 3,
    ACTIONS(1168), 1,
      aux_sym_create_function_token1,
    ACTIONS(1170), 1,
      aux_sym_return_mode_token1,
    STATE(1019), 1,
      sym_return_mode,
  [13519] = 3,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    ACTIONS(1175), 1,
      anon_sym_RBRACE,
    STATE(608), 1,
      aux_sym_replication_list_repeat1,
  [13529] = 3,
    ACTIONS(1177), 1,
      anon_sym_COMMA,
    ACTIONS(1179), 1,
      anon_sym_RPAREN,
    STATE(738), 1,
      aux_sym_create_function_repeat1,
  [13539] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(378), 1,
      sym_table,
  [13549] = 2,
    STATE(220), 1,
      sym_boolean_literal,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
  [13557] = 3,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1187), 1,
      anon_sym_RBRACE,
    STATE(674), 1,
      aux_sym_assignment_map_repeat1,
  [13567] = 2,
    ACTIONS(1191), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1189), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [13575] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(964), 1,
      sym_table,
  [13585] = 3,
    ACTIONS(1193), 1,
      anon_sym_COMMA,
    ACTIONS(1195), 1,
      anon_sym_RPAREN,
    STATE(669), 1,
      aux_sym_column_definition_list_repeat1,
  [13595] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(1185), 1,
      sym_table,
  [13605] = 3,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1106), 1,
      sym_object_name,
    STATE(294), 1,
      sym_keyspace,
  [13615] = 3,
    ACTIONS(1197), 1,
      anon_sym_RPAREN,
    ACTIONS(1199), 1,
      sym_object_name,
    STATE(632), 1,
      sym_param,
  [13625] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(1189), 1,
      sym_table,
  [13635] = 3,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(953), 1,
      aux_sym_decimal_literal_token1,
    STATE(108), 1,
      sym_decimal_literal,
  [13645] = 3,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(1201), 1,
      anon_sym_RPAREN,
    STATE(605), 1,
      aux_sym_relation_element_repeat2,
  [13655] = 3,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(1203), 1,
      aux_sym_from_spec_token1,
    STATE(633), 1,
      aux_sym_column_list_repeat1,
  [13665] = 3,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(1201), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_relation_element_repeat2,
  [13675] = 3,
    ACTIONS(257), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1205), 1,
      aux_sym_update_token2,
    STATE(1092), 1,
      sym_using_ttl_timestamp,
  [13685] = 3,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(1207), 1,
      anon_sym_RPAREN,
    STATE(758), 1,
      aux_sym_type_member_column_list_repeat1,
  [13695] = 3,
    ACTIONS(1199), 1,
      sym_object_name,
    ACTIONS(1209), 1,
      anon_sym_RPAREN,
    STATE(635), 1,
      sym_param,
  [13705] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(382), 1,
      sym_table,
  [13715] = 3,
    ACTIONS(1177), 1,
      anon_sym_COMMA,
    ACTIONS(1211), 1,
      anon_sym_RPAREN,
    STATE(667), 1,
      aux_sym_create_function_repeat1,
  [13725] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(685), 1,
      sym_table,
  [13735] = 3,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1106), 1,
      sym_object_name,
    STATE(370), 1,
      sym_keyspace,
  [13745] = 3,
    ACTIONS(1168), 1,
      aux_sym_create_function_token1,
    ACTIONS(1170), 1,
      aux_sym_return_mode_token1,
    STATE(929), 1,
      sym_return_mode,
  [13755] = 3,
    ACTIONS(1177), 1,
      anon_sym_COMMA,
    ACTIONS(1209), 1,
      anon_sym_RPAREN,
    STATE(609), 1,
      aux_sym_create_function_repeat1,
  [13765] = 3,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(1213), 1,
      aux_sym_from_spec_token1,
    STATE(119), 1,
      aux_sym_column_list_repeat1,
  [13775] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(307), 1,
      sym_table,
  [13785] = 3,
    ACTIONS(1177), 1,
      anon_sym_COMMA,
    ACTIONS(1179), 1,
      anon_sym_RPAREN,
    STATE(733), 1,
      aux_sym_create_function_repeat1,
  [13795] = 3,
    ACTIONS(1168), 1,
      aux_sym_create_function_token1,
    ACTIONS(1170), 1,
      aux_sym_return_mode_token1,
    STATE(1132), 1,
      sym_return_mode,
  [13805] = 3,
    ACTIONS(1071), 1,
      sym_object_name,
    ACTIONS(1073), 1,
      sym__dquote,
    STATE(122), 1,
      sym_column,
  [13815] = 3,
    ACTIONS(1215), 1,
      anon_sym_COMMA,
    ACTIONS(1218), 1,
      anon_sym_GT,
    STATE(638), 1,
      aux_sym_data_type_definition_repeat1,
  [13825] = 3,
    ACTIONS(1179), 1,
      anon_sym_RPAREN,
    ACTIONS(1199), 1,
      sym_object_name,
    STATE(730), 1,
      sym_param,
  [13835] = 3,
    ACTIONS(257), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1220), 1,
      aux_sym_update_token2,
    STATE(1093), 1,
      sym_using_ttl_timestamp,
  [13845] = 3,
    ACTIONS(1222), 1,
      anon_sym_COMMA,
    ACTIONS(1224), 1,
      anon_sym_RPAREN,
    STATE(658), 1,
      aux_sym_option_hash_repeat1,
  [13855] = 3,
    ACTIONS(1177), 1,
      anon_sym_COMMA,
    ACTIONS(1211), 1,
      anon_sym_RPAREN,
    STATE(738), 1,
      aux_sym_create_function_repeat1,
  [13865] = 2,
    ACTIONS(546), 1,
      sym_string_literal,
    ACTIONS(1226), 2,
      sym_object_name,
      aux_sym_create_index_token3,
  [13873] = 3,
    ACTIONS(1168), 1,
      aux_sym_create_function_token1,
    ACTIONS(1170), 1,
      aux_sym_return_mode_token1,
    STATE(973), 1,
      sym_return_mode,
  [13883] = 2,
    ACTIONS(1228), 1,
      sym_object_name,
    ACTIONS(636), 2,
      sym_string_literal,
      sym__dquote,
  [13891] = 3,
    ACTIONS(1230), 1,
      anon_sym_COMMA,
    ACTIONS(1232), 1,
      anon_sym_RBRACE,
    STATE(608), 1,
      aux_sym_replication_list_repeat1,
  [13901] = 3,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    ACTIONS(1237), 1,
      aux_sym_where_spec_token1,
    STATE(647), 1,
      aux_sym_update_repeat1,
  [13911] = 3,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1239), 1,
      anon_sym_RBRACE,
    STATE(612), 1,
      aux_sym_assignment_map_repeat1,
  [13921] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(104), 1,
      sym_table,
  [13931] = 3,
    ACTIONS(1241), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1243), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1245), 1,
      aux_sym_update_token1,
  [13941] = 3,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1106), 1,
      sym_object_name,
    STATE(1082), 1,
      sym_keyspace,
  [13951] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(1138), 1,
      sym_table,
  [13961] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(353), 1,
      sym_table,
  [13971] = 3,
    ACTIONS(985), 1,
      sym_string_literal,
    ACTIONS(1013), 1,
      sym_object_name,
    STATE(349), 1,
      sym_index_name,
  [13981] = 3,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_relation_element_repeat2,
  [13991] = 3,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(1249), 1,
      anon_sym_RPAREN,
    STATE(623), 1,
      aux_sym_relation_element_repeat2,
  [14001] = 3,
    ACTIONS(981), 1,
      sym_object_name,
    STATE(202), 1,
      sym_table_option_item,
    STATE(1065), 1,
      sym_table_option_name,
  [14011] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
    STATE(658), 1,
      aux_sym_option_hash_repeat1,
  [14021] = 3,
    ACTIONS(1256), 1,
      anon_sym_COMMA,
    ACTIONS(1258), 1,
      aux_sym_from_spec_token1,
    STATE(711), 1,
      aux_sym_select_elements_repeat1,
  [14031] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(243), 1,
      sym_table,
  [14041] = 3,
    ACTIONS(1071), 1,
      sym_object_name,
    ACTIONS(1073), 1,
      sym__dquote,
    STATE(316), 1,
      sym_column,
  [14051] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(249), 1,
      sym_table,
  [14061] = 3,
    ACTIONS(1199), 1,
      sym_object_name,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
    STATE(628), 1,
      sym_param,
  [14071] = 3,
    ACTIONS(985), 1,
      sym_string_literal,
    ACTIONS(1013), 1,
      sym_object_name,
    STATE(247), 1,
      sym_index_name,
  [14081] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(832), 1,
      sym_table,
  [14091] = 3,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1265), 1,
      aux_sym_from_spec_token1,
    STATE(666), 1,
      aux_sym_select_elements_repeat1,
  [14101] = 3,
    ACTIONS(1177), 1,
      anon_sym_COMMA,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
    STATE(738), 1,
      aux_sym_create_function_repeat1,
  [14111] = 3,
    ACTIONS(1071), 1,
      sym_object_name,
    ACTIONS(1073), 1,
      sym__dquote,
    STATE(213), 1,
      sym_column,
  [14121] = 3,
    ACTIONS(1269), 1,
      anon_sym_COMMA,
    ACTIONS(1271), 1,
      anon_sym_RPAREN,
    STATE(716), 1,
      aux_sym_column_definition_list_repeat1,
  [14131] = 3,
    ACTIONS(1273), 1,
      anon_sym_COMMA,
    ACTIONS(1275), 1,
      anon_sym_GT,
    STATE(638), 1,
      aux_sym_data_type_definition_repeat1,
  [14141] = 3,
    ACTIONS(1203), 1,
      anon_sym_RPAREN,
    ACTIONS(1277), 1,
      anon_sym_COMMA,
    STATE(675), 1,
      aux_sym_column_list_repeat1,
  [14151] = 3,
    ACTIONS(1279), 1,
      anon_sym_COMMA,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
    STATE(706), 1,
      aux_sym_expression_list_repeat1,
  [14161] = 3,
    ACTIONS(1283), 1,
      anon_sym_COMMA,
    ACTIONS(1286), 1,
      anon_sym_RPAREN,
    STATE(673), 1,
      aux_sym_init_cond_hash_repeat1,
  [14171] = 3,
    ACTIONS(1288), 1,
      anon_sym_COMMA,
    ACTIONS(1291), 1,
      anon_sym_RBRACE,
    STATE(674), 1,
      aux_sym_assignment_map_repeat1,
  [14181] = 3,
    ACTIONS(1213), 1,
      anon_sym_RPAREN,
    ACTIONS(1277), 1,
      anon_sym_COMMA,
    STATE(699), 1,
      aux_sym_column_list_repeat1,
  [14191] = 2,
    ACTIONS(1114), 1,
      aux_sym_select_element_token1,
    ACTIONS(1110), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14199] = 3,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(122), 1,
      sym_column,
  [14209] = 3,
    ACTIONS(1222), 1,
      anon_sym_COMMA,
    ACTIONS(1293), 1,
      anon_sym_RPAREN,
    STATE(641), 1,
      aux_sym_option_hash_repeat1,
  [14219] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
    STATE(679), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [14229] = 3,
    ACTIONS(1071), 1,
      sym_object_name,
    ACTIONS(1073), 1,
      sym__dquote,
    STATE(597), 1,
      sym_column,
  [14239] = 3,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(953), 1,
      aux_sym_decimal_literal_token1,
    STATE(222), 1,
      sym_decimal_literal,
  [14249] = 2,
    ACTIONS(1302), 1,
      anon_sym_LBRACK,
    ACTIONS(1300), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14257] = 3,
    ACTIONS(1177), 1,
      anon_sym_COMMA,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
    STATE(642), 1,
      aux_sym_create_function_repeat1,
  [14267] = 3,
    ACTIONS(1177), 1,
      anon_sym_COMMA,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
    STATE(738), 1,
      aux_sym_create_function_repeat1,
  [14277] = 3,
    ACTIONS(257), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1304), 1,
      aux_sym_update_token2,
    STATE(1043), 1,
      sym_using_ttl_timestamp,
  [14287] = 3,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(953), 1,
      aux_sym_decimal_literal_token1,
    STATE(188), 1,
      sym_decimal_literal,
  [14297] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1309), 1,
      anon_sym_RPAREN,
    STATE(687), 1,
      aux_sym_relation_element_repeat1,
  [14307] = 3,
    ACTIONS(1059), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1063), 1,
      aux_sym_insert_values_spec_token1,
    STATE(94), 1,
      sym_insert_values_spec,
  [14317] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(489), 1,
      sym_table,
  [14327] = 2,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(1311), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [14335] = 3,
    ACTIONS(1168), 1,
      aux_sym_create_function_token1,
    ACTIONS(1170), 1,
      aux_sym_return_mode_token1,
    STATE(954), 1,
      sym_return_mode,
  [14345] = 1,
    ACTIONS(1313), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [14351] = 3,
    ACTIONS(1315), 1,
      sym_string_literal,
    STATE(695), 1,
      sym_replication_list_item,
    STATE(952), 1,
      sym_replication_list,
  [14361] = 3,
    ACTIONS(1317), 1,
      anon_sym_COMMA,
    ACTIONS(1319), 1,
      anon_sym_RPAREN,
    STATE(673), 1,
      aux_sym_init_cond_hash_repeat1,
  [14371] = 3,
    ACTIONS(1230), 1,
      anon_sym_COMMA,
    ACTIONS(1321), 1,
      anon_sym_RBRACE,
    STATE(646), 1,
      aux_sym_replication_list_repeat1,
  [14381] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(781), 1,
      sym_table,
  [14391] = 2,
    STATE(754), 1,
      aux_sym_column_not_null_list_repeat1,
    ACTIONS(1323), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [14399] = 3,
    ACTIONS(1325), 1,
      sym_object_name,
    STATE(847), 1,
      sym_init_cond_hash_item,
    STATE(1140), 1,
      sym_hash_key,
  [14409] = 3,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    STATE(699), 1,
      aux_sym_column_list_repeat1,
  [14419] = 3,
    ACTIONS(1330), 1,
      anon_sym_COMMA,
    ACTIONS(1332), 1,
      anon_sym_RPAREN,
    STATE(679), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [14429] = 3,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    ACTIONS(1334), 1,
      anon_sym_RBRACK,
    STATE(718), 1,
      aux_sym_assignment_tuple_repeat1,
  [14439] = 3,
    ACTIONS(1336), 1,
      anon_sym_COMMA,
    ACTIONS(1338), 1,
      aux_sym_from_spec_token1,
    STATE(745), 1,
      aux_sym_delete_column_list_repeat1,
  [14449] = 3,
    ACTIONS(1340), 1,
      anon_sym_COMMA,
    ACTIONS(1342), 1,
      anon_sym_RPAREN,
    STATE(687), 1,
      aux_sym_relation_element_repeat1,
  [14459] = 3,
    ACTIONS(1168), 1,
      aux_sym_create_function_token1,
    ACTIONS(1170), 1,
      aux_sym_return_mode_token1,
    STATE(1072), 1,
      sym_return_mode,
  [14469] = 3,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1106), 1,
      sym_object_name,
    STATE(1240), 1,
      sym_keyspace,
  [14479] = 3,
    ACTIONS(1279), 1,
      anon_sym_COMMA,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
    STATE(714), 1,
      aux_sym_expression_list_repeat1,
  [14489] = 3,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    ACTIONS(1346), 1,
      anon_sym_RPAREN,
    STATE(496), 1,
      aux_sym_assignment_tuple_repeat1,
  [14499] = 3,
    ACTIONS(1348), 1,
      anon_sym_COMMA,
    ACTIONS(1351), 1,
      aux_sym_from_spec_token1,
    STATE(708), 1,
      aux_sym_delete_column_list_repeat1,
  [14509] = 3,
    ACTIONS(1340), 1,
      anon_sym_COMMA,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
    STATE(703), 1,
      aux_sym_relation_element_repeat1,
  [14519] = 2,
    ACTIONS(1355), 1,
      aux_sym_resource_token1,
    ACTIONS(1357), 2,
      aux_sym_resource_token4,
      aux_sym_resource_token5,
  [14527] = 3,
    ACTIONS(1256), 1,
      anon_sym_COMMA,
    ACTIONS(1359), 1,
      aux_sym_from_spec_token1,
    STATE(666), 1,
      aux_sym_select_elements_repeat1,
  [14537] = 3,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1106), 1,
      sym_object_name,
    STATE(124), 1,
      sym_keyspace,
  [14547] = 3,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    ACTIONS(1361), 1,
      anon_sym_RPAREN,
    STATE(759), 1,
      aux_sym_partition_key_list_repeat1,
  [14557] = 3,
    ACTIONS(1363), 1,
      anon_sym_COMMA,
    ACTIONS(1366), 1,
      anon_sym_RPAREN,
    STATE(714), 1,
      aux_sym_expression_list_repeat1,
  [14567] = 3,
    ACTIONS(1368), 1,
      anon_sym_COMMA,
    ACTIONS(1371), 1,
      anon_sym_RPAREN,
    STATE(715), 1,
      aux_sym_function_args_repeat1,
  [14577] = 3,
    ACTIONS(1373), 1,
      anon_sym_COMMA,
    ACTIONS(1376), 1,
      anon_sym_RPAREN,
    STATE(716), 1,
      aux_sym_column_definition_list_repeat1,
  [14587] = 3,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    ACTIONS(1378), 1,
      anon_sym_RBRACE,
    STATE(496), 1,
      aux_sym_assignment_tuple_repeat1,
  [14597] = 3,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    ACTIONS(1380), 1,
      anon_sym_RBRACK,
    STATE(496), 1,
      aux_sym_assignment_tuple_repeat1,
  [14607] = 2,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    ACTIONS(1371), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14615] = 3,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(953), 1,
      aux_sym_decimal_literal_token1,
    STATE(1214), 1,
      sym_decimal_literal,
  [14625] = 3,
    ACTIONS(1317), 1,
      anon_sym_COMMA,
    ACTIONS(1382), 1,
      anon_sym_RPAREN,
    STATE(694), 1,
      aux_sym_init_cond_hash_repeat1,
  [14635] = 3,
    ACTIONS(1330), 1,
      anon_sym_COMMA,
    ACTIONS(1384), 1,
      anon_sym_RPAREN,
    STATE(700), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [14645] = 3,
    ACTIONS(1386), 1,
      sym__hex_digit,
    ACTIONS(1389), 1,
      anon_sym_SQUOTE,
    STATE(723), 1,
      aux_sym_hexadecimal_literal_repeat1,
  [14655] = 3,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    ACTIONS(1391), 1,
      anon_sym_RPAREN,
    STATE(707), 1,
      aux_sym_assignment_tuple_repeat1,
  [14665] = 3,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    ACTIONS(1393), 1,
      anon_sym_RPAREN,
    STATE(496), 1,
      aux_sym_assignment_tuple_repeat1,
  [14675] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(1028), 1,
      sym_table,
  [14685] = 3,
    ACTIONS(1315), 1,
      sym_string_literal,
    STATE(695), 1,
      sym_replication_list_item,
    STATE(1022), 1,
      sym_replication_list,
  [14695] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(417), 1,
      sym_table,
  [14705] = 3,
    ACTIONS(1168), 1,
      aux_sym_create_function_token1,
    ACTIONS(1170), 1,
      aux_sym_return_mode_token1,
    STATE(1021), 1,
      sym_return_mode,
  [14715] = 3,
    ACTIONS(1177), 1,
      anon_sym_COMMA,
    ACTIONS(1395), 1,
      anon_sym_RPAREN,
    STATE(684), 1,
      aux_sym_create_function_repeat1,
  [14725] = 3,
    ACTIONS(1199), 1,
      sym_object_name,
    ACTIONS(1395), 1,
      anon_sym_RPAREN,
    STATE(683), 1,
      sym_param,
  [14735] = 3,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(1393), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_relation_element_repeat2,
  [14745] = 3,
    ACTIONS(1177), 1,
      anon_sym_COMMA,
    ACTIONS(1395), 1,
      anon_sym_RPAREN,
    STATE(738), 1,
      aux_sym_create_function_repeat1,
  [14755] = 3,
    ACTIONS(1059), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1063), 1,
      aux_sym_insert_values_spec_token1,
    STATE(100), 1,
      sym_insert_values_spec,
  [14765] = 3,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(1393), 1,
      anon_sym_RPAREN,
    STATE(655), 1,
      aux_sym_relation_element_repeat2,
  [14775] = 3,
    ACTIONS(1397), 1,
      anon_sym_COMMA,
    ACTIONS(1399), 1,
      anon_sym_RPAREN,
    STATE(765), 1,
      aux_sym_clustering_key_list_repeat1,
  [14785] = 2,
    STATE(359), 1,
      sym_boolean_literal,
    ACTIONS(150), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
  [14793] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1404), 1,
      anon_sym_RPAREN,
    STATE(738), 1,
      aux_sym_create_function_repeat1,
  [14803] = 3,
    ACTIONS(1071), 1,
      sym_object_name,
    ACTIONS(1073), 1,
      sym__dquote,
    STATE(1074), 1,
      sym_column,
  [14813] = 3,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    ACTIONS(1406), 1,
      anon_sym_RPAREN,
    STATE(715), 1,
      aux_sym_function_args_repeat1,
  [14823] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(147), 1,
      sym_table,
  [14833] = 3,
    ACTIONS(1059), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1063), 1,
      aux_sym_insert_values_spec_token1,
    STATE(99), 1,
      sym_insert_values_spec,
  [14843] = 3,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    ACTIONS(1160), 1,
      anon_sym_RPAREN,
    STATE(740), 1,
      aux_sym_function_args_repeat1,
  [14853] = 3,
    ACTIONS(1071), 1,
      sym_object_name,
    ACTIONS(1073), 1,
      sym__dquote,
    STATE(1089), 1,
      sym_column,
  [14863] = 3,
    ACTIONS(1336), 1,
      anon_sym_COMMA,
    ACTIONS(1408), 1,
      aux_sym_from_spec_token1,
    STATE(708), 1,
      aux_sym_delete_column_list_repeat1,
  [14873] = 3,
    ACTIONS(1410), 1,
      sym__hex_digit,
    ACTIONS(1412), 1,
      anon_sym_SQUOTE,
    STATE(723), 1,
      aux_sym_hexadecimal_literal_repeat1,
  [14883] = 3,
    ACTIONS(1273), 1,
      anon_sym_COMMA,
    ACTIONS(1414), 1,
      anon_sym_GT,
    STATE(670), 1,
      aux_sym_data_type_definition_repeat1,
  [14893] = 1,
    ACTIONS(1083), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [14899] = 3,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(31), 1,
      sym_column,
  [14909] = 3,
    ACTIONS(1416), 1,
      anon_sym_COMMA,
    ACTIONS(1419), 1,
      anon_sym_RPAREN,
    STATE(750), 1,
      aux_sym_clustering_key_list_repeat1,
  [14919] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(768), 1,
      sym_table,
  [14929] = 3,
    ACTIONS(257), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1421), 1,
      aux_sym_update_token2,
    STATE(1178), 1,
      sym_using_ttl_timestamp,
  [14939] = 3,
    ACTIONS(1315), 1,
      sym_string_literal,
    STATE(695), 1,
      sym_replication_list_item,
    STATE(942), 1,
      sym_replication_list,
  [14949] = 2,
    STATE(761), 1,
      aux_sym_column_not_null_list_repeat1,
    ACTIONS(1423), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [14957] = 3,
    ACTIONS(1059), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1063), 1,
      aux_sym_insert_values_spec_token1,
    STATE(98), 1,
      sym_insert_values_spec,
  [14967] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(501), 1,
      sym_table,
  [14977] = 3,
    ACTIONS(919), 1,
      sym_object_name,
    ACTIONS(921), 1,
      sym__dquote,
    STATE(22), 1,
      sym_column,
  [14987] = 3,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(1425), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_type_member_column_list_repeat1,
  [14997] = 3,
    ACTIONS(1427), 1,
      anon_sym_COMMA,
    ACTIONS(1430), 1,
      anon_sym_RPAREN,
    STATE(759), 1,
      aux_sym_partition_key_list_repeat1,
  [15007] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(752), 1,
      sym_table,
  [15017] = 3,
    ACTIONS(1432), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1435), 1,
      aux_sym_create_materialized_view_token1,
    STATE(761), 1,
      aux_sym_column_not_null_list_repeat1,
  [15027] = 3,
    ACTIONS(991), 1,
      sym__dquote,
    ACTIONS(1106), 1,
      sym_object_name,
    STATE(126), 1,
      sym_keyspace,
  [15037] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(248), 1,
      sym_table,
  [15047] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(354), 1,
      sym_table,
  [15057] = 3,
    ACTIONS(1397), 1,
      anon_sym_COMMA,
    ACTIONS(1437), 1,
      anon_sym_RPAREN,
    STATE(750), 1,
      aux_sym_clustering_key_list_repeat1,
  [15067] = 3,
    ACTIONS(1181), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      sym__dquote,
    STATE(805), 1,
      sym_table,
  [15077] = 2,
    ACTIONS(1439), 1,
      sym_object_name,
    STATE(542), 1,
      sym_assignment_element,
  [15084] = 2,
    ACTIONS(1441), 1,
      aux_sym_where_spec_token1,
    STATE(1120), 1,
      sym_materialized_view_where,
  [15091] = 2,
    ACTIONS(1443), 1,
      sym_object_name,
    STATE(1114), 1,
      sym_function,
  [15098] = 2,
    ACTIONS(1445), 1,
      sym_object_name,
    STATE(1111), 1,
      sym_language,
  [15105] = 2,
    ACTIONS(1447), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(343), 1,
      sym_code_block,
  [15112] = 1,
    ACTIONS(1435), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [15117] = 2,
    ACTIONS(1449), 1,
      sym_object_name,
    STATE(237), 1,
      sym_materialized_view,
  [15124] = 2,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(271), 1,
      sym_role,
  [15131] = 2,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(272), 1,
      sym_role,
  [15138] = 2,
    ACTIONS(1451), 1,
      sym_object_name,
    STATE(170), 1,
      sym_order_spec_element,
  [15145] = 2,
    ACTIONS(1120), 1,
      aux_sym_where_spec_token1,
    STATE(138), 1,
      sym_where_spec,
  [15152] = 1,
    ACTIONS(1430), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15157] = 1,
    ACTIONS(1453), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15162] = 2,
    ACTIONS(1455), 1,
      aux_sym_role_with_options_token1,
    STATE(129), 1,
      sym_user_password,
  [15169] = 2,
    ACTIONS(1441), 1,
      aux_sym_where_spec_token1,
    STATE(1096), 1,
      sym_materialized_view_where,
  [15176] = 2,
    ACTIONS(1455), 1,
      aux_sym_role_with_options_token1,
    STATE(146), 1,
      sym_user_password,
  [15183] = 2,
    ACTIONS(1457), 1,
      sym_string_literal,
    STATE(348), 1,
      sym_trigger_class,
  [15190] = 1,
    ACTIONS(1419), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15195] = 2,
    ACTIONS(1443), 1,
      sym_object_name,
    STATE(925), 1,
      sym_function,
  [15202] = 2,
    ACTIONS(1447), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(331), 1,
      sym_code_block,
  [15209] = 2,
    ACTIONS(1443), 1,
      sym_object_name,
    STATE(998), 1,
      sym_function,
  [15216] = 2,
    ACTIONS(1445), 1,
      sym_object_name,
    STATE(1131), 1,
      sym_language,
  [15223] = 2,
    ACTIONS(1067), 1,
      sym_object_name,
    STATE(808), 1,
      sym_delete_column_item,
  [15230] = 2,
    ACTIONS(1443), 1,
      sym_object_name,
    STATE(1133), 1,
      sym_function,
  [15237] = 2,
    ACTIONS(1459), 1,
      sym_object_name,
    STATE(447), 1,
      sym_type,
  [15244] = 2,
    ACTIONS(1439), 1,
      sym_object_name,
    STATE(577), 1,
      sym_assignment_element,
  [15251] = 2,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(261), 1,
      sym_role,
  [15258] = 2,
    ACTIONS(1447), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(357), 1,
      sym_code_block,
  [15265] = 2,
    ACTIONS(1120), 1,
      aux_sym_where_spec_token1,
    STATE(110), 1,
      sym_where_spec,
  [15272] = 2,
    ACTIONS(1120), 1,
      aux_sym_where_spec_token1,
    STATE(133), 1,
      sym_where_spec,
  [15279] = 2,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    STATE(656), 1,
      sym_assignment_tuple,
  [15286] = 2,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_assignment_tuple,
  [15293] = 2,
    ACTIONS(1461), 1,
      sym_string_literal,
    STATE(678), 1,
      sym_option_hash_item,
  [15300] = 2,
    ACTIONS(1124), 1,
      aux_sym_timestamp_token1,
    STATE(580), 1,
      sym_timestamp,
  [15307] = 2,
    ACTIONS(1445), 1,
      sym_object_name,
    STATE(1084), 1,
      sym_language,
  [15314] = 1,
    ACTIONS(1389), 2,
      sym__hex_digit,
      anon_sym_SQUOTE,
  [15319] = 1,
    ACTIONS(1404), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15324] = 2,
    ACTIONS(1439), 1,
      sym_object_name,
    STATE(892), 1,
      sym_assignment_element,
  [15331] = 2,
    ACTIONS(1441), 1,
      aux_sym_where_spec_token1,
    STATE(1143), 1,
      sym_materialized_view_where,
  [15338] = 1,
    ACTIONS(1463), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [15343] = 2,
    ACTIONS(1447), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(324), 1,
      sym_code_block,
  [15350] = 1,
    ACTIONS(1351), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [15355] = 2,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(124), 1,
      sym_role,
  [15362] = 1,
    ACTIONS(1465), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15367] = 2,
    ACTIONS(1445), 1,
      sym_object_name,
    STATE(1168), 1,
      sym_language,
  [15374] = 2,
    ACTIONS(1124), 1,
      aux_sym_timestamp_token1,
    STATE(242), 1,
      sym_timestamp,
  [15381] = 2,
    ACTIONS(1126), 1,
      aux_sym_ttl_token1,
    STATE(242), 1,
      sym_ttl,
  [15388] = 1,
    ACTIONS(1371), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15393] = 1,
    ACTIONS(1366), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15398] = 2,
    ACTIONS(1443), 1,
      sym_object_name,
    STATE(1169), 1,
      sym_function,
  [15405] = 1,
    ACTIONS(1376), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15410] = 1,
    ACTIONS(1467), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15415] = 1,
    ACTIONS(1469), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [15420] = 2,
    ACTIONS(1447), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(315), 1,
      sym_code_block,
  [15427] = 1,
    ACTIONS(1471), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15432] = 2,
    ACTIONS(1473), 1,
      sym__hex_digit,
    STATE(425), 1,
      aux_sym_hexadecimal_literal_repeat2,
  [15439] = 2,
    ACTIONS(1410), 1,
      sym__hex_digit,
    STATE(746), 1,
      aux_sym_hexadecimal_literal_repeat1,
  [15446] = 2,
    ACTIONS(1439), 1,
      sym_object_name,
    STATE(584), 1,
      sym_assignment_element,
  [15453] = 2,
    ACTIONS(1443), 1,
      sym_object_name,
    STATE(1073), 1,
      sym_function,
  [15460] = 2,
    ACTIONS(1144), 1,
      sym_object_name,
    STATE(258), 1,
      sym_user,
  [15467] = 2,
    ACTIONS(1439), 1,
      sym_object_name,
    STATE(547), 1,
      sym_assignment_element,
  [15474] = 2,
    ACTIONS(1475), 1,
      aux_sym_from_spec_token1,
    STATE(545), 1,
      sym_from_spec,
  [15481] = 2,
    ACTIONS(1477), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1479), 1,
      aux_sym_create_materialized_view_token1,
  [15488] = 2,
    ACTIONS(1140), 1,
      sym_object_name,
    STATE(223), 1,
      sym_if_condition,
  [15495] = 2,
    ACTIONS(1459), 1,
      sym_object_name,
    STATE(257), 1,
      sym_type,
  [15502] = 2,
    ACTIONS(1441), 1,
      aux_sym_where_spec_token1,
    STATE(1063), 1,
      sym_materialized_view_where,
  [15509] = 2,
    ACTIONS(1443), 1,
      sym_object_name,
    STATE(1061), 1,
      sym_function,
  [15516] = 1,
    ACTIONS(1481), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15521] = 2,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(155), 1,
      sym_role,
  [15528] = 2,
    ACTIONS(1447), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(369), 1,
      sym_code_block,
  [15535] = 2,
    ACTIONS(1483), 1,
      anon_sym_EQ,
    ACTIONS(1485), 1,
      anon_sym_LBRACK,
  [15542] = 2,
    ACTIONS(1445), 1,
      sym_object_name,
    STATE(1051), 1,
      sym_language,
  [15549] = 2,
    ACTIONS(1487), 1,
      sym_object_name,
    STATE(85), 1,
      sym_from_spec_element,
  [15556] = 2,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym_assignment_tuple,
  [15563] = 1,
    ACTIONS(1309), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15568] = 2,
    ACTIONS(1489), 1,
      aux_sym_durable_writes_token1,
    STATE(372), 1,
      sym_durable_writes,
  [15575] = 1,
    ACTIONS(1491), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [15580] = 2,
    ACTIONS(1445), 1,
      sym_object_name,
    STATE(1020), 1,
      sym_language,
  [15587] = 1,
    ACTIONS(1493), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15592] = 1,
    ACTIONS(1298), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15597] = 1,
    ACTIONS(1286), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15602] = 1,
    ACTIONS(1495), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15607] = 2,
    ACTIONS(1489), 1,
      aux_sym_durable_writes_token1,
    STATE(381), 1,
      sym_durable_writes,
  [15614] = 2,
    ACTIONS(1443), 1,
      sym_object_name,
    STATE(926), 1,
      sym_function,
  [15621] = 2,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(298), 1,
      sym_role,
  [15628] = 2,
    ACTIONS(1475), 1,
      aux_sym_from_spec_token1,
    STATE(60), 1,
      sym_from_spec,
  [15635] = 2,
    ACTIONS(1497), 1,
      sym_object_name,
    STATE(1225), 1,
      sym_trigger,
  [15642] = 1,
    ACTIONS(1499), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15647] = 2,
    ACTIONS(1449), 1,
      sym_object_name,
    STATE(255), 1,
      sym_materialized_view,
  [15654] = 1,
    ACTIONS(1501), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [15659] = 2,
    ACTIONS(1144), 1,
      sym_object_name,
    STATE(1207), 1,
      sym_user,
  [15666] = 2,
    ACTIONS(1144), 1,
      sym_object_name,
    STATE(328), 1,
      sym_user,
  [15673] = 2,
    ACTIONS(1503), 1,
      sym_object_name,
    STATE(250), 1,
      sym_aggregate,
  [15680] = 2,
    ACTIONS(1443), 1,
      sym_object_name,
    STATE(252), 1,
      sym_function,
  [15687] = 2,
    ACTIONS(1475), 1,
      aux_sym_from_spec_token1,
    STATE(58), 1,
      sym_from_spec,
  [15694] = 2,
    ACTIONS(1459), 1,
      sym_object_name,
    STATE(330), 1,
      sym_type,
  [15701] = 2,
    ACTIONS(1441), 1,
      aux_sym_where_spec_token1,
    STATE(1031), 1,
      sym_materialized_view_where,
  [15708] = 1,
    ACTIONS(1505), 2,
      aux_sym_resource_token3,
      aux_sym_drop_aggregate_token1,
  [15713] = 2,
    ACTIONS(1497), 1,
      sym_object_name,
    STATE(1016), 1,
      sym_trigger,
  [15720] = 1,
    ACTIONS(1265), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [15725] = 2,
    ACTIONS(1443), 1,
      sym_object_name,
    STATE(1024), 1,
      sym_function,
  [15732] = 2,
    ACTIONS(1447), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(297), 1,
      sym_code_block,
  [15739] = 2,
    ACTIONS(1503), 1,
      sym_object_name,
    STATE(340), 1,
      sym_aggregate,
  [15746] = 2,
    ACTIONS(1507), 1,
      aux_sym_resource_token3,
    ACTIONS(1509), 1,
      aux_sym_drop_aggregate_token1,
  [15753] = 1,
    ACTIONS(1254), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15758] = 1,
    ACTIONS(1511), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [15763] = 2,
    ACTIONS(1459), 1,
      sym_object_name,
    STATE(1230), 1,
      sym_type,
  [15770] = 2,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(231), 1,
      sym_role,
  [15777] = 2,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_assignment_tuple,
  [15784] = 2,
    ACTIONS(1144), 1,
      sym_object_name,
    STATE(982), 1,
      sym_user,
  [15791] = 2,
    ACTIONS(441), 1,
      aux_sym_clustering_order_token1,
    STATE(288), 1,
      sym_clustering_order,
  [15798] = 2,
    ACTIONS(1457), 1,
      sym_string_literal,
    STATE(251), 1,
      sym_trigger_class,
  [15805] = 2,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    STATE(621), 1,
      sym_assignment_tuple,
  [15812] = 2,
    ACTIONS(1497), 1,
      sym_object_name,
    STATE(1231), 1,
      sym_trigger,
  [15819] = 2,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(186), 1,
      sym_role,
  [15826] = 2,
    ACTIONS(1443), 1,
      sym_object_name,
    STATE(345), 1,
      sym_function,
  [15833] = 2,
    ACTIONS(1443), 1,
      sym_object_name,
    STATE(104), 1,
      sym_function,
  [15840] = 1,
    ACTIONS(1311), 2,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_create_index_token3,
  [15845] = 1,
    ACTIONS(636), 2,
      sym_object_name,
      sym__dquote,
  [15850] = 2,
    ACTIONS(1449), 1,
      sym_object_name,
    STATE(1234), 1,
      sym_materialized_view,
  [15857] = 2,
    ACTIONS(1154), 1,
      sym_object_name,
    STATE(352), 1,
      sym_role,
  [15864] = 2,
    ACTIONS(1503), 1,
      sym_object_name,
    STATE(1253), 1,
      sym_aggregate,
  [15871] = 2,
    ACTIONS(1475), 1,
      aux_sym_from_spec_token1,
    STATE(571), 1,
      sym_from_spec,
  [15878] = 2,
    ACTIONS(1315), 1,
      sym_string_literal,
    STATE(919), 1,
      sym_replication_list_item,
  [15885] = 2,
    ACTIONS(1455), 1,
      aux_sym_role_with_options_token1,
    STATE(118), 1,
      sym_user_password,
  [15892] = 1,
    ACTIONS(1237), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [15897] = 2,
    ACTIONS(1459), 1,
      sym_object_name,
    STATE(955), 1,
      sym_type,
  [15904] = 2,
    ACTIONS(1445), 1,
      sym_object_name,
    STATE(978), 1,
      sym_language,
  [15911] = 2,
    ACTIONS(1461), 1,
      sym_string_literal,
    STATE(871), 1,
      sym_option_hash_item,
  [15918] = 1,
    ACTIONS(1148), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [15923] = 2,
    ACTIONS(1443), 1,
      sym_object_name,
    STATE(983), 1,
      sym_function,
  [15930] = 1,
    ACTIONS(1513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [15935] = 1,
    ACTIONS(1218), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [15940] = 2,
    ACTIONS(1439), 1,
      sym_object_name,
    STATE(517), 1,
      sym_assignment_element,
  [15947] = 2,
    ACTIONS(1457), 1,
      sym_string_literal,
    STATE(358), 1,
      sym_trigger_class,
  [15954] = 2,
    ACTIONS(1441), 1,
      aux_sym_where_spec_token1,
    STATE(993), 1,
      sym_materialized_view_where,
  [15961] = 2,
    ACTIONS(1497), 1,
      sym_object_name,
    STATE(930), 1,
      sym_trigger,
  [15968] = 2,
    ACTIONS(1449), 1,
      sym_object_name,
    STATE(303), 1,
      sym_materialized_view,
  [15975] = 2,
    ACTIONS(1503), 1,
      sym_object_name,
    STATE(1102), 1,
      sym_aggregate,
  [15982] = 2,
    ACTIONS(1443), 1,
      sym_object_name,
    STATE(1105), 1,
      sym_function,
  [15989] = 2,
    ACTIONS(1443), 1,
      sym_object_name,
    STATE(1216), 1,
      sym_function,
  [15996] = 1,
    ACTIONS(1515), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [16001] = 2,
    ACTIONS(1517), 1,
      sym__hex_digit,
    STATE(89), 1,
      aux_sym_hexadecimal_literal_repeat2,
  [16008] = 2,
    ACTIONS(1503), 1,
      sym_object_name,
    STATE(941), 1,
      sym_aggregate,
  [16015] = 2,
    ACTIONS(1457), 1,
      sym_string_literal,
    STATE(290), 1,
      sym_trigger_class,
  [16022] = 2,
    ACTIONS(1449), 1,
      sym_object_name,
    STATE(1110), 1,
      sym_materialized_view,
  [16029] = 2,
    ACTIONS(1519), 1,
      sym__hex_digit,
    STATE(66), 1,
      aux_sym_hexadecimal_literal_repeat2,
  [16036] = 2,
    ACTIONS(1443), 1,
      sym_object_name,
    STATE(943), 1,
      sym_function,
  [16043] = 2,
    ACTIONS(955), 1,
      anon_sym_LPAREN,
    STATE(220), 1,
      sym_option_hash,
  [16050] = 2,
    ACTIONS(1493), 1,
      anon_sym_COMMA,
    ACTIONS(1521), 1,
      anon_sym_RPAREN,
  [16057] = 2,
    ACTIONS(1475), 1,
      aux_sym_from_spec_token1,
    STATE(59), 1,
      sym_from_spec,
  [16064] = 1,
    ACTIONS(1523), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16069] = 1,
    ACTIONS(1175), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16074] = 2,
    ACTIONS(1199), 1,
      sym_object_name,
    STATE(803), 1,
      sym_param,
  [16081] = 2,
    ACTIONS(1489), 1,
      aux_sym_durable_writes_token1,
    STATE(385), 1,
      sym_durable_writes,
  [16088] = 1,
    ACTIONS(546), 2,
      sym_object_name,
      sym__dquote,
  [16093] = 1,
    ACTIONS(1525), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16098] = 1,
    ACTIONS(1527), 1,
      anon_sym_DOT,
  [16102] = 1,
    ACTIONS(1529), 1,
      aux_sym_create_aggregate_token4,
  [16106] = 1,
    ACTIONS(1531), 1,
      aux_sym_create_aggregate_token2,
  [16110] = 1,
    ACTIONS(1533), 1,
      aux_sym_select_statement_token5,
  [16114] = 1,
    ACTIONS(1535), 1,
      anon_sym_RPAREN,
  [16118] = 1,
    ACTIONS(1537), 1,
      aux_sym_create_function_token1,
  [16122] = 1,
    ACTIONS(1539), 1,
      aux_sym_using_timestamp_spec_token1,
  [16126] = 1,
    ACTIONS(1541), 1,
      aux_sym_from_spec_token1,
  [16130] = 1,
    ACTIONS(1543), 1,
      anon_sym_EQ,
  [16134] = 1,
    ACTIONS(1545), 1,
      aux_sym_drop_materialized_view_token2,
  [16138] = 1,
    ACTIONS(1547), 1,
      anon_sym_DOT,
  [16142] = 1,
    ACTIONS(1549), 1,
      anon_sym_RPAREN,
  [16146] = 1,
    ACTIONS(1551), 1,
      anon_sym_DOT,
  [16150] = 1,
    ACTIONS(1553), 1,
      anon_sym_RPAREN,
  [16154] = 1,
    ACTIONS(1555), 1,
      anon_sym_RPAREN,
  [16158] = 1,
    ACTIONS(1557), 1,
      anon_sym_RPAREN,
  [16162] = 1,
    ACTIONS(1559), 1,
      anon_sym_RPAREN,
  [16166] = 1,
    ACTIONS(1561), 1,
      anon_sym_LPAREN,
  [16170] = 1,
    ACTIONS(1563), 1,
      anon_sym_RBRACE,
  [16174] = 1,
    ACTIONS(1565), 1,
      anon_sym_LPAREN,
  [16178] = 1,
    ACTIONS(1567), 1,
      sym_object_name,
  [16182] = 1,
    ACTIONS(1569), 1,
      aux_sym_drop_materialized_view_token2,
  [16186] = 1,
    ACTIONS(1571), 1,
      aux_sym_create_index_token3,
  [16190] = 1,
    ACTIONS(1573), 1,
      aux_sym_create_keyspace_token1,
  [16194] = 1,
    ACTIONS(1575), 1,
      anon_sym_GT,
  [16198] = 1,
    ACTIONS(1577), 1,
      anon_sym_LPAREN,
  [16202] = 1,
    ACTIONS(1579), 1,
      aux_sym_create_index_token3,
  [16206] = 1,
    ACTIONS(1581), 1,
      anon_sym_DOT,
  [16210] = 1,
    ACTIONS(1583), 1,
      anon_sym_RBRACE,
  [16214] = 1,
    ACTIONS(1585), 1,
      anon_sym_EQ,
  [16218] = 1,
    ACTIONS(1587), 1,
      aux_sym_create_function_token1,
  [16222] = 1,
    ACTIONS(1589), 1,
      anon_sym_LPAREN,
  [16226] = 1,
    ACTIONS(1591), 1,
      aux_sym_select_statement_token1,
  [16230] = 1,
    ACTIONS(1593), 1,
      anon_sym_LPAREN,
  [16234] = 1,
    ACTIONS(1595), 1,
      anon_sym_RPAREN,
  [16238] = 1,
    ACTIONS(1597), 1,
      aux_sym_create_function_token2,
  [16242] = 1,
    ACTIONS(1599), 1,
      anon_sym_RPAREN,
  [16246] = 1,
    ACTIONS(1601), 1,
      anon_sym_RPAREN,
  [16250] = 1,
    ACTIONS(1603), 1,
      anon_sym_COMMA,
  [16254] = 1,
    ACTIONS(1605), 1,
      aux_sym_return_mode_token2,
  [16258] = 1,
    ACTIONS(1607), 1,
      anon_sym_LPAREN,
  [16262] = 1,
    ACTIONS(1609), 1,
      anon_sym_RPAREN,
  [16266] = 1,
    ACTIONS(1611), 1,
      aux_sym_create_function_token1,
  [16270] = 1,
    ACTIONS(1613), 1,
      anon_sym_RPAREN,
  [16274] = 1,
    ACTIONS(1615), 1,
      anon_sym_EQ,
  [16278] = 1,
    ACTIONS(1617), 1,
      aux_sym_select_element_token1,
  [16282] = 1,
    ACTIONS(1619), 1,
      sym_object_name,
  [16286] = 1,
    ACTIONS(1621), 1,
      aux_sym_create_function_token2,
  [16290] = 1,
    ACTIONS(1623), 1,
      sym__dquote,
  [16294] = 1,
    ACTIONS(1625), 1,
      aux_sym_create_function_token1,
  [16298] = 1,
    ACTIONS(1627), 1,
      anon_sym_DOT,
  [16302] = 1,
    ACTIONS(1629), 1,
      aux_sym_order_spec_token2,
  [16306] = 1,
    ACTIONS(1631), 1,
      aux_sym_create_function_token1,
  [16310] = 1,
    ACTIONS(1633), 1,
      aux_sym_select_element_token1,
  [16314] = 1,
    ACTIONS(1635), 1,
      aux_sym_select_element_token1,
  [16318] = 1,
    ACTIONS(1637), 1,
      anon_sym_RPAREN,
  [16322] = 1,
    ACTIONS(1639), 1,
      anon_sym_DOT,
  [16326] = 1,
    ACTIONS(1641), 1,
      sym_string_literal,
  [16330] = 1,
    ACTIONS(1643), 1,
      aux_sym_create_materialized_view_token2,
  [16334] = 1,
    ACTIONS(1645), 1,
      aux_sym_create_aggregate_token2,
  [16338] = 1,
    ACTIONS(1647), 1,
      anon_sym_DOT,
  [16342] = 1,
    ACTIONS(1649), 1,
      aux_sym_or_replace_token2,
  [16346] = 1,
    ACTIONS(1651), 1,
      aux_sym_create_aggregate_token3,
  [16350] = 1,
    ACTIONS(1653), 1,
      anon_sym_DOT,
  [16354] = 1,
    ACTIONS(1655), 1,
      aux_sym_from_spec_token1,
  [16358] = 1,
    ACTIONS(1657), 1,
      anon_sym_DOT,
  [16362] = 1,
    ACTIONS(1659), 1,
      anon_sym_RPAREN,
  [16366] = 1,
    ACTIONS(1661), 1,
      aux_sym_insert_statement_token2,
  [16370] = 1,
    ACTIONS(1663), 1,
      anon_sym_RPAREN,
  [16374] = 1,
    ACTIONS(1665), 1,
      aux_sym_create_materialized_view_token1,
  [16378] = 1,
    ACTIONS(1667), 1,
      anon_sym_DOT,
  [16382] = 1,
    ACTIONS(1669), 1,
      aux_sym_create_aggregate_token1,
  [16386] = 1,
    ACTIONS(1671), 1,
      aux_sym_from_spec_token1,
  [16390] = 1,
    ACTIONS(1673), 1,
      aux_sym_select_statement_token1,
  [16394] = 1,
    ACTIONS(1675), 1,
      aux_sym_create_aggregate_token2,
  [16398] = 1,
    ACTIONS(1677), 1,
      anon_sym_RPAREN,
  [16402] = 1,
    ACTIONS(1679), 1,
      sym_object_name,
  [16406] = 1,
    ACTIONS(1681), 1,
      aux_sym_decimal_literal_token1,
  [16410] = 1,
    ACTIONS(1683), 1,
      anon_sym_LPAREN,
  [16414] = 1,
    ACTIONS(1685), 1,
      anon_sym_COLON,
  [16418] = 1,
    ACTIONS(1687), 1,
      aux_sym_select_statement_token5,
  [16422] = 1,
    ACTIONS(1689), 1,
      anon_sym_DOT,
  [16426] = 1,
    ACTIONS(1691), 1,
      aux_sym_create_aggregate_token1,
  [16430] = 1,
    ACTIONS(1693), 1,
      anon_sym_COLON,
  [16434] = 1,
    ACTIONS(1695), 1,
      aux_sym_create_function_token2,
  [16438] = 1,
    ACTIONS(1697), 1,
      anon_sym_RPAREN,
  [16442] = 1,
    ACTIONS(1699), 1,
      anon_sym_RPAREN,
  [16446] = 1,
    ACTIONS(1701), 1,
      aux_sym_return_mode_token2,
  [16450] = 1,
    ACTIONS(1703), 1,
      aux_sym_order_spec_token2,
  [16454] = 1,
    ACTIONS(1705), 1,
      anon_sym_EQ,
  [16458] = 1,
    ACTIONS(1707), 1,
      anon_sym_RPAREN,
  [16462] = 1,
    ACTIONS(1709), 1,
      aux_sym_constant_token1,
  [16466] = 1,
    ACTIONS(1711), 1,
      aux_sym_create_index_token3,
  [16470] = 1,
    ACTIONS(1713), 1,
      aux_sym_create_function_token2,
  [16474] = 1,
    ACTIONS(1715), 1,
      anon_sym_EQ,
  [16478] = 1,
    ACTIONS(1717), 1,
      aux_sym_create_function_token1,
  [16482] = 1,
    ACTIONS(1719), 1,
      aux_sym_select_element_token1,
  [16486] = 1,
    ACTIONS(1721), 1,
      aux_sym_create_function_token1,
  [16490] = 1,
    ACTIONS(1723), 1,
      anon_sym_RBRACE,
  [16494] = 1,
    ACTIONS(1725), 1,
      aux_sym_drop_materialized_view_token2,
  [16498] = 1,
    ACTIONS(1727), 1,
      aux_sym_create_aggregate_token2,
  [16502] = 1,
    ACTIONS(1729), 1,
      aux_sym_create_aggregate_token3,
  [16506] = 1,
    ACTIONS(1731), 1,
      anon_sym_COLON,
  [16510] = 1,
    ACTIONS(1733), 1,
      anon_sym_DOT,
  [16514] = 1,
    ACTIONS(1735), 1,
      anon_sym_LPAREN,
  [16518] = 1,
    ACTIONS(1737), 1,
      aux_sym_decimal_literal_token1,
  [16522] = 1,
    ACTIONS(1739), 1,
      anon_sym_DOT,
  [16526] = 1,
    ACTIONS(1741), 1,
      aux_sym_create_materialized_view_token1,
  [16530] = 1,
    ACTIONS(1743), 1,
      aux_sym_column_not_null_token1,
  [16534] = 1,
    ACTIONS(1745), 1,
      anon_sym_RPAREN,
  [16538] = 1,
    ACTIONS(1747), 1,
      anon_sym_RPAREN,
  [16542] = 1,
    ACTIONS(1749), 1,
      aux_sym_relation_contains_key_token2,
  [16546] = 1,
    ACTIONS(1751), 1,
      anon_sym_RPAREN,
  [16550] = 1,
    ACTIONS(1753), 1,
      anon_sym_RPAREN,
  [16554] = 1,
    ACTIONS(1755), 1,
      anon_sym_RPAREN,
  [16558] = 1,
    ACTIONS(1757), 1,
      anon_sym_RPAREN,
  [16562] = 1,
    ACTIONS(1759), 1,
      anon_sym_LPAREN,
  [16566] = 1,
    ACTIONS(1761), 1,
      sym_object_name,
  [16570] = 1,
    ACTIONS(1763), 1,
      anon_sym_LPAREN,
  [16574] = 1,
    ACTIONS(1421), 1,
      aux_sym_update_token2,
  [16578] = 1,
    ACTIONS(1765), 1,
      aux_sym_order_spec_token1,
  [16582] = 1,
    ACTIONS(1767), 1,
      anon_sym_COMMA,
  [16586] = 1,
    ACTIONS(1769), 1,
      anon_sym_STAR,
  [16590] = 1,
    ACTIONS(1771), 1,
      anon_sym_RPAREN,
  [16594] = 1,
    ACTIONS(1773), 1,
      anon_sym_DOT,
  [16598] = 1,
    ACTIONS(1769), 1,
      sym_object_name,
  [16602] = 1,
    ACTIONS(1775), 1,
      anon_sym_DOT,
  [16606] = 1,
    ACTIONS(1777), 1,
      aux_sym_select_element_token1,
  [16610] = 1,
    ACTIONS(1779), 1,
      anon_sym_DOT,
  [16614] = 1,
    ACTIONS(1781), 1,
      aux_sym_create_function_token2,
  [16618] = 1,
    ACTIONS(1783), 1,
      anon_sym_DOT,
  [16622] = 1,
    ACTIONS(1785), 1,
      anon_sym_LPAREN,
  [16626] = 1,
    ACTIONS(1787), 1,
      aux_sym_code_block_token1,
  [16630] = 1,
    ACTIONS(1789), 1,
      aux_sym_select_statement_token5,
  [16634] = 1,
    ACTIONS(1791), 1,
      aux_sym_create_aggregate_token3,
  [16638] = 1,
    ACTIONS(1793), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [16642] = 1,
    ACTIONS(1795), 1,
      anon_sym_DOT,
  [16646] = 1,
    ACTIONS(1797), 1,
      aux_sym_create_aggregate_token4,
  [16650] = 1,
    ACTIONS(1799), 1,
      anon_sym_EQ,
  [16654] = 1,
    ACTIONS(1801), 1,
      aux_sym_create_materialized_view_token1,
  [16658] = 1,
    ACTIONS(1803), 1,
      anon_sym_DOT,
  [16662] = 1,
    ACTIONS(1805), 1,
      anon_sym_EQ,
  [16666] = 1,
    ACTIONS(1807), 1,
      aux_sym_relation_contains_key_token2,
  [16670] = 1,
    ACTIONS(1809), 1,
      aux_sym_if_not_exist_token1,
  [16674] = 1,
    ACTIONS(1811), 1,
      sym__hex_digit,
  [16678] = 1,
    ACTIONS(1813), 1,
      anon_sym_RBRACK,
  [16682] = 1,
    ACTIONS(1815), 1,
      anon_sym_DOT,
  [16686] = 1,
    ACTIONS(1817), 1,
      anon_sym_LPAREN,
  [16690] = 1,
    ACTIONS(1819), 1,
      aux_sym_create_function_token1,
  [16694] = 1,
    ACTIONS(1821), 1,
      aux_sym_create_aggregate_token2,
  [16698] = 1,
    ACTIONS(1823), 1,
      aux_sym_grant_token2,
  [16702] = 1,
    ACTIONS(1825), 1,
      sym_object_name,
  [16706] = 1,
    ACTIONS(1827), 1,
      anon_sym_RPAREN,
  [16710] = 1,
    ACTIONS(89), 1,
      anon_sym_DOT,
  [16714] = 1,
    ACTIONS(1829), 1,
      sym__dquote,
  [16718] = 1,
    ACTIONS(1831), 1,
      anon_sym_DOT,
  [16722] = 1,
    ACTIONS(1833), 1,
      sym_object_name,
  [16726] = 1,
    ACTIONS(1835), 1,
      anon_sym_EQ,
  [16730] = 1,
    ACTIONS(1837), 1,
      aux_sym_create_materialized_view_token2,
  [16734] = 1,
    ACTIONS(1839), 1,
      anon_sym_EQ,
  [16738] = 1,
    ACTIONS(1841), 1,
      aux_sym_select_element_token1,
  [16742] = 1,
    ACTIONS(1843), 1,
      sym_object_name,
  [16746] = 1,
    ACTIONS(1845), 1,
      aux_sym_create_function_token2,
  [16750] = 1,
    ACTIONS(1847), 1,
      aux_sym_select_statement_token5,
  [16754] = 1,
    ACTIONS(1849), 1,
      anon_sym_DOLLAR_DOLLAR,
  [16758] = 1,
    ACTIONS(1851), 1,
      aux_sym_drop_type_token1,
  [16762] = 1,
    ACTIONS(1853), 1,
      aux_sym_create_aggregate_token3,
  [16766] = 1,
    ACTIONS(1855), 1,
      aux_sym_create_aggregate_token1,
  [16770] = 1,
    ACTIONS(1304), 1,
      aux_sym_update_token2,
  [16774] = 1,
    ACTIONS(1205), 1,
      aux_sym_update_token2,
  [16778] = 1,
    ACTIONS(1857), 1,
      aux_sym_relation_contains_key_token2,
  [16782] = 1,
    ACTIONS(1859), 1,
      aux_sym_grant_token2,
  [16786] = 1,
    ACTIONS(1861), 1,
      aux_sym_create_materialized_view_token1,
  [16790] = 1,
    ACTIONS(1863), 1,
      anon_sym_LPAREN,
  [16794] = 1,
    ACTIONS(1865), 1,
      aux_sym_constant_token1,
  [16798] = 1,
    ACTIONS(1867), 1,
      aux_sym_create_materialized_view_token1,
  [16802] = 1,
    ACTIONS(1869), 1,
      aux_sym_if_not_exist_token1,
  [16806] = 1,
    ACTIONS(1871), 1,
      anon_sym_DOT,
  [16810] = 1,
    ACTIONS(1873), 1,
      anon_sym_LPAREN,
  [16814] = 1,
    ACTIONS(1875), 1,
      anon_sym_DOT,
  [16818] = 1,
    ACTIONS(1877), 1,
      aux_sym_from_spec_token1,
  [16822] = 1,
    ACTIONS(1879), 1,
      anon_sym_LPAREN,
  [16826] = 1,
    ACTIONS(1881), 1,
      anon_sym_RPAREN,
  [16830] = 1,
    ACTIONS(1883), 1,
      anon_sym_RPAREN,
  [16834] = 1,
    ACTIONS(1885), 1,
      aux_sym_from_spec_token1,
  [16838] = 1,
    ACTIONS(1887), 1,
      aux_sym_select_statement_token5,
  [16842] = 1,
    ACTIONS(1889), 1,
      aux_sym_select_element_token1,
  [16846] = 1,
    ACTIONS(1891), 1,
      aux_sym_select_element_token1,
  [16850] = 1,
    ACTIONS(1893), 1,
      aux_sym_select_statement_token1,
  [16854] = 1,
    ACTIONS(1895), 1,
      aux_sym_create_aggregate_token1,
  [16858] = 1,
    ACTIONS(1897), 1,
      aux_sym_create_aggregate_token4,
  [16862] = 1,
    ACTIONS(1899), 1,
      sym__dquote,
  [16866] = 1,
    ACTIONS(1901), 1,
      anon_sym_RPAREN,
  [16870] = 1,
    ACTIONS(1903), 1,
      anon_sym_DOT,
  [16874] = 1,
    ACTIONS(1905), 1,
      anon_sym_LPAREN,
  [16878] = 1,
    ACTIONS(1907), 1,
      anon_sym_DOT,
  [16882] = 1,
    ACTIONS(1909), 1,
      aux_sym_create_materialized_view_token1,
  [16886] = 1,
    ACTIONS(1911), 1,
      anon_sym_LPAREN,
  [16890] = 1,
    ACTIONS(1913), 1,
      aux_sym_constant_token1,
  [16894] = 1,
    ACTIONS(1915), 1,
      aux_sym_relation_contains_key_token2,
  [16898] = 1,
    ACTIONS(1917), 1,
      aux_sym_create_keyspace_token1,
  [16902] = 1,
    ACTIONS(1919), 1,
      anon_sym_DOT,
  [16906] = 1,
    ACTIONS(1921), 1,
      anon_sym_RPAREN,
  [16910] = 1,
    ACTIONS(1923), 1,
      aux_sym_create_function_token2,
  [16914] = 1,
    ACTIONS(1925), 1,
      aux_sym_create_aggregate_token3,
  [16918] = 1,
    ACTIONS(1927), 1,
      sym_string_literal,
  [16922] = 1,
    ACTIONS(1929), 1,
      aux_sym_create_index_token3,
  [16926] = 1,
    ACTIONS(1931), 1,
      aux_sym_select_element_token1,
  [16930] = 1,
    ACTIONS(1933), 1,
      aux_sym_create_function_token1,
  [16934] = 1,
    ACTIONS(1935), 1,
      aux_sym_create_aggregate_token4,
  [16938] = 1,
    ACTIONS(1937), 1,
      aux_sym_grant_token2,
  [16942] = 1,
    ACTIONS(1939), 1,
      anon_sym_LBRACE,
  [16946] = 1,
    ACTIONS(1941), 1,
      anon_sym_COLON,
  [16950] = 1,
    ACTIONS(1943), 1,
      anon_sym_RPAREN,
  [16954] = 1,
    ACTIONS(1945), 1,
      anon_sym_LPAREN,
  [16958] = 1,
    ACTIONS(1947), 1,
      sym_object_name,
  [16962] = 1,
    ACTIONS(1949), 1,
      anon_sym_COLON,
  [16966] = 1,
    ACTIONS(1951), 1,
      aux_sym_relation_contains_key_token2,
  [16970] = 1,
    ACTIONS(1953), 1,
      anon_sym_DOT,
  [16974] = 1,
    ACTIONS(1955), 1,
      aux_sym_create_materialized_view_token1,
  [16978] = 1,
    ACTIONS(1957), 1,
      anon_sym_LPAREN,
  [16982] = 1,
    ACTIONS(1959), 1,
      anon_sym_RPAREN,
  [16986] = 1,
    ACTIONS(1961), 1,
      sym_object_name,
  [16990] = 1,
    ACTIONS(1963), 1,
      sym_object_name,
  [16994] = 1,
    ACTIONS(1965), 1,
      aux_sym_create_index_token3,
  [16998] = 1,
    ACTIONS(1967), 1,
      anon_sym_RPAREN,
  [17002] = 1,
    ACTIONS(1969), 1,
      aux_sym_relation_contains_key_token2,
  [17006] = 1,
    ACTIONS(1971), 1,
      sym_object_name,
  [17010] = 1,
    ACTIONS(1973), 1,
      aux_sym_create_materialized_view_token2,
  [17014] = 1,
    ACTIONS(1975), 1,
      aux_sym_begin_batch_token4,
  [17018] = 1,
    ACTIONS(1977), 1,
      aux_sym_relation_contains_key_token2,
  [17022] = 1,
    ACTIONS(1979), 1,
      anon_sym_RPAREN,
  [17026] = 1,
    ACTIONS(1981), 1,
      anon_sym_DOT,
  [17030] = 1,
    ACTIONS(1983), 1,
      aux_sym_create_index_token3,
  [17034] = 1,
    ACTIONS(1985), 1,
      anon_sym_DOT,
  [17038] = 1,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
  [17042] = 1,
    ACTIONS(1987), 1,
      anon_sym_LPAREN,
  [17046] = 1,
    ACTIONS(1989), 1,
      anon_sym_DOT,
  [17050] = 1,
    ACTIONS(1991), 1,
      anon_sym_LPAREN,
  [17054] = 1,
    ACTIONS(1993), 1,
      anon_sym_RPAREN,
  [17058] = 1,
    ACTIONS(1995), 1,
      aux_sym_relation_contains_key_token2,
  [17062] = 1,
    ACTIONS(1997), 1,
      anon_sym_DOT,
  [17066] = 1,
    ACTIONS(1999), 1,
      anon_sym_LPAREN,
  [17070] = 1,
    ACTIONS(2001), 1,
      anon_sym_DOT,
  [17074] = 1,
    ACTIONS(2003), 1,
      aux_sym_select_element_token1,
  [17078] = 1,
    ACTIONS(2005), 1,
      aux_sym_create_aggregate_token4,
  [17082] = 1,
    ACTIONS(2007), 1,
      anon_sym_RPAREN,
  [17086] = 1,
    ACTIONS(2009), 1,
      sym__dquote,
  [17090] = 1,
    ACTIONS(2011), 1,
      anon_sym_LPAREN,
  [17094] = 1,
    ACTIONS(2013), 1,
      anon_sym_DOT,
  [17098] = 1,
    ACTIONS(2015), 1,
      anon_sym_LPAREN,
  [17102] = 1,
    ACTIONS(2017), 1,
      aux_sym_using_timestamp_spec_token1,
  [17106] = 1,
    ACTIONS(2019), 1,
      anon_sym_DOT,
  [17110] = 1,
    ACTIONS(2021), 1,
      aux_sym_select_statement_token5,
  [17114] = 1,
    ACTIONS(2023), 1,
      aux_sym_update_token2,
  [17118] = 1,
    ACTIONS(2025), 1,
      anon_sym_RPAREN,
  [17122] = 1,
    ACTIONS(2027), 1,
      anon_sym_LPAREN,
  [17126] = 1,
    ACTIONS(2029), 1,
      aux_sym_create_materialized_view_token2,
  [17130] = 1,
    ACTIONS(2031), 1,
      anon_sym_LPAREN,
  [17134] = 1,
    ACTIONS(2033), 1,
      anon_sym_RPAREN,
  [17138] = 1,
    ACTIONS(2035), 1,
      anon_sym_DOT,
  [17142] = 1,
    ACTIONS(2037), 1,
      anon_sym_LPAREN,
  [17146] = 1,
    ACTIONS(2039), 1,
      anon_sym_DOT,
  [17150] = 1,
    ACTIONS(2041), 1,
      anon_sym_RPAREN,
  [17154] = 1,
    ACTIONS(2043), 1,
      anon_sym_LBRACE,
  [17158] = 1,
    ACTIONS(2045), 1,
      anon_sym_LPAREN,
  [17162] = 1,
    ACTIONS(2047), 1,
      anon_sym_RPAREN,
  [17166] = 1,
    ACTIONS(2049), 1,
      aux_sym_create_index_token3,
  [17170] = 1,
    ACTIONS(2051), 1,
      anon_sym_DOT,
  [17174] = 1,
    ACTIONS(2053), 1,
      anon_sym_DOT,
  [17178] = 1,
    ACTIONS(2055), 1,
      anon_sym_LPAREN,
  [17182] = 1,
    ACTIONS(2057), 1,
      anon_sym_LPAREN,
  [17186] = 1,
    ACTIONS(2059), 1,
      anon_sym_DOT,
  [17190] = 1,
    ACTIONS(2061), 1,
      aux_sym_if_exist_token2,
  [17194] = 1,
    ACTIONS(2063), 1,
      anon_sym_DOT,
  [17198] = 1,
    ACTIONS(2065), 1,
      anon_sym_LPAREN,
  [17202] = 1,
    ACTIONS(2067), 1,
      anon_sym_RPAREN,
  [17206] = 1,
    ACTIONS(2069), 1,
      anon_sym_DOT,
  [17210] = 1,
    ACTIONS(2071), 1,
      anon_sym_RPAREN,
  [17214] = 1,
    ACTIONS(2073), 1,
      anon_sym_DOT,
  [17218] = 1,
    ACTIONS(2075), 1,
      anon_sym_RPAREN,
  [17222] = 1,
    ACTIONS(2077), 1,
      aux_sym_resource_token2,
  [17226] = 1,
    ACTIONS(2079), 1,
      anon_sym_DOT,
  [17230] = 1,
    ACTIONS(2081), 1,
      aux_sym_create_materialized_view_token2,
  [17234] = 1,
    ACTIONS(2083), 1,
      anon_sym_LPAREN,
  [17238] = 1,
    ACTIONS(2085), 1,
      anon_sym_DOT,
  [17242] = 1,
    ACTIONS(2087), 1,
      anon_sym_DOT,
  [17246] = 1,
    ACTIONS(2089), 1,
      ts_builtin_sym_end,
  [17250] = 1,
    ACTIONS(2091), 1,
      anon_sym_LBRACE,
  [17254] = 1,
    ACTIONS(2093), 1,
      aux_sym_begin_batch_token4,
  [17258] = 1,
    ACTIONS(2095), 1,
      anon_sym_RBRACK,
  [17262] = 1,
    ACTIONS(2097), 1,
      anon_sym_GT,
  [17266] = 1,
    ACTIONS(2099), 1,
      anon_sym_LPAREN,
  [17270] = 1,
    ACTIONS(2101), 1,
      aux_sym_constant_token1,
  [17274] = 1,
    ACTIONS(2103), 1,
      aux_sym_using_timestamp_spec_token1,
  [17278] = 1,
    ACTIONS(2105), 1,
      anon_sym_DOT,
  [17282] = 1,
    ACTIONS(2107), 1,
      aux_sym_create_index_token3,
  [17286] = 1,
    ACTIONS(2109), 1,
      anon_sym_DOT,
  [17290] = 1,
    ACTIONS(2111), 1,
      aux_sym_select_element_token1,
  [17294] = 1,
    ACTIONS(2113), 1,
      anon_sym_DOT,
  [17298] = 1,
    ACTIONS(2115), 1,
      aux_sym_if_exist_token2,
  [17302] = 1,
    ACTIONS(2117), 1,
      aux_sym_create_index_token3,
  [17306] = 1,
    ACTIONS(2119), 1,
      aux_sym_if_exist_token2,
  [17310] = 1,
    ACTIONS(2121), 1,
      anon_sym_LPAREN,
  [17314] = 1,
    ACTIONS(2123), 1,
      anon_sym_DOT,
  [17318] = 1,
    ACTIONS(2125), 1,
      anon_sym_RPAREN,
  [17322] = 1,
    ACTIONS(2127), 1,
      anon_sym_LPAREN,
  [17326] = 1,
    ACTIONS(2129), 1,
      aux_sym_using_timestamp_spec_token1,
  [17330] = 1,
    ACTIONS(2131), 1,
      sym__dquote,
  [17334] = 1,
    ACTIONS(2133), 1,
      aux_sym_select_statement_token1,
  [17338] = 1,
    ACTIONS(2135), 1,
      aux_sym_select_element_token1,
  [17342] = 1,
    ACTIONS(2137), 1,
      aux_sym_if_exist_token2,
  [17346] = 1,
    ACTIONS(2139), 1,
      aux_sym_if_not_exist_token1,
  [17350] = 1,
    ACTIONS(2141), 1,
      anon_sym_LPAREN,
  [17354] = 1,
    ACTIONS(2143), 1,
      anon_sym_DOT,
  [17358] = 1,
    ACTIONS(2145), 1,
      aux_sym_create_aggregate_token1,
  [17362] = 1,
    ACTIONS(2147), 1,
      aux_sym_create_materialized_view_token2,
  [17366] = 1,
    ACTIONS(2149), 1,
      aux_sym_create_keyspace_token1,
  [17370] = 1,
    ACTIONS(2151), 1,
      sym_object_name,
  [17374] = 1,
    ACTIONS(2153), 1,
      aux_sym_create_index_token3,
  [17378] = 1,
    ACTIONS(2155), 1,
      anon_sym_LPAREN,
  [17382] = 1,
    ACTIONS(2157), 1,
      anon_sym_DOT,
  [17386] = 1,
    ACTIONS(2159), 1,
      aux_sym_if_not_exist_token1,
  [17390] = 1,
    ACTIONS(2161), 1,
      anon_sym_LPAREN,
  [17394] = 1,
    ACTIONS(2163), 1,
      anon_sym_DOT,
  [17398] = 1,
    ACTIONS(2165), 1,
      sym_object_name,
  [17402] = 1,
    ACTIONS(2167), 1,
      anon_sym_RPAREN,
  [17406] = 1,
    ACTIONS(2169), 1,
      aux_sym_insert_statement_token2,
  [17410] = 1,
    ACTIONS(2171), 1,
      aux_sym_if_exist_token2,
  [17414] = 1,
    ACTIONS(2173), 1,
      anon_sym_LPAREN,
  [17418] = 1,
    ACTIONS(2175), 1,
      sym_object_name,
  [17422] = 1,
    ACTIONS(2177), 1,
      anon_sym_DOT,
  [17426] = 1,
    ACTIONS(2179), 1,
      sym_object_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 92,
  [SMALL_STATE(4)] = 184,
  [SMALL_STATE(5)] = 219,
  [SMALL_STATE(6)] = 256,
  [SMALL_STATE(7)] = 291,
  [SMALL_STATE(8)] = 327,
  [SMALL_STATE(9)] = 361,
  [SMALL_STATE(10)] = 394,
  [SMALL_STATE(11)] = 427,
  [SMALL_STATE(12)] = 460,
  [SMALL_STATE(13)] = 494,
  [SMALL_STATE(14)] = 528,
  [SMALL_STATE(15)] = 565,
  [SMALL_STATE(16)] = 602,
  [SMALL_STATE(17)] = 639,
  [SMALL_STATE(18)] = 676,
  [SMALL_STATE(19)] = 713,
  [SMALL_STATE(20)] = 750,
  [SMALL_STATE(21)] = 783,
  [SMALL_STATE(22)] = 820,
  [SMALL_STATE(23)] = 857,
  [SMALL_STATE(24)] = 894,
  [SMALL_STATE(25)] = 931,
  [SMALL_STATE(26)] = 968,
  [SMALL_STATE(27)] = 1005,
  [SMALL_STATE(28)] = 1042,
  [SMALL_STATE(29)] = 1079,
  [SMALL_STATE(30)] = 1116,
  [SMALL_STATE(31)] = 1153,
  [SMALL_STATE(32)] = 1190,
  [SMALL_STATE(33)] = 1223,
  [SMALL_STATE(34)] = 1260,
  [SMALL_STATE(35)] = 1291,
  [SMALL_STATE(36)] = 1322,
  [SMALL_STATE(37)] = 1359,
  [SMALL_STATE(38)] = 1396,
  [SMALL_STATE(39)] = 1433,
  [SMALL_STATE(40)] = 1470,
  [SMALL_STATE(41)] = 1507,
  [SMALL_STATE(42)] = 1544,
  [SMALL_STATE(43)] = 1578,
  [SMALL_STATE(44)] = 1612,
  [SMALL_STATE(45)] = 1644,
  [SMALL_STATE(46)] = 1672,
  [SMALL_STATE(47)] = 1700,
  [SMALL_STATE(48)] = 1731,
  [SMALL_STATE(49)] = 1762,
  [SMALL_STATE(50)] = 1789,
  [SMALL_STATE(51)] = 1816,
  [SMALL_STATE(52)] = 1843,
  [SMALL_STATE(53)] = 1874,
  [SMALL_STATE(54)] = 1901,
  [SMALL_STATE(55)] = 1932,
  [SMALL_STATE(56)] = 1984,
  [SMALL_STATE(57)] = 2014,
  [SMALL_STATE(58)] = 2040,
  [SMALL_STATE(59)] = 2080,
  [SMALL_STATE(60)] = 2120,
  [SMALL_STATE(61)] = 2160,
  [SMALL_STATE(62)] = 2199,
  [SMALL_STATE(63)] = 2224,
  [SMALL_STATE(64)] = 2249,
  [SMALL_STATE(65)] = 2274,
  [SMALL_STATE(66)] = 2301,
  [SMALL_STATE(67)] = 2330,
  [SMALL_STATE(68)] = 2355,
  [SMALL_STATE(69)] = 2404,
  [SMALL_STATE(70)] = 2429,
  [SMALL_STATE(71)] = 2454,
  [SMALL_STATE(72)] = 2479,
  [SMALL_STATE(73)] = 2504,
  [SMALL_STATE(74)] = 2529,
  [SMALL_STATE(75)] = 2554,
  [SMALL_STATE(76)] = 2583,
  [SMALL_STATE(77)] = 2609,
  [SMALL_STATE(78)] = 2633,
  [SMALL_STATE(79)] = 2661,
  [SMALL_STATE(80)] = 2689,
  [SMALL_STATE(81)] = 2713,
  [SMALL_STATE(82)] = 2737,
  [SMALL_STATE(83)] = 2761,
  [SMALL_STATE(84)] = 2785,
  [SMALL_STATE(85)] = 2819,
  [SMALL_STATE(86)] = 2843,
  [SMALL_STATE(87)] = 2871,
  [SMALL_STATE(88)] = 2905,
  [SMALL_STATE(89)] = 2933,
  [SMALL_STATE(90)] = 2961,
  [SMALL_STATE(91)] = 2985,
  [SMALL_STATE(92)] = 3009,
  [SMALL_STATE(93)] = 3043,
  [SMALL_STATE(94)] = 3071,
  [SMALL_STATE(95)] = 3102,
  [SMALL_STATE(96)] = 3133,
  [SMALL_STATE(97)] = 3156,
  [SMALL_STATE(98)] = 3205,
  [SMALL_STATE(99)] = 3236,
  [SMALL_STATE(100)] = 3267,
  [SMALL_STATE(101)] = 3298,
  [SMALL_STATE(102)] = 3323,
  [SMALL_STATE(103)] = 3346,
  [SMALL_STATE(104)] = 3371,
  [SMALL_STATE(105)] = 3393,
  [SMALL_STATE(106)] = 3419,
  [SMALL_STATE(107)] = 3445,
  [SMALL_STATE(108)] = 3471,
  [SMALL_STATE(109)] = 3493,
  [SMALL_STATE(110)] = 3521,
  [SMALL_STATE(111)] = 3547,
  [SMALL_STATE(112)] = 3573,
  [SMALL_STATE(113)] = 3615,
  [SMALL_STATE(114)] = 3639,
  [SMALL_STATE(115)] = 3665,
  [SMALL_STATE(116)] = 3687,
  [SMALL_STATE(117)] = 3709,
  [SMALL_STATE(118)] = 3751,
  [SMALL_STATE(119)] = 3777,
  [SMALL_STATE(120)] = 3803,
  [SMALL_STATE(121)] = 3829,
  [SMALL_STATE(122)] = 3857,
  [SMALL_STATE(123)] = 3879,
  [SMALL_STATE(124)] = 3905,
  [SMALL_STATE(125)] = 3927,
  [SMALL_STATE(126)] = 3953,
  [SMALL_STATE(127)] = 3975,
  [SMALL_STATE(128)] = 4023,
  [SMALL_STATE(129)] = 4049,
  [SMALL_STATE(130)] = 4075,
  [SMALL_STATE(131)] = 4099,
  [SMALL_STATE(132)] = 4127,
  [SMALL_STATE(133)] = 4153,
  [SMALL_STATE(134)] = 4179,
  [SMALL_STATE(135)] = 4201,
  [SMALL_STATE(136)] = 4229,
  [SMALL_STATE(137)] = 4271,
  [SMALL_STATE(138)] = 4293,
  [SMALL_STATE(139)] = 4319,
  [SMALL_STATE(140)] = 4361,
  [SMALL_STATE(141)] = 4383,
  [SMALL_STATE(142)] = 4409,
  [SMALL_STATE(143)] = 4451,
  [SMALL_STATE(144)] = 4477,
  [SMALL_STATE(145)] = 4519,
  [SMALL_STATE(146)] = 4545,
  [SMALL_STATE(147)] = 4571,
  [SMALL_STATE(148)] = 4593,
  [SMALL_STATE(149)] = 4619,
  [SMALL_STATE(150)] = 4669,
  [SMALL_STATE(151)] = 4694,
  [SMALL_STATE(152)] = 4719,
  [SMALL_STATE(153)] = 4744,
  [SMALL_STATE(154)] = 4769,
  [SMALL_STATE(155)] = 4790,
  [SMALL_STATE(156)] = 4815,
  [SMALL_STATE(157)] = 4836,
  [SMALL_STATE(158)] = 4861,
  [SMALL_STATE(159)] = 4886,
  [SMALL_STATE(160)] = 4907,
  [SMALL_STATE(161)] = 4932,
  [SMALL_STATE(162)] = 4953,
  [SMALL_STATE(163)] = 4978,
  [SMALL_STATE(164)] = 5001,
  [SMALL_STATE(165)] = 5024,
  [SMALL_STATE(166)] = 5049,
  [SMALL_STATE(167)] = 5094,
  [SMALL_STATE(168)] = 5115,
  [SMALL_STATE(169)] = 5140,
  [SMALL_STATE(170)] = 5161,
  [SMALL_STATE(171)] = 5182,
  [SMALL_STATE(172)] = 5207,
  [SMALL_STATE(173)] = 5232,
  [SMALL_STATE(174)] = 5253,
  [SMALL_STATE(175)] = 5278,
  [SMALL_STATE(176)] = 5303,
  [SMALL_STATE(177)] = 5328,
  [SMALL_STATE(178)] = 5353,
  [SMALL_STATE(179)] = 5374,
  [SMALL_STATE(180)] = 5395,
  [SMALL_STATE(181)] = 5420,
  [SMALL_STATE(182)] = 5441,
  [SMALL_STATE(183)] = 5466,
  [SMALL_STATE(184)] = 5489,
  [SMALL_STATE(185)] = 5514,
  [SMALL_STATE(186)] = 5539,
  [SMALL_STATE(187)] = 5564,
  [SMALL_STATE(188)] = 5585,
  [SMALL_STATE(189)] = 5606,
  [SMALL_STATE(190)] = 5631,
  [SMALL_STATE(191)] = 5656,
  [SMALL_STATE(192)] = 5679,
  [SMALL_STATE(193)] = 5702,
  [SMALL_STATE(194)] = 5723,
  [SMALL_STATE(195)] = 5744,
  [SMALL_STATE(196)] = 5769,
  [SMALL_STATE(197)] = 5794,
  [SMALL_STATE(198)] = 5815,
  [SMALL_STATE(199)] = 5840,
  [SMALL_STATE(200)] = 5865,
  [SMALL_STATE(201)] = 5886,
  [SMALL_STATE(202)] = 5911,
  [SMALL_STATE(203)] = 5932,
  [SMALL_STATE(204)] = 5957,
  [SMALL_STATE(205)] = 5978,
  [SMALL_STATE(206)] = 5999,
  [SMALL_STATE(207)] = 6021,
  [SMALL_STATE(208)] = 6043,
  [SMALL_STATE(209)] = 6065,
  [SMALL_STATE(210)] = 6085,
  [SMALL_STATE(211)] = 6107,
  [SMALL_STATE(212)] = 6129,
  [SMALL_STATE(213)] = 6151,
  [SMALL_STATE(214)] = 6171,
  [SMALL_STATE(215)] = 6191,
  [SMALL_STATE(216)] = 6233,
  [SMALL_STATE(217)] = 6253,
  [SMALL_STATE(218)] = 6275,
  [SMALL_STATE(219)] = 6317,
  [SMALL_STATE(220)] = 6339,
  [SMALL_STATE(221)] = 6359,
  [SMALL_STATE(222)] = 6379,
  [SMALL_STATE(223)] = 6399,
  [SMALL_STATE(224)] = 6419,
  [SMALL_STATE(225)] = 6441,
  [SMALL_STATE(226)] = 6463,
  [SMALL_STATE(227)] = 6485,
  [SMALL_STATE(228)] = 6507,
  [SMALL_STATE(229)] = 6527,
  [SMALL_STATE(230)] = 6569,
  [SMALL_STATE(231)] = 6591,
  [SMALL_STATE(232)] = 6613,
  [SMALL_STATE(233)] = 6635,
  [SMALL_STATE(234)] = 6655,
  [SMALL_STATE(235)] = 6677,
  [SMALL_STATE(236)] = 6699,
  [SMALL_STATE(237)] = 6719,
  [SMALL_STATE(238)] = 6741,
  [SMALL_STATE(239)] = 6763,
  [SMALL_STATE(240)] = 6805,
  [SMALL_STATE(241)] = 6827,
  [SMALL_STATE(242)] = 6849,
  [SMALL_STATE(243)] = 6869,
  [SMALL_STATE(244)] = 6888,
  [SMALL_STATE(245)] = 6907,
  [SMALL_STATE(246)] = 6926,
  [SMALL_STATE(247)] = 6945,
  [SMALL_STATE(248)] = 6964,
  [SMALL_STATE(249)] = 6983,
  [SMALL_STATE(250)] = 7002,
  [SMALL_STATE(251)] = 7021,
  [SMALL_STATE(252)] = 7040,
  [SMALL_STATE(253)] = 7059,
  [SMALL_STATE(254)] = 7078,
  [SMALL_STATE(255)] = 7097,
  [SMALL_STATE(256)] = 7116,
  [SMALL_STATE(257)] = 7135,
  [SMALL_STATE(258)] = 7154,
  [SMALL_STATE(259)] = 7173,
  [SMALL_STATE(260)] = 7192,
  [SMALL_STATE(261)] = 7211,
  [SMALL_STATE(262)] = 7230,
  [SMALL_STATE(263)] = 7249,
  [SMALL_STATE(264)] = 7268,
  [SMALL_STATE(265)] = 7287,
  [SMALL_STATE(266)] = 7306,
  [SMALL_STATE(267)] = 7325,
  [SMALL_STATE(268)] = 7344,
  [SMALL_STATE(269)] = 7363,
  [SMALL_STATE(270)] = 7382,
  [SMALL_STATE(271)] = 7401,
  [SMALL_STATE(272)] = 7420,
  [SMALL_STATE(273)] = 7439,
  [SMALL_STATE(274)] = 7458,
  [SMALL_STATE(275)] = 7477,
  [SMALL_STATE(276)] = 7496,
  [SMALL_STATE(277)] = 7515,
  [SMALL_STATE(278)] = 7534,
  [SMALL_STATE(279)] = 7553,
  [SMALL_STATE(280)] = 7574,
  [SMALL_STATE(281)] = 7593,
  [SMALL_STATE(282)] = 7612,
  [SMALL_STATE(283)] = 7631,
  [SMALL_STATE(284)] = 7650,
  [SMALL_STATE(285)] = 7669,
  [SMALL_STATE(286)] = 7688,
  [SMALL_STATE(287)] = 7707,
  [SMALL_STATE(288)] = 7726,
  [SMALL_STATE(289)] = 7745,
  [SMALL_STATE(290)] = 7764,
  [SMALL_STATE(291)] = 7783,
  [SMALL_STATE(292)] = 7802,
  [SMALL_STATE(293)] = 7821,
  [SMALL_STATE(294)] = 7840,
  [SMALL_STATE(295)] = 7859,
  [SMALL_STATE(296)] = 7878,
  [SMALL_STATE(297)] = 7897,
  [SMALL_STATE(298)] = 7916,
  [SMALL_STATE(299)] = 7935,
  [SMALL_STATE(300)] = 7954,
  [SMALL_STATE(301)] = 7973,
  [SMALL_STATE(302)] = 7992,
  [SMALL_STATE(303)] = 8011,
  [SMALL_STATE(304)] = 8030,
  [SMALL_STATE(305)] = 8049,
  [SMALL_STATE(306)] = 8068,
  [SMALL_STATE(307)] = 8087,
  [SMALL_STATE(308)] = 8106,
  [SMALL_STATE(309)] = 8125,
  [SMALL_STATE(310)] = 8144,
  [SMALL_STATE(311)] = 8163,
  [SMALL_STATE(312)] = 8182,
  [SMALL_STATE(313)] = 8201,
  [SMALL_STATE(314)] = 8220,
  [SMALL_STATE(315)] = 8239,
  [SMALL_STATE(316)] = 8258,
  [SMALL_STATE(317)] = 8277,
  [SMALL_STATE(318)] = 8296,
  [SMALL_STATE(319)] = 8315,
  [SMALL_STATE(320)] = 8352,
  [SMALL_STATE(321)] = 8371,
  [SMALL_STATE(322)] = 8390,
  [SMALL_STATE(323)] = 8409,
  [SMALL_STATE(324)] = 8428,
  [SMALL_STATE(325)] = 8447,
  [SMALL_STATE(326)] = 8466,
  [SMALL_STATE(327)] = 8505,
  [SMALL_STATE(328)] = 8524,
  [SMALL_STATE(329)] = 8543,
  [SMALL_STATE(330)] = 8562,
  [SMALL_STATE(331)] = 8581,
  [SMALL_STATE(332)] = 8600,
  [SMALL_STATE(333)] = 8619,
  [SMALL_STATE(334)] = 8638,
  [SMALL_STATE(335)] = 8657,
  [SMALL_STATE(336)] = 8676,
  [SMALL_STATE(337)] = 8695,
  [SMALL_STATE(338)] = 8714,
  [SMALL_STATE(339)] = 8733,
  [SMALL_STATE(340)] = 8752,
  [SMALL_STATE(341)] = 8771,
  [SMALL_STATE(342)] = 8790,
  [SMALL_STATE(343)] = 8809,
  [SMALL_STATE(344)] = 8828,
  [SMALL_STATE(345)] = 8847,
  [SMALL_STATE(346)] = 8866,
  [SMALL_STATE(347)] = 8885,
  [SMALL_STATE(348)] = 8904,
  [SMALL_STATE(349)] = 8923,
  [SMALL_STATE(350)] = 8942,
  [SMALL_STATE(351)] = 8961,
  [SMALL_STATE(352)] = 8980,
  [SMALL_STATE(353)] = 8999,
  [SMALL_STATE(354)] = 9018,
  [SMALL_STATE(355)] = 9037,
  [SMALL_STATE(356)] = 9056,
  [SMALL_STATE(357)] = 9075,
  [SMALL_STATE(358)] = 9094,
  [SMALL_STATE(359)] = 9113,
  [SMALL_STATE(360)] = 9132,
  [SMALL_STATE(361)] = 9151,
  [SMALL_STATE(362)] = 9170,
  [SMALL_STATE(363)] = 9189,
  [SMALL_STATE(364)] = 9208,
  [SMALL_STATE(365)] = 9227,
  [SMALL_STATE(366)] = 9246,
  [SMALL_STATE(367)] = 9265,
  [SMALL_STATE(368)] = 9284,
  [SMALL_STATE(369)] = 9303,
  [SMALL_STATE(370)] = 9322,
  [SMALL_STATE(371)] = 9341,
  [SMALL_STATE(372)] = 9360,
  [SMALL_STATE(373)] = 9379,
  [SMALL_STATE(374)] = 9398,
  [SMALL_STATE(375)] = 9417,
  [SMALL_STATE(376)] = 9436,
  [SMALL_STATE(377)] = 9455,
  [SMALL_STATE(378)] = 9474,
  [SMALL_STATE(379)] = 9493,
  [SMALL_STATE(380)] = 9512,
  [SMALL_STATE(381)] = 9531,
  [SMALL_STATE(382)] = 9550,
  [SMALL_STATE(383)] = 9569,
  [SMALL_STATE(384)] = 9588,
  [SMALL_STATE(385)] = 9607,
  [SMALL_STATE(386)] = 9626,
  [SMALL_STATE(387)] = 9645,
  [SMALL_STATE(388)] = 9664,
  [SMALL_STATE(389)] = 9683,
  [SMALL_STATE(390)] = 9719,
  [SMALL_STATE(391)] = 9755,
  [SMALL_STATE(392)] = 9791,
  [SMALL_STATE(393)] = 9809,
  [SMALL_STATE(394)] = 9845,
  [SMALL_STATE(395)] = 9878,
  [SMALL_STATE(396)] = 9911,
  [SMALL_STATE(397)] = 9944,
  [SMALL_STATE(398)] = 9977,
  [SMALL_STATE(399)] = 10010,
  [SMALL_STATE(400)] = 10043,
  [SMALL_STATE(401)] = 10076,
  [SMALL_STATE(402)] = 10109,
  [SMALL_STATE(403)] = 10142,
  [SMALL_STATE(404)] = 10175,
  [SMALL_STATE(405)] = 10208,
  [SMALL_STATE(406)] = 10241,
  [SMALL_STATE(407)] = 10274,
  [SMALL_STATE(408)] = 10307,
  [SMALL_STATE(409)] = 10340,
  [SMALL_STATE(410)] = 10373,
  [SMALL_STATE(411)] = 10406,
  [SMALL_STATE(412)] = 10439,
  [SMALL_STATE(413)] = 10472,
  [SMALL_STATE(414)] = 10509,
  [SMALL_STATE(415)] = 10529,
  [SMALL_STATE(416)] = 10560,
  [SMALL_STATE(417)] = 10591,
  [SMALL_STATE(418)] = 10614,
  [SMALL_STATE(419)] = 10631,
  [SMALL_STATE(420)] = 10648,
  [SMALL_STATE(421)] = 10671,
  [SMALL_STATE(422)] = 10694,
  [SMALL_STATE(423)] = 10717,
  [SMALL_STATE(424)] = 10742,
  [SMALL_STATE(425)] = 10767,
  [SMALL_STATE(426)] = 10784,
  [SMALL_STATE(427)] = 10809,
  [SMALL_STATE(428)] = 10826,
  [SMALL_STATE(429)] = 10851,
  [SMALL_STATE(430)] = 10874,
  [SMALL_STATE(431)] = 10905,
  [SMALL_STATE(432)] = 10936,
  [SMALL_STATE(433)] = 10961,
  [SMALL_STATE(434)] = 10985,
  [SMALL_STATE(435)] = 11010,
  [SMALL_STATE(436)] = 11033,
  [SMALL_STATE(437)] = 11052,
  [SMALL_STATE(438)] = 11075,
  [SMALL_STATE(439)] = 11098,
  [SMALL_STATE(440)] = 11116,
  [SMALL_STATE(441)] = 11130,
  [SMALL_STATE(442)] = 11150,
  [SMALL_STATE(443)] = 11170,
  [SMALL_STATE(444)] = 11184,
  [SMALL_STATE(445)] = 11206,
  [SMALL_STATE(446)] = 11228,
  [SMALL_STATE(447)] = 11248,
  [SMALL_STATE(448)] = 11266,
  [SMALL_STATE(449)] = 11288,
  [SMALL_STATE(450)] = 11310,
  [SMALL_STATE(451)] = 11332,
  [SMALL_STATE(452)] = 11354,
  [SMALL_STATE(453)] = 11376,
  [SMALL_STATE(454)] = 11398,
  [SMALL_STATE(455)] = 11409,
  [SMALL_STATE(456)] = 11428,
  [SMALL_STATE(457)] = 11447,
  [SMALL_STATE(458)] = 11466,
  [SMALL_STATE(459)] = 11485,
  [SMALL_STATE(460)] = 11504,
  [SMALL_STATE(461)] = 11523,
  [SMALL_STATE(462)] = 11542,
  [SMALL_STATE(463)] = 11561,
  [SMALL_STATE(464)] = 11580,
  [SMALL_STATE(465)] = 11599,
  [SMALL_STATE(466)] = 11618,
  [SMALL_STATE(467)] = 11637,
  [SMALL_STATE(468)] = 11656,
  [SMALL_STATE(469)] = 11667,
  [SMALL_STATE(470)] = 11678,
  [SMALL_STATE(471)] = 11697,
  [SMALL_STATE(472)] = 11708,
  [SMALL_STATE(473)] = 11727,
  [SMALL_STATE(474)] = 11738,
  [SMALL_STATE(475)] = 11757,
  [SMALL_STATE(476)] = 11768,
  [SMALL_STATE(477)] = 11787,
  [SMALL_STATE(478)] = 11806,
  [SMALL_STATE(479)] = 11825,
  [SMALL_STATE(480)] = 11844,
  [SMALL_STATE(481)] = 11863,
  [SMALL_STATE(482)] = 11882,
  [SMALL_STATE(483)] = 11898,
  [SMALL_STATE(484)] = 11914,
  [SMALL_STATE(485)] = 11922,
  [SMALL_STATE(486)] = 11938,
  [SMALL_STATE(487)] = 11954,
  [SMALL_STATE(488)] = 11970,
  [SMALL_STATE(489)] = 11986,
  [SMALL_STATE(490)] = 12002,
  [SMALL_STATE(491)] = 12018,
  [SMALL_STATE(492)] = 12026,
  [SMALL_STATE(493)] = 12042,
  [SMALL_STATE(494)] = 12050,
  [SMALL_STATE(495)] = 12062,
  [SMALL_STATE(496)] = 12070,
  [SMALL_STATE(497)] = 12082,
  [SMALL_STATE(498)] = 12090,
  [SMALL_STATE(499)] = 12106,
  [SMALL_STATE(500)] = 12122,
  [SMALL_STATE(501)] = 12134,
  [SMALL_STATE(502)] = 12150,
  [SMALL_STATE(503)] = 12164,
  [SMALL_STATE(504)] = 12180,
  [SMALL_STATE(505)] = 12188,
  [SMALL_STATE(506)] = 12202,
  [SMALL_STATE(507)] = 12218,
  [SMALL_STATE(508)] = 12234,
  [SMALL_STATE(509)] = 12250,
  [SMALL_STATE(510)] = 12266,
  [SMALL_STATE(511)] = 12274,
  [SMALL_STATE(512)] = 12290,
  [SMALL_STATE(513)] = 12306,
  [SMALL_STATE(514)] = 12320,
  [SMALL_STATE(515)] = 12336,
  [SMALL_STATE(516)] = 12352,
  [SMALL_STATE(517)] = 12365,
  [SMALL_STATE(518)] = 12378,
  [SMALL_STATE(519)] = 12391,
  [SMALL_STATE(520)] = 12404,
  [SMALL_STATE(521)] = 12417,
  [SMALL_STATE(522)] = 12430,
  [SMALL_STATE(523)] = 12443,
  [SMALL_STATE(524)] = 12456,
  [SMALL_STATE(525)] = 12469,
  [SMALL_STATE(526)] = 12482,
  [SMALL_STATE(527)] = 12495,
  [SMALL_STATE(528)] = 12508,
  [SMALL_STATE(529)] = 12521,
  [SMALL_STATE(530)] = 12534,
  [SMALL_STATE(531)] = 12547,
  [SMALL_STATE(532)] = 12560,
  [SMALL_STATE(533)] = 12573,
  [SMALL_STATE(534)] = 12586,
  [SMALL_STATE(535)] = 12599,
  [SMALL_STATE(536)] = 12612,
  [SMALL_STATE(537)] = 12625,
  [SMALL_STATE(538)] = 12638,
  [SMALL_STATE(539)] = 12651,
  [SMALL_STATE(540)] = 12664,
  [SMALL_STATE(541)] = 12677,
  [SMALL_STATE(542)] = 12690,
  [SMALL_STATE(543)] = 12703,
  [SMALL_STATE(544)] = 12716,
  [SMALL_STATE(545)] = 12729,
  [SMALL_STATE(546)] = 12742,
  [SMALL_STATE(547)] = 12755,
  [SMALL_STATE(548)] = 12768,
  [SMALL_STATE(549)] = 12781,
  [SMALL_STATE(550)] = 12794,
  [SMALL_STATE(551)] = 12807,
  [SMALL_STATE(552)] = 12820,
  [SMALL_STATE(553)] = 12833,
  [SMALL_STATE(554)] = 12846,
  [SMALL_STATE(555)] = 12859,
  [SMALL_STATE(556)] = 12872,
  [SMALL_STATE(557)] = 12885,
  [SMALL_STATE(558)] = 12898,
  [SMALL_STATE(559)] = 12911,
  [SMALL_STATE(560)] = 12924,
  [SMALL_STATE(561)] = 12937,
  [SMALL_STATE(562)] = 12950,
  [SMALL_STATE(563)] = 12963,
  [SMALL_STATE(564)] = 12976,
  [SMALL_STATE(565)] = 12989,
  [SMALL_STATE(566)] = 13002,
  [SMALL_STATE(567)] = 13015,
  [SMALL_STATE(568)] = 13026,
  [SMALL_STATE(569)] = 13039,
  [SMALL_STATE(570)] = 13052,
  [SMALL_STATE(571)] = 13065,
  [SMALL_STATE(572)] = 13078,
  [SMALL_STATE(573)] = 13091,
  [SMALL_STATE(574)] = 13104,
  [SMALL_STATE(575)] = 13117,
  [SMALL_STATE(576)] = 13130,
  [SMALL_STATE(577)] = 13143,
  [SMALL_STATE(578)] = 13156,
  [SMALL_STATE(579)] = 13169,
  [SMALL_STATE(580)] = 13182,
  [SMALL_STATE(581)] = 13189,
  [SMALL_STATE(582)] = 13202,
  [SMALL_STATE(583)] = 13211,
  [SMALL_STATE(584)] = 13218,
  [SMALL_STATE(585)] = 13231,
  [SMALL_STATE(586)] = 13244,
  [SMALL_STATE(587)] = 13257,
  [SMALL_STATE(588)] = 13270,
  [SMALL_STATE(589)] = 13283,
  [SMALL_STATE(590)] = 13296,
  [SMALL_STATE(591)] = 13309,
  [SMALL_STATE(592)] = 13322,
  [SMALL_STATE(593)] = 13335,
  [SMALL_STATE(594)] = 13348,
  [SMALL_STATE(595)] = 13361,
  [SMALL_STATE(596)] = 13374,
  [SMALL_STATE(597)] = 13387,
  [SMALL_STATE(598)] = 13398,
  [SMALL_STATE(599)] = 13411,
  [SMALL_STATE(600)] = 13424,
  [SMALL_STATE(601)] = 13437,
  [SMALL_STATE(602)] = 13450,
  [SMALL_STATE(603)] = 13463,
  [SMALL_STATE(604)] = 13476,
  [SMALL_STATE(605)] = 13489,
  [SMALL_STATE(606)] = 13499,
  [SMALL_STATE(607)] = 13509,
  [SMALL_STATE(608)] = 13519,
  [SMALL_STATE(609)] = 13529,
  [SMALL_STATE(610)] = 13539,
  [SMALL_STATE(611)] = 13549,
  [SMALL_STATE(612)] = 13557,
  [SMALL_STATE(613)] = 13567,
  [SMALL_STATE(614)] = 13575,
  [SMALL_STATE(615)] = 13585,
  [SMALL_STATE(616)] = 13595,
  [SMALL_STATE(617)] = 13605,
  [SMALL_STATE(618)] = 13615,
  [SMALL_STATE(619)] = 13625,
  [SMALL_STATE(620)] = 13635,
  [SMALL_STATE(621)] = 13645,
  [SMALL_STATE(622)] = 13655,
  [SMALL_STATE(623)] = 13665,
  [SMALL_STATE(624)] = 13675,
  [SMALL_STATE(625)] = 13685,
  [SMALL_STATE(626)] = 13695,
  [SMALL_STATE(627)] = 13705,
  [SMALL_STATE(628)] = 13715,
  [SMALL_STATE(629)] = 13725,
  [SMALL_STATE(630)] = 13735,
  [SMALL_STATE(631)] = 13745,
  [SMALL_STATE(632)] = 13755,
  [SMALL_STATE(633)] = 13765,
  [SMALL_STATE(634)] = 13775,
  [SMALL_STATE(635)] = 13785,
  [SMALL_STATE(636)] = 13795,
  [SMALL_STATE(637)] = 13805,
  [SMALL_STATE(638)] = 13815,
  [SMALL_STATE(639)] = 13825,
  [SMALL_STATE(640)] = 13835,
  [SMALL_STATE(641)] = 13845,
  [SMALL_STATE(642)] = 13855,
  [SMALL_STATE(643)] = 13865,
  [SMALL_STATE(644)] = 13873,
  [SMALL_STATE(645)] = 13883,
  [SMALL_STATE(646)] = 13891,
  [SMALL_STATE(647)] = 13901,
  [SMALL_STATE(648)] = 13911,
  [SMALL_STATE(649)] = 13921,
  [SMALL_STATE(650)] = 13931,
  [SMALL_STATE(651)] = 13941,
  [SMALL_STATE(652)] = 13951,
  [SMALL_STATE(653)] = 13961,
  [SMALL_STATE(654)] = 13971,
  [SMALL_STATE(655)] = 13981,
  [SMALL_STATE(656)] = 13991,
  [SMALL_STATE(657)] = 14001,
  [SMALL_STATE(658)] = 14011,
  [SMALL_STATE(659)] = 14021,
  [SMALL_STATE(660)] = 14031,
  [SMALL_STATE(661)] = 14041,
  [SMALL_STATE(662)] = 14051,
  [SMALL_STATE(663)] = 14061,
  [SMALL_STATE(664)] = 14071,
  [SMALL_STATE(665)] = 14081,
  [SMALL_STATE(666)] = 14091,
  [SMALL_STATE(667)] = 14101,
  [SMALL_STATE(668)] = 14111,
  [SMALL_STATE(669)] = 14121,
  [SMALL_STATE(670)] = 14131,
  [SMALL_STATE(671)] = 14141,
  [SMALL_STATE(672)] = 14151,
  [SMALL_STATE(673)] = 14161,
  [SMALL_STATE(674)] = 14171,
  [SMALL_STATE(675)] = 14181,
  [SMALL_STATE(676)] = 14191,
  [SMALL_STATE(677)] = 14199,
  [SMALL_STATE(678)] = 14209,
  [SMALL_STATE(679)] = 14219,
  [SMALL_STATE(680)] = 14229,
  [SMALL_STATE(681)] = 14239,
  [SMALL_STATE(682)] = 14249,
  [SMALL_STATE(683)] = 14257,
  [SMALL_STATE(684)] = 14267,
  [SMALL_STATE(685)] = 14277,
  [SMALL_STATE(686)] = 14287,
  [SMALL_STATE(687)] = 14297,
  [SMALL_STATE(688)] = 14307,
  [SMALL_STATE(689)] = 14317,
  [SMALL_STATE(690)] = 14327,
  [SMALL_STATE(691)] = 14335,
  [SMALL_STATE(692)] = 14345,
  [SMALL_STATE(693)] = 14351,
  [SMALL_STATE(694)] = 14361,
  [SMALL_STATE(695)] = 14371,
  [SMALL_STATE(696)] = 14381,
  [SMALL_STATE(697)] = 14391,
  [SMALL_STATE(698)] = 14399,
  [SMALL_STATE(699)] = 14409,
  [SMALL_STATE(700)] = 14419,
  [SMALL_STATE(701)] = 14429,
  [SMALL_STATE(702)] = 14439,
  [SMALL_STATE(703)] = 14449,
  [SMALL_STATE(704)] = 14459,
  [SMALL_STATE(705)] = 14469,
  [SMALL_STATE(706)] = 14479,
  [SMALL_STATE(707)] = 14489,
  [SMALL_STATE(708)] = 14499,
  [SMALL_STATE(709)] = 14509,
  [SMALL_STATE(710)] = 14519,
  [SMALL_STATE(711)] = 14527,
  [SMALL_STATE(712)] = 14537,
  [SMALL_STATE(713)] = 14547,
  [SMALL_STATE(714)] = 14557,
  [SMALL_STATE(715)] = 14567,
  [SMALL_STATE(716)] = 14577,
  [SMALL_STATE(717)] = 14587,
  [SMALL_STATE(718)] = 14597,
  [SMALL_STATE(719)] = 14607,
  [SMALL_STATE(720)] = 14615,
  [SMALL_STATE(721)] = 14625,
  [SMALL_STATE(722)] = 14635,
  [SMALL_STATE(723)] = 14645,
  [SMALL_STATE(724)] = 14655,
  [SMALL_STATE(725)] = 14665,
  [SMALL_STATE(726)] = 14675,
  [SMALL_STATE(727)] = 14685,
  [SMALL_STATE(728)] = 14695,
  [SMALL_STATE(729)] = 14705,
  [SMALL_STATE(730)] = 14715,
  [SMALL_STATE(731)] = 14725,
  [SMALL_STATE(732)] = 14735,
  [SMALL_STATE(733)] = 14745,
  [SMALL_STATE(734)] = 14755,
  [SMALL_STATE(735)] = 14765,
  [SMALL_STATE(736)] = 14775,
  [SMALL_STATE(737)] = 14785,
  [SMALL_STATE(738)] = 14793,
  [SMALL_STATE(739)] = 14803,
  [SMALL_STATE(740)] = 14813,
  [SMALL_STATE(741)] = 14823,
  [SMALL_STATE(742)] = 14833,
  [SMALL_STATE(743)] = 14843,
  [SMALL_STATE(744)] = 14853,
  [SMALL_STATE(745)] = 14863,
  [SMALL_STATE(746)] = 14873,
  [SMALL_STATE(747)] = 14883,
  [SMALL_STATE(748)] = 14893,
  [SMALL_STATE(749)] = 14899,
  [SMALL_STATE(750)] = 14909,
  [SMALL_STATE(751)] = 14919,
  [SMALL_STATE(752)] = 14929,
  [SMALL_STATE(753)] = 14939,
  [SMALL_STATE(754)] = 14949,
  [SMALL_STATE(755)] = 14957,
  [SMALL_STATE(756)] = 14967,
  [SMALL_STATE(757)] = 14977,
  [SMALL_STATE(758)] = 14987,
  [SMALL_STATE(759)] = 14997,
  [SMALL_STATE(760)] = 15007,
  [SMALL_STATE(761)] = 15017,
  [SMALL_STATE(762)] = 15027,
  [SMALL_STATE(763)] = 15037,
  [SMALL_STATE(764)] = 15047,
  [SMALL_STATE(765)] = 15057,
  [SMALL_STATE(766)] = 15067,
  [SMALL_STATE(767)] = 15077,
  [SMALL_STATE(768)] = 15084,
  [SMALL_STATE(769)] = 15091,
  [SMALL_STATE(770)] = 15098,
  [SMALL_STATE(771)] = 15105,
  [SMALL_STATE(772)] = 15112,
  [SMALL_STATE(773)] = 15117,
  [SMALL_STATE(774)] = 15124,
  [SMALL_STATE(775)] = 15131,
  [SMALL_STATE(776)] = 15138,
  [SMALL_STATE(777)] = 15145,
  [SMALL_STATE(778)] = 15152,
  [SMALL_STATE(779)] = 15157,
  [SMALL_STATE(780)] = 15162,
  [SMALL_STATE(781)] = 15169,
  [SMALL_STATE(782)] = 15176,
  [SMALL_STATE(783)] = 15183,
  [SMALL_STATE(784)] = 15190,
  [SMALL_STATE(785)] = 15195,
  [SMALL_STATE(786)] = 15202,
  [SMALL_STATE(787)] = 15209,
  [SMALL_STATE(788)] = 15216,
  [SMALL_STATE(789)] = 15223,
  [SMALL_STATE(790)] = 15230,
  [SMALL_STATE(791)] = 15237,
  [SMALL_STATE(792)] = 15244,
  [SMALL_STATE(793)] = 15251,
  [SMALL_STATE(794)] = 15258,
  [SMALL_STATE(795)] = 15265,
  [SMALL_STATE(796)] = 15272,
  [SMALL_STATE(797)] = 15279,
  [SMALL_STATE(798)] = 15286,
  [SMALL_STATE(799)] = 15293,
  [SMALL_STATE(800)] = 15300,
  [SMALL_STATE(801)] = 15307,
  [SMALL_STATE(802)] = 15314,
  [SMALL_STATE(803)] = 15319,
  [SMALL_STATE(804)] = 15324,
  [SMALL_STATE(805)] = 15331,
  [SMALL_STATE(806)] = 15338,
  [SMALL_STATE(807)] = 15343,
  [SMALL_STATE(808)] = 15350,
  [SMALL_STATE(809)] = 15355,
  [SMALL_STATE(810)] = 15362,
  [SMALL_STATE(811)] = 15367,
  [SMALL_STATE(812)] = 15374,
  [SMALL_STATE(813)] = 15381,
  [SMALL_STATE(814)] = 15388,
  [SMALL_STATE(815)] = 15393,
  [SMALL_STATE(816)] = 15398,
  [SMALL_STATE(817)] = 15405,
  [SMALL_STATE(818)] = 15410,
  [SMALL_STATE(819)] = 15415,
  [SMALL_STATE(820)] = 15420,
  [SMALL_STATE(821)] = 15427,
  [SMALL_STATE(822)] = 15432,
  [SMALL_STATE(823)] = 15439,
  [SMALL_STATE(824)] = 15446,
  [SMALL_STATE(825)] = 15453,
  [SMALL_STATE(826)] = 15460,
  [SMALL_STATE(827)] = 15467,
  [SMALL_STATE(828)] = 15474,
  [SMALL_STATE(829)] = 15481,
  [SMALL_STATE(830)] = 15488,
  [SMALL_STATE(831)] = 15495,
  [SMALL_STATE(832)] = 15502,
  [SMALL_STATE(833)] = 15509,
  [SMALL_STATE(834)] = 15516,
  [SMALL_STATE(835)] = 15521,
  [SMALL_STATE(836)] = 15528,
  [SMALL_STATE(837)] = 15535,
  [SMALL_STATE(838)] = 15542,
  [SMALL_STATE(839)] = 15549,
  [SMALL_STATE(840)] = 15556,
  [SMALL_STATE(841)] = 15563,
  [SMALL_STATE(842)] = 15568,
  [SMALL_STATE(843)] = 15575,
  [SMALL_STATE(844)] = 15580,
  [SMALL_STATE(845)] = 15587,
  [SMALL_STATE(846)] = 15592,
  [SMALL_STATE(847)] = 15597,
  [SMALL_STATE(848)] = 15602,
  [SMALL_STATE(849)] = 15607,
  [SMALL_STATE(850)] = 15614,
  [SMALL_STATE(851)] = 15621,
  [SMALL_STATE(852)] = 15628,
  [SMALL_STATE(853)] = 15635,
  [SMALL_STATE(854)] = 15642,
  [SMALL_STATE(855)] = 15647,
  [SMALL_STATE(856)] = 15654,
  [SMALL_STATE(857)] = 15659,
  [SMALL_STATE(858)] = 15666,
  [SMALL_STATE(859)] = 15673,
  [SMALL_STATE(860)] = 15680,
  [SMALL_STATE(861)] = 15687,
  [SMALL_STATE(862)] = 15694,
  [SMALL_STATE(863)] = 15701,
  [SMALL_STATE(864)] = 15708,
  [SMALL_STATE(865)] = 15713,
  [SMALL_STATE(866)] = 15720,
  [SMALL_STATE(867)] = 15725,
  [SMALL_STATE(868)] = 15732,
  [SMALL_STATE(869)] = 15739,
  [SMALL_STATE(870)] = 15746,
  [SMALL_STATE(871)] = 15753,
  [SMALL_STATE(872)] = 15758,
  [SMALL_STATE(873)] = 15763,
  [SMALL_STATE(874)] = 15770,
  [SMALL_STATE(875)] = 15777,
  [SMALL_STATE(876)] = 15784,
  [SMALL_STATE(877)] = 15791,
  [SMALL_STATE(878)] = 15798,
  [SMALL_STATE(879)] = 15805,
  [SMALL_STATE(880)] = 15812,
  [SMALL_STATE(881)] = 15819,
  [SMALL_STATE(882)] = 15826,
  [SMALL_STATE(883)] = 15833,
  [SMALL_STATE(884)] = 15840,
  [SMALL_STATE(885)] = 15845,
  [SMALL_STATE(886)] = 15850,
  [SMALL_STATE(887)] = 15857,
  [SMALL_STATE(888)] = 15864,
  [SMALL_STATE(889)] = 15871,
  [SMALL_STATE(890)] = 15878,
  [SMALL_STATE(891)] = 15885,
  [SMALL_STATE(892)] = 15892,
  [SMALL_STATE(893)] = 15897,
  [SMALL_STATE(894)] = 15904,
  [SMALL_STATE(895)] = 15911,
  [SMALL_STATE(896)] = 15918,
  [SMALL_STATE(897)] = 15923,
  [SMALL_STATE(898)] = 15930,
  [SMALL_STATE(899)] = 15935,
  [SMALL_STATE(900)] = 15940,
  [SMALL_STATE(901)] = 15947,
  [SMALL_STATE(902)] = 15954,
  [SMALL_STATE(903)] = 15961,
  [SMALL_STATE(904)] = 15968,
  [SMALL_STATE(905)] = 15975,
  [SMALL_STATE(906)] = 15982,
  [SMALL_STATE(907)] = 15989,
  [SMALL_STATE(908)] = 15996,
  [SMALL_STATE(909)] = 16001,
  [SMALL_STATE(910)] = 16008,
  [SMALL_STATE(911)] = 16015,
  [SMALL_STATE(912)] = 16022,
  [SMALL_STATE(913)] = 16029,
  [SMALL_STATE(914)] = 16036,
  [SMALL_STATE(915)] = 16043,
  [SMALL_STATE(916)] = 16050,
  [SMALL_STATE(917)] = 16057,
  [SMALL_STATE(918)] = 16064,
  [SMALL_STATE(919)] = 16069,
  [SMALL_STATE(920)] = 16074,
  [SMALL_STATE(921)] = 16081,
  [SMALL_STATE(922)] = 16088,
  [SMALL_STATE(923)] = 16093,
  [SMALL_STATE(924)] = 16098,
  [SMALL_STATE(925)] = 16102,
  [SMALL_STATE(926)] = 16106,
  [SMALL_STATE(927)] = 16110,
  [SMALL_STATE(928)] = 16114,
  [SMALL_STATE(929)] = 16118,
  [SMALL_STATE(930)] = 16122,
  [SMALL_STATE(931)] = 16126,
  [SMALL_STATE(932)] = 16130,
  [SMALL_STATE(933)] = 16134,
  [SMALL_STATE(934)] = 16138,
  [SMALL_STATE(935)] = 16142,
  [SMALL_STATE(936)] = 16146,
  [SMALL_STATE(937)] = 16150,
  [SMALL_STATE(938)] = 16154,
  [SMALL_STATE(939)] = 16158,
  [SMALL_STATE(940)] = 16162,
  [SMALL_STATE(941)] = 16166,
  [SMALL_STATE(942)] = 16170,
  [SMALL_STATE(943)] = 16174,
  [SMALL_STATE(944)] = 16178,
  [SMALL_STATE(945)] = 16182,
  [SMALL_STATE(946)] = 16186,
  [SMALL_STATE(947)] = 16190,
  [SMALL_STATE(948)] = 16194,
  [SMALL_STATE(949)] = 16198,
  [SMALL_STATE(950)] = 16202,
  [SMALL_STATE(951)] = 16206,
  [SMALL_STATE(952)] = 16210,
  [SMALL_STATE(953)] = 16214,
  [SMALL_STATE(954)] = 16218,
  [SMALL_STATE(955)] = 16222,
  [SMALL_STATE(956)] = 16226,
  [SMALL_STATE(957)] = 16230,
  [SMALL_STATE(958)] = 16234,
  [SMALL_STATE(959)] = 16238,
  [SMALL_STATE(960)] = 16242,
  [SMALL_STATE(961)] = 16246,
  [SMALL_STATE(962)] = 16250,
  [SMALL_STATE(963)] = 16254,
  [SMALL_STATE(964)] = 16258,
  [SMALL_STATE(965)] = 16262,
  [SMALL_STATE(966)] = 16266,
  [SMALL_STATE(967)] = 16270,
  [SMALL_STATE(968)] = 16274,
  [SMALL_STATE(969)] = 16278,
  [SMALL_STATE(970)] = 16282,
  [SMALL_STATE(971)] = 16286,
  [SMALL_STATE(972)] = 16290,
  [SMALL_STATE(973)] = 16294,
  [SMALL_STATE(974)] = 16298,
  [SMALL_STATE(975)] = 16302,
  [SMALL_STATE(976)] = 16306,
  [SMALL_STATE(977)] = 16310,
  [SMALL_STATE(978)] = 16314,
  [SMALL_STATE(979)] = 16318,
  [SMALL_STATE(980)] = 16322,
  [SMALL_STATE(981)] = 16326,
  [SMALL_STATE(982)] = 16330,
  [SMALL_STATE(983)] = 16334,
  [SMALL_STATE(984)] = 16338,
  [SMALL_STATE(985)] = 16342,
  [SMALL_STATE(986)] = 16346,
  [SMALL_STATE(987)] = 16350,
  [SMALL_STATE(988)] = 16354,
  [SMALL_STATE(989)] = 16358,
  [SMALL_STATE(990)] = 16362,
  [SMALL_STATE(991)] = 16366,
  [SMALL_STATE(992)] = 16370,
  [SMALL_STATE(993)] = 16374,
  [SMALL_STATE(994)] = 16378,
  [SMALL_STATE(995)] = 16382,
  [SMALL_STATE(996)] = 16386,
  [SMALL_STATE(997)] = 16390,
  [SMALL_STATE(998)] = 16394,
  [SMALL_STATE(999)] = 16398,
  [SMALL_STATE(1000)] = 16402,
  [SMALL_STATE(1001)] = 16406,
  [SMALL_STATE(1002)] = 16410,
  [SMALL_STATE(1003)] = 16414,
  [SMALL_STATE(1004)] = 16418,
  [SMALL_STATE(1005)] = 16422,
  [SMALL_STATE(1006)] = 16426,
  [SMALL_STATE(1007)] = 16430,
  [SMALL_STATE(1008)] = 16434,
  [SMALL_STATE(1009)] = 16438,
  [SMALL_STATE(1010)] = 16442,
  [SMALL_STATE(1011)] = 16446,
  [SMALL_STATE(1012)] = 16450,
  [SMALL_STATE(1013)] = 16454,
  [SMALL_STATE(1014)] = 16458,
  [SMALL_STATE(1015)] = 16462,
  [SMALL_STATE(1016)] = 16466,
  [SMALL_STATE(1017)] = 16470,
  [SMALL_STATE(1018)] = 16474,
  [SMALL_STATE(1019)] = 16478,
  [SMALL_STATE(1020)] = 16482,
  [SMALL_STATE(1021)] = 16486,
  [SMALL_STATE(1022)] = 16490,
  [SMALL_STATE(1023)] = 16494,
  [SMALL_STATE(1024)] = 16498,
  [SMALL_STATE(1025)] = 16502,
  [SMALL_STATE(1026)] = 16506,
  [SMALL_STATE(1027)] = 16510,
  [SMALL_STATE(1028)] = 16514,
  [SMALL_STATE(1029)] = 16518,
  [SMALL_STATE(1030)] = 16522,
  [SMALL_STATE(1031)] = 16526,
  [SMALL_STATE(1032)] = 16530,
  [SMALL_STATE(1033)] = 16534,
  [SMALL_STATE(1034)] = 16538,
  [SMALL_STATE(1035)] = 16542,
  [SMALL_STATE(1036)] = 16546,
  [SMALL_STATE(1037)] = 16550,
  [SMALL_STATE(1038)] = 16554,
  [SMALL_STATE(1039)] = 16558,
  [SMALL_STATE(1040)] = 16562,
  [SMALL_STATE(1041)] = 16566,
  [SMALL_STATE(1042)] = 16570,
  [SMALL_STATE(1043)] = 16574,
  [SMALL_STATE(1044)] = 16578,
  [SMALL_STATE(1045)] = 16582,
  [SMALL_STATE(1046)] = 16586,
  [SMALL_STATE(1047)] = 16590,
  [SMALL_STATE(1048)] = 16594,
  [SMALL_STATE(1049)] = 16598,
  [SMALL_STATE(1050)] = 16602,
  [SMALL_STATE(1051)] = 16606,
  [SMALL_STATE(1052)] = 16610,
  [SMALL_STATE(1053)] = 16614,
  [SMALL_STATE(1054)] = 16618,
  [SMALL_STATE(1055)] = 16622,
  [SMALL_STATE(1056)] = 16626,
  [SMALL_STATE(1057)] = 16630,
  [SMALL_STATE(1058)] = 16634,
  [SMALL_STATE(1059)] = 16638,
  [SMALL_STATE(1060)] = 16642,
  [SMALL_STATE(1061)] = 16646,
  [SMALL_STATE(1062)] = 16650,
  [SMALL_STATE(1063)] = 16654,
  [SMALL_STATE(1064)] = 16658,
  [SMALL_STATE(1065)] = 16662,
  [SMALL_STATE(1066)] = 16666,
  [SMALL_STATE(1067)] = 16670,
  [SMALL_STATE(1068)] = 16674,
  [SMALL_STATE(1069)] = 16678,
  [SMALL_STATE(1070)] = 16682,
  [SMALL_STATE(1071)] = 16686,
  [SMALL_STATE(1072)] = 16690,
  [SMALL_STATE(1073)] = 16694,
  [SMALL_STATE(1074)] = 16698,
  [SMALL_STATE(1075)] = 16702,
  [SMALL_STATE(1076)] = 16706,
  [SMALL_STATE(1077)] = 16710,
  [SMALL_STATE(1078)] = 16714,
  [SMALL_STATE(1079)] = 16718,
  [SMALL_STATE(1080)] = 16722,
  [SMALL_STATE(1081)] = 16726,
  [SMALL_STATE(1082)] = 16730,
  [SMALL_STATE(1083)] = 16734,
  [SMALL_STATE(1084)] = 16738,
  [SMALL_STATE(1085)] = 16742,
  [SMALL_STATE(1086)] = 16746,
  [SMALL_STATE(1087)] = 16750,
  [SMALL_STATE(1088)] = 16754,
  [SMALL_STATE(1089)] = 16758,
  [SMALL_STATE(1090)] = 16762,
  [SMALL_STATE(1091)] = 16766,
  [SMALL_STATE(1092)] = 16770,
  [SMALL_STATE(1093)] = 16774,
  [SMALL_STATE(1094)] = 16778,
  [SMALL_STATE(1095)] = 16782,
  [SMALL_STATE(1096)] = 16786,
  [SMALL_STATE(1097)] = 16790,
  [SMALL_STATE(1098)] = 16794,
  [SMALL_STATE(1099)] = 16798,
  [SMALL_STATE(1100)] = 16802,
  [SMALL_STATE(1101)] = 16806,
  [SMALL_STATE(1102)] = 16810,
  [SMALL_STATE(1103)] = 16814,
  [SMALL_STATE(1104)] = 16818,
  [SMALL_STATE(1105)] = 16822,
  [SMALL_STATE(1106)] = 16826,
  [SMALL_STATE(1107)] = 16830,
  [SMALL_STATE(1108)] = 16834,
  [SMALL_STATE(1109)] = 16838,
  [SMALL_STATE(1110)] = 16842,
  [SMALL_STATE(1111)] = 16846,
  [SMALL_STATE(1112)] = 16850,
  [SMALL_STATE(1113)] = 16854,
  [SMALL_STATE(1114)] = 16858,
  [SMALL_STATE(1115)] = 16862,
  [SMALL_STATE(1116)] = 16866,
  [SMALL_STATE(1117)] = 16870,
  [SMALL_STATE(1118)] = 16874,
  [SMALL_STATE(1119)] = 16878,
  [SMALL_STATE(1120)] = 16882,
  [SMALL_STATE(1121)] = 16886,
  [SMALL_STATE(1122)] = 16890,
  [SMALL_STATE(1123)] = 16894,
  [SMALL_STATE(1124)] = 16898,
  [SMALL_STATE(1125)] = 16902,
  [SMALL_STATE(1126)] = 16906,
  [SMALL_STATE(1127)] = 16910,
  [SMALL_STATE(1128)] = 16914,
  [SMALL_STATE(1129)] = 16918,
  [SMALL_STATE(1130)] = 16922,
  [SMALL_STATE(1131)] = 16926,
  [SMALL_STATE(1132)] = 16930,
  [SMALL_STATE(1133)] = 16934,
  [SMALL_STATE(1134)] = 16938,
  [SMALL_STATE(1135)] = 16942,
  [SMALL_STATE(1136)] = 16946,
  [SMALL_STATE(1137)] = 16950,
  [SMALL_STATE(1138)] = 16954,
  [SMALL_STATE(1139)] = 16958,
  [SMALL_STATE(1140)] = 16962,
  [SMALL_STATE(1141)] = 16966,
  [SMALL_STATE(1142)] = 16970,
  [SMALL_STATE(1143)] = 16974,
  [SMALL_STATE(1144)] = 16978,
  [SMALL_STATE(1145)] = 16982,
  [SMALL_STATE(1146)] = 16986,
  [SMALL_STATE(1147)] = 16990,
  [SMALL_STATE(1148)] = 16994,
  [SMALL_STATE(1149)] = 16998,
  [SMALL_STATE(1150)] = 17002,
  [SMALL_STATE(1151)] = 17006,
  [SMALL_STATE(1152)] = 17010,
  [SMALL_STATE(1153)] = 17014,
  [SMALL_STATE(1154)] = 17018,
  [SMALL_STATE(1155)] = 17022,
  [SMALL_STATE(1156)] = 17026,
  [SMALL_STATE(1157)] = 17030,
  [SMALL_STATE(1158)] = 17034,
  [SMALL_STATE(1159)] = 17038,
  [SMALL_STATE(1160)] = 17042,
  [SMALL_STATE(1161)] = 17046,
  [SMALL_STATE(1162)] = 17050,
  [SMALL_STATE(1163)] = 17054,
  [SMALL_STATE(1164)] = 17058,
  [SMALL_STATE(1165)] = 17062,
  [SMALL_STATE(1166)] = 17066,
  [SMALL_STATE(1167)] = 17070,
  [SMALL_STATE(1168)] = 17074,
  [SMALL_STATE(1169)] = 17078,
  [SMALL_STATE(1170)] = 17082,
  [SMALL_STATE(1171)] = 17086,
  [SMALL_STATE(1172)] = 17090,
  [SMALL_STATE(1173)] = 17094,
  [SMALL_STATE(1174)] = 17098,
  [SMALL_STATE(1175)] = 17102,
  [SMALL_STATE(1176)] = 17106,
  [SMALL_STATE(1177)] = 17110,
  [SMALL_STATE(1178)] = 17114,
  [SMALL_STATE(1179)] = 17118,
  [SMALL_STATE(1180)] = 17122,
  [SMALL_STATE(1181)] = 17126,
  [SMALL_STATE(1182)] = 17130,
  [SMALL_STATE(1183)] = 17134,
  [SMALL_STATE(1184)] = 17138,
  [SMALL_STATE(1185)] = 17142,
  [SMALL_STATE(1186)] = 17146,
  [SMALL_STATE(1187)] = 17150,
  [SMALL_STATE(1188)] = 17154,
  [SMALL_STATE(1189)] = 17158,
  [SMALL_STATE(1190)] = 17162,
  [SMALL_STATE(1191)] = 17166,
  [SMALL_STATE(1192)] = 17170,
  [SMALL_STATE(1193)] = 17174,
  [SMALL_STATE(1194)] = 17178,
  [SMALL_STATE(1195)] = 17182,
  [SMALL_STATE(1196)] = 17186,
  [SMALL_STATE(1197)] = 17190,
  [SMALL_STATE(1198)] = 17194,
  [SMALL_STATE(1199)] = 17198,
  [SMALL_STATE(1200)] = 17202,
  [SMALL_STATE(1201)] = 17206,
  [SMALL_STATE(1202)] = 17210,
  [SMALL_STATE(1203)] = 17214,
  [SMALL_STATE(1204)] = 17218,
  [SMALL_STATE(1205)] = 17222,
  [SMALL_STATE(1206)] = 17226,
  [SMALL_STATE(1207)] = 17230,
  [SMALL_STATE(1208)] = 17234,
  [SMALL_STATE(1209)] = 17238,
  [SMALL_STATE(1210)] = 17242,
  [SMALL_STATE(1211)] = 17246,
  [SMALL_STATE(1212)] = 17250,
  [SMALL_STATE(1213)] = 17254,
  [SMALL_STATE(1214)] = 17258,
  [SMALL_STATE(1215)] = 17262,
  [SMALL_STATE(1216)] = 17266,
  [SMALL_STATE(1217)] = 17270,
  [SMALL_STATE(1218)] = 17274,
  [SMALL_STATE(1219)] = 17278,
  [SMALL_STATE(1220)] = 17282,
  [SMALL_STATE(1221)] = 17286,
  [SMALL_STATE(1222)] = 17290,
  [SMALL_STATE(1223)] = 17294,
  [SMALL_STATE(1224)] = 17298,
  [SMALL_STATE(1225)] = 17302,
  [SMALL_STATE(1226)] = 17306,
  [SMALL_STATE(1227)] = 17310,
  [SMALL_STATE(1228)] = 17314,
  [SMALL_STATE(1229)] = 17318,
  [SMALL_STATE(1230)] = 17322,
  [SMALL_STATE(1231)] = 17326,
  [SMALL_STATE(1232)] = 17330,
  [SMALL_STATE(1233)] = 17334,
  [SMALL_STATE(1234)] = 17338,
  [SMALL_STATE(1235)] = 17342,
  [SMALL_STATE(1236)] = 17346,
  [SMALL_STATE(1237)] = 17350,
  [SMALL_STATE(1238)] = 17354,
  [SMALL_STATE(1239)] = 17358,
  [SMALL_STATE(1240)] = 17362,
  [SMALL_STATE(1241)] = 17366,
  [SMALL_STATE(1242)] = 17370,
  [SMALL_STATE(1243)] = 17374,
  [SMALL_STATE(1244)] = 17378,
  [SMALL_STATE(1245)] = 17382,
  [SMALL_STATE(1246)] = 17386,
  [SMALL_STATE(1247)] = 17390,
  [SMALL_STATE(1248)] = 17394,
  [SMALL_STATE(1249)] = 17398,
  [SMALL_STATE(1250)] = 17402,
  [SMALL_STATE(1251)] = 17406,
  [SMALL_STATE(1252)] = 17410,
  [SMALL_STATE(1253)] = 17414,
  [SMALL_STATE(1254)] = 17418,
  [SMALL_STATE(1255)] = 17422,
  [SMALL_STATE(1256)] = 17426,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1213),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(434),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(485),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(613),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1251),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(499),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(413),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(415),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(560),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(630),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(427),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(455),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(419),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(414),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1213),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal_literal, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 8),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 3, .production_id = 7),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1, .production_id = 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 1, .production_id = 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 9),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 1, .production_id = 9),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 13),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 13),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(875),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 14),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 15),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 14),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 15),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1062),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1044),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1, .production_id = 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1075),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal_literal, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 11),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hexadecimal_literal_repeat2, 2),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(75),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(446),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(88),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, .production_id = 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1246),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(898),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1205),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(657),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(637),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_member_column_list_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_member_column_list_repeat1, 2), SHIFT_REPEAT(757),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 5),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(442),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 6),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1136),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_member_column_list_repeat1, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(830),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(565),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(502),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1159),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 16),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user, 1, .production_id = 6),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_not_exist, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 6),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 6),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 6),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 6),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 6),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 6),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 6),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 6),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 6),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 6),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_exist, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 4),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 7),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 4),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 4),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 4),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 4),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 7),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 4),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 4),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 15),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 5),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3, .production_id = 17),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 8),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 9),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 5),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 11),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 10),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1000),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(809),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [896] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(418),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1256),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1194),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1195),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1199),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1249),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(840),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1224),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1150),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1197),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1236),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1100),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(839),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1059),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1089] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(401),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1154),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1217),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [1172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(890),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1254),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_member_column_list, 2),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2),
  [1215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(43),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_not_exist, 3),
  [1228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_exist, 2),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 2),
  [1234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(804),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(895),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(563),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(698),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(405),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(319),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(1151),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger, 1, .production_id = 5),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 1),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null_list, 1),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1136),
  [1327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(677),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(789),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(68),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(218),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(557),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hexadecimal_literal_repeat1, 2), SHIFT_REPEAT(1068),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hexadecimal_literal_repeat1, 2),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(920),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(516),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null_list, 2),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_member_column_list, 3),
  [1427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_partition_key_list_repeat1, 2), SHIFT_REPEAT(596),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_partition_key_list_repeat1, 2),
  [1432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_not_null_list_repeat1, 2), SHIFT_REPEAT(585),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_not_null_list_repeat1, 2),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1056),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key, 1),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 4),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key, 1),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_replace, 2),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_primary_key, 1),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 12),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1239),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1171),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1215),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1212),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1233),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language, 1, .production_id = 16),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [1699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1067),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1071),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 10),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1094),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1097),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1098),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1188),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1252),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1141),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_key, 1),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1162),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1164),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1241),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1182),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1147),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1146),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1139),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [2071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [2083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [2089] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1130),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [2105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [2107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1122),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [2117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [2119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [2121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [2123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [2125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [2127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [2129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [2131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [2135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [2137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [2139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [2143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [2145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [2147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [2149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [2151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1232),
  [2153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [2155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [2159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1235),
  [2161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [2163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [2165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [2167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [2169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [2171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [2173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [2177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [2179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
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
