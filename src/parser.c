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
#define STATE_COUNT 1442
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 305
#define ALIAS_COUNT 24
#define TOKEN_COUNT 145
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 24
#define PRODUCTION_ID_COUNT 128

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
  sym_string_literal = 16,
  sym_decimal_literal = 17,
  sym_float_literal = 18,
  sym_hexadecimal_literal = 19,
  sym_boolean_literal = 20,
  sym_code_block = 21,
  aux_sym_from_spec_token1 = 22,
  aux_sym_where_spec_token1 = 23,
  aux_sym_relation_elements_token1 = 24,
  anon_sym_LT = 25,
  anon_sym_LT_EQ = 26,
  anon_sym_LT_GT = 27,
  anon_sym_EQ = 28,
  anon_sym_GT = 29,
  anon_sym_GT_EQ = 30,
  aux_sym_relation_element_token1 = 31,
  aux_sym_relation_contains_key_token1 = 32,
  aux_sym_relation_contains_key_token2 = 33,
  aux_sym_order_spec_token1 = 34,
  aux_sym_order_spec_token2 = 35,
  aux_sym_delete_statement_token1 = 36,
  aux_sym_delete_statement_token2 = 37,
  aux_sym_delete_statement_token3 = 38,
  aux_sym_begin_batch_token1 = 39,
  aux_sym_begin_batch_token2 = 40,
  aux_sym_begin_batch_token3 = 41,
  aux_sym_begin_batch_token4 = 42,
  anon_sym_LBRACK = 43,
  anon_sym_RBRACK = 44,
  aux_sym_using_timestamp_spec_token1 = 45,
  aux_sym_timestamp_token1 = 46,
  aux_sym_insert_statement_token1 = 47,
  aux_sym_insert_statement_token2 = 48,
  aux_sym_insert_statement_token3 = 49,
  aux_sym_insert_values_spec_token1 = 50,
  anon_sym_LBRACE = 51,
  anon_sym_COLON = 52,
  anon_sym_RBRACE = 53,
  aux_sym_ttl_token1 = 54,
  aux_sym_truncate_token1 = 55,
  aux_sym_truncate_token2 = 56,
  aux_sym_create_index_token1 = 57,
  aux_sym_create_index_token2 = 58,
  aux_sym_create_index_token3 = 59,
  aux_sym_index_keys_spec_token1 = 60,
  aux_sym_index_entries_s_spec_token1 = 61,
  aux_sym_index_full_spec_token1 = 62,
  aux_sym_drop_index_token1 = 63,
  aux_sym_drop_index_token2 = 64,
  aux_sym_update_token1 = 65,
  aux_sym_update_token2 = 66,
  anon_sym_PLUS = 67,
  anon_sym_DASH = 68,
  aux_sym_use_token1 = 69,
  aux_sym_grant_token1 = 70,
  aux_sym_grant_token2 = 71,
  aux_sym_priviledge_token1 = 72,
  aux_sym_priviledge_token2 = 73,
  aux_sym_priviledge_token3 = 74,
  aux_sym_priviledge_token4 = 75,
  aux_sym_priviledge_token5 = 76,
  aux_sym_priviledge_token6 = 77,
  aux_sym_priviledge_token7 = 78,
  aux_sym_resource_token1 = 79,
  aux_sym_resource_token2 = 80,
  aux_sym_resource_token3 = 81,
  aux_sym_resource_token4 = 82,
  aux_sym_resource_token5 = 83,
  aux_sym_resource_token6 = 84,
  aux_sym_revoke_token1 = 85,
  aux_sym_list_roles_token1 = 86,
  aux_sym_list_roles_token2 = 87,
  aux_sym_list_roles_token3 = 88,
  aux_sym_drop_aggregate_token1 = 89,
  aux_sym_drop_materialized_view_token1 = 90,
  aux_sym_drop_materialized_view_token2 = 91,
  aux_sym_drop_trigger_token1 = 92,
  aux_sym_drop_type_token1 = 93,
  aux_sym_drop_user_token1 = 94,
  aux_sym_create_aggregate_token1 = 95,
  aux_sym_create_aggregate_token2 = 96,
  aux_sym_create_aggregate_token3 = 97,
  aux_sym_create_aggregate_token4 = 98,
  aux_sym_create_aggregate_token5 = 99,
  aux_sym_create_aggregate_token6 = 100,
  aux_sym_create_materialized_view_token1 = 101,
  aux_sym_create_materialized_view_token2 = 102,
  aux_sym_column_not_null_token1 = 103,
  aux_sym_create_function_token1 = 104,
  aux_sym_create_function_token2 = 105,
  aux_sym_data_type_name_token1 = 106,
  aux_sym_data_type_name_token2 = 107,
  aux_sym_data_type_name_token3 = 108,
  aux_sym_data_type_name_token4 = 109,
  aux_sym_data_type_name_token5 = 110,
  aux_sym_data_type_name_token6 = 111,
  aux_sym_data_type_name_token7 = 112,
  aux_sym_data_type_name_token8 = 113,
  aux_sym_data_type_name_token9 = 114,
  aux_sym_data_type_name_token10 = 115,
  aux_sym_data_type_name_token11 = 116,
  aux_sym_data_type_name_token12 = 117,
  aux_sym_data_type_name_token13 = 118,
  aux_sym_data_type_name_token14 = 119,
  aux_sym_data_type_name_token15 = 120,
  aux_sym_data_type_name_token16 = 121,
  aux_sym_data_type_name_token17 = 122,
  aux_sym_data_type_name_token18 = 123,
  aux_sym_data_type_name_token19 = 124,
  aux_sym_data_type_name_token20 = 125,
  aux_sym_data_type_name_token21 = 126,
  aux_sym_data_type_name_token22 = 127,
  aux_sym_return_mode_token1 = 128,
  aux_sym_return_mode_token2 = 129,
  aux_sym_create_keyspace_token1 = 130,
  aux_sym_durable_writes_token1 = 131,
  aux_sym_role_with_options_token1 = 132,
  aux_sym_role_with_options_token2 = 133,
  aux_sym_role_with_options_token3 = 134,
  aux_sym_role_with_options_token4 = 135,
  aux_sym_clustering_order_token1 = 136,
  aux_sym_order_direction_token1 = 137,
  aux_sym_order_direction_token2 = 138,
  aux_sym_alter_table_add_token1 = 139,
  aux_sym_alter_table_drop_compact_storage_token1 = 140,
  aux_sym_alter_table_drop_compact_storage_token2 = 141,
  aux_sym_alter_table_rename_token1 = 142,
  aux_sym_user_super_user_token1 = 143,
  aux_sym_apply_batch_token1 = 144,
  sym_source_file = 145,
  sym__statement = 146,
  sym_select_statement = 147,
  sym_limit_spec = 148,
  sym_select_elements = 149,
  sym_select_element = 150,
  sym_function_call = 151,
  sym_function_args = 152,
  sym_constant = 153,
  sym_from_spec = 154,
  sym_where_spec = 155,
  sym_relation_elements = 156,
  sym_relation_element = 157,
  sym_assignment_tuple = 158,
  sym_relation_contains_key = 159,
  sym_relation_contains = 160,
  sym_order_spec = 161,
  sym_order_spec_element = 162,
  sym_delete_statement = 163,
  sym_begin_batch = 164,
  sym_delete_column_list = 165,
  sym_delete_column_item = 166,
  sym_using_timestamp_spec = 167,
  sym_timestamp = 168,
  sym_if_spec = 169,
  sym_if_condition_list = 170,
  sym_if_condition = 171,
  sym_insert_statement = 172,
  sym_insert_column_spec = 173,
  sym_column_list = 174,
  sym_insert_values_spec = 175,
  sym_expression_list = 176,
  sym_expression = 177,
  sym_assignment_map = 178,
  sym_assignment_set = 179,
  sym_assignment_list = 180,
  sym_using_ttl_timestamp = 181,
  sym_ttl = 182,
  sym_truncate = 183,
  sym_create_index = 184,
  sym_index_name = 185,
  sym_index_column_spec = 186,
  sym_index_keys_spec = 187,
  sym_index_entries_s_spec = 188,
  sym_index_full_spec = 189,
  sym_drop_index = 190,
  sym_update = 191,
  sym_assignment_element = 192,
  sym_use = 193,
  sym_grant = 194,
  sym_priviledge = 195,
  sym_resource = 196,
  sym_revoke = 197,
  sym_list_roles = 198,
  sym_list_permissions = 199,
  sym_drop_aggregate = 200,
  sym_drop_materialized_view = 201,
  sym_drop_function = 202,
  sym_drop_keyspace = 203,
  sym_drop_role = 204,
  sym_drop_table = 205,
  sym_drop_trigger = 206,
  sym_drop_type = 207,
  sym_drop_user = 208,
  sym_create_aggregate = 209,
  sym_init_cond_definition = 210,
  sym_init_cond_list = 211,
  sym_init_cond_list_nested = 212,
  sym_init_cond_hash = 213,
  sym_init_cond_hash_item = 214,
  sym_create_materialized_view = 215,
  sym_materialized_view_where = 216,
  sym_column_not_null_list = 217,
  sym_column_not_null = 218,
  sym_materialized_view_options = 219,
  sym_create_function = 220,
  sym_param = 221,
  sym_data_type = 222,
  sym_data_type_name = 223,
  sym_data_type_definition = 224,
  sym_return_mode = 225,
  sym_create_keyspace = 226,
  sym_replication_list_item = 227,
  sym_durable_writes = 228,
  sym_create_role = 229,
  sym_role_with = 230,
  sym_role_with_options = 231,
  sym_option_hash = 232,
  sym_option_hash_item = 233,
  sym_create_table = 234,
  sym_column_definition_list = 235,
  sym_column_definition = 236,
  sym_primary_key_column = 237,
  sym_primary_key_element = 238,
  sym_primary_key_definition = 239,
  sym_compound_key = 240,
  sym_clustering_key_list = 241,
  sym_composite_key = 242,
  sym_partition_key_list = 243,
  sym_with_element = 244,
  sym_table_options = 245,
  sym_table_option_item = 246,
  sym_table_option_name = 247,
  sym_table_option_value = 248,
  sym_clustering_order = 249,
  sym_order_direction = 250,
  sym_create_trigger = 251,
  sym_create_type = 252,
  sym_create_user = 253,
  sym_alter_materialized_view = 254,
  sym_alter_keyspace = 255,
  sym_replication_list = 256,
  sym_alter_role = 257,
  sym_alter_table = 258,
  sym_alter_table_operation = 259,
  sym_alter_table_add = 260,
  sym_alter_table_column_definition = 261,
  sym_alter_table_drop_columns = 262,
  sym_alter_table_drop_column_list = 263,
  sym_alter_table_drop_compact_storage = 264,
  sym_alter_table_rename = 265,
  sym_alter_table_with = 266,
  sym_alter_type = 267,
  sym_alter_type_operation = 268,
  sym_alter_type_alter_type = 269,
  sym_alter_type_add = 270,
  sym_alter_type_rename = 271,
  sym_alter_type_rename_list = 272,
  sym_alter_type_rename_item = 273,
  sym_alter_user = 274,
  sym_user_password = 275,
  sym_user_super_user = 276,
  sym_apply_batch = 277,
  sym_object_name = 278,
  aux_sym_source_file_repeat1 = 279,
  aux_sym_select_elements_repeat1 = 280,
  aux_sym_function_args_repeat1 = 281,
  aux_sym_relation_elements_repeat1 = 282,
  aux_sym_relation_element_repeat1 = 283,
  aux_sym_relation_element_repeat2 = 284,
  aux_sym_assignment_tuple_repeat1 = 285,
  aux_sym_delete_column_list_repeat1 = 286,
  aux_sym_if_condition_list_repeat1 = 287,
  aux_sym_column_list_repeat1 = 288,
  aux_sym_expression_list_repeat1 = 289,
  aux_sym_assignment_map_repeat1 = 290,
  aux_sym_update_repeat1 = 291,
  aux_sym_init_cond_list_nested_repeat1 = 292,
  aux_sym_init_cond_hash_repeat1 = 293,
  aux_sym_column_not_null_list_repeat1 = 294,
  aux_sym_create_function_repeat1 = 295,
  aux_sym_data_type_definition_repeat1 = 296,
  aux_sym_role_with_repeat1 = 297,
  aux_sym_option_hash_repeat1 = 298,
  aux_sym_column_definition_list_repeat1 = 299,
  aux_sym_table_options_repeat1 = 300,
  aux_sym_create_type_repeat1 = 301,
  aux_sym_replication_list_repeat1 = 302,
  aux_sym_alter_table_column_definition_repeat1 = 303,
  aux_sym_alter_type_rename_list_repeat1 = 304,
  anon_alias_sym_aggregate = 305,
  anon_alias_sym_clustering_key = 306,
  anon_alias_sym_column = 307,
  anon_alias_sym_data_type = 308,
  anon_alias_sym_finalfunc = 309,
  anon_alias_sym_function = 310,
  anon_alias_sym_function_name = 311,
  anon_alias_sym_hash_key = 312,
  anon_alias_sym_index = 313,
  anon_alias_sym_index_name = 314,
  anon_alias_sym_keyspace = 315,
  anon_alias_sym_language = 316,
  anon_alias_sym_materialized_view = 317,
  anon_alias_sym_option = 318,
  anon_alias_sym_param_name = 319,
  anon_alias_sym_partition_key = 320,
  anon_alias_sym_primary_key = 321,
  anon_alias_sym_role = 322,
  anon_alias_sym_sfunc = 323,
  anon_alias_sym_table = 324,
  anon_alias_sym_trigger = 325,
  anon_alias_sym_trigger_class = 326,
  anon_alias_sym_type = 327,
  anon_alias_sym_user = 328,
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
  [sym_string_literal] = "string_literal",
  [sym_decimal_literal] = "decimal_literal",
  [sym_float_literal] = "float_literal",
  [sym_hexadecimal_literal] = "hexadecimal_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_code_block] = "code_block",
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
  [aux_sym_delete_statement_token2] = "IF",
  [aux_sym_delete_statement_token3] = "EXISTS",
  [aux_sym_begin_batch_token1] = "BEGIN",
  [aux_sym_begin_batch_token2] = "LOGGED",
  [aux_sym_begin_batch_token3] = "UNLOGGED",
  [aux_sym_begin_batch_token4] = "BATCH",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_using_timestamp_spec_token1] = "USING",
  [aux_sym_timestamp_token1] = "TIMESTAMP",
  [aux_sym_insert_statement_token1] = "INSERT",
  [aux_sym_insert_statement_token2] = "INTO",
  [aux_sym_insert_statement_token3] = "NOT",
  [aux_sym_insert_values_spec_token1] = "VALUES",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
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
  [aux_sym_drop_index_token2] = "drop_index_token2",
  [aux_sym_update_token1] = "UPDATE",
  [aux_sym_update_token2] = "SET",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
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
  [aux_sym_create_aggregate_token1] = "OR",
  [aux_sym_create_aggregate_token2] = "REPLACE",
  [aux_sym_create_aggregate_token3] = "SFUNC",
  [aux_sym_create_aggregate_token4] = "STYPE",
  [aux_sym_create_aggregate_token5] = "FINALFUNC",
  [aux_sym_create_aggregate_token6] = "INITCOND",
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
  [sym_function_args] = "function_args",
  [sym_constant] = "constant",
  [sym_from_spec] = "from_spec",
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
  [sym_insert_column_spec] = "insert_column_spec",
  [sym_column_list] = "column_list",
  [sym_insert_values_spec] = "insert_values_spec",
  [sym_expression_list] = "expression_list",
  [sym_expression] = "expression",
  [sym_assignment_map] = "assignment_map",
  [sym_assignment_set] = "assignment_set",
  [sym_assignment_list] = "assignment_list",
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
  [sym_create_aggregate] = "create_aggregate",
  [sym_init_cond_definition] = "init_cond_definition",
  [sym_init_cond_list] = "init_cond_list",
  [sym_init_cond_list_nested] = "init_cond_list_nested",
  [sym_init_cond_hash] = "init_cond_hash",
  [sym_init_cond_hash_item] = "init_cond_hash_item",
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
  [sym_compound_key] = "compound_key",
  [sym_clustering_key_list] = "clustering_key_list",
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
  [sym_create_type] = "create_type",
  [sym_create_user] = "create_user",
  [sym_alter_materialized_view] = "alter_materialized_view",
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
  [sym_object_name] = "object_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_select_elements_repeat1] = "select_elements_repeat1",
  [aux_sym_function_args_repeat1] = "function_args_repeat1",
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
  [aux_sym_table_options_repeat1] = "table_options_repeat1",
  [aux_sym_create_type_repeat1] = "create_type_repeat1",
  [aux_sym_replication_list_repeat1] = "replication_list_repeat1",
  [aux_sym_alter_table_column_definition_repeat1] = "alter_table_column_definition_repeat1",
  [aux_sym_alter_type_rename_list_repeat1] = "alter_type_rename_list_repeat1",
  [anon_alias_sym_aggregate] = "aggregate",
  [anon_alias_sym_clustering_key] = "clustering_key",
  [anon_alias_sym_column] = "column",
  [anon_alias_sym_data_type] = "data_type",
  [anon_alias_sym_finalfunc] = "finalfunc",
  [anon_alias_sym_function] = "function",
  [anon_alias_sym_function_name] = "function_name",
  [anon_alias_sym_hash_key] = "hash_key",
  [anon_alias_sym_index] = "index",
  [anon_alias_sym_index_name] = "index_name",
  [anon_alias_sym_keyspace] = "keyspace",
  [anon_alias_sym_language] = "language",
  [anon_alias_sym_materialized_view] = "materialized_view",
  [anon_alias_sym_option] = "option",
  [anon_alias_sym_param_name] = "param_name",
  [anon_alias_sym_partition_key] = "partition_key",
  [anon_alias_sym_primary_key] = "primary_key",
  [anon_alias_sym_role] = "role",
  [anon_alias_sym_sfunc] = "sfunc",
  [anon_alias_sym_table] = "table",
  [anon_alias_sym_trigger] = "trigger",
  [anon_alias_sym_trigger_class] = "trigger_class",
  [anon_alias_sym_type] = "type",
  [anon_alias_sym_user] = "user",
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
  [sym_string_literal] = sym_string_literal,
  [sym_decimal_literal] = sym_decimal_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_hexadecimal_literal] = sym_hexadecimal_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_code_block] = sym_code_block,
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
  [aux_sym_delete_statement_token2] = aux_sym_delete_statement_token2,
  [aux_sym_delete_statement_token3] = aux_sym_delete_statement_token3,
  [aux_sym_begin_batch_token1] = aux_sym_begin_batch_token1,
  [aux_sym_begin_batch_token2] = aux_sym_begin_batch_token2,
  [aux_sym_begin_batch_token3] = aux_sym_begin_batch_token3,
  [aux_sym_begin_batch_token4] = aux_sym_begin_batch_token4,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_using_timestamp_spec_token1] = aux_sym_using_timestamp_spec_token1,
  [aux_sym_timestamp_token1] = aux_sym_timestamp_token1,
  [aux_sym_insert_statement_token1] = aux_sym_insert_statement_token1,
  [aux_sym_insert_statement_token2] = aux_sym_insert_statement_token2,
  [aux_sym_insert_statement_token3] = aux_sym_insert_statement_token3,
  [aux_sym_insert_values_spec_token1] = aux_sym_insert_values_spec_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [aux_sym_drop_index_token2] = aux_sym_drop_index_token2,
  [aux_sym_update_token1] = aux_sym_update_token1,
  [aux_sym_update_token2] = aux_sym_update_token2,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
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
  [aux_sym_create_aggregate_token5] = aux_sym_create_aggregate_token5,
  [aux_sym_create_aggregate_token6] = aux_sym_create_aggregate_token6,
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
  [sym_function_args] = sym_function_args,
  [sym_constant] = sym_constant,
  [sym_from_spec] = sym_from_spec,
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
  [sym_insert_column_spec] = sym_insert_column_spec,
  [sym_column_list] = sym_column_list,
  [sym_insert_values_spec] = sym_insert_values_spec,
  [sym_expression_list] = sym_expression_list,
  [sym_expression] = sym_expression,
  [sym_assignment_map] = sym_assignment_map,
  [sym_assignment_set] = sym_assignment_set,
  [sym_assignment_list] = sym_assignment_list,
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
  [sym_create_aggregate] = sym_create_aggregate,
  [sym_init_cond_definition] = sym_init_cond_definition,
  [sym_init_cond_list] = sym_init_cond_list,
  [sym_init_cond_list_nested] = sym_init_cond_list_nested,
  [sym_init_cond_hash] = sym_init_cond_hash,
  [sym_init_cond_hash_item] = sym_init_cond_hash_item,
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
  [sym_compound_key] = sym_compound_key,
  [sym_clustering_key_list] = sym_clustering_key_list,
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
  [sym_create_type] = sym_create_type,
  [sym_create_user] = sym_create_user,
  [sym_alter_materialized_view] = sym_alter_materialized_view,
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
  [sym_object_name] = sym_object_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_select_elements_repeat1] = aux_sym_select_elements_repeat1,
  [aux_sym_function_args_repeat1] = aux_sym_function_args_repeat1,
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
  [aux_sym_table_options_repeat1] = aux_sym_table_options_repeat1,
  [aux_sym_create_type_repeat1] = aux_sym_create_type_repeat1,
  [aux_sym_replication_list_repeat1] = aux_sym_replication_list_repeat1,
  [aux_sym_alter_table_column_definition_repeat1] = aux_sym_alter_table_column_definition_repeat1,
  [aux_sym_alter_type_rename_list_repeat1] = aux_sym_alter_type_rename_list_repeat1,
  [anon_alias_sym_aggregate] = anon_alias_sym_aggregate,
  [anon_alias_sym_clustering_key] = anon_alias_sym_clustering_key,
  [anon_alias_sym_column] = anon_alias_sym_column,
  [anon_alias_sym_data_type] = anon_alias_sym_data_type,
  [anon_alias_sym_finalfunc] = anon_alias_sym_finalfunc,
  [anon_alias_sym_function] = anon_alias_sym_function,
  [anon_alias_sym_function_name] = anon_alias_sym_function_name,
  [anon_alias_sym_hash_key] = anon_alias_sym_hash_key,
  [anon_alias_sym_index] = anon_alias_sym_index,
  [anon_alias_sym_index_name] = anon_alias_sym_index_name,
  [anon_alias_sym_keyspace] = anon_alias_sym_keyspace,
  [anon_alias_sym_language] = anon_alias_sym_language,
  [anon_alias_sym_materialized_view] = anon_alias_sym_materialized_view,
  [anon_alias_sym_option] = anon_alias_sym_option,
  [anon_alias_sym_param_name] = anon_alias_sym_param_name,
  [anon_alias_sym_partition_key] = anon_alias_sym_partition_key,
  [anon_alias_sym_primary_key] = anon_alias_sym_primary_key,
  [anon_alias_sym_role] = anon_alias_sym_role,
  [anon_alias_sym_sfunc] = anon_alias_sym_sfunc,
  [anon_alias_sym_table] = anon_alias_sym_table,
  [anon_alias_sym_trigger] = anon_alias_sym_trigger,
  [anon_alias_sym_trigger_class] = anon_alias_sym_trigger_class,
  [anon_alias_sym_type] = anon_alias_sym_type,
  [anon_alias_sym_user] = anon_alias_sym_user,
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
  [sym_string_literal] = {
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
  [aux_sym_delete_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_delete_statement_token3] = {
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
  [aux_sym_insert_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_insert_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_insert_statement_token3] = {
    .visible = true,
    .named = false,
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
  [aux_sym_drop_index_token2] = {
    .visible = false,
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
  [anon_sym_DASH] = {
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
  [aux_sym_create_aggregate_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_aggregate_token6] = {
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
  [sym_function_args] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_from_spec] = {
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
  [sym_insert_column_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_column_list] = {
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
  [sym_create_aggregate] = {
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
  [sym_compound_key] = {
    .visible = true,
    .named = true,
  },
  [sym_clustering_key_list] = {
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
  [sym_create_type] = {
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
  [sym_object_name] = {
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
  [aux_sym_table_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_replication_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alter_table_column_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alter_type_rename_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_aggregate] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_clustering_key] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_column] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_data_type] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_finalfunc] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_function_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_hash_key] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_index] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_index_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_keyspace] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_language] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_materialized_view] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_param_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_partition_key] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_primary_key] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_role] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_sfunc] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_trigger] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_trigger_class] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_user] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_operator = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_operator] = "operator",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [35] = {.index = 0, .length = 1},
  [36] = {.index = 0, .length = 1},
  [58] = {.index = 1, .length = 1},
  [59] = {.index = 1, .length = 1},
  [64] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 1},
  [1] =
    {field_operator, 3},
  [2] =
    {field_operator, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = anon_alias_sym_table,
  },
  [2] = {
    [1] = anon_alias_sym_keyspace,
  },
  [3] = {
    [2] = anon_alias_sym_table,
  },
  [4] = {
    [0] = anon_alias_sym_index_name,
  },
  [5] = {
    [2] = anon_alias_sym_role,
  },
  [6] = {
    [2] = anon_alias_sym_keyspace,
  },
  [7] = {
    [2] = anon_alias_sym_function,
  },
  [8] = {
    [2] = anon_alias_sym_aggregate,
  },
  [9] = {
    [2] = anon_alias_sym_type,
  },
  [10] = {
    [2] = anon_alias_sym_user,
  },
  [11] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_table,
  },
  [12] = {
    [3] = anon_alias_sym_materialized_view,
  },
  [13] = {
    [0] = anon_alias_sym_table,
  },
  [14] = {
    [3] = anon_alias_sym_role,
  },
  [15] = {
    [0] = anon_alias_sym_function_name,
  },
  [16] = {
    [0] = anon_alias_sym_column,
  },
  [17] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_table,
  },
  [18] = {
    [2] = anon_alias_sym_trigger,
    [4] = anon_alias_sym_trigger_class,
  },
  [19] = {
    [4] = anon_alias_sym_table,
  },
  [20] = {
    [4] = anon_alias_sym_keyspace,
  },
  [21] = {
    [4] = anon_alias_sym_function,
  },
  [22] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
  },
  [23] = {
    [4] = anon_alias_sym_role,
  },
  [24] = {
    [4] = anon_alias_sym_aggregate,
  },
  [25] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
  },
  [26] = {
    [2] = anon_alias_sym_trigger,
    [4] = anon_alias_sym_table,
  },
  [27] = {
    [4] = anon_alias_sym_type,
  },
  [28] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
  },
  [29] = {
    [4] = anon_alias_sym_user,
  },
  [30] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_user,
  },
  [31] = {
    [1] = anon_alias_sym_function,
  },
  [32] = {
    [1] = anon_alias_sym_role,
  },
  [33] = {
    [0] = anon_alias_sym_option,
  },
  [34] = {
    [3] = anon_alias_sym_table,
  },
  [36] = {
    [0] = anon_alias_sym_table,
  },
  [37] = {
    [0] = anon_alias_sym_param_name,
  },
  [38] = {
    [5] = anon_alias_sym_role,
  },
  [39] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_index,
    [5] = anon_alias_sym_index,
  },
  [40] = {
    [5] = anon_alias_sym_materialized_view,
  },
  [41] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
  },
  [42] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_table,
  },
  [43] = {
    [1] = anon_alias_sym_column,
  },
  [44] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_trigger_class,
  },
  [45] = {
    [2] = anon_alias_sym_type,
    [4] = anon_alias_sym_column,
    [5] = anon_alias_sym_data_type,
  },
  [46] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_table,
  },
  [47] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
  },
  [48] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
  },
  [49] = {
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_table,
  },
  [50] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_table,
  },
  [51] = {
    [2] = anon_alias_sym_trigger,
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_table,
  },
  [52] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_type,
  },
  [53] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_user,
  },
  [54] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_function,
  },
  [55] = {
    [1] = anon_alias_sym_column,
    [3] = anon_alias_sym_column,
  },
  [56] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_column,
  },
  [57] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_table,
  },
  [59] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_table,
  },
  [60] = {
    [5] = anon_alias_sym_trigger,
    [7] = anon_alias_sym_trigger_class,
  },
  [61] = {
    [5] = anon_alias_sym_user,
  },
  [62] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_index,
    [7] = anon_alias_sym_index,
  },
  [63] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_materialized_view,
  },
  [65] = {
    [5] = anon_alias_sym_table,
  },
  [66] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
    [6] = anon_alias_sym_column,
    [7] = anon_alias_sym_data_type,
  },
  [67] = {
    [1] = anon_alias_sym_column,
    [2] = anon_alias_sym_data_type,
  },
  [68] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_trigger,
    [8] = anon_alias_sym_table,
  },
  [69] = {
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [70] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [71] = {
    [0] = anon_alias_sym_primary_key,
  },
  [72] = {
    [6] = anon_alias_sym_table,
  },
  [73] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_trigger,
    [9] = anon_alias_sym_trigger_class,
  },
  [74] = {
    [5] = anon_alias_sym_type,
    [7] = anon_alias_sym_column,
    [8] = anon_alias_sym_data_type,
  },
  [75] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_table,
  },
  [76] = {
    [0] = anon_alias_sym_partition_key,
  },
  [77] = {
    [7] = anon_alias_sym_table,
  },
  [78] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_trigger,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
  },
  [79] = {
    [0] = anon_alias_sym_partition_key,
    [1] = anon_alias_sym_partition_key,
  },
  [80] = {
    [0] = anon_alias_sym_clustering_key,
  },
  [81] = {
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [82] = {
    [5] = anon_alias_sym_keyspace,
  },
  [83] = {
    [2] = anon_alias_sym_function,
    [9] = anon_alias_sym_language,
  },
  [84] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_type,
    [9] = anon_alias_sym_column,
    [10] = anon_alias_sym_data_type,
  },
  [85] = {
    [4] = anon_alias_sym_column,
  },
  [86] = {
    [0] = anon_alias_sym_clustering_key,
    [1] = anon_alias_sym_clustering_key,
  },
  [87] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_table,
  },
  [88] = {
    [2] = anon_alias_sym_function,
    [10] = anon_alias_sym_language,
  },
  [89] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [90] = {
    [2] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [91] = {
    [2] = anon_alias_sym_aggregate,
    [7] = anon_alias_sym_sfunc,
    [11] = anon_alias_sym_finalfunc,
  },
  [92] = {
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [93] = {
    [5] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [94] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [95] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_table,
  },
  [96] = {
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [97] = {
    [5] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [98] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [99] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [100] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [101] = {
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [102] = {
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [103] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [104] = {
    [5] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [105] = {
    [5] = anon_alias_sym_aggregate,
    [10] = anon_alias_sym_sfunc,
    [14] = anon_alias_sym_finalfunc,
  },
  [106] = {
    [0] = anon_alias_sym_hash_key,
  },
  [107] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
    [10] = anon_alias_sym_table,
  },
  [108] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
  },
  [109] = {
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [110] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [111] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [112] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_table,
  },
  [113] = {
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [114] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [115] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
    [11] = anon_alias_sym_sfunc,
    [15] = anon_alias_sym_finalfunc,
  },
  [116] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [117] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [118] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
    [10] = anon_alias_sym_keyspace,
    [12] = anon_alias_sym_table,
  },
  [119] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [120] = {
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [121] = {
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [122] = {
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_materialized_view,
    [13] = anon_alias_sym_table,
  },
  [123] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_keyspace,
    [13] = anon_alias_sym_table,
  },
  [124] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [17] = anon_alias_sym_language,
  },
  [125] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [18] = anon_alias_sym_language,
  },
  [126] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_aggregate,
    [14] = anon_alias_sym_sfunc,
    [18] = anon_alias_sym_finalfunc,
  },
  [127] = {
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_materialized_view,
    [13] = anon_alias_sym_keyspace,
    [15] = anon_alias_sym_table,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_index_name, 2,
    sym_index_name,
    anon_alias_sym_index,
  sym_data_type, 2,
    sym_data_type,
    anon_alias_sym_data_type,
  sym_object_name, 23,
    sym_object_name,
    anon_alias_sym_aggregate,
    anon_alias_sym_clustering_key,
    anon_alias_sym_column,
    anon_alias_sym_finalfunc,
    anon_alias_sym_function,
    anon_alias_sym_function_name,
    anon_alias_sym_hash_key,
    anon_alias_sym_index_name,
    anon_alias_sym_keyspace,
    anon_alias_sym_language,
    anon_alias_sym_materialized_view,
    anon_alias_sym_option,
    anon_alias_sym_param_name,
    anon_alias_sym_partition_key,
    anon_alias_sym_primary_key,
    anon_alias_sym_role,
    anon_alias_sym_sfunc,
    anon_alias_sym_table,
    anon_alias_sym_trigger,
    anon_alias_sym_trigger_class,
    anon_alias_sym_type,
    anon_alias_sym_user,
  aux_sym_relation_element_repeat1, 3,
    aux_sym_relation_element_repeat1,
    anon_alias_sym_clustering_key,
    anon_alias_sym_partition_key,
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
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 2,
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
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 2,
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
  [105] = 105,
  [106] = 106,
  [107] = 107,
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
  [141] = 141,
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
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 128,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 122,
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
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
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
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
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
  [671] = 671,
  [672] = 672,
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
  [698] = 698,
  [699] = 699,
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
  [885] = 885,
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
  [909] = 909,
  [910] = 910,
  [911] = 911,
  [912] = 912,
  [913] = 913,
  [914] = 914,
  [915] = 915,
  [916] = 916,
  [917] = 917,
  [918] = 918,
  [919] = 919,
  [920] = 920,
  [921] = 921,
  [922] = 922,
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
  [1224] = 1224,
  [1225] = 1225,
  [1226] = 1226,
  [1227] = 1227,
  [1228] = 1228,
  [1229] = 1229,
  [1230] = 1230,
  [1231] = 1231,
  [1232] = 1232,
  [1233] = 1233,
  [1234] = 1234,
  [1235] = 1235,
  [1236] = 1236,
  [1237] = 1237,
  [1238] = 1238,
  [1239] = 1239,
  [1240] = 1240,
  [1241] = 1241,
  [1242] = 1242,
  [1243] = 1243,
  [1244] = 1244,
  [1245] = 1245,
  [1246] = 1246,
  [1247] = 1247,
  [1248] = 1248,
  [1249] = 1249,
  [1250] = 1250,
  [1251] = 1251,
  [1252] = 1252,
  [1253] = 1253,
  [1254] = 1254,
  [1255] = 1255,
  [1256] = 1256,
  [1257] = 1257,
  [1258] = 1258,
  [1259] = 1259,
  [1260] = 1260,
  [1261] = 1261,
  [1262] = 1262,
  [1263] = 1263,
  [1264] = 1264,
  [1265] = 1265,
  [1266] = 1266,
  [1267] = 1267,
  [1268] = 1268,
  [1269] = 1269,
  [1270] = 1270,
  [1271] = 1271,
  [1272] = 1272,
  [1273] = 1273,
  [1274] = 1274,
  [1275] = 1275,
  [1276] = 1276,
  [1277] = 1277,
  [1278] = 1278,
  [1279] = 1279,
  [1280] = 1280,
  [1281] = 1281,
  [1282] = 1282,
  [1283] = 1283,
  [1284] = 1284,
  [1285] = 1285,
  [1286] = 1286,
  [1287] = 1287,
  [1288] = 1288,
  [1289] = 1289,
  [1290] = 1290,
  [1291] = 1291,
  [1292] = 1292,
  [1293] = 1293,
  [1294] = 1294,
  [1295] = 1295,
  [1296] = 1296,
  [1297] = 1297,
  [1298] = 1298,
  [1299] = 1299,
  [1300] = 1300,
  [1301] = 1301,
  [1302] = 1302,
  [1303] = 1303,
  [1304] = 1304,
  [1305] = 1305,
  [1306] = 1306,
  [1307] = 1307,
  [1308] = 1308,
  [1309] = 1309,
  [1310] = 1310,
  [1311] = 1311,
  [1312] = 1312,
  [1313] = 1313,
  [1314] = 1314,
  [1315] = 1315,
  [1316] = 1316,
  [1317] = 1317,
  [1318] = 1318,
  [1319] = 1319,
  [1320] = 1320,
  [1321] = 1321,
  [1322] = 1322,
  [1323] = 1323,
  [1324] = 1324,
  [1325] = 1325,
  [1326] = 1326,
  [1327] = 1327,
  [1328] = 1328,
  [1329] = 1329,
  [1330] = 1330,
  [1331] = 1331,
  [1332] = 1332,
  [1333] = 1333,
  [1334] = 1334,
  [1335] = 1335,
  [1336] = 1336,
  [1337] = 1337,
  [1338] = 1338,
  [1339] = 1339,
  [1340] = 1340,
  [1341] = 1341,
  [1342] = 1342,
  [1343] = 1343,
  [1344] = 1344,
  [1345] = 1345,
  [1346] = 1346,
  [1347] = 1347,
  [1348] = 1348,
  [1349] = 1349,
  [1350] = 1350,
  [1351] = 1351,
  [1352] = 1352,
  [1353] = 1353,
  [1354] = 1354,
  [1355] = 1355,
  [1356] = 1356,
  [1357] = 1357,
  [1358] = 1358,
  [1359] = 1359,
  [1360] = 1360,
  [1361] = 1361,
  [1362] = 1362,
  [1363] = 1363,
  [1364] = 1364,
  [1365] = 1365,
  [1366] = 1366,
  [1367] = 1367,
  [1368] = 1368,
  [1369] = 1369,
  [1370] = 1370,
  [1371] = 1371,
  [1372] = 1372,
  [1373] = 1373,
  [1374] = 1374,
  [1375] = 1375,
  [1376] = 1376,
  [1377] = 1377,
  [1378] = 1378,
  [1379] = 1379,
  [1380] = 1380,
  [1381] = 1381,
  [1382] = 1382,
  [1383] = 1383,
  [1384] = 1384,
  [1385] = 1385,
  [1386] = 1386,
  [1387] = 1387,
  [1388] = 1388,
  [1389] = 1389,
  [1390] = 1390,
  [1391] = 1391,
  [1392] = 1392,
  [1393] = 1393,
  [1394] = 1394,
  [1395] = 1395,
  [1396] = 1396,
  [1397] = 1397,
  [1398] = 1398,
  [1399] = 1399,
  [1400] = 1400,
  [1401] = 1401,
  [1402] = 1402,
  [1403] = 1403,
  [1404] = 1404,
  [1405] = 1405,
  [1406] = 1406,
  [1407] = 1407,
  [1408] = 1408,
  [1409] = 1409,
  [1410] = 1410,
  [1411] = 1411,
  [1412] = 1412,
  [1413] = 1413,
  [1414] = 1414,
  [1415] = 1415,
  [1416] = 1416,
  [1417] = 1417,
  [1418] = 1418,
  [1419] = 1419,
  [1420] = 1420,
  [1421] = 1421,
  [1422] = 1422,
  [1423] = 1423,
  [1424] = 1424,
  [1425] = 1425,
  [1426] = 1426,
  [1427] = 1427,
  [1428] = 1428,
  [1429] = 1429,
  [1430] = 1430,
  [1431] = 1431,
  [1432] = 1432,
  [1433] = 1433,
  [1434] = 1434,
  [1435] = 1435,
  [1436] = 1436,
  [1437] = 1397,
  [1438] = 1438,
  [1439] = 1439,
  [1440] = 2,
  [1441] = 1441,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(559);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ')') ADVANCE(575);
      if (lookahead == '*') ADVANCE(570);
      if (lookahead == '+') ADVANCE(861);
      if (lookahead == ',') ADVANCE(571);
      if (lookahead == '-') ADVANCE(862);
      if (lookahead == '.') ADVANCE(572);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == ':') ADVANCE(637);
      if (lookahead == ';') ADVANCE(560);
      if (lookahead == '<') ADVANCE(601);
      if (lookahead == '=') ADVANCE(604);
      if (lookahead == '>') ADVANCE(605);
      if (lookahead == 'X') ADVANCE(24);
      if (lookahead == '[') ADVANCE(626);
      if (lookahead == ']') ADVANCE(627);
      if (lookahead == '{') ADVANCE(636);
      if (lookahead == '}') ADVANCE(638);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(96);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(31);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(40);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(190);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(425);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(112);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(33);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(336);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(41);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(310);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(37);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == '*') ADVANCE(570);
      if (lookahead == '-') ADVANCE(518);
      if (lookahead == '0') ADVANCE(581);
      if (lookahead == 'X') ADVANCE(658);
      if (lookahead == '[') ADVANCE(626);
      if (lookahead == '{') ADVANCE(636);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(664);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(841);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(800);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(857);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(555);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(596);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '-') ADVANCE(517);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(253);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(391);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(306);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(189);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(343);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(363);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(579);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(579);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(521);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ')') ADVANCE(575);
      if (lookahead == '*') ADVANCE(570);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(747);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(805);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == '*') ADVANCE(570);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(734);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(812);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == '*') ADVANCE(570);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(812);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == '-') ADVANCE(517);
      if (lookahead == '[') ADVANCE(626);
      if (lookahead == '{') ADVANCE(636);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(806);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(723);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(780);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(660);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(745);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(764);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(726);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(662);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(693);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(835);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(663);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(749);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(839);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(713);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(786);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(677);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(845);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(772);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(842);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(705);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(804);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(717);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(657);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(717);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(767);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(767);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(524);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(537);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(543);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(553);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(548);
      END_STATE();
    case 29:
      if (lookahead == 'X') ADVANCE(520);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(502);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(286);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(486);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(292);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(365);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(865);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(255);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(376);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(374);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(374);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(269);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(440);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(342);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(355);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(614);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(284);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(349);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(339);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(424);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(460);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(426);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(493);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(392);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(189);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(67);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(389);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(468);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 70:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(902);
      END_STATE();
    case 71:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(146);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(279);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(281);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(282);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(932);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(892);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(894);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(931);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(219);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(492);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(351);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(450);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(454);
      END_STATE();
    case 87:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 88:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 89:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(482);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(404);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(239);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(75);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(474);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(477);
      END_STATE();
    case 96:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(98);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(202);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(370);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(573);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(439);
      END_STATE();
    case 97:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(98);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(276);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(370);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(573);
      END_STATE();
    case 98:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(933);
      END_STATE();
    case 99:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(600);
      END_STATE();
    case 100:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(921);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(922);
      END_STATE();
    case 102:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(623);
      END_STATE();
    case 103:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(895);
      END_STATE();
    case 104:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(926);
      END_STATE();
    case 105:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(916);
      END_STATE();
    case 106:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(624);
      END_STATE();
    case 107:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(884);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(863);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(863);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(905);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(878);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(915);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(594);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(887);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(893);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(918);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(644);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(907);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(936);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(859);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(871);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(891);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(935);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(874);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(900);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(883);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(869);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(882);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(870);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(480);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(356);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(373);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(512);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(428);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(429);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 190:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(617);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(898);
      END_STATE();
    case 191:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(617);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(608);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(898);
      END_STATE();
    case 192:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(881);
      END_STATE();
    case 193:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(881);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(647);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(461);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(890);
      END_STATE();
    case 194:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(881);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(647);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 195:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(508);
      END_STATE();
    case 196:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(490);
      END_STATE();
    case 197:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(202);
      END_STATE();
    case 198:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(208);
      END_STATE();
    case 199:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(628);
      END_STATE();
    case 200:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(568);
      END_STATE();
    case 201:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(930);
      END_STATE();
    case 202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(405);
      END_STATE();
    case 203:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(229);
      END_STATE();
    case 204:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 205:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(244);
      END_STATE();
    case 206:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(209);
      END_STATE();
    case 207:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(494);
      END_STATE();
    case 208:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(161);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 209:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(170);
      END_STATE();
    case 210:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(136);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 212:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(138);
      END_STATE();
    case 213:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(211);
      END_STATE();
    case 214:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 215:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(897);
      END_STATE();
    case 216:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(625);
      END_STATE();
    case 217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(179);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(456);
      END_STATE();
    case 218:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(358);
      END_STATE();
    case 219:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(54);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(515);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(458);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(483);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(340);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(311);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(348);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(335);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(447);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(427);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 242:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 243:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 245:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 246:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 247:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 248:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 249:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 250:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(472);
      END_STATE();
    case 251:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(360);
      END_STATE();
    case 252:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(131);
      END_STATE();
    case 253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(439);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(866);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(639);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(653);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(576);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(906);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(276);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(370);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(507);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(484);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(484);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 273:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 274:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 275:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(860);
      END_STATE();
    case 276:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(347);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 277:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 278:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(476);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 285:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 286:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 287:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 288:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(597);
      END_STATE();
    case 289:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(597);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(162);
      END_STATE();
    case 290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(371);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(462);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(333);
      END_STATE();
    case 291:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(367);
      END_STATE();
    case 292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(236);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(442);
      END_STATE();
    case 293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(240);
      END_STATE();
    case 294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(119);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 298:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(565);
      END_STATE();
    case 299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(621);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(927);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(909);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(903);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(875);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(924);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(609);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(457);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(154);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(111);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(462);
      END_STATE();
    case 313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(259);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(481);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(341);
      END_STATE();
    case 316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(341);
      END_STATE();
    case 317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 318:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 319:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 320:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 321:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 322:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 323:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 324:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(417);
      END_STATE();
    case 325:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(418);
      END_STATE();
    case 326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 330:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(451);
      END_STATE();
    case 331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(453);
      END_STATE();
    case 332:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 333:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 334:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 335:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 336:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(398);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 337:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(865);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(479);
      END_STATE();
    case 338:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(865);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(491);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(374);
      END_STATE();
    case 339:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 340:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(633);
      END_STATE();
    case 341:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 342:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 343:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 344:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 345:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 346:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 347:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(500);
      END_STATE();
    case 348:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 349:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 350:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 351:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 352:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 353:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 354:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 355:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 356:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(399);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(375);
      END_STATE();
    case 357:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(397);
      END_STATE();
    case 358:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 359:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 360:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 361:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(312);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 362:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(312);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      END_STATE();
    case 363:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 364:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 365:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(912);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 366:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(655);
      END_STATE();
    case 367:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(629);
      END_STATE();
    case 368:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(111);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 369:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(111);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 370:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 371:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 372:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 373:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 374:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 375:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 376:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(280);
      END_STATE();
    case 377:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 378:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 379:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 380:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 381:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 382:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(868);
      END_STATE();
    case 383:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 384:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(904);
      END_STATE();
    case 385:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(886);
      END_STATE();
    case 386:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(919);
      END_STATE();
    case 387:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(928);
      END_STATE();
    case 388:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(937);
      END_STATE();
    case 389:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(889);
      END_STATE();
    case 390:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(888);
      END_STATE();
    case 391:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 392:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 393:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(509);
      END_STATE();
    case 394:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 395:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 396:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 397:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 398:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(496);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(634);
      END_STATE();
    case 399:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 400:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 401:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 402:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(430);
      END_STATE();
    case 403:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 404:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 405:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 406:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 407:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 408:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 409:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 410:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 411:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(489);
      END_STATE();
    case 412:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(619);
      END_STATE();
    case 413:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(635);
      END_STATE();
    case 414:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(651);
      END_STATE();
    case 415:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(929);
      END_STATE();
    case 416:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(899);
      END_STATE();
    case 417:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(610);
      END_STATE();
    case 418:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(867);
      END_STATE();
    case 419:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(925);
      END_STATE();
    case 420:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(877);
      END_STATE();
    case 421:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(873);
      END_STATE();
    case 422:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(876);
      END_STATE();
    case 423:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(501);
      END_STATE();
    case 424:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(423);
      END_STATE();
    case 425:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(345);
      END_STATE();
    case 426:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(473);
      END_STATE();
    case 427:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(436);
      END_STATE();
    case 428:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(459);
      END_STATE();
    case 429:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 430:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      END_STATE();
    case 431:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 432:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 433:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      END_STATE();
    case 434:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 435:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(377);
      END_STATE();
    case 436:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(242);
      END_STATE();
    case 437:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(372);
      END_STATE();
    case 438:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(478);
      END_STATE();
    case 439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      END_STATE();
    case 440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(79);
      END_STATE();
    case 441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(910);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(880);
      END_STATE();
    case 443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(914);
      END_STATE();
    case 444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(908);
      END_STATE();
    case 445:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(864);
      END_STATE();
    case 446:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(923);
      END_STATE();
    case 447:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(569);
      END_STATE();
    case 448:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(901);
      END_STATE();
    case 449:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(631);
      END_STATE();
    case 450:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(561);
      END_STATE();
    case 451:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(920);
      END_STATE();
    case 452:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(934);
      END_STATE();
    case 453:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(917);
      END_STATE();
    case 454:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(563);
      END_STATE();
    case 455:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(913);
      END_STATE();
    case 456:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(215);
      END_STATE();
    case 457:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(394);
      END_STATE();
    case 458:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 459:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(412);
      END_STATE();
    case 460:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 461:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      END_STATE();
    case 462:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 463:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 464:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 465:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 466:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      END_STATE();
    case 467:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 468:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 469:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 470:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 471:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      END_STATE();
    case 472:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 473:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(241);
      END_STATE();
    case 474:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 475:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 476:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      END_STATE();
    case 477:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      END_STATE();
    case 478:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 479:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 480:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 481:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(409);
      END_STATE();
    case 482:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(402);
      END_STATE();
    case 483:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(446);
      END_STATE();
    case 484:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 485:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 486:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(438);
      END_STATE();
    case 487:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 488:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 489:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(433);
      END_STATE();
    case 490:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(322);
      END_STATE();
    case 491:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 492:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(469);
      END_STATE();
    case 493:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 494:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 495:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(309);
      END_STATE();
    case 496:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(378);
      END_STATE();
    case 497:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(341);
      END_STATE();
    case 498:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(142);
      END_STATE();
    case 499:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(885);
      END_STATE();
    case 500:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(567);
      END_STATE();
    case 501:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(354);
      END_STATE();
    case 502:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(403);
      END_STATE();
    case 503:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(646);
      END_STATE();
    case 504:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(443);
      END_STATE();
    case 505:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(153);
      END_STATE();
    case 506:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(612);
      END_STATE();
    case 507:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(938);
      END_STATE();
    case 508:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(872);
      END_STATE();
    case 509:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(896);
      END_STATE();
    case 510:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(611);
      END_STATE();
    case 511:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(435);
      END_STATE();
    case 512:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(375);
      END_STATE();
    case 513:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(248);
      END_STATE();
    case 514:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(437);
      END_STATE();
    case 515:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(141);
      END_STATE();
    case 516:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(169);
      END_STATE();
    case 517:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      END_STATE();
    case 518:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      END_STATE();
    case 519:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(591);
      END_STATE();
    case 520:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(593);
      END_STATE();
    case 521:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 522:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 523:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(578);
      END_STATE();
    case 524:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(521);
      END_STATE();
    case 525:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(522);
      END_STATE();
    case 526:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 527:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 528:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(526);
      END_STATE();
    case 529:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 530:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 531:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 532:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(530);
      END_STATE();
    case 533:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 534:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(533);
      END_STATE();
    case 535:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 536:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(534);
      END_STATE();
    case 537:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(536);
      END_STATE();
    case 538:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(532);
      END_STATE();
    case 539:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 540:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(539);
      END_STATE();
    case 541:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      END_STATE();
    case 542:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(540);
      END_STATE();
    case 543:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(542);
      END_STATE();
    case 544:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(538);
      END_STATE();
    case 545:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 546:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(545);
      END_STATE();
    case 547:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(546);
      END_STATE();
    case 548:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(547);
      END_STATE();
    case 549:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 550:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(549);
      END_STATE();
    case 551:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(550);
      END_STATE();
    case 552:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(551);
      END_STATE();
    case 553:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      END_STATE();
    case 554:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 555:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(5);
      END_STATE();
    case 556:
      if (eof) ADVANCE(559);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ')') ADVANCE(575);
      if (lookahead == '-') ADVANCE(518);
      if (lookahead == '.') ADVANCE(572);
      if (lookahead == '0') ADVANCE(581);
      if (lookahead == ';') ADVANCE(560);
      if (lookahead == '<') ADVANCE(601);
      if (lookahead == '=') ADVANCE(604);
      if (lookahead == '>') ADVANCE(605);
      if (lookahead == 'X') ADVANCE(24);
      if (lookahead == '[') ADVANCE(626);
      if (lookahead == '{') ADVANCE(636);
      if (lookahead == '}') ADVANCE(638);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(144);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(362);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(38);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(305);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(165);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(220);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(485);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(192);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(186);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(556)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(589);
      END_STATE();
    case 557:
      if (eof) ADVANCE(559);
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == ';') ADVANCE(560);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(755);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(712);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(748);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(714);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(803);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(770);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(726);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(695);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(715);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(799);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(557)
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 558:
      if (eof) ADVANCE(559);
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ')') ADVANCE(575);
      if (lookahead == '+') ADVANCE(861);
      if (lookahead == ',') ADVANCE(571);
      if (lookahead == '-') ADVANCE(862);
      if (lookahead == '.') ADVANCE(572);
      if (lookahead == ':') ADVANCE(637);
      if (lookahead == ';') ADVANCE(560);
      if (lookahead == '<') ADVANCE(601);
      if (lookahead == '=') ADVANCE(604);
      if (lookahead == '>') ADVANCE(605);
      if (lookahead == '[') ADVANCE(626);
      if (lookahead == ']') ADVANCE(627);
      if (lookahead == '}') ADVANCE(638);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(147);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(361);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(185);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(234);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(425);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(158);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(32);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(380);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(338);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(368);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(53);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(558)
      END_STATE();
    case 559:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_limit_spec_token1);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_uuid);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == '.') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(519);
      if (lookahead == 'X') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(522);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(591);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_hexadecimal_literal);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_hexadecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(593);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_code_block);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(602);
      if (lookahead == '>') ADVANCE(603);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(606);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(150);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(441);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(458);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(483);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(911);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(458);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token1);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(649);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_insert_statement_token3);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_ttl_token1);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(820);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(836);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(820);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(787);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(796);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(856);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(819);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(795);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(743);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(759);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(769);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(763);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(681);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(738);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(797);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(683);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(830);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(832);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(680);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(739);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(754);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(692);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(721);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(769);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(819);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(728);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(725);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(822);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(827);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(823);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(676);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(661);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(844);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(758);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(794);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(811);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(843);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(645);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(616);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(641);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(643);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(686);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(819);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(667);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(819);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(795);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(848);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(763);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(670);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(798);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(808);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(801);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(720);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(849);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(752);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(784);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(753);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(831);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(618);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(727);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(729);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(719);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(776);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(777);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(690);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(760);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(810);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(769);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(722);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(765);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(782);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(768);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(709);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(762);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(817);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(813);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(775);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(692);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(692);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(577);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(654);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(846);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(746);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(707);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(783);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(778);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(727);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(837);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(761);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(837);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(711);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(738);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(740);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(741);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(716);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(701);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(700);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(824);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(791);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(598);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(694);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(847);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(788);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(672);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(792);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(673);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(703);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(622);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(566);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(648);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(718);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(819);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(814);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(689);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(833);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(824);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(687);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(688);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(678);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(744);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(850);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(737);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(834);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(757);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(763);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(665);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(789);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(766);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(739);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(656);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(691);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(692);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(742);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(674);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(671);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(739);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(682);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(846);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(821);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(838);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(840);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(731);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(732);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(669);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(781);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(733);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(684);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(650);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(652);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(620);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(819);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(825);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(835);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(785);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(826);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(708);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(699);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(793);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(828);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(829);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(692);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(632);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(562);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(564);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(704);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(668);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(809);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(730);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(736);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(710);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(696);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(697);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(698);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(802);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(773);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(724);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(679);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(818);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(771);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(774);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(699);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(750);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(751);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(779);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(819);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(735);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(727);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(807);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(816);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(706);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(858);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(659);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(851);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(853);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(854);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(856);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_drop_index_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_update_token2);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_priviledge_token1);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_priviledge_token2);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_priviledge_token3);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_priviledge_token4);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_priviledge_token5);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_priviledge_token6);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_priviledge_token7);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_resource_token3);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_resource_token4);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_drop_aggregate_token1);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token1);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token2);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_drop_trigger_token1);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_drop_type_token1);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token2);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token3);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token4);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token5);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token6);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token1);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token2);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_column_not_null_token1);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(633);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(464);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(487);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_return_mode_token1);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_return_mode_token2);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token1);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_durable_writes_token1);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_role_with_options_token1);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_role_with_options_token2);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_role_with_options_token3);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_role_with_options_token4);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_order_direction_token1);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_order_direction_token2);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_alter_table_add_token1);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_alter_table_drop_compact_storage_token1);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_alter_table_drop_compact_storage_token2);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_alter_table_rename_token1);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_user_super_user_token1);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_apply_batch_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 558},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 558},
  [6] = {.lex_state = 558},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 558},
  [62] = {.lex_state = 558},
  [63] = {.lex_state = 558},
  [64] = {.lex_state = 558},
  [65] = {.lex_state = 558},
  [66] = {.lex_state = 558},
  [67] = {.lex_state = 558},
  [68] = {.lex_state = 558},
  [69] = {.lex_state = 558},
  [70] = {.lex_state = 558},
  [71] = {.lex_state = 558},
  [72] = {.lex_state = 558},
  [73] = {.lex_state = 557},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 558},
  [77] = {.lex_state = 558},
  [78] = {.lex_state = 558},
  [79] = {.lex_state = 558},
  [80] = {.lex_state = 558},
  [81] = {.lex_state = 558},
  [82] = {.lex_state = 558},
  [83] = {.lex_state = 558},
  [84] = {.lex_state = 558},
  [85] = {.lex_state = 558},
  [86] = {.lex_state = 558},
  [87] = {.lex_state = 558},
  [88] = {.lex_state = 558},
  [89] = {.lex_state = 558},
  [90] = {.lex_state = 556},
  [91] = {.lex_state = 556},
  [92] = {.lex_state = 558},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 558},
  [95] = {.lex_state = 558},
  [96] = {.lex_state = 558},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 558},
  [100] = {.lex_state = 556},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 558},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 558},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 558},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 558},
  [115] = {.lex_state = 558},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 558},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 556},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 558},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 558},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
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
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 558},
  [223] = {.lex_state = 558},
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
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 558},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 558},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 556},
  [249] = {.lex_state = 558},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 558},
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
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
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
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 1},
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
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 556},
  [435] = {.lex_state = 556},
  [436] = {.lex_state = 556},
  [437] = {.lex_state = 556},
  [438] = {.lex_state = 1},
  [439] = {.lex_state = 556},
  [440] = {.lex_state = 556},
  [441] = {.lex_state = 556},
  [442] = {.lex_state = 556},
  [443] = {.lex_state = 1},
  [444] = {.lex_state = 556},
  [445] = {.lex_state = 1},
  [446] = {.lex_state = 1},
  [447] = {.lex_state = 1},
  [448] = {.lex_state = 556},
  [449] = {.lex_state = 6},
  [450] = {.lex_state = 556},
  [451] = {.lex_state = 49},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 556},
  [454] = {.lex_state = 556},
  [455] = {.lex_state = 6},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 6},
  [458] = {.lex_state = 49},
  [459] = {.lex_state = 556},
  [460] = {.lex_state = 17},
  [461] = {.lex_state = 556},
  [462] = {.lex_state = 556},
  [463] = {.lex_state = 17},
  [464] = {.lex_state = 17},
  [465] = {.lex_state = 556},
  [466] = {.lex_state = 17},
  [467] = {.lex_state = 17},
  [468] = {.lex_state = 556},
  [469] = {.lex_state = 17},
  [470] = {.lex_state = 556},
  [471] = {.lex_state = 556},
  [472] = {.lex_state = 556},
  [473] = {.lex_state = 556},
  [474] = {.lex_state = 556},
  [475] = {.lex_state = 17},
  [476] = {.lex_state = 17},
  [477] = {.lex_state = 556},
  [478] = {.lex_state = 556},
  [479] = {.lex_state = 556},
  [480] = {.lex_state = 556},
  [481] = {.lex_state = 11},
  [482] = {.lex_state = 11},
  [483] = {.lex_state = 15},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 11},
  [486] = {.lex_state = 11},
  [487] = {.lex_state = 11},
  [488] = {.lex_state = 11},
  [489] = {.lex_state = 15},
  [490] = {.lex_state = 11},
  [491] = {.lex_state = 11},
  [492] = {.lex_state = 11},
  [493] = {.lex_state = 12},
  [494] = {.lex_state = 15},
  [495] = {.lex_state = 11},
  [496] = {.lex_state = 13},
  [497] = {.lex_state = 556},
  [498] = {.lex_state = 556},
  [499] = {.lex_state = 11},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 11},
  [502] = {.lex_state = 11},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 14},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 21},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 49},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 11},
  [511] = {.lex_state = 18},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 18},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 16},
  [516] = {.lex_state = 16},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 16},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 16},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 16},
  [526] = {.lex_state = 16},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 22},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 16},
  [531] = {.lex_state = 11},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 11},
  [535] = {.lex_state = 11},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 16},
  [538] = {.lex_state = 11},
  [539] = {.lex_state = 16},
  [540] = {.lex_state = 16},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 11},
  [543] = {.lex_state = 556},
  [544] = {.lex_state = 16},
  [545] = {.lex_state = 16},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 16},
  [548] = {.lex_state = 16},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 16},
  [551] = {.lex_state = 16},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 11},
  [559] = {.lex_state = 11},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 11},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 23},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 11},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 11},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 11},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 11},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 11},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 11},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 556},
  [581] = {.lex_state = 11},
  [582] = {.lex_state = 11},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 11},
  [586] = {.lex_state = 11},
  [587] = {.lex_state = 11},
  [588] = {.lex_state = 23},
  [589] = {.lex_state = 11},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 11},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 11},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 558},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 11},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 11},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 11},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 11},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 11},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 11},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 11},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 11},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 11},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 11},
  [647] = {.lex_state = 11},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 19},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 11},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 11},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 11},
  [670] = {.lex_state = 11},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 19},
  [677] = {.lex_state = 19},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 11},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 11},
  [691] = {.lex_state = 11},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 11},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 11},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 11},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 11},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 11},
  [712] = {.lex_state = 11},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 11},
  [718] = {.lex_state = 19},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 11},
  [721] = {.lex_state = 11},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 11},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 11},
  [737] = {.lex_state = 11},
  [738] = {.lex_state = 11},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 19},
  [742] = {.lex_state = 19},
  [743] = {.lex_state = 19},
  [744] = {.lex_state = 19},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 19},
  [747] = {.lex_state = 19},
  [748] = {.lex_state = 19},
  [749] = {.lex_state = 19},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 19},
  [752] = {.lex_state = 19},
  [753] = {.lex_state = 19},
  [754] = {.lex_state = 19},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 19},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 19},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 19},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 19},
  [767] = {.lex_state = 11},
  [768] = {.lex_state = 11},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 11},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 15},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 11},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 11},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 11},
  [790] = {.lex_state = 11},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 11},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 11},
  [795] = {.lex_state = 11},
  [796] = {.lex_state = 19},
  [797] = {.lex_state = 11},
  [798] = {.lex_state = 11},
  [799] = {.lex_state = 11},
  [800] = {.lex_state = 11},
  [801] = {.lex_state = 11},
  [802] = {.lex_state = 11},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 11},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 6},
  [808] = {.lex_state = 11},
  [809] = {.lex_state = 11},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 11},
  [812] = {.lex_state = 11},
  [813] = {.lex_state = 11},
  [814] = {.lex_state = 11},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 11},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 11},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 11},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 11},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 11},
  [835] = {.lex_state = 11},
  [836] = {.lex_state = 11},
  [837] = {.lex_state = 11},
  [838] = {.lex_state = 11},
  [839] = {.lex_state = 11},
  [840] = {.lex_state = 11},
  [841] = {.lex_state = 11},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 11},
  [844] = {.lex_state = 11},
  [845] = {.lex_state = 11},
  [846] = {.lex_state = 11},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 11},
  [850] = {.lex_state = 11},
  [851] = {.lex_state = 11},
  [852] = {.lex_state = 11},
  [853] = {.lex_state = 11},
  [854] = {.lex_state = 11},
  [855] = {.lex_state = 11},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 11},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 11},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 11},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 11},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 11},
  [870] = {.lex_state = 11},
  [871] = {.lex_state = 11},
  [872] = {.lex_state = 11},
  [873] = {.lex_state = 11},
  [874] = {.lex_state = 11},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 11},
  [877] = {.lex_state = 11},
  [878] = {.lex_state = 11},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 11},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 11},
  [886] = {.lex_state = 11},
  [887] = {.lex_state = 11},
  [888] = {.lex_state = 11},
  [889] = {.lex_state = 11},
  [890] = {.lex_state = 11},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 11},
  [893] = {.lex_state = 11},
  [894] = {.lex_state = 11},
  [895] = {.lex_state = 11},
  [896] = {.lex_state = 11},
  [897] = {.lex_state = 6},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 11},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 11},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 11},
  [907] = {.lex_state = 11},
  [908] = {.lex_state = 11},
  [909] = {.lex_state = 11},
  [910] = {.lex_state = 11},
  [911] = {.lex_state = 11},
  [912] = {.lex_state = 11},
  [913] = {.lex_state = 556},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 11},
  [916] = {.lex_state = 11},
  [917] = {.lex_state = 11},
  [918] = {.lex_state = 11},
  [919] = {.lex_state = 11},
  [920] = {.lex_state = 11},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 11},
  [923] = {.lex_state = 11},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 11},
  [926] = {.lex_state = 11},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 11},
  [929] = {.lex_state = 11},
  [930] = {.lex_state = 11},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 11},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 11},
  [935] = {.lex_state = 11},
  [936] = {.lex_state = 11},
  [937] = {.lex_state = 11},
  [938] = {.lex_state = 11},
  [939] = {.lex_state = 11},
  [940] = {.lex_state = 11},
  [941] = {.lex_state = 11},
  [942] = {.lex_state = 11},
  [943] = {.lex_state = 11},
  [944] = {.lex_state = 11},
  [945] = {.lex_state = 11},
  [946] = {.lex_state = 11},
  [947] = {.lex_state = 11},
  [948] = {.lex_state = 11},
  [949] = {.lex_state = 11},
  [950] = {.lex_state = 11},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 11},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 11},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 11},
  [959] = {.lex_state = 11},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 11},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 0},
  [964] = {.lex_state = 11},
  [965] = {.lex_state = 11},
  [966] = {.lex_state = 0},
  [967] = {.lex_state = 11},
  [968] = {.lex_state = 11},
  [969] = {.lex_state = 0},
  [970] = {.lex_state = 0},
  [971] = {.lex_state = 11},
  [972] = {.lex_state = 11},
  [973] = {.lex_state = 11},
  [974] = {.lex_state = 11},
  [975] = {.lex_state = 11},
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 11},
  [978] = {.lex_state = 11},
  [979] = {.lex_state = 11},
  [980] = {.lex_state = 11},
  [981] = {.lex_state = 11},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 11},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 11},
  [986] = {.lex_state = 11},
  [987] = {.lex_state = 11},
  [988] = {.lex_state = 11},
  [989] = {.lex_state = 11},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 0},
  [993] = {.lex_state = 11},
  [994] = {.lex_state = 0},
  [995] = {.lex_state = 11},
  [996] = {.lex_state = 11},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 11},
  [999] = {.lex_state = 11},
  [1000] = {.lex_state = 11},
  [1001] = {.lex_state = 0},
  [1002] = {.lex_state = 11},
  [1003] = {.lex_state = 11},
  [1004] = {.lex_state = 11},
  [1005] = {.lex_state = 11},
  [1006] = {.lex_state = 11},
  [1007] = {.lex_state = 0},
  [1008] = {.lex_state = 0},
  [1009] = {.lex_state = 11},
  [1010] = {.lex_state = 11},
  [1011] = {.lex_state = 11},
  [1012] = {.lex_state = 11},
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 11},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 11},
  [1017] = {.lex_state = 11},
  [1018] = {.lex_state = 11},
  [1019] = {.lex_state = 0},
  [1020] = {.lex_state = 0},
  [1021] = {.lex_state = 11},
  [1022] = {.lex_state = 11},
  [1023] = {.lex_state = 0},
  [1024] = {.lex_state = 11},
  [1025] = {.lex_state = 11},
  [1026] = {.lex_state = 11},
  [1027] = {.lex_state = 11},
  [1028] = {.lex_state = 11},
  [1029] = {.lex_state = 11},
  [1030] = {.lex_state = 11},
  [1031] = {.lex_state = 11},
  [1032] = {.lex_state = 0},
  [1033] = {.lex_state = 0},
  [1034] = {.lex_state = 11},
  [1035] = {.lex_state = 11},
  [1036] = {.lex_state = 11},
  [1037] = {.lex_state = 11},
  [1038] = {.lex_state = 0},
  [1039] = {.lex_state = 11},
  [1040] = {.lex_state = 11},
  [1041] = {.lex_state = 11},
  [1042] = {.lex_state = 0},
  [1043] = {.lex_state = 11},
  [1044] = {.lex_state = 0},
  [1045] = {.lex_state = 11},
  [1046] = {.lex_state = 11},
  [1047] = {.lex_state = 0},
  [1048] = {.lex_state = 0},
  [1049] = {.lex_state = 11},
  [1050] = {.lex_state = 11},
  [1051] = {.lex_state = 11},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 0},
  [1054] = {.lex_state = 0},
  [1055] = {.lex_state = 0},
  [1056] = {.lex_state = 0},
  [1057] = {.lex_state = 11},
  [1058] = {.lex_state = 0},
  [1059] = {.lex_state = 0},
  [1060] = {.lex_state = 0},
  [1061] = {.lex_state = 14},
  [1062] = {.lex_state = 0},
  [1063] = {.lex_state = 0},
  [1064] = {.lex_state = 0},
  [1065] = {.lex_state = 0},
  [1066] = {.lex_state = 0},
  [1067] = {.lex_state = 0},
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
  [1078] = {.lex_state = 0},
  [1079] = {.lex_state = 0},
  [1080] = {.lex_state = 0},
  [1081] = {.lex_state = 0},
  [1082] = {.lex_state = 0},
  [1083] = {.lex_state = 0},
  [1084] = {.lex_state = 0},
  [1085] = {.lex_state = 0},
  [1086] = {.lex_state = 0},
  [1087] = {.lex_state = 0},
  [1088] = {.lex_state = 0},
  [1089] = {.lex_state = 0},
  [1090] = {.lex_state = 0},
  [1091] = {.lex_state = 0},
  [1092] = {.lex_state = 556},
  [1093] = {.lex_state = 0},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 0},
  [1096] = {.lex_state = 0},
  [1097] = {.lex_state = 0},
  [1098] = {.lex_state = 0},
  [1099] = {.lex_state = 0},
  [1100] = {.lex_state = 0},
  [1101] = {.lex_state = 0},
  [1102] = {.lex_state = 0},
  [1103] = {.lex_state = 0},
  [1104] = {.lex_state = 0},
  [1105] = {.lex_state = 0},
  [1106] = {.lex_state = 0},
  [1107] = {.lex_state = 0},
  [1108] = {.lex_state = 0},
  [1109] = {.lex_state = 0},
  [1110] = {.lex_state = 0},
  [1111] = {.lex_state = 0},
  [1112] = {.lex_state = 0},
  [1113] = {.lex_state = 0},
  [1114] = {.lex_state = 0},
  [1115] = {.lex_state = 0},
  [1116] = {.lex_state = 0},
  [1117] = {.lex_state = 0},
  [1118] = {.lex_state = 0},
  [1119] = {.lex_state = 0},
  [1120] = {.lex_state = 0},
  [1121] = {.lex_state = 0},
  [1122] = {.lex_state = 0},
  [1123] = {.lex_state = 0},
  [1124] = {.lex_state = 0},
  [1125] = {.lex_state = 0},
  [1126] = {.lex_state = 0},
  [1127] = {.lex_state = 0},
  [1128] = {.lex_state = 0},
  [1129] = {.lex_state = 0},
  [1130] = {.lex_state = 0},
  [1131] = {.lex_state = 0},
  [1132] = {.lex_state = 0},
  [1133] = {.lex_state = 0},
  [1134] = {.lex_state = 0},
  [1135] = {.lex_state = 0},
  [1136] = {.lex_state = 0},
  [1137] = {.lex_state = 0},
  [1138] = {.lex_state = 0},
  [1139] = {.lex_state = 0},
  [1140] = {.lex_state = 0},
  [1141] = {.lex_state = 0},
  [1142] = {.lex_state = 0},
  [1143] = {.lex_state = 6},
  [1144] = {.lex_state = 0},
  [1145] = {.lex_state = 0},
  [1146] = {.lex_state = 0},
  [1147] = {.lex_state = 0},
  [1148] = {.lex_state = 0},
  [1149] = {.lex_state = 0},
  [1150] = {.lex_state = 0},
  [1151] = {.lex_state = 0},
  [1152] = {.lex_state = 0},
  [1153] = {.lex_state = 0},
  [1154] = {.lex_state = 0},
  [1155] = {.lex_state = 0},
  [1156] = {.lex_state = 0},
  [1157] = {.lex_state = 0},
  [1158] = {.lex_state = 0},
  [1159] = {.lex_state = 0},
  [1160] = {.lex_state = 14},
  [1161] = {.lex_state = 0},
  [1162] = {.lex_state = 0},
  [1163] = {.lex_state = 0},
  [1164] = {.lex_state = 0},
  [1165] = {.lex_state = 0},
  [1166] = {.lex_state = 0},
  [1167] = {.lex_state = 0},
  [1168] = {.lex_state = 0},
  [1169] = {.lex_state = 0},
  [1170] = {.lex_state = 0},
  [1171] = {.lex_state = 0},
  [1172] = {.lex_state = 0},
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
  [1197] = {.lex_state = 0},
  [1198] = {.lex_state = 0},
  [1199] = {.lex_state = 0},
  [1200] = {.lex_state = 556},
  [1201] = {.lex_state = 556},
  [1202] = {.lex_state = 0},
  [1203] = {.lex_state = 0},
  [1204] = {.lex_state = 0},
  [1205] = {.lex_state = 0},
  [1206] = {.lex_state = 0},
  [1207] = {.lex_state = 0},
  [1208] = {.lex_state = 0},
  [1209] = {.lex_state = 11},
  [1210] = {.lex_state = 0},
  [1211] = {.lex_state = 0},
  [1212] = {.lex_state = 0},
  [1213] = {.lex_state = 0},
  [1214] = {.lex_state = 0},
  [1215] = {.lex_state = 0},
  [1216] = {.lex_state = 0},
  [1217] = {.lex_state = 0},
  [1218] = {.lex_state = 0},
  [1219] = {.lex_state = 0},
  [1220] = {.lex_state = 0},
  [1221] = {.lex_state = 0},
  [1222] = {.lex_state = 0},
  [1223] = {.lex_state = 6},
  [1224] = {.lex_state = 0},
  [1225] = {.lex_state = 0},
  [1226] = {.lex_state = 0},
  [1227] = {.lex_state = 0},
  [1228] = {.lex_state = 0},
  [1229] = {.lex_state = 0},
  [1230] = {.lex_state = 0},
  [1231] = {.lex_state = 0},
  [1232] = {.lex_state = 0},
  [1233] = {.lex_state = 0},
  [1234] = {.lex_state = 0},
  [1235] = {.lex_state = 0},
  [1236] = {.lex_state = 6},
  [1237] = {.lex_state = 0},
  [1238] = {.lex_state = 0},
  [1239] = {.lex_state = 6},
  [1240] = {.lex_state = 0},
  [1241] = {.lex_state = 0},
  [1242] = {.lex_state = 0},
  [1243] = {.lex_state = 0},
  [1244] = {.lex_state = 0},
  [1245] = {.lex_state = 556},
  [1246] = {.lex_state = 0},
  [1247] = {.lex_state = 0},
  [1248] = {.lex_state = 0},
  [1249] = {.lex_state = 0},
  [1250] = {.lex_state = 0},
  [1251] = {.lex_state = 0},
  [1252] = {.lex_state = 0},
  [1253] = {.lex_state = 0},
  [1254] = {.lex_state = 0},
  [1255] = {.lex_state = 0},
  [1256] = {.lex_state = 0},
  [1257] = {.lex_state = 0},
  [1258] = {.lex_state = 0},
  [1259] = {.lex_state = 0},
  [1260] = {.lex_state = 0},
  [1261] = {.lex_state = 0},
  [1262] = {.lex_state = 0},
  [1263] = {.lex_state = 0},
  [1264] = {.lex_state = 0},
  [1265] = {.lex_state = 0},
  [1266] = {.lex_state = 6},
  [1267] = {.lex_state = 0},
  [1268] = {.lex_state = 0},
  [1269] = {.lex_state = 0},
  [1270] = {.lex_state = 0},
  [1271] = {.lex_state = 0},
  [1272] = {.lex_state = 0},
  [1273] = {.lex_state = 0},
  [1274] = {.lex_state = 0},
  [1275] = {.lex_state = 0},
  [1276] = {.lex_state = 6},
  [1277] = {.lex_state = 0},
  [1278] = {.lex_state = 0},
  [1279] = {.lex_state = 0},
  [1280] = {.lex_state = 0},
  [1281] = {.lex_state = 0},
  [1282] = {.lex_state = 0},
  [1283] = {.lex_state = 0},
  [1284] = {.lex_state = 0},
  [1285] = {.lex_state = 0},
  [1286] = {.lex_state = 0},
  [1287] = {.lex_state = 556},
  [1288] = {.lex_state = 0},
  [1289] = {.lex_state = 0},
  [1290] = {.lex_state = 556},
  [1291] = {.lex_state = 0},
  [1292] = {.lex_state = 0},
  [1293] = {.lex_state = 0},
  [1294] = {.lex_state = 0},
  [1295] = {.lex_state = 0},
  [1296] = {.lex_state = 0},
  [1297] = {.lex_state = 0},
  [1298] = {.lex_state = 0},
  [1299] = {.lex_state = 556},
  [1300] = {.lex_state = 14},
  [1301] = {.lex_state = 0},
  [1302] = {.lex_state = 0},
  [1303] = {.lex_state = 0},
  [1304] = {.lex_state = 0},
  [1305] = {.lex_state = 0},
  [1306] = {.lex_state = 0},
  [1307] = {.lex_state = 0},
  [1308] = {.lex_state = 0},
  [1309] = {.lex_state = 0},
  [1310] = {.lex_state = 0},
  [1311] = {.lex_state = 0},
  [1312] = {.lex_state = 0},
  [1313] = {.lex_state = 0},
  [1314] = {.lex_state = 0},
  [1315] = {.lex_state = 14},
  [1316] = {.lex_state = 0},
  [1317] = {.lex_state = 0},
  [1318] = {.lex_state = 0},
  [1319] = {.lex_state = 0},
  [1320] = {.lex_state = 0},
  [1321] = {.lex_state = 0},
  [1322] = {.lex_state = 0},
  [1323] = {.lex_state = 0},
  [1324] = {.lex_state = 0},
  [1325] = {.lex_state = 556},
  [1326] = {.lex_state = 556},
  [1327] = {.lex_state = 0},
  [1328] = {.lex_state = 0},
  [1329] = {.lex_state = 0},
  [1330] = {.lex_state = 0},
  [1331] = {.lex_state = 0},
  [1332] = {.lex_state = 0},
  [1333] = {.lex_state = 0},
  [1334] = {.lex_state = 0},
  [1335] = {.lex_state = 0},
  [1336] = {.lex_state = 0},
  [1337] = {.lex_state = 0},
  [1338] = {.lex_state = 0},
  [1339] = {.lex_state = 0},
  [1340] = {.lex_state = 0},
  [1341] = {.lex_state = 0},
  [1342] = {.lex_state = 0},
  [1343] = {.lex_state = 11},
  [1344] = {.lex_state = 6},
  [1345] = {.lex_state = 0},
  [1346] = {.lex_state = 6},
  [1347] = {.lex_state = 0},
  [1348] = {.lex_state = 0},
  [1349] = {.lex_state = 0},
  [1350] = {.lex_state = 6},
  [1351] = {.lex_state = 0},
  [1352] = {.lex_state = 0},
  [1353] = {.lex_state = 0},
  [1354] = {.lex_state = 0},
  [1355] = {.lex_state = 0},
  [1356] = {.lex_state = 0},
  [1357] = {.lex_state = 0},
  [1358] = {.lex_state = 0},
  [1359] = {.lex_state = 0},
  [1360] = {.lex_state = 0},
  [1361] = {.lex_state = 0},
  [1362] = {.lex_state = 0},
  [1363] = {.lex_state = 0},
  [1364] = {.lex_state = 0},
  [1365] = {.lex_state = 0},
  [1366] = {.lex_state = 0},
  [1367] = {.lex_state = 0},
  [1368] = {.lex_state = 0},
  [1369] = {.lex_state = 0},
  [1370] = {.lex_state = 0},
  [1371] = {.lex_state = 0},
  [1372] = {.lex_state = 0},
  [1373] = {.lex_state = 0},
  [1374] = {.lex_state = 0},
  [1375] = {.lex_state = 0},
  [1376] = {.lex_state = 0},
  [1377] = {.lex_state = 0},
  [1378] = {.lex_state = 0},
  [1379] = {.lex_state = 6},
  [1380] = {.lex_state = 0},
  [1381] = {.lex_state = 0},
  [1382] = {.lex_state = 0},
  [1383] = {.lex_state = 0},
  [1384] = {.lex_state = 556},
  [1385] = {.lex_state = 0},
  [1386] = {.lex_state = 0},
  [1387] = {.lex_state = 0},
  [1388] = {.lex_state = 0},
  [1389] = {.lex_state = 0},
  [1390] = {.lex_state = 0},
  [1391] = {.lex_state = 0},
  [1392] = {.lex_state = 0},
  [1393] = {.lex_state = 0},
  [1394] = {.lex_state = 0},
  [1395] = {.lex_state = 0},
  [1396] = {.lex_state = 0},
  [1397] = {.lex_state = 0},
  [1398] = {.lex_state = 0},
  [1399] = {.lex_state = 0},
  [1400] = {.lex_state = 0},
  [1401] = {.lex_state = 558},
  [1402] = {.lex_state = 0},
  [1403] = {.lex_state = 0},
  [1404] = {.lex_state = 0},
  [1405] = {.lex_state = 0},
  [1406] = {.lex_state = 0},
  [1407] = {.lex_state = 0},
  [1408] = {.lex_state = 0},
  [1409] = {.lex_state = 0},
  [1410] = {.lex_state = 0},
  [1411] = {.lex_state = 0},
  [1412] = {.lex_state = 0},
  [1413] = {.lex_state = 0},
  [1414] = {.lex_state = 6},
  [1415] = {.lex_state = 6},
  [1416] = {.lex_state = 0},
  [1417] = {.lex_state = 0},
  [1418] = {.lex_state = 0},
  [1419] = {.lex_state = 0},
  [1420] = {.lex_state = 0},
  [1421] = {.lex_state = 6},
  [1422] = {.lex_state = 0},
  [1423] = {.lex_state = 0},
  [1424] = {.lex_state = 0},
  [1425] = {.lex_state = 0},
  [1426] = {.lex_state = 0},
  [1427] = {.lex_state = 0},
  [1428] = {.lex_state = 0},
  [1429] = {.lex_state = 0},
  [1430] = {.lex_state = 0},
  [1431] = {.lex_state = 0},
  [1432] = {.lex_state = 0},
  [1433] = {.lex_state = 0},
  [1434] = {.lex_state = 0},
  [1435] = {.lex_state = 0},
  [1436] = {.lex_state = 0},
  [1437] = {.lex_state = 11},
  [1438] = {.lex_state = 0},
  [1439] = {.lex_state = 0},
  [1440] = {.lex_state = 11},
  [1441] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_select_statement_token1] = ACTIONS(1),
    [aux_sym_select_statement_token2] = ACTIONS(1),
    [aux_sym_select_statement_token3] = ACTIONS(1),
    [aux_sym_select_statement_token5] = ACTIONS(1),
    [aux_sym_limit_spec_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_select_element_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_hexadecimal_literal] = ACTIONS(1),
    [sym_boolean_literal] = ACTIONS(1),
    [sym_code_block] = ACTIONS(1),
    [aux_sym_from_spec_token1] = ACTIONS(1),
    [aux_sym_where_spec_token1] = ACTIONS(1),
    [aux_sym_relation_elements_token1] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [aux_sym_relation_element_token1] = ACTIONS(1),
    [aux_sym_relation_contains_key_token1] = ACTIONS(1),
    [aux_sym_relation_contains_key_token2] = ACTIONS(1),
    [aux_sym_order_spec_token1] = ACTIONS(1),
    [aux_sym_order_spec_token2] = ACTIONS(1),
    [aux_sym_delete_statement_token1] = ACTIONS(1),
    [aux_sym_delete_statement_token2] = ACTIONS(1),
    [aux_sym_delete_statement_token3] = ACTIONS(1),
    [aux_sym_begin_batch_token1] = ACTIONS(1),
    [aux_sym_begin_batch_token2] = ACTIONS(1),
    [aux_sym_begin_batch_token3] = ACTIONS(1),
    [aux_sym_begin_batch_token4] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_using_timestamp_spec_token1] = ACTIONS(1),
    [aux_sym_timestamp_token1] = ACTIONS(1),
    [aux_sym_insert_statement_token1] = ACTIONS(1),
    [aux_sym_insert_statement_token2] = ACTIONS(1),
    [aux_sym_insert_statement_token3] = ACTIONS(1),
    [aux_sym_insert_values_spec_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_ttl_token1] = ACTIONS(1),
    [aux_sym_truncate_token1] = ACTIONS(1),
    [aux_sym_truncate_token2] = ACTIONS(1),
    [aux_sym_create_index_token1] = ACTIONS(1),
    [aux_sym_create_index_token2] = ACTIONS(1),
    [aux_sym_create_index_token3] = ACTIONS(1),
    [aux_sym_index_keys_spec_token1] = ACTIONS(1),
    [aux_sym_index_entries_s_spec_token1] = ACTIONS(1),
    [aux_sym_index_full_spec_token1] = ACTIONS(1),
    [aux_sym_drop_index_token1] = ACTIONS(1),
    [aux_sym_update_token1] = ACTIONS(1),
    [aux_sym_update_token2] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_use_token1] = ACTIONS(1),
    [aux_sym_grant_token1] = ACTIONS(1),
    [aux_sym_grant_token2] = ACTIONS(1),
    [aux_sym_priviledge_token1] = ACTIONS(1),
    [aux_sym_priviledge_token2] = ACTIONS(1),
    [aux_sym_priviledge_token3] = ACTIONS(1),
    [aux_sym_priviledge_token4] = ACTIONS(1),
    [aux_sym_priviledge_token6] = ACTIONS(1),
    [aux_sym_priviledge_token7] = ACTIONS(1),
    [aux_sym_resource_token2] = ACTIONS(1),
    [aux_sym_resource_token3] = ACTIONS(1),
    [aux_sym_resource_token6] = ACTIONS(1),
    [aux_sym_revoke_token1] = ACTIONS(1),
    [aux_sym_list_roles_token1] = ACTIONS(1),
    [aux_sym_list_roles_token2] = ACTIONS(1),
    [aux_sym_list_roles_token3] = ACTIONS(1),
    [aux_sym_drop_aggregate_token1] = ACTIONS(1),
    [aux_sym_drop_materialized_view_token1] = ACTIONS(1),
    [aux_sym_drop_materialized_view_token2] = ACTIONS(1),
    [aux_sym_drop_trigger_token1] = ACTIONS(1),
    [aux_sym_drop_type_token1] = ACTIONS(1),
    [aux_sym_create_aggregate_token1] = ACTIONS(1),
    [aux_sym_create_aggregate_token2] = ACTIONS(1),
    [aux_sym_create_aggregate_token3] = ACTIONS(1),
    [aux_sym_create_aggregate_token4] = ACTIONS(1),
    [aux_sym_create_aggregate_token5] = ACTIONS(1),
    [aux_sym_create_aggregate_token6] = ACTIONS(1),
    [aux_sym_create_materialized_view_token1] = ACTIONS(1),
    [aux_sym_create_materialized_view_token2] = ACTIONS(1),
    [aux_sym_column_not_null_token1] = ACTIONS(1),
    [aux_sym_create_function_token1] = ACTIONS(1),
    [aux_sym_create_function_token2] = ACTIONS(1),
    [aux_sym_data_type_name_token2] = ACTIONS(1),
    [aux_sym_data_type_name_token3] = ACTIONS(1),
    [aux_sym_data_type_name_token4] = ACTIONS(1),
    [aux_sym_data_type_name_token5] = ACTIONS(1),
    [aux_sym_data_type_name_token6] = ACTIONS(1),
    [aux_sym_data_type_name_token7] = ACTIONS(1),
    [aux_sym_data_type_name_token8] = ACTIONS(1),
    [aux_sym_data_type_name_token9] = ACTIONS(1),
    [aux_sym_data_type_name_token10] = ACTIONS(1),
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
    [aux_sym_return_mode_token1] = ACTIONS(1),
    [aux_sym_return_mode_token2] = ACTIONS(1),
    [aux_sym_create_keyspace_token1] = ACTIONS(1),
    [aux_sym_durable_writes_token1] = ACTIONS(1),
    [aux_sym_role_with_options_token1] = ACTIONS(1),
    [aux_sym_role_with_options_token2] = ACTIONS(1),
    [aux_sym_role_with_options_token3] = ACTIONS(1),
    [aux_sym_role_with_options_token4] = ACTIONS(1),
    [aux_sym_clustering_order_token1] = ACTIONS(1),
    [aux_sym_order_direction_token2] = ACTIONS(1),
    [aux_sym_alter_table_add_token1] = ACTIONS(1),
    [aux_sym_alter_table_drop_compact_storage_token1] = ACTIONS(1),
    [aux_sym_alter_table_drop_compact_storage_token2] = ACTIONS(1),
    [aux_sym_alter_table_rename_token1] = ACTIONS(1),
    [aux_sym_user_super_user_token1] = ACTIONS(1),
    [aux_sym_apply_batch_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(1436),
    [sym__statement] = STATE(3),
    [sym_select_statement] = STATE(298),
    [sym_delete_statement] = STATE(298),
    [sym_begin_batch] = STATE(779),
    [sym_insert_statement] = STATE(298),
    [sym_truncate] = STATE(298),
    [sym_create_index] = STATE(298),
    [sym_drop_index] = STATE(298),
    [sym_update] = STATE(298),
    [sym_use] = STATE(298),
    [sym_grant] = STATE(298),
    [sym_revoke] = STATE(298),
    [sym_list_roles] = STATE(298),
    [sym_list_permissions] = STATE(298),
    [sym_drop_aggregate] = STATE(298),
    [sym_drop_materialized_view] = STATE(298),
    [sym_drop_function] = STATE(298),
    [sym_drop_keyspace] = STATE(298),
    [sym_drop_role] = STATE(298),
    [sym_drop_table] = STATE(298),
    [sym_drop_trigger] = STATE(298),
    [sym_drop_type] = STATE(298),
    [sym_drop_user] = STATE(298),
    [sym_create_aggregate] = STATE(298),
    [sym_create_materialized_view] = STATE(298),
    [sym_create_function] = STATE(298),
    [sym_create_keyspace] = STATE(298),
    [sym_create_role] = STATE(298),
    [sym_create_table] = STATE(298),
    [sym_create_trigger] = STATE(298),
    [sym_create_type] = STATE(298),
    [sym_create_user] = STATE(298),
    [sym_alter_materialized_view] = STATE(298),
    [sym_alter_keyspace] = STATE(298),
    [sym_alter_role] = STATE(298),
    [sym_alter_table] = STATE(298),
    [sym_alter_type] = STATE(298),
    [sym_alter_user] = STATE(298),
    [sym_apply_batch] = STATE(298),
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
  [0] = 2,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_relation_element_token1,
    ACTIONS(33), 54,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token3,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_COMMA,
      anon_sym_DOT,
      aux_sym_select_element_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_contains_key_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      anon_sym_LBRACK,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_insert_values_spec_token1,
      anon_sym_COLON,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_create_index_token3,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_update_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_grant_token2,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_list_roles_token3,
      aux_sym_drop_type_token1,
      aux_sym_create_aggregate_token4,
      aux_sym_create_aggregate_token5,
      aux_sym_create_aggregate_token6,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_materialized_view_token2,
      aux_sym_column_not_null_token1,
      aux_sym_create_function_token2,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [62] = 18,
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
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(779), 1,
      sym_begin_batch,
    STATE(4), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(298), 37,
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
  [154] = 18,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      aux_sym_select_statement_token1,
    ACTIONS(44), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(47), 1,
      aux_sym_begin_batch_token1,
    ACTIONS(50), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(53), 1,
      aux_sym_truncate_token1,
    ACTIONS(56), 1,
      aux_sym_create_index_token1,
    ACTIONS(59), 1,
      aux_sym_drop_index_token1,
    ACTIONS(62), 1,
      aux_sym_update_token1,
    ACTIONS(65), 1,
      aux_sym_use_token1,
    ACTIONS(68), 1,
      aux_sym_grant_token1,
    ACTIONS(71), 1,
      aux_sym_priviledge_token3,
    ACTIONS(74), 1,
      aux_sym_revoke_token1,
    ACTIONS(77), 1,
      aux_sym_list_roles_token1,
    ACTIONS(80), 1,
      aux_sym_apply_batch_token1,
    STATE(779), 1,
      sym_begin_batch,
    STATE(4), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(298), 37,
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
  [246] = 2,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 30,
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
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [283] = 1,
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
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      anon_sym_RBRACK,
      aux_sym_using_timestamp_spec_token1,
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
  [316] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(704), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [356] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1086), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [396] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1296), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [436] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1303), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [476] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1255), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [516] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1259), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [556] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(214), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [596] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1265), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [636] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1141), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [676] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1211), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [716] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1132), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [756] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1269), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [796] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(762), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [836] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1136), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [876] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1142), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [916] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1338), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [956] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1232), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [996] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1420), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1036] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1161), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1076] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1275), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1116] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1095), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1156] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1228), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1196] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(966), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1236] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1093), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1276] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1333), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1316] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1215), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1356] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1103), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1396] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(145), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1436] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1166), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1476] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1167), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1516] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1126), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1556] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1170), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1596] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1409), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1636] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1075), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1676] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(390), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1716] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(174), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1756] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1117), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1796] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1133), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1836] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(590), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1876] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1210), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1916] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1378), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1956] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1071), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [1996] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(750), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [2036] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(933), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [2076] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1319), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [2116] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(623), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [2156] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1372), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [2196] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1193), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [2236] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1186), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [2276] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1181), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [2316] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(74), 1,
      sym_data_type_name,
    STATE(75), 1,
      sym_object_name,
    STATE(1291), 1,
      sym_data_type,
    ACTIONS(89), 25,
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
  [2356] = 4,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(75), 1,
      sym_object_name,
    STATE(671), 1,
      sym_data_type_name,
    ACTIONS(89), 25,
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
  [2393] = 4,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(75), 1,
      sym_object_name,
    STATE(921), 1,
      sym_data_type_name,
    ACTIONS(89), 25,
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
  [2430] = 1,
    ACTIONS(35), 26,
      aux_sym_timestamp_token1,
      aux_sym_drop_index_token2,
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
  [2459] = 3,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(93), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_RPAREN,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [2491] = 1,
    ACTIONS(98), 24,
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
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [2518] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(100), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [2549] = 1,
    ACTIONS(93), 24,
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
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [2576] = 1,
    ACTIONS(104), 24,
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
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [2603] = 1,
    ACTIONS(106), 24,
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
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [2630] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(108), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [2661] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(110), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [2692] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(112), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [2723] = 8,
    ACTIONS(116), 1,
      aux_sym_select_statement_token4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    STATE(95), 1,
      sym_where_spec,
    STATE(114), 1,
      sym_order_spec,
    STATE(223), 1,
      sym_limit_spec,
    ACTIONS(114), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2763] = 8,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(126), 1,
      aux_sym_select_statement_token4,
    STATE(94), 1,
      sym_where_spec,
    STATE(125), 1,
      sym_order_spec,
    STATE(249), 1,
      sym_limit_spec,
    ACTIONS(124), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2803] = 8,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(130), 1,
      aux_sym_select_statement_token4,
    STATE(96), 1,
      sym_where_spec,
    STATE(115), 1,
      sym_order_spec,
    STATE(256), 1,
      sym_limit_spec,
    ACTIONS(128), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2843] = 9,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(136), 1,
      aux_sym_clustering_order_token1,
    STATE(128), 1,
      sym_table_option_item,
    STATE(189), 1,
      sym_table_options,
    STATE(314), 1,
      sym_clustering_order,
    STATE(1079), 1,
      sym_table_option_name,
    STATE(1080), 1,
      sym_object_name,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(134), 14,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2885] = 3,
    ACTIONS(140), 1,
      anon_sym_LT,
    STATE(93), 1,
      sym_data_type_definition,
    ACTIONS(138), 21,
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
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [2915] = 1,
    ACTIONS(142), 23,
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
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [2941] = 1,
    ACTIONS(144), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [2966] = 3,
    ACTIONS(148), 1,
      aux_sym_relation_elements_token1,
    STATE(81), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(146), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2995] = 1,
    ACTIONS(150), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3020] = 2,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(152), 21,
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
  [3047] = 1,
    ACTIONS(156), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3072] = 3,
    ACTIONS(160), 1,
      aux_sym_relation_elements_token1,
    STATE(81), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(158), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3101] = 1,
    ACTIONS(163), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3126] = 1,
    ACTIONS(165), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3151] = 1,
    ACTIONS(167), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3176] = 1,
    ACTIONS(169), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3201] = 1,
    ACTIONS(171), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3226] = 3,
    ACTIONS(148), 1,
      aux_sym_relation_elements_token1,
    STATE(77), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(173), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3255] = 1,
    ACTIONS(175), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3280] = 1,
    ACTIONS(177), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3305] = 3,
    STATE(171), 1,
      sym_order_direction,
    ACTIONS(181), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(179), 18,
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
  [3333] = 1,
    ACTIONS(33), 21,
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
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_apply_batch_token1,
  [3357] = 1,
    ACTIONS(183), 21,
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
  [3381] = 1,
    ACTIONS(185), 21,
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
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [3405] = 6,
    ACTIONS(116), 1,
      aux_sym_select_statement_token4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    STATE(114), 1,
      sym_order_spec,
    STATE(223), 1,
      sym_limit_spec,
    ACTIONS(114), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3439] = 6,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(189), 1,
      aux_sym_select_statement_token4,
    STATE(110), 1,
      sym_order_spec,
    STATE(237), 1,
      sym_limit_spec,
    ACTIONS(187), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3473] = 6,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(126), 1,
      aux_sym_select_statement_token4,
    STATE(125), 1,
      sym_order_spec,
    STATE(249), 1,
      sym_limit_spec,
    ACTIONS(124), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3507] = 1,
    ACTIONS(191), 21,
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
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [3531] = 1,
    ACTIONS(193), 21,
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
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [3555] = 1,
    ACTIONS(158), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3579] = 2,
    ACTIONS(197), 1,
      aux_sym_relation_element_token1,
    ACTIONS(195), 19,
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
  [3604] = 2,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(199), 19,
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
  [3629] = 3,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(203), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
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
  [3656] = 2,
    ACTIONS(210), 1,
      anon_sym_DOT,
    ACTIONS(208), 19,
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
  [3681] = 1,
    ACTIONS(212), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3704] = 2,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(214), 19,
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
  [3729] = 1,
    ACTIONS(218), 19,
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
  [3751] = 1,
    ACTIONS(220), 19,
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
  [3773] = 1,
    ACTIONS(222), 19,
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
  [3795] = 1,
    ACTIONS(224), 19,
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
  [3817] = 4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(228), 1,
      aux_sym_select_statement_token4,
    STATE(222), 1,
      sym_limit_spec,
    ACTIONS(226), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3845] = 1,
    ACTIONS(195), 19,
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
  [3867] = 1,
    ACTIONS(230), 19,
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
  [3889] = 4,
    ACTIONS(234), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(236), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(426), 1,
      sym_using_ttl_timestamp,
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
  [3917] = 4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(189), 1,
      aux_sym_select_statement_token4,
    STATE(237), 1,
      sym_limit_spec,
    ACTIONS(187), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3945] = 4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(126), 1,
      aux_sym_select_statement_token4,
    STATE(249), 1,
      sym_limit_spec,
    ACTIONS(124), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3973] = 4,
    ACTIONS(236), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(240), 1,
      aux_sym_delete_statement_token2,
    STATE(386), 1,
      sym_using_ttl_timestamp,
    ACTIONS(238), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4001] = 4,
    ACTIONS(236), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(244), 1,
      aux_sym_delete_statement_token2,
    STATE(324), 1,
      sym_using_ttl_timestamp,
    ACTIONS(242), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4029] = 3,
    STATE(344), 1,
      sym_user_super_user,
    ACTIONS(248), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(246), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4055] = 1,
    ACTIONS(250), 19,
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
  [4077] = 3,
    ACTIONS(254), 1,
      aux_sym_relation_elements_token1,
    STATE(120), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(252), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4103] = 3,
    STATE(306), 1,
      sym_user_super_user,
    ACTIONS(248), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(257), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4129] = 3,
    ACTIONS(261), 1,
      aux_sym_relation_elements_token1,
    STATE(120), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(259), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4155] = 4,
    ACTIONS(236), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(265), 1,
      aux_sym_delete_statement_token2,
    STATE(328), 1,
      sym_using_ttl_timestamp,
    ACTIONS(263), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4183] = 1,
    ACTIONS(267), 19,
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
  [4205] = 4,
    ACTIONS(116), 1,
      aux_sym_select_statement_token4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    STATE(223), 1,
      sym_limit_spec,
    ACTIONS(114), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4233] = 2,
    ACTIONS(271), 1,
      aux_sym_priviledge_token2,
    ACTIONS(269), 18,
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
  [4257] = 4,
    ACTIONS(236), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(275), 1,
      aux_sym_delete_statement_token2,
    STATE(278), 1,
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
  [4285] = 3,
    ACTIONS(261), 1,
      aux_sym_relation_elements_token1,
    STATE(122), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(277), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4311] = 1,
    ACTIONS(279), 19,
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
  [4333] = 4,
    ACTIONS(236), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(283), 1,
      aux_sym_delete_statement_token2,
    STATE(371), 1,
      sym_using_ttl_timestamp,
    ACTIONS(281), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4361] = 1,
    ACTIONS(285), 19,
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
  [4383] = 4,
    ACTIONS(236), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(289), 1,
      aux_sym_delete_statement_token2,
    STATE(400), 1,
      sym_using_ttl_timestamp,
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
  [4411] = 1,
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
  [4433] = 1,
    ACTIONS(293), 19,
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
  [4455] = 4,
    ACTIONS(236), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(297), 1,
      aux_sym_delete_statement_token2,
    STATE(321), 1,
      sym_using_ttl_timestamp,
    ACTIONS(295), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4483] = 3,
    STATE(394), 1,
      sym_user_super_user,
    ACTIONS(248), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(299), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4509] = 1,
    ACTIONS(252), 18,
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
  [4530] = 3,
    ACTIONS(236), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(305), 1,
      sym_using_ttl_timestamp,
    ACTIONS(301), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4555] = 3,
    ACTIONS(305), 1,
      aux_sym_create_index_token3,
    ACTIONS(307), 1,
      aux_sym_list_roles_token2,
    ACTIONS(303), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4580] = 3,
    ACTIONS(311), 1,
      aux_sym_list_roles_token2,
    ACTIONS(313), 1,
      aux_sym_list_roles_token3,
    ACTIONS(309), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4605] = 3,
    ACTIONS(236), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(269), 1,
      sym_using_ttl_timestamp,
    ACTIONS(315), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4630] = 3,
    ACTIONS(319), 1,
      aux_sym_relation_elements_token1,
    STATE(167), 1,
      aux_sym_alter_type_rename_list_repeat1,
    ACTIONS(317), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4655] = 8,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      sym_decimal_literal,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    STATE(728), 1,
      sym_expression,
    STATE(1149), 1,
      sym_expression_list,
    STATE(997), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [4690] = 1,
    ACTIONS(331), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
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
  [4711] = 3,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(333), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4736] = 3,
    ACTIONS(339), 1,
      aux_sym_delete_statement_token2,
    STATE(415), 1,
      sym_if_spec,
    ACTIONS(337), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4761] = 3,
    ACTIONS(343), 1,
      aux_sym_delete_statement_token2,
    STATE(365), 1,
      sym_if_spec,
    ACTIONS(341), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4786] = 1,
    ACTIONS(345), 18,
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
  [4807] = 3,
    ACTIONS(349), 1,
      aux_sym_relation_elements_token1,
    STATE(181), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(347), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4832] = 3,
    ACTIONS(353), 1,
      aux_sym_create_materialized_view_token2,
    STATE(283), 1,
      sym_role_with,
    ACTIONS(351), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4857] = 1,
    ACTIONS(355), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_delete_statement_token2,
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
  [4878] = 3,
    ACTIONS(359), 1,
      aux_sym_delete_statement_token2,
    STATE(336), 1,
      sym_if_spec,
    ACTIONS(357), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4903] = 3,
    ACTIONS(363), 1,
      aux_sym_relation_elements_token1,
    STATE(153), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(361), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4928] = 1,
    ACTIONS(366), 18,
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
  [4949] = 1,
    ACTIONS(368), 18,
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
  [4970] = 1,
    ACTIONS(370), 18,
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
  [4991] = 3,
    ACTIONS(236), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(354), 1,
      sym_using_ttl_timestamp,
    ACTIONS(372), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5016] = 1,
    ACTIONS(269), 18,
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
  [5037] = 1,
    ACTIONS(374), 18,
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
  [5058] = 3,
    ACTIONS(378), 1,
      aux_sym_delete_statement_token2,
    STATE(312), 1,
      sym_if_spec,
    ACTIONS(376), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5083] = 3,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(380), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5108] = 3,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(384), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5133] = 3,
    ACTIONS(388), 1,
      aux_sym_delete_statement_token2,
    STATE(262), 1,
      sym_if_spec,
    ACTIONS(386), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5158] = 1,
    ACTIONS(390), 18,
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
  [5179] = 1,
    ACTIONS(392), 18,
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
  [5200] = 3,
    ACTIONS(396), 1,
      anon_sym_DOT,
    ACTIONS(398), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(394), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5225] = 3,
    ACTIONS(319), 1,
      aux_sym_relation_elements_token1,
    STATE(209), 1,
      aux_sym_alter_type_rename_list_repeat1,
    ACTIONS(400), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5250] = 3,
    ACTIONS(404), 1,
      aux_sym_create_materialized_view_token2,
    STATE(308), 1,
      sym_with_element,
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
  [5275] = 3,
    ACTIONS(236), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(330), 1,
      sym_using_ttl_timestamp,
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
  [5300] = 3,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(408), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5325] = 1,
    ACTIONS(412), 18,
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
  [5346] = 1,
    ACTIONS(414), 18,
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
  [5367] = 1,
    ACTIONS(416), 18,
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
  [5388] = 3,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(418), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5413] = 3,
    ACTIONS(353), 1,
      aux_sym_create_materialized_view_token2,
    STATE(368), 1,
      sym_role_with,
    ACTIONS(420), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5438] = 1,
    ACTIONS(422), 18,
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
  [5459] = 3,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(424), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5484] = 3,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(429), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5509] = 3,
    ACTIONS(433), 1,
      aux_sym_delete_statement_token2,
    STATE(409), 1,
      sym_if_spec,
    ACTIONS(431), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5534] = 3,
    ACTIONS(404), 1,
      aux_sym_create_materialized_view_token2,
    STATE(313), 1,
      sym_with_element,
    ACTIONS(435), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5559] = 3,
    ACTIONS(349), 1,
      aux_sym_relation_elements_token1,
    STATE(153), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(437), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5584] = 3,
    ACTIONS(236), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(279), 1,
      sym_using_ttl_timestamp,
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
  [5609] = 3,
    ACTIONS(443), 1,
      aux_sym_delete_statement_token2,
    STATE(299), 1,
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
  [5634] = 1,
    ACTIONS(445), 18,
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
  [5655] = 3,
    ACTIONS(449), 1,
      aux_sym_delete_statement_token2,
    STATE(334), 1,
      sym_if_spec,
    ACTIONS(447), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5680] = 3,
    ACTIONS(404), 1,
      aux_sym_create_materialized_view_token2,
    STATE(287), 1,
      sym_with_element,
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
  [5705] = 3,
    ACTIONS(455), 1,
      aux_sym_delete_statement_token2,
    STATE(316), 1,
      sym_if_spec,
    ACTIONS(453), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5730] = 1,
    ACTIONS(457), 18,
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
  [5751] = 3,
    ACTIONS(461), 1,
      aux_sym_clustering_order_token1,
    STATE(296), 1,
      sym_clustering_order,
    ACTIONS(459), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5776] = 3,
    ACTIONS(404), 1,
      aux_sym_create_materialized_view_token2,
    STATE(288), 1,
      sym_with_element,
    ACTIONS(463), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5801] = 3,
    ACTIONS(467), 1,
      aux_sym_delete_statement_token2,
    STATE(307), 1,
      sym_if_spec,
    ACTIONS(465), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5826] = 3,
    ACTIONS(236), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(379), 1,
      sym_using_ttl_timestamp,
    ACTIONS(469), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5851] = 1,
    ACTIONS(471), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [5872] = 2,
    ACTIONS(475), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(473), 17,
      ts_builtin_sym_end,
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
  [5895] = 3,
    ACTIONS(479), 1,
      aux_sym_delete_statement_token2,
    STATE(412), 1,
      sym_if_spec,
    ACTIONS(477), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5920] = 3,
    ACTIONS(483), 1,
      aux_sym_delete_statement_token2,
    STATE(327), 1,
      sym_if_spec,
    ACTIONS(481), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5945] = 3,
    ACTIONS(353), 1,
      aux_sym_create_materialized_view_token2,
    STATE(270), 1,
      sym_role_with,
    ACTIONS(485), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5970] = 3,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [5995] = 3,
    ACTIONS(236), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(404), 1,
      sym_using_ttl_timestamp,
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
  [6020] = 2,
    STATE(206), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(277), 17,
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
  [6043] = 3,
    ACTIONS(493), 1,
      aux_sym_delete_statement_token2,
    STATE(361), 1,
      sym_if_spec,
    ACTIONS(491), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6068] = 3,
    ACTIONS(497), 1,
      aux_sym_delete_statement_token2,
    STATE(276), 1,
      sym_if_spec,
    ACTIONS(495), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6093] = 3,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [6118] = 3,
    ACTIONS(236), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(385), 1,
      sym_using_ttl_timestamp,
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
  [6143] = 3,
    ACTIONS(508), 1,
      aux_sym_delete_statement_token2,
    STATE(263), 1,
      sym_if_spec,
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
  [6168] = 2,
    STATE(120), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(259), 17,
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
  [6191] = 2,
    ACTIONS(510), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(473), 17,
      ts_builtin_sym_end,
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
  [6214] = 3,
    ACTIONS(514), 1,
      aux_sym_delete_statement_token2,
    STATE(396), 1,
      sym_if_spec,
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
  [6239] = 3,
    ACTIONS(518), 1,
      aux_sym_relation_elements_token1,
    STATE(209), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [6264] = 3,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(521), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6289] = 2,
    ACTIONS(525), 1,
      anon_sym_DOT,
    ACTIONS(523), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6311] = 2,
    ACTIONS(529), 1,
      anon_sym_DOT,
    ACTIONS(527), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6333] = 2,
    ACTIONS(533), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(531), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6355] = 1,
    ACTIONS(535), 17,
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
  [6375] = 2,
    ACTIONS(539), 1,
      anon_sym_DOT,
    ACTIONS(537), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6397] = 2,
    ACTIONS(543), 1,
      anon_sym_DOT,
    ACTIONS(541), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(547), 1,
      anon_sym_DOT,
    ACTIONS(545), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6441] = 1,
    ACTIONS(549), 17,
      ts_builtin_sym_end,
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
  [6461] = 2,
    ACTIONS(553), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(551), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6483] = 2,
    ACTIONS(557), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(555), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6505] = 2,
    ACTIONS(561), 1,
      anon_sym_DOT,
    ACTIONS(559), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6527] = 2,
    ACTIONS(565), 1,
      aux_sym_select_statement_token4,
    ACTIONS(563), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6549] = 2,
    ACTIONS(189), 1,
      aux_sym_select_statement_token4,
    ACTIONS(187), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6571] = 2,
    ACTIONS(569), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(567), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6593] = 2,
    ACTIONS(573), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(571), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6615] = 2,
    ACTIONS(577), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(575), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6637] = 1,
    ACTIONS(579), 17,
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
  [6657] = 2,
    ACTIONS(583), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(581), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6679] = 1,
    ACTIONS(516), 17,
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
  [6699] = 2,
    ACTIONS(587), 1,
      anon_sym_DOT,
    ACTIONS(585), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6721] = 2,
    ACTIONS(591), 1,
      anon_sym_DOT,
    ACTIONS(589), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6743] = 2,
    ACTIONS(595), 1,
      anon_sym_DOT,
    ACTIONS(593), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6765] = 2,
    ACTIONS(599), 1,
      anon_sym_DOT,
    ACTIONS(597), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6787] = 2,
    ACTIONS(603), 1,
      anon_sym_DOT,
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
  [6809] = 2,
    ACTIONS(607), 1,
      anon_sym_DOT,
    ACTIONS(605), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6831] = 2,
    ACTIONS(611), 1,
      aux_sym_create_materialized_view_token2,
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
  [6853] = 2,
    ACTIONS(228), 1,
      aux_sym_select_statement_token4,
    ACTIONS(226), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6875] = 2,
    ACTIONS(615), 1,
      aux_sym_relation_elements_token1,
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
  [6897] = 2,
    ACTIONS(619), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(617), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6919] = 2,
    ACTIONS(623), 1,
      aux_sym_create_materialized_view_token2,
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
  [6941] = 2,
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
  [6963] = 2,
    ACTIONS(631), 1,
      anon_sym_DOT,
    ACTIONS(629), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6985] = 2,
    ACTIONS(635), 1,
      anon_sym_DOT,
    ACTIONS(633), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7007] = 1,
    ACTIONS(637), 17,
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
  [7027] = 2,
    ACTIONS(641), 1,
      anon_sym_DOT,
    ACTIONS(639), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7049] = 1,
    ACTIONS(361), 17,
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
  [7069] = 2,
    ACTIONS(645), 1,
      anon_sym_DOT,
    ACTIONS(643), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7091] = 7,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      sym_decimal_literal,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    STATE(818), 1,
      sym_expression,
    STATE(997), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [7123] = 2,
    ACTIONS(116), 1,
      aux_sym_select_statement_token4,
    ACTIONS(114), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7145] = 2,
    ACTIONS(649), 1,
      anon_sym_DOT,
    ACTIONS(647), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7167] = 1,
    ACTIONS(424), 17,
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
  [7187] = 2,
    ACTIONS(653), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(651), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7209] = 2,
    ACTIONS(657), 1,
      aux_sym_list_roles_token3,
    ACTIONS(655), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7231] = 2,
    ACTIONS(661), 1,
      aux_sym_list_roles_token2,
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
  [7253] = 1,
    ACTIONS(663), 17,
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
  [7273] = 2,
    ACTIONS(126), 1,
      aux_sym_select_statement_token4,
    ACTIONS(124), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7295] = 2,
    ACTIONS(667), 1,
      anon_sym_DOT,
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
  [7317] = 1,
    ACTIONS(669), 17,
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
  [7337] = 1,
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
  [7356] = 1,
    ACTIONS(673), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7375] = 1,
    ACTIONS(675), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7394] = 1,
    ACTIONS(495), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7432] = 1,
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
  [7451] = 1,
    ACTIONS(679), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7470] = 1,
    ACTIONS(681), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7489] = 1,
    ACTIONS(683), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7508] = 1,
    ACTIONS(685), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7527] = 1,
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
  [7546] = 1,
    ACTIONS(689), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7565] = 1,
    ACTIONS(691), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7584] = 1,
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
  [7603] = 1,
    ACTIONS(695), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7622] = 1,
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
  [7641] = 1,
    ACTIONS(699), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7660] = 1,
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
  [7679] = 1,
    ACTIONS(703), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7698] = 1,
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
  [7717] = 1,
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
  [7736] = 1,
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
  [7755] = 1,
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
  [7774] = 1,
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
  [7793] = 1,
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
  [7812] = 1,
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
  [7831] = 1,
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
  [7850] = 1,
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
  [7869] = 1,
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
  [7888] = 1,
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
  [7907] = 1,
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
  [7926] = 1,
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
  [7945] = 1,
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
  [7964] = 1,
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
  [7983] = 1,
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
  [8002] = 1,
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
  [8021] = 1,
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
  [8040] = 1,
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
  [8059] = 1,
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
  [8078] = 2,
    ACTIONS(747), 1,
      anon_sym_SEMI,
    ACTIONS(745), 15,
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
  [8099] = 1,
    ACTIONS(337), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8118] = 1,
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
  [8137] = 1,
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
  [8156] = 1,
    ACTIONS(114), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8175] = 1,
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
  [8194] = 1,
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
  [8213] = 1,
    ACTIONS(469), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8232] = 1,
    ACTIONS(757), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8251] = 1,
    ACTIONS(477), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8270] = 1,
    ACTIONS(759), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8289] = 1,
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
  [8308] = 1,
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
  [8327] = 1,
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
  [8346] = 1,
    ACTIONS(465), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8365] = 1,
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
  [8384] = 1,
    ACTIONS(459), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8403] = 1,
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
  [8422] = 1,
    ACTIONS(341), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8441] = 1,
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
  [8460] = 1,
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
  [8479] = 1,
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
  [8498] = 1,
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
  [8517] = 1,
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
  [8536] = 1,
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
  [8555] = 1,
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
  [8574] = 1,
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
  [8593] = 1,
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
  [8612] = 1,
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
  [8631] = 1,
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
  [8650] = 1,
    ACTIONS(295), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8669] = 1,
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
  [8688] = 1,
    ACTIONS(315), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8707] = 1,
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
  [8726] = 1,
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
  [8745] = 1,
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
  [8764] = 1,
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
  [8783] = 1,
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
  [8802] = 1,
    ACTIONS(453), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8821] = 1,
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
  [8840] = 1,
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
  [8859] = 1,
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
  [8878] = 1,
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
  [8897] = 1,
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
  [8916] = 1,
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
  [8935] = 1,
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
  [8954] = 1,
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
  [8973] = 1,
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
  [8992] = 1,
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
  [9011] = 1,
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
  [9030] = 1,
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
  [9049] = 1,
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
  [9068] = 1,
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
  [9087] = 1,
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
  [9106] = 1,
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
  [9125] = 1,
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
  [9144] = 1,
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
  [9163] = 1,
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
  [9182] = 1,
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
  [9201] = 1,
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
  [9220] = 1,
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
  [9239] = 1,
    ACTIONS(226), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9258] = 1,
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
  [9277] = 1,
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
  [9296] = 1,
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
  [9315] = 1,
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
  [9334] = 1,
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
  [9353] = 1,
    ACTIONS(447), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9372] = 1,
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
  [9391] = 1,
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
  [9410] = 1,
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
  [9429] = 1,
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
  [9448] = 1,
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
  [9467] = 1,
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
  [9486] = 1,
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
  [9505] = 1,
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
  [9524] = 1,
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
  [9543] = 1,
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
  [9562] = 1,
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
  [9581] = 1,
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
  [9600] = 1,
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
  [9619] = 1,
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
  [9638] = 1,
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
  [9657] = 1,
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
  [9676] = 1,
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
  [9695] = 1,
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
  [9714] = 1,
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
  [9733] = 1,
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
  [9752] = 1,
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
  [9771] = 1,
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
  [9790] = 1,
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
  [9809] = 1,
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
  [9828] = 1,
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
  [9847] = 1,
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
  [9866] = 1,
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
  [9885] = 1,
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
  [9904] = 1,
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
  [9923] = 8,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    STATE(875), 1,
      sym_constant,
    STATE(927), 1,
      sym_object_name,
    ACTIONS(325), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    STATE(557), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(323), 5,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [9956] = 1,
    ACTIONS(481), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9975] = 1,
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
  [9994] = 1,
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
  [10013] = 1,
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
  [10032] = 1,
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
  [10051] = 1,
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
  [10070] = 1,
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
  [10089] = 1,
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
  [10108] = 1,
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
  [10127] = 1,
    ACTIONS(187), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10146] = 1,
    ACTIONS(563), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10165] = 1,
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
  [10184] = 1,
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
  [10203] = 1,
    ACTIONS(386), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10222] = 1,
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
  [10241] = 1,
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
  [10260] = 1,
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
  [10279] = 1,
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
  [10298] = 1,
    ACTIONS(931), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10317] = 1,
    ACTIONS(933), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10336] = 1,
    ACTIONS(935), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10355] = 1,
    ACTIONS(937), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10374] = 1,
    ACTIONS(939), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10393] = 1,
    ACTIONS(941), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10412] = 1,
    ACTIONS(943), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10431] = 1,
    ACTIONS(945), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10450] = 1,
    ACTIONS(947), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10469] = 1,
    ACTIONS(949), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10488] = 1,
    ACTIONS(951), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10507] = 1,
    ACTIONS(953), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10526] = 1,
    ACTIONS(955), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10545] = 1,
    ACTIONS(957), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10564] = 1,
    ACTIONS(959), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10583] = 1,
    ACTIONS(961), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10602] = 1,
    ACTIONS(963), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10621] = 1,
    ACTIONS(965), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10640] = 1,
    ACTIONS(967), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_priviledge_token3,
      aux_sym_revoke_token1,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10659] = 1,
    ACTIONS(969), 15,
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
  [10677] = 5,
    ACTIONS(325), 1,
      sym_decimal_literal,
    ACTIONS(971), 1,
      anon_sym_LPAREN,
    STATE(378), 1,
      sym_init_cond_definition,
    STATE(184), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10702] = 5,
    ACTIONS(325), 1,
      sym_decimal_literal,
    ACTIONS(971), 1,
      anon_sym_LPAREN,
    STATE(398), 1,
      sym_init_cond_definition,
    STATE(184), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10727] = 5,
    ACTIONS(325), 1,
      sym_decimal_literal,
    ACTIONS(971), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym_init_cond_definition,
    STATE(184), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10752] = 5,
    ACTIONS(325), 1,
      sym_decimal_literal,
    ACTIONS(971), 1,
      anon_sym_LPAREN,
    STATE(360), 1,
      sym_init_cond_definition,
    STATE(184), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10777] = 8,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(973), 1,
      anon_sym_LPAREN,
    STATE(684), 1,
      sym_constant,
    STATE(689), 1,
      sym_init_cond_list,
    STATE(692), 1,
      sym_init_cond_hash_item,
    STATE(1282), 1,
      sym_object_name,
    ACTIONS(325), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    ACTIONS(323), 5,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10808] = 5,
    ACTIONS(325), 1,
      sym_decimal_literal,
    ACTIONS(971), 1,
      anon_sym_LPAREN,
    STATE(827), 1,
      sym_init_cond_definition,
    STATE(184), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10833] = 5,
    ACTIONS(325), 1,
      sym_decimal_literal,
    ACTIONS(971), 1,
      anon_sym_LPAREN,
    STATE(363), 1,
      sym_init_cond_definition,
    STATE(184), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10858] = 5,
    ACTIONS(325), 1,
      sym_decimal_literal,
    ACTIONS(971), 1,
      anon_sym_LPAREN,
    STATE(424), 1,
      sym_init_cond_definition,
    STATE(184), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10883] = 5,
    ACTIONS(325), 1,
      sym_decimal_literal,
    ACTIONS(971), 1,
      anon_sym_LPAREN,
    STATE(286), 1,
      sym_init_cond_definition,
    STATE(184), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10908] = 7,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(975), 1,
      anon_sym_STAR,
    STATE(555), 1,
      sym_object_name,
    STATE(1311), 1,
      sym_function_args,
    STATE(701), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(325), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    ACTIONS(323), 5,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10937] = 5,
    ACTIONS(325), 1,
      sym_decimal_literal,
    ACTIONS(971), 1,
      anon_sym_LPAREN,
    STATE(340), 1,
      sym_init_cond_definition,
    STATE(184), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10962] = 6,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(555), 1,
      sym_object_name,
    STATE(1253), 1,
      sym_function_args,
    STATE(701), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(325), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    ACTIONS(323), 5,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10988] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(1130), 1,
      sym_object_name,
    STATE(82), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(325), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    ACTIONS(323), 5,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [11011] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    STATE(673), 1,
      sym_object_name,
    STATE(1019), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(325), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    ACTIONS(323), 5,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [11034] = 5,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      sym_decimal_literal,
    STATE(64), 1,
      sym_assignment_tuple,
    STATE(574), 1,
      sym_constant,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11056] = 4,
    ACTIONS(979), 1,
      aux_sym_priviledge_token1,
    ACTIONS(981), 1,
      aux_sym_resource_token5,
    STATE(139), 1,
      sym_priviledge,
    ACTIONS(977), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [11076] = 4,
    ACTIONS(325), 1,
      sym_decimal_literal,
    ACTIONS(973), 1,
      anon_sym_LPAREN,
    STATE(831), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11096] = 11,
    ACTIONS(983), 1,
      aux_sym_truncate_token2,
    ACTIONS(985), 1,
      aux_sym_create_index_token2,
    ACTIONS(987), 1,
      aux_sym_resource_token2,
    ACTIONS(989), 1,
      aux_sym_resource_token3,
    ACTIONS(991), 1,
      aux_sym_resource_token6,
    ACTIONS(993), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(995), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(997), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(999), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1001), 1,
      aux_sym_drop_user_token1,
    ACTIONS(1003), 1,
      aux_sym_create_aggregate_token1,
  [11130] = 7,
    ACTIONS(1005), 1,
      anon_sym_DOT,
    ACTIONS(1007), 1,
      aux_sym_drop_index_token1,
    ACTIONS(1009), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(1011), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1013), 1,
      aux_sym_alter_table_rename_token1,
    STATE(281), 1,
      sym_alter_table_operation,
    STATE(282), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [11156] = 4,
    ACTIONS(325), 1,
      sym_decimal_literal,
    ACTIONS(1015), 1,
      aux_sym_relation_contains_key_token2,
    STATE(80), 1,
      sym_constant,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11175] = 6,
    ACTIONS(1017), 1,
      anon_sym_DOT,
    ACTIONS(1019), 1,
      anon_sym_LPAREN,
    ACTIONS(1025), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1027), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(1021), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1023), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11198] = 3,
    ACTIONS(979), 1,
      aux_sym_priviledge_token1,
    STATE(1416), 1,
      sym_priviledge,
    ACTIONS(977), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [11215] = 6,
    ACTIONS(1007), 1,
      aux_sym_drop_index_token1,
    ACTIONS(1009), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(1011), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1013), 1,
      aux_sym_alter_table_rename_token1,
    STATE(416), 1,
      sym_alter_table_operation,
    STATE(282), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [11238] = 3,
    ACTIONS(979), 1,
      aux_sym_priviledge_token1,
    STATE(1424), 1,
      sym_priviledge,
    ACTIONS(977), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [11255] = 10,
    ACTIONS(1029), 1,
      aux_sym_truncate_token2,
    ACTIONS(1031), 1,
      aux_sym_create_index_token2,
    ACTIONS(1033), 1,
      aux_sym_resource_token2,
    ACTIONS(1035), 1,
      aux_sym_resource_token3,
    ACTIONS(1037), 1,
      aux_sym_resource_token6,
    ACTIONS(1039), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(1041), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1043), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(1045), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1047), 1,
      aux_sym_drop_user_token1,
  [11286] = 4,
    ACTIONS(325), 1,
      sym_decimal_literal,
    ACTIONS(1049), 1,
      anon_sym_RBRACE,
    STATE(579), 1,
      sym_constant,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11305] = 7,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1051), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1053), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1055), 1,
      aux_sym_index_full_spec_token1,
    STATE(1174), 1,
      sym_index_column_spec,
    STATE(1177), 1,
      sym_object_name,
    STATE(1176), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11329] = 3,
    ACTIONS(325), 1,
      sym_decimal_literal,
    STATE(952), 1,
      sym_constant,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11345] = 3,
    ACTIONS(325), 1,
      sym_decimal_literal,
    STATE(78), 1,
      sym_constant,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11361] = 7,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1051), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1053), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1055), 1,
      aux_sym_index_full_spec_token1,
    STATE(1154), 1,
      sym_index_column_spec,
    STATE(1177), 1,
      sym_object_name,
    STATE(1176), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11385] = 7,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1051), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1053), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1055), 1,
      aux_sym_index_full_spec_token1,
    STATE(1177), 1,
      sym_object_name,
    STATE(1263), 1,
      sym_index_column_spec,
    STATE(1176), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11409] = 3,
    ACTIONS(325), 1,
      sym_decimal_literal,
    STATE(258), 1,
      sym_constant,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11425] = 7,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1051), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1053), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1055), 1,
      aux_sym_index_full_spec_token1,
    STATE(1125), 1,
      sym_index_column_spec,
    STATE(1177), 1,
      sym_object_name,
    STATE(1176), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11449] = 7,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1051), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1053), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1055), 1,
      aux_sym_index_full_spec_token1,
    STATE(1177), 1,
      sym_object_name,
    STATE(1305), 1,
      sym_index_column_spec,
    STATE(1176), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11473] = 3,
    ACTIONS(325), 1,
      sym_decimal_literal,
    STATE(1056), 1,
      sym_constant,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11489] = 7,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1051), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1053), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1055), 1,
      aux_sym_index_full_spec_token1,
    STATE(1177), 1,
      sym_object_name,
    STATE(1280), 1,
      sym_index_column_spec,
    STATE(1176), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11513] = 3,
    ACTIONS(325), 1,
      sym_decimal_literal,
    STATE(507), 1,
      sym_constant,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11529] = 3,
    ACTIONS(325), 1,
      sym_decimal_literal,
    STATE(632), 1,
      sym_constant,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11545] = 3,
    ACTIONS(325), 1,
      sym_decimal_literal,
    STATE(83), 1,
      sym_constant,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11561] = 3,
    ACTIONS(325), 1,
      sym_decimal_literal,
    STATE(684), 1,
      sym_constant,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11577] = 3,
    ACTIONS(325), 1,
      sym_decimal_literal,
    STATE(574), 1,
      sym_constant,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11593] = 7,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1051), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1053), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1055), 1,
      aux_sym_index_full_spec_token1,
    STATE(1062), 1,
      sym_index_column_spec,
    STATE(1177), 1,
      sym_object_name,
    STATE(1176), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11617] = 7,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1051), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1053), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1055), 1,
      aux_sym_index_full_spec_token1,
    STATE(1177), 1,
      sym_object_name,
    STATE(1317), 1,
      sym_index_column_spec,
    STATE(1176), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11641] = 3,
    ACTIONS(325), 1,
      sym_decimal_literal,
    STATE(84), 1,
      sym_constant,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11657] = 3,
    ACTIONS(325), 1,
      sym_decimal_literal,
    STATE(976), 1,
      sym_constant,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11673] = 3,
    ACTIONS(325), 1,
      sym_decimal_literal,
    STATE(144), 1,
      sym_constant,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11689] = 3,
    ACTIONS(325), 1,
      sym_decimal_literal,
    STATE(643), 1,
      sym_constant,
    ACTIONS(323), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11705] = 8,
    ACTIONS(136), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(200), 1,
      sym_table_option_item,
    STATE(238), 1,
      sym_table_options,
    STATE(297), 1,
      sym_materialized_view_options,
    STATE(351), 1,
      sym_clustering_order,
    STATE(1079), 1,
      sym_table_option_name,
    STATE(1080), 1,
      sym_object_name,
  [11730] = 7,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1059), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_relation_element,
    STATE(104), 1,
      sym_relation_elements,
    STATE(454), 1,
      sym_object_name,
    STATE(505), 1,
      sym_function_call,
    STATE(86), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11753] = 8,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1061), 1,
      aux_sym_truncate_token2,
    ACTIONS(1063), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1065), 1,
      aux_sym_resource_token2,
    ACTIONS(1067), 1,
      aux_sym_resource_token3,
    ACTIONS(1069), 1,
      aux_sym_resource_token6,
    STATE(103), 1,
      sym_object_name,
    STATE(1059), 1,
      sym_resource,
  [11778] = 6,
    ACTIONS(1071), 1,
      anon_sym_DOT,
    ACTIONS(1073), 1,
      aux_sym_priviledge_token3,
    ACTIONS(1075), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1077), 1,
      aux_sym_alter_table_rename_token1,
    STATE(289), 1,
      sym_alter_type_operation,
    STATE(290), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [11799] = 8,
    ACTIONS(136), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(200), 1,
      sym_table_option_item,
    STATE(238), 1,
      sym_table_options,
    STATE(349), 1,
      sym_materialized_view_options,
    STATE(351), 1,
      sym_clustering_order,
    STATE(1079), 1,
      sym_table_option_name,
    STATE(1080), 1,
      sym_object_name,
  [11824] = 8,
    ACTIONS(136), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(200), 1,
      sym_table_option_item,
    STATE(238), 1,
      sym_table_options,
    STATE(322), 1,
      sym_materialized_view_options,
    STATE(351), 1,
      sym_clustering_order,
    STATE(1079), 1,
      sym_table_option_name,
    STATE(1080), 1,
      sym_object_name,
  [11849] = 8,
    ACTIONS(136), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(200), 1,
      sym_table_option_item,
    STATE(238), 1,
      sym_table_options,
    STATE(351), 1,
      sym_clustering_order,
    STATE(399), 1,
      sym_materialized_view_options,
    STATE(1079), 1,
      sym_table_option_name,
    STATE(1080), 1,
      sym_object_name,
  [11874] = 8,
    ACTIONS(136), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(200), 1,
      sym_table_option_item,
    STATE(238), 1,
      sym_table_options,
    STATE(315), 1,
      sym_materialized_view_options,
    STATE(351), 1,
      sym_clustering_order,
    STATE(1079), 1,
      sym_table_option_name,
    STATE(1080), 1,
      sym_object_name,
  [11899] = 8,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1061), 1,
      aux_sym_truncate_token2,
    ACTIONS(1063), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1065), 1,
      aux_sym_resource_token2,
    ACTIONS(1067), 1,
      aux_sym_resource_token3,
    ACTIONS(1069), 1,
      aux_sym_resource_token6,
    STATE(103), 1,
      sym_object_name,
    STATE(1128), 1,
      sym_resource,
  [11924] = 8,
    ACTIONS(136), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(200), 1,
      sym_table_option_item,
    STATE(238), 1,
      sym_table_options,
    STATE(351), 1,
      sym_clustering_order,
    STATE(403), 1,
      sym_materialized_view_options,
    STATE(1079), 1,
      sym_table_option_name,
    STATE(1080), 1,
      sym_object_name,
  [11949] = 8,
    ACTIONS(136), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(200), 1,
      sym_table_option_item,
    STATE(238), 1,
      sym_table_options,
    STATE(351), 1,
      sym_clustering_order,
    STATE(432), 1,
      sym_materialized_view_options,
    STATE(1079), 1,
      sym_table_option_name,
    STATE(1080), 1,
      sym_object_name,
  [11974] = 8,
    ACTIONS(136), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(200), 1,
      sym_table_option_item,
    STATE(238), 1,
      sym_table_options,
    STATE(351), 1,
      sym_clustering_order,
    STATE(407), 1,
      sym_materialized_view_options,
    STATE(1079), 1,
      sym_table_option_name,
    STATE(1080), 1,
      sym_object_name,
  [11999] = 8,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1079), 1,
      aux_sym_select_statement_token2,
    ACTIONS(1081), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1083), 1,
      anon_sym_STAR,
    STATE(519), 1,
      sym_object_name,
    STATE(774), 1,
      sym_function_call,
    STATE(777), 1,
      sym_select_element,
    STATE(791), 1,
      sym_select_elements,
  [12024] = 8,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1061), 1,
      aux_sym_truncate_token2,
    ACTIONS(1063), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1065), 1,
      aux_sym_resource_token2,
    ACTIONS(1067), 1,
      aux_sym_resource_token3,
    ACTIONS(1069), 1,
      aux_sym_resource_token6,
    STATE(103), 1,
      sym_object_name,
    STATE(254), 1,
      sym_resource,
  [12049] = 6,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1059), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_relation_element,
    STATE(454), 1,
      sym_object_name,
    STATE(505), 1,
      sym_function_call,
    STATE(86), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [12069] = 7,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1083), 1,
      anon_sym_STAR,
    ACTIONS(1085), 1,
      aux_sym_select_statement_token3,
    STATE(519), 1,
      sym_object_name,
    STATE(774), 1,
      sym_function_call,
    STATE(777), 1,
      sym_select_element,
    STATE(803), 1,
      sym_select_elements,
  [12091] = 3,
    ACTIONS(1091), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1087), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1089), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [12105] = 3,
    ACTIONS(1097), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1093), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1095), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [12119] = 6,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1059), 1,
      anon_sym_LPAREN,
    STATE(454), 1,
      sym_object_name,
    STATE(505), 1,
      sym_function_call,
    STATE(1202), 1,
      sym_relation_element,
    STATE(86), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [12139] = 5,
    ACTIONS(1073), 1,
      aux_sym_priviledge_token3,
    ACTIONS(1075), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1077), 1,
      aux_sym_alter_table_rename_token1,
    STATE(418), 1,
      sym_alter_type_operation,
    STATE(290), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [12157] = 6,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1083), 1,
      anon_sym_STAR,
    STATE(519), 1,
      sym_object_name,
    STATE(774), 1,
      sym_function_call,
    STATE(777), 1,
      sym_select_element,
    STATE(803), 1,
      sym_select_elements,
  [12176] = 5,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1099), 1,
      anon_sym_LPAREN,
    STATE(984), 1,
      sym_object_name,
    STATE(1162), 1,
      sym_primary_key_definition,
    STATE(1158), 2,
      sym_compound_key,
      sym_composite_key,
  [12193] = 6,
    ACTIONS(1101), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1103), 1,
      anon_sym_DOT,
    ACTIONS(1105), 1,
      anon_sym_LPAREN,
    ACTIONS(1107), 1,
      aux_sym_insert_values_spec_token1,
    STATE(130), 1,
      sym_insert_values_spec,
    STATE(652), 1,
      sym_insert_column_spec,
  [12212] = 4,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    ACTIONS(1109), 1,
      sym_decimal_literal,
    STATE(842), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [12227] = 2,
    ACTIONS(1111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1113), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [12238] = 6,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1115), 1,
      sym_string_literal,
    ACTIONS(1117), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1119), 1,
      aux_sym_create_index_token3,
    STATE(1389), 1,
      sym_index_name,
    STATE(1397), 1,
      sym_object_name,
  [12257] = 6,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(1121), 1,
      anon_sym_COMMA,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
    STATE(755), 1,
      sym_assignment_tuple,
    STATE(756), 1,
      aux_sym_relation_element_repeat2,
    STATE(757), 1,
      aux_sym_assignment_tuple_repeat1,
  [12276] = 6,
    ACTIONS(1125), 1,
      aux_sym_truncate_token2,
    ACTIONS(1127), 1,
      aux_sym_resource_token2,
    ACTIONS(1129), 1,
      aux_sym_resource_token6,
    ACTIONS(1131), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1133), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1135), 1,
      aux_sym_drop_user_token1,
  [12295] = 2,
    ACTIONS(1137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1139), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [12306] = 6,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1083), 1,
      anon_sym_STAR,
    STATE(519), 1,
      sym_object_name,
    STATE(774), 1,
      sym_function_call,
    STATE(777), 1,
      sym_select_element,
    STATE(860), 1,
      sym_select_elements,
  [12325] = 6,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1141), 1,
      aux_sym_from_spec_token1,
    STATE(553), 1,
      sym_from_spec,
    STATE(770), 1,
      sym_object_name,
    STATE(771), 1,
      sym_delete_column_item,
    STATE(856), 1,
      sym_delete_column_list,
  [12344] = 6,
    ACTIONS(1101), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1105), 1,
      anon_sym_LPAREN,
    ACTIONS(1107), 1,
      aux_sym_insert_values_spec_token1,
    ACTIONS(1143), 1,
      anon_sym_DOT,
    STATE(123), 1,
      sym_insert_values_spec,
    STATE(685), 1,
      sym_insert_column_spec,
  [12363] = 6,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1141), 1,
      aux_sym_from_spec_token1,
    STATE(599), 1,
      sym_from_spec,
    STATE(770), 1,
      sym_object_name,
    STATE(771), 1,
      sym_delete_column_item,
    STATE(793), 1,
      sym_delete_column_list,
  [12382] = 5,
    ACTIONS(1101), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1105), 1,
      anon_sym_LPAREN,
    ACTIONS(1107), 1,
      aux_sym_insert_values_spec_token1,
    STATE(116), 1,
      sym_insert_values_spec,
    STATE(730), 1,
      sym_insert_column_spec,
  [12398] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1145), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
    STATE(1118), 1,
      sym_object_name,
  [12414] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1147), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
    STATE(1118), 1,
      sym_object_name,
  [12430] = 4,
    ACTIONS(1149), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1153), 1,
      aux_sym_role_with_options_token4,
    STATE(251), 1,
      sym_role_with_options,
    ACTIONS(1151), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [12444] = 5,
    ACTIONS(1101), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1105), 1,
      anon_sym_LPAREN,
    ACTIONS(1107), 1,
      aux_sym_insert_values_spec_token1,
    STATE(117), 1,
      sym_insert_values_spec,
    STATE(699), 1,
      sym_insert_column_spec,
  [12460] = 4,
    ACTIONS(1019), 1,
      anon_sym_LPAREN,
    ACTIONS(1157), 1,
      anon_sym_DOT,
    ACTIONS(1159), 1,
      aux_sym_select_element_token1,
    ACTIONS(1155), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12474] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1161), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
    STATE(1118), 1,
      sym_object_name,
  [12490] = 3,
    ACTIONS(1165), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(724), 1,
      sym_using_timestamp_spec,
    ACTIONS(1163), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12502] = 1,
    ACTIONS(1167), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12510] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1169), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
    STATE(1118), 1,
      sym_object_name,
  [12526] = 1,
    ACTIONS(1171), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12534] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1173), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
    STATE(1118), 1,
      sym_object_name,
  [12550] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1175), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
    STATE(1118), 1,
      sym_object_name,
  [12566] = 1,
    ACTIONS(1177), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12574] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1115), 1,
      sym_string_literal,
    ACTIONS(1179), 1,
      aux_sym_create_index_token3,
    STATE(1156), 1,
      sym_index_name,
    STATE(1397), 1,
      sym_object_name,
  [12590] = 1,
    ACTIONS(1181), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12598] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1183), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
    STATE(1118), 1,
      sym_object_name,
  [12614] = 5,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(128), 1,
      sym_table_option_item,
    STATE(410), 1,
      sym_table_options,
    STATE(1079), 1,
      sym_table_option_name,
    STATE(1080), 1,
      sym_object_name,
  [12630] = 1,
    ACTIONS(1185), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12638] = 1,
    ACTIONS(1187), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12646] = 5,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1191), 1,
      aux_sym_create_materialized_view_token1,
    STATE(45), 1,
      sym_object_name,
    STATE(883), 1,
      sym_column_definition,
    STATE(1402), 1,
      sym_primary_key_element,
  [12662] = 5,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1191), 1,
      aux_sym_create_materialized_view_token1,
    STATE(45), 1,
      sym_object_name,
    STATE(883), 1,
      sym_column_definition,
    STATE(1295), 1,
      sym_primary_key_element,
  [12678] = 3,
    ACTIONS(1193), 1,
      anon_sym_COMMA,
    STATE(536), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(1196), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [12690] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1198), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
    STATE(1118), 1,
      sym_object_name,
  [12706] = 5,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(128), 1,
      sym_table_option_item,
    STATE(419), 1,
      sym_table_options,
    STATE(1079), 1,
      sym_table_option_name,
    STATE(1080), 1,
      sym_object_name,
  [12722] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1200), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
    STATE(1118), 1,
      sym_object_name,
  [12738] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1202), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
    STATE(1118), 1,
      sym_object_name,
  [12754] = 3,
    ACTIONS(1165), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(603), 1,
      sym_using_timestamp_spec,
    ACTIONS(1204), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12766] = 5,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(128), 1,
      sym_table_option_item,
    STATE(381), 1,
      sym_table_options,
    STATE(1079), 1,
      sym_table_option_name,
    STATE(1080), 1,
      sym_object_name,
  [12782] = 3,
    ACTIONS(1206), 1,
      anon_sym_LPAREN,
    ACTIONS(1208), 2,
      sym_string_literal,
      sym_float_literal,
    STATE(176), 2,
      sym_option_hash,
      sym_table_option_value,
  [12794] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1210), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
    STATE(1118), 1,
      sym_object_name,
  [12810] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1212), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
    STATE(1118), 1,
      sym_object_name,
  [12826] = 4,
    ACTIONS(1149), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1153), 1,
      aux_sym_role_with_options_token4,
    STATE(170), 1,
      sym_role_with_options,
    ACTIONS(1151), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [12840] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1214), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
    STATE(1118), 1,
      sym_object_name,
  [12856] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1216), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
    STATE(1118), 1,
      sym_object_name,
  [12872] = 1,
    ACTIONS(1218), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12880] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1220), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
    STATE(1118), 1,
      sym_object_name,
  [12896] = 5,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1222), 1,
      aux_sym_delete_statement_token3,
    STATE(149), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
    STATE(1118), 1,
      sym_object_name,
  [12912] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      sym_where_spec,
    STATE(698), 1,
      aux_sym_update_repeat1,
  [12925] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1165), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(187), 1,
      sym_where_spec,
    STATE(882), 1,
      sym_using_timestamp_spec,
  [12938] = 3,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(1226), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [12949] = 4,
    ACTIONS(1019), 1,
      anon_sym_LPAREN,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    ACTIONS(1230), 1,
      anon_sym_RPAREN,
    STATE(635), 1,
      aux_sym_function_args_repeat1,
  [12962] = 1,
    ACTIONS(1232), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12969] = 2,
    ACTIONS(1234), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1236), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12978] = 4,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1238), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_object_name,
    STATE(654), 1,
      sym_param,
  [12991] = 4,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    STATE(45), 1,
      sym_object_name,
    STATE(631), 1,
      sym_column_definition,
    STATE(1112), 1,
      sym_column_definition_list,
  [13004] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      sym_where_spec,
    STATE(698), 1,
      aux_sym_update_repeat1,
  [13017] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      sym_where_spec,
    STATE(577), 1,
      aux_sym_update_repeat1,
  [13030] = 4,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1240), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_object_name,
    STATE(628), 1,
      sym_param,
  [13043] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      sym_where_spec,
    STATE(552), 1,
      aux_sym_update_repeat1,
  [13056] = 4,
    ACTIONS(1242), 1,
      sym_string_literal,
    ACTIONS(1244), 1,
      aux_sym_drop_index_token2,
    STATE(1057), 1,
      sym_index_name,
    STATE(1437), 1,
      sym_object_name,
  [13069] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      sym_where_spec,
    STATE(698), 1,
      aux_sym_update_repeat1,
  [13082] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      sym_where_spec,
    STATE(600), 1,
      aux_sym_update_repeat1,
  [13095] = 4,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(622), 1,
      sym_column_not_null,
    STATE(1032), 1,
      sym_column_not_null_list,
    STATE(1091), 1,
      sym_object_name,
  [13108] = 4,
    ACTIONS(236), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1246), 1,
      anon_sym_DOT,
    ACTIONS(1248), 1,
      aux_sym_update_token2,
    STATE(1124), 1,
      sym_using_ttl_timestamp,
  [13121] = 4,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(137), 1,
      sym_table_option_item,
    STATE(1079), 1,
      sym_table_option_name,
    STATE(1080), 1,
      sym_object_name,
  [13134] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      sym_where_spec,
    STATE(594), 1,
      aux_sym_update_repeat1,
  [13147] = 4,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1250), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_object_name,
    STATE(693), 1,
      sym_param,
  [13160] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      sym_where_spec,
    STATE(584), 1,
      aux_sym_update_repeat1,
  [13173] = 4,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1252), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_object_name,
    STATE(778), 1,
      sym_param,
  [13186] = 1,
    ACTIONS(1196), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13193] = 4,
    ACTIONS(1254), 1,
      aux_sym_timestamp_token1,
    ACTIONS(1256), 1,
      aux_sym_ttl_token1,
    STATE(194), 1,
      sym_timestamp,
    STATE(207), 1,
      sym_ttl,
  [13206] = 4,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1258), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    STATE(161), 1,
      sym_object_name,
    STATE(408), 1,
      sym_alter_table_drop_column_list,
  [13219] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      sym_where_spec,
    STATE(698), 1,
      aux_sym_update_repeat1,
  [13232] = 4,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_object_name,
    STATE(706), 1,
      sym_param,
  [13245] = 4,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1264), 1,
      anon_sym_COLON,
    ACTIONS(1266), 1,
      anon_sym_RBRACE,
    STATE(763), 1,
      aux_sym_assignment_tuple_repeat1,
  [13258] = 3,
    ACTIONS(1268), 1,
      anon_sym_RPAREN,
    STATE(1175), 1,
      sym_order_direction,
    ACTIONS(181), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [13269] = 4,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(142), 1,
      sym_alter_type_rename_item,
    STATE(423), 1,
      sym_alter_type_rename_list,
    STATE(1107), 1,
      sym_object_name,
  [13282] = 4,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(519), 1,
      sym_object_name,
    STATE(774), 1,
      sym_function_call,
    STATE(863), 1,
      sym_select_element,
  [13295] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      sym_where_spec,
    STATE(560), 1,
      aux_sym_update_repeat1,
  [13308] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      sym_where_spec,
    STATE(698), 1,
      aux_sym_update_repeat1,
  [13321] = 4,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_object_name,
    STATE(659), 1,
      sym_param,
  [13334] = 4,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    STATE(45), 1,
      sym_object_name,
    STATE(631), 1,
      sym_column_definition,
    STATE(1288), 1,
      sym_column_definition_list,
  [13347] = 4,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    STATE(45), 1,
      sym_object_name,
    STATE(631), 1,
      sym_column_definition,
    STATE(1172), 1,
      sym_column_definition_list,
  [13360] = 4,
    ACTIONS(1242), 1,
      sym_string_literal,
    ACTIONS(1244), 1,
      aux_sym_drop_index_token2,
    STATE(1343), 1,
      sym_index_name,
    STATE(1437), 1,
      sym_object_name,
  [13373] = 4,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_object_name,
    STATE(725), 1,
      sym_param,
  [13386] = 3,
    ACTIONS(1276), 1,
      aux_sym_create_materialized_view_token1,
    STATE(880), 1,
      sym_primary_key_column,
    ACTIONS(1274), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13397] = 4,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    STATE(45), 1,
      sym_object_name,
    STATE(631), 1,
      sym_column_definition,
    STATE(1398), 1,
      sym_column_definition_list,
  [13410] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      sym_where_spec,
    STATE(565), 1,
      aux_sym_update_repeat1,
  [13423] = 4,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1278), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_object_name,
    STATE(688), 1,
      sym_param,
  [13436] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      sym_where_spec,
    STATE(698), 1,
      aux_sym_update_repeat1,
  [13449] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      sym_where_spec,
    STATE(598), 1,
      aux_sym_update_repeat1,
  [13462] = 4,
    ACTIONS(236), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1280), 1,
      anon_sym_DOT,
    ACTIONS(1282), 1,
      aux_sym_update_token2,
    STATE(1334), 1,
      sym_using_ttl_timestamp,
  [13475] = 3,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    STATE(554), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(1284), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [13486] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      sym_where_spec,
    STATE(698), 1,
      aux_sym_update_repeat1,
  [13499] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1165), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(152), 1,
      sym_where_spec,
    STATE(806), 1,
      sym_using_timestamp_spec,
  [13512] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      sym_where_spec,
    STATE(698), 1,
      aux_sym_update_repeat1,
  [13525] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1165), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(147), 1,
      sym_where_spec,
    STATE(1023), 1,
      sym_using_timestamp_spec,
  [13538] = 2,
    ACTIONS(1286), 1,
      aux_sym_resource_token1,
    ACTIONS(1288), 2,
      aux_sym_resource_token4,
      aux_sym_resource_token5,
  [13546] = 1,
    ACTIONS(1290), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13552] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1100), 1,
      sym_return_mode,
  [13562] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(229), 1,
      sym_alter_type_rename_item,
    STATE(1107), 1,
      sym_object_name,
  [13572] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_create_function_repeat1,
  [13582] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(931), 1,
      sym_assignment_element,
    STATE(982), 1,
      sym_object_name,
  [13592] = 2,
    STATE(668), 1,
      aux_sym_column_not_null_list_repeat1,
    ACTIONS(1300), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13600] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(561), 1,
      sym_assignment_element,
    STATE(982), 1,
      sym_object_name,
  [13610] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1302), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_relation_element_repeat2,
  [13620] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1140), 1,
      sym_return_mode,
  [13630] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(592), 1,
      sym_assignment_element,
    STATE(982), 1,
      sym_object_name,
  [13640] = 3,
    ACTIONS(1304), 1,
      anon_sym_COMMA,
    ACTIONS(1307), 1,
      anon_sym_RBRACE,
    STATE(613), 1,
      aux_sym_assignment_map_repeat1,
  [13650] = 3,
    ACTIONS(1309), 1,
      anon_sym_COMMA,
    ACTIONS(1311), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_relation_element_repeat1,
  [13660] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(638), 1,
      sym_object_name,
    STATE(1122), 1,
      sym_clustering_key_list,
  [13670] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_create_function_repeat1,
  [13680] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1129), 1,
      sym_return_mode,
  [13690] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1315), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_create_function_repeat1,
  [13700] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(597), 1,
      sym_object_name,
    STATE(1144), 1,
      sym_column_list,
  [13710] = 3,
    ACTIONS(1317), 1,
      anon_sym_DOT,
    ACTIONS(1319), 1,
      aux_sym_where_spec_token1,
    STATE(1147), 1,
      sym_materialized_view_where,
  [13720] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1146), 1,
      sym_return_mode,
  [13730] = 2,
    STATE(608), 1,
      aux_sym_column_not_null_list_repeat1,
    ACTIONS(1321), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13738] = 3,
    ACTIONS(1323), 1,
      anon_sym_COMMA,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
    STATE(651), 1,
      aux_sym_create_type_repeat1,
  [13748] = 3,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_relation_element_repeat1,
  [13758] = 3,
    ACTIONS(1332), 1,
      anon_sym_COMMA,
    ACTIONS(1334), 1,
      anon_sym_RBRACE,
    STATE(729), 1,
      aux_sym_replication_list_repeat1,
  [13768] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1159), 1,
      sym_return_mode,
  [13778] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1336), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_create_function_repeat1,
  [13788] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1338), 1,
      anon_sym_RPAREN,
    STATE(773), 1,
      aux_sym_create_function_repeat1,
  [13798] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1064), 1,
      sym_return_mode,
  [13808] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1163), 1,
      sym_return_mode,
  [13818] = 3,
    ACTIONS(1340), 1,
      anon_sym_COMMA,
    ACTIONS(1342), 1,
      anon_sym_RPAREN,
    STATE(735), 1,
      aux_sym_column_definition_list_repeat1,
  [13828] = 3,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1344), 1,
      anon_sym_RBRACK,
    STATE(760), 1,
      aux_sym_assignment_tuple_repeat1,
  [13838] = 3,
    ACTIONS(1309), 1,
      anon_sym_COMMA,
    ACTIONS(1346), 1,
      anon_sym_RPAREN,
    STATE(680), 1,
      aux_sym_relation_element_repeat1,
  [13848] = 3,
    ACTIONS(1348), 1,
      anon_sym_COMMA,
    ACTIONS(1350), 1,
      anon_sym_RPAREN,
    STATE(765), 1,
      aux_sym_expression_list_repeat1,
  [13858] = 3,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    ACTIONS(1352), 1,
      anon_sym_RPAREN,
    STATE(678), 1,
      aux_sym_function_args_repeat1,
  [13868] = 3,
    ACTIONS(1354), 1,
      aux_sym_drop_index_token2,
    STATE(90), 1,
      sym_object_name,
    STATE(173), 1,
      sym_order_spec_element,
  [13878] = 3,
    ACTIONS(1309), 1,
      anon_sym_COMMA,
    ACTIONS(1356), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_relation_element_repeat1,
  [13888] = 3,
    ACTIONS(1309), 1,
      anon_sym_COMMA,
    ACTIONS(1358), 1,
      anon_sym_RPAREN,
    STATE(666), 1,
      aux_sym_relation_element_repeat1,
  [13898] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(570), 1,
      sym_assignment_element,
    STATE(982), 1,
      sym_object_name,
  [13908] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1183), 1,
      sym_return_mode,
  [13918] = 3,
    ACTIONS(1360), 1,
      anon_sym_COMMA,
    ACTIONS(1363), 1,
      anon_sym_RPAREN,
    STATE(641), 1,
      aux_sym_column_definition_list_repeat1,
  [13928] = 3,
    ACTIONS(1319), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1365), 1,
      anon_sym_DOT,
    STATE(1198), 1,
      sym_materialized_view_where,
  [13938] = 3,
    ACTIONS(1367), 1,
      anon_sym_COMMA,
    ACTIONS(1369), 1,
      anon_sym_RBRACE,
    STATE(739), 1,
      aux_sym_assignment_map_repeat1,
  [13948] = 3,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    STATE(34), 1,
      sym_object_name,
    STATE(414), 1,
      sym_alter_table_column_definition,
  [13958] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1371), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_relation_element_repeat2,
  [13968] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(597), 1,
      sym_object_name,
    STATE(1321), 1,
      sym_column_list,
  [13978] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(951), 1,
      sym_column_not_null,
    STATE(1091), 1,
      sym_object_name,
  [13988] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1096), 1,
      sym_return_mode,
  [13998] = 3,
    ACTIONS(1323), 1,
      anon_sym_COMMA,
    ACTIONS(1373), 1,
      anon_sym_RPAREN,
    STATE(745), 1,
      aux_sym_create_type_repeat1,
  [14008] = 3,
    ACTIONS(1375), 1,
      sym_string_literal,
    STATE(781), 1,
      sym_replication_list_item,
    STATE(1431), 1,
      sym_replication_list,
  [14018] = 3,
    ACTIONS(1323), 1,
      anon_sym_COMMA,
    ACTIONS(1377), 1,
      anon_sym_RPAREN,
    STATE(745), 1,
      aux_sym_create_type_repeat1,
  [14028] = 3,
    ACTIONS(1101), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1107), 1,
      aux_sym_insert_values_spec_token1,
    STATE(113), 1,
      sym_insert_values_spec,
  [14038] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1427), 1,
      sym_return_mode,
  [14048] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1379), 1,
      anon_sym_RPAREN,
    STATE(783), 1,
      aux_sym_create_function_repeat1,
  [14058] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1381), 1,
      aux_sym_delete_statement_token2,
    STATE(250), 1,
      sym_object_name,
  [14068] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1383), 1,
      anon_sym_RPAREN,
    STATE(759), 1,
      aux_sym_relation_element_repeat2,
  [14078] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1208), 1,
      sym_return_mode,
  [14088] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(583), 1,
      sym_assignment_element,
    STATE(982), 1,
      sym_object_name,
  [14098] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1385), 1,
      anon_sym_RPAREN,
    STATE(675), 1,
      aux_sym_create_function_repeat1,
  [14108] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1418), 1,
      sym_return_mode,
  [14118] = 3,
    ACTIONS(1387), 1,
      anon_sym_COMMA,
    ACTIONS(1390), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_create_function_repeat1,
  [14128] = 3,
    ACTIONS(1392), 1,
      anon_sym_COMMA,
    ACTIONS(1394), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      aux_sym_option_hash_repeat1,
  [14138] = 3,
    ACTIONS(236), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1396), 1,
      aux_sym_update_token2,
    STATE(1054), 1,
      sym_using_ttl_timestamp,
  [14148] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1213), 1,
      sym_return_mode,
  [14158] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(638), 1,
      sym_object_name,
    STATE(1225), 1,
      sym_clustering_key_list,
  [14168] = 3,
    ACTIONS(1309), 1,
      anon_sym_COMMA,
    ACTIONS(1398), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_relation_element_repeat1,
  [14178] = 3,
    ACTIONS(236), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1400), 1,
      aux_sym_update_token2,
    STATE(1238), 1,
      sym_using_ttl_timestamp,
  [14188] = 3,
    ACTIONS(1402), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1405), 1,
      aux_sym_create_materialized_view_token1,
    STATE(668), 1,
      aux_sym_column_not_null_list_repeat1,
  [14198] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(597), 1,
      sym_object_name,
    STATE(1250), 1,
      sym_column_list,
  [14208] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(595), 1,
      sym_assignment_element,
    STATE(982), 1,
      sym_object_name,
  [14218] = 3,
    ACTIONS(1407), 1,
      anon_sym_COMMA,
    ACTIONS(1409), 1,
      anon_sym_GT,
    STATE(769), 1,
      aux_sym_data_type_definition_repeat1,
  [14228] = 3,
    ACTIONS(1411), 1,
      anon_sym_COMMA,
    ACTIONS(1414), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      aux_sym_option_hash_repeat1,
  [14238] = 2,
    ACTIONS(1019), 1,
      anon_sym_LPAREN,
    ACTIONS(1416), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14246] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1252), 1,
      sym_return_mode,
  [14256] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1418), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_create_function_repeat1,
  [14266] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1420), 1,
      aux_sym_delete_statement_token2,
    STATE(1047), 1,
      sym_object_name,
  [14276] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1422), 1,
      aux_sym_delete_statement_token2,
    STATE(1044), 1,
      sym_object_name,
  [14286] = 3,
    ACTIONS(1416), 1,
      anon_sym_RPAREN,
    ACTIONS(1424), 1,
      anon_sym_COMMA,
    STATE(678), 1,
      aux_sym_function_args_repeat1,
  [14296] = 3,
    ACTIONS(1319), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1427), 1,
      anon_sym_DOT,
    STATE(1284), 1,
      sym_materialized_view_where,
  [14306] = 3,
    ACTIONS(1309), 1,
      anon_sym_COMMA,
    ACTIONS(1429), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_relation_element_repeat1,
  [14316] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1293), 1,
      sym_return_mode,
  [14326] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(246), 1,
      sym_if_condition,
    STATE(1118), 1,
      sym_object_name,
  [14336] = 3,
    ACTIONS(1323), 1,
      anon_sym_COMMA,
    ACTIONS(1431), 1,
      anon_sym_RPAREN,
    STATE(745), 1,
      aux_sym_create_type_repeat1,
  [14346] = 3,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1433), 1,
      anon_sym_RPAREN,
    STATE(703), 1,
      aux_sym_assignment_tuple_repeat1,
  [14356] = 3,
    ACTIONS(1101), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1107), 1,
      aux_sym_insert_values_spec_token1,
    STATE(135), 1,
      sym_insert_values_spec,
  [14366] = 3,
    ACTIONS(1435), 1,
      anon_sym_COMMA,
    ACTIONS(1438), 1,
      anon_sym_GT,
    STATE(686), 1,
      aux_sym_data_type_definition_repeat1,
  [14376] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1367), 1,
      sym_return_mode,
  [14386] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1440), 1,
      anon_sym_RPAREN,
    STATE(719), 1,
      aux_sym_create_function_repeat1,
  [14396] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    ACTIONS(1444), 1,
      anon_sym_RPAREN,
    STATE(708), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [14406] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(597), 1,
      sym_object_name,
    STATE(1116), 1,
      sym_column_list,
  [14416] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(597), 1,
      sym_object_name,
    STATE(1113), 1,
      sym_column_list,
  [14426] = 3,
    ACTIONS(1446), 1,
      anon_sym_COMMA,
    ACTIONS(1448), 1,
      anon_sym_RPAREN,
    STATE(710), 1,
      aux_sym_init_cond_hash_repeat1,
  [14436] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1450), 1,
      anon_sym_RPAREN,
    STATE(627), 1,
      aux_sym_create_function_repeat1,
  [14446] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(597), 1,
      sym_object_name,
    STATE(1329), 1,
      sym_column_list,
  [14456] = 3,
    ACTIONS(1452), 1,
      anon_sym_COMMA,
    ACTIONS(1455), 1,
      aux_sym_from_spec_token1,
    STATE(695), 1,
      aux_sym_delete_column_list_repeat1,
  [14466] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(597), 1,
      sym_object_name,
    STATE(1330), 1,
      sym_column_list,
  [14476] = 3,
    ACTIONS(1319), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1457), 1,
      anon_sym_DOT,
    STATE(1111), 1,
      sym_materialized_view_where,
  [14486] = 3,
    ACTIONS(1459), 1,
      anon_sym_COMMA,
    ACTIONS(1462), 1,
      aux_sym_where_spec_token1,
    STATE(698), 1,
      aux_sym_update_repeat1,
  [14496] = 3,
    ACTIONS(1101), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1107), 1,
      aux_sym_insert_values_spec_token1,
    STATE(132), 1,
      sym_insert_values_spec,
  [14506] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1073), 1,
      sym_return_mode,
  [14516] = 3,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    ACTIONS(1230), 1,
      anon_sym_RPAREN,
    STATE(635), 1,
      aux_sym_function_args_repeat1,
  [14526] = 3,
    ACTIONS(1464), 1,
      anon_sym_COMMA,
    ACTIONS(1467), 1,
      aux_sym_from_spec_token1,
    STATE(702), 1,
      aux_sym_select_elements_repeat1,
  [14536] = 3,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1469), 1,
      anon_sym_RPAREN,
    STATE(536), 1,
      aux_sym_assignment_tuple_repeat1,
  [14546] = 3,
    ACTIONS(1323), 1,
      anon_sym_COMMA,
    ACTIONS(1471), 1,
      anon_sym_RPAREN,
    STATE(649), 1,
      aux_sym_create_type_repeat1,
  [14556] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(563), 1,
      sym_assignment_element,
    STATE(982), 1,
      sym_object_name,
  [14566] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1473), 1,
      anon_sym_RPAREN,
    STATE(618), 1,
      aux_sym_create_function_repeat1,
  [14576] = 3,
    ACTIONS(1323), 1,
      anon_sym_COMMA,
    ACTIONS(1475), 1,
      anon_sym_RPAREN,
    STATE(745), 1,
      aux_sym_create_type_repeat1,
  [14586] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    ACTIONS(1477), 1,
      anon_sym_RPAREN,
    STATE(715), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [14596] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(828), 1,
      sym_init_cond_hash_item,
    STATE(1282), 1,
      sym_object_name,
  [14606] = 3,
    ACTIONS(1446), 1,
      anon_sym_COMMA,
    ACTIONS(1479), 1,
      anon_sym_RPAREN,
    STATE(716), 1,
      aux_sym_init_cond_hash_repeat1,
  [14616] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(597), 1,
      sym_object_name,
    STATE(1363), 1,
      sym_column_list,
  [14626] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(572), 1,
      sym_assignment_element,
    STATE(982), 1,
      sym_object_name,
  [14636] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1068), 1,
      sym_return_mode,
  [14646] = 2,
    ACTIONS(1483), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1481), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [14654] = 3,
    ACTIONS(1485), 1,
      anon_sym_COMMA,
    ACTIONS(1488), 1,
      anon_sym_RPAREN,
    STATE(715), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [14664] = 3,
    ACTIONS(1490), 1,
      anon_sym_COMMA,
    ACTIONS(1493), 1,
      anon_sym_RPAREN,
    STATE(716), 1,
      aux_sym_init_cond_hash_repeat1,
  [14674] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(597), 1,
      sym_object_name,
    STATE(1388), 1,
      sym_column_list,
  [14684] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1495), 1,
      aux_sym_delete_statement_token2,
    STATE(905), 1,
      sym_object_name,
  [14694] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1497), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_create_function_repeat1,
  [14704] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(597), 1,
      sym_object_name,
    STATE(1404), 1,
      sym_column_list,
  [14714] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(597), 1,
      sym_object_name,
    STATE(1405), 1,
      sym_column_list,
  [14724] = 3,
    ACTIONS(1375), 1,
      sym_string_literal,
    STATE(781), 1,
      sym_replication_list_item,
    STATE(1327), 1,
      sym_replication_list,
  [14734] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1102), 1,
      sym_return_mode,
  [14744] = 1,
    ACTIONS(1204), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [14750] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1499), 1,
      anon_sym_RPAREN,
    STATE(606), 1,
      aux_sym_create_function_repeat1,
  [14760] = 3,
    ACTIONS(1501), 1,
      anon_sym_COMMA,
    ACTIONS(1503), 1,
      aux_sym_from_spec_token1,
    STATE(695), 1,
      aux_sym_delete_column_list_repeat1,
  [14770] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(770), 1,
      sym_object_name,
    STATE(884), 1,
      sym_delete_column_item,
  [14780] = 3,
    ACTIONS(1348), 1,
      anon_sym_COMMA,
    ACTIONS(1505), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      aux_sym_expression_list_repeat1,
  [14790] = 3,
    ACTIONS(1507), 1,
      anon_sym_COMMA,
    ACTIONS(1510), 1,
      anon_sym_RBRACE,
    STATE(729), 1,
      aux_sym_replication_list_repeat1,
  [14800] = 3,
    ACTIONS(1101), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1107), 1,
      aux_sym_insert_values_spec_token1,
    STATE(127), 1,
      sym_insert_values_spec,
  [14810] = 3,
    ACTIONS(1512), 1,
      anon_sym_COMMA,
    ACTIONS(1514), 1,
      aux_sym_from_spec_token1,
    STATE(702), 1,
      aux_sym_select_elements_repeat1,
  [14820] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1212), 1,
      sym_return_mode,
  [14830] = 3,
    ACTIONS(1375), 1,
      sym_string_literal,
    STATE(781), 1,
      sym_replication_list_item,
    STATE(1065), 1,
      sym_replication_list,
  [14840] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1088), 1,
      sym_return_mode,
  [14850] = 3,
    ACTIONS(1516), 1,
      anon_sym_COMMA,
    ACTIONS(1518), 1,
      anon_sym_RPAREN,
    STATE(641), 1,
      aux_sym_column_definition_list_repeat1,
  [14860] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(566), 1,
      sym_assignment_element,
    STATE(982), 1,
      sym_object_name,
  [14870] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(614), 1,
      sym_object_name,
    STATE(1058), 1,
      sym_partition_key_list,
  [14880] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(597), 1,
      sym_object_name,
    STATE(1425), 1,
      sym_column_list,
  [14890] = 3,
    ACTIONS(1367), 1,
      anon_sym_COMMA,
    ACTIONS(1520), 1,
      anon_sym_RBRACE,
    STATE(613), 1,
      aux_sym_assignment_map_repeat1,
  [14900] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1522), 1,
      anon_sym_RPAREN,
    STATE(610), 1,
      aux_sym_relation_element_repeat2,
  [14910] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1524), 1,
      aux_sym_delete_statement_token2,
    STATE(247), 1,
      sym_object_name,
  [14920] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1526), 1,
      aux_sym_delete_statement_token2,
    STATE(245), 1,
      sym_object_name,
  [14930] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1528), 1,
      aux_sym_delete_statement_token2,
    STATE(833), 1,
      sym_object_name,
  [14940] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1530), 1,
      aux_sym_delete_statement_token2,
    STATE(212), 1,
      sym_object_name,
  [14950] = 3,
    ACTIONS(1532), 1,
      anon_sym_COMMA,
    ACTIONS(1535), 1,
      anon_sym_RPAREN,
    STATE(745), 1,
      aux_sym_create_type_repeat1,
  [14960] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1537), 1,
      aux_sym_delete_statement_token2,
    STATE(338), 1,
      sym_object_name,
  [14970] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1539), 1,
      aux_sym_delete_statement_token2,
    STATE(257), 1,
      sym_object_name,
  [14980] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1541), 1,
      aux_sym_delete_statement_token2,
    STATE(341), 1,
      sym_object_name,
  [14990] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1543), 1,
      aux_sym_delete_statement_token2,
    STATE(242), 1,
      sym_object_name,
  [15000] = 3,
    ACTIONS(1323), 1,
      anon_sym_COMMA,
    ACTIONS(1545), 1,
      anon_sym_RPAREN,
    STATE(707), 1,
      aux_sym_create_type_repeat1,
  [15010] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1547), 1,
      aux_sym_delete_statement_token2,
    STATE(1365), 1,
      sym_object_name,
  [15020] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1549), 1,
      aux_sym_delete_statement_token2,
    STATE(825), 1,
      sym_object_name,
  [15030] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1551), 1,
      aux_sym_delete_statement_token2,
    STATE(821), 1,
      sym_object_name,
  [15040] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1553), 1,
      aux_sym_delete_statement_token2,
    STATE(819), 1,
      sym_object_name,
  [15050] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1555), 1,
      anon_sym_RPAREN,
    STATE(645), 1,
      aux_sym_relation_element_repeat2,
  [15060] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1555), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_relation_element_repeat2,
  [15070] = 3,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1555), 1,
      anon_sym_RPAREN,
    STATE(536), 1,
      aux_sym_assignment_tuple_repeat1,
  [15080] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1557), 1,
      aux_sym_delete_statement_token2,
    STATE(175), 1,
      sym_object_name,
  [15090] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(1522), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_relation_element_repeat2,
  [15100] = 3,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1559), 1,
      anon_sym_RBRACK,
    STATE(536), 1,
      aux_sym_assignment_tuple_repeat1,
  [15110] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1561), 1,
      aux_sym_delete_statement_token2,
    STATE(817), 1,
      sym_object_name,
  [15120] = 3,
    ACTIONS(1323), 1,
      anon_sym_COMMA,
    ACTIONS(1563), 1,
      anon_sym_RPAREN,
    STATE(683), 1,
      aux_sym_create_type_repeat1,
  [15130] = 3,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1565), 1,
      anon_sym_RBRACE,
    STATE(536), 1,
      aux_sym_assignment_tuple_repeat1,
  [15140] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1567), 1,
      aux_sym_delete_statement_token2,
    STATE(1386), 1,
      sym_object_name,
  [15150] = 3,
    ACTIONS(1569), 1,
      anon_sym_COMMA,
    ACTIONS(1572), 1,
      anon_sym_RPAREN,
    STATE(765), 1,
      aux_sym_expression_list_repeat1,
  [15160] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1574), 1,
      aux_sym_delete_statement_token2,
    STATE(810), 1,
      sym_object_name,
  [15170] = 3,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    STATE(29), 1,
      sym_object_name,
    STATE(866), 1,
      sym_param,
  [15180] = 3,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(597), 1,
      sym_object_name,
    STATE(1214), 1,
      sym_column_list,
  [15190] = 3,
    ACTIONS(1407), 1,
      anon_sym_COMMA,
    ACTIONS(1576), 1,
      anon_sym_GT,
    STATE(686), 1,
      aux_sym_data_type_definition_repeat1,
  [15200] = 2,
    ACTIONS(1580), 1,
      anon_sym_LBRACK,
    ACTIONS(1578), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [15208] = 3,
    ACTIONS(1501), 1,
      anon_sym_COMMA,
    ACTIONS(1582), 1,
      aux_sym_from_spec_token1,
    STATE(726), 1,
      aux_sym_delete_column_list_repeat1,
  [15218] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1224), 1,
      sym_return_mode,
  [15228] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1584), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_create_function_repeat1,
  [15238] = 2,
    ACTIONS(1159), 1,
      aux_sym_select_element_token1,
    ACTIONS(1155), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [15246] = 3,
    ACTIONS(1392), 1,
      anon_sym_COMMA,
    ACTIONS(1586), 1,
      anon_sym_RPAREN,
    STATE(662), 1,
      aux_sym_option_hash_repeat1,
  [15256] = 3,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    STATE(45), 1,
      sym_object_name,
    STATE(883), 1,
      sym_column_definition,
  [15266] = 3,
    ACTIONS(1512), 1,
      anon_sym_COMMA,
    ACTIONS(1588), 1,
      aux_sym_from_spec_token1,
    STATE(731), 1,
      aux_sym_select_elements_repeat1,
  [15276] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1590), 1,
      anon_sym_RPAREN,
    STATE(616), 1,
      aux_sym_create_function_repeat1,
  [15286] = 3,
    ACTIONS(1592), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1594), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1596), 1,
      aux_sym_update_token1,
  [15296] = 3,
    ACTIONS(91), 1,
      aux_sym_drop_index_token2,
    ACTIONS(1598), 1,
      aux_sym_truncate_token2,
    STATE(221), 1,
      sym_object_name,
  [15306] = 3,
    ACTIONS(1332), 1,
      anon_sym_COMMA,
    ACTIONS(1600), 1,
      anon_sym_RBRACE,
    STATE(625), 1,
      aux_sym_replication_list_repeat1,
  [15316] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1240), 1,
      sym_return_mode,
  [15326] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    ACTIONS(1602), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_create_function_repeat1,
  [15336] = 3,
    ACTIONS(1292), 1,
      aux_sym_create_function_token1,
    ACTIONS(1294), 1,
      aux_sym_return_mode_token1,
    STATE(1244), 1,
      sym_return_mode,
  [15346] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1204), 1,
      sym_object_name,
  [15353] = 2,
    ACTIONS(1604), 1,
      anon_sym_DOT,
    ACTIONS(1606), 1,
      aux_sym_create_index_token3,
  [15360] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1283), 1,
      sym_object_name,
  [15367] = 2,
    ACTIONS(1608), 1,
      anon_sym_DOT,
    ACTIONS(1610), 1,
      anon_sym_LPAREN,
  [15374] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(596), 1,
      sym_object_name,
  [15381] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(420), 1,
      sym_object_name,
  [15388] = 2,
    ACTIONS(1612), 1,
      aux_sym_from_spec_token1,
    STATE(72), 1,
      sym_from_spec,
  [15395] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(79), 1,
      sym_object_name,
  [15402] = 2,
    ACTIONS(1612), 1,
      aux_sym_from_spec_token1,
    STATE(553), 1,
      sym_from_spec,
  [15409] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(512), 1,
      sym_object_name,
  [15416] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(232), 1,
      sym_object_name,
  [15423] = 2,
    ACTIONS(1614), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1616), 1,
      aux_sym_drop_index_token2,
  [15430] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(452), 1,
      sym_object_name,
  [15437] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1331), 1,
      sym_object_name,
  [15444] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(150), 1,
      sym_object_name,
  [15451] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(484), 1,
      sym_object_name,
  [15458] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1323), 1,
      sym_object_name,
  [15465] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(568), 1,
      sym_object_name,
  [15472] = 2,
    ACTIONS(1612), 1,
      aux_sym_from_spec_token1,
    STATE(71), 1,
      sym_from_spec,
  [15479] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(865), 1,
      sym_object_name,
  [15486] = 2,
    ACTIONS(1254), 1,
      aux_sym_timestamp_token1,
    STATE(556), 1,
      sym_timestamp,
  [15493] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(187), 1,
      sym_where_spec,
  [15500] = 1,
    ACTIONS(1618), 2,
      sym_string_literal,
      sym_decimal_literal,
  [15505] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(421), 1,
      sym_object_name,
  [15512] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1435), 1,
      sym_object_name,
  [15519] = 2,
    ACTIONS(1620), 1,
      anon_sym_DOT,
    ACTIONS(1622), 1,
      anon_sym_LPAREN,
  [15526] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1219), 1,
      sym_object_name,
  [15533] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1415), 1,
      sym_object_name,
  [15540] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1413), 1,
      sym_object_name,
  [15547] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(697), 1,
      sym_object_name,
  [15554] = 2,
    ACTIONS(461), 1,
      aux_sym_clustering_order_token1,
    STATE(411), 1,
      sym_clustering_order,
  [15561] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(891), 1,
      sym_object_name,
  [15568] = 2,
    ACTIONS(1624), 1,
      anon_sym_DOT,
    ACTIONS(1626), 1,
      anon_sym_LPAREN,
  [15575] = 1,
    ACTIONS(1572), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15580] = 2,
    ACTIONS(1628), 1,
      anon_sym_DOT,
    ACTIONS(1630), 1,
      anon_sym_LPAREN,
  [15587] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1393), 1,
      sym_object_name,
  [15594] = 2,
    ACTIONS(1632), 1,
      anon_sym_DOT,
    ACTIONS(1634), 1,
      aux_sym_using_timestamp_spec_token1,
  [15601] = 2,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_assignment_tuple,
  [15608] = 2,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    STATE(656), 1,
      sym_assignment_tuple,
  [15615] = 2,
    ACTIONS(1636), 1,
      anon_sym_DOT,
    ACTIONS(1638), 1,
      anon_sym_LPAREN,
  [15622] = 2,
    ACTIONS(1640), 1,
      anon_sym_DOT,
    ACTIONS(1642), 1,
      anon_sym_LPAREN,
  [15629] = 2,
    ACTIONS(1644), 1,
      aux_sym_resource_token3,
    ACTIONS(1646), 1,
      aux_sym_drop_aggregate_token1,
  [15636] = 1,
    ACTIONS(1648), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15641] = 1,
    ACTIONS(1493), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15646] = 2,
    ACTIONS(1650), 1,
      anon_sym_DOT,
    ACTIONS(1652), 1,
      anon_sym_LPAREN,
  [15653] = 2,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    STATE(13), 1,
      sym_object_name,
  [15660] = 1,
    ACTIONS(1488), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15665] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(119), 1,
      sym_object_name,
  [15672] = 2,
    ACTIONS(1654), 1,
      anon_sym_DOT,
    ACTIONS(1656), 1,
      aux_sym_create_index_token3,
  [15679] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(215), 1,
      sym_object_name,
  [15686] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(311), 1,
      sym_object_name,
  [15693] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(309), 1,
      sym_object_name,
  [15700] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(842), 1,
      sym_object_name,
  [15707] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1379), 1,
      sym_object_name,
  [15714] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(300), 1,
      sym_object_name,
  [15721] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(663), 1,
      sym_object_name,
  [15728] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1375), 1,
      sym_object_name,
  [15735] = 1,
    ACTIONS(1658), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [15740] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1370), 1,
      sym_object_name,
  [15747] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(829), 1,
      sym_object_name,
  [15754] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(166), 1,
      sym_object_name,
  [15761] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(824), 1,
      sym_object_name,
  [15768] = 2,
    ACTIONS(1660), 1,
      aux_sym_role_with_options_token1,
    STATE(118), 1,
      sym_user_password,
  [15775] = 2,
    ACTIONS(1319), 1,
      aux_sym_where_spec_token1,
    STATE(1360), 1,
      sym_materialized_view_where,
  [15782] = 2,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    STATE(50), 1,
      sym_object_name,
  [15789] = 2,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    STATE(7), 1,
      sym_object_name,
  [15796] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1390), 1,
      sym_object_name,
  [15803] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(253), 1,
      sym_object_name,
  [15810] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(387), 1,
      sym_object_name,
  [15817] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(292), 1,
      sym_object_name,
  [15824] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1394), 1,
      sym_object_name,
  [15831] = 2,
    ACTIONS(1612), 1,
      aux_sym_from_spec_token1,
    STATE(601), 1,
      sym_from_spec,
  [15838] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(503), 1,
      sym_object_name,
  [15845] = 2,
    ACTIONS(1662), 1,
      anon_sym_DOT,
    ACTIONS(1664), 1,
      aux_sym_select_element_token1,
  [15852] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1406), 1,
      sym_object_name,
  [15859] = 2,
    ACTIONS(1612), 1,
      aux_sym_from_spec_token1,
    STATE(70), 1,
      sym_from_spec,
  [15866] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1410), 1,
      sym_object_name,
  [15873] = 2,
    ACTIONS(1666), 1,
      sym_string_literal,
    STATE(775), 1,
      sym_option_hash_item,
  [15880] = 1,
    ACTIONS(1467), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [15885] = 2,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_assignment_tuple,
  [15892] = 1,
    ACTIONS(1668), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [15897] = 1,
    ACTIONS(1390), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15902] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1350), 1,
      sym_object_name,
  [15909] = 2,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    STATE(740), 1,
      sym_assignment_tuple,
  [15916] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(92), 1,
      sym_object_name,
  [15923] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1348), 1,
      sym_object_name,
  [15930] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1430), 1,
      sym_object_name,
  [15937] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(633), 1,
      sym_object_name,
  [15944] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1344), 1,
      sym_object_name,
  [15951] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1340), 1,
      sym_object_name,
  [15958] = 1,
    ACTIONS(1234), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [15963] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1439), 1,
      sym_object_name,
  [15970] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1441), 1,
      sym_object_name,
  [15977] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(788), 1,
      sym_object_name,
  [15984] = 2,
    ACTIONS(1670), 1,
      anon_sym_DOT,
    ACTIONS(1672), 1,
      anon_sym_LPAREN,
  [15991] = 1,
    ACTIONS(1674), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15996] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1336), 1,
      sym_object_name,
  [16003] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(147), 1,
      sym_where_spec,
  [16010] = 1,
    ACTIONS(1363), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16015] = 1,
    ACTIONS(1455), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [16020] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(518), 1,
      sym_object_name,
  [16027] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(848), 1,
      sym_object_name,
  [16034] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(329), 1,
      sym_object_name,
  [16041] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1052), 1,
      sym_object_name,
  [16048] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1155), 1,
      sym_object_name,
  [16055] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1391), 1,
      sym_object_name,
  [16062] = 2,
    ACTIONS(1676), 1,
      anon_sym_DOT,
    ACTIONS(1678), 1,
      anon_sym_LPAREN,
  [16069] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1020), 1,
      sym_object_name,
  [16076] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1307), 1,
      sym_object_name,
  [16083] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1302), 1,
      sym_object_name,
  [16090] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1298), 1,
      sym_object_name,
  [16097] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1294), 1,
      sym_object_name,
  [16104] = 1,
    ACTIONS(1680), 2,
      sym_string_literal,
      sym_decimal_literal,
  [16109] = 2,
    ACTIONS(1375), 1,
      sym_string_literal,
    STATE(992), 1,
      sym_replication_list_item,
  [16116] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1104), 1,
      sym_object_name,
  [16123] = 1,
    ACTIONS(1682), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [16128] = 2,
    ACTIONS(1319), 1,
      aux_sym_where_spec_token1,
    STATE(1285), 1,
      sym_materialized_view_where,
  [16135] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1094), 1,
      sym_object_name,
  [16142] = 2,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_assignment_tuple,
  [16149] = 1,
    ACTIONS(1330), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16154] = 2,
    ACTIONS(1684), 1,
      anon_sym_DOT,
    ACTIONS(1686), 1,
      aux_sym_select_element_token1,
  [16161] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1276), 1,
      sym_object_name,
  [16168] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1076), 1,
      sym_object_name,
  [16175] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(357), 1,
      sym_object_name,
  [16182] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1272), 1,
      sym_object_name,
  [16189] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1135), 1,
      sym_object_name,
  [16196] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1267), 1,
      sym_object_name,
  [16203] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1070), 1,
      sym_object_name,
  [16210] = 1,
    ACTIONS(1688), 2,
      sym_string_literal,
      sym_float_literal,
  [16215] = 2,
    ACTIONS(1666), 1,
      sym_string_literal,
    STATE(1008), 1,
      sym_option_hash_item,
  [16222] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(227), 1,
      sym_object_name,
  [16229] = 2,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    STATE(19), 1,
      sym_object_name,
  [16236] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(389), 1,
      sym_object_name,
  [16243] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1266), 1,
      sym_object_name,
  [16250] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1121), 1,
      sym_object_name,
  [16257] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(124), 1,
      sym_object_name,
  [16264] = 1,
    ACTIONS(1438), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [16269] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1262), 1,
      sym_object_name,
  [16276] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(134), 1,
      sym_object_name,
  [16283] = 2,
    ACTIONS(1660), 1,
      aux_sym_role_with_options_token1,
    STATE(121), 1,
      sym_user_password,
  [16290] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1257), 1,
      sym_object_name,
  [16297] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(235), 1,
      sym_object_name,
  [16304] = 1,
    ACTIONS(1690), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [16309] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(431), 1,
      sym_object_name,
  [16316] = 2,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    STATE(52), 1,
      sym_object_name,
  [16323] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(858), 1,
      sym_object_name,
  [16330] = 1,
    ACTIONS(1462), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [16335] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(293), 1,
      sym_object_name,
  [16342] = 1,
    ACTIONS(1692), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16347] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(291), 1,
      sym_object_name,
  [16354] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1109), 1,
      sym_object_name,
  [16361] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(275), 1,
      sym_object_name,
  [16368] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(243), 1,
      sym_object_name,
  [16375] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(216), 1,
      sym_object_name,
  [16382] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1345), 1,
      sym_object_name,
  [16389] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(369), 1,
      sym_object_name,
  [16396] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(356), 1,
      sym_object_name,
  [16403] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1087), 1,
      sym_object_name,
  [16410] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(358), 1,
      sym_object_name,
  [16417] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(372), 1,
      sym_object_name,
  [16424] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1083), 1,
      sym_object_name,
  [16431] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(380), 1,
      sym_object_name,
  [16438] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1337), 1,
      sym_object_name,
  [16445] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(234), 1,
      sym_object_name,
  [16452] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1332), 1,
      sym_object_name,
  [16459] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(374), 1,
      sym_object_name,
  [16466] = 1,
    ACTIONS(1405), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [16471] = 1,
    ACTIONS(1694), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [16476] = 2,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    STATE(49), 1,
      sym_object_name,
  [16483] = 2,
    ACTIONS(1696), 1,
      anon_sym_DOT,
    ACTIONS(1698), 1,
      anon_sym_LPAREN,
  [16490] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(373), 1,
      sym_object_name,
  [16497] = 2,
    ACTIONS(1319), 1,
      aux_sym_where_spec_token1,
    STATE(1246), 1,
      sym_materialized_view_where,
  [16504] = 2,
    ACTIONS(1700), 1,
      anon_sym_DOT,
    ACTIONS(1702), 1,
      aux_sym_using_timestamp_spec_token1,
  [16511] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(901), 1,
      sym_object_name,
  [16518] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(679), 1,
      sym_object_name,
  [16525] = 2,
    ACTIONS(1256), 1,
      aux_sym_ttl_token1,
    STATE(218), 1,
      sym_ttl,
  [16532] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(375), 1,
      sym_object_name,
  [16539] = 2,
    ACTIONS(1704), 1,
      anon_sym_DOT,
    ACTIONS(1706), 1,
      anon_sym_LPAREN,
  [16546] = 2,
    ACTIONS(1206), 1,
      anon_sym_LPAREN,
    STATE(255), 1,
      sym_option_hash,
  [16553] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1239), 1,
      sym_object_name,
  [16560] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1235), 1,
      sym_object_name,
  [16567] = 1,
    ACTIONS(1708), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16572] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1231), 1,
      sym_object_name,
  [16579] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(377), 1,
      sym_object_name,
  [16586] = 2,
    ACTIONS(1710), 1,
      aux_sym_durable_writes_token1,
    STATE(346), 1,
      sym_durable_writes,
  [16593] = 2,
    ACTIONS(1712), 1,
      anon_sym_DOT,
    ACTIONS(1714), 1,
      anon_sym_LPAREN,
  [16600] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(786), 1,
      sym_object_name,
  [16607] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1055), 1,
      sym_object_name,
  [16614] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1304), 1,
      sym_object_name,
  [16621] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(231), 1,
      sym_object_name,
  [16628] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(230), 1,
      sym_object_name,
  [16635] = 1,
    ACTIONS(1716), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16640] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(384), 1,
      sym_object_name,
  [16647] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(211), 1,
      sym_object_name,
  [16654] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1221), 1,
      sym_object_name,
  [16661] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1218), 1,
      sym_object_name,
  [16668] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(260), 1,
      sym_object_name,
  [16675] = 2,
    ACTIONS(1718), 1,
      anon_sym_EQ,
    ACTIONS(1720), 1,
      anon_sym_LBRACK,
  [16682] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(101), 1,
      sym_object_name,
  [16689] = 2,
    ACTIONS(1722), 1,
      anon_sym_COMMA,
    ACTIONS(1724), 1,
      anon_sym_RPAREN,
  [16696] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(107), 1,
      sym_object_name,
  [16703] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(105), 1,
      sym_object_name,
  [16710] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(106), 1,
      sym_object_name,
  [16717] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(233), 1,
      sym_object_name,
  [16724] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(879), 1,
      sym_object_name,
  [16731] = 2,
    ACTIONS(1726), 1,
      anon_sym_DOT,
    ACTIONS(1728), 1,
      anon_sym_LPAREN,
  [16738] = 1,
    ACTIONS(1730), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16743] = 1,
    ACTIONS(1510), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16748] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(456), 1,
      sym_object_name,
  [16755] = 2,
    ACTIONS(1710), 1,
      aux_sym_durable_writes_token1,
    STATE(362), 1,
      sym_durable_writes,
  [16762] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1089), 1,
      sym_object_name,
  [16769] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(956), 1,
      sym_object_name,
  [16776] = 1,
    ACTIONS(1732), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16781] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(500), 1,
      sym_object_name,
  [16788] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(129), 1,
      sym_object_name,
  [16795] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1192), 1,
      sym_object_name,
  [16802] = 1,
    ACTIONS(1734), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [16807] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1105), 1,
      sym_object_name,
  [16814] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1188), 1,
      sym_object_name,
  [16821] = 2,
    ACTIONS(1189), 1,
      aux_sym_drop_index_token2,
    STATE(42), 1,
      sym_object_name,
  [16828] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1078), 1,
      sym_object_name,
  [16835] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1184), 1,
      sym_object_name,
  [16842] = 2,
    ACTIONS(1660), 1,
      aux_sym_role_with_options_token1,
    STATE(136), 1,
      sym_user_password,
  [16849] = 1,
    ACTIONS(1414), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16854] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(667), 1,
      sym_object_name,
  [16861] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(904), 1,
      sym_object_name,
  [16868] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(509), 1,
      sym_object_name,
  [16875] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1082), 1,
      sym_object_name,
  [16882] = 1,
    ACTIONS(1736), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [16887] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(990), 1,
      sym_object_name,
  [16894] = 1,
    ACTIONS(1738), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16899] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1157), 1,
      sym_object_name,
  [16906] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(620), 1,
      sym_object_name,
  [16913] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1033), 1,
      sym_object_name,
  [16920] = 1,
    ACTIONS(1416), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16925] = 2,
    ACTIONS(1740), 1,
      anon_sym_DOT,
    ACTIONS(1742), 1,
      anon_sym_LPAREN,
  [16932] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1178), 1,
      sym_object_name,
  [16939] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(514), 1,
      sym_object_name,
  [16946] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(185), 1,
      sym_where_spec,
  [16953] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(391), 1,
      sym_object_name,
  [16960] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(392), 1,
      sym_object_name,
  [16967] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1169), 1,
      sym_object_name,
  [16974] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(970), 1,
      sym_object_name,
  [16981] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1164), 1,
      sym_object_name,
  [16988] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(197), 1,
      sym_object_name,
  [16995] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(226), 1,
      sym_object_name,
  [17002] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(962), 1,
      sym_object_name,
  [17009] = 2,
    ACTIONS(1744), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1746), 1,
      aux_sym_create_materialized_view_token1,
  [17016] = 2,
    ACTIONS(1319), 1,
      aux_sym_where_spec_token1,
    STATE(1148), 1,
      sym_materialized_view_where,
  [17023] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1197), 1,
      sym_object_name,
  [17030] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(642), 1,
      sym_object_name,
  [17037] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1143), 1,
      sym_object_name,
  [17044] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(957), 1,
      sym_object_name,
  [17051] = 1,
    ACTIONS(1748), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17056] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(337), 1,
      sym_object_name,
  [17063] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1139), 1,
      sym_object_name,
  [17070] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(1134), 1,
      sym_object_name,
  [17077] = 2,
    ACTIONS(1710), 1,
      aux_sym_durable_writes_token1,
    STATE(332), 1,
      sym_durable_writes,
  [17084] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(954), 1,
      sym_object_name,
  [17091] = 2,
    ACTIONS(1750), 1,
      anon_sym_DOT,
    ACTIONS(1752), 1,
      anon_sym_LPAREN,
  [17098] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(109), 1,
      sym_object_name,
  [17105] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(401), 1,
      sym_object_name,
  [17112] = 2,
    ACTIONS(1754), 1,
      anon_sym_DOT,
    ACTIONS(1756), 1,
      anon_sym_LPAREN,
  [17119] = 2,
    ACTIONS(1254), 1,
      aux_sym_timestamp_token1,
    STATE(218), 1,
      sym_timestamp,
  [17126] = 2,
    ACTIONS(1354), 1,
      aux_sym_drop_index_token2,
    STATE(580), 1,
      sym_object_name,
  [17133] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(339), 1,
      sym_object_name,
  [17140] = 2,
    ACTIONS(1057), 1,
      aux_sym_drop_index_token2,
    STATE(217), 1,
      sym_object_name,
  [17147] = 1,
    ACTIONS(1758), 1,
      anon_sym_LPAREN,
  [17151] = 1,
    ACTIONS(1760), 1,
      anon_sym_LPAREN,
  [17155] = 1,
    ACTIONS(1762), 1,
      aux_sym_update_token2,
  [17159] = 1,
    ACTIONS(1764), 1,
      aux_sym_create_index_token3,
  [17163] = 1,
    ACTIONS(1766), 1,
      anon_sym_COLON,
  [17167] = 1,
    ACTIONS(1768), 1,
      aux_sym_drop_index_token2,
  [17171] = 1,
    ACTIONS(1770), 1,
      anon_sym_RPAREN,
  [17175] = 1,
    ACTIONS(1772), 1,
      aux_sym_grant_token2,
  [17179] = 1,
    ACTIONS(1774), 1,
      anon_sym_RPAREN,
  [17183] = 1,
    ACTIONS(1776), 1,
      sym_decimal_literal,
  [17187] = 1,
    ACTIONS(1778), 1,
      anon_sym_RPAREN,
  [17191] = 1,
    ACTIONS(1780), 1,
      aux_sym_insert_statement_token3,
  [17195] = 1,
    ACTIONS(1782), 1,
      aux_sym_create_function_token1,
  [17199] = 1,
    ACTIONS(1784), 1,
      anon_sym_RBRACE,
  [17203] = 1,
    ACTIONS(1786), 1,
      anon_sym_EQ,
  [17207] = 1,
    ACTIONS(1788), 1,
      aux_sym_insert_statement_token3,
  [17211] = 1,
    ACTIONS(1790), 1,
      aux_sym_create_function_token1,
  [17215] = 1,
    ACTIONS(1792), 1,
      sym_string_literal,
  [17219] = 1,
    ACTIONS(1794), 1,
      anon_sym_LPAREN,
  [17223] = 1,
    ACTIONS(1796), 1,
      aux_sym_create_function_token2,
  [17227] = 1,
    ACTIONS(1798), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [17231] = 1,
    ACTIONS(1800), 1,
      aux_sym_create_function_token1,
  [17235] = 1,
    ACTIONS(1802), 1,
      aux_sym_delete_statement_token3,
  [17239] = 1,
    ACTIONS(1804), 1,
      aux_sym_create_function_token2,
  [17243] = 1,
    ACTIONS(1806), 1,
      aux_sym_using_timestamp_spec_token1,
  [17247] = 1,
    ACTIONS(1808), 1,
      sym_code_block,
  [17251] = 1,
    ACTIONS(1810), 1,
      aux_sym_select_element_token1,
  [17255] = 1,
    ACTIONS(1812), 1,
      anon_sym_EQ,
  [17259] = 1,
    ACTIONS(1814), 1,
      anon_sym_EQ,
  [17263] = 1,
    ACTIONS(1816), 1,
      aux_sym_create_aggregate_token3,
  [17267] = 1,
    ACTIONS(1818), 1,
      aux_sym_create_aggregate_token4,
  [17271] = 1,
    ACTIONS(1820), 1,
      aux_sym_create_aggregate_token4,
  [17275] = 1,
    ACTIONS(1822), 1,
      aux_sym_create_aggregate_token3,
  [17279] = 1,
    ACTIONS(1824), 1,
      aux_sym_select_statement_token1,
  [17283] = 1,
    ACTIONS(1826), 1,
      anon_sym_RPAREN,
  [17287] = 1,
    ACTIONS(1828), 1,
      anon_sym_LPAREN,
  [17291] = 1,
    ACTIONS(1830), 1,
      aux_sym_create_function_token1,
  [17295] = 1,
    ACTIONS(1832), 1,
      aux_sym_grant_token2,
  [17299] = 1,
    ACTIONS(1834), 1,
      aux_sym_delete_statement_token3,
  [17303] = 1,
    ACTIONS(1836), 1,
      aux_sym_column_not_null_token1,
  [17307] = 1,
    ACTIONS(1838), 1,
      aux_sym_relation_contains_key_token2,
  [17311] = 1,
    ACTIONS(1840), 1,
      anon_sym_RPAREN,
  [17315] = 1,
    ACTIONS(1842), 1,
      anon_sym_LPAREN,
  [17319] = 1,
    ACTIONS(1844), 1,
      aux_sym_create_function_token2,
  [17323] = 1,
    ACTIONS(1846), 1,
      aux_sym_create_function_token1,
  [17327] = 1,
    ACTIONS(1848), 1,
      anon_sym_EQ,
  [17331] = 1,
    ACTIONS(1850), 1,
      anon_sym_EQ,
  [17335] = 1,
    ACTIONS(1852), 1,
      anon_sym_EQ,
  [17339] = 1,
    ACTIONS(1854), 1,
      aux_sym_create_function_token1,
  [17343] = 1,
    ACTIONS(1856), 1,
      anon_sym_EQ,
  [17347] = 1,
    ACTIONS(1858), 1,
      aux_sym_create_function_token1,
  [17351] = 1,
    ACTIONS(1860), 1,
      aux_sym_create_function_token2,
  [17355] = 1,
    ACTIONS(1862), 1,
      anon_sym_LPAREN,
  [17359] = 1,
    ACTIONS(1864), 1,
      aux_sym_drop_type_token1,
  [17363] = 1,
    ACTIONS(1866), 1,
      aux_sym_create_aggregate_token3,
  [17367] = 1,
    ACTIONS(1868), 1,
      aux_sym_grant_token2,
  [17371] = 1,
    ACTIONS(1870), 1,
      anon_sym_GT,
  [17375] = 1,
    ACTIONS(1872), 1,
      anon_sym_LPAREN,
  [17379] = 1,
    ACTIONS(1874), 1,
      aux_sym_select_statement_token5,
  [17383] = 1,
    ACTIONS(1876), 1,
      aux_sym_create_materialized_view_token1,
  [17387] = 1,
    ACTIONS(1878), 1,
      anon_sym_RPAREN,
  [17391] = 1,
    ACTIONS(1880), 1,
      aux_sym_from_spec_token1,
  [17395] = 1,
    ACTIONS(1882), 1,
      aux_sym_select_statement_token1,
  [17399] = 1,
    ACTIONS(1884), 1,
      aux_sym_insert_statement_token3,
  [17403] = 1,
    ACTIONS(1886), 1,
      anon_sym_RPAREN,
  [17407] = 1,
    ACTIONS(1888), 1,
      aux_sym_create_aggregate_token5,
  [17411] = 1,
    ACTIONS(1890), 1,
      anon_sym_EQ,
  [17415] = 1,
    ACTIONS(1892), 1,
      anon_sym_LPAREN,
  [17419] = 1,
    ACTIONS(1894), 1,
      anon_sym_COMMA,
  [17423] = 1,
    ACTIONS(1896), 1,
      aux_sym_create_aggregate_token4,
  [17427] = 1,
    ACTIONS(1898), 1,
      anon_sym_RPAREN,
  [17431] = 1,
    ACTIONS(1900), 1,
      aux_sym_select_statement_token5,
  [17435] = 1,
    ACTIONS(1902), 1,
      aux_sym_update_token2,
  [17439] = 1,
    ACTIONS(1904), 1,
      anon_sym_RPAREN,
  [17443] = 1,
    ACTIONS(1906), 1,
      anon_sym_RPAREN,
  [17447] = 1,
    ACTIONS(1908), 1,
      sym_boolean_literal,
  [17451] = 1,
    ACTIONS(1910), 1,
      aux_sym_from_spec_token1,
  [17455] = 1,
    ACTIONS(1912), 1,
      aux_sym_create_function_token1,
  [17459] = 1,
    ACTIONS(1019), 1,
      anon_sym_LPAREN,
  [17463] = 1,
    ACTIONS(1914), 1,
      anon_sym_RPAREN,
  [17467] = 1,
    ACTIONS(1916), 1,
      aux_sym_create_function_token2,
  [17471] = 1,
    ACTIONS(1918), 1,
      aux_sym_create_function_token2,
  [17475] = 1,
    ACTIONS(1920), 1,
      aux_sym_select_element_token1,
  [17479] = 1,
    ACTIONS(1922), 1,
      aux_sym_select_element_token1,
  [17483] = 1,
    ACTIONS(1924), 1,
      aux_sym_create_function_token2,
  [17487] = 1,
    ACTIONS(1926), 1,
      aux_sym_create_function_token1,
  [17491] = 1,
    ACTIONS(1928), 1,
      sym_code_block,
  [17495] = 1,
    ACTIONS(1930), 1,
      aux_sym_select_element_token1,
  [17499] = 1,
    ACTIONS(1932), 1,
      aux_sym_create_function_token1,
  [17503] = 1,
    ACTIONS(1934), 1,
      aux_sym_create_function_token2,
  [17507] = 1,
    ACTIONS(1936), 1,
      aux_sym_create_aggregate_token5,
  [17511] = 1,
    ACTIONS(1938), 1,
      aux_sym_create_aggregate_token6,
  [17515] = 1,
    ACTIONS(1940), 1,
      aux_sym_from_spec_token1,
  [17519] = 1,
    ACTIONS(1942), 1,
      aux_sym_create_keyspace_token1,
  [17523] = 1,
    ACTIONS(1944), 1,
      aux_sym_create_function_token1,
  [17527] = 1,
    ACTIONS(1946), 1,
      aux_sym_create_materialized_view_token1,
  [17531] = 1,
    ACTIONS(1948), 1,
      aux_sym_create_materialized_view_token1,
  [17535] = 1,
    ACTIONS(1950), 1,
      anon_sym_RPAREN,
  [17539] = 1,
    ACTIONS(1952), 1,
      aux_sym_insert_statement_token3,
  [17543] = 1,
    ACTIONS(1954), 1,
      aux_sym_delete_statement_token3,
  [17547] = 1,
    ACTIONS(1956), 1,
      aux_sym_insert_statement_token3,
  [17551] = 1,
    ACTIONS(1958), 1,
      anon_sym_LPAREN,
  [17555] = 1,
    ACTIONS(1960), 1,
      anon_sym_RPAREN,
  [17559] = 1,
    ACTIONS(1962), 1,
      anon_sym_LPAREN,
  [17563] = 1,
    ACTIONS(1964), 1,
      aux_sym_create_index_token3,
  [17567] = 1,
    ACTIONS(1966), 1,
      anon_sym_LPAREN,
  [17571] = 1,
    ACTIONS(1968), 1,
      anon_sym_RPAREN,
  [17575] = 1,
    ACTIONS(1970), 1,
      aux_sym_create_function_token1,
  [17579] = 1,
    ACTIONS(1972), 1,
      sym_decimal_literal,
  [17583] = 1,
    ACTIONS(1974), 1,
      aux_sym_create_function_token2,
  [17587] = 1,
    ACTIONS(1976), 1,
      anon_sym_RPAREN,
  [17591] = 1,
    ACTIONS(1978), 1,
      aux_sym_create_function_token1,
  [17595] = 1,
    ACTIONS(1980), 1,
      aux_sym_select_element_token1,
  [17599] = 1,
    ACTIONS(1982), 1,
      anon_sym_LPAREN,
  [17603] = 1,
    ACTIONS(1984), 1,
      aux_sym_create_function_token2,
  [17607] = 1,
    ACTIONS(1986), 1,
      anon_sym_RPAREN,
  [17611] = 1,
    ACTIONS(1988), 1,
      anon_sym_LPAREN,
  [17615] = 1,
    ACTIONS(1990), 1,
      aux_sym_create_aggregate_token4,
  [17619] = 1,
    ACTIONS(1992), 1,
      aux_sym_create_aggregate_token5,
  [17623] = 1,
    ACTIONS(1994), 1,
      anon_sym_LPAREN,
  [17627] = 1,
    ACTIONS(1996), 1,
      anon_sym_RPAREN,
  [17631] = 1,
    ACTIONS(1998), 1,
      anon_sym_LPAREN,
  [17635] = 1,
    ACTIONS(2000), 1,
      anon_sym_RPAREN,
  [17639] = 1,
    ACTIONS(2002), 1,
      anon_sym_RPAREN,
  [17643] = 1,
    ACTIONS(2004), 1,
      anon_sym_RPAREN,
  [17647] = 1,
    ACTIONS(2006), 1,
      anon_sym_RPAREN,
  [17651] = 1,
    ACTIONS(2008), 1,
      aux_sym_create_materialized_view_token2,
  [17655] = 1,
    ACTIONS(2010), 1,
      anon_sym_LBRACE,
  [17659] = 1,
    ACTIONS(2012), 1,
      aux_sym_delete_statement_token3,
  [17663] = 1,
    ACTIONS(2014), 1,
      aux_sym_create_function_token2,
  [17667] = 1,
    ACTIONS(2016), 1,
      aux_sym_constant_token1,
  [17671] = 1,
    ACTIONS(2018), 1,
      aux_sym_create_function_token1,
  [17675] = 1,
    ACTIONS(2020), 1,
      aux_sym_select_element_token1,
  [17679] = 1,
    ACTIONS(2022), 1,
      aux_sym_create_index_token3,
  [17683] = 1,
    ACTIONS(2024), 1,
      aux_sym_create_function_token2,
  [17687] = 1,
    ACTIONS(2026), 1,
      sym_code_block,
  [17691] = 1,
    ACTIONS(2028), 1,
      aux_sym_select_element_token1,
  [17695] = 1,
    ACTIONS(2030), 1,
      aux_sym_create_aggregate_token3,
  [17699] = 1,
    ACTIONS(2032), 1,
      aux_sym_order_spec_token2,
  [17703] = 1,
    ACTIONS(2034), 1,
      sym_code_block,
  [17707] = 1,
    ACTIONS(2036), 1,
      aux_sym_create_aggregate_token4,
  [17711] = 1,
    ACTIONS(2038), 1,
      aux_sym_create_aggregate_token5,
  [17715] = 1,
    ACTIONS(2040), 1,
      sym_string_literal,
  [17719] = 1,
    ACTIONS(2040), 1,
      sym_boolean_literal,
  [17723] = 1,
    ACTIONS(2042), 1,
      aux_sym_create_aggregate_token3,
  [17727] = 1,
    ACTIONS(2044), 1,
      aux_sym_select_element_token1,
  [17731] = 1,
    ACTIONS(2046), 1,
      aux_sym_create_materialized_view_token1,
  [17735] = 1,
    ACTIONS(2048), 1,
      aux_sym_delete_statement_token3,
  [17739] = 1,
    ACTIONS(2050), 1,
      aux_sym_relation_contains_key_token2,
  [17743] = 1,
    ACTIONS(2052), 1,
      aux_sym_relation_contains_key_token2,
  [17747] = 1,
    ACTIONS(2054), 1,
      aux_sym_create_materialized_view_token1,
  [17751] = 1,
    ACTIONS(2056), 1,
      aux_sym_insert_statement_token3,
  [17755] = 1,
    ACTIONS(2058), 1,
      aux_sym_create_materialized_view_token2,
  [17759] = 1,
    ACTIONS(2060), 1,
      aux_sym_constant_token1,
  [17763] = 1,
    ACTIONS(2062), 1,
      aux_sym_delete_statement_token3,
  [17767] = 1,
    ACTIONS(2064), 1,
      aux_sym_delete_statement_token3,
  [17771] = 1,
    ACTIONS(2066), 1,
      aux_sym_create_function_token1,
  [17775] = 1,
    ACTIONS(2068), 1,
      aux_sym_drop_index_token2,
  [17779] = 1,
    ACTIONS(2070), 1,
      anon_sym_RPAREN,
  [17783] = 1,
    ACTIONS(2072), 1,
      aux_sym_create_function_token2,
  [17787] = 1,
    ACTIONS(2074), 1,
      aux_sym_create_function_token1,
  [17791] = 1,
    ACTIONS(2076), 1,
      aux_sym_create_function_token1,
  [17795] = 1,
    ACTIONS(2078), 1,
      aux_sym_from_spec_token1,
  [17799] = 1,
    ACTIONS(2080), 1,
      aux_sym_create_function_token2,
  [17803] = 1,
    ACTIONS(2082), 1,
      anon_sym_RBRACK,
  [17807] = 1,
    ACTIONS(2084), 1,
      sym_code_block,
  [17811] = 1,
    ACTIONS(2086), 1,
      aux_sym_select_element_token1,
  [17815] = 1,
    ACTIONS(2088), 1,
      aux_sym_select_element_token1,
  [17819] = 1,
    ACTIONS(2090), 1,
      aux_sym_create_aggregate_token3,
  [17823] = 1,
    ACTIONS(2092), 1,
      aux_sym_create_aggregate_token4,
  [17827] = 1,
    ACTIONS(2094), 1,
      aux_sym_delete_statement_token3,
  [17831] = 1,
    ACTIONS(2096), 1,
      aux_sym_resource_token2,
  [17835] = 1,
    ACTIONS(2098), 1,
      aux_sym_create_function_token1,
  [17839] = 1,
    ACTIONS(2100), 1,
      anon_sym_RPAREN,
  [17843] = 1,
    ACTIONS(2102), 1,
      anon_sym_LBRACE,
  [17847] = 1,
    ACTIONS(2104), 1,
      aux_sym_insert_statement_token3,
  [17851] = 1,
    ACTIONS(2106), 1,
      aux_sym_create_function_token2,
  [17855] = 1,
    ACTIONS(2108), 1,
      aux_sym_delete_statement_token3,
  [17859] = 1,
    ACTIONS(2110), 1,
      sym_code_block,
  [17863] = 1,
    ACTIONS(2112), 1,
      aux_sym_select_element_token1,
  [17867] = 1,
    ACTIONS(2114), 1,
      aux_sym_create_function_token2,
  [17871] = 1,
    ACTIONS(2116), 1,
      aux_sym_create_function_token1,
  [17875] = 1,
    ACTIONS(2118), 1,
      sym_code_block,
  [17879] = 1,
    ACTIONS(2120), 1,
      aux_sym_select_element_token1,
  [17883] = 1,
    ACTIONS(2122), 1,
      aux_sym_return_mode_token2,
  [17887] = 1,
    ACTIONS(2124), 1,
      aux_sym_delete_statement_token3,
  [17891] = 1,
    ACTIONS(2126), 1,
      aux_sym_update_token2,
  [17895] = 1,
    ACTIONS(2128), 1,
      aux_sym_create_aggregate_token6,
  [17899] = 1,
    ACTIONS(2130), 1,
      aux_sym_create_function_token1,
  [17903] = 1,
    ACTIONS(2132), 1,
      aux_sym_insert_statement_token3,
  [17907] = 1,
    ACTIONS(2134), 1,
      aux_sym_select_statement_token5,
  [17911] = 1,
    ACTIONS(2136), 1,
      aux_sym_delete_statement_token3,
  [17915] = 1,
    ACTIONS(2138), 1,
      aux_sym_create_function_token1,
  [17919] = 1,
    ACTIONS(2140), 1,
      aux_sym_relation_contains_key_token2,
  [17923] = 1,
    ACTIONS(2142), 1,
      aux_sym_create_materialized_view_token1,
  [17927] = 1,
    ACTIONS(2144), 1,
      anon_sym_DOT,
  [17931] = 1,
    ACTIONS(2146), 1,
      anon_sym_LPAREN,
  [17935] = 1,
    ACTIONS(2148), 1,
      anon_sym_LPAREN,
  [17939] = 1,
    ACTIONS(2150), 1,
      anon_sym_RPAREN,
  [17943] = 1,
    ACTIONS(2152), 1,
      aux_sym_delete_statement_token3,
  [17947] = 1,
    ACTIONS(2154), 1,
      aux_sym_create_function_token1,
  [17951] = 1,
    ACTIONS(2156), 1,
      anon_sym_RPAREN,
  [17955] = 1,
    ACTIONS(2158), 1,
      aux_sym_insert_statement_token3,
  [17959] = 1,
    ACTIONS(2160), 1,
      aux_sym_create_function_token2,
  [17963] = 1,
    ACTIONS(2162), 1,
      aux_sym_delete_statement_token3,
  [17967] = 1,
    ACTIONS(2164), 1,
      aux_sym_select_element_token1,
  [17971] = 1,
    ACTIONS(2166), 1,
      anon_sym_LBRACE,
  [17975] = 1,
    ACTIONS(2168), 1,
      aux_sym_create_function_token2,
  [17979] = 1,
    ACTIONS(2170), 1,
      aux_sym_create_keyspace_token1,
  [17983] = 1,
    ACTIONS(2172), 1,
      sym_code_block,
  [17987] = 1,
    ACTIONS(2174), 1,
      aux_sym_select_element_token1,
  [17991] = 1,
    ACTIONS(2176), 1,
      anon_sym_RPAREN,
  [17995] = 1,
    ACTIONS(2178), 1,
      aux_sym_delete_statement_token3,
  [17999] = 1,
    ACTIONS(2180), 1,
      aux_sym_create_aggregate_token5,
  [18003] = 1,
    ACTIONS(2182), 1,
      aux_sym_create_aggregate_token6,
  [18007] = 1,
    ACTIONS(2184), 1,
      aux_sym_select_element_token1,
  [18011] = 1,
    ACTIONS(2186), 1,
      anon_sym_RPAREN,
  [18015] = 1,
    ACTIONS(2188), 1,
      aux_sym_create_function_token2,
  [18019] = 1,
    ACTIONS(2190), 1,
      anon_sym_RPAREN,
  [18023] = 1,
    ACTIONS(2192), 1,
      sym_code_block,
  [18027] = 1,
    ACTIONS(2194), 1,
      aux_sym_select_element_token1,
  [18031] = 1,
    ACTIONS(2196), 1,
      anon_sym_RPAREN,
  [18035] = 1,
    ACTIONS(2198), 1,
      sym_code_block,
  [18039] = 1,
    ACTIONS(2200), 1,
      aux_sym_create_aggregate_token5,
  [18043] = 1,
    ACTIONS(2202), 1,
      aux_sym_create_aggregate_token6,
  [18047] = 1,
    ACTIONS(2204), 1,
      aux_sym_delete_statement_token3,
  [18051] = 1,
    ACTIONS(2206), 1,
      aux_sym_delete_statement_token3,
  [18055] = 1,
    ACTIONS(2208), 1,
      aux_sym_delete_statement_token3,
  [18059] = 1,
    ACTIONS(2210), 1,
      anon_sym_RPAREN,
  [18063] = 1,
    ACTIONS(2212), 1,
      anon_sym_LPAREN,
  [18067] = 1,
    ACTIONS(2214), 1,
      anon_sym_COLON,
  [18071] = 1,
    ACTIONS(2216), 1,
      anon_sym_LPAREN,
  [18075] = 1,
    ACTIONS(2218), 1,
      aux_sym_create_materialized_view_token1,
  [18079] = 1,
    ACTIONS(2220), 1,
      aux_sym_create_materialized_view_token1,
  [18083] = 1,
    ACTIONS(2222), 1,
      anon_sym_LPAREN,
  [18087] = 1,
    ACTIONS(2224), 1,
      aux_sym_relation_contains_key_token2,
  [18091] = 1,
    ACTIONS(2226), 1,
      anon_sym_RPAREN,
  [18095] = 1,
    ACTIONS(2228), 1,
      anon_sym_RBRACK,
  [18099] = 1,
    ACTIONS(2230), 1,
      aux_sym_relation_contains_key_token2,
  [18103] = 1,
    ACTIONS(2232), 1,
      aux_sym_create_function_token2,
  [18107] = 1,
    ACTIONS(2234), 1,
      aux_sym_order_spec_token2,
  [18111] = 1,
    ACTIONS(2236), 1,
      aux_sym_create_function_token1,
  [18115] = 1,
    ACTIONS(2238), 1,
      aux_sym_select_element_token1,
  [18119] = 1,
    ACTIONS(2240), 1,
      anon_sym_RPAREN,
  [18123] = 1,
    ACTIONS(2242), 1,
      aux_sym_create_function_token2,
  [18127] = 1,
    ACTIONS(2244), 1,
      sym_code_block,
  [18131] = 1,
    ACTIONS(2246), 1,
      aux_sym_select_element_token1,
  [18135] = 1,
    ACTIONS(2248), 1,
      aux_sym_relation_contains_key_token2,
  [18139] = 1,
    ACTIONS(2250), 1,
      sym_decimal_literal,
  [18143] = 1,
    ACTIONS(2252), 1,
      sym_code_block,
  [18147] = 1,
    ACTIONS(2254), 1,
      aux_sym_create_aggregate_token4,
  [18151] = 1,
    ACTIONS(2256), 1,
      aux_sym_create_aggregate_token5,
  [18155] = 1,
    ACTIONS(2258), 1,
      anon_sym_LPAREN,
  [18159] = 1,
    ACTIONS(2260), 1,
      anon_sym_RPAREN,
  [18163] = 1,
    ACTIONS(2262), 1,
      sym_code_block,
  [18167] = 1,
    ACTIONS(2264), 1,
      aux_sym_select_element_token1,
  [18171] = 1,
    ACTIONS(2266), 1,
      aux_sym_create_keyspace_token1,
  [18175] = 1,
    ACTIONS(2268), 1,
      aux_sym_create_index_token3,
  [18179] = 1,
    ACTIONS(2270), 1,
      sym_code_block,
  [18183] = 1,
    ACTIONS(2272), 1,
      anon_sym_RPAREN,
  [18187] = 1,
    ACTIONS(2274), 1,
      aux_sym_delete_statement_token3,
  [18191] = 1,
    ACTIONS(2276), 1,
      aux_sym_constant_token1,
  [18195] = 1,
    ACTIONS(2278), 1,
      aux_sym_delete_statement_token3,
  [18199] = 1,
    ACTIONS(2280), 1,
      sym_decimal_literal,
  [18203] = 1,
    ACTIONS(2282), 1,
      aux_sym_select_statement_token5,
  [18207] = 1,
    ACTIONS(2284), 1,
      anon_sym_RPAREN,
  [18211] = 1,
    ACTIONS(2286), 1,
      aux_sym_select_statement_token5,
  [18215] = 1,
    ACTIONS(2288), 1,
      anon_sym_RPAREN,
  [18219] = 1,
    ACTIONS(2290), 1,
      aux_sym_select_statement_token1,
  [18223] = 1,
    ACTIONS(2292), 1,
      aux_sym_from_spec_token1,
  [18227] = 1,
    ACTIONS(2294), 1,
      aux_sym_delete_statement_token3,
  [18231] = 1,
    ACTIONS(2296), 1,
      aux_sym_create_materialized_view_token2,
  [18235] = 1,
    ACTIONS(2298), 1,
      aux_sym_insert_statement_token3,
  [18239] = 1,
    ACTIONS(2300), 1,
      aux_sym_relation_contains_key_token2,
  [18243] = 1,
    ACTIONS(2302), 1,
      aux_sym_relation_contains_key_token2,
  [18247] = 1,
    ACTIONS(2304), 1,
      anon_sym_RBRACE,
  [18251] = 1,
    ACTIONS(2306), 1,
      anon_sym_LPAREN,
  [18255] = 1,
    ACTIONS(2308), 1,
      anon_sym_RPAREN,
  [18259] = 1,
    ACTIONS(2310), 1,
      anon_sym_RPAREN,
  [18263] = 1,
    ACTIONS(2312), 1,
      aux_sym_create_materialized_view_token2,
  [18267] = 1,
    ACTIONS(2314), 1,
      anon_sym_LPAREN,
  [18271] = 1,
    ACTIONS(2316), 1,
      aux_sym_create_function_token2,
  [18275] = 1,
    ACTIONS(2318), 1,
      aux_sym_update_token2,
  [18279] = 1,
    ACTIONS(2320), 1,
      sym_code_block,
  [18283] = 1,
    ACTIONS(2322), 1,
      aux_sym_select_element_token1,
  [18287] = 1,
    ACTIONS(2324), 1,
      anon_sym_LPAREN,
  [18291] = 1,
    ACTIONS(2326), 1,
      anon_sym_RPAREN,
  [18295] = 1,
    ACTIONS(2328), 1,
      sym_code_block,
  [18299] = 1,
    ACTIONS(2330), 1,
      aux_sym_select_element_token1,
  [18303] = 1,
    ACTIONS(2332), 1,
      aux_sym_delete_statement_token3,
  [18307] = 1,
    ACTIONS(2334), 1,
      aux_sym_delete_statement_token3,
  [18311] = 1,
    ACTIONS(2336), 1,
      aux_sym_drop_index_token2,
  [18315] = 1,
    ACTIONS(2338), 1,
      aux_sym_create_aggregate_token6,
  [18319] = 1,
    ACTIONS(2340), 1,
      aux_sym_create_index_token3,
  [18323] = 1,
    ACTIONS(2342), 1,
      aux_sym_insert_statement_token2,
  [18327] = 1,
    ACTIONS(2344), 1,
      sym_code_block,
  [18331] = 1,
    ACTIONS(2346), 1,
      aux_sym_select_element_token1,
  [18335] = 1,
    ACTIONS(2348), 1,
      aux_sym_delete_statement_token3,
  [18339] = 1,
    ACTIONS(2350), 1,
      aux_sym_create_aggregate_token6,
  [18343] = 1,
    ACTIONS(2352), 1,
      aux_sym_delete_statement_token3,
  [18347] = 1,
    ACTIONS(2354), 1,
      aux_sym_delete_statement_token3,
  [18351] = 1,
    ACTIONS(2356), 1,
      anon_sym_EQ,
  [18355] = 1,
    ACTIONS(2358), 1,
      aux_sym_delete_statement_token3,
  [18359] = 1,
    ACTIONS(2360), 1,
      anon_sym_DOT,
  [18363] = 1,
    ACTIONS(2362), 1,
      aux_sym_create_aggregate_token3,
  [18367] = 1,
    ACTIONS(2364), 1,
      aux_sym_delete_statement_token3,
  [18371] = 1,
    ACTIONS(2366), 1,
      aux_sym_delete_statement_token3,
  [18375] = 1,
    ACTIONS(2368), 1,
      aux_sym_insert_statement_token3,
  [18379] = 1,
    ACTIONS(2370), 1,
      aux_sym_create_materialized_view_token1,
  [18383] = 1,
    ACTIONS(2372), 1,
      anon_sym_LPAREN,
  [18387] = 1,
    ACTIONS(2374), 1,
      anon_sym_LPAREN,
  [18391] = 1,
    ACTIONS(2376), 1,
      anon_sym_RPAREN,
  [18395] = 1,
    ACTIONS(2378), 1,
      aux_sym_delete_statement_token3,
  [18399] = 1,
    ACTIONS(2380), 1,
      aux_sym_create_materialized_view_token2,
  [18403] = 1,
    ACTIONS(2382), 1,
      aux_sym_insert_statement_token3,
  [18407] = 1,
    ACTIONS(2384), 1,
      aux_sym_create_function_token1,
  [18411] = 1,
    ACTIONS(2386), 1,
      aux_sym_insert_statement_token3,
  [18415] = 1,
    ACTIONS(2388), 1,
      aux_sym_select_statement_token5,
  [18419] = 1,
    ACTIONS(2390), 1,
      aux_sym_select_element_token1,
  [18423] = 1,
    ACTIONS(2392), 1,
      anon_sym_LPAREN,
  [18427] = 1,
    ACTIONS(2394), 1,
      aux_sym_create_function_token2,
  [18431] = 1,
    ACTIONS(2396), 1,
      aux_sym_insert_statement_token3,
  [18435] = 1,
    ACTIONS(2398), 1,
      sym_code_block,
  [18439] = 1,
    ACTIONS(2400), 1,
      aux_sym_select_element_token1,
  [18443] = 1,
    ACTIONS(2402), 1,
      aux_sym_insert_statement_token3,
  [18447] = 1,
    ACTIONS(2404), 1,
      sym_code_block,
  [18451] = 1,
    ACTIONS(2406), 1,
      aux_sym_create_aggregate_token5,
  [18455] = 1,
    ACTIONS(2408), 1,
      aux_sym_create_aggregate_token6,
  [18459] = 1,
    ACTIONS(2410), 1,
      aux_sym_insert_statement_token3,
  [18463] = 1,
    ACTIONS(2412), 1,
      aux_sym_insert_statement_token3,
  [18467] = 1,
    ACTIONS(2414), 1,
      sym_code_block,
  [18471] = 1,
    ACTIONS(2416), 1,
      aux_sym_delete_statement_token3,
  [18475] = 1,
    ACTIONS(2418), 1,
      aux_sym_relation_contains_key_token2,
  [18479] = 1,
    ACTIONS(2420), 1,
      aux_sym_insert_statement_token3,
  [18483] = 1,
    ACTIONS(2422), 1,
      aux_sym_create_materialized_view_token2,
  [18487] = 1,
    ACTIONS(2424), 1,
      aux_sym_insert_statement_token3,
  [18491] = 1,
    ACTIONS(2426), 1,
      anon_sym_RPAREN,
  [18495] = 1,
    ACTIONS(2428), 1,
      aux_sym_create_index_token3,
  [18499] = 1,
    ACTIONS(2430), 1,
      anon_sym_LPAREN,
  [18503] = 1,
    ACTIONS(2432), 1,
      anon_sym_LPAREN,
  [18507] = 1,
    ACTIONS(2434), 1,
      sym_code_block,
  [18511] = 1,
    ACTIONS(2436), 1,
      aux_sym_select_element_token1,
  [18515] = 1,
    ACTIONS(2438), 1,
      aux_sym_using_timestamp_spec_token1,
  [18519] = 1,
    ACTIONS(2440), 1,
      aux_sym_insert_statement_token3,
  [18523] = 1,
    ACTIONS(2442), 1,
      sym_code_block,
  [18527] = 1,
    ACTIONS(2444), 1,
      aux_sym_create_index_token3,
  [18531] = 1,
    ACTIONS(2446), 1,
      anon_sym_RPAREN,
  [18535] = 1,
    ACTIONS(2448), 1,
      aux_sym_select_statement_token1,
  [18539] = 1,
    ACTIONS(2450), 1,
      aux_sym_insert_statement_token3,
  [18543] = 1,
    ACTIONS(2452), 1,
      aux_sym_order_spec_token1,
  [18547] = 1,
    ACTIONS(2454), 1,
      anon_sym_RPAREN,
  [18551] = 1,
    ACTIONS(2456), 1,
      anon_sym_LPAREN,
  [18555] = 1,
    ACTIONS(2458), 1,
      anon_sym_RPAREN,
  [18559] = 1,
    ACTIONS(2460), 1,
      anon_sym_RPAREN,
  [18563] = 1,
    ACTIONS(2462), 1,
      aux_sym_create_aggregate_token4,
  [18567] = 1,
    ACTIONS(2464), 1,
      aux_sym_create_aggregate_token3,
  [18571] = 1,
    ACTIONS(2466), 1,
      anon_sym_STAR,
  [18575] = 1,
    ACTIONS(2468), 1,
      anon_sym_RPAREN,
  [18579] = 1,
    ACTIONS(2470), 1,
      anon_sym_LPAREN,
  [18583] = 1,
    ACTIONS(2472), 1,
      anon_sym_LPAREN,
  [18587] = 1,
    ACTIONS(2474), 1,
      sym_code_block,
  [18591] = 1,
    ACTIONS(2476), 1,
      aux_sym_select_element_token1,
  [18595] = 1,
    ACTIONS(2478), 1,
      aux_sym_insert_statement_token2,
  [18599] = 1,
    ACTIONS(2480), 1,
      aux_sym_create_aggregate_token6,
  [18603] = 1,
    ACTIONS(2482), 1,
      aux_sym_create_index_token3,
  [18607] = 1,
    ACTIONS(2484), 1,
      anon_sym_COLON,
  [18611] = 1,
    ACTIONS(2486), 1,
      aux_sym_create_function_token1,
  [18615] = 1,
    ACTIONS(2488), 1,
      aux_sym_drop_materialized_view_token2,
  [18619] = 1,
    ACTIONS(2490), 1,
      aux_sym_create_function_token2,
  [18623] = 1,
    ACTIONS(2492), 1,
      aux_sym_return_mode_token2,
  [18627] = 1,
    ACTIONS(2494), 1,
      aux_sym_constant_token1,
  [18631] = 1,
    ACTIONS(2496), 1,
      sym_code_block,
  [18635] = 1,
    ACTIONS(2498), 1,
      aux_sym_create_index_token3,
  [18639] = 1,
    ACTIONS(2500), 1,
      anon_sym_RPAREN,
  [18643] = 1,
    ACTIONS(2502), 1,
      aux_sym_drop_materialized_view_token2,
  [18647] = 1,
    ACTIONS(2504), 1,
      aux_sym_create_function_token1,
  [18651] = 1,
    ACTIONS(2506), 1,
      aux_sym_create_aggregate_token2,
  [18655] = 1,
    ACTIONS(2508), 1,
      aux_sym_drop_materialized_view_token2,
  [18659] = 1,
    ACTIONS(2510), 1,
      anon_sym_LPAREN,
  [18663] = 1,
    ACTIONS(2512), 1,
      anon_sym_RBRACE,
  [18667] = 1,
    ACTIONS(2514), 1,
      aux_sym_begin_batch_token4,
  [18671] = 1,
    ACTIONS(2516), 1,
      anon_sym_COLON,
  [18675] = 1,
    ACTIONS(2518), 1,
      anon_sym_GT,
  [18679] = 1,
    ACTIONS(2520), 1,
      anon_sym_RPAREN,
  [18683] = 1,
    ACTIONS(2522), 1,
      ts_builtin_sym_end,
  [18687] = 1,
    ACTIONS(2444), 1,
      aux_sym_drop_index_token2,
  [18691] = 1,
    ACTIONS(2524), 1,
      aux_sym_begin_batch_token4,
  [18695] = 1,
    ACTIONS(2526), 1,
      anon_sym_RPAREN,
  [18699] = 1,
    ACTIONS(33), 1,
      aux_sym_drop_index_token2,
  [18703] = 1,
    ACTIONS(2528), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 246,
  [SMALL_STATE(6)] = 283,
  [SMALL_STATE(7)] = 316,
  [SMALL_STATE(8)] = 356,
  [SMALL_STATE(9)] = 396,
  [SMALL_STATE(10)] = 436,
  [SMALL_STATE(11)] = 476,
  [SMALL_STATE(12)] = 516,
  [SMALL_STATE(13)] = 556,
  [SMALL_STATE(14)] = 596,
  [SMALL_STATE(15)] = 636,
  [SMALL_STATE(16)] = 676,
  [SMALL_STATE(17)] = 716,
  [SMALL_STATE(18)] = 756,
  [SMALL_STATE(19)] = 796,
  [SMALL_STATE(20)] = 836,
  [SMALL_STATE(21)] = 876,
  [SMALL_STATE(22)] = 916,
  [SMALL_STATE(23)] = 956,
  [SMALL_STATE(24)] = 996,
  [SMALL_STATE(25)] = 1036,
  [SMALL_STATE(26)] = 1076,
  [SMALL_STATE(27)] = 1116,
  [SMALL_STATE(28)] = 1156,
  [SMALL_STATE(29)] = 1196,
  [SMALL_STATE(30)] = 1236,
  [SMALL_STATE(31)] = 1276,
  [SMALL_STATE(32)] = 1316,
  [SMALL_STATE(33)] = 1356,
  [SMALL_STATE(34)] = 1396,
  [SMALL_STATE(35)] = 1436,
  [SMALL_STATE(36)] = 1476,
  [SMALL_STATE(37)] = 1516,
  [SMALL_STATE(38)] = 1556,
  [SMALL_STATE(39)] = 1596,
  [SMALL_STATE(40)] = 1636,
  [SMALL_STATE(41)] = 1676,
  [SMALL_STATE(42)] = 1716,
  [SMALL_STATE(43)] = 1756,
  [SMALL_STATE(44)] = 1796,
  [SMALL_STATE(45)] = 1836,
  [SMALL_STATE(46)] = 1876,
  [SMALL_STATE(47)] = 1916,
  [SMALL_STATE(48)] = 1956,
  [SMALL_STATE(49)] = 1996,
  [SMALL_STATE(50)] = 2036,
  [SMALL_STATE(51)] = 2076,
  [SMALL_STATE(52)] = 2116,
  [SMALL_STATE(53)] = 2156,
  [SMALL_STATE(54)] = 2196,
  [SMALL_STATE(55)] = 2236,
  [SMALL_STATE(56)] = 2276,
  [SMALL_STATE(57)] = 2316,
  [SMALL_STATE(58)] = 2356,
  [SMALL_STATE(59)] = 2393,
  [SMALL_STATE(60)] = 2430,
  [SMALL_STATE(61)] = 2459,
  [SMALL_STATE(62)] = 2491,
  [SMALL_STATE(63)] = 2518,
  [SMALL_STATE(64)] = 2549,
  [SMALL_STATE(65)] = 2576,
  [SMALL_STATE(66)] = 2603,
  [SMALL_STATE(67)] = 2630,
  [SMALL_STATE(68)] = 2661,
  [SMALL_STATE(69)] = 2692,
  [SMALL_STATE(70)] = 2723,
  [SMALL_STATE(71)] = 2763,
  [SMALL_STATE(72)] = 2803,
  [SMALL_STATE(73)] = 2843,
  [SMALL_STATE(74)] = 2885,
  [SMALL_STATE(75)] = 2915,
  [SMALL_STATE(76)] = 2941,
  [SMALL_STATE(77)] = 2966,
  [SMALL_STATE(78)] = 2995,
  [SMALL_STATE(79)] = 3020,
  [SMALL_STATE(80)] = 3047,
  [SMALL_STATE(81)] = 3072,
  [SMALL_STATE(82)] = 3101,
  [SMALL_STATE(83)] = 3126,
  [SMALL_STATE(84)] = 3151,
  [SMALL_STATE(85)] = 3176,
  [SMALL_STATE(86)] = 3201,
  [SMALL_STATE(87)] = 3226,
  [SMALL_STATE(88)] = 3255,
  [SMALL_STATE(89)] = 3280,
  [SMALL_STATE(90)] = 3305,
  [SMALL_STATE(91)] = 3333,
  [SMALL_STATE(92)] = 3357,
  [SMALL_STATE(93)] = 3381,
  [SMALL_STATE(94)] = 3405,
  [SMALL_STATE(95)] = 3439,
  [SMALL_STATE(96)] = 3473,
  [SMALL_STATE(97)] = 3507,
  [SMALL_STATE(98)] = 3531,
  [SMALL_STATE(99)] = 3555,
  [SMALL_STATE(100)] = 3579,
  [SMALL_STATE(101)] = 3604,
  [SMALL_STATE(102)] = 3629,
  [SMALL_STATE(103)] = 3656,
  [SMALL_STATE(104)] = 3681,
  [SMALL_STATE(105)] = 3704,
  [SMALL_STATE(106)] = 3729,
  [SMALL_STATE(107)] = 3751,
  [SMALL_STATE(108)] = 3773,
  [SMALL_STATE(109)] = 3795,
  [SMALL_STATE(110)] = 3817,
  [SMALL_STATE(111)] = 3845,
  [SMALL_STATE(112)] = 3867,
  [SMALL_STATE(113)] = 3889,
  [SMALL_STATE(114)] = 3917,
  [SMALL_STATE(115)] = 3945,
  [SMALL_STATE(116)] = 3973,
  [SMALL_STATE(117)] = 4001,
  [SMALL_STATE(118)] = 4029,
  [SMALL_STATE(119)] = 4055,
  [SMALL_STATE(120)] = 4077,
  [SMALL_STATE(121)] = 4103,
  [SMALL_STATE(122)] = 4129,
  [SMALL_STATE(123)] = 4155,
  [SMALL_STATE(124)] = 4183,
  [SMALL_STATE(125)] = 4205,
  [SMALL_STATE(126)] = 4233,
  [SMALL_STATE(127)] = 4257,
  [SMALL_STATE(128)] = 4285,
  [SMALL_STATE(129)] = 4311,
  [SMALL_STATE(130)] = 4333,
  [SMALL_STATE(131)] = 4361,
  [SMALL_STATE(132)] = 4383,
  [SMALL_STATE(133)] = 4411,
  [SMALL_STATE(134)] = 4433,
  [SMALL_STATE(135)] = 4455,
  [SMALL_STATE(136)] = 4483,
  [SMALL_STATE(137)] = 4509,
  [SMALL_STATE(138)] = 4530,
  [SMALL_STATE(139)] = 4555,
  [SMALL_STATE(140)] = 4580,
  [SMALL_STATE(141)] = 4605,
  [SMALL_STATE(142)] = 4630,
  [SMALL_STATE(143)] = 4655,
  [SMALL_STATE(144)] = 4690,
  [SMALL_STATE(145)] = 4711,
  [SMALL_STATE(146)] = 4736,
  [SMALL_STATE(147)] = 4761,
  [SMALL_STATE(148)] = 4786,
  [SMALL_STATE(149)] = 4807,
  [SMALL_STATE(150)] = 4832,
  [SMALL_STATE(151)] = 4857,
  [SMALL_STATE(152)] = 4878,
  [SMALL_STATE(153)] = 4903,
  [SMALL_STATE(154)] = 4928,
  [SMALL_STATE(155)] = 4949,
  [SMALL_STATE(156)] = 4970,
  [SMALL_STATE(157)] = 4991,
  [SMALL_STATE(158)] = 5016,
  [SMALL_STATE(159)] = 5037,
  [SMALL_STATE(160)] = 5058,
  [SMALL_STATE(161)] = 5083,
  [SMALL_STATE(162)] = 5108,
  [SMALL_STATE(163)] = 5133,
  [SMALL_STATE(164)] = 5158,
  [SMALL_STATE(165)] = 5179,
  [SMALL_STATE(166)] = 5200,
  [SMALL_STATE(167)] = 5225,
  [SMALL_STATE(168)] = 5250,
  [SMALL_STATE(169)] = 5275,
  [SMALL_STATE(170)] = 5300,
  [SMALL_STATE(171)] = 5325,
  [SMALL_STATE(172)] = 5346,
  [SMALL_STATE(173)] = 5367,
  [SMALL_STATE(174)] = 5388,
  [SMALL_STATE(175)] = 5413,
  [SMALL_STATE(176)] = 5438,
  [SMALL_STATE(177)] = 5459,
  [SMALL_STATE(178)] = 5484,
  [SMALL_STATE(179)] = 5509,
  [SMALL_STATE(180)] = 5534,
  [SMALL_STATE(181)] = 5559,
  [SMALL_STATE(182)] = 5584,
  [SMALL_STATE(183)] = 5609,
  [SMALL_STATE(184)] = 5634,
  [SMALL_STATE(185)] = 5655,
  [SMALL_STATE(186)] = 5680,
  [SMALL_STATE(187)] = 5705,
  [SMALL_STATE(188)] = 5730,
  [SMALL_STATE(189)] = 5751,
  [SMALL_STATE(190)] = 5776,
  [SMALL_STATE(191)] = 5801,
  [SMALL_STATE(192)] = 5826,
  [SMALL_STATE(193)] = 5851,
  [SMALL_STATE(194)] = 5872,
  [SMALL_STATE(195)] = 5895,
  [SMALL_STATE(196)] = 5920,
  [SMALL_STATE(197)] = 5945,
  [SMALL_STATE(198)] = 5970,
  [SMALL_STATE(199)] = 5995,
  [SMALL_STATE(200)] = 6020,
  [SMALL_STATE(201)] = 6043,
  [SMALL_STATE(202)] = 6068,
  [SMALL_STATE(203)] = 6093,
  [SMALL_STATE(204)] = 6118,
  [SMALL_STATE(205)] = 6143,
  [SMALL_STATE(206)] = 6168,
  [SMALL_STATE(207)] = 6191,
  [SMALL_STATE(208)] = 6214,
  [SMALL_STATE(209)] = 6239,
  [SMALL_STATE(210)] = 6264,
  [SMALL_STATE(211)] = 6289,
  [SMALL_STATE(212)] = 6311,
  [SMALL_STATE(213)] = 6333,
  [SMALL_STATE(214)] = 6355,
  [SMALL_STATE(215)] = 6375,
  [SMALL_STATE(216)] = 6397,
  [SMALL_STATE(217)] = 6419,
  [SMALL_STATE(218)] = 6441,
  [SMALL_STATE(219)] = 6461,
  [SMALL_STATE(220)] = 6483,
  [SMALL_STATE(221)] = 6505,
  [SMALL_STATE(222)] = 6527,
  [SMALL_STATE(223)] = 6549,
  [SMALL_STATE(224)] = 6571,
  [SMALL_STATE(225)] = 6593,
  [SMALL_STATE(226)] = 6615,
  [SMALL_STATE(227)] = 6637,
  [SMALL_STATE(228)] = 6657,
  [SMALL_STATE(229)] = 6679,
  [SMALL_STATE(230)] = 6699,
  [SMALL_STATE(231)] = 6721,
  [SMALL_STATE(232)] = 6743,
  [SMALL_STATE(233)] = 6765,
  [SMALL_STATE(234)] = 6787,
  [SMALL_STATE(235)] = 6809,
  [SMALL_STATE(236)] = 6831,
  [SMALL_STATE(237)] = 6853,
  [SMALL_STATE(238)] = 6875,
  [SMALL_STATE(239)] = 6897,
  [SMALL_STATE(240)] = 6919,
  [SMALL_STATE(241)] = 6941,
  [SMALL_STATE(242)] = 6963,
  [SMALL_STATE(243)] = 6985,
  [SMALL_STATE(244)] = 7007,
  [SMALL_STATE(245)] = 7027,
  [SMALL_STATE(246)] = 7049,
  [SMALL_STATE(247)] = 7069,
  [SMALL_STATE(248)] = 7091,
  [SMALL_STATE(249)] = 7123,
  [SMALL_STATE(250)] = 7145,
  [SMALL_STATE(251)] = 7167,
  [SMALL_STATE(252)] = 7187,
  [SMALL_STATE(253)] = 7209,
  [SMALL_STATE(254)] = 7231,
  [SMALL_STATE(255)] = 7253,
  [SMALL_STATE(256)] = 7273,
  [SMALL_STATE(257)] = 7295,
  [SMALL_STATE(258)] = 7317,
  [SMALL_STATE(259)] = 7337,
  [SMALL_STATE(260)] = 7356,
  [SMALL_STATE(261)] = 7375,
  [SMALL_STATE(262)] = 7394,
  [SMALL_STATE(263)] = 7413,
  [SMALL_STATE(264)] = 7432,
  [SMALL_STATE(265)] = 7451,
  [SMALL_STATE(266)] = 7470,
  [SMALL_STATE(267)] = 7489,
  [SMALL_STATE(268)] = 7508,
  [SMALL_STATE(269)] = 7527,
  [SMALL_STATE(270)] = 7546,
  [SMALL_STATE(271)] = 7565,
  [SMALL_STATE(272)] = 7584,
  [SMALL_STATE(273)] = 7603,
  [SMALL_STATE(274)] = 7622,
  [SMALL_STATE(275)] = 7641,
  [SMALL_STATE(276)] = 7660,
  [SMALL_STATE(277)] = 7679,
  [SMALL_STATE(278)] = 7698,
  [SMALL_STATE(279)] = 7717,
  [SMALL_STATE(280)] = 7736,
  [SMALL_STATE(281)] = 7755,
  [SMALL_STATE(282)] = 7774,
  [SMALL_STATE(283)] = 7793,
  [SMALL_STATE(284)] = 7812,
  [SMALL_STATE(285)] = 7831,
  [SMALL_STATE(286)] = 7850,
  [SMALL_STATE(287)] = 7869,
  [SMALL_STATE(288)] = 7888,
  [SMALL_STATE(289)] = 7907,
  [SMALL_STATE(290)] = 7926,
  [SMALL_STATE(291)] = 7945,
  [SMALL_STATE(292)] = 7964,
  [SMALL_STATE(293)] = 7983,
  [SMALL_STATE(294)] = 8002,
  [SMALL_STATE(295)] = 8021,
  [SMALL_STATE(296)] = 8040,
  [SMALL_STATE(297)] = 8059,
  [SMALL_STATE(298)] = 8078,
  [SMALL_STATE(299)] = 8099,
  [SMALL_STATE(300)] = 8118,
  [SMALL_STATE(301)] = 8137,
  [SMALL_STATE(302)] = 8156,
  [SMALL_STATE(303)] = 8175,
  [SMALL_STATE(304)] = 8194,
  [SMALL_STATE(305)] = 8213,
  [SMALL_STATE(306)] = 8232,
  [SMALL_STATE(307)] = 8251,
  [SMALL_STATE(308)] = 8270,
  [SMALL_STATE(309)] = 8289,
  [SMALL_STATE(310)] = 8308,
  [SMALL_STATE(311)] = 8327,
  [SMALL_STATE(312)] = 8346,
  [SMALL_STATE(313)] = 8365,
  [SMALL_STATE(314)] = 8384,
  [SMALL_STATE(315)] = 8403,
  [SMALL_STATE(316)] = 8422,
  [SMALL_STATE(317)] = 8441,
  [SMALL_STATE(318)] = 8460,
  [SMALL_STATE(319)] = 8479,
  [SMALL_STATE(320)] = 8498,
  [SMALL_STATE(321)] = 8517,
  [SMALL_STATE(322)] = 8536,
  [SMALL_STATE(323)] = 8555,
  [SMALL_STATE(324)] = 8574,
  [SMALL_STATE(325)] = 8593,
  [SMALL_STATE(326)] = 8612,
  [SMALL_STATE(327)] = 8631,
  [SMALL_STATE(328)] = 8650,
  [SMALL_STATE(329)] = 8669,
  [SMALL_STATE(330)] = 8688,
  [SMALL_STATE(331)] = 8707,
  [SMALL_STATE(332)] = 8726,
  [SMALL_STATE(333)] = 8745,
  [SMALL_STATE(334)] = 8764,
  [SMALL_STATE(335)] = 8783,
  [SMALL_STATE(336)] = 8802,
  [SMALL_STATE(337)] = 8821,
  [SMALL_STATE(338)] = 8840,
  [SMALL_STATE(339)] = 8859,
  [SMALL_STATE(340)] = 8878,
  [SMALL_STATE(341)] = 8897,
  [SMALL_STATE(342)] = 8916,
  [SMALL_STATE(343)] = 8935,
  [SMALL_STATE(344)] = 8954,
  [SMALL_STATE(345)] = 8973,
  [SMALL_STATE(346)] = 8992,
  [SMALL_STATE(347)] = 9011,
  [SMALL_STATE(348)] = 9030,
  [SMALL_STATE(349)] = 9049,
  [SMALL_STATE(350)] = 9068,
  [SMALL_STATE(351)] = 9087,
  [SMALL_STATE(352)] = 9106,
  [SMALL_STATE(353)] = 9125,
  [SMALL_STATE(354)] = 9144,
  [SMALL_STATE(355)] = 9163,
  [SMALL_STATE(356)] = 9182,
  [SMALL_STATE(357)] = 9201,
  [SMALL_STATE(358)] = 9220,
  [SMALL_STATE(359)] = 9239,
  [SMALL_STATE(360)] = 9258,
  [SMALL_STATE(361)] = 9277,
  [SMALL_STATE(362)] = 9296,
  [SMALL_STATE(363)] = 9315,
  [SMALL_STATE(364)] = 9334,
  [SMALL_STATE(365)] = 9353,
  [SMALL_STATE(366)] = 9372,
  [SMALL_STATE(367)] = 9391,
  [SMALL_STATE(368)] = 9410,
  [SMALL_STATE(369)] = 9429,
  [SMALL_STATE(370)] = 9448,
  [SMALL_STATE(371)] = 9467,
  [SMALL_STATE(372)] = 9486,
  [SMALL_STATE(373)] = 9505,
  [SMALL_STATE(374)] = 9524,
  [SMALL_STATE(375)] = 9543,
  [SMALL_STATE(376)] = 9562,
  [SMALL_STATE(377)] = 9581,
  [SMALL_STATE(378)] = 9600,
  [SMALL_STATE(379)] = 9619,
  [SMALL_STATE(380)] = 9638,
  [SMALL_STATE(381)] = 9657,
  [SMALL_STATE(382)] = 9676,
  [SMALL_STATE(383)] = 9695,
  [SMALL_STATE(384)] = 9714,
  [SMALL_STATE(385)] = 9733,
  [SMALL_STATE(386)] = 9752,
  [SMALL_STATE(387)] = 9771,
  [SMALL_STATE(388)] = 9790,
  [SMALL_STATE(389)] = 9809,
  [SMALL_STATE(390)] = 9828,
  [SMALL_STATE(391)] = 9847,
  [SMALL_STATE(392)] = 9866,
  [SMALL_STATE(393)] = 9885,
  [SMALL_STATE(394)] = 9904,
  [SMALL_STATE(395)] = 9923,
  [SMALL_STATE(396)] = 9956,
  [SMALL_STATE(397)] = 9975,
  [SMALL_STATE(398)] = 9994,
  [SMALL_STATE(399)] = 10013,
  [SMALL_STATE(400)] = 10032,
  [SMALL_STATE(401)] = 10051,
  [SMALL_STATE(402)] = 10070,
  [SMALL_STATE(403)] = 10089,
  [SMALL_STATE(404)] = 10108,
  [SMALL_STATE(405)] = 10127,
  [SMALL_STATE(406)] = 10146,
  [SMALL_STATE(407)] = 10165,
  [SMALL_STATE(408)] = 10184,
  [SMALL_STATE(409)] = 10203,
  [SMALL_STATE(410)] = 10222,
  [SMALL_STATE(411)] = 10241,
  [SMALL_STATE(412)] = 10260,
  [SMALL_STATE(413)] = 10279,
  [SMALL_STATE(414)] = 10298,
  [SMALL_STATE(415)] = 10317,
  [SMALL_STATE(416)] = 10336,
  [SMALL_STATE(417)] = 10355,
  [SMALL_STATE(418)] = 10374,
  [SMALL_STATE(419)] = 10393,
  [SMALL_STATE(420)] = 10412,
  [SMALL_STATE(421)] = 10431,
  [SMALL_STATE(422)] = 10450,
  [SMALL_STATE(423)] = 10469,
  [SMALL_STATE(424)] = 10488,
  [SMALL_STATE(425)] = 10507,
  [SMALL_STATE(426)] = 10526,
  [SMALL_STATE(427)] = 10545,
  [SMALL_STATE(428)] = 10564,
  [SMALL_STATE(429)] = 10583,
  [SMALL_STATE(430)] = 10602,
  [SMALL_STATE(431)] = 10621,
  [SMALL_STATE(432)] = 10640,
  [SMALL_STATE(433)] = 10659,
  [SMALL_STATE(434)] = 10677,
  [SMALL_STATE(435)] = 10702,
  [SMALL_STATE(436)] = 10727,
  [SMALL_STATE(437)] = 10752,
  [SMALL_STATE(438)] = 10777,
  [SMALL_STATE(439)] = 10808,
  [SMALL_STATE(440)] = 10833,
  [SMALL_STATE(441)] = 10858,
  [SMALL_STATE(442)] = 10883,
  [SMALL_STATE(443)] = 10908,
  [SMALL_STATE(444)] = 10937,
  [SMALL_STATE(445)] = 10962,
  [SMALL_STATE(446)] = 10988,
  [SMALL_STATE(447)] = 11011,
  [SMALL_STATE(448)] = 11034,
  [SMALL_STATE(449)] = 11056,
  [SMALL_STATE(450)] = 11076,
  [SMALL_STATE(451)] = 11096,
  [SMALL_STATE(452)] = 11130,
  [SMALL_STATE(453)] = 11156,
  [SMALL_STATE(454)] = 11175,
  [SMALL_STATE(455)] = 11198,
  [SMALL_STATE(456)] = 11215,
  [SMALL_STATE(457)] = 11238,
  [SMALL_STATE(458)] = 11255,
  [SMALL_STATE(459)] = 11286,
  [SMALL_STATE(460)] = 11305,
  [SMALL_STATE(461)] = 11329,
  [SMALL_STATE(462)] = 11345,
  [SMALL_STATE(463)] = 11361,
  [SMALL_STATE(464)] = 11385,
  [SMALL_STATE(465)] = 11409,
  [SMALL_STATE(466)] = 11425,
  [SMALL_STATE(467)] = 11449,
  [SMALL_STATE(468)] = 11473,
  [SMALL_STATE(469)] = 11489,
  [SMALL_STATE(470)] = 11513,
  [SMALL_STATE(471)] = 11529,
  [SMALL_STATE(472)] = 11545,
  [SMALL_STATE(473)] = 11561,
  [SMALL_STATE(474)] = 11577,
  [SMALL_STATE(475)] = 11593,
  [SMALL_STATE(476)] = 11617,
  [SMALL_STATE(477)] = 11641,
  [SMALL_STATE(478)] = 11657,
  [SMALL_STATE(479)] = 11673,
  [SMALL_STATE(480)] = 11689,
  [SMALL_STATE(481)] = 11705,
  [SMALL_STATE(482)] = 11730,
  [SMALL_STATE(483)] = 11753,
  [SMALL_STATE(484)] = 11778,
  [SMALL_STATE(485)] = 11799,
  [SMALL_STATE(486)] = 11824,
  [SMALL_STATE(487)] = 11849,
  [SMALL_STATE(488)] = 11874,
  [SMALL_STATE(489)] = 11899,
  [SMALL_STATE(490)] = 11924,
  [SMALL_STATE(491)] = 11949,
  [SMALL_STATE(492)] = 11974,
  [SMALL_STATE(493)] = 11999,
  [SMALL_STATE(494)] = 12024,
  [SMALL_STATE(495)] = 12049,
  [SMALL_STATE(496)] = 12069,
  [SMALL_STATE(497)] = 12091,
  [SMALL_STATE(498)] = 12105,
  [SMALL_STATE(499)] = 12119,
  [SMALL_STATE(500)] = 12139,
  [SMALL_STATE(501)] = 12157,
  [SMALL_STATE(502)] = 12176,
  [SMALL_STATE(503)] = 12193,
  [SMALL_STATE(504)] = 12212,
  [SMALL_STATE(505)] = 12227,
  [SMALL_STATE(506)] = 12238,
  [SMALL_STATE(507)] = 12257,
  [SMALL_STATE(508)] = 12276,
  [SMALL_STATE(509)] = 12295,
  [SMALL_STATE(510)] = 12306,
  [SMALL_STATE(511)] = 12325,
  [SMALL_STATE(512)] = 12344,
  [SMALL_STATE(513)] = 12363,
  [SMALL_STATE(514)] = 12382,
  [SMALL_STATE(515)] = 12398,
  [SMALL_STATE(516)] = 12414,
  [SMALL_STATE(517)] = 12430,
  [SMALL_STATE(518)] = 12444,
  [SMALL_STATE(519)] = 12460,
  [SMALL_STATE(520)] = 12474,
  [SMALL_STATE(521)] = 12490,
  [SMALL_STATE(522)] = 12502,
  [SMALL_STATE(523)] = 12510,
  [SMALL_STATE(524)] = 12526,
  [SMALL_STATE(525)] = 12534,
  [SMALL_STATE(526)] = 12550,
  [SMALL_STATE(527)] = 12566,
  [SMALL_STATE(528)] = 12574,
  [SMALL_STATE(529)] = 12590,
  [SMALL_STATE(530)] = 12598,
  [SMALL_STATE(531)] = 12614,
  [SMALL_STATE(532)] = 12630,
  [SMALL_STATE(533)] = 12638,
  [SMALL_STATE(534)] = 12646,
  [SMALL_STATE(535)] = 12662,
  [SMALL_STATE(536)] = 12678,
  [SMALL_STATE(537)] = 12690,
  [SMALL_STATE(538)] = 12706,
  [SMALL_STATE(539)] = 12722,
  [SMALL_STATE(540)] = 12738,
  [SMALL_STATE(541)] = 12754,
  [SMALL_STATE(542)] = 12766,
  [SMALL_STATE(543)] = 12782,
  [SMALL_STATE(544)] = 12794,
  [SMALL_STATE(545)] = 12810,
  [SMALL_STATE(546)] = 12826,
  [SMALL_STATE(547)] = 12840,
  [SMALL_STATE(548)] = 12856,
  [SMALL_STATE(549)] = 12872,
  [SMALL_STATE(550)] = 12880,
  [SMALL_STATE(551)] = 12896,
  [SMALL_STATE(552)] = 12912,
  [SMALL_STATE(553)] = 12925,
  [SMALL_STATE(554)] = 12938,
  [SMALL_STATE(555)] = 12949,
  [SMALL_STATE(556)] = 12962,
  [SMALL_STATE(557)] = 12969,
  [SMALL_STATE(558)] = 12978,
  [SMALL_STATE(559)] = 12991,
  [SMALL_STATE(560)] = 13004,
  [SMALL_STATE(561)] = 13017,
  [SMALL_STATE(562)] = 13030,
  [SMALL_STATE(563)] = 13043,
  [SMALL_STATE(564)] = 13056,
  [SMALL_STATE(565)] = 13069,
  [SMALL_STATE(566)] = 13082,
  [SMALL_STATE(567)] = 13095,
  [SMALL_STATE(568)] = 13108,
  [SMALL_STATE(569)] = 13121,
  [SMALL_STATE(570)] = 13134,
  [SMALL_STATE(571)] = 13147,
  [SMALL_STATE(572)] = 13160,
  [SMALL_STATE(573)] = 13173,
  [SMALL_STATE(574)] = 13186,
  [SMALL_STATE(575)] = 13193,
  [SMALL_STATE(576)] = 13206,
  [SMALL_STATE(577)] = 13219,
  [SMALL_STATE(578)] = 13232,
  [SMALL_STATE(579)] = 13245,
  [SMALL_STATE(580)] = 13258,
  [SMALL_STATE(581)] = 13269,
  [SMALL_STATE(582)] = 13282,
  [SMALL_STATE(583)] = 13295,
  [SMALL_STATE(584)] = 13308,
  [SMALL_STATE(585)] = 13321,
  [SMALL_STATE(586)] = 13334,
  [SMALL_STATE(587)] = 13347,
  [SMALL_STATE(588)] = 13360,
  [SMALL_STATE(589)] = 13373,
  [SMALL_STATE(590)] = 13386,
  [SMALL_STATE(591)] = 13397,
  [SMALL_STATE(592)] = 13410,
  [SMALL_STATE(593)] = 13423,
  [SMALL_STATE(594)] = 13436,
  [SMALL_STATE(595)] = 13449,
  [SMALL_STATE(596)] = 13462,
  [SMALL_STATE(597)] = 13475,
  [SMALL_STATE(598)] = 13486,
  [SMALL_STATE(599)] = 13499,
  [SMALL_STATE(600)] = 13512,
  [SMALL_STATE(601)] = 13525,
  [SMALL_STATE(602)] = 13538,
  [SMALL_STATE(603)] = 13546,
  [SMALL_STATE(604)] = 13552,
  [SMALL_STATE(605)] = 13562,
  [SMALL_STATE(606)] = 13572,
  [SMALL_STATE(607)] = 13582,
  [SMALL_STATE(608)] = 13592,
  [SMALL_STATE(609)] = 13600,
  [SMALL_STATE(610)] = 13610,
  [SMALL_STATE(611)] = 13620,
  [SMALL_STATE(612)] = 13630,
  [SMALL_STATE(613)] = 13640,
  [SMALL_STATE(614)] = 13650,
  [SMALL_STATE(615)] = 13660,
  [SMALL_STATE(616)] = 13670,
  [SMALL_STATE(617)] = 13680,
  [SMALL_STATE(618)] = 13690,
  [SMALL_STATE(619)] = 13700,
  [SMALL_STATE(620)] = 13710,
  [SMALL_STATE(621)] = 13720,
  [SMALL_STATE(622)] = 13730,
  [SMALL_STATE(623)] = 13738,
  [SMALL_STATE(624)] = 13748,
  [SMALL_STATE(625)] = 13758,
  [SMALL_STATE(626)] = 13768,
  [SMALL_STATE(627)] = 13778,
  [SMALL_STATE(628)] = 13788,
  [SMALL_STATE(629)] = 13798,
  [SMALL_STATE(630)] = 13808,
  [SMALL_STATE(631)] = 13818,
  [SMALL_STATE(632)] = 13828,
  [SMALL_STATE(633)] = 13838,
  [SMALL_STATE(634)] = 13848,
  [SMALL_STATE(635)] = 13858,
  [SMALL_STATE(636)] = 13868,
  [SMALL_STATE(637)] = 13878,
  [SMALL_STATE(638)] = 13888,
  [SMALL_STATE(639)] = 13898,
  [SMALL_STATE(640)] = 13908,
  [SMALL_STATE(641)] = 13918,
  [SMALL_STATE(642)] = 13928,
  [SMALL_STATE(643)] = 13938,
  [SMALL_STATE(644)] = 13948,
  [SMALL_STATE(645)] = 13958,
  [SMALL_STATE(646)] = 13968,
  [SMALL_STATE(647)] = 13978,
  [SMALL_STATE(648)] = 13988,
  [SMALL_STATE(649)] = 13998,
  [SMALL_STATE(650)] = 14008,
  [SMALL_STATE(651)] = 14018,
  [SMALL_STATE(652)] = 14028,
  [SMALL_STATE(653)] = 14038,
  [SMALL_STATE(654)] = 14048,
  [SMALL_STATE(655)] = 14058,
  [SMALL_STATE(656)] = 14068,
  [SMALL_STATE(657)] = 14078,
  [SMALL_STATE(658)] = 14088,
  [SMALL_STATE(659)] = 14098,
  [SMALL_STATE(660)] = 14108,
  [SMALL_STATE(661)] = 14118,
  [SMALL_STATE(662)] = 14128,
  [SMALL_STATE(663)] = 14138,
  [SMALL_STATE(664)] = 14148,
  [SMALL_STATE(665)] = 14158,
  [SMALL_STATE(666)] = 14168,
  [SMALL_STATE(667)] = 14178,
  [SMALL_STATE(668)] = 14188,
  [SMALL_STATE(669)] = 14198,
  [SMALL_STATE(670)] = 14208,
  [SMALL_STATE(671)] = 14218,
  [SMALL_STATE(672)] = 14228,
  [SMALL_STATE(673)] = 14238,
  [SMALL_STATE(674)] = 14246,
  [SMALL_STATE(675)] = 14256,
  [SMALL_STATE(676)] = 14266,
  [SMALL_STATE(677)] = 14276,
  [SMALL_STATE(678)] = 14286,
  [SMALL_STATE(679)] = 14296,
  [SMALL_STATE(680)] = 14306,
  [SMALL_STATE(681)] = 14316,
  [SMALL_STATE(682)] = 14326,
  [SMALL_STATE(683)] = 14336,
  [SMALL_STATE(684)] = 14346,
  [SMALL_STATE(685)] = 14356,
  [SMALL_STATE(686)] = 14366,
  [SMALL_STATE(687)] = 14376,
  [SMALL_STATE(688)] = 14386,
  [SMALL_STATE(689)] = 14396,
  [SMALL_STATE(690)] = 14406,
  [SMALL_STATE(691)] = 14416,
  [SMALL_STATE(692)] = 14426,
  [SMALL_STATE(693)] = 14436,
  [SMALL_STATE(694)] = 14446,
  [SMALL_STATE(695)] = 14456,
  [SMALL_STATE(696)] = 14466,
  [SMALL_STATE(697)] = 14476,
  [SMALL_STATE(698)] = 14486,
  [SMALL_STATE(699)] = 14496,
  [SMALL_STATE(700)] = 14506,
  [SMALL_STATE(701)] = 14516,
  [SMALL_STATE(702)] = 14526,
  [SMALL_STATE(703)] = 14536,
  [SMALL_STATE(704)] = 14546,
  [SMALL_STATE(705)] = 14556,
  [SMALL_STATE(706)] = 14566,
  [SMALL_STATE(707)] = 14576,
  [SMALL_STATE(708)] = 14586,
  [SMALL_STATE(709)] = 14596,
  [SMALL_STATE(710)] = 14606,
  [SMALL_STATE(711)] = 14616,
  [SMALL_STATE(712)] = 14626,
  [SMALL_STATE(713)] = 14636,
  [SMALL_STATE(714)] = 14646,
  [SMALL_STATE(715)] = 14654,
  [SMALL_STATE(716)] = 14664,
  [SMALL_STATE(717)] = 14674,
  [SMALL_STATE(718)] = 14684,
  [SMALL_STATE(719)] = 14694,
  [SMALL_STATE(720)] = 14704,
  [SMALL_STATE(721)] = 14714,
  [SMALL_STATE(722)] = 14724,
  [SMALL_STATE(723)] = 14734,
  [SMALL_STATE(724)] = 14744,
  [SMALL_STATE(725)] = 14750,
  [SMALL_STATE(726)] = 14760,
  [SMALL_STATE(727)] = 14770,
  [SMALL_STATE(728)] = 14780,
  [SMALL_STATE(729)] = 14790,
  [SMALL_STATE(730)] = 14800,
  [SMALL_STATE(731)] = 14810,
  [SMALL_STATE(732)] = 14820,
  [SMALL_STATE(733)] = 14830,
  [SMALL_STATE(734)] = 14840,
  [SMALL_STATE(735)] = 14850,
  [SMALL_STATE(736)] = 14860,
  [SMALL_STATE(737)] = 14870,
  [SMALL_STATE(738)] = 14880,
  [SMALL_STATE(739)] = 14890,
  [SMALL_STATE(740)] = 14900,
  [SMALL_STATE(741)] = 14910,
  [SMALL_STATE(742)] = 14920,
  [SMALL_STATE(743)] = 14930,
  [SMALL_STATE(744)] = 14940,
  [SMALL_STATE(745)] = 14950,
  [SMALL_STATE(746)] = 14960,
  [SMALL_STATE(747)] = 14970,
  [SMALL_STATE(748)] = 14980,
  [SMALL_STATE(749)] = 14990,
  [SMALL_STATE(750)] = 15000,
  [SMALL_STATE(751)] = 15010,
  [SMALL_STATE(752)] = 15020,
  [SMALL_STATE(753)] = 15030,
  [SMALL_STATE(754)] = 15040,
  [SMALL_STATE(755)] = 15050,
  [SMALL_STATE(756)] = 15060,
  [SMALL_STATE(757)] = 15070,
  [SMALL_STATE(758)] = 15080,
  [SMALL_STATE(759)] = 15090,
  [SMALL_STATE(760)] = 15100,
  [SMALL_STATE(761)] = 15110,
  [SMALL_STATE(762)] = 15120,
  [SMALL_STATE(763)] = 15130,
  [SMALL_STATE(764)] = 15140,
  [SMALL_STATE(765)] = 15150,
  [SMALL_STATE(766)] = 15160,
  [SMALL_STATE(767)] = 15170,
  [SMALL_STATE(768)] = 15180,
  [SMALL_STATE(769)] = 15190,
  [SMALL_STATE(770)] = 15200,
  [SMALL_STATE(771)] = 15208,
  [SMALL_STATE(772)] = 15218,
  [SMALL_STATE(773)] = 15228,
  [SMALL_STATE(774)] = 15238,
  [SMALL_STATE(775)] = 15246,
  [SMALL_STATE(776)] = 15256,
  [SMALL_STATE(777)] = 15266,
  [SMALL_STATE(778)] = 15276,
  [SMALL_STATE(779)] = 15286,
  [SMALL_STATE(780)] = 15296,
  [SMALL_STATE(781)] = 15306,
  [SMALL_STATE(782)] = 15316,
  [SMALL_STATE(783)] = 15326,
  [SMALL_STATE(784)] = 15336,
  [SMALL_STATE(785)] = 15346,
  [SMALL_STATE(786)] = 15353,
  [SMALL_STATE(787)] = 15360,
  [SMALL_STATE(788)] = 15367,
  [SMALL_STATE(789)] = 15374,
  [SMALL_STATE(790)] = 15381,
  [SMALL_STATE(791)] = 15388,
  [SMALL_STATE(792)] = 15395,
  [SMALL_STATE(793)] = 15402,
  [SMALL_STATE(794)] = 15409,
  [SMALL_STATE(795)] = 15416,
  [SMALL_STATE(796)] = 15423,
  [SMALL_STATE(797)] = 15430,
  [SMALL_STATE(798)] = 15437,
  [SMALL_STATE(799)] = 15444,
  [SMALL_STATE(800)] = 15451,
  [SMALL_STATE(801)] = 15458,
  [SMALL_STATE(802)] = 15465,
  [SMALL_STATE(803)] = 15472,
  [SMALL_STATE(804)] = 15479,
  [SMALL_STATE(805)] = 15486,
  [SMALL_STATE(806)] = 15493,
  [SMALL_STATE(807)] = 15500,
  [SMALL_STATE(808)] = 15505,
  [SMALL_STATE(809)] = 15512,
  [SMALL_STATE(810)] = 15519,
  [SMALL_STATE(811)] = 15526,
  [SMALL_STATE(812)] = 15533,
  [SMALL_STATE(813)] = 15540,
  [SMALL_STATE(814)] = 15547,
  [SMALL_STATE(815)] = 15554,
  [SMALL_STATE(816)] = 15561,
  [SMALL_STATE(817)] = 15568,
  [SMALL_STATE(818)] = 15575,
  [SMALL_STATE(819)] = 15580,
  [SMALL_STATE(820)] = 15587,
  [SMALL_STATE(821)] = 15594,
  [SMALL_STATE(822)] = 15601,
  [SMALL_STATE(823)] = 15608,
  [SMALL_STATE(824)] = 15615,
  [SMALL_STATE(825)] = 15622,
  [SMALL_STATE(826)] = 15629,
  [SMALL_STATE(827)] = 15636,
  [SMALL_STATE(828)] = 15641,
  [SMALL_STATE(829)] = 15646,
  [SMALL_STATE(830)] = 15653,
  [SMALL_STATE(831)] = 15660,
  [SMALL_STATE(832)] = 15665,
  [SMALL_STATE(833)] = 15672,
  [SMALL_STATE(834)] = 15679,
  [SMALL_STATE(835)] = 15686,
  [SMALL_STATE(836)] = 15693,
  [SMALL_STATE(837)] = 15700,
  [SMALL_STATE(838)] = 15707,
  [SMALL_STATE(839)] = 15714,
  [SMALL_STATE(840)] = 15721,
  [SMALL_STATE(841)] = 15728,
  [SMALL_STATE(842)] = 15735,
  [SMALL_STATE(843)] = 15740,
  [SMALL_STATE(844)] = 15747,
  [SMALL_STATE(845)] = 15754,
  [SMALL_STATE(846)] = 15761,
  [SMALL_STATE(847)] = 15768,
  [SMALL_STATE(848)] = 15775,
  [SMALL_STATE(849)] = 15782,
  [SMALL_STATE(850)] = 15789,
  [SMALL_STATE(851)] = 15796,
  [SMALL_STATE(852)] = 15803,
  [SMALL_STATE(853)] = 15810,
  [SMALL_STATE(854)] = 15817,
  [SMALL_STATE(855)] = 15824,
  [SMALL_STATE(856)] = 15831,
  [SMALL_STATE(857)] = 15838,
  [SMALL_STATE(858)] = 15845,
  [SMALL_STATE(859)] = 15852,
  [SMALL_STATE(860)] = 15859,
  [SMALL_STATE(861)] = 15866,
  [SMALL_STATE(862)] = 15873,
  [SMALL_STATE(863)] = 15880,
  [SMALL_STATE(864)] = 15885,
  [SMALL_STATE(865)] = 15892,
  [SMALL_STATE(866)] = 15897,
  [SMALL_STATE(867)] = 15902,
  [SMALL_STATE(868)] = 15909,
  [SMALL_STATE(869)] = 15916,
  [SMALL_STATE(870)] = 15923,
  [SMALL_STATE(871)] = 15930,
  [SMALL_STATE(872)] = 15937,
  [SMALL_STATE(873)] = 15944,
  [SMALL_STATE(874)] = 15951,
  [SMALL_STATE(875)] = 15958,
  [SMALL_STATE(876)] = 15963,
  [SMALL_STATE(877)] = 15970,
  [SMALL_STATE(878)] = 15977,
  [SMALL_STATE(879)] = 15984,
  [SMALL_STATE(880)] = 15991,
  [SMALL_STATE(881)] = 15996,
  [SMALL_STATE(882)] = 16003,
  [SMALL_STATE(883)] = 16010,
  [SMALL_STATE(884)] = 16015,
  [SMALL_STATE(885)] = 16020,
  [SMALL_STATE(886)] = 16027,
  [SMALL_STATE(887)] = 16034,
  [SMALL_STATE(888)] = 16041,
  [SMALL_STATE(889)] = 16048,
  [SMALL_STATE(890)] = 16055,
  [SMALL_STATE(891)] = 16062,
  [SMALL_STATE(892)] = 16069,
  [SMALL_STATE(893)] = 16076,
  [SMALL_STATE(894)] = 16083,
  [SMALL_STATE(895)] = 16090,
  [SMALL_STATE(896)] = 16097,
  [SMALL_STATE(897)] = 16104,
  [SMALL_STATE(898)] = 16109,
  [SMALL_STATE(899)] = 16116,
  [SMALL_STATE(900)] = 16123,
  [SMALL_STATE(901)] = 16128,
  [SMALL_STATE(902)] = 16135,
  [SMALL_STATE(903)] = 16142,
  [SMALL_STATE(904)] = 16149,
  [SMALL_STATE(905)] = 16154,
  [SMALL_STATE(906)] = 16161,
  [SMALL_STATE(907)] = 16168,
  [SMALL_STATE(908)] = 16175,
  [SMALL_STATE(909)] = 16182,
  [SMALL_STATE(910)] = 16189,
  [SMALL_STATE(911)] = 16196,
  [SMALL_STATE(912)] = 16203,
  [SMALL_STATE(913)] = 16210,
  [SMALL_STATE(914)] = 16215,
  [SMALL_STATE(915)] = 16222,
  [SMALL_STATE(916)] = 16229,
  [SMALL_STATE(917)] = 16236,
  [SMALL_STATE(918)] = 16243,
  [SMALL_STATE(919)] = 16250,
  [SMALL_STATE(920)] = 16257,
  [SMALL_STATE(921)] = 16264,
  [SMALL_STATE(922)] = 16269,
  [SMALL_STATE(923)] = 16276,
  [SMALL_STATE(924)] = 16283,
  [SMALL_STATE(925)] = 16290,
  [SMALL_STATE(926)] = 16297,
  [SMALL_STATE(927)] = 16304,
  [SMALL_STATE(928)] = 16309,
  [SMALL_STATE(929)] = 16316,
  [SMALL_STATE(930)] = 16323,
  [SMALL_STATE(931)] = 16330,
  [SMALL_STATE(932)] = 16335,
  [SMALL_STATE(933)] = 16342,
  [SMALL_STATE(934)] = 16347,
  [SMALL_STATE(935)] = 16354,
  [SMALL_STATE(936)] = 16361,
  [SMALL_STATE(937)] = 16368,
  [SMALL_STATE(938)] = 16375,
  [SMALL_STATE(939)] = 16382,
  [SMALL_STATE(940)] = 16389,
  [SMALL_STATE(941)] = 16396,
  [SMALL_STATE(942)] = 16403,
  [SMALL_STATE(943)] = 16410,
  [SMALL_STATE(944)] = 16417,
  [SMALL_STATE(945)] = 16424,
  [SMALL_STATE(946)] = 16431,
  [SMALL_STATE(947)] = 16438,
  [SMALL_STATE(948)] = 16445,
  [SMALL_STATE(949)] = 16452,
  [SMALL_STATE(950)] = 16459,
  [SMALL_STATE(951)] = 16466,
  [SMALL_STATE(952)] = 16471,
  [SMALL_STATE(953)] = 16476,
  [SMALL_STATE(954)] = 16483,
  [SMALL_STATE(955)] = 16490,
  [SMALL_STATE(956)] = 16497,
  [SMALL_STATE(957)] = 16504,
  [SMALL_STATE(958)] = 16511,
  [SMALL_STATE(959)] = 16518,
  [SMALL_STATE(960)] = 16525,
  [SMALL_STATE(961)] = 16532,
  [SMALL_STATE(962)] = 16539,
  [SMALL_STATE(963)] = 16546,
  [SMALL_STATE(964)] = 16553,
  [SMALL_STATE(965)] = 16560,
  [SMALL_STATE(966)] = 16567,
  [SMALL_STATE(967)] = 16572,
  [SMALL_STATE(968)] = 16579,
  [SMALL_STATE(969)] = 16586,
  [SMALL_STATE(970)] = 16593,
  [SMALL_STATE(971)] = 16600,
  [SMALL_STATE(972)] = 16607,
  [SMALL_STATE(973)] = 16614,
  [SMALL_STATE(974)] = 16621,
  [SMALL_STATE(975)] = 16628,
  [SMALL_STATE(976)] = 16635,
  [SMALL_STATE(977)] = 16640,
  [SMALL_STATE(978)] = 16647,
  [SMALL_STATE(979)] = 16654,
  [SMALL_STATE(980)] = 16661,
  [SMALL_STATE(981)] = 16668,
  [SMALL_STATE(982)] = 16675,
  [SMALL_STATE(983)] = 16682,
  [SMALL_STATE(984)] = 16689,
  [SMALL_STATE(985)] = 16696,
  [SMALL_STATE(986)] = 16703,
  [SMALL_STATE(987)] = 16710,
  [SMALL_STATE(988)] = 16717,
  [SMALL_STATE(989)] = 16724,
  [SMALL_STATE(990)] = 16731,
  [SMALL_STATE(991)] = 16738,
  [SMALL_STATE(992)] = 16743,
  [SMALL_STATE(993)] = 16748,
  [SMALL_STATE(994)] = 16755,
  [SMALL_STATE(995)] = 16762,
  [SMALL_STATE(996)] = 16769,
  [SMALL_STATE(997)] = 16776,
  [SMALL_STATE(998)] = 16781,
  [SMALL_STATE(999)] = 16788,
  [SMALL_STATE(1000)] = 16795,
  [SMALL_STATE(1001)] = 16802,
  [SMALL_STATE(1002)] = 16807,
  [SMALL_STATE(1003)] = 16814,
  [SMALL_STATE(1004)] = 16821,
  [SMALL_STATE(1005)] = 16828,
  [SMALL_STATE(1006)] = 16835,
  [SMALL_STATE(1007)] = 16842,
  [SMALL_STATE(1008)] = 16849,
  [SMALL_STATE(1009)] = 16854,
  [SMALL_STATE(1010)] = 16861,
  [SMALL_STATE(1011)] = 16868,
  [SMALL_STATE(1012)] = 16875,
  [SMALL_STATE(1013)] = 16882,
  [SMALL_STATE(1014)] = 16887,
  [SMALL_STATE(1015)] = 16894,
  [SMALL_STATE(1016)] = 16899,
  [SMALL_STATE(1017)] = 16906,
  [SMALL_STATE(1018)] = 16913,
  [SMALL_STATE(1019)] = 16920,
  [SMALL_STATE(1020)] = 16925,
  [SMALL_STATE(1021)] = 16932,
  [SMALL_STATE(1022)] = 16939,
  [SMALL_STATE(1023)] = 16946,
  [SMALL_STATE(1024)] = 16953,
  [SMALL_STATE(1025)] = 16960,
  [SMALL_STATE(1026)] = 16967,
  [SMALL_STATE(1027)] = 16974,
  [SMALL_STATE(1028)] = 16981,
  [SMALL_STATE(1029)] = 16988,
  [SMALL_STATE(1030)] = 16995,
  [SMALL_STATE(1031)] = 17002,
  [SMALL_STATE(1032)] = 17009,
  [SMALL_STATE(1033)] = 17016,
  [SMALL_STATE(1034)] = 17023,
  [SMALL_STATE(1035)] = 17030,
  [SMALL_STATE(1036)] = 17037,
  [SMALL_STATE(1037)] = 17044,
  [SMALL_STATE(1038)] = 17051,
  [SMALL_STATE(1039)] = 17056,
  [SMALL_STATE(1040)] = 17063,
  [SMALL_STATE(1041)] = 17070,
  [SMALL_STATE(1042)] = 17077,
  [SMALL_STATE(1043)] = 17084,
  [SMALL_STATE(1044)] = 17091,
  [SMALL_STATE(1045)] = 17098,
  [SMALL_STATE(1046)] = 17105,
  [SMALL_STATE(1047)] = 17112,
  [SMALL_STATE(1048)] = 17119,
  [SMALL_STATE(1049)] = 17126,
  [SMALL_STATE(1050)] = 17133,
  [SMALL_STATE(1051)] = 17140,
  [SMALL_STATE(1052)] = 17147,
  [SMALL_STATE(1053)] = 17151,
  [SMALL_STATE(1054)] = 17155,
  [SMALL_STATE(1055)] = 17159,
  [SMALL_STATE(1056)] = 17163,
  [SMALL_STATE(1057)] = 17167,
  [SMALL_STATE(1058)] = 17171,
  [SMALL_STATE(1059)] = 17175,
  [SMALL_STATE(1060)] = 17179,
  [SMALL_STATE(1061)] = 17183,
  [SMALL_STATE(1062)] = 17187,
  [SMALL_STATE(1063)] = 17191,
  [SMALL_STATE(1064)] = 17195,
  [SMALL_STATE(1065)] = 17199,
  [SMALL_STATE(1066)] = 17203,
  [SMALL_STATE(1067)] = 17207,
  [SMALL_STATE(1068)] = 17211,
  [SMALL_STATE(1069)] = 17215,
  [SMALL_STATE(1070)] = 17219,
  [SMALL_STATE(1071)] = 17223,
  [SMALL_STATE(1072)] = 17227,
  [SMALL_STATE(1073)] = 17231,
  [SMALL_STATE(1074)] = 17235,
  [SMALL_STATE(1075)] = 17239,
  [SMALL_STATE(1076)] = 17243,
  [SMALL_STATE(1077)] = 17247,
  [SMALL_STATE(1078)] = 17251,
  [SMALL_STATE(1079)] = 17255,
  [SMALL_STATE(1080)] = 17259,
  [SMALL_STATE(1081)] = 17263,
  [SMALL_STATE(1082)] = 17267,
  [SMALL_STATE(1083)] = 17271,
  [SMALL_STATE(1084)] = 17275,
  [SMALL_STATE(1085)] = 17279,
  [SMALL_STATE(1086)] = 17283,
  [SMALL_STATE(1087)] = 17287,
  [SMALL_STATE(1088)] = 17291,
  [SMALL_STATE(1089)] = 17295,
  [SMALL_STATE(1090)] = 17299,
  [SMALL_STATE(1091)] = 17303,
  [SMALL_STATE(1092)] = 17307,
  [SMALL_STATE(1093)] = 17311,
  [SMALL_STATE(1094)] = 17315,
  [SMALL_STATE(1095)] = 17319,
  [SMALL_STATE(1096)] = 17323,
  [SMALL_STATE(1097)] = 17327,
  [SMALL_STATE(1098)] = 17331,
  [SMALL_STATE(1099)] = 17335,
  [SMALL_STATE(1100)] = 17339,
  [SMALL_STATE(1101)] = 17343,
  [SMALL_STATE(1102)] = 17347,
  [SMALL_STATE(1103)] = 17351,
  [SMALL_STATE(1104)] = 17355,
  [SMALL_STATE(1105)] = 17359,
  [SMALL_STATE(1106)] = 17363,
  [SMALL_STATE(1107)] = 17367,
  [SMALL_STATE(1108)] = 17371,
  [SMALL_STATE(1109)] = 17375,
  [SMALL_STATE(1110)] = 17379,
  [SMALL_STATE(1111)] = 17383,
  [SMALL_STATE(1112)] = 17387,
  [SMALL_STATE(1113)] = 17391,
  [SMALL_STATE(1114)] = 17395,
  [SMALL_STATE(1115)] = 17399,
  [SMALL_STATE(1116)] = 17403,
  [SMALL_STATE(1117)] = 17407,
  [SMALL_STATE(1118)] = 17411,
  [SMALL_STATE(1119)] = 17415,
  [SMALL_STATE(1120)] = 17419,
  [SMALL_STATE(1121)] = 17423,
  [SMALL_STATE(1122)] = 17427,
  [SMALL_STATE(1123)] = 17431,
  [SMALL_STATE(1124)] = 17435,
  [SMALL_STATE(1125)] = 17439,
  [SMALL_STATE(1126)] = 17443,
  [SMALL_STATE(1127)] = 17447,
  [SMALL_STATE(1128)] = 17451,
  [SMALL_STATE(1129)] = 17455,
  [SMALL_STATE(1130)] = 17459,
  [SMALL_STATE(1131)] = 17463,
  [SMALL_STATE(1132)] = 17467,
  [SMALL_STATE(1133)] = 17471,
  [SMALL_STATE(1134)] = 17475,
  [SMALL_STATE(1135)] = 17479,
  [SMALL_STATE(1136)] = 17483,
  [SMALL_STATE(1137)] = 17487,
  [SMALL_STATE(1138)] = 17491,
  [SMALL_STATE(1139)] = 17495,
  [SMALL_STATE(1140)] = 17499,
  [SMALL_STATE(1141)] = 17503,
  [SMALL_STATE(1142)] = 17507,
  [SMALL_STATE(1143)] = 17511,
  [SMALL_STATE(1144)] = 17515,
  [SMALL_STATE(1145)] = 17519,
  [SMALL_STATE(1146)] = 17523,
  [SMALL_STATE(1147)] = 17527,
  [SMALL_STATE(1148)] = 17531,
  [SMALL_STATE(1149)] = 17535,
  [SMALL_STATE(1150)] = 17539,
  [SMALL_STATE(1151)] = 17543,
  [SMALL_STATE(1152)] = 17547,
  [SMALL_STATE(1153)] = 17551,
  [SMALL_STATE(1154)] = 17555,
  [SMALL_STATE(1155)] = 17559,
  [SMALL_STATE(1156)] = 17563,
  [SMALL_STATE(1157)] = 17567,
  [SMALL_STATE(1158)] = 17571,
  [SMALL_STATE(1159)] = 17575,
  [SMALL_STATE(1160)] = 17579,
  [SMALL_STATE(1161)] = 17583,
  [SMALL_STATE(1162)] = 17587,
  [SMALL_STATE(1163)] = 17591,
  [SMALL_STATE(1164)] = 17595,
  [SMALL_STATE(1165)] = 17599,
  [SMALL_STATE(1166)] = 17603,
  [SMALL_STATE(1167)] = 17607,
  [SMALL_STATE(1168)] = 17611,
  [SMALL_STATE(1169)] = 17615,
  [SMALL_STATE(1170)] = 17619,
  [SMALL_STATE(1171)] = 17623,
  [SMALL_STATE(1172)] = 17627,
  [SMALL_STATE(1173)] = 17631,
  [SMALL_STATE(1174)] = 17635,
  [SMALL_STATE(1175)] = 17639,
  [SMALL_STATE(1176)] = 17643,
  [SMALL_STATE(1177)] = 17647,
  [SMALL_STATE(1178)] = 17651,
  [SMALL_STATE(1179)] = 17655,
  [SMALL_STATE(1180)] = 17659,
  [SMALL_STATE(1181)] = 17663,
  [SMALL_STATE(1182)] = 17667,
  [SMALL_STATE(1183)] = 17671,
  [SMALL_STATE(1184)] = 17675,
  [SMALL_STATE(1185)] = 17679,
  [SMALL_STATE(1186)] = 17683,
  [SMALL_STATE(1187)] = 17687,
  [SMALL_STATE(1188)] = 17691,
  [SMALL_STATE(1189)] = 17695,
  [SMALL_STATE(1190)] = 17699,
  [SMALL_STATE(1191)] = 17703,
  [SMALL_STATE(1192)] = 17707,
  [SMALL_STATE(1193)] = 17711,
  [SMALL_STATE(1194)] = 17715,
  [SMALL_STATE(1195)] = 17719,
  [SMALL_STATE(1196)] = 17723,
  [SMALL_STATE(1197)] = 17727,
  [SMALL_STATE(1198)] = 17731,
  [SMALL_STATE(1199)] = 17735,
  [SMALL_STATE(1200)] = 17739,
  [SMALL_STATE(1201)] = 17743,
  [SMALL_STATE(1202)] = 17747,
  [SMALL_STATE(1203)] = 17751,
  [SMALL_STATE(1204)] = 17755,
  [SMALL_STATE(1205)] = 17759,
  [SMALL_STATE(1206)] = 17763,
  [SMALL_STATE(1207)] = 17767,
  [SMALL_STATE(1208)] = 17771,
  [SMALL_STATE(1209)] = 17775,
  [SMALL_STATE(1210)] = 17779,
  [SMALL_STATE(1211)] = 17783,
  [SMALL_STATE(1212)] = 17787,
  [SMALL_STATE(1213)] = 17791,
  [SMALL_STATE(1214)] = 17795,
  [SMALL_STATE(1215)] = 17799,
  [SMALL_STATE(1216)] = 17803,
  [SMALL_STATE(1217)] = 17807,
  [SMALL_STATE(1218)] = 17811,
  [SMALL_STATE(1219)] = 17815,
  [SMALL_STATE(1220)] = 17819,
  [SMALL_STATE(1221)] = 17823,
  [SMALL_STATE(1222)] = 17827,
  [SMALL_STATE(1223)] = 17831,
  [SMALL_STATE(1224)] = 17835,
  [SMALL_STATE(1225)] = 17839,
  [SMALL_STATE(1226)] = 17843,
  [SMALL_STATE(1227)] = 17847,
  [SMALL_STATE(1228)] = 17851,
  [SMALL_STATE(1229)] = 17855,
  [SMALL_STATE(1230)] = 17859,
  [SMALL_STATE(1231)] = 17863,
  [SMALL_STATE(1232)] = 17867,
  [SMALL_STATE(1233)] = 17871,
  [SMALL_STATE(1234)] = 17875,
  [SMALL_STATE(1235)] = 17879,
  [SMALL_STATE(1236)] = 17883,
  [SMALL_STATE(1237)] = 17887,
  [SMALL_STATE(1238)] = 17891,
  [SMALL_STATE(1239)] = 17895,
  [SMALL_STATE(1240)] = 17899,
  [SMALL_STATE(1241)] = 17903,
  [SMALL_STATE(1242)] = 17907,
  [SMALL_STATE(1243)] = 17911,
  [SMALL_STATE(1244)] = 17915,
  [SMALL_STATE(1245)] = 17919,
  [SMALL_STATE(1246)] = 17923,
  [SMALL_STATE(1247)] = 17927,
  [SMALL_STATE(1248)] = 17931,
  [SMALL_STATE(1249)] = 17935,
  [SMALL_STATE(1250)] = 17939,
  [SMALL_STATE(1251)] = 17943,
  [SMALL_STATE(1252)] = 17947,
  [SMALL_STATE(1253)] = 17951,
  [SMALL_STATE(1254)] = 17955,
  [SMALL_STATE(1255)] = 17959,
  [SMALL_STATE(1256)] = 17963,
  [SMALL_STATE(1257)] = 17967,
  [SMALL_STATE(1258)] = 17971,
  [SMALL_STATE(1259)] = 17975,
  [SMALL_STATE(1260)] = 17979,
  [SMALL_STATE(1261)] = 17983,
  [SMALL_STATE(1262)] = 17987,
  [SMALL_STATE(1263)] = 17991,
  [SMALL_STATE(1264)] = 17995,
  [SMALL_STATE(1265)] = 17999,
  [SMALL_STATE(1266)] = 18003,
  [SMALL_STATE(1267)] = 18007,
  [SMALL_STATE(1268)] = 18011,
  [SMALL_STATE(1269)] = 18015,
  [SMALL_STATE(1270)] = 18019,
  [SMALL_STATE(1271)] = 18023,
  [SMALL_STATE(1272)] = 18027,
  [SMALL_STATE(1273)] = 18031,
  [SMALL_STATE(1274)] = 18035,
  [SMALL_STATE(1275)] = 18039,
  [SMALL_STATE(1276)] = 18043,
  [SMALL_STATE(1277)] = 18047,
  [SMALL_STATE(1278)] = 18051,
  [SMALL_STATE(1279)] = 18055,
  [SMALL_STATE(1280)] = 18059,
  [SMALL_STATE(1281)] = 18063,
  [SMALL_STATE(1282)] = 18067,
  [SMALL_STATE(1283)] = 18071,
  [SMALL_STATE(1284)] = 18075,
  [SMALL_STATE(1285)] = 18079,
  [SMALL_STATE(1286)] = 18083,
  [SMALL_STATE(1287)] = 18087,
  [SMALL_STATE(1288)] = 18091,
  [SMALL_STATE(1289)] = 18095,
  [SMALL_STATE(1290)] = 18099,
  [SMALL_STATE(1291)] = 18103,
  [SMALL_STATE(1292)] = 18107,
  [SMALL_STATE(1293)] = 18111,
  [SMALL_STATE(1294)] = 18115,
  [SMALL_STATE(1295)] = 18119,
  [SMALL_STATE(1296)] = 18123,
  [SMALL_STATE(1297)] = 18127,
  [SMALL_STATE(1298)] = 18131,
  [SMALL_STATE(1299)] = 18135,
  [SMALL_STATE(1300)] = 18139,
  [SMALL_STATE(1301)] = 18143,
  [SMALL_STATE(1302)] = 18147,
  [SMALL_STATE(1303)] = 18151,
  [SMALL_STATE(1304)] = 18155,
  [SMALL_STATE(1305)] = 18159,
  [SMALL_STATE(1306)] = 18163,
  [SMALL_STATE(1307)] = 18167,
  [SMALL_STATE(1308)] = 18171,
  [SMALL_STATE(1309)] = 18175,
  [SMALL_STATE(1310)] = 18179,
  [SMALL_STATE(1311)] = 18183,
  [SMALL_STATE(1312)] = 18187,
  [SMALL_STATE(1313)] = 18191,
  [SMALL_STATE(1314)] = 18195,
  [SMALL_STATE(1315)] = 18199,
  [SMALL_STATE(1316)] = 18203,
  [SMALL_STATE(1317)] = 18207,
  [SMALL_STATE(1318)] = 18211,
  [SMALL_STATE(1319)] = 18215,
  [SMALL_STATE(1320)] = 18219,
  [SMALL_STATE(1321)] = 18223,
  [SMALL_STATE(1322)] = 18227,
  [SMALL_STATE(1323)] = 18231,
  [SMALL_STATE(1324)] = 18235,
  [SMALL_STATE(1325)] = 18239,
  [SMALL_STATE(1326)] = 18243,
  [SMALL_STATE(1327)] = 18247,
  [SMALL_STATE(1328)] = 18251,
  [SMALL_STATE(1329)] = 18255,
  [SMALL_STATE(1330)] = 18259,
  [SMALL_STATE(1331)] = 18263,
  [SMALL_STATE(1332)] = 18267,
  [SMALL_STATE(1333)] = 18271,
  [SMALL_STATE(1334)] = 18275,
  [SMALL_STATE(1335)] = 18279,
  [SMALL_STATE(1336)] = 18283,
  [SMALL_STATE(1337)] = 18287,
  [SMALL_STATE(1338)] = 18291,
  [SMALL_STATE(1339)] = 18295,
  [SMALL_STATE(1340)] = 18299,
  [SMALL_STATE(1341)] = 18303,
  [SMALL_STATE(1342)] = 18307,
  [SMALL_STATE(1343)] = 18311,
  [SMALL_STATE(1344)] = 18315,
  [SMALL_STATE(1345)] = 18319,
  [SMALL_STATE(1346)] = 18323,
  [SMALL_STATE(1347)] = 18327,
  [SMALL_STATE(1348)] = 18331,
  [SMALL_STATE(1349)] = 18335,
  [SMALL_STATE(1350)] = 18339,
  [SMALL_STATE(1351)] = 18343,
  [SMALL_STATE(1352)] = 18347,
  [SMALL_STATE(1353)] = 18351,
  [SMALL_STATE(1354)] = 18355,
  [SMALL_STATE(1355)] = 18359,
  [SMALL_STATE(1356)] = 18363,
  [SMALL_STATE(1357)] = 18367,
  [SMALL_STATE(1358)] = 18371,
  [SMALL_STATE(1359)] = 18375,
  [SMALL_STATE(1360)] = 18379,
  [SMALL_STATE(1361)] = 18383,
  [SMALL_STATE(1362)] = 18387,
  [SMALL_STATE(1363)] = 18391,
  [SMALL_STATE(1364)] = 18395,
  [SMALL_STATE(1365)] = 18399,
  [SMALL_STATE(1366)] = 18403,
  [SMALL_STATE(1367)] = 18407,
  [SMALL_STATE(1368)] = 18411,
  [SMALL_STATE(1369)] = 18415,
  [SMALL_STATE(1370)] = 18419,
  [SMALL_STATE(1371)] = 18423,
  [SMALL_STATE(1372)] = 18427,
  [SMALL_STATE(1373)] = 18431,
  [SMALL_STATE(1374)] = 18435,
  [SMALL_STATE(1375)] = 18439,
  [SMALL_STATE(1376)] = 18443,
  [SMALL_STATE(1377)] = 18447,
  [SMALL_STATE(1378)] = 18451,
  [SMALL_STATE(1379)] = 18455,
  [SMALL_STATE(1380)] = 18459,
  [SMALL_STATE(1381)] = 18463,
  [SMALL_STATE(1382)] = 18467,
  [SMALL_STATE(1383)] = 18471,
  [SMALL_STATE(1384)] = 18475,
  [SMALL_STATE(1385)] = 18479,
  [SMALL_STATE(1386)] = 18483,
  [SMALL_STATE(1387)] = 18487,
  [SMALL_STATE(1388)] = 18491,
  [SMALL_STATE(1389)] = 18495,
  [SMALL_STATE(1390)] = 18499,
  [SMALL_STATE(1391)] = 18503,
  [SMALL_STATE(1392)] = 18507,
  [SMALL_STATE(1393)] = 18511,
  [SMALL_STATE(1394)] = 18515,
  [SMALL_STATE(1395)] = 18519,
  [SMALL_STATE(1396)] = 18523,
  [SMALL_STATE(1397)] = 18527,
  [SMALL_STATE(1398)] = 18531,
  [SMALL_STATE(1399)] = 18535,
  [SMALL_STATE(1400)] = 18539,
  [SMALL_STATE(1401)] = 18543,
  [SMALL_STATE(1402)] = 18547,
  [SMALL_STATE(1403)] = 18551,
  [SMALL_STATE(1404)] = 18555,
  [SMALL_STATE(1405)] = 18559,
  [SMALL_STATE(1406)] = 18563,
  [SMALL_STATE(1407)] = 18567,
  [SMALL_STATE(1408)] = 18571,
  [SMALL_STATE(1409)] = 18575,
  [SMALL_STATE(1410)] = 18579,
  [SMALL_STATE(1411)] = 18583,
  [SMALL_STATE(1412)] = 18587,
  [SMALL_STATE(1413)] = 18591,
  [SMALL_STATE(1414)] = 18595,
  [SMALL_STATE(1415)] = 18599,
  [SMALL_STATE(1416)] = 18603,
  [SMALL_STATE(1417)] = 18607,
  [SMALL_STATE(1418)] = 18611,
  [SMALL_STATE(1419)] = 18615,
  [SMALL_STATE(1420)] = 18619,
  [SMALL_STATE(1421)] = 18623,
  [SMALL_STATE(1422)] = 18627,
  [SMALL_STATE(1423)] = 18631,
  [SMALL_STATE(1424)] = 18635,
  [SMALL_STATE(1425)] = 18639,
  [SMALL_STATE(1426)] = 18643,
  [SMALL_STATE(1427)] = 18647,
  [SMALL_STATE(1428)] = 18651,
  [SMALL_STATE(1429)] = 18655,
  [SMALL_STATE(1430)] = 18659,
  [SMALL_STATE(1431)] = 18663,
  [SMALL_STATE(1432)] = 18667,
  [SMALL_STATE(1433)] = 18671,
  [SMALL_STATE(1434)] = 18675,
  [SMALL_STATE(1435)] = 18679,
  [SMALL_STATE(1436)] = 18683,
  [SMALL_STATE(1437)] = 18687,
  [SMALL_STATE(1438)] = 18691,
  [SMALL_STATE(1439)] = 18695,
  [SMALL_STATE(1440)] = 18699,
  [SMALL_STATE(1441)] = 18703,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1346),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1438),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_name, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_name, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(493),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(513),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(714),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1346),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(780),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(451),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(458),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(789),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(790),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(457),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(508),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(455),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(449),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1438),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 15),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 15),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(864),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 64),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 58),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 58),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 64),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1315),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1190),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1316),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1401),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2, .production_id = 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(495),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 35),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 59),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 36),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 4, .production_id = 11),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1223),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(999),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 13),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 31),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 32),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 42),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1369),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 34),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1359),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 57),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1324),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 17),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1254),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 8, .production_id = 61),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 20),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(569),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 5, .production_id = 10),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4, .production_id = 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 54),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 57),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1203),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2, .production_id = 43),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5, .production_id = 34),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1227),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 17),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1376),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 11),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5, .production_id = 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 5, .production_id = 10),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 17),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 11, .production_id = 57),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2, .production_id = 16),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3, .production_id = 5),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(682),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 11),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1, .production_id = 16),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2, .production_id = 16),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4, .production_id = 12),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 65),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 57),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3, .production_id = 43),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3, .production_id = 5),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(517),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3, .production_id = 16),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 11, .production_id = 75),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8, .production_id = 17),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1401),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6, .production_id = 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 11),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 17),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 11),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 17),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6, .production_id = 38),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4, .production_id = 43),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 34),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2), SHIFT_REPEAT(830),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 34),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 17),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 17),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(605),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5, .production_id = 29),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3, .production_id = 8),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9, .production_id = 6),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 3, .production_id = 43),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 68),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 49),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 40),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15, .production_id = 95),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 127),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2, .production_id = 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1318),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 123),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 122),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 41),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 56),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 118),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 27),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5, .production_id = 26),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3, .production_id = 3),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 24),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 21),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 19),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 112),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9, .production_id = 6),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 108),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 107),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3, .production_id = 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 50),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3, .production_id = 9),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3, .production_id = 10),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4, .production_id = 12),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12, .production_id = 82),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4, .production_id = 14),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3, .production_id = 7),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5, .production_id = 30),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 13, .production_id = 84),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 88),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 13, .production_id = 87),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 85),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 17),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 12, .production_id = 57),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7, .production_id = 38),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 104),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 12, .production_id = 84),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7, .production_id = 34),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 51),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 3),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 97),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 57),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 3),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 98),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4, .production_id = 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4, .production_id = 5),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 83),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 99),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 17),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7, .production_id = 3),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4, .production_id = 9),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 7, .production_id = 52),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 14),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 7, .production_id = 53),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 12, .production_id = 81),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 24, .production_id = 127),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 8, .production_id = 63),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8, .production_id = 19),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 6, .production_id = 10),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10, .production_id = 65),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 70),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10, .production_id = 72),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 69),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 12, .production_id = 75),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 123),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 8, .production_id = 62),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10, .production_id = 46),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 6, .production_id = 39),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 122),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 100),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 9, .production_id = 57),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 101),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 17),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5, .production_id = 17),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 102),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 11, .production_id = 6),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 103),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 11),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 11, .production_id = 78),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3, .production_id = 5),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 41),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 105),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3, .production_id = 6),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 85),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 9, .production_id = 61),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9, .production_id = 66),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 14, .production_id = 82),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 11, .production_id = 74),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 89),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 95),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 90),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 109),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 110),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 111),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 7, .production_id = 48),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5, .production_id = 18),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 7, .production_id = 47),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 91),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11, .production_id = 6),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 21, .production_id = 126),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11, .production_id = 77),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 113),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 114),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4, .production_id = 5),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 17),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 21, .production_id = 125),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5, .production_id = 20),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 7, .production_id = 44),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 22),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5, .production_id = 23),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 96),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 25),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18, .production_id = 115),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 11, .production_id = 17),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 7, .production_id = 46),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8, .production_id = 41),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 92),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 93),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 28),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8, .production_id = 60),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 3),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 55),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 43),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 38),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 38),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 116),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 6, .production_id = 10),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 94),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 117),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 118),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 17),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 38),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8, .production_id = 45),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 107),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 34),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 108),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 3),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 11),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 119),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 1),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6, .production_id = 17),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6, .production_id = 28),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 12),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 2),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4, .production_id = 11),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 120),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 121),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 66),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 34),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7, .production_id = 45),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5, .production_id = 14),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 74),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 20, .production_id = 124),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 10, .production_id = 73),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 112),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1311),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1429),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1428),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1426),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1165),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1171),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1173),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(983),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(985),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(986),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(987),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(903),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1249),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(822),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1371),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1281),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1397),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1395),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1419),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1098),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1097),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1408),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(989),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1290),
  [1193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(474),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 16),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1437),
  [1244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1440),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1300),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1160),
  [1258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1072),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 16),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1299),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 16),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1182),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1185),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null_list, 2),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(468),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1, .production_id = 76),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null_list, 1),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(1010),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 2),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2, .production_id = 79),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1, .production_id = 80),
  [1360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(776),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1433),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1180),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(767),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2, .production_id = 86),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_not_null_list_repeat1, 2), SHIFT_REPEAT(647),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_not_null_list_repeat1, 2),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(914),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1063),
  [1422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1067),
  [1424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(447),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(59),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(727),
  [1455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [1459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(607),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(582),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1432),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(450),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(709),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1241),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(898),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1341),
  [1526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1342),
  [1528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1314),
  [1530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1349),
  [1532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2), SHIFT_REPEAT(849),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2),
  [1537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1351),
  [1539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1352),
  [1541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1354),
  [1543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1358),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1366),
  [1549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1368),
  [1551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1373),
  [1553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1380),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1381),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1385),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1387),
  [1569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(248),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1400),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1414),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(795),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 1),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1357),
  [1616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1355),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1289),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 106),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [1658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1399),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1417),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 16),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [1682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4, .production_id = 16),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 3, .production_id = 67),
  [1694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 37),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 71),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [1732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [1738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 4),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1120),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [1774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1216),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1207),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1127),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1206),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1138),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 33),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1000),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1106),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1152),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1196),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1179),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 76),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1077),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [1926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1191),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1201),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1278),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1205),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1217),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [2004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [2006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 16),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1308),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1309),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1230),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1313),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1234),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1320),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1245),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1248),
  [2054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1247),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1353),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1261),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1364),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1271),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [2116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1274),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1137),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1090),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1286),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1287),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1383),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1297),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1301),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1306),
  [2186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [2190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1310),
  [2196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1325),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1326),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1328),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1411),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1168),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1335),
  [2240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1339),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1347),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1434),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1422),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1421),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1407),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1199),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1361),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1362),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1145),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1374),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1356),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1377),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1382),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [2350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1209),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1322),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1384),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1222),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1229),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1392),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1237),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1396),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1312),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1243),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1403),
  [2420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1256),
  [2422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1260),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1264),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [2432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1412),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1277),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [2444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 4),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1279),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1292),
  [2454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [2458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [2460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1189),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1423),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [2490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [2492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1233),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1236),
  [2496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [2498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [2500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [2504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [2514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [2518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1258),
  [2520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1268),
  [2522] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [2526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1270),
  [2528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1273),
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
