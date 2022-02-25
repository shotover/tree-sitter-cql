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
#define STATE_COUNT 1436
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 303
#define ALIAS_COUNT 23
#define TOKEN_COUNT 145
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 24
#define PRODUCTION_ID_COUNT 131

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
  aux_sym_update_token1 = 64,
  aux_sym_update_token2 = 65,
  anon_sym_PLUS = 66,
  anon_sym_DASH = 67,
  aux_sym_use_token1 = 68,
  aux_sym_grant_token1 = 69,
  aux_sym_grant_token2 = 70,
  aux_sym_revoke_token1 = 71,
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
  aux_sym_list_roles_token1 = 85,
  aux_sym_list_roles_token2 = 86,
  aux_sym_list_roles_token3 = 87,
  aux_sym_drop_aggregate_token1 = 88,
  aux_sym_drop_materialized_view_token1 = 89,
  aux_sym_drop_materialized_view_token2 = 90,
  aux_sym_drop_trigger_token1 = 91,
  aux_sym_drop_type_token1 = 92,
  aux_sym_drop_user_token1 = 93,
  aux_sym_create_aggregate_token1 = 94,
  aux_sym_create_aggregate_token2 = 95,
  aux_sym_create_aggregate_token3 = 96,
  aux_sym_create_aggregate_token4 = 97,
  aux_sym_create_aggregate_token5 = 98,
  aux_sym_create_aggregate_token6 = 99,
  aux_sym_create_materialized_view_token1 = 100,
  aux_sym_create_materialized_view_token2 = 101,
  aux_sym_column_not_null_token1 = 102,
  aux_sym_create_function_token1 = 103,
  aux_sym_create_function_token2 = 104,
  aux_sym_data_type_name_token1 = 105,
  aux_sym_data_type_name_token2 = 106,
  aux_sym_data_type_name_token3 = 107,
  aux_sym_data_type_name_token4 = 108,
  aux_sym_data_type_name_token5 = 109,
  aux_sym_data_type_name_token6 = 110,
  aux_sym_data_type_name_token7 = 111,
  aux_sym_data_type_name_token8 = 112,
  aux_sym_data_type_name_token9 = 113,
  aux_sym_data_type_name_token10 = 114,
  aux_sym_data_type_name_token11 = 115,
  aux_sym_data_type_name_token12 = 116,
  aux_sym_data_type_name_token13 = 117,
  aux_sym_data_type_name_token14 = 118,
  aux_sym_data_type_name_token15 = 119,
  aux_sym_data_type_name_token16 = 120,
  aux_sym_data_type_name_token17 = 121,
  aux_sym_data_type_name_token18 = 122,
  aux_sym_data_type_name_token19 = 123,
  aux_sym_data_type_name_token20 = 124,
  aux_sym_data_type_name_token21 = 125,
  aux_sym_data_type_name_token22 = 126,
  aux_sym_return_mode_token1 = 127,
  aux_sym_return_mode_token2 = 128,
  aux_sym_create_keyspace_token1 = 129,
  aux_sym_durable_writes_token1 = 130,
  aux_sym_role_with_options_token1 = 131,
  aux_sym_role_with_options_token2 = 132,
  aux_sym_role_with_options_token3 = 133,
  aux_sym_role_with_options_token4 = 134,
  aux_sym_clustering_order_token1 = 135,
  aux_sym_order_direction_token1 = 136,
  aux_sym_order_direction_token2 = 137,
  aux_sym_alter_table_add_token1 = 138,
  aux_sym_alter_table_drop_compact_storage_token1 = 139,
  aux_sym_alter_table_drop_compact_storage_token2 = 140,
  aux_sym_alter_table_rename_token1 = 141,
  aux_sym_user_super_user_token1 = 142,
  aux_sym_apply_batch_token1 = 143,
  sym_object_name = 144,
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
  sym_index_column_spec = 185,
  sym_index_keys_spec = 186,
  sym_index_entries_s_spec = 187,
  sym_index_full_spec = 188,
  sym_drop_index = 189,
  sym_update = 190,
  sym_assignment_element = 191,
  sym_use = 192,
  sym_grant = 193,
  sym_revoke = 194,
  sym_priviledge = 195,
  sym_resource = 196,
  sym_list_roles = 197,
  sym_list_permissions = 198,
  sym_drop_aggregate = 199,
  sym_drop_materialized_view = 200,
  sym_drop_function = 201,
  sym_drop_keyspace = 202,
  sym_drop_role = 203,
  sym_drop_table = 204,
  sym_drop_trigger = 205,
  sym_drop_type = 206,
  sym_drop_user = 207,
  sym_create_aggregate = 208,
  sym_init_cond_definition = 209,
  sym_init_cond_list = 210,
  sym_init_cond_list_nested = 211,
  sym_init_cond_hash = 212,
  sym_init_cond_hash_item = 213,
  sym_create_materialized_view = 214,
  sym_materialized_view_where = 215,
  sym_column_not_null_list = 216,
  sym_column_not_null = 217,
  sym_materialized_view_options = 218,
  sym_create_function = 219,
  sym_param = 220,
  sym_data_type = 221,
  sym_data_type_name = 222,
  sym_data_type_definition = 223,
  sym_return_mode = 224,
  sym_create_keyspace = 225,
  sym_replication_list_item = 226,
  sym_durable_writes = 227,
  sym_create_role = 228,
  sym_role_with = 229,
  sym_role_with_options = 230,
  sym_option_hash = 231,
  sym_option_hash_item = 232,
  sym_create_table = 233,
  sym_column_definition_list = 234,
  sym_column_definition = 235,
  sym_primary_key_column = 236,
  sym_primary_key_element = 237,
  sym_primary_key_definition = 238,
  sym_compound_key = 239,
  sym_clustering_key_list = 240,
  sym_composite_key = 241,
  sym_partition_key_list = 242,
  sym_with_element = 243,
  sym_table_options = 244,
  sym_table_option_item = 245,
  sym_table_option_name = 246,
  sym_table_option_value = 247,
  sym_clustering_order = 248,
  sym_order_direction = 249,
  sym_create_trigger = 250,
  sym_create_type = 251,
  sym_create_user = 252,
  sym_alter_materialized_view = 253,
  sym_alter_keyspace = 254,
  sym_replication_list = 255,
  sym_alter_role = 256,
  sym_alter_table = 257,
  sym_alter_table_operation = 258,
  sym_alter_table_add = 259,
  sym_alter_table_column_definition = 260,
  sym_alter_table_drop_columns = 261,
  sym_alter_table_drop_column_list = 262,
  sym_alter_table_drop_compact_storage = 263,
  sym_alter_table_rename = 264,
  sym_alter_table_with = 265,
  sym_alter_type = 266,
  sym_alter_type_operation = 267,
  sym_alter_type_alter_type = 268,
  sym_alter_type_add = 269,
  sym_alter_type_rename = 270,
  sym_alter_type_rename_list = 271,
  sym_alter_type_rename_item = 272,
  sym_alter_user = 273,
  sym_user_password = 274,
  sym_user_super_user = 275,
  sym_apply_batch = 276,
  aux_sym_source_file_repeat1 = 277,
  aux_sym_select_elements_repeat1 = 278,
  aux_sym_function_args_repeat1 = 279,
  aux_sym_relation_elements_repeat1 = 280,
  aux_sym_relation_element_repeat1 = 281,
  aux_sym_relation_element_repeat2 = 282,
  aux_sym_assignment_tuple_repeat1 = 283,
  aux_sym_delete_column_list_repeat1 = 284,
  aux_sym_if_condition_list_repeat1 = 285,
  aux_sym_column_list_repeat1 = 286,
  aux_sym_expression_list_repeat1 = 287,
  aux_sym_assignment_map_repeat1 = 288,
  aux_sym_update_repeat1 = 289,
  aux_sym_init_cond_list_nested_repeat1 = 290,
  aux_sym_init_cond_hash_repeat1 = 291,
  aux_sym_column_not_null_list_repeat1 = 292,
  aux_sym_create_function_repeat1 = 293,
  aux_sym_data_type_definition_repeat1 = 294,
  aux_sym_role_with_repeat1 = 295,
  aux_sym_option_hash_repeat1 = 296,
  aux_sym_column_definition_list_repeat1 = 297,
  aux_sym_table_options_repeat1 = 298,
  aux_sym_create_type_repeat1 = 299,
  aux_sym_replication_list_repeat1 = 300,
  aux_sym_alter_table_column_definition_repeat1 = 301,
  aux_sym_alter_type_rename_list_repeat1 = 302,
  anon_alias_sym_aggregate = 303,
  anon_alias_sym_clustering_key = 304,
  anon_alias_sym_column = 305,
  anon_alias_sym_data_type = 306,
  anon_alias_sym_finalfunc = 307,
  anon_alias_sym_function = 308,
  anon_alias_sym_function_name = 309,
  anon_alias_sym_hash_key = 310,
  anon_alias_sym_index = 311,
  anon_alias_sym_keyspace = 312,
  anon_alias_sym_language = 313,
  anon_alias_sym_materialized_view = 314,
  anon_alias_sym_option = 315,
  anon_alias_sym_param_name = 316,
  anon_alias_sym_partition_key = 317,
  anon_alias_sym_primary_key = 318,
  anon_alias_sym_role = 319,
  anon_alias_sym_sfunc = 320,
  anon_alias_sym_table = 321,
  anon_alias_sym_trigger = 322,
  anon_alias_sym_trigger_class = 323,
  anon_alias_sym_type = 324,
  anon_alias_sym_user = 325,
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
  [aux_sym_update_token1] = "UPDATE",
  [aux_sym_update_token2] = "SET",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [aux_sym_use_token1] = "USE",
  [aux_sym_grant_token1] = "GRANT",
  [aux_sym_grant_token2] = "TO",
  [aux_sym_revoke_token1] = "REVOKE",
  [aux_sym_priviledge_token1] = "ALL",
  [aux_sym_priviledge_token2] = "PERMISSIONS",
  [aux_sym_priviledge_token3] = "ALTER",
  [aux_sym_priviledge_token4] = "AUTHORIZE",
  [aux_sym_priviledge_token5] = "DESCRIBE",
  [aux_sym_priviledge_token6] = "EXECUTE",
  [aux_sym_priviledge_token7] = "MODIFY",
  [aux_sym_resource_token1] = "FUNCTIONS",
  [aux_sym_resource_token2] = "KEYSPACE",
  [aux_sym_resource_token3] = "KEYSPACES",
  [aux_sym_resource_token4] = "ROLES",
  [aux_sym_resource_token5] = "FUNCTION",
  [aux_sym_resource_token6] = "ROLE",
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
  [sym_object_name] = "object_name",
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
  [sym_index_column_spec] = "index_column_spec",
  [sym_index_keys_spec] = "index_keys_spec",
  [sym_index_entries_s_spec] = "index_entries_s_spec",
  [sym_index_full_spec] = "index_full_spec",
  [sym_drop_index] = "drop_index",
  [sym_update] = "update",
  [sym_assignment_element] = "assignment_element",
  [sym_use] = "use",
  [sym_grant] = "grant",
  [sym_revoke] = "revoke",
  [sym_priviledge] = "priviledge",
  [sym_resource] = "resource",
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
  [aux_sym_update_token1] = aux_sym_update_token1,
  [aux_sym_update_token2] = aux_sym_update_token2,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_use_token1] = aux_sym_use_token1,
  [aux_sym_grant_token1] = aux_sym_grant_token1,
  [aux_sym_grant_token2] = aux_sym_grant_token2,
  [aux_sym_revoke_token1] = aux_sym_revoke_token1,
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
  [sym_object_name] = sym_object_name,
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
  [sym_index_column_spec] = sym_index_column_spec,
  [sym_index_keys_spec] = sym_index_keys_spec,
  [sym_index_entries_s_spec] = sym_index_entries_s_spec,
  [sym_index_full_spec] = sym_index_full_spec,
  [sym_drop_index] = sym_drop_index,
  [sym_update] = sym_update,
  [sym_assignment_element] = sym_assignment_element,
  [sym_use] = sym_use,
  [sym_grant] = sym_grant,
  [sym_revoke] = sym_revoke,
  [sym_priviledge] = sym_priviledge,
  [sym_resource] = sym_resource,
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
  [aux_sym_revoke_token1] = {
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
  [sym_object_name] = {
    .visible = true,
    .named = true,
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
  [sym_revoke] = {
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
  [37] = {.index = 0, .length = 1},
  [38] = {.index = 0, .length = 1},
  [60] = {.index = 1, .length = 1},
  [61] = {.index = 1, .length = 1},
  [66] = {.index = 2, .length = 1},
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
    [2] = anon_alias_sym_role,
  },
  [5] = {
    [2] = anon_alias_sym_index,
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
    [4] = anon_alias_sym_index,
  },
  [21] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_index,
  },
  [22] = {
    [4] = anon_alias_sym_keyspace,
  },
  [23] = {
    [4] = anon_alias_sym_function,
  },
  [24] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
  },
  [25] = {
    [4] = anon_alias_sym_role,
  },
  [26] = {
    [4] = anon_alias_sym_aggregate,
  },
  [27] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
  },
  [28] = {
    [2] = anon_alias_sym_trigger,
    [4] = anon_alias_sym_table,
  },
  [29] = {
    [4] = anon_alias_sym_type,
  },
  [30] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
  },
  [31] = {
    [4] = anon_alias_sym_user,
  },
  [32] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_user,
  },
  [33] = {
    [1] = anon_alias_sym_function,
  },
  [34] = {
    [1] = anon_alias_sym_role,
  },
  [35] = {
    [0] = anon_alias_sym_option,
  },
  [36] = {
    [3] = anon_alias_sym_table,
  },
  [37] = {
    [0] = anon_alias_sym_table,
  },
  [39] = {
    [0] = anon_alias_sym_param_name,
  },
  [40] = {
    [5] = anon_alias_sym_role,
  },
  [41] = {
    [5] = anon_alias_sym_materialized_view,
  },
  [42] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
  },
  [43] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_table,
  },
  [44] = {
    [1] = anon_alias_sym_column,
  },
  [45] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_trigger_class,
  },
  [46] = {
    [2] = anon_alias_sym_type,
    [4] = anon_alias_sym_column,
    [5] = anon_alias_sym_data_type,
  },
  [47] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_table,
  },
  [48] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_index,
  },
  [49] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
  },
  [50] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
  },
  [51] = {
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_table,
  },
  [52] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_table,
  },
  [53] = {
    [2] = anon_alias_sym_trigger,
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_table,
  },
  [54] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_type,
  },
  [55] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_user,
  },
  [56] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_function,
  },
  [57] = {
    [1] = anon_alias_sym_column,
    [3] = anon_alias_sym_column,
  },
  [58] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_column,
  },
  [59] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_table,
  },
  [61] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_table,
  },
  [62] = {
    [2] = anon_alias_sym_index,
    [4] = anon_alias_sym_table,
  },
  [63] = {
    [5] = anon_alias_sym_trigger,
    [7] = anon_alias_sym_trigger_class,
  },
  [64] = {
    [5] = anon_alias_sym_user,
  },
  [65] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_materialized_view,
  },
  [67] = {
    [5] = anon_alias_sym_table,
  },
  [68] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
    [6] = anon_alias_sym_column,
    [7] = anon_alias_sym_data_type,
  },
  [69] = {
    [1] = anon_alias_sym_column,
    [2] = anon_alias_sym_data_type,
  },
  [70] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_trigger,
    [8] = anon_alias_sym_table,
  },
  [71] = {
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [72] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [73] = {
    [0] = anon_alias_sym_primary_key,
  },
  [74] = {
    [2] = anon_alias_sym_index,
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_table,
  },
  [75] = {
    [6] = anon_alias_sym_table,
  },
  [76] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_trigger,
    [9] = anon_alias_sym_trigger_class,
  },
  [77] = {
    [5] = anon_alias_sym_type,
    [7] = anon_alias_sym_column,
    [8] = anon_alias_sym_data_type,
  },
  [78] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_table,
  },
  [79] = {
    [0] = anon_alias_sym_partition_key,
  },
  [80] = {
    [5] = anon_alias_sym_index,
    [7] = anon_alias_sym_table,
  },
  [81] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_trigger,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
  },
  [82] = {
    [0] = anon_alias_sym_partition_key,
    [1] = anon_alias_sym_partition_key,
  },
  [83] = {
    [0] = anon_alias_sym_clustering_key,
  },
  [84] = {
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [85] = {
    [5] = anon_alias_sym_keyspace,
  },
  [86] = {
    [2] = anon_alias_sym_function,
    [9] = anon_alias_sym_language,
  },
  [87] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_type,
    [9] = anon_alias_sym_column,
    [10] = anon_alias_sym_data_type,
  },
  [88] = {
    [4] = anon_alias_sym_column,
  },
  [89] = {
    [0] = anon_alias_sym_clustering_key,
    [1] = anon_alias_sym_clustering_key,
  },
  [90] = {
    [5] = anon_alias_sym_index,
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_table,
  },
  [91] = {
    [2] = anon_alias_sym_function,
    [10] = anon_alias_sym_language,
  },
  [92] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [93] = {
    [2] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [94] = {
    [2] = anon_alias_sym_aggregate,
    [7] = anon_alias_sym_sfunc,
    [11] = anon_alias_sym_finalfunc,
  },
  [95] = {
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [96] = {
    [5] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [97] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [98] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_table,
  },
  [99] = {
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [100] = {
    [5] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [101] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [102] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [103] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [104] = {
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [105] = {
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [106] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [107] = {
    [5] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [108] = {
    [5] = anon_alias_sym_aggregate,
    [10] = anon_alias_sym_sfunc,
    [14] = anon_alias_sym_finalfunc,
  },
  [109] = {
    [0] = anon_alias_sym_hash_key,
  },
  [110] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
    [10] = anon_alias_sym_table,
  },
  [111] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
  },
  [112] = {
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [113] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [114] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [115] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_table,
  },
  [116] = {
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [117] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [118] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
    [11] = anon_alias_sym_sfunc,
    [15] = anon_alias_sym_finalfunc,
  },
  [119] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [120] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [121] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
    [10] = anon_alias_sym_keyspace,
    [12] = anon_alias_sym_table,
  },
  [122] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [123] = {
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [124] = {
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [125] = {
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_materialized_view,
    [13] = anon_alias_sym_table,
  },
  [126] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_keyspace,
    [13] = anon_alias_sym_table,
  },
  [127] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [17] = anon_alias_sym_language,
  },
  [128] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [18] = anon_alias_sym_language,
  },
  [129] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_aggregate,
    [14] = anon_alias_sym_sfunc,
    [18] = anon_alias_sym_finalfunc,
  },
  [130] = {
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_materialized_view,
    [13] = anon_alias_sym_keyspace,
    [15] = anon_alias_sym_table,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_data_type, 2,
    sym_data_type,
    anon_alias_sym_data_type,
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
  [88] = 88,
  [89] = 89,
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
  [138] = 117,
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
  [150] = 124,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(553);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(568);
      if (lookahead == ')') ADVANCE(569);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '+') ADVANCE(654);
      if (lookahead == ',') ADVANCE(565);
      if (lookahead == '-') ADVANCE(655);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == ';') ADVANCE(554);
      if (lookahead == '<') ADVANCE(595);
      if (lookahead == '=') ADVANCE(598);
      if (lookahead == '>') ADVANCE(599);
      if (lookahead == 'X') ADVANCE(28);
      if (lookahead == '[') ADVANCE(619);
      if (lookahead == ']') ADVANCE(620);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == '}') ADVANCE(631);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(42);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(35);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(43);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(373);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(419);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(333);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(45);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(309);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(40);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(568);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '-') ADVANCE(511);
      if (lookahead == '0') ADVANCE(575);
      if (lookahead == 'X') ADVANCE(768);
      if (lookahead == '[') ADVANCE(619);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(773);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(986);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(933);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(1004);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(549);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(590);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(573);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(573);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(515);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == '(') ADVANCE(568);
      if (lookahead == ')') ADVANCE(569);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(854);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(946);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(946);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == '-') ADVANCE(513);
      if (lookahead == '[') ADVANCE(619);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(940);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(841);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(911);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(770);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(867);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(888);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(845);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(771);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(820);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(803);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(980);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(772);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(874);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(988);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(832);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(918);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(787);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(869);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(917);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(991);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(903);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(987);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(823);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(934);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(836);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(939);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(787);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(767);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(836);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(836);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(518);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(531);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(537);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(547);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(542);
      END_STATE();
    case 33:
      if (lookahead == 'X') ADVANCE(514);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(497);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(286);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(480);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(306);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(292);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(660);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(255);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(370);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(368);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(368);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(269);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(253);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(385);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(190);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(339);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(357);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(434);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(338);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(351);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(607);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(284);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(335);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(418);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(420);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(386);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(387);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(490);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(323);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(190);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(340);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(438);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(460);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(707);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(279);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(281);
      END_STATE();
    case 77:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(282);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(758);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(694);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(696);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(757);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(220);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(487);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 87:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(444);
      END_STATE();
    case 88:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(446);
      END_STATE();
    case 89:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(476);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(239);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(468);
      END_STATE();
    case 97:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 98:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(471);
      END_STATE();
    case 99:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(202);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(364);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(567);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(433);
      END_STATE();
    case 100:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(759);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(594);
      END_STATE();
    case 102:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(745);
      END_STATE();
    case 103:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(747);
      END_STATE();
    case 104:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(616);
      END_STATE();
    case 105:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(697);
      END_STATE();
    case 106:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(751);
      END_STATE();
    case 107:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(735);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(617);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(686);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(656);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(588);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(474);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(352);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(367);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(422);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(423);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 191:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(610);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(601);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(701);
      END_STATE();
    case 192:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(610);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(602);
      END_STATE();
    case 193:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(683);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(640);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(455);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(692);
      END_STATE();
    case 194:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(683);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 195:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(503);
      END_STATE();
    case 196:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(484);
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
          lookahead == 'g') ADVANCE(621);
      END_STATE();
    case 200:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(562);
      END_STATE();
    case 201:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(755);
      END_STATE();
    case 202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(398);
      END_STATE();
    case 203:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(230);
      END_STATE();
    case 204:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
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
          lookahead == 'g') ADVANCE(489);
      END_STATE();
    case 208:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(163);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 209:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 210:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(138);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(170);
      END_STATE();
    case 212:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 213:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(211);
      END_STATE();
    case 214:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 215:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(700);
      END_STATE();
    case 216:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(618);
      END_STATE();
    case 217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(181);
      END_STATE();
    case 218:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(450);
      END_STATE();
    case 219:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(353);
      END_STATE();
    case 220:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(57);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(493);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(452);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(477);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(336);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(441);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(510);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 242:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 243:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 245:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 246:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 247:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 248:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 249:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 250:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 251:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 252:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(133);
      END_STATE();
    case 253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(433);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(663);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(632);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(646);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(570);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(715);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(276);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(364);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(276);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(364);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(502);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(425);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(478);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(358);
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
          lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 274:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 275:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(652);
      END_STATE();
    case 276:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(343);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 277:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 278:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
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
          lookahead == 'm') ADVANCE(591);
      END_STATE();
    case 289:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(591);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(165);
      END_STATE();
    case 290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(456);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(330);
      END_STATE();
    case 291:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(361);
      END_STATE();
    case 292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(236);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(436);
      END_STATE();
    case 293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(240);
      END_STATE();
    case 294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(121);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(507);
      END_STATE();
    case 296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 298:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(559);
      END_STATE();
    case 299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(614);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(752);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(721);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(709);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(677);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(749);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(451);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(156);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(113);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(456);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(259);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(475);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(337);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 318:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 319:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 320:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 321:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 322:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 323:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 324:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 325:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(442);
      END_STATE();
    case 326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(449);
      END_STATE();
    case 330:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(459);
      END_STATE();
    case 331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 332:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 333:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(391);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 334:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(660);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 335:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 336:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 337:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 338:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 339:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 340:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 341:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 342:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 343:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 344:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 345:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 346:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 347:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 348:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 349:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 350:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 351:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 352:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(392);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(369);
      END_STATE();
    case 353:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 354:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 355:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 356:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(310);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 357:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 358:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 359:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(727);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      END_STATE();
    case 360:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(648);
      END_STATE();
    case 361:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(622);
      END_STATE();
    case 362:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(113);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 363:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(113);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 364:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(263);
      END_STATE();
    case 365:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 366:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 367:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 368:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 369:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 370:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(280);
      END_STATE();
    case 371:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 372:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 373:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 374:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 375:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 376:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(666);
      END_STATE();
    case 377:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(606);
      END_STATE();
    case 378:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(711);
      END_STATE();
    case 379:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(688);
      END_STATE();
    case 380:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(741);
      END_STATE();
    case 381:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(753);
      END_STATE();
    case 382:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(764);
      END_STATE();
    case 383:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(691);
      END_STATE();
    case 384:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(690);
      END_STATE();
    case 385:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 386:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 387:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 388:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 389:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 390:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 391:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(491);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(627);
      END_STATE();
    case 392:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 393:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 394:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 395:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 396:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 397:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 398:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 399:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 400:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 401:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(482);
      END_STATE();
    case 402:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 403:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 404:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 405:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 406:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(612);
      END_STATE();
    case 407:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(628);
      END_STATE();
    case 408:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(644);
      END_STATE();
    case 409:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(754);
      END_STATE();
    case 410:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(702);
      END_STATE();
    case 411:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(603);
      END_STATE();
    case 412:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(665);
      END_STATE();
    case 413:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(750);
      END_STATE();
    case 414:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(676);
      END_STATE();
    case 415:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(672);
      END_STATE();
    case 416:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(675);
      END_STATE();
    case 417:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(496);
      END_STATE();
    case 418:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(417);
      END_STATE();
    case 419:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(341);
      END_STATE();
    case 420:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(467);
      END_STATE();
    case 421:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(430);
      END_STATE();
    case 422:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(453);
      END_STATE();
    case 423:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      END_STATE();
    case 424:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(224);
      END_STATE();
    case 425:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 426:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 427:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(175);
      END_STATE();
    case 428:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(179);
      END_STATE();
    case 429:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(371);
      END_STATE();
    case 430:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(242);
      END_STATE();
    case 431:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      END_STATE();
    case 432:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(472);
      END_STATE();
    case 433:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      END_STATE();
    case 434:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 435:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(723);
      END_STATE();
    case 436:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(681);
      END_STATE();
    case 437:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(731);
      END_STATE();
    case 438:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(719);
      END_STATE();
    case 439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(658);
      END_STATE();
    case 440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(748);
      END_STATE();
    case 441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(563);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(705);
      END_STATE();
    case 443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(624);
      END_STATE();
    case 444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(555);
      END_STATE();
    case 445:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(743);
      END_STATE();
    case 446:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      END_STATE();
    case 447:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(737);
      END_STATE();
    case 448:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(557);
      END_STATE();
    case 449:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(729);
      END_STATE();
    case 450:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(215);
      END_STATE();
    case 451:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(388);
      END_STATE();
    case 452:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 453:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(406);
      END_STATE();
    case 454:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 455:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 456:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 457:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      END_STATE();
    case 458:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 459:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      END_STATE();
    case 460:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 461:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 462:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 463:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 464:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      END_STATE();
    case 465:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 466:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 467:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(241);
      END_STATE();
    case 468:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 469:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 470:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 471:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      END_STATE();
    case 472:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(188);
      END_STATE();
    case 473:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 474:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(311);
      END_STATE();
    case 475:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(402);
      END_STATE();
    case 476:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(395);
      END_STATE();
    case 477:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(440);
      END_STATE();
    case 478:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 479:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 480:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 481:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 482:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(426);
      END_STATE();
    case 483:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(427);
      END_STATE();
    case 484:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(319);
      END_STATE();
    case 485:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(332);
      END_STATE();
    case 486:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 487:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(463);
      END_STATE();
    case 488:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 489:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 490:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(308);
      END_STATE();
    case 491:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(372);
      END_STATE();
    case 492:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(337);
      END_STATE();
    case 493:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(144);
      END_STATE();
    case 494:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(687);
      END_STATE();
    case 495:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(561);
      END_STATE();
    case 496:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(350);
      END_STATE();
    case 497:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(396);
      END_STATE();
    case 498:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(639);
      END_STATE();
    case 499:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(437);
      END_STATE();
    case 500:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(155);
      END_STATE();
    case 501:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(605);
      END_STATE();
    case 502:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(765);
      END_STATE();
    case 503:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(671);
      END_STATE();
    case 504:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(698);
      END_STATE();
    case 505:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(604);
      END_STATE();
    case 506:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(429);
      END_STATE();
    case 507:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(248);
      END_STATE();
    case 508:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(431);
      END_STATE();
    case 509:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(143);
      END_STATE();
    case 510:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(171);
      END_STATE();
    case 511:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 512:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      END_STATE();
    case 513:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      END_STATE();
    case 514:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(587);
      END_STATE();
    case 515:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 516:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 517:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(572);
      END_STATE();
    case 518:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(515);
      END_STATE();
    case 519:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(516);
      END_STATE();
    case 520:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(517);
      END_STATE();
    case 521:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(519);
      END_STATE();
    case 522:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
      END_STATE();
    case 523:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(521);
      END_STATE();
    case 524:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(522);
      END_STATE();
    case 525:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 526:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 527:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 528:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 529:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 530:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 531:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(530);
      END_STATE();
    case 532:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(526);
      END_STATE();
    case 533:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 534:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(533);
      END_STATE();
    case 535:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 540:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(539);
      END_STATE();
    case 541:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(540);
      END_STATE();
    case 542:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(541);
      END_STATE();
    case 543:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(538);
      END_STATE();
    case 544:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(543);
      END_STATE();
    case 545:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 549:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(5);
      END_STATE();
    case 550:
      if (eof) ADVANCE(553);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(568);
      if (lookahead == ')') ADVANCE(569);
      if (lookahead == ',') ADVANCE(565);
      if (lookahead == '-') ADVANCE(511);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == '0') ADVANCE(575);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == ';') ADVANCE(554);
      if (lookahead == '<') ADVANCE(595);
      if (lookahead == '=') ADVANCE(598);
      if (lookahead == '>') ADVANCE(599);
      if (lookahead == 'X') ADVANCE(28);
      if (lookahead == '[') ADVANCE(619);
      if (lookahead == ']') ADVANCE(620);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == '}') ADVANCE(631);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(145);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(356);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(535);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(44);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(373);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(192);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(160);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(221);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(479);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(374);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(334);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(362);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(550)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(583);
      END_STATE();
    case 551:
      if (eof) ADVANCE(553);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == ')') ADVANCE(569);
      if (lookahead == '-') ADVANCE(513);
      if (lookahead == ';') ADVANCE(554);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(149);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(385);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(147);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(485);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(373);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(305);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(164);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(221);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(405);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(551)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      END_STATE();
    case 552:
      if (eof) ADVANCE(553);
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == ';') ADVANCE(554);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(880);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(831);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(868);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(833);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(936);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(896);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(845);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(808);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(834);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(932);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(922);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(552)
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_limit_spec_token1);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_uuid);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(512);
      if (lookahead == 'X') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(516);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(519);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(521);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_hexadecimal_literal);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_hexadecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(587);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_code_block);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(596);
      if (lookahead == '>') ADVANCE(597);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(600);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(151);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(452);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(477);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(725);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token1);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(642);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_insert_statement_token3);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_ttl_token1);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_update_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_update_token2);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_update_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_use_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_priviledge_token1);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_priviledge_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_priviledge_token2);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_priviledge_token3);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_priviledge_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_priviledge_token4);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_priviledge_token5);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_priviledge_token6);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_priviledge_token7);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_resource_token3);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_resource_token4);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_drop_aggregate_token1);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token1);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token2);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_drop_trigger_token1);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_drop_type_token1);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token2);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token3);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token4);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token5);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token6);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token1);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token2);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_column_not_null_token1);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_data_type_name_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(968);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(984);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(458);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(481);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_return_mode_token1);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_return_mode_token2);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token1);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_durable_writes_token1);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_role_with_options_token1);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_role_with_options_token2);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_role_with_options_token3);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_role_with_options_token4);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_order_direction_token1);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_order_direction_token2);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_alter_table_add_token1);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_alter_table_drop_compact_storage_token1);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_alter_table_drop_compact_storage_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_alter_table_drop_compact_storage_token2);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_alter_table_rename_token1);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_user_super_user_token1);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_apply_batch_token1);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_apply_batch_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(518);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(952);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(793);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(981);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(919);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(927);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1003);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(865);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(884);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(929);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(798);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(860);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(890);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(957);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(931);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(797);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(974);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(902);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(976);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(977);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(790);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(708);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(873);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(878);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(840);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(899);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(848);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(843);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(964);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(965);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(971);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(966);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(818);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(786);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(746);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(736);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(785);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(990);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(883);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(926);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(714);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(733);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(740);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(718);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(989);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(657);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(638);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(609);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(651);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(634);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(636);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(674);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(794);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(953);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(774);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(928);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(954);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(726);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(994);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(889);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(779);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(942);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(930);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(938);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(935);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(783);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(839);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(995);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(875);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(914);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(876);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(975);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(611);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(756);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(847);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(849);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(776);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(838);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(907);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(908);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(800);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(885);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(704);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(944);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(801);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(898);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(844);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(891);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(895);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(905);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(826);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(886);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(948);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(916);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(949);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(900);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(901);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(812);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(716);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(571);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(647);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(664);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(992);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(881);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(825);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(913);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(909);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(982);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(830);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(982);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(806);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(862);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(807);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(863);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(835);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(819);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(816);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(817);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1002);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(972);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(923);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(805);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(996);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(920);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(778);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(781);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(925);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(822);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(722);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(710);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(615);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(560);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(678);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(641);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(837);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(947);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(799);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(958);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(959);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(960);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(961);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(962);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(978);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(967);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(795);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(796);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(788);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(866);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(997);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(859);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(979);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(882);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(780);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(921);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(892);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(893);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(887);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(877);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(728);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(623);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(649);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(802);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(809);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(777);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(782);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(870);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(791);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(712);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(742);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(667);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(993);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(983);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(985);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(912);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(850);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(784);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(852);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(963);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(853);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(792);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(643);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(645);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(955);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(924);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(915);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(828);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(970);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(969);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(815);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(973);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(804);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(653);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(724);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(682);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(732);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(720);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(706);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(744);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(738);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(730);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(659);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(625);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(556);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(558);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(761);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(821);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(775);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(943);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(851);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(855);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(827);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(829);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(810);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(811);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(813);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(814);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(937);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(904);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(842);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(789);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(951);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(897);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(846);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(815);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(872);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(906);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(910);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(956);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(856);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(766);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(699);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(941);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(945);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(857);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(824);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1005);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(769);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(998);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(999);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1000);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1001);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1002);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1003);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
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
  [4] = {.lex_state = 550},
  [5] = {.lex_state = 550},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 550},
  [60] = {.lex_state = 550},
  [61] = {.lex_state = 550},
  [62] = {.lex_state = 550},
  [63] = {.lex_state = 550},
  [64] = {.lex_state = 550},
  [65] = {.lex_state = 550},
  [66] = {.lex_state = 550},
  [67] = {.lex_state = 550},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 550},
  [70] = {.lex_state = 550},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 550},
  [73] = {.lex_state = 550},
  [74] = {.lex_state = 550},
  [75] = {.lex_state = 550},
  [76] = {.lex_state = 550},
  [77] = {.lex_state = 552},
  [78] = {.lex_state = 550},
  [79] = {.lex_state = 550},
  [80] = {.lex_state = 550},
  [81] = {.lex_state = 550},
  [82] = {.lex_state = 550},
  [83] = {.lex_state = 550},
  [84] = {.lex_state = 550},
  [85] = {.lex_state = 550},
  [86] = {.lex_state = 550},
  [87] = {.lex_state = 550},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 550},
  [90] = {.lex_state = 551},
  [91] = {.lex_state = 550},
  [92] = {.lex_state = 550},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 550},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 550},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 550},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 550},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 550},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 550},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 550},
  [128] = {.lex_state = 550},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 550},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
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
  [154] = {.lex_state = 550},
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
  [167] = {.lex_state = 550},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
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
  [201] = {.lex_state = 550},
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
  [218] = {.lex_state = 550},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 550},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 550},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 550},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 550},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 550},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 550},
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
  [433] = {.lex_state = 1},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 550},
  [436] = {.lex_state = 550},
  [437] = {.lex_state = 550},
  [438] = {.lex_state = 550},
  [439] = {.lex_state = 550},
  [440] = {.lex_state = 550},
  [441] = {.lex_state = 550},
  [442] = {.lex_state = 550},
  [443] = {.lex_state = 550},
  [444] = {.lex_state = 1},
  [445] = {.lex_state = 1},
  [446] = {.lex_state = 1},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 1},
  [449] = {.lex_state = 41},
  [450] = {.lex_state = 550},
  [451] = {.lex_state = 550},
  [452] = {.lex_state = 53},
  [453] = {.lex_state = 1},
  [454] = {.lex_state = 550},
  [455] = {.lex_state = 41},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 550},
  [458] = {.lex_state = 550},
  [459] = {.lex_state = 53},
  [460] = {.lex_state = 41},
  [461] = {.lex_state = 550},
  [462] = {.lex_state = 550},
  [463] = {.lex_state = 550},
  [464] = {.lex_state = 550},
  [465] = {.lex_state = 550},
  [466] = {.lex_state = 550},
  [467] = {.lex_state = 550},
  [468] = {.lex_state = 550},
  [469] = {.lex_state = 550},
  [470] = {.lex_state = 550},
  [471] = {.lex_state = 550},
  [472] = {.lex_state = 550},
  [473] = {.lex_state = 550},
  [474] = {.lex_state = 18},
  [475] = {.lex_state = 18},
  [476] = {.lex_state = 18},
  [477] = {.lex_state = 18},
  [478] = {.lex_state = 18},
  [479] = {.lex_state = 18},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 18},
  [482] = {.lex_state = 18},
  [483] = {.lex_state = 11},
  [484] = {.lex_state = 15},
  [485] = {.lex_state = 15},
  [486] = {.lex_state = 15},
  [487] = {.lex_state = 15},
  [488] = {.lex_state = 15},
  [489] = {.lex_state = 550},
  [490] = {.lex_state = 14},
  [491] = {.lex_state = 14},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 10},
  [494] = {.lex_state = 15},
  [495] = {.lex_state = 14},
  [496] = {.lex_state = 550},
  [497] = {.lex_state = 15},
  [498] = {.lex_state = 15},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 10},
  [502] = {.lex_state = 13},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 53},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 12},
  [507] = {.lex_state = 10},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 10},
  [513] = {.lex_state = 19},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 10},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 10},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 550},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 19},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 10},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 17},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 17},
  [541] = {.lex_state = 17},
  [542] = {.lex_state = 17},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 24},
  [545] = {.lex_state = 17},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 17},
  [548] = {.lex_state = 17},
  [549] = {.lex_state = 17},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 551},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 17},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 17},
  [560] = {.lex_state = 17},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 17},
  [564] = {.lex_state = 10},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 17},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 17},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 17},
  [575] = {.lex_state = 17},
  [576] = {.lex_state = 21},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 21},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 10},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 10},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 16},
  [590] = {.lex_state = 10},
  [591] = {.lex_state = 551},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 10},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 10},
  [606] = {.lex_state = 26},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 10},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 10},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 10},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 25},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 10},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 10},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 10},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 10},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 10},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 10},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 10},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 10},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 10},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 550},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 10},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 10},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 10},
  [740] = {.lex_state = 20},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 10},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 10},
  [751] = {.lex_state = 10},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 10},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 10},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 10},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 551},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 10},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 10},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 10},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 10},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 10},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 10},
  [795] = {.lex_state = 10},
  [796] = {.lex_state = 10},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 20},
  [799] = {.lex_state = 20},
  [800] = {.lex_state = 20},
  [801] = {.lex_state = 10},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 20},
  [807] = {.lex_state = 20},
  [808] = {.lex_state = 20},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 10},
  [811] = {.lex_state = 20},
  [812] = {.lex_state = 10},
  [813] = {.lex_state = 10},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 10},
  [816] = {.lex_state = 20},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 20},
  [820] = {.lex_state = 20},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 20},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 20},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 20},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 20},
  [832] = {.lex_state = 20},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 20},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 20},
  [841] = {.lex_state = 10},
  [842] = {.lex_state = 27},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 20},
  [847] = {.lex_state = 20},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 10},
  [850] = {.lex_state = 10},
  [851] = {.lex_state = 27},
  [852] = {.lex_state = 27},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 10},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 10},
  [861] = {.lex_state = 551},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 10},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 10},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 22},
  [872] = {.lex_state = 10},
  [873] = {.lex_state = 10},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 10},
  [877] = {.lex_state = 10},
  [878] = {.lex_state = 10},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 10},
  [884] = {.lex_state = 10},
  [885] = {.lex_state = 10},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 10},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 10},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 551},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 10},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 10},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 10},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 551},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 10},
  [927] = {.lex_state = 10},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 10},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 10},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 10},
  [940] = {.lex_state = 10},
  [941] = {.lex_state = 550},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 10},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 10},
  [953] = {.lex_state = 10},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 10},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 10},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 10},
  [963] = {.lex_state = 0},
  [964] = {.lex_state = 10},
  [965] = {.lex_state = 10},
  [966] = {.lex_state = 10},
  [967] = {.lex_state = 10},
  [968] = {.lex_state = 10},
  [969] = {.lex_state = 10},
  [970] = {.lex_state = 0},
  [971] = {.lex_state = 0},
  [972] = {.lex_state = 10},
  [973] = {.lex_state = 0},
  [974] = {.lex_state = 10},
  [975] = {.lex_state = 0},
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 0},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 0},
  [980] = {.lex_state = 10},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 0},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 0},
  [986] = {.lex_state = 10},
  [987] = {.lex_state = 0},
  [988] = {.lex_state = 10},
  [989] = {.lex_state = 10},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 0},
  [993] = {.lex_state = 550},
  [994] = {.lex_state = 550},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 0},
  [997] = {.lex_state = 10},
  [998] = {.lex_state = 0},
  [999] = {.lex_state = 0},
  [1000] = {.lex_state = 0},
  [1001] = {.lex_state = 0},
  [1002] = {.lex_state = 0},
  [1003] = {.lex_state = 10},
  [1004] = {.lex_state = 0},
  [1005] = {.lex_state = 0},
  [1006] = {.lex_state = 0},
  [1007] = {.lex_state = 0},
  [1008] = {.lex_state = 0},
  [1009] = {.lex_state = 0},
  [1010] = {.lex_state = 10},
  [1011] = {.lex_state = 0},
  [1012] = {.lex_state = 0},
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 0},
  [1015] = {.lex_state = 10},
  [1016] = {.lex_state = 10},
  [1017] = {.lex_state = 0},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 0},
  [1020] = {.lex_state = 0},
  [1021] = {.lex_state = 10},
  [1022] = {.lex_state = 0},
  [1023] = {.lex_state = 10},
  [1024] = {.lex_state = 0},
  [1025] = {.lex_state = 10},
  [1026] = {.lex_state = 41},
  [1027] = {.lex_state = 0},
  [1028] = {.lex_state = 10},
  [1029] = {.lex_state = 0},
  [1030] = {.lex_state = 0},
  [1031] = {.lex_state = 10},
  [1032] = {.lex_state = 0},
  [1033] = {.lex_state = 0},
  [1034] = {.lex_state = 0},
  [1035] = {.lex_state = 0},
  [1036] = {.lex_state = 0},
  [1037] = {.lex_state = 10},
  [1038] = {.lex_state = 10},
  [1039] = {.lex_state = 10},
  [1040] = {.lex_state = 10},
  [1041] = {.lex_state = 0},
  [1042] = {.lex_state = 10},
  [1043] = {.lex_state = 10},
  [1044] = {.lex_state = 10},
  [1045] = {.lex_state = 10},
  [1046] = {.lex_state = 10},
  [1047] = {.lex_state = 10},
  [1048] = {.lex_state = 0},
  [1049] = {.lex_state = 10},
  [1050] = {.lex_state = 0},
  [1051] = {.lex_state = 0},
  [1052] = {.lex_state = 10},
  [1053] = {.lex_state = 10},
  [1054] = {.lex_state = 10},
  [1055] = {.lex_state = 10},
  [1056] = {.lex_state = 0},
  [1057] = {.lex_state = 0},
  [1058] = {.lex_state = 13},
  [1059] = {.lex_state = 0},
  [1060] = {.lex_state = 0},
  [1061] = {.lex_state = 0},
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
  [1072] = {.lex_state = 10},
  [1073] = {.lex_state = 0},
  [1074] = {.lex_state = 0},
  [1075] = {.lex_state = 0},
  [1076] = {.lex_state = 0},
  [1077] = {.lex_state = 10},
  [1078] = {.lex_state = 0},
  [1079] = {.lex_state = 0},
  [1080] = {.lex_state = 0},
  [1081] = {.lex_state = 0},
  [1082] = {.lex_state = 10},
  [1083] = {.lex_state = 0},
  [1084] = {.lex_state = 10},
  [1085] = {.lex_state = 0},
  [1086] = {.lex_state = 0},
  [1087] = {.lex_state = 0},
  [1088] = {.lex_state = 0},
  [1089] = {.lex_state = 0},
  [1090] = {.lex_state = 550},
  [1091] = {.lex_state = 0},
  [1092] = {.lex_state = 10},
  [1093] = {.lex_state = 0},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 10},
  [1096] = {.lex_state = 0},
  [1097] = {.lex_state = 0},
  [1098] = {.lex_state = 0},
  [1099] = {.lex_state = 0},
  [1100] = {.lex_state = 10},
  [1101] = {.lex_state = 0},
  [1102] = {.lex_state = 10},
  [1103] = {.lex_state = 0},
  [1104] = {.lex_state = 0},
  [1105] = {.lex_state = 10},
  [1106] = {.lex_state = 10},
  [1107] = {.lex_state = 0},
  [1108] = {.lex_state = 10},
  [1109] = {.lex_state = 10},
  [1110] = {.lex_state = 0},
  [1111] = {.lex_state = 0},
  [1112] = {.lex_state = 10},
  [1113] = {.lex_state = 0},
  [1114] = {.lex_state = 0},
  [1115] = {.lex_state = 0},
  [1116] = {.lex_state = 0},
  [1117] = {.lex_state = 0},
  [1118] = {.lex_state = 10},
  [1119] = {.lex_state = 0},
  [1120] = {.lex_state = 10},
  [1121] = {.lex_state = 0},
  [1122] = {.lex_state = 0},
  [1123] = {.lex_state = 10},
  [1124] = {.lex_state = 10},
  [1125] = {.lex_state = 0},
  [1126] = {.lex_state = 0},
  [1127] = {.lex_state = 0},
  [1128] = {.lex_state = 0},
  [1129] = {.lex_state = 10},
  [1130] = {.lex_state = 0},
  [1131] = {.lex_state = 10},
  [1132] = {.lex_state = 0},
  [1133] = {.lex_state = 10},
  [1134] = {.lex_state = 0},
  [1135] = {.lex_state = 10},
  [1136] = {.lex_state = 0},
  [1137] = {.lex_state = 0},
  [1138] = {.lex_state = 10},
  [1139] = {.lex_state = 0},
  [1140] = {.lex_state = 0},
  [1141] = {.lex_state = 551},
  [1142] = {.lex_state = 0},
  [1143] = {.lex_state = 0},
  [1144] = {.lex_state = 10},
  [1145] = {.lex_state = 0},
  [1146] = {.lex_state = 0},
  [1147] = {.lex_state = 0},
  [1148] = {.lex_state = 0},
  [1149] = {.lex_state = 10},
  [1150] = {.lex_state = 10},
  [1151] = {.lex_state = 0},
  [1152] = {.lex_state = 0},
  [1153] = {.lex_state = 10},
  [1154] = {.lex_state = 0},
  [1155] = {.lex_state = 10},
  [1156] = {.lex_state = 0},
  [1157] = {.lex_state = 0},
  [1158] = {.lex_state = 0},
  [1159] = {.lex_state = 0},
  [1160] = {.lex_state = 0},
  [1161] = {.lex_state = 0},
  [1162] = {.lex_state = 0},
  [1163] = {.lex_state = 10},
  [1164] = {.lex_state = 0},
  [1165] = {.lex_state = 0},
  [1166] = {.lex_state = 10},
  [1167] = {.lex_state = 0},
  [1168] = {.lex_state = 0},
  [1169] = {.lex_state = 10},
  [1170] = {.lex_state = 0},
  [1171] = {.lex_state = 0},
  [1172] = {.lex_state = 0},
  [1173] = {.lex_state = 0},
  [1174] = {.lex_state = 10},
  [1175] = {.lex_state = 0},
  [1176] = {.lex_state = 10},
  [1177] = {.lex_state = 0},
  [1178] = {.lex_state = 10},
  [1179] = {.lex_state = 0},
  [1180] = {.lex_state = 0},
  [1181] = {.lex_state = 0},
  [1182] = {.lex_state = 0},
  [1183] = {.lex_state = 10},
  [1184] = {.lex_state = 0},
  [1185] = {.lex_state = 0},
  [1186] = {.lex_state = 0},
  [1187] = {.lex_state = 10},
  [1188] = {.lex_state = 0},
  [1189] = {.lex_state = 0},
  [1190] = {.lex_state = 0},
  [1191] = {.lex_state = 0},
  [1192] = {.lex_state = 10},
  [1193] = {.lex_state = 0},
  [1194] = {.lex_state = 10},
  [1195] = {.lex_state = 10},
  [1196] = {.lex_state = 0},
  [1197] = {.lex_state = 10},
  [1198] = {.lex_state = 550},
  [1199] = {.lex_state = 550},
  [1200] = {.lex_state = 0},
  [1201] = {.lex_state = 0},
  [1202] = {.lex_state = 0},
  [1203] = {.lex_state = 0},
  [1204] = {.lex_state = 0},
  [1205] = {.lex_state = 0},
  [1206] = {.lex_state = 0},
  [1207] = {.lex_state = 10},
  [1208] = {.lex_state = 0},
  [1209] = {.lex_state = 0},
  [1210] = {.lex_state = 0},
  [1211] = {.lex_state = 0},
  [1212] = {.lex_state = 10},
  [1213] = {.lex_state = 0},
  [1214] = {.lex_state = 10},
  [1215] = {.lex_state = 0},
  [1216] = {.lex_state = 0},
  [1217] = {.lex_state = 10},
  [1218] = {.lex_state = 0},
  [1219] = {.lex_state = 0},
  [1220] = {.lex_state = 10},
  [1221] = {.lex_state = 10},
  [1222] = {.lex_state = 10},
  [1223] = {.lex_state = 0},
  [1224] = {.lex_state = 10},
  [1225] = {.lex_state = 10},
  [1226] = {.lex_state = 0},
  [1227] = {.lex_state = 0},
  [1228] = {.lex_state = 0},
  [1229] = {.lex_state = 0},
  [1230] = {.lex_state = 10},
  [1231] = {.lex_state = 10},
  [1232] = {.lex_state = 0},
  [1233] = {.lex_state = 0},
  [1234] = {.lex_state = 10},
  [1235] = {.lex_state = 0},
  [1236] = {.lex_state = 10},
  [1237] = {.lex_state = 551},
  [1238] = {.lex_state = 0},
  [1239] = {.lex_state = 10},
  [1240] = {.lex_state = 10},
  [1241] = {.lex_state = 10},
  [1242] = {.lex_state = 10},
  [1243] = {.lex_state = 550},
  [1244] = {.lex_state = 0},
  [1245] = {.lex_state = 0},
  [1246] = {.lex_state = 0},
  [1247] = {.lex_state = 13},
  [1248] = {.lex_state = 0},
  [1249] = {.lex_state = 10},
  [1250] = {.lex_state = 0},
  [1251] = {.lex_state = 10},
  [1252] = {.lex_state = 10},
  [1253] = {.lex_state = 0},
  [1254] = {.lex_state = 10},
  [1255] = {.lex_state = 0},
  [1256] = {.lex_state = 10},
  [1257] = {.lex_state = 0},
  [1258] = {.lex_state = 10},
  [1259] = {.lex_state = 0},
  [1260] = {.lex_state = 0},
  [1261] = {.lex_state = 10},
  [1262] = {.lex_state = 10},
  [1263] = {.lex_state = 0},
  [1264] = {.lex_state = 551},
  [1265] = {.lex_state = 0},
  [1266] = {.lex_state = 10},
  [1267] = {.lex_state = 0},
  [1268] = {.lex_state = 10},
  [1269] = {.lex_state = 0},
  [1270] = {.lex_state = 0},
  [1271] = {.lex_state = 10},
  [1272] = {.lex_state = 0},
  [1273] = {.lex_state = 0},
  [1274] = {.lex_state = 551},
  [1275] = {.lex_state = 0},
  [1276] = {.lex_state = 10},
  [1277] = {.lex_state = 0},
  [1278] = {.lex_state = 10},
  [1279] = {.lex_state = 10},
  [1280] = {.lex_state = 10},
  [1281] = {.lex_state = 10},
  [1282] = {.lex_state = 0},
  [1283] = {.lex_state = 0},
  [1284] = {.lex_state = 0},
  [1285] = {.lex_state = 550},
  [1286] = {.lex_state = 10},
  [1287] = {.lex_state = 10},
  [1288] = {.lex_state = 10},
  [1289] = {.lex_state = 0},
  [1290] = {.lex_state = 10},
  [1291] = {.lex_state = 0},
  [1292] = {.lex_state = 0},
  [1293] = {.lex_state = 10},
  [1294] = {.lex_state = 0},
  [1295] = {.lex_state = 0},
  [1296] = {.lex_state = 0},
  [1297] = {.lex_state = 10},
  [1298] = {.lex_state = 0},
  [1299] = {.lex_state = 0},
  [1300] = {.lex_state = 0},
  [1301] = {.lex_state = 0},
  [1302] = {.lex_state = 10},
  [1303] = {.lex_state = 10},
  [1304] = {.lex_state = 0},
  [1305] = {.lex_state = 0},
  [1306] = {.lex_state = 10},
  [1307] = {.lex_state = 10},
  [1308] = {.lex_state = 0},
  [1309] = {.lex_state = 0},
  [1310] = {.lex_state = 10},
  [1311] = {.lex_state = 10},
  [1312] = {.lex_state = 10},
  [1313] = {.lex_state = 0},
  [1314] = {.lex_state = 0},
  [1315] = {.lex_state = 10},
  [1316] = {.lex_state = 0},
  [1317] = {.lex_state = 0},
  [1318] = {.lex_state = 10},
  [1319] = {.lex_state = 0},
  [1320] = {.lex_state = 0},
  [1321] = {.lex_state = 0},
  [1322] = {.lex_state = 0},
  [1323] = {.lex_state = 550},
  [1324] = {.lex_state = 550},
  [1325] = {.lex_state = 10},
  [1326] = {.lex_state = 0},
  [1327] = {.lex_state = 0},
  [1328] = {.lex_state = 0},
  [1329] = {.lex_state = 10},
  [1330] = {.lex_state = 10},
  [1331] = {.lex_state = 0},
  [1332] = {.lex_state = 0},
  [1333] = {.lex_state = 0},
  [1334] = {.lex_state = 0},
  [1335] = {.lex_state = 10},
  [1336] = {.lex_state = 10},
  [1337] = {.lex_state = 0},
  [1338] = {.lex_state = 0},
  [1339] = {.lex_state = 0},
  [1340] = {.lex_state = 10},
  [1341] = {.lex_state = 10},
  [1342] = {.lex_state = 551},
  [1343] = {.lex_state = 13},
  [1344] = {.lex_state = 10},
  [1345] = {.lex_state = 0},
  [1346] = {.lex_state = 0},
  [1347] = {.lex_state = 0},
  [1348] = {.lex_state = 551},
  [1349] = {.lex_state = 10},
  [1350] = {.lex_state = 0},
  [1351] = {.lex_state = 13},
  [1352] = {.lex_state = 0},
  [1353] = {.lex_state = 0},
  [1354] = {.lex_state = 10},
  [1355] = {.lex_state = 10},
  [1356] = {.lex_state = 10},
  [1357] = {.lex_state = 0},
  [1358] = {.lex_state = 0},
  [1359] = {.lex_state = 0},
  [1360] = {.lex_state = 0},
  [1361] = {.lex_state = 0},
  [1362] = {.lex_state = 10},
  [1363] = {.lex_state = 0},
  [1364] = {.lex_state = 0},
  [1365] = {.lex_state = 10},
  [1366] = {.lex_state = 0},
  [1367] = {.lex_state = 0},
  [1368] = {.lex_state = 0},
  [1369] = {.lex_state = 10},
  [1370] = {.lex_state = 0},
  [1371] = {.lex_state = 551},
  [1372] = {.lex_state = 0},
  [1373] = {.lex_state = 0},
  [1374] = {.lex_state = 0},
  [1375] = {.lex_state = 0},
  [1376] = {.lex_state = 0},
  [1377] = {.lex_state = 551},
  [1378] = {.lex_state = 0},
  [1379] = {.lex_state = 0},
  [1380] = {.lex_state = 0},
  [1381] = {.lex_state = 0},
  [1382] = {.lex_state = 550},
  [1383] = {.lex_state = 0},
  [1384] = {.lex_state = 0},
  [1385] = {.lex_state = 0},
  [1386] = {.lex_state = 0},
  [1387] = {.lex_state = 0},
  [1388] = {.lex_state = 0},
  [1389] = {.lex_state = 0},
  [1390] = {.lex_state = 0},
  [1391] = {.lex_state = 0},
  [1392] = {.lex_state = 10},
  [1393] = {.lex_state = 0},
  [1394] = {.lex_state = 0},
  [1395] = {.lex_state = 0},
  [1396] = {.lex_state = 10},
  [1397] = {.lex_state = 0},
  [1398] = {.lex_state = 0},
  [1399] = {.lex_state = 0},
  [1400] = {.lex_state = 10},
  [1401] = {.lex_state = 0},
  [1402] = {.lex_state = 0},
  [1403] = {.lex_state = 0},
  [1404] = {.lex_state = 0},
  [1405] = {.lex_state = 0},
  [1406] = {.lex_state = 0},
  [1407] = {.lex_state = 10},
  [1408] = {.lex_state = 10},
  [1409] = {.lex_state = 0},
  [1410] = {.lex_state = 0},
  [1411] = {.lex_state = 0},
  [1412] = {.lex_state = 10},
  [1413] = {.lex_state = 551},
  [1414] = {.lex_state = 551},
  [1415] = {.lex_state = 10},
  [1416] = {.lex_state = 10},
  [1417] = {.lex_state = 0},
  [1418] = {.lex_state = 10},
  [1419] = {.lex_state = 10},
  [1420] = {.lex_state = 10},
  [1421] = {.lex_state = 0},
  [1422] = {.lex_state = 0},
  [1423] = {.lex_state = 0},
  [1424] = {.lex_state = 0},
  [1425] = {.lex_state = 0},
  [1426] = {.lex_state = 0},
  [1427] = {.lex_state = 0},
  [1428] = {.lex_state = 10},
  [1429] = {.lex_state = 10},
  [1430] = {.lex_state = 0},
  [1431] = {.lex_state = 10},
  [1432] = {.lex_state = 0},
  [1433] = {.lex_state = 0},
  [1434] = {.lex_state = 10},
  [1435] = {.lex_state = 10},
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
    [aux_sym_revoke_token1] = ACTIONS(1),
    [aux_sym_priviledge_token1] = ACTIONS(1),
    [aux_sym_priviledge_token2] = ACTIONS(1),
    [aux_sym_priviledge_token3] = ACTIONS(1),
    [aux_sym_priviledge_token4] = ACTIONS(1),
    [aux_sym_priviledge_token6] = ACTIONS(1),
    [aux_sym_priviledge_token7] = ACTIONS(1),
    [aux_sym_resource_token2] = ACTIONS(1),
    [aux_sym_resource_token5] = ACTIONS(1),
    [aux_sym_resource_token6] = ACTIONS(1),
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
    [sym_source_file] = STATE(1432),
    [sym__statement] = STATE(3),
    [sym_select_statement] = STATE(421),
    [sym_delete_statement] = STATE(421),
    [sym_begin_batch] = STATE(604),
    [sym_insert_statement] = STATE(421),
    [sym_truncate] = STATE(421),
    [sym_create_index] = STATE(421),
    [sym_drop_index] = STATE(421),
    [sym_update] = STATE(421),
    [sym_use] = STATE(421),
    [sym_grant] = STATE(421),
    [sym_revoke] = STATE(421),
    [sym_list_roles] = STATE(421),
    [sym_list_permissions] = STATE(421),
    [sym_drop_aggregate] = STATE(421),
    [sym_drop_materialized_view] = STATE(421),
    [sym_drop_function] = STATE(421),
    [sym_drop_keyspace] = STATE(421),
    [sym_drop_role] = STATE(421),
    [sym_drop_table] = STATE(421),
    [sym_drop_trigger] = STATE(421),
    [sym_drop_type] = STATE(421),
    [sym_drop_user] = STATE(421),
    [sym_create_aggregate] = STATE(421),
    [sym_create_materialized_view] = STATE(421),
    [sym_create_function] = STATE(421),
    [sym_create_keyspace] = STATE(421),
    [sym_create_role] = STATE(421),
    [sym_create_table] = STATE(421),
    [sym_create_trigger] = STATE(421),
    [sym_create_type] = STATE(421),
    [sym_create_user] = STATE(421),
    [sym_alter_materialized_view] = STATE(421),
    [sym_alter_keyspace] = STATE(421),
    [sym_alter_role] = STATE(421),
    [sym_alter_table] = STATE(421),
    [sym_alter_type] = STATE(421),
    [sym_alter_user] = STATE(421),
    [sym_apply_batch] = STATE(421),
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
    [aux_sym_revoke_token1] = ACTIONS(25),
    [aux_sym_priviledge_token3] = ACTIONS(27),
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
      aux_sym_revoke_token1,
    ACTIONS(68), 1,
      aux_sym_priviledge_token3,
    ACTIONS(71), 1,
      aux_sym_list_roles_token1,
    ACTIONS(74), 1,
      aux_sym_apply_batch_token1,
    STATE(604), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(421), 37,
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
      aux_sym_revoke_token1,
    ACTIONS(27), 1,
      aux_sym_priviledge_token3,
    ACTIONS(29), 1,
      aux_sym_list_roles_token1,
    ACTIONS(31), 1,
      aux_sym_apply_batch_token1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(604), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(421), 37,
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
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
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
      aux_sym_delete_statement_token2,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [221] = 1,
    ACTIONS(83), 30,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [254] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(998), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [289] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1226), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [324] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1073), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [359] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1301), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [394] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1294), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [429] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1164), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [464] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1289), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [499] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1273), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [534] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(726), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [569] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1267), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [604] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1165), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [639] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1263), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [674] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1257), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [709] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(319), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [744] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1168), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [779] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1253), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [814] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1034), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [849] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1376), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [884] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(139), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [919] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(159), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [954] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1101), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [989] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(640), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1024] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1159), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1059] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(250), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1094] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(553), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1129] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1209), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1164] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(913), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1199] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1370), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1234] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(919), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1269] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1179), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1304] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1184), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1339] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1140), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1374] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1191), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1409] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(942), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1444] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(960), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1479] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1069), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1514] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1134), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1549] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1130), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1584] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(784), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1619] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(679), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1654] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(706), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1689] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1030), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1724] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1331), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1759] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(792), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1794] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1213), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1829] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1158), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1864] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1004), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1899] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1009), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1934] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(909), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [1969] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1012), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [2004] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(973), 1,
      sym_data_type,
    ACTIONS(85), 26,
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
      sym_object_name,
  [2039] = 2,
    STATE(797), 1,
      sym_data_type_name,
    ACTIONS(85), 26,
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
      sym_object_name,
  [2071] = 2,
    STATE(670), 1,
      sym_data_type_name,
    ACTIONS(85), 26,
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
      sym_object_name,
  [2103] = 3,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(87), 23,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2135] = 1,
    ACTIONS(92), 24,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2162] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(94), 22,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2193] = 1,
    ACTIONS(87), 24,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2220] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(98), 22,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2251] = 1,
    ACTIONS(100), 24,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2278] = 1,
    ACTIONS(102), 24,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2305] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(104), 22,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2336] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(106), 22,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2367] = 1,
    ACTIONS(108), 23,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [2393] = 8,
    ACTIONS(112), 1,
      aux_sym_select_statement_token4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    STATE(89), 1,
      sym_where_spec,
    STATE(128), 1,
      sym_order_spec,
    STATE(231), 1,
      sym_limit_spec,
    ACTIONS(110), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2433] = 8,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(122), 1,
      aux_sym_select_statement_token4,
    STATE(92), 1,
      sym_where_spec,
    STATE(133), 1,
      sym_order_spec,
    STATE(245), 1,
      sym_limit_spec,
    ACTIONS(120), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2473] = 3,
    ACTIONS(126), 1,
      anon_sym_LT,
    STATE(95), 1,
      sym_data_type_definition,
    ACTIONS(124), 21,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [2503] = 8,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(130), 1,
      aux_sym_select_statement_token4,
    STATE(91), 1,
      sym_where_spec,
    STATE(107), 1,
      sym_order_spec,
    STATE(236), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2543] = 3,
    ACTIONS(134), 1,
      aux_sym_relation_elements_token1,
    STATE(87), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(132), 20,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2572] = 1,
    ACTIONS(136), 22,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2597] = 1,
    ACTIONS(138), 22,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2622] = 1,
    ACTIONS(140), 22,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2647] = 8,
    ACTIONS(146), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(148), 1,
      sym_object_name,
    STATE(124), 1,
      sym_table_option_item,
    STATE(135), 1,
      sym_table_options,
    STATE(311), 1,
      sym_clustering_order,
    STATE(1115), 1,
      sym_table_option_name,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(144), 14,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2686] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2711] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2738] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2763] = 1,
    ACTIONS(158), 22,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2788] = 3,
    ACTIONS(134), 1,
      aux_sym_relation_elements_token1,
    STATE(73), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(160), 20,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2817] = 1,
    ACTIONS(162), 22,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2842] = 1,
    ACTIONS(164), 22,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2867] = 1,
    ACTIONS(166), 22,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2892] = 1,
    ACTIONS(168), 22,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2917] = 3,
    ACTIONS(172), 1,
      aux_sym_relation_elements_token1,
    STATE(87), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(170), 20,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2946] = 1,
    ACTIONS(175), 21,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [2970] = 6,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(130), 1,
      aux_sym_select_statement_token4,
    STATE(107), 1,
      sym_order_spec,
    STATE(236), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3004] = 3,
    STATE(167), 1,
      sym_order_direction,
    ACTIONS(179), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(177), 18,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3032] = 6,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(122), 1,
      aux_sym_select_statement_token4,
    STATE(133), 1,
      sym_order_spec,
    STATE(245), 1,
      sym_limit_spec,
    ACTIONS(120), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3066] = 6,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(183), 1,
      aux_sym_select_statement_token4,
    STATE(127), 1,
      sym_order_spec,
    STATE(247), 1,
      sym_limit_spec,
    ACTIONS(181), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3100] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [3124] = 1,
    ACTIONS(187), 21,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3148] = 1,
    ACTIONS(189), 21,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [3172] = 1,
    ACTIONS(170), 21,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3196] = 2,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(191), 19,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3221] = 2,
    ACTIONS(197), 1,
      anon_sym_DOT,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3246] = 1,
    ACTIONS(199), 20,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3269] = 2,
    ACTIONS(203), 1,
      anon_sym_DOT,
    ACTIONS(201), 19,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3294] = 2,
    ACTIONS(207), 1,
      aux_sym_relation_element_token1,
    ACTIONS(205), 19,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3319] = 3,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(209), 18,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3346] = 3,
    STATE(334), 1,
      sym_user_super_user,
    ACTIONS(216), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(214), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3372] = 4,
    ACTIONS(220), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(222), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(323), 1,
      sym_using_ttl_timestamp,
    ACTIONS(218), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3400] = 1,
    ACTIONS(224), 19,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3422] = 1,
    ACTIONS(226), 19,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [3444] = 4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_select_statement_token4,
    STATE(245), 1,
      sym_limit_spec,
    ACTIONS(120), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3472] = 4,
    ACTIONS(222), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(230), 1,
      aux_sym_delete_statement_token2,
    STATE(275), 1,
      sym_using_ttl_timestamp,
    ACTIONS(228), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3500] = 4,
    ACTIONS(222), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(234), 1,
      aux_sym_delete_statement_token2,
    STATE(380), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3528] = 1,
    ACTIONS(236), 19,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3550] = 4,
    ACTIONS(222), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(240), 1,
      aux_sym_delete_statement_token2,
    STATE(417), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3578] = 4,
    ACTIONS(222), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(244), 1,
      aux_sym_delete_statement_token2,
    STATE(303), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3606] = 2,
    ACTIONS(248), 1,
      aux_sym_priviledge_token2,
    ACTIONS(246), 18,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3630] = 1,
    ACTIONS(250), 19,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [3652] = 3,
    STATE(349), 1,
      sym_user_super_user,
    ACTIONS(216), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(252), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3678] = 4,
    ACTIONS(222), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(256), 1,
      aux_sym_delete_statement_token2,
    STATE(305), 1,
      sym_using_ttl_timestamp,
    ACTIONS(254), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3706] = 3,
    ACTIONS(260), 1,
      aux_sym_relation_elements_token1,
    STATE(130), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(258), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [3732] = 1,
    ACTIONS(262), 19,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3754] = 1,
    ACTIONS(205), 19,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3776] = 1,
    ACTIONS(264), 19,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3798] = 1,
    ACTIONS(266), 19,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3820] = 1,
    ACTIONS(268), 19,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3842] = 1,
    ACTIONS(270), 19,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3864] = 3,
    ACTIONS(260), 1,
      aux_sym_relation_elements_token1,
    STATE(117), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(272), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [3890] = 4,
    ACTIONS(222), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(276), 1,
      aux_sym_delete_statement_token2,
    STATE(431), 1,
      sym_using_ttl_timestamp,
    ACTIONS(274), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3918] = 3,
    STATE(262), 1,
      sym_user_super_user,
    ACTIONS(216), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(278), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3944] = 4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(282), 1,
      aux_sym_select_statement_token4,
    STATE(256), 1,
      sym_limit_spec,
    ACTIONS(280), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3972] = 4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(130), 1,
      aux_sym_select_statement_token4,
    STATE(236), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4000] = 4,
    ACTIONS(222), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(286), 1,
      aux_sym_delete_statement_token2,
    STATE(272), 1,
      sym_using_ttl_timestamp,
    ACTIONS(284), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4028] = 3,
    ACTIONS(290), 1,
      aux_sym_relation_elements_token1,
    STATE(130), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(288), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4054] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [4076] = 1,
    ACTIONS(295), 19,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [4098] = 4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(183), 1,
      aux_sym_select_statement_token4,
    STATE(247), 1,
      sym_limit_spec,
    ACTIONS(181), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4126] = 1,
    ACTIONS(297), 18,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4147] = 3,
    ACTIONS(301), 1,
      aux_sym_clustering_order_token1,
    STATE(378), 1,
      sym_clustering_order,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4172] = 3,
    ACTIONS(305), 1,
      aux_sym_delete_statement_token2,
    STATE(297), 1,
      sym_if_spec,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4197] = 3,
    ACTIONS(309), 1,
      aux_sym_relation_elements_token1,
    STATE(182), 1,
      aux_sym_alter_type_rename_list_repeat1,
    ACTIONS(307), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4222] = 2,
    STATE(130), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(258), 17,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4245] = 3,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(311), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4270] = 2,
    ACTIONS(317), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(315), 17,
      ts_builtin_sym_end,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4293] = 3,
    ACTIONS(321), 1,
      aux_sym_relation_elements_token1,
    STATE(171), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4318] = 2,
    ACTIONS(323), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(315), 17,
      ts_builtin_sym_end,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4341] = 3,
    ACTIONS(327), 1,
      aux_sym_delete_statement_token2,
    STATE(293), 1,
      sym_if_spec,
    ACTIONS(325), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4366] = 1,
    ACTIONS(329), 18,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [4387] = 3,
    ACTIONS(333), 1,
      anon_sym_DOT,
    ACTIONS(335), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(331), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4412] = 3,
    ACTIONS(339), 1,
      aux_sym_delete_statement_token2,
    STATE(397), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4437] = 3,
    ACTIONS(222), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(355), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4462] = 3,
    ACTIONS(345), 1,
      aux_sym_delete_statement_token2,
    STATE(370), 1,
      sym_if_spec,
    ACTIONS(343), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4487] = 3,
    ACTIONS(349), 1,
      aux_sym_create_materialized_view_token2,
    STATE(271), 1,
      sym_role_with,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4512] = 2,
    STATE(138), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(272), 17,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4535] = 3,
    ACTIONS(353), 1,
      aux_sym_delete_statement_token2,
    STATE(381), 1,
      sym_if_spec,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4560] = 1,
    ACTIONS(355), 18,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4581] = 3,
    ACTIONS(359), 1,
      aux_sym_delete_statement_token2,
    STATE(385), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4606] = 1,
    ACTIONS(361), 18,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4627] = 3,
    ACTIONS(365), 1,
      aux_sym_delete_statement_token2,
    STATE(396), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4652] = 3,
    ACTIONS(369), 1,
      aux_sym_delete_statement_token2,
    STATE(425), 1,
      sym_if_spec,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4677] = 1,
    ACTIONS(288), 18,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [4698] = 1,
    ACTIONS(371), 18,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4719] = 3,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(373), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4744] = 3,
    ACTIONS(222), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(322), 1,
      sym_using_ttl_timestamp,
    ACTIONS(375), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4769] = 3,
    ACTIONS(222), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(418), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4794] = 3,
    ACTIONS(309), 1,
      aux_sym_relation_elements_token1,
    STATE(137), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4819] = 3,
    ACTIONS(222), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(344), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4844] = 3,
    ACTIONS(222), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(308), 1,
      sym_using_ttl_timestamp,
    ACTIONS(383), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4869] = 3,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4894] = 3,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(390), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4919] = 1,
    ACTIONS(394), 18,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4940] = 3,
    ACTIONS(398), 1,
      aux_sym_delete_statement_token2,
    STATE(267), 1,
      sym_if_spec,
    ACTIONS(396), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4965] = 1,
    ACTIONS(400), 18,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4986] = 3,
    ACTIONS(404), 1,
      aux_sym_delete_statement_token2,
    STATE(325), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5011] = 3,
    ACTIONS(408), 1,
      aux_sym_relation_elements_token1,
    STATE(171), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5036] = 3,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_column_list_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5061] = 3,
    ACTIONS(415), 1,
      aux_sym_delete_statement_token2,
    STATE(314), 1,
      sym_if_spec,
    ACTIONS(413), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5086] = 3,
    ACTIONS(419), 1,
      aux_sym_delete_statement_token2,
    STATE(306), 1,
      sym_if_spec,
    ACTIONS(417), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5111] = 1,
    ACTIONS(421), 18,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5132] = 3,
    ACTIONS(425), 1,
      aux_sym_create_materialized_view_token2,
    STATE(363), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5157] = 3,
    ACTIONS(349), 1,
      aux_sym_create_materialized_view_token2,
    STATE(317), 1,
      sym_role_with,
    ACTIONS(427), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5182] = 1,
    ACTIONS(429), 18,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5203] = 3,
    ACTIONS(433), 1,
      aux_sym_delete_statement_token2,
    STATE(432), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5228] = 3,
    ACTIONS(425), 1,
      aux_sym_create_materialized_view_token2,
    STATE(320), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5253] = 1,
    ACTIONS(437), 18,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [5274] = 3,
    ACTIONS(441), 1,
      aux_sym_relation_elements_token1,
    STATE(182), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5299] = 3,
    ACTIONS(321), 1,
      aux_sym_relation_elements_token1,
    STATE(141), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(444), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5324] = 1,
    ACTIONS(446), 18,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5345] = 3,
    ACTIONS(450), 1,
      aux_sym_delete_statement_token2,
    STATE(389), 1,
      sym_if_spec,
    ACTIONS(448), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5370] = 3,
    ACTIONS(222), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(289), 1,
      sym_using_ttl_timestamp,
    ACTIONS(452), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5395] = 3,
    ACTIONS(456), 1,
      aux_sym_delete_statement_token2,
    STATE(310), 1,
      sym_if_spec,
    ACTIONS(454), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5420] = 1,
    ACTIONS(458), 18,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [5441] = 3,
    ACTIONS(425), 1,
      aux_sym_create_materialized_view_token2,
    STATE(337), 1,
      sym_with_element,
    ACTIONS(460), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5466] = 3,
    ACTIONS(349), 1,
      aux_sym_create_materialized_view_token2,
    STATE(339), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5491] = 3,
    ACTIONS(222), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(338), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5516] = 3,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(466), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5541] = 1,
    ACTIONS(246), 18,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [5562] = 3,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5587] = 3,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5612] = 1,
    ACTIONS(474), 18,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5633] = 3,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(476), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5658] = 3,
    ACTIONS(425), 1,
      aux_sym_create_materialized_view_token2,
    STATE(398), 1,
      sym_with_element,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5683] = 3,
    ACTIONS(222), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(407), 1,
      sym_using_ttl_timestamp,
    ACTIONS(480), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5708] = 3,
    ACTIONS(484), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(482), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5733] = 8,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      sym_decimal_literal,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
    STATE(696), 1,
      sym_expression,
    STATE(1099), 1,
      sym_expression_list,
    STATE(777), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [5768] = 1,
    ACTIONS(497), 18,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5789] = 1,
    ACTIONS(499), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
      aux_sym_apply_batch_token1,
  [5810] = 3,
    ACTIONS(503), 1,
      aux_sym_create_index_token3,
    ACTIONS(505), 1,
      aux_sym_list_roles_token2,
    ACTIONS(501), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5835] = 3,
    ACTIONS(509), 1,
      aux_sym_delete_statement_token2,
    STATE(406), 1,
      sym_if_spec,
    ACTIONS(507), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5860] = 1,
    ACTIONS(511), 18,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5881] = 3,
    ACTIONS(515), 1,
      aux_sym_list_roles_token2,
    ACTIONS(517), 1,
      aux_sym_list_roles_token3,
    ACTIONS(513), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5906] = 2,
    ACTIONS(521), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(519), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5928] = 1,
    ACTIONS(523), 17,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5948] = 1,
    ACTIONS(482), 17,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5968] = 2,
    ACTIONS(527), 1,
      anon_sym_DOT,
    ACTIONS(525), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5990] = 2,
    ACTIONS(531), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(529), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6012] = 2,
    ACTIONS(535), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(533), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6034] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6056] = 1,
    ACTIONS(541), 17,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6076] = 1,
    ACTIONS(439), 17,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6096] = 2,
    ACTIONS(545), 1,
      anon_sym_DOT,
    ACTIONS(543), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6118] = 7,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      sym_decimal_literal,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
    STATE(763), 1,
      sym_expression,
    STATE(777), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [6150] = 2,
    ACTIONS(549), 1,
      anon_sym_DOT,
    ACTIONS(547), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6172] = 2,
    ACTIONS(553), 1,
      anon_sym_DOT,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6194] = 2,
    ACTIONS(557), 1,
      anon_sym_DOT,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6216] = 1,
    ACTIONS(559), 17,
      ts_builtin_sym_end,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6236] = 2,
    ACTIONS(563), 1,
      anon_sym_DOT,
    ACTIONS(561), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6258] = 2,
    ACTIONS(567), 1,
      anon_sym_DOT,
    ACTIONS(565), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6280] = 2,
    ACTIONS(571), 1,
      anon_sym_DOT,
    ACTIONS(569), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6302] = 2,
    ACTIONS(575), 1,
      anon_sym_DOT,
    ACTIONS(573), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6324] = 2,
    ACTIONS(579), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(577), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6346] = 1,
    ACTIONS(581), 17,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6366] = 2,
    ACTIONS(585), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(583), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6388] = 2,
    ACTIONS(589), 1,
      anon_sym_DOT,
    ACTIONS(587), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6410] = 2,
    ACTIONS(130), 1,
      aux_sym_select_statement_token4,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6432] = 2,
    ACTIONS(593), 1,
      anon_sym_DOT,
    ACTIONS(591), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6454] = 1,
    ACTIONS(406), 17,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6474] = 1,
    ACTIONS(595), 17,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6494] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6516] = 2,
    ACTIONS(122), 1,
      aux_sym_select_statement_token4,
    ACTIONS(120), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6538] = 2,
    ACTIONS(603), 1,
      aux_sym_create_materialized_view_token2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6560] = 2,
    ACTIONS(607), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6582] = 2,
    ACTIONS(611), 1,
      anon_sym_DOT,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6604] = 2,
    ACTIONS(615), 1,
      anon_sym_DOT,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6626] = 2,
    ACTIONS(619), 1,
      anon_sym_DOT,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6648] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6670] = 2,
    ACTIONS(627), 1,
      aux_sym_list_roles_token2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6692] = 2,
    ACTIONS(631), 1,
      aux_sym_list_roles_token3,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6714] = 2,
    ACTIONS(183), 1,
      aux_sym_select_statement_token4,
    ACTIONS(181), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6736] = 2,
    ACTIONS(635), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6758] = 2,
    ACTIONS(282), 1,
      aux_sym_select_statement_token4,
    ACTIONS(280), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6780] = 2,
    ACTIONS(639), 1,
      anon_sym_DOT,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6802] = 2,
    ACTIONS(643), 1,
      aux_sym_create_materialized_view_token2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6824] = 1,
    ACTIONS(645), 17,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6844] = 2,
    ACTIONS(649), 1,
      aux_sym_create_materialized_view_token2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6866] = 2,
    ACTIONS(653), 1,
      anon_sym_DOT,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6888] = 2,
    ACTIONS(657), 1,
      anon_sym_DOT,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6910] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6932] = 2,
    ACTIONS(665), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(663), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6954] = 2,
    ACTIONS(669), 1,
      aux_sym_select_statement_token4,
    ACTIONS(667), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6976] = 2,
    ACTIONS(673), 1,
      anon_sym_DOT,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6998] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7017] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7036] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7055] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7074] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7093] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7112] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7131] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7150] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7169] = 1,
    ACTIONS(413), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7188] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7207] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7226] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7245] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7264] = 1,
    ACTIONS(254), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7283] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7302] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7321] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7340] = 1,
    ACTIONS(280), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7359] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7378] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7397] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7416] = 1,
    ACTIONS(667), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7435] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7454] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7473] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7492] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7511] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7530] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7549] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7568] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7587] = 1,
    ACTIONS(383), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7606] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7625] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7644] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7663] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7682] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7701] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7720] = 1,
    ACTIONS(120), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7739] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7758] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7777] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7796] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7815] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7834] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7853] = 1,
    ACTIONS(228), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7872] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7891] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7910] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7929] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7948] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7967] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7986] = 1,
    ACTIONS(448), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8005] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8024] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8043] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8062] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8081] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8100] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8119] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8138] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8157] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8176] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8195] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8214] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8233] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8252] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8271] = 1,
    ACTIONS(507), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8290] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8309] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8328] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8347] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8366] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8385] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8404] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8423] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8442] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8461] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8480] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8499] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8518] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8537] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8556] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8575] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8594] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8613] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8632] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8651] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8670] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8689] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8708] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8727] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8746] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8765] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8784] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8803] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8822] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8841] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8860] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8879] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8898] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8917] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8936] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8955] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8974] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8993] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9012] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9031] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9050] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9069] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9088] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9107] = 1,
    ACTIONS(547), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9126] = 1,
    ACTIONS(454), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9145] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9164] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9183] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9202] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9221] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9240] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9259] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9278] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9297] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9316] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9335] = 1,
    ACTIONS(396), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9354] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9373] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9392] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9411] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9430] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9449] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9468] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9487] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9506] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9525] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9544] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9563] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9582] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9601] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9620] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9639] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9658] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9677] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9696] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9715] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9734] = 1,
    ACTIONS(663), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9753] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9772] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9791] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9810] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9829] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9848] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9867] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9886] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9905] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9924] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9943] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9962] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9981] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10000] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10019] = 1,
    ACTIONS(274), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10038] = 1,
    ACTIONS(375), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10057] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10076] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10095] = 2,
    ACTIONS(955), 1,
      anon_sym_SEMI,
    ACTIONS(953), 15,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10116] = 1,
    ACTIONS(181), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10135] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10154] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10173] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10192] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10211] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10230] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10249] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10268] = 1,
    ACTIONS(969), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10287] = 1,
    ACTIONS(971), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10306] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10325] = 7,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
    ACTIONS(973), 1,
      sym_object_name,
    STATE(788), 1,
      sym_constant,
    ACTIONS(491), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    STATE(556), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(489), 5,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10355] = 1,
    ACTIONS(975), 15,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10373] = 5,
    ACTIONS(491), 1,
      sym_decimal_literal,
    ACTIONS(977), 1,
      anon_sym_LPAREN,
    STATE(395), 1,
      sym_init_cond_definition,
    STATE(178), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10398] = 5,
    ACTIONS(491), 1,
      sym_decimal_literal,
    ACTIONS(977), 1,
      anon_sym_LPAREN,
    STATE(785), 1,
      sym_init_cond_definition,
    STATE(178), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10423] = 5,
    ACTIONS(491), 1,
      sym_decimal_literal,
    ACTIONS(977), 1,
      anon_sym_LPAREN,
    STATE(394), 1,
      sym_init_cond_definition,
    STATE(178), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10448] = 5,
    ACTIONS(491), 1,
      sym_decimal_literal,
    ACTIONS(977), 1,
      anon_sym_LPAREN,
    STATE(333), 1,
      sym_init_cond_definition,
    STATE(178), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10473] = 5,
    ACTIONS(491), 1,
      sym_decimal_literal,
    ACTIONS(977), 1,
      anon_sym_LPAREN,
    STATE(387), 1,
      sym_init_cond_definition,
    STATE(178), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10498] = 5,
    ACTIONS(491), 1,
      sym_decimal_literal,
    ACTIONS(977), 1,
      anon_sym_LPAREN,
    STATE(281), 1,
      sym_init_cond_definition,
    STATE(178), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10523] = 5,
    ACTIONS(491), 1,
      sym_decimal_literal,
    ACTIONS(977), 1,
      anon_sym_LPAREN,
    STATE(290), 1,
      sym_init_cond_definition,
    STATE(178), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10548] = 5,
    ACTIONS(491), 1,
      sym_decimal_literal,
    ACTIONS(977), 1,
      anon_sym_LPAREN,
    STATE(316), 1,
      sym_init_cond_definition,
    STATE(178), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10573] = 5,
    ACTIONS(491), 1,
      sym_decimal_literal,
    ACTIONS(977), 1,
      anon_sym_LPAREN,
    STATE(261), 1,
      sym_init_cond_definition,
    STATE(178), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10598] = 6,
    ACTIONS(979), 1,
      anon_sym_STAR,
    ACTIONS(981), 1,
      sym_object_name,
    STATE(1353), 1,
      sym_function_args,
    STATE(691), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(491), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    ACTIONS(489), 5,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10624] = 7,
    ACTIONS(983), 1,
      anon_sym_LPAREN,
    ACTIONS(985), 1,
      sym_object_name,
    STATE(611), 1,
      sym_constant,
    STATE(612), 1,
      sym_init_cond_list,
    STATE(613), 1,
      sym_init_cond_hash_item,
    ACTIONS(491), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    ACTIONS(489), 5,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10652] = 5,
    ACTIONS(981), 1,
      sym_object_name,
    STATE(1007), 1,
      sym_function_args,
    STATE(691), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(491), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    ACTIONS(489), 5,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10675] = 7,
    ACTIONS(987), 1,
      anon_sym_DOT,
    ACTIONS(989), 1,
      aux_sym_drop_index_token1,
    ACTIONS(991), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(993), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(995), 1,
      aux_sym_alter_table_rename_token1,
    STATE(268), 1,
      sym_alter_table_operation,
    STATE(269), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10701] = 4,
    ACTIONS(997), 1,
      sym_object_name,
    STATE(874), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(491), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    ACTIONS(489), 5,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10721] = 4,
    ACTIONS(1001), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1003), 1,
      aux_sym_resource_token4,
    STATE(204), 1,
      sym_priviledge,
    ACTIONS(999), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10741] = 4,
    ACTIONS(491), 1,
      sym_decimal_literal,
    ACTIONS(983), 1,
      anon_sym_LPAREN,
    STATE(780), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10761] = 5,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      sym_decimal_literal,
    STATE(62), 1,
      sym_assignment_tuple,
    STATE(533), 1,
      sym_constant,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10783] = 11,
    ACTIONS(1005), 1,
      aux_sym_truncate_token2,
    ACTIONS(1007), 1,
      aux_sym_create_index_token2,
    ACTIONS(1009), 1,
      aux_sym_resource_token2,
    ACTIONS(1011), 1,
      aux_sym_resource_token5,
    ACTIONS(1013), 1,
      aux_sym_resource_token6,
    ACTIONS(1015), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(1017), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1019), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(1021), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1023), 1,
      aux_sym_drop_user_token1,
    ACTIONS(1025), 1,
      aux_sym_create_aggregate_token1,
  [10817] = 4,
    ACTIONS(1027), 1,
      sym_object_name,
    STATE(86), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(491), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    ACTIONS(489), 5,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10837] = 6,
    ACTIONS(1029), 1,
      anon_sym_DOT,
    ACTIONS(1031), 1,
      anon_sym_LPAREN,
    ACTIONS(1037), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1039), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(1033), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1035), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10860] = 3,
    ACTIONS(1001), 1,
      aux_sym_priviledge_token1,
    STATE(1422), 1,
      sym_priviledge,
    ACTIONS(999), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10877] = 6,
    ACTIONS(989), 1,
      aux_sym_drop_index_token1,
    ACTIONS(991), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(993), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(995), 1,
      aux_sym_alter_table_rename_token1,
    STATE(298), 1,
      sym_alter_table_operation,
    STATE(269), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10900] = 4,
    ACTIONS(491), 1,
      sym_decimal_literal,
    ACTIONS(1041), 1,
      aux_sym_relation_contains_key_token2,
    STATE(74), 1,
      sym_constant,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10919] = 4,
    ACTIONS(491), 1,
      sym_decimal_literal,
    ACTIONS(1043), 1,
      anon_sym_RBRACE,
    STATE(579), 1,
      sym_constant,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10938] = 10,
    ACTIONS(1045), 1,
      aux_sym_truncate_token2,
    ACTIONS(1047), 1,
      aux_sym_create_index_token2,
    ACTIONS(1049), 1,
      aux_sym_resource_token2,
    ACTIONS(1051), 1,
      aux_sym_resource_token5,
    ACTIONS(1053), 1,
      aux_sym_resource_token6,
    ACTIONS(1055), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(1057), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1059), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(1061), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1063), 1,
      aux_sym_drop_user_token1,
  [10969] = 3,
    ACTIONS(1001), 1,
      aux_sym_priviledge_token1,
    STATE(1424), 1,
      sym_priviledge,
    ACTIONS(999), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10986] = 3,
    ACTIONS(491), 1,
      sym_decimal_literal,
    STATE(84), 1,
      sym_constant,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11002] = 3,
    ACTIONS(491), 1,
      sym_decimal_literal,
    STATE(856), 1,
      sym_constant,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11018] = 3,
    ACTIONS(491), 1,
      sym_decimal_literal,
    STATE(741), 1,
      sym_constant,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11034] = 3,
    ACTIONS(491), 1,
      sym_decimal_literal,
    STATE(234), 1,
      sym_constant,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11050] = 3,
    ACTIONS(491), 1,
      sym_decimal_literal,
    STATE(196), 1,
      sym_constant,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11066] = 3,
    ACTIONS(491), 1,
      sym_decimal_literal,
    STATE(533), 1,
      sym_constant,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11082] = 3,
    ACTIONS(491), 1,
      sym_decimal_literal,
    STATE(1051), 1,
      sym_constant,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11098] = 3,
    ACTIONS(491), 1,
      sym_decimal_literal,
    STATE(611), 1,
      sym_constant,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11114] = 3,
    ACTIONS(491), 1,
      sym_decimal_literal,
    STATE(500), 1,
      sym_constant,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11130] = 3,
    ACTIONS(491), 1,
      sym_decimal_literal,
    STATE(622), 1,
      sym_constant,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11146] = 3,
    ACTIONS(491), 1,
      sym_decimal_literal,
    STATE(85), 1,
      sym_constant,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11162] = 3,
    ACTIONS(491), 1,
      sym_decimal_literal,
    STATE(587), 1,
      sym_constant,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11178] = 3,
    ACTIONS(491), 1,
      sym_decimal_literal,
    STATE(75), 1,
      sym_constant,
    ACTIONS(489), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym_string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11194] = 6,
    ACTIONS(1065), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1067), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1069), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1071), 1,
      sym_object_name,
    STATE(895), 1,
      sym_index_column_spec,
    STATE(1081), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11215] = 6,
    ACTIONS(1065), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1067), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1069), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1071), 1,
      sym_object_name,
    STATE(990), 1,
      sym_index_column_spec,
    STATE(1081), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11236] = 6,
    ACTIONS(1065), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1067), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1069), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1071), 1,
      sym_object_name,
    STATE(935), 1,
      sym_index_column_spec,
    STATE(1081), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11257] = 6,
    ACTIONS(1065), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1067), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1069), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1071), 1,
      sym_object_name,
    STATE(1122), 1,
      sym_index_column_spec,
    STATE(1081), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11278] = 6,
    ACTIONS(1065), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1067), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1069), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1071), 1,
      sym_object_name,
    STATE(1083), 1,
      sym_index_column_spec,
    STATE(1081), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11299] = 6,
    ACTIONS(1065), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1067), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1069), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1071), 1,
      sym_object_name,
    STATE(892), 1,
      sym_index_column_spec,
    STATE(1081), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11320] = 6,
    ACTIONS(1073), 1,
      anon_sym_DOT,
    ACTIONS(1075), 1,
      aux_sym_priviledge_token3,
    ACTIONS(1077), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1079), 1,
      aux_sym_alter_table_rename_token1,
    STATE(277), 1,
      sym_alter_type_operation,
    STATE(278), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [11341] = 6,
    ACTIONS(1065), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1067), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1069), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1071), 1,
      sym_object_name,
    STATE(985), 1,
      sym_index_column_spec,
    STATE(1081), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11362] = 6,
    ACTIONS(1065), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1067), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1069), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1071), 1,
      sym_object_name,
    STATE(1062), 1,
      sym_index_column_spec,
    STATE(1081), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11383] = 7,
    ACTIONS(1081), 1,
      aux_sym_select_statement_token2,
    ACTIONS(1083), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1085), 1,
      anon_sym_STAR,
    ACTIONS(1087), 1,
      sym_object_name,
    STATE(615), 1,
      sym_select_element,
    STATE(617), 1,
      sym_function_call,
    STATE(848), 1,
      sym_select_elements,
  [11405] = 7,
    ACTIONS(146), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(148), 1,
      sym_object_name,
    STATE(150), 1,
      sym_table_option_item,
    STATE(255), 1,
      sym_table_options,
    STATE(346), 1,
      sym_materialized_view_options,
    STATE(402), 1,
      sym_clustering_order,
    STATE(1115), 1,
      sym_table_option_name,
  [11427] = 7,
    ACTIONS(146), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(148), 1,
      sym_object_name,
    STATE(150), 1,
      sym_table_option_item,
    STATE(255), 1,
      sym_table_options,
    STATE(402), 1,
      sym_clustering_order,
    STATE(403), 1,
      sym_materialized_view_options,
    STATE(1115), 1,
      sym_table_option_name,
  [11449] = 7,
    ACTIONS(146), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(148), 1,
      sym_object_name,
    STATE(150), 1,
      sym_table_option_item,
    STATE(255), 1,
      sym_table_options,
    STATE(291), 1,
      sym_materialized_view_options,
    STATE(402), 1,
      sym_clustering_order,
    STATE(1115), 1,
      sym_table_option_name,
  [11471] = 7,
    ACTIONS(146), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(148), 1,
      sym_object_name,
    STATE(150), 1,
      sym_table_option_item,
    STATE(255), 1,
      sym_table_options,
    STATE(263), 1,
      sym_materialized_view_options,
    STATE(402), 1,
      sym_clustering_order,
    STATE(1115), 1,
      sym_table_option_name,
  [11493] = 7,
    ACTIONS(146), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(148), 1,
      sym_object_name,
    STATE(150), 1,
      sym_table_option_item,
    STATE(255), 1,
      sym_table_options,
    STATE(402), 1,
      sym_clustering_order,
    STATE(423), 1,
      sym_materialized_view_options,
    STATE(1115), 1,
      sym_table_option_name,
  [11515] = 3,
    ACTIONS(1093), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1089), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1091), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11529] = 7,
    ACTIONS(1095), 1,
      aux_sym_truncate_token2,
    ACTIONS(1097), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1099), 1,
      aux_sym_resource_token2,
    ACTIONS(1101), 1,
      aux_sym_resource_token5,
    ACTIONS(1103), 1,
      aux_sym_resource_token6,
    ACTIONS(1105), 1,
      sym_object_name,
    STATE(1180), 1,
      sym_resource,
  [11551] = 7,
    ACTIONS(1095), 1,
      aux_sym_truncate_token2,
    ACTIONS(1097), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1099), 1,
      aux_sym_resource_token2,
    ACTIONS(1101), 1,
      aux_sym_resource_token5,
    ACTIONS(1103), 1,
      aux_sym_resource_token6,
    ACTIONS(1105), 1,
      sym_object_name,
    STATE(1235), 1,
      sym_resource,
  [11573] = 5,
    ACTIONS(1075), 1,
      aux_sym_priviledge_token3,
    ACTIONS(1077), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1079), 1,
      aux_sym_alter_table_rename_token1,
    STATE(279), 1,
      sym_alter_type_operation,
    STATE(278), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [11591] = 6,
    ACTIONS(1107), 1,
      anon_sym_LPAREN,
    ACTIONS(1109), 1,
      sym_object_name,
    STATE(82), 1,
      sym_relation_element,
    STATE(99), 1,
      sym_relation_elements,
    STATE(503), 1,
      sym_function_call,
    STATE(80), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11611] = 7,
    ACTIONS(146), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(148), 1,
      sym_object_name,
    STATE(150), 1,
      sym_table_option_item,
    STATE(255), 1,
      sym_table_options,
    STATE(402), 1,
      sym_clustering_order,
    STATE(428), 1,
      sym_materialized_view_options,
    STATE(1115), 1,
      sym_table_option_name,
  [11633] = 7,
    ACTIONS(1095), 1,
      aux_sym_truncate_token2,
    ACTIONS(1097), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1099), 1,
      aux_sym_resource_token2,
    ACTIONS(1101), 1,
      aux_sym_resource_token5,
    ACTIONS(1103), 1,
      aux_sym_resource_token6,
    ACTIONS(1105), 1,
      sym_object_name,
    STATE(243), 1,
      sym_resource,
  [11655] = 3,
    ACTIONS(1115), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1113), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11669] = 7,
    ACTIONS(146), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(148), 1,
      sym_object_name,
    STATE(150), 1,
      sym_table_option_item,
    STATE(255), 1,
      sym_table_options,
    STATE(362), 1,
      sym_materialized_view_options,
    STATE(402), 1,
      sym_clustering_order,
    STATE(1115), 1,
      sym_table_option_name,
  [11691] = 7,
    ACTIONS(146), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(148), 1,
      sym_object_name,
    STATE(150), 1,
      sym_table_option_item,
    STATE(255), 1,
      sym_table_options,
    STATE(307), 1,
      sym_materialized_view_options,
    STATE(402), 1,
      sym_clustering_order,
    STATE(1115), 1,
      sym_table_option_name,
  [11713] = 6,
    ACTIONS(1117), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1119), 1,
      anon_sym_DOT,
    ACTIONS(1121), 1,
      anon_sym_LPAREN,
    ACTIONS(1123), 1,
      aux_sym_insert_values_spec_token1,
    STATE(104), 1,
      sym_insert_values_spec,
    STATE(668), 1,
      sym_insert_column_spec,
  [11732] = 6,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(1125), 1,
      anon_sym_COMMA,
    ACTIONS(1127), 1,
      anon_sym_RPAREN,
    STATE(712), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(713), 1,
      aux_sym_relation_element_repeat2,
    STATE(714), 1,
      sym_assignment_tuple,
  [11751] = 5,
    ACTIONS(1107), 1,
      anon_sym_LPAREN,
    ACTIONS(1109), 1,
      sym_object_name,
    STATE(503), 1,
      sym_function_call,
    STATE(1201), 1,
      sym_relation_element,
    STATE(80), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11768] = 4,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
    ACTIONS(1129), 1,
      sym_decimal_literal,
    STATE(839), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [11783] = 2,
    ACTIONS(1131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1133), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11794] = 6,
    ACTIONS(1135), 1,
      aux_sym_truncate_token2,
    ACTIONS(1137), 1,
      aux_sym_resource_token2,
    ACTIONS(1139), 1,
      aux_sym_resource_token6,
    ACTIONS(1141), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1143), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1145), 1,
      aux_sym_drop_user_token1,
  [11813] = 2,
    ACTIONS(1147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1149), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11824] = 6,
    ACTIONS(1085), 1,
      anon_sym_STAR,
    ACTIONS(1087), 1,
      sym_object_name,
    ACTIONS(1151), 1,
      aux_sym_select_statement_token3,
    STATE(615), 1,
      sym_select_element,
    STATE(617), 1,
      sym_function_call,
    STATE(772), 1,
      sym_select_elements,
  [11843] = 5,
    ACTIONS(1107), 1,
      anon_sym_LPAREN,
    ACTIONS(1109), 1,
      sym_object_name,
    STATE(96), 1,
      sym_relation_element,
    STATE(503), 1,
      sym_function_call,
    STATE(80), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11860] = 6,
    ACTIONS(1117), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1121), 1,
      anon_sym_LPAREN,
    ACTIONS(1123), 1,
      aux_sym_insert_values_spec_token1,
    ACTIONS(1153), 1,
      anon_sym_DOT,
    STATE(129), 1,
      sym_insert_values_spec,
    STATE(620), 1,
      sym_insert_column_spec,
  [11879] = 1,
    ACTIONS(1155), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11887] = 4,
    ACTIONS(1157), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1161), 1,
      aux_sym_role_with_options_token4,
    STATE(195), 1,
      sym_role_with_options,
    ACTIONS(1159), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11901] = 4,
    ACTIONS(1157), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1161), 1,
      aux_sym_role_with_options_token4,
    STATE(210), 1,
      sym_role_with_options,
    ACTIONS(1159), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11915] = 5,
    ACTIONS(1085), 1,
      anon_sym_STAR,
    ACTIONS(1163), 1,
      sym_object_name,
    STATE(615), 1,
      sym_select_element,
    STATE(617), 1,
      sym_function_call,
    STATE(773), 1,
      sym_select_elements,
  [11931] = 5,
    ACTIONS(1165), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1167), 1,
      sym_object_name,
    STATE(555), 1,
      sym_from_spec,
    STATE(619), 1,
      sym_delete_column_item,
    STATE(769), 1,
      sym_delete_column_list,
  [11947] = 1,
    ACTIONS(1169), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11955] = 4,
    ACTIONS(1171), 1,
      anon_sym_LPAREN,
    ACTIONS(1173), 1,
      sym_object_name,
    STATE(981), 1,
      sym_primary_key_definition,
    STATE(982), 2,
      sym_compound_key,
      sym_composite_key,
  [11969] = 3,
    ACTIONS(1177), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(716), 1,
      sym_using_timestamp_spec,
    ACTIONS(1175), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11981] = 4,
    ACTIONS(1031), 1,
      anon_sym_LPAREN,
    ACTIONS(1181), 1,
      anon_sym_DOT,
    ACTIONS(1183), 1,
      aux_sym_select_element_token1,
    ACTIONS(1179), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11995] = 5,
    ACTIONS(1085), 1,
      anon_sym_STAR,
    ACTIONS(1163), 1,
      sym_object_name,
    STATE(615), 1,
      sym_select_element,
    STATE(617), 1,
      sym_function_call,
    STATE(772), 1,
      sym_select_elements,
  [12011] = 5,
    ACTIONS(1117), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1121), 1,
      anon_sym_LPAREN,
    ACTIONS(1123), 1,
      aux_sym_insert_values_spec_token1,
    STATE(111), 1,
      sym_insert_values_spec,
    STATE(729), 1,
      sym_insert_column_spec,
  [12027] = 1,
    ACTIONS(1185), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12035] = 3,
    ACTIONS(1187), 1,
      anon_sym_LPAREN,
    ACTIONS(1189), 2,
      sym_string_literal,
      sym_float_literal,
    STATE(188), 2,
      sym_option_hash,
      sym_table_option_value,
  [12047] = 1,
    ACTIONS(1191), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12055] = 1,
    ACTIONS(1193), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12063] = 3,
    ACTIONS(1177), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(674), 1,
      sym_using_timestamp_spec,
    ACTIONS(1195), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12075] = 5,
    ACTIONS(1165), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1167), 1,
      sym_object_name,
    STATE(539), 1,
      sym_from_spec,
    STATE(619), 1,
      sym_delete_column_item,
    STATE(844), 1,
      sym_delete_column_list,
  [12091] = 5,
    ACTIONS(1117), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1121), 1,
      anon_sym_LPAREN,
    ACTIONS(1123), 1,
      aux_sym_insert_values_spec_token1,
    STATE(112), 1,
      sym_insert_values_spec,
    STATE(642), 1,
      sym_insert_column_spec,
  [12107] = 3,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    STATE(527), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(1200), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [12119] = 1,
    ACTIONS(1202), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12127] = 1,
    ACTIONS(1204), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12135] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      sym_where_spec,
    STATE(568), 1,
      aux_sym_update_repeat1,
  [12148] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      sym_where_spec,
    STATE(534), 1,
      aux_sym_update_repeat1,
  [12161] = 4,
    ACTIONS(1208), 1,
      sym_object_name,
    STATE(124), 1,
      sym_table_option_item,
    STATE(283), 1,
      sym_table_options,
    STATE(1115), 1,
      sym_table_option_name,
  [12174] = 1,
    ACTIONS(1200), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [12181] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      sym_where_spec,
    STATE(728), 1,
      aux_sym_update_repeat1,
  [12194] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      sym_where_spec,
    STATE(561), 1,
      aux_sym_update_repeat1,
  [12207] = 4,
    ACTIONS(1210), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(1212), 1,
      sym_object_name,
    STATE(183), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [12220] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      sym_where_spec,
    STATE(572), 1,
      aux_sym_update_repeat1,
  [12233] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      sym_where_spec,
    STATE(728), 1,
      aux_sym_update_repeat1,
  [12246] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1177), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(148), 1,
      sym_where_spec,
    STATE(805), 1,
      sym_using_timestamp_spec,
  [12259] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1214), 1,
      aux_sym_delete_statement_token3,
    STATE(183), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [12272] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1216), 1,
      aux_sym_delete_statement_token3,
    STATE(183), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [12285] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1218), 1,
      aux_sym_delete_statement_token3,
    STATE(183), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [12298] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      sym_where_spec,
    STATE(728), 1,
      aux_sym_update_repeat1,
  [12311] = 4,
    ACTIONS(1220), 1,
      sym_string_literal,
    ACTIONS(1222), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1224), 1,
      aux_sym_create_index_token3,
    ACTIONS(1226), 1,
      sym_object_name,
  [12324] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1228), 1,
      aux_sym_delete_statement_token3,
    STATE(183), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [12337] = 3,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    STATE(551), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(1230), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [12348] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1232), 1,
      aux_sym_delete_statement_token3,
    STATE(183), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [12361] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1234), 1,
      aux_sym_delete_statement_token3,
    STATE(183), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [12374] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1236), 1,
      aux_sym_delete_statement_token3,
    STATE(183), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [12387] = 4,
    ACTIONS(222), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1238), 1,
      anon_sym_DOT,
    ACTIONS(1240), 1,
      aux_sym_update_token2,
    STATE(1364), 1,
      sym_using_ttl_timestamp,
  [12400] = 3,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(1242), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [12411] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      sym_where_spec,
    STATE(580), 1,
      aux_sym_update_repeat1,
  [12424] = 3,
    ACTIONS(1246), 1,
      aux_sym_create_materialized_view_token1,
    STATE(833), 1,
      sym_primary_key_column,
    ACTIONS(1244), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12435] = 3,
    ACTIONS(1248), 1,
      anon_sym_RPAREN,
    STATE(1173), 1,
      sym_order_direction,
    ACTIONS(179), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [12446] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1177), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(187), 1,
      sym_where_spec,
    STATE(789), 1,
      sym_using_timestamp_spec,
  [12459] = 2,
    ACTIONS(1250), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1252), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12468] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1254), 1,
      aux_sym_delete_statement_token3,
    STATE(183), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [12481] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      sym_where_spec,
    STATE(728), 1,
      aux_sym_update_repeat1,
  [12494] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1256), 1,
      aux_sym_delete_statement_token3,
    STATE(183), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [12507] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1258), 1,
      aux_sym_delete_statement_token3,
    STATE(183), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [12520] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      sym_where_spec,
    STATE(728), 1,
      aux_sym_update_repeat1,
  [12533] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      sym_where_spec,
    STATE(538), 1,
      aux_sym_update_repeat1,
  [12546] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1260), 1,
      aux_sym_delete_statement_token3,
    STATE(183), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [12559] = 4,
    ACTIONS(1208), 1,
      sym_object_name,
    STATE(124), 1,
      sym_table_option_item,
    STATE(409), 1,
      sym_table_options,
    STATE(1115), 1,
      sym_table_option_name,
  [12572] = 4,
    ACTIONS(1262), 1,
      aux_sym_timestamp_token1,
    ACTIONS(1264), 1,
      aux_sym_ttl_token1,
    STATE(140), 1,
      sym_ttl,
    STATE(142), 1,
      sym_timestamp,
  [12585] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1266), 1,
      aux_sym_delete_statement_token3,
    STATE(183), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [12598] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      sym_where_spec,
    STATE(543), 1,
      aux_sym_update_repeat1,
  [12611] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      sym_where_spec,
    STATE(728), 1,
      aux_sym_update_repeat1,
  [12624] = 4,
    ACTIONS(222), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1268), 1,
      anon_sym_DOT,
    ACTIONS(1270), 1,
      aux_sym_update_token2,
    STATE(1210), 1,
      sym_using_ttl_timestamp,
  [12637] = 4,
    ACTIONS(1031), 1,
      anon_sym_LPAREN,
    ACTIONS(1272), 1,
      anon_sym_COMMA,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
    STATE(704), 1,
      aux_sym_function_args_repeat1,
  [12650] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1276), 1,
      aux_sym_delete_statement_token3,
    STATE(183), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [12663] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      sym_where_spec,
    STATE(728), 1,
      aux_sym_update_repeat1,
  [12676] = 1,
    ACTIONS(1278), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12683] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1280), 1,
      aux_sym_delete_statement_token3,
    STATE(183), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [12696] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1282), 1,
      aux_sym_delete_statement_token3,
    STATE(183), 1,
      sym_if_condition,
    STATE(312), 1,
      sym_if_condition_list,
  [12709] = 4,
    ACTIONS(1284), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(826), 1,
      sym_column_definition,
    STATE(937), 1,
      sym_primary_key_element,
  [12722] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1177), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(185), 1,
      sym_where_spec,
    STATE(853), 1,
      sym_using_timestamp_spec,
  [12735] = 4,
    ACTIONS(1284), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1286), 1,
      sym_object_name,
    STATE(826), 1,
      sym_column_definition,
    STATE(992), 1,
      sym_primary_key_element,
  [12748] = 4,
    ACTIONS(1288), 1,
      anon_sym_COMMA,
    ACTIONS(1290), 1,
      anon_sym_COLON,
    ACTIONS(1292), 1,
      anon_sym_RBRACE,
    STATE(708), 1,
      aux_sym_assignment_tuple_repeat1,
  [12761] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      sym_where_spec,
    STATE(728), 1,
      aux_sym_update_repeat1,
  [12774] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      sym_where_spec,
    STATE(558), 1,
      aux_sym_update_repeat1,
  [12787] = 4,
    ACTIONS(1208), 1,
      sym_object_name,
    STATE(124), 1,
      sym_table_option_item,
    STATE(401), 1,
      sym_table_options,
    STATE(1115), 1,
      sym_table_option_name,
  [12800] = 3,
    ACTIONS(1294), 1,
      anon_sym_DOT,
    ACTIONS(1296), 1,
      aux_sym_where_spec_token1,
    STATE(1196), 1,
      sym_materialized_view_where,
  [12810] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(1181), 1,
      sym_return_mode,
  [12820] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(1067), 1,
      sym_return_mode,
  [12830] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    STATE(162), 1,
      sym_alter_type_rename_item,
    STATE(411), 1,
      sym_alter_type_rename_list,
  [12840] = 3,
    ACTIONS(1304), 1,
      anon_sym_COMMA,
    ACTIONS(1306), 1,
      anon_sym_RBRACE,
    STATE(655), 1,
      aux_sym_assignment_map_repeat1,
  [12850] = 2,
    ACTIONS(1031), 1,
      anon_sym_LPAREN,
    ACTIONS(1308), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12858] = 3,
    ACTIONS(1310), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    ACTIONS(1312), 1,
      sym_object_name,
    STATE(400), 1,
      sym_alter_table_drop_column_list,
  [12868] = 3,
    ACTIONS(1314), 1,
      sym_object_name,
    STATE(623), 1,
      sym_column_definition,
    STATE(976), 1,
      sym_column_definition_list,
  [12878] = 2,
    ACTIONS(1316), 1,
      aux_sym_resource_token1,
    ACTIONS(1318), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [12886] = 2,
    ACTIONS(1322), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1320), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [12894] = 3,
    ACTIONS(1296), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1324), 1,
      anon_sym_DOT,
    STATE(1282), 1,
      sym_materialized_view_where,
  [12904] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(1326), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [12914] = 3,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
    ACTIONS(1328), 1,
      anon_sym_COMMA,
    STATE(595), 1,
      aux_sym_function_args_repeat1,
  [12924] = 3,
    ACTIONS(1331), 1,
      sym_object_name,
    STATE(727), 1,
      sym_column_not_null,
    STATE(737), 1,
      sym_column_not_null_list,
  [12934] = 3,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    STATE(608), 1,
      aux_sym_relation_element_repeat1,
  [12944] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
    STATE(675), 1,
      aux_sym_relation_element_repeat2,
  [12954] = 3,
    ACTIONS(1339), 1,
      anon_sym_COMMA,
    ACTIONS(1342), 1,
      anon_sym_RPAREN,
    STATE(599), 1,
      aux_sym_option_hash_repeat1,
  [12964] = 3,
    ACTIONS(222), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1344), 1,
      aux_sym_update_token2,
    STATE(1126), 1,
      sym_using_ttl_timestamp,
  [12974] = 3,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1346), 1,
      anon_sym_RPAREN,
    STATE(608), 1,
      aux_sym_relation_element_repeat1,
  [12984] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(1291), 1,
      sym_return_mode,
  [12994] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(1348), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [13004] = 3,
    ACTIONS(1350), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1352), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1354), 1,
      aux_sym_update_token1,
  [13014] = 3,
    ACTIONS(1356), 1,
      anon_sym_RPAREN,
    ACTIONS(1358), 1,
      sym_object_name,
    STATE(687), 1,
      sym_param,
  [13024] = 3,
    ACTIONS(1360), 1,
      sym_string_literal,
    ACTIONS(1362), 1,
      aux_sym_create_index_token3,
    ACTIONS(1364), 1,
      sym_object_name,
  [13034] = 3,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1366), 1,
      anon_sym_RPAREN,
    STATE(616), 1,
      aux_sym_relation_element_repeat1,
  [13044] = 3,
    ACTIONS(1368), 1,
      anon_sym_COMMA,
    ACTIONS(1371), 1,
      anon_sym_RPAREN,
    STATE(608), 1,
      aux_sym_relation_element_repeat1,
  [13054] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(1211), 1,
      sym_return_mode,
  [13064] = 3,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1373), 1,
      anon_sym_RPAREN,
    STATE(601), 1,
      aux_sym_relation_element_repeat1,
  [13074] = 3,
    ACTIONS(1288), 1,
      anon_sym_COMMA,
    ACTIONS(1375), 1,
      anon_sym_RPAREN,
    STATE(633), 1,
      aux_sym_assignment_tuple_repeat1,
  [13084] = 3,
    ACTIONS(1377), 1,
      anon_sym_COMMA,
    ACTIONS(1379), 1,
      anon_sym_RPAREN,
    STATE(647), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13094] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    ACTIONS(1383), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_init_cond_hash_repeat1,
  [13104] = 3,
    ACTIONS(1358), 1,
      sym_object_name,
    ACTIONS(1385), 1,
      anon_sym_RPAREN,
    STATE(630), 1,
      sym_param,
  [13114] = 3,
    ACTIONS(1387), 1,
      anon_sym_COMMA,
    ACTIONS(1389), 1,
      aux_sym_from_spec_token1,
    STATE(699), 1,
      aux_sym_select_elements_repeat1,
  [13124] = 3,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1391), 1,
      anon_sym_RPAREN,
    STATE(608), 1,
      aux_sym_relation_element_repeat1,
  [13134] = 2,
    ACTIONS(1183), 1,
      aux_sym_select_element_token1,
    ACTIONS(1179), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13142] = 2,
    ACTIONS(1395), 1,
      anon_sym_LBRACK,
    ACTIONS(1393), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13150] = 3,
    ACTIONS(1397), 1,
      anon_sym_COMMA,
    ACTIONS(1399), 1,
      aux_sym_from_spec_token1,
    STATE(723), 1,
      aux_sym_delete_column_list_repeat1,
  [13160] = 3,
    ACTIONS(1117), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1123), 1,
      aux_sym_insert_values_spec_token1,
    STATE(116), 1,
      sym_insert_values_spec,
  [13170] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1403), 1,
      anon_sym_RPAREN,
    STATE(681), 1,
      aux_sym_create_function_repeat1,
  [13180] = 3,
    ACTIONS(1288), 1,
      anon_sym_COMMA,
    ACTIONS(1405), 1,
      anon_sym_RBRACK,
    STATE(710), 1,
      aux_sym_assignment_tuple_repeat1,
  [13190] = 3,
    ACTIONS(1407), 1,
      anon_sym_COMMA,
    ACTIONS(1409), 1,
      anon_sym_RPAREN,
    STATE(718), 1,
      aux_sym_column_definition_list_repeat1,
  [13200] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(1206), 1,
      sym_return_mode,
  [13210] = 3,
    ACTIONS(1411), 1,
      anon_sym_COMMA,
    ACTIONS(1413), 1,
      anon_sym_RBRACE,
    STATE(637), 1,
      aux_sym_replication_list_repeat1,
  [13220] = 3,
    ACTIONS(1415), 1,
      anon_sym_COMMA,
    ACTIONS(1417), 1,
      anon_sym_RPAREN,
    STATE(705), 1,
      aux_sym_expression_list_repeat1,
  [13230] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(1071), 1,
      sym_return_mode,
  [13240] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1419), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_create_function_repeat1,
  [13250] = 3,
    ACTIONS(1314), 1,
      sym_object_name,
    STATE(623), 1,
      sym_column_definition,
    STATE(944), 1,
      sym_column_definition_list,
  [13260] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1421), 1,
      anon_sym_RPAREN,
    STATE(688), 1,
      aux_sym_create_function_repeat1,
  [13270] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(1066), 1,
      sym_return_mode,
  [13280] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1423), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_create_function_repeat1,
  [13290] = 3,
    ACTIONS(1288), 1,
      anon_sym_COMMA,
    ACTIONS(1425), 1,
      anon_sym_RPAREN,
    STATE(527), 1,
      aux_sym_assignment_tuple_repeat1,
  [13300] = 3,
    ACTIONS(1427), 1,
      anon_sym_COMMA,
    ACTIONS(1429), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      aux_sym_create_type_repeat1,
  [13310] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(938), 1,
      sym_return_mode,
  [13320] = 3,
    ACTIONS(1358), 1,
      sym_object_name,
    ACTIONS(1431), 1,
      anon_sym_RPAREN,
    STATE(693), 1,
      sym_param,
  [13330] = 3,
    ACTIONS(1433), 1,
      anon_sym_COMMA,
    ACTIONS(1436), 1,
      anon_sym_RBRACE,
    STATE(637), 1,
      aux_sym_replication_list_repeat1,
  [13340] = 3,
    ACTIONS(1438), 1,
      anon_sym_COMMA,
    ACTIONS(1441), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_column_definition_list_repeat1,
  [13350] = 3,
    ACTIONS(1443), 1,
      anon_sym_COMMA,
    ACTIONS(1446), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      aux_sym_create_type_repeat1,
  [13360] = 3,
    ACTIONS(1427), 1,
      anon_sym_COMMA,
    ACTIONS(1448), 1,
      anon_sym_RPAREN,
    STATE(683), 1,
      aux_sym_create_type_repeat1,
  [13370] = 3,
    ACTIONS(1450), 1,
      sym_string_literal,
    STATE(678), 1,
      sym_replication_list_item,
    STATE(1063), 1,
      sym_replication_list,
  [13380] = 3,
    ACTIONS(1117), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1123), 1,
      aux_sym_insert_values_spec_token1,
    STATE(108), 1,
      sym_insert_values_spec,
  [13390] = 3,
    ACTIONS(1452), 1,
      sym_string_literal,
    ACTIONS(1454), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1456), 1,
      sym_object_name,
  [13400] = 2,
    STATE(694), 1,
      aux_sym_column_not_null_list_repeat1,
    ACTIONS(1458), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13408] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(996), 1,
      sym_return_mode,
  [13418] = 3,
    ACTIONS(1358), 1,
      sym_object_name,
    ACTIONS(1460), 1,
      anon_sym_RPAREN,
    STATE(715), 1,
      sym_param,
  [13428] = 3,
    ACTIONS(1377), 1,
      anon_sym_COMMA,
    ACTIONS(1462), 1,
      anon_sym_RPAREN,
    STATE(700), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13438] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1464), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_create_function_repeat1,
  [13448] = 3,
    ACTIONS(1450), 1,
      sym_string_literal,
    STATE(678), 1,
      sym_replication_list_item,
    STATE(928), 1,
      sym_replication_list,
  [13458] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(1000), 1,
      sym_return_mode,
  [13468] = 3,
    ACTIONS(1358), 1,
      sym_object_name,
    ACTIONS(1466), 1,
      anon_sym_RPAREN,
    STATE(671), 1,
      sym_param,
  [13478] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(923), 1,
      sym_return_mode,
  [13488] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1468), 1,
      anon_sym_RPAREN,
    STATE(665), 1,
      aux_sym_create_function_repeat1,
  [13498] = 3,
    ACTIONS(1470), 1,
      anon_sym_COMMA,
    ACTIONS(1472), 1,
      anon_sym_GT,
    STATE(669), 1,
      aux_sym_data_type_definition_repeat1,
  [13508] = 3,
    ACTIONS(1304), 1,
      anon_sym_COMMA,
    ACTIONS(1474), 1,
      anon_sym_RBRACE,
    STATE(656), 1,
      aux_sym_assignment_map_repeat1,
  [13518] = 3,
    ACTIONS(1476), 1,
      anon_sym_COMMA,
    ACTIONS(1479), 1,
      anon_sym_RBRACE,
    STATE(656), 1,
      aux_sym_assignment_map_repeat1,
  [13528] = 3,
    ACTIONS(222), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1481), 1,
      aux_sym_update_token2,
    STATE(1019), 1,
      sym_using_ttl_timestamp,
  [13538] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1483), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_create_function_repeat1,
  [13548] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(918), 1,
      sym_return_mode,
  [13558] = 3,
    ACTIONS(1485), 1,
      anon_sym_COMMA,
    ACTIONS(1488), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_create_function_repeat1,
  [13568] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    ACTIONS(1490), 1,
      anon_sym_RPAREN,
    STATE(707), 1,
      aux_sym_init_cond_hash_repeat1,
  [13578] = 3,
    ACTIONS(1492), 1,
      anon_sym_COMMA,
    ACTIONS(1494), 1,
      anon_sym_RPAREN,
    STATE(663), 1,
      aux_sym_option_hash_repeat1,
  [13588] = 3,
    ACTIONS(1492), 1,
      anon_sym_COMMA,
    ACTIONS(1496), 1,
      anon_sym_RPAREN,
    STATE(599), 1,
      aux_sym_option_hash_repeat1,
  [13598] = 3,
    ACTIONS(1314), 1,
      sym_object_name,
    STATE(623), 1,
      sym_column_definition,
    STATE(1188), 1,
      sym_column_definition_list,
  [13608] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1498), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_create_function_repeat1,
  [13618] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(975), 1,
      sym_return_mode,
  [13628] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(904), 1,
      sym_return_mode,
  [13638] = 3,
    ACTIONS(1117), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1123), 1,
      aux_sym_insert_values_spec_token1,
    STATE(109), 1,
      sym_insert_values_spec,
  [13648] = 3,
    ACTIONS(1500), 1,
      anon_sym_COMMA,
    ACTIONS(1503), 1,
      anon_sym_GT,
    STATE(669), 1,
      aux_sym_data_type_definition_repeat1,
  [13658] = 3,
    ACTIONS(1470), 1,
      anon_sym_COMMA,
    ACTIONS(1505), 1,
      anon_sym_GT,
    STATE(654), 1,
      aux_sym_data_type_definition_repeat1,
  [13668] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1507), 1,
      anon_sym_RPAREN,
    STATE(648), 1,
      aux_sym_create_function_repeat1,
  [13678] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(900), 1,
      sym_return_mode,
  [13688] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(1509), 1,
      anon_sym_RPAREN,
    STATE(603), 1,
      aux_sym_relation_element_repeat2,
  [13698] = 1,
    ACTIONS(1511), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13704] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(1509), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [13714] = 3,
    ACTIONS(1513), 1,
      anon_sym_COMMA,
    ACTIONS(1516), 1,
      aux_sym_from_spec_token1,
    STATE(676), 1,
      aux_sym_delete_column_list_repeat1,
  [13724] = 3,
    ACTIONS(1296), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1518), 1,
      anon_sym_DOT,
    STATE(1018), 1,
      sym_materialized_view_where,
  [13734] = 3,
    ACTIONS(1411), 1,
      anon_sym_COMMA,
    ACTIONS(1520), 1,
      anon_sym_RBRACE,
    STATE(625), 1,
      aux_sym_replication_list_repeat1,
  [13744] = 3,
    ACTIONS(1427), 1,
      anon_sym_COMMA,
    ACTIONS(1522), 1,
      anon_sym_RPAREN,
    STATE(685), 1,
      aux_sym_create_type_repeat1,
  [13754] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(1161), 1,
      sym_return_mode,
  [13764] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1524), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_create_function_repeat1,
  [13774] = 3,
    ACTIONS(1427), 1,
      anon_sym_COMMA,
    ACTIONS(1526), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      aux_sym_create_type_repeat1,
  [13784] = 3,
    ACTIONS(1427), 1,
      anon_sym_COMMA,
    ACTIONS(1528), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      aux_sym_create_type_repeat1,
  [13794] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(1127), 1,
      sym_return_mode,
  [13804] = 3,
    ACTIONS(1427), 1,
      anon_sym_COMMA,
    ACTIONS(1530), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      aux_sym_create_type_repeat1,
  [13814] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(881), 1,
      sym_return_mode,
  [13824] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1532), 1,
      anon_sym_RPAREN,
    STATE(632), 1,
      aux_sym_create_function_repeat1,
  [13834] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1534), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_create_function_repeat1,
  [13844] = 3,
    ACTIONS(1358), 1,
      sym_object_name,
    ACTIONS(1536), 1,
      anon_sym_RPAREN,
    STATE(724), 1,
      sym_param,
  [13854] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(1250), 1,
      sym_return_mode,
  [13864] = 3,
    ACTIONS(1272), 1,
      anon_sym_COMMA,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
    STATE(704), 1,
      aux_sym_function_args_repeat1,
  [13874] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(1027), 1,
      sym_return_mode,
  [13884] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1538), 1,
      anon_sym_RPAREN,
    STATE(628), 1,
      aux_sym_create_function_repeat1,
  [13894] = 3,
    ACTIONS(1540), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1543), 1,
      aux_sym_create_materialized_view_token1,
    STATE(694), 1,
      aux_sym_column_not_null_list_repeat1,
  [13904] = 3,
    ACTIONS(1545), 1,
      anon_sym_COMMA,
    ACTIONS(1548), 1,
      aux_sym_from_spec_token1,
    STATE(695), 1,
      aux_sym_select_elements_repeat1,
  [13914] = 3,
    ACTIONS(1415), 1,
      anon_sym_COMMA,
    ACTIONS(1550), 1,
      anon_sym_RPAREN,
    STATE(626), 1,
      aux_sym_expression_list_repeat1,
  [13924] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(1032), 1,
      sym_return_mode,
  [13934] = 3,
    ACTIONS(1163), 1,
      sym_object_name,
    STATE(617), 1,
      sym_function_call,
    STATE(774), 1,
      sym_select_element,
  [13944] = 3,
    ACTIONS(1387), 1,
      anon_sym_COMMA,
    ACTIONS(1552), 1,
      aux_sym_from_spec_token1,
    STATE(695), 1,
      aux_sym_select_elements_repeat1,
  [13954] = 3,
    ACTIONS(1554), 1,
      anon_sym_COMMA,
    ACTIONS(1557), 1,
      anon_sym_RPAREN,
    STATE(700), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13964] = 3,
    ACTIONS(1358), 1,
      sym_object_name,
    ACTIONS(1559), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      sym_param,
  [13974] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1561), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_create_function_repeat1,
  [13984] = 3,
    ACTIONS(1208), 1,
      sym_object_name,
    STATE(157), 1,
      sym_table_option_item,
    STATE(1115), 1,
      sym_table_option_name,
  [13994] = 3,
    ACTIONS(1272), 1,
      anon_sym_COMMA,
    ACTIONS(1563), 1,
      anon_sym_RPAREN,
    STATE(595), 1,
      aux_sym_function_args_repeat1,
  [14004] = 3,
    ACTIONS(1565), 1,
      anon_sym_COMMA,
    ACTIONS(1568), 1,
      anon_sym_RPAREN,
    STATE(705), 1,
      aux_sym_expression_list_repeat1,
  [14014] = 3,
    ACTIONS(1427), 1,
      anon_sym_COMMA,
    ACTIONS(1570), 1,
      anon_sym_RPAREN,
    STATE(682), 1,
      aux_sym_create_type_repeat1,
  [14024] = 3,
    ACTIONS(1572), 1,
      anon_sym_COMMA,
    ACTIONS(1575), 1,
      anon_sym_RPAREN,
    STATE(707), 1,
      aux_sym_init_cond_hash_repeat1,
  [14034] = 3,
    ACTIONS(1288), 1,
      anon_sym_COMMA,
    ACTIONS(1577), 1,
      anon_sym_RBRACE,
    STATE(527), 1,
      aux_sym_assignment_tuple_repeat1,
  [14044] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(1157), 1,
      sym_return_mode,
  [14054] = 3,
    ACTIONS(1288), 1,
      anon_sym_COMMA,
    ACTIONS(1579), 1,
      anon_sym_RBRACK,
    STATE(527), 1,
      aux_sym_assignment_tuple_repeat1,
  [14064] = 3,
    ACTIONS(1314), 1,
      sym_object_name,
    STATE(623), 1,
      sym_column_definition,
    STATE(995), 1,
      sym_column_definition_list,
  [14074] = 3,
    ACTIONS(1288), 1,
      anon_sym_COMMA,
    ACTIONS(1581), 1,
      anon_sym_RPAREN,
    STATE(527), 1,
      aux_sym_assignment_tuple_repeat1,
  [14084] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(1581), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [14094] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(1581), 1,
      anon_sym_RPAREN,
    STATE(594), 1,
      aux_sym_relation_element_repeat2,
  [14104] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1583), 1,
      anon_sym_RPAREN,
    STATE(658), 1,
      aux_sym_create_function_repeat1,
  [14114] = 1,
    ACTIONS(1195), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [14120] = 3,
    ACTIONS(1296), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1585), 1,
      anon_sym_DOT,
    STATE(1145), 1,
      sym_materialized_view_where,
  [14130] = 3,
    ACTIONS(1587), 1,
      anon_sym_COMMA,
    ACTIONS(1589), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_column_definition_list_repeat1,
  [14140] = 3,
    ACTIONS(1358), 1,
      sym_object_name,
    ACTIONS(1591), 1,
      anon_sym_RPAREN,
    STATE(621), 1,
      sym_param,
  [14150] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(1094), 1,
      sym_return_mode,
  [14160] = 3,
    ACTIONS(1450), 1,
      sym_string_literal,
    STATE(678), 1,
      sym_replication_list_item,
    STATE(886), 1,
      sym_replication_list,
  [14170] = 3,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1593), 1,
      anon_sym_RPAREN,
    STATE(597), 1,
      aux_sym_relation_element_repeat1,
  [14180] = 3,
    ACTIONS(1397), 1,
      anon_sym_COMMA,
    ACTIONS(1595), 1,
      aux_sym_from_spec_token1,
    STATE(676), 1,
      aux_sym_delete_column_list_repeat1,
  [14190] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1597), 1,
      anon_sym_RPAREN,
    STATE(702), 1,
      aux_sym_create_function_repeat1,
  [14200] = 3,
    ACTIONS(1298), 1,
      aux_sym_create_function_token1,
    ACTIONS(1300), 1,
      aux_sym_return_mode_token1,
    STATE(1098), 1,
      sym_return_mode,
  [14210] = 3,
    ACTIONS(1427), 1,
      anon_sym_COMMA,
    ACTIONS(1599), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      aux_sym_create_type_repeat1,
  [14220] = 2,
    STATE(644), 1,
      aux_sym_column_not_null_list_repeat1,
    ACTIONS(1601), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [14228] = 3,
    ACTIONS(1603), 1,
      anon_sym_COMMA,
    ACTIONS(1606), 1,
      aux_sym_where_spec_token1,
    STATE(728), 1,
      aux_sym_update_repeat1,
  [14238] = 3,
    ACTIONS(1117), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1123), 1,
      aux_sym_insert_values_spec_token1,
    STATE(125), 1,
      sym_insert_values_spec,
  [14248] = 2,
    ACTIONS(1608), 1,
      anon_sym_DOT,
    ACTIONS(1610), 1,
      anon_sym_LPAREN,
  [14255] = 1,
    ACTIONS(1612), 2,
      sym_string_literal,
      sym_float_literal,
  [14260] = 2,
    ACTIONS(1296), 1,
      aux_sym_where_spec_token1,
    STATE(1146), 1,
      sym_materialized_view_where,
  [14267] = 2,
    ACTIONS(1614), 1,
      sym_object_name,
    STATE(1402), 1,
      sym_column_list,
  [14274] = 2,
    ACTIONS(1616), 1,
      aux_sym_resource_token5,
    ACTIONS(1618), 1,
      aux_sym_drop_aggregate_token1,
  [14281] = 2,
    ACTIONS(1614), 1,
      sym_object_name,
    STATE(1403), 1,
      sym_column_list,
  [14288] = 2,
    ACTIONS(1620), 1,
      anon_sym_DOT,
    ACTIONS(1622), 1,
      anon_sym_LPAREN,
  [14295] = 2,
    ACTIONS(1624), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1626), 1,
      aux_sym_create_materialized_view_token1,
  [14302] = 2,
    ACTIONS(1628), 1,
      anon_sym_DOT,
    ACTIONS(1630), 1,
      aux_sym_using_timestamp_spec_token1,
  [14309] = 2,
    ACTIONS(1614), 1,
      sym_object_name,
    STATE(1248), 1,
      sym_column_list,
  [14316] = 2,
    ACTIONS(1632), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1634), 1,
      sym_object_name,
  [14323] = 1,
    ACTIONS(1636), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14328] = 2,
    ACTIONS(1638), 1,
      anon_sym_DOT,
    ACTIONS(1640), 1,
      anon_sym_LPAREN,
  [14335] = 2,
    ACTIONS(301), 1,
      aux_sym_clustering_order_token1,
    STATE(292), 1,
      sym_clustering_order,
  [14342] = 2,
    ACTIONS(1642), 1,
      sym_object_name,
    STATE(537), 1,
      sym_assignment_element,
  [14349] = 2,
    ACTIONS(1644), 1,
      anon_sym_DOT,
    ACTIONS(1646), 1,
      anon_sym_LPAREN,
  [14356] = 1,
    ACTIONS(1606), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14361] = 2,
    ACTIONS(1648), 1,
      anon_sym_DOT,
    ACTIONS(1650), 1,
      anon_sym_LPAREN,
  [14368] = 2,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    STATE(598), 1,
      sym_assignment_tuple,
  [14375] = 2,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_assignment_tuple,
  [14382] = 2,
    ACTIONS(1652), 1,
      sym_object_name,
    STATE(791), 1,
      sym_delete_column_item,
  [14389] = 2,
    ACTIONS(1642), 1,
      sym_object_name,
    STATE(531), 1,
      sym_assignment_element,
  [14396] = 2,
    ACTIONS(1654), 1,
      anon_sym_DOT,
    ACTIONS(1656), 1,
      aux_sym_create_index_token3,
  [14403] = 2,
    ACTIONS(1262), 1,
      aux_sym_timestamp_token1,
    STATE(573), 1,
      sym_timestamp,
  [14410] = 2,
    ACTIONS(1658), 1,
      anon_sym_DOT,
    ACTIONS(1660), 1,
      aux_sym_create_index_token3,
  [14417] = 1,
    ACTIONS(1662), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14422] = 2,
    ACTIONS(1664), 1,
      aux_sym_role_with_options_token1,
    STATE(126), 1,
      sym_user_password,
  [14429] = 1,
    ACTIONS(1666), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [14434] = 2,
    ACTIONS(1614), 1,
      sym_object_name,
    STATE(1142), 1,
      sym_column_list,
  [14441] = 2,
    ACTIONS(1668), 1,
      anon_sym_DOT,
    ACTIONS(1670), 1,
      anon_sym_LPAREN,
  [14448] = 2,
    ACTIONS(1672), 1,
      anon_sym_DOT,
    ACTIONS(1674), 1,
      anon_sym_LPAREN,
  [14455] = 1,
    ACTIONS(1676), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14460] = 2,
    ACTIONS(1678), 1,
      sym_object_name,
    STATE(154), 1,
      sym_order_spec_element,
  [14467] = 1,
    ACTIONS(1568), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14472] = 2,
    ACTIONS(1614), 1,
      sym_object_name,
    STATE(1386), 1,
      sym_column_list,
  [14479] = 2,
    ACTIONS(1680), 1,
      anon_sym_DOT,
    ACTIONS(1682), 1,
      anon_sym_LPAREN,
  [14486] = 1,
    ACTIONS(1684), 2,
      sym_string_literal,
      sym_decimal_literal,
  [14491] = 2,
    ACTIONS(1686), 1,
      anon_sym_DOT,
    ACTIONS(1688), 1,
      anon_sym_LPAREN,
  [14498] = 1,
    ACTIONS(1575), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14503] = 2,
    ACTIONS(1690), 1,
      aux_sym_from_spec_token1,
    STATE(577), 1,
      sym_from_spec,
  [14510] = 1,
    ACTIONS(1692), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14515] = 2,
    ACTIONS(1694), 1,
      anon_sym_DOT,
    ACTIONS(1696), 1,
      anon_sym_LPAREN,
  [14522] = 2,
    ACTIONS(1690), 1,
      aux_sym_from_spec_token1,
    STATE(72), 1,
      sym_from_spec,
  [14529] = 2,
    ACTIONS(1690), 1,
      aux_sym_from_spec_token1,
    STATE(70), 1,
      sym_from_spec,
  [14536] = 1,
    ACTIONS(1548), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14541] = 1,
    ACTIONS(1698), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14546] = 2,
    ACTIONS(1314), 1,
      sym_object_name,
    STATE(826), 1,
      sym_column_definition,
  [14553] = 1,
    ACTIONS(1700), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14558] = 2,
    ACTIONS(1614), 1,
      sym_object_name,
    STATE(1423), 1,
      sym_column_list,
  [14565] = 2,
    ACTIONS(1702), 1,
      anon_sym_DOT,
    ACTIONS(1704), 1,
      anon_sym_LPAREN,
  [14572] = 1,
    ACTIONS(1557), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14577] = 1,
    ACTIONS(1706), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [14582] = 2,
    ACTIONS(1708), 1,
      anon_sym_DOT,
    ACTIONS(1710), 1,
      anon_sym_LPAREN,
  [14589] = 2,
    ACTIONS(1642), 1,
      sym_object_name,
    STATE(567), 1,
      sym_assignment_element,
  [14596] = 1,
    ACTIONS(1712), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14601] = 1,
    ACTIONS(1714), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14606] = 2,
    ACTIONS(1664), 1,
      aux_sym_role_with_options_token1,
    STATE(115), 1,
      sym_user_password,
  [14613] = 2,
    ACTIONS(1642), 1,
      sym_object_name,
    STATE(552), 1,
      sym_assignment_element,
  [14620] = 1,
    ACTIONS(1250), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14625] = 2,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    STATE(185), 1,
      sym_where_spec,
  [14632] = 2,
    ACTIONS(1614), 1,
      sym_object_name,
    STATE(1014), 1,
      sym_column_list,
  [14639] = 1,
    ACTIONS(1516), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14644] = 1,
    ACTIONS(1716), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14649] = 2,
    ACTIONS(1718), 1,
      anon_sym_DOT,
    ACTIONS(1720), 1,
      aux_sym_select_element_token1,
  [14656] = 2,
    ACTIONS(1614), 1,
      sym_object_name,
    STATE(1203), 1,
      sym_column_list,
  [14663] = 2,
    ACTIONS(1358), 1,
      sym_object_name,
    STATE(809), 1,
      sym_param,
  [14670] = 2,
    ACTIONS(1642), 1,
      sym_object_name,
    STATE(581), 1,
      sym_assignment_element,
  [14677] = 1,
    ACTIONS(1503), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14682] = 2,
    ACTIONS(1722), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1724), 1,
      sym_object_name,
  [14689] = 2,
    ACTIONS(1726), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1728), 1,
      sym_object_name,
  [14696] = 2,
    ACTIONS(1730), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1732), 1,
      sym_object_name,
  [14703] = 2,
    ACTIONS(1614), 1,
      sym_object_name,
    STATE(1361), 1,
      sym_column_list,
  [14710] = 2,
    ACTIONS(1734), 1,
      sym_string_literal,
    STATE(662), 1,
      sym_option_hash_item,
  [14717] = 2,
    ACTIONS(1296), 1,
      aux_sym_where_spec_token1,
    STATE(1358), 1,
      sym_materialized_view_where,
  [14724] = 2,
    ACTIONS(1734), 1,
      sym_string_literal,
    STATE(855), 1,
      sym_option_hash_item,
  [14731] = 2,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    STATE(187), 1,
      sym_where_spec,
  [14738] = 2,
    ACTIONS(1736), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1738), 1,
      sym_object_name,
  [14745] = 2,
    ACTIONS(1740), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1742), 1,
      sym_object_name,
  [14752] = 2,
    ACTIONS(1744), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1746), 1,
      sym_object_name,
  [14759] = 1,
    ACTIONS(1488), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14764] = 2,
    ACTIONS(1748), 1,
      sym_object_name,
    STATE(768), 1,
      sym_init_cond_hash_item,
  [14771] = 2,
    ACTIONS(1750), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1752), 1,
      sym_object_name,
  [14778] = 2,
    ACTIONS(1614), 1,
      sym_object_name,
    STATE(924), 1,
      sym_column_list,
  [14785] = 2,
    ACTIONS(1754), 1,
      sym_object_name,
    STATE(1057), 1,
      sym_partition_key_list,
  [14792] = 2,
    ACTIONS(1756), 1,
      anon_sym_COMMA,
    ACTIONS(1758), 1,
      anon_sym_RPAREN,
  [14799] = 2,
    ACTIONS(1331), 1,
      sym_object_name,
    STATE(836), 1,
      sym_column_not_null,
  [14806] = 2,
    ACTIONS(1760), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1762), 1,
      sym_object_name,
  [14813] = 2,
    ACTIONS(1187), 1,
      anon_sym_LPAREN,
    STATE(209), 1,
      sym_option_hash,
  [14820] = 2,
    ACTIONS(1764), 1,
      anon_sym_DOT,
    ACTIONS(1766), 1,
      anon_sym_LPAREN,
  [14827] = 2,
    ACTIONS(1768), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1770), 1,
      sym_object_name,
  [14834] = 2,
    ACTIONS(1772), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1774), 1,
      sym_object_name,
  [14841] = 1,
    ACTIONS(1776), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14846] = 2,
    ACTIONS(1778), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1780), 1,
      sym_object_name,
  [14853] = 2,
    ACTIONS(1782), 1,
      anon_sym_DOT,
    ACTIONS(1784), 1,
      anon_sym_LPAREN,
  [14860] = 1,
    ACTIONS(1436), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14865] = 2,
    ACTIONS(1786), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1788), 1,
      sym_object_name,
  [14872] = 1,
    ACTIONS(1441), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14877] = 2,
    ACTIONS(1790), 1,
      aux_sym_durable_writes_token1,
    STATE(357), 1,
      sym_durable_writes,
  [14884] = 2,
    ACTIONS(1792), 1,
      anon_sym_DOT,
    ACTIONS(1794), 1,
      anon_sym_LPAREN,
  [14891] = 2,
    ACTIONS(1796), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1798), 1,
      sym_object_name,
  [14898] = 2,
    ACTIONS(1450), 1,
      sym_string_literal,
    STATE(824), 1,
      sym_replication_list_item,
  [14905] = 2,
    ACTIONS(1800), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1802), 1,
      sym_object_name,
  [14912] = 2,
    ACTIONS(1804), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1806), 1,
      sym_object_name,
  [14919] = 1,
    ACTIONS(1808), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14924] = 2,
    ACTIONS(1810), 1,
      anon_sym_DOT,
    ACTIONS(1812), 1,
      aux_sym_select_element_token1,
  [14931] = 2,
    ACTIONS(1790), 1,
      aux_sym_durable_writes_token1,
    STATE(410), 1,
      sym_durable_writes,
  [14938] = 1,
    ACTIONS(1543), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [14943] = 2,
    ACTIONS(1814), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1816), 1,
      sym_object_name,
  [14950] = 2,
    ACTIONS(1296), 1,
      aux_sym_where_spec_token1,
    STATE(1244), 1,
      sym_materialized_view_where,
  [14957] = 1,
    ACTIONS(1818), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14962] = 2,
    ACTIONS(1820), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1822), 1,
      sym_object_name,
  [14969] = 2,
    ACTIONS(1824), 1,
      sym_object_name,
    STATE(1121), 1,
      sym_clustering_key_list,
  [14976] = 2,
    ACTIONS(1826), 1,
      sym_string_literal,
    ACTIONS(1828), 1,
      sym_object_name,
  [14983] = 2,
    ACTIONS(1664), 1,
      aux_sym_role_with_options_token1,
    STATE(103), 1,
      sym_user_password,
  [14990] = 2,
    ACTIONS(1690), 1,
      aux_sym_from_spec_token1,
    STATE(555), 1,
      sym_from_spec,
  [14997] = 2,
    ACTIONS(1830), 1,
      anon_sym_DOT,
    ACTIONS(1832), 1,
      anon_sym_LPAREN,
  [15004] = 2,
    ACTIONS(1834), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1836), 1,
      sym_object_name,
  [15011] = 2,
    ACTIONS(1838), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1840), 1,
      sym_object_name,
  [15018] = 2,
    ACTIONS(1690), 1,
      aux_sym_from_spec_token1,
    STATE(69), 1,
      sym_from_spec,
  [15025] = 2,
    ACTIONS(1842), 1,
      sym_object_name,
    STATE(233), 1,
      sym_if_condition,
  [15032] = 2,
    ACTIONS(1614), 1,
      sym_object_name,
    STATE(1328), 1,
      sym_column_list,
  [15039] = 2,
    ACTIONS(1844), 1,
      sym_string_literal,
    ACTIONS(1846), 1,
      sym_object_name,
  [15046] = 2,
    ACTIONS(1848), 1,
      sym_string_literal,
    ACTIONS(1850), 1,
      sym_object_name,
  [15053] = 2,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    STATE(136), 1,
      sym_where_spec,
  [15060] = 2,
    ACTIONS(1614), 1,
      sym_object_name,
    STATE(1327), 1,
      sym_column_list,
  [15067] = 1,
    ACTIONS(1342), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15072] = 1,
    ACTIONS(1852), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15077] = 2,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_assignment_tuple,
  [15084] = 2,
    ACTIONS(1790), 1,
      aux_sym_durable_writes_token1,
    STATE(270), 1,
      sym_durable_writes,
  [15091] = 1,
    ACTIONS(1371), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15096] = 2,
    ACTIONS(1614), 1,
      sym_object_name,
    STATE(970), 1,
      sym_column_list,
  [15103] = 1,
    ACTIONS(1854), 2,
      sym_string_literal,
      sym_decimal_literal,
  [15108] = 2,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_assignment_tuple,
  [15115] = 2,
    ACTIONS(1262), 1,
      aux_sym_timestamp_token1,
    STATE(222), 1,
      sym_timestamp,
  [15122] = 1,
    ACTIONS(1856), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [15127] = 2,
    ACTIONS(1296), 1,
      aux_sym_where_spec_token1,
    STATE(1283), 1,
      sym_materialized_view_where,
  [15134] = 2,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    STATE(673), 1,
      sym_assignment_tuple,
  [15141] = 2,
    ACTIONS(1642), 1,
      sym_object_name,
    STATE(746), 1,
      sym_assignment_element,
  [15148] = 2,
    ACTIONS(1264), 1,
      aux_sym_ttl_token1,
    STATE(222), 1,
      sym_ttl,
  [15155] = 2,
    ACTIONS(1824), 1,
      sym_object_name,
    STATE(1223), 1,
      sym_clustering_key_list,
  [15162] = 2,
    ACTIONS(1858), 1,
      anon_sym_EQ,
    ACTIONS(1860), 1,
      anon_sym_LBRACK,
  [15169] = 2,
    ACTIONS(1862), 1,
      aux_sym_truncate_token2,
    ACTIONS(1864), 1,
      sym_object_name,
  [15176] = 2,
    ACTIONS(1642), 1,
      sym_object_name,
    STATE(562), 1,
      sym_assignment_element,
  [15183] = 2,
    ACTIONS(1642), 1,
      sym_object_name,
    STATE(535), 1,
      sym_assignment_element,
  [15190] = 1,
    ACTIONS(1308), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15195] = 2,
    ACTIONS(1866), 1,
      anon_sym_DOT,
    ACTIONS(1868), 1,
      aux_sym_using_timestamp_spec_token1,
  [15202] = 2,
    ACTIONS(1302), 1,
      sym_object_name,
    STATE(216), 1,
      sym_alter_type_rename_item,
  [15209] = 2,
    ACTIONS(1642), 1,
      sym_object_name,
    STATE(530), 1,
      sym_assignment_element,
  [15216] = 2,
    ACTIONS(1870), 1,
      sym_object_name,
    STATE(405), 1,
      sym_alter_table_column_definition,
  [15223] = 1,
    ACTIONS(1872), 1,
      anon_sym_LPAREN,
  [15227] = 1,
    ACTIONS(1874), 1,
      anon_sym_LPAREN,
  [15231] = 1,
    ACTIONS(1876), 1,
      aux_sym_create_function_token1,
  [15235] = 1,
    ACTIONS(1878), 1,
      aux_sym_create_aggregate_token3,
  [15239] = 1,
    ACTIONS(1880), 1,
      sym_object_name,
  [15243] = 1,
    ACTIONS(1882), 1,
      sym_object_name,
  [15247] = 1,
    ACTIONS(1884), 1,
      sym_object_name,
  [15251] = 1,
    ACTIONS(1886), 1,
      anon_sym_RBRACE,
  [15255] = 1,
    ACTIONS(1888), 1,
      aux_sym_insert_statement_token3,
  [15259] = 1,
    ACTIONS(1890), 1,
      aux_sym_delete_statement_token3,
  [15263] = 1,
    ACTIONS(1892), 1,
      aux_sym_select_statement_token5,
  [15267] = 1,
    ACTIONS(1894), 1,
      aux_sym_delete_statement_token3,
  [15271] = 1,
    ACTIONS(1896), 1,
      aux_sym_order_spec_token2,
  [15275] = 1,
    ACTIONS(1898), 1,
      anon_sym_RPAREN,
  [15279] = 1,
    ACTIONS(1900), 1,
      sym_object_name,
  [15283] = 1,
    ACTIONS(1902), 1,
      anon_sym_LPAREN,
  [15287] = 1,
    ACTIONS(1904), 1,
      anon_sym_RPAREN,
  [15291] = 1,
    ACTIONS(1906), 1,
      anon_sym_RPAREN,
  [15295] = 1,
    ACTIONS(1908), 1,
      anon_sym_RPAREN,
  [15299] = 1,
    ACTIONS(1910), 1,
      anon_sym_RPAREN,
  [15303] = 1,
    ACTIONS(1912), 1,
      anon_sym_LBRACE,
  [15307] = 1,
    ACTIONS(1914), 1,
      aux_sym_create_function_token1,
  [15311] = 1,
    ACTIONS(1916), 1,
      anon_sym_LPAREN,
  [15315] = 1,
    ACTIONS(1918), 1,
      aux_sym_using_timestamp_spec_token1,
  [15319] = 1,
    ACTIONS(1920), 1,
      sym_object_name,
  [15323] = 1,
    ACTIONS(1922), 1,
      aux_sym_create_function_token1,
  [15327] = 1,
    ACTIONS(1924), 1,
      aux_sym_select_statement_token1,
  [15331] = 1,
    ACTIONS(1926), 1,
      aux_sym_return_mode_token2,
  [15335] = 1,
    ACTIONS(1928), 1,
      aux_sym_create_function_token1,
  [15339] = 1,
    ACTIONS(1930), 1,
      sym_object_name,
  [15343] = 1,
    ACTIONS(1932), 1,
      aux_sym_create_function_token2,
  [15347] = 1,
    ACTIONS(1934), 1,
      sym_object_name,
  [15351] = 1,
    ACTIONS(1936), 1,
      aux_sym_create_aggregate_token4,
  [15355] = 1,
    ACTIONS(1938), 1,
      aux_sym_create_aggregate_token3,
  [15359] = 1,
    ACTIONS(1940), 1,
      anon_sym_RPAREN,
  [15363] = 1,
    ACTIONS(1942), 1,
      anon_sym_LPAREN,
  [15367] = 1,
    ACTIONS(1944), 1,
      anon_sym_COLON,
  [15371] = 1,
    ACTIONS(1946), 1,
      aux_sym_create_aggregate_token3,
  [15375] = 1,
    ACTIONS(1948), 1,
      sym_object_name,
  [15379] = 1,
    ACTIONS(1950), 1,
      aux_sym_create_function_token1,
  [15383] = 1,
    ACTIONS(1952), 1,
      aux_sym_create_function_token2,
  [15387] = 1,
    ACTIONS(1954), 1,
      aux_sym_return_mode_token2,
  [15391] = 1,
    ACTIONS(1956), 1,
      aux_sym_constant_token1,
  [15395] = 1,
    ACTIONS(1958), 1,
      aux_sym_select_element_token1,
  [15399] = 1,
    ACTIONS(1960), 1,
      aux_sym_create_function_token1,
  [15403] = 1,
    ACTIONS(1962), 1,
      aux_sym_from_spec_token1,
  [15407] = 1,
    ACTIONS(1964), 1,
      anon_sym_LPAREN,
  [15411] = 1,
    ACTIONS(1966), 1,
      sym_object_name,
  [15415] = 1,
    ACTIONS(1968), 1,
      sym_object_name,
  [15419] = 1,
    ACTIONS(1970), 1,
      anon_sym_RBRACE,
  [15423] = 1,
    ACTIONS(1972), 1,
      anon_sym_COLON,
  [15427] = 1,
    ACTIONS(1974), 1,
      anon_sym_GT,
  [15431] = 1,
    ACTIONS(1976), 1,
      anon_sym_RPAREN,
  [15435] = 1,
    ACTIONS(1978), 1,
      anon_sym_RPAREN,
  [15439] = 1,
    ACTIONS(1980), 1,
      sym_object_name,
  [15443] = 1,
    ACTIONS(1982), 1,
      anon_sym_RPAREN,
  [15447] = 1,
    ACTIONS(1984), 1,
      anon_sym_RPAREN,
  [15451] = 1,
    ACTIONS(1986), 1,
      sym_object_name,
  [15455] = 1,
    ACTIONS(1988), 1,
      anon_sym_RPAREN,
  [15459] = 1,
    ACTIONS(1990), 1,
      aux_sym_create_function_token1,
  [15463] = 1,
    ACTIONS(1992), 1,
      sym_object_name,
  [15467] = 1,
    ACTIONS(1994), 1,
      sym_object_name,
  [15471] = 1,
    ACTIONS(1996), 1,
      aux_sym_order_spec_token1,
  [15475] = 1,
    ACTIONS(1998), 1,
      anon_sym_RPAREN,
  [15479] = 1,
    ACTIONS(2000), 1,
      sym_object_name,
  [15483] = 1,
    ACTIONS(2002), 1,
      anon_sym_RPAREN,
  [15487] = 1,
    ACTIONS(2004), 1,
      anon_sym_LPAREN,
  [15491] = 1,
    ACTIONS(2006), 1,
      aux_sym_delete_statement_token3,
  [15495] = 1,
    ACTIONS(2008), 1,
      aux_sym_insert_statement_token3,
  [15499] = 1,
    ACTIONS(2010), 1,
      anon_sym_LPAREN,
  [15503] = 1,
    ACTIONS(2012), 1,
      aux_sym_select_statement_token5,
  [15507] = 1,
    ACTIONS(2014), 1,
      aux_sym_delete_statement_token3,
  [15511] = 1,
    ACTIONS(2016), 1,
      aux_sym_insert_statement_token3,
  [15515] = 1,
    ACTIONS(2018), 1,
      sym_object_name,
  [15519] = 1,
    ACTIONS(2020), 1,
      sym_object_name,
  [15523] = 1,
    ACTIONS(2022), 1,
      aux_sym_insert_statement_token3,
  [15527] = 1,
    ACTIONS(2024), 1,
      anon_sym_EQ,
  [15531] = 1,
    ACTIONS(2026), 1,
      aux_sym_delete_statement_token3,
  [15535] = 1,
    ACTIONS(1129), 1,
      sym_object_name,
  [15539] = 1,
    ACTIONS(2028), 1,
      aux_sym_create_index_token3,
  [15543] = 1,
    ACTIONS(2030), 1,
      sym_object_name,
  [15547] = 1,
    ACTIONS(2032), 1,
      anon_sym_RPAREN,
  [15551] = 1,
    ACTIONS(2034), 1,
      anon_sym_LPAREN,
  [15555] = 1,
    ACTIONS(2036), 1,
      sym_object_name,
  [15559] = 1,
    ACTIONS(2038), 1,
      anon_sym_LPAREN,
  [15563] = 1,
    ACTIONS(2040), 1,
      sym_object_name,
  [15567] = 1,
    ACTIONS(2042), 1,
      sym_object_name,
  [15571] = 1,
    ACTIONS(2044), 1,
      sym_object_name,
  [15575] = 1,
    ACTIONS(2046), 1,
      sym_object_name,
  [15579] = 1,
    ACTIONS(2048), 1,
      sym_object_name,
  [15583] = 1,
    ACTIONS(2050), 1,
      sym_object_name,
  [15587] = 1,
    ACTIONS(2052), 1,
      aux_sym_from_spec_token1,
  [15591] = 1,
    ACTIONS(2054), 1,
      aux_sym_select_statement_token1,
  [15595] = 1,
    ACTIONS(2056), 1,
      sym_object_name,
  [15599] = 1,
    ACTIONS(2058), 1,
      anon_sym_RPAREN,
  [15603] = 1,
    ACTIONS(2060), 1,
      sym_object_name,
  [15607] = 1,
    ACTIONS(2062), 1,
      aux_sym_create_function_token1,
  [15611] = 1,
    ACTIONS(2064), 1,
      anon_sym_RPAREN,
  [15615] = 1,
    ACTIONS(2066), 1,
      aux_sym_constant_token1,
  [15619] = 1,
    ACTIONS(2068), 1,
      anon_sym_LPAREN,
  [15623] = 1,
    ACTIONS(2070), 1,
      aux_sym_create_index_token3,
  [15627] = 1,
    ACTIONS(2072), 1,
      sym_object_name,
  [15631] = 1,
    ACTIONS(2074), 1,
      anon_sym_RPAREN,
  [15635] = 1,
    ACTIONS(2076), 1,
      anon_sym_RPAREN,
  [15639] = 1,
    ACTIONS(2078), 1,
      aux_sym_create_keyspace_token1,
  [15643] = 1,
    ACTIONS(2080), 1,
      anon_sym_LPAREN,
  [15647] = 1,
    ACTIONS(2082), 1,
      anon_sym_RPAREN,
  [15651] = 1,
    ACTIONS(2084), 1,
      sym_object_name,
  [15655] = 1,
    ACTIONS(2086), 1,
      aux_sym_create_materialized_view_token2,
  [15659] = 1,
    ACTIONS(2088), 1,
      sym_object_name,
  [15663] = 1,
    ACTIONS(2090), 1,
      sym_object_name,
  [15667] = 1,
    ACTIONS(2092), 1,
      anon_sym_RPAREN,
  [15671] = 1,
    ACTIONS(2094), 1,
      anon_sym_LPAREN,
  [15675] = 1,
    ACTIONS(2096), 1,
      anon_sym_RPAREN,
  [15679] = 1,
    ACTIONS(2098), 1,
      aux_sym_relation_contains_key_token2,
  [15683] = 1,
    ACTIONS(2100), 1,
      aux_sym_relation_contains_key_token2,
  [15687] = 1,
    ACTIONS(2102), 1,
      anon_sym_RPAREN,
  [15691] = 1,
    ACTIONS(2104), 1,
      aux_sym_create_function_token1,
  [15695] = 1,
    ACTIONS(2106), 1,
      sym_object_name,
  [15699] = 1,
    ACTIONS(2108), 1,
      aux_sym_create_function_token2,
  [15703] = 1,
    ACTIONS(2110), 1,
      aux_sym_delete_statement_token3,
  [15707] = 1,
    ACTIONS(2112), 1,
      aux_sym_create_function_token1,
  [15711] = 1,
    ACTIONS(2114), 1,
      aux_sym_create_function_token1,
  [15715] = 1,
    ACTIONS(2116), 1,
      aux_sym_select_element_token1,
  [15719] = 1,
    ACTIONS(2118), 1,
      sym_object_name,
  [15723] = 1,
    ACTIONS(2120), 1,
      aux_sym_create_function_token2,
  [15727] = 1,
    ACTIONS(2122), 1,
      anon_sym_RPAREN,
  [15731] = 1,
    ACTIONS(2124), 1,
      aux_sym_insert_statement_token3,
  [15735] = 1,
    ACTIONS(2126), 1,
      anon_sym_RPAREN,
  [15739] = 1,
    ACTIONS(2128), 1,
      anon_sym_LPAREN,
  [15743] = 1,
    ACTIONS(2130), 1,
      anon_sym_RPAREN,
  [15747] = 1,
    ACTIONS(2132), 1,
      sym_object_name,
  [15751] = 1,
    ACTIONS(2134), 1,
      aux_sym_create_aggregate_token4,
  [15755] = 1,
    ACTIONS(2136), 1,
      aux_sym_create_aggregate_token5,
  [15759] = 1,
    ACTIONS(2138), 1,
      aux_sym_select_statement_token1,
  [15763] = 1,
    ACTIONS(2140), 1,
      aux_sym_from_spec_token1,
  [15767] = 1,
    ACTIONS(2142), 1,
      sym_object_name,
  [15771] = 1,
    ACTIONS(2144), 1,
      sym_object_name,
  [15775] = 1,
    ACTIONS(2146), 1,
      aux_sym_select_statement_token5,
  [15779] = 1,
    ACTIONS(2148), 1,
      aux_sym_create_materialized_view_token1,
  [15783] = 1,
    ACTIONS(2150), 1,
      aux_sym_update_token2,
  [15787] = 1,
    ACTIONS(2152), 1,
      aux_sym_insert_statement_token3,
  [15791] = 1,
    ACTIONS(2154), 1,
      sym_object_name,
  [15795] = 1,
    ACTIONS(2156), 1,
      anon_sym_LBRACE,
  [15799] = 1,
    ACTIONS(2158), 1,
      sym_object_name,
  [15803] = 1,
    ACTIONS(2160), 1,
      anon_sym_LPAREN,
  [15807] = 1,
    ACTIONS(2162), 1,
      sym_object_name,
  [15811] = 1,
    ACTIONS(2164), 1,
      aux_sym_resource_token2,
  [15815] = 1,
    ACTIONS(2166), 1,
      aux_sym_create_function_token1,
  [15819] = 1,
    ACTIONS(2168), 1,
      sym_object_name,
  [15823] = 1,
    ACTIONS(2170), 1,
      anon_sym_RBRACK,
  [15827] = 1,
    ACTIONS(2172), 1,
      aux_sym_create_function_token2,
  [15831] = 1,
    ACTIONS(2174), 1,
      sym_object_name,
  [15835] = 1,
    ACTIONS(2176), 1,
      aux_sym_create_function_token1,
  [15839] = 1,
    ACTIONS(2178), 1,
      anon_sym_LPAREN,
  [15843] = 1,
    ACTIONS(2180), 1,
      anon_sym_RPAREN,
  [15847] = 1,
    ACTIONS(2182), 1,
      aux_sym_create_aggregate_token3,
  [15851] = 1,
    ACTIONS(2184), 1,
      aux_sym_create_aggregate_token4,
  [15855] = 1,
    ACTIONS(2186), 1,
      sym_object_name,
  [15859] = 1,
    ACTIONS(2188), 1,
      sym_object_name,
  [15863] = 1,
    ACTIONS(2190), 1,
      sym_object_name,
  [15867] = 1,
    ACTIONS(2192), 1,
      sym_object_name,
  [15871] = 1,
    ACTIONS(2194), 1,
      aux_sym_delete_statement_token3,
  [15875] = 1,
    ACTIONS(2196), 1,
      sym_object_name,
  [15879] = 1,
    ACTIONS(2198), 1,
      sym_object_name,
  [15883] = 1,
    ACTIONS(2200), 1,
      sym_object_name,
  [15887] = 1,
    ACTIONS(2202), 1,
      sym_object_name,
  [15891] = 1,
    ACTIONS(2204), 1,
      sym_object_name,
  [15895] = 1,
    ACTIONS(2206), 1,
      sym_object_name,
  [15899] = 1,
    ACTIONS(2208), 1,
      aux_sym_delete_statement_token3,
  [15903] = 1,
    ACTIONS(2210), 1,
      sym_object_name,
  [15907] = 1,
    ACTIONS(2212), 1,
      aux_sym_delete_statement_token3,
  [15911] = 1,
    ACTIONS(2214), 1,
      anon_sym_COLON,
  [15915] = 1,
    ACTIONS(2216), 1,
      sym_object_name,
  [15919] = 1,
    ACTIONS(2218), 1,
      sym_object_name,
  [15923] = 1,
    ACTIONS(2220), 1,
      sym_object_name,
  [15927] = 1,
    ACTIONS(2222), 1,
      sym_object_name,
  [15931] = 1,
    ACTIONS(2224), 1,
      aux_sym_select_element_token1,
  [15935] = 1,
    ACTIONS(2226), 1,
      anon_sym_RPAREN,
  [15939] = 1,
    ACTIONS(2228), 1,
      sym_decimal_literal,
  [15943] = 1,
    ACTIONS(2230), 1,
      anon_sym_RPAREN,
  [15947] = 1,
    ACTIONS(2232), 1,
      aux_sym_create_aggregate_token3,
  [15951] = 1,
    ACTIONS(2234), 1,
      sym_boolean_literal,
  [15955] = 1,
    ACTIONS(2236), 1,
      anon_sym_RPAREN,
  [15959] = 1,
    ACTIONS(2238), 1,
      anon_sym_RBRACE,
  [15963] = 1,
    ACTIONS(2240), 1,
      anon_sym_EQ,
  [15967] = 1,
    ACTIONS(2234), 1,
      sym_string_literal,
  [15971] = 1,
    ACTIONS(2242), 1,
      aux_sym_create_function_token1,
  [15975] = 1,
    ACTIONS(2244), 1,
      aux_sym_create_function_token1,
  [15979] = 1,
    ACTIONS(2246), 1,
      aux_sym_create_index_token3,
  [15983] = 1,
    ACTIONS(2248), 1,
      aux_sym_create_function_token2,
  [15987] = 1,
    ACTIONS(2250), 1,
      aux_sym_constant_token1,
  [15991] = 1,
    ACTIONS(2252), 1,
      aux_sym_create_function_token1,
  [15995] = 1,
    ACTIONS(2254), 1,
      sym_object_name,
  [15999] = 1,
    ACTIONS(2256), 1,
      aux_sym_create_function_token2,
  [16003] = 1,
    ACTIONS(2258), 1,
      anon_sym_LBRACE,
  [16007] = 1,
    ACTIONS(2260), 1,
      sym_code_block,
  [16011] = 1,
    ACTIONS(2262), 1,
      aux_sym_select_element_token1,
  [16015] = 1,
    ACTIONS(2264), 1,
      sym_object_name,
  [16019] = 1,
    ACTIONS(2266), 1,
      aux_sym_create_materialized_view_token2,
  [16023] = 1,
    ACTIONS(2268), 1,
      aux_sym_create_aggregate_token3,
  [16027] = 1,
    ACTIONS(2270), 1,
      aux_sym_create_aggregate_token4,
  [16031] = 1,
    ACTIONS(2272), 1,
      anon_sym_RPAREN,
  [16035] = 1,
    ACTIONS(2274), 1,
      sym_object_name,
  [16039] = 1,
    ACTIONS(2276), 1,
      anon_sym_RPAREN,
  [16043] = 1,
    ACTIONS(2278), 1,
      sym_object_name,
  [16047] = 1,
    ACTIONS(2280), 1,
      anon_sym_RPAREN,
  [16051] = 1,
    ACTIONS(2282), 1,
      anon_sym_LPAREN,
  [16055] = 1,
    ACTIONS(2284), 1,
      aux_sym_column_not_null_token1,
  [16059] = 1,
    ACTIONS(2286), 1,
      anon_sym_LPAREN,
  [16063] = 1,
    ACTIONS(2288), 1,
      anon_sym_LPAREN,
  [16067] = 1,
    ACTIONS(2290), 1,
      aux_sym_relation_contains_key_token2,
  [16071] = 1,
    ACTIONS(2292), 1,
      anon_sym_LPAREN,
  [16075] = 1,
    ACTIONS(2294), 1,
      sym_object_name,
  [16079] = 1,
    ACTIONS(2296), 1,
      aux_sym_create_index_token3,
  [16083] = 1,
    ACTIONS(2298), 1,
      aux_sym_create_function_token1,
  [16087] = 1,
    ACTIONS(2300), 1,
      sym_object_name,
  [16091] = 1,
    ACTIONS(2302), 1,
      aux_sym_delete_statement_token3,
  [16095] = 1,
    ACTIONS(2304), 1,
      aux_sym_insert_statement_token3,
  [16099] = 1,
    ACTIONS(2306), 1,
      aux_sym_create_function_token1,
  [16103] = 1,
    ACTIONS(2308), 1,
      anon_sym_RPAREN,
  [16107] = 1,
    ACTIONS(2310), 1,
      sym_object_name,
  [16111] = 1,
    ACTIONS(2312), 1,
      aux_sym_create_function_token2,
  [16115] = 1,
    ACTIONS(2314), 1,
      sym_object_name,
  [16119] = 1,
    ACTIONS(1031), 1,
      anon_sym_LPAREN,
  [16123] = 1,
    ACTIONS(2316), 1,
      aux_sym_create_aggregate_token3,
  [16127] = 1,
    ACTIONS(2318), 1,
      sym_object_name,
  [16131] = 1,
    ACTIONS(2320), 1,
      sym_object_name,
  [16135] = 1,
    ACTIONS(2322), 1,
      aux_sym_select_statement_token5,
  [16139] = 1,
    ACTIONS(2324), 1,
      sym_object_name,
  [16143] = 1,
    ACTIONS(2326), 1,
      sym_object_name,
  [16147] = 1,
    ACTIONS(2328), 1,
      aux_sym_grant_token2,
  [16151] = 1,
    ACTIONS(2330), 1,
      aux_sym_drop_type_token1,
  [16155] = 1,
    ACTIONS(2332), 1,
      sym_object_name,
  [16159] = 1,
    ACTIONS(2334), 1,
      anon_sym_EQ,
  [16163] = 1,
    ACTIONS(2336), 1,
      aux_sym_grant_token2,
  [16167] = 1,
    ACTIONS(2338), 1,
      anon_sym_EQ,
  [16171] = 1,
    ACTIONS(2340), 1,
      anon_sym_EQ,
  [16175] = 1,
    ACTIONS(2342), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [16179] = 1,
    ACTIONS(2344), 1,
      sym_object_name,
  [16183] = 1,
    ACTIONS(2346), 1,
      anon_sym_COMMA,
  [16187] = 1,
    ACTIONS(2348), 1,
      sym_object_name,
  [16191] = 1,
    ACTIONS(2350), 1,
      anon_sym_RPAREN,
  [16195] = 1,
    ACTIONS(2352), 1,
      anon_sym_RPAREN,
  [16199] = 1,
    ACTIONS(2354), 1,
      sym_object_name,
  [16203] = 1,
    ACTIONS(2356), 1,
      sym_object_name,
  [16207] = 1,
    ACTIONS(2358), 1,
      sym_boolean_literal,
  [16211] = 1,
    ACTIONS(2360), 1,
      aux_sym_update_token2,
  [16215] = 1,
    ACTIONS(2362), 1,
      aux_sym_create_function_token1,
  [16219] = 1,
    ACTIONS(2364), 1,
      aux_sym_create_index_token3,
  [16223] = 1,
    ACTIONS(2366), 1,
      sym_object_name,
  [16227] = 1,
    ACTIONS(2368), 1,
      aux_sym_create_function_token2,
  [16231] = 1,
    ACTIONS(2370), 1,
      sym_object_name,
  [16235] = 1,
    ACTIONS(2372), 1,
      aux_sym_select_element_token1,
  [16239] = 1,
    ACTIONS(2374), 1,
      sym_object_name,
  [16243] = 1,
    ACTIONS(2376), 1,
      aux_sym_create_function_token2,
  [16247] = 1,
    ACTIONS(2378), 1,
      sym_object_name,
  [16251] = 1,
    ACTIONS(2380), 1,
      sym_code_block,
  [16255] = 1,
    ACTIONS(2382), 1,
      aux_sym_select_element_token1,
  [16259] = 1,
    ACTIONS(2384), 1,
      sym_object_name,
  [16263] = 1,
    ACTIONS(2386), 1,
      aux_sym_insert_statement_token3,
  [16267] = 1,
    ACTIONS(2388), 1,
      aux_sym_create_aggregate_token5,
  [16271] = 1,
    ACTIONS(2390), 1,
      aux_sym_create_aggregate_token6,
  [16275] = 1,
    ACTIONS(2392), 1,
      aux_sym_from_spec_token1,
  [16279] = 1,
    ACTIONS(2394), 1,
      aux_sym_insert_statement_token3,
  [16283] = 1,
    ACTIONS(2396), 1,
      sym_object_name,
  [16287] = 1,
    ACTIONS(2398), 1,
      aux_sym_create_materialized_view_token1,
  [16291] = 1,
    ACTIONS(2400), 1,
      aux_sym_create_materialized_view_token1,
  [16295] = 1,
    ACTIONS(2402), 1,
      aux_sym_insert_statement_token3,
  [16299] = 1,
    ACTIONS(2404), 1,
      sym_string_literal,
  [16303] = 1,
    ACTIONS(2406), 1,
      sym_object_name,
  [16307] = 1,
    ACTIONS(2408), 1,
      sym_object_name,
  [16311] = 1,
    ACTIONS(2410), 1,
      anon_sym_LPAREN,
  [16315] = 1,
    ACTIONS(2412), 1,
      aux_sym_using_timestamp_spec_token1,
  [16319] = 1,
    ACTIONS(2414), 1,
      sym_object_name,
  [16323] = 1,
    ACTIONS(2416), 1,
      aux_sym_select_statement_token1,
  [16327] = 1,
    ACTIONS(2418), 1,
      sym_object_name,
  [16331] = 1,
    ACTIONS(2420), 1,
      aux_sym_delete_statement_token3,
  [16335] = 1,
    ACTIONS(2422), 1,
      aux_sym_create_function_token1,
  [16339] = 1,
    ACTIONS(2424), 1,
      anon_sym_RPAREN,
  [16343] = 1,
    ACTIONS(2426), 1,
      aux_sym_create_function_token2,
  [16347] = 1,
    ACTIONS(2428), 1,
      anon_sym_LPAREN,
  [16351] = 1,
    ACTIONS(2430), 1,
      aux_sym_create_function_token1,
  [16355] = 1,
    ACTIONS(2432), 1,
      aux_sym_select_element_token1,
  [16359] = 1,
    ACTIONS(2434), 1,
      sym_object_name,
  [16363] = 1,
    ACTIONS(2436), 1,
      aux_sym_create_function_token2,
  [16367] = 1,
    ACTIONS(2438), 1,
      anon_sym_RPAREN,
  [16371] = 1,
    ACTIONS(2440), 1,
      sym_object_name,
  [16375] = 1,
    ACTIONS(2442), 1,
      aux_sym_create_aggregate_token4,
  [16379] = 1,
    ACTIONS(2444), 1,
      aux_sym_create_aggregate_token5,
  [16383] = 1,
    ACTIONS(2446), 1,
      sym_object_name,
  [16387] = 1,
    ACTIONS(2448), 1,
      anon_sym_EQ,
  [16391] = 1,
    ACTIONS(2450), 1,
      anon_sym_EQ,
  [16395] = 1,
    ACTIONS(2452), 1,
      anon_sym_EQ,
  [16399] = 1,
    ACTIONS(2454), 1,
      anon_sym_RPAREN,
  [16403] = 1,
    ACTIONS(2456), 1,
      sym_object_name,
  [16407] = 1,
    ACTIONS(2458), 1,
      anon_sym_LPAREN,
  [16411] = 1,
    ACTIONS(2460), 1,
      sym_object_name,
  [16415] = 1,
    ACTIONS(2462), 1,
      anon_sym_GT,
  [16419] = 1,
    ACTIONS(2464), 1,
      sym_object_name,
  [16423] = 1,
    ACTIONS(2466), 1,
      aux_sym_create_function_token2,
  [16427] = 1,
    ACTIONS(2468), 1,
      aux_sym_grant_token2,
  [16431] = 1,
    ACTIONS(2470), 1,
      aux_sym_create_function_token1,
  [16435] = 1,
    ACTIONS(2472), 1,
      aux_sym_select_element_token1,
  [16439] = 1,
    ACTIONS(2474), 1,
      sym_object_name,
  [16443] = 1,
    ACTIONS(2476), 1,
      aux_sym_create_function_token2,
  [16447] = 1,
    ACTIONS(2478), 1,
      sym_code_block,
  [16451] = 1,
    ACTIONS(2480), 1,
      aux_sym_select_element_token1,
  [16455] = 1,
    ACTIONS(2482), 1,
      sym_object_name,
  [16459] = 1,
    ACTIONS(2484), 1,
      anon_sym_RPAREN,
  [16463] = 1,
    ACTIONS(2486), 1,
      sym_code_block,
  [16467] = 1,
    ACTIONS(2488), 1,
      aux_sym_create_aggregate_token4,
  [16471] = 1,
    ACTIONS(2490), 1,
      aux_sym_create_aggregate_token5,
  [16475] = 1,
    ACTIONS(2492), 1,
      sym_object_name,
  [16479] = 1,
    ACTIONS(2494), 1,
      anon_sym_LPAREN,
  [16483] = 1,
    ACTIONS(2496), 1,
      sym_object_name,
  [16487] = 1,
    ACTIONS(2498), 1,
      sym_object_name,
  [16491] = 1,
    ACTIONS(2500), 1,
      aux_sym_create_materialized_view_token1,
  [16495] = 1,
    ACTIONS(2502), 1,
      sym_object_name,
  [16499] = 1,
    ACTIONS(2504), 1,
      aux_sym_relation_contains_key_token2,
  [16503] = 1,
    ACTIONS(2506), 1,
      aux_sym_relation_contains_key_token2,
  [16507] = 1,
    ACTIONS(2508), 1,
      aux_sym_constant_token1,
  [16511] = 1,
    ACTIONS(2510), 1,
      aux_sym_create_materialized_view_token1,
  [16515] = 1,
    ACTIONS(2512), 1,
      aux_sym_insert_statement_token3,
  [16519] = 1,
    ACTIONS(2514), 1,
      anon_sym_RPAREN,
  [16523] = 1,
    ACTIONS(2516), 1,
      anon_sym_EQ,
  [16527] = 1,
    ACTIONS(2518), 1,
      anon_sym_LPAREN,
  [16531] = 1,
    ACTIONS(2520), 1,
      aux_sym_create_function_token1,
  [16535] = 1,
    ACTIONS(2522), 1,
      sym_object_name,
  [16539] = 1,
    ACTIONS(2524), 1,
      aux_sym_select_statement_token5,
  [16543] = 1,
    ACTIONS(2526), 1,
      aux_sym_create_function_token2,
  [16547] = 1,
    ACTIONS(2528), 1,
      aux_sym_update_token2,
  [16551] = 1,
    ACTIONS(2530), 1,
      aux_sym_create_function_token1,
  [16555] = 1,
    ACTIONS(2532), 1,
      sym_object_name,
  [16559] = 1,
    ACTIONS(2534), 1,
      aux_sym_create_function_token2,
  [16563] = 1,
    ACTIONS(2536), 1,
      sym_object_name,
  [16567] = 1,
    ACTIONS(2538), 1,
      sym_code_block,
  [16571] = 1,
    ACTIONS(2540), 1,
      aux_sym_select_element_token1,
  [16575] = 1,
    ACTIONS(2542), 1,
      sym_object_name,
  [16579] = 1,
    ACTIONS(2544), 1,
      aux_sym_create_aggregate_token3,
  [16583] = 1,
    ACTIONS(2546), 1,
      aux_sym_create_aggregate_token4,
  [16587] = 1,
    ACTIONS(2548), 1,
      sym_object_name,
  [16591] = 1,
    ACTIONS(2550), 1,
      sym_object_name,
  [16595] = 1,
    ACTIONS(2552), 1,
      sym_object_name,
  [16599] = 1,
    ACTIONS(2554), 1,
      anon_sym_RPAREN,
  [16603] = 1,
    ACTIONS(2556), 1,
      sym_object_name,
  [16607] = 1,
    ACTIONS(2558), 1,
      sym_object_name,
  [16611] = 1,
    ACTIONS(2560), 1,
      aux_sym_create_function_token2,
  [16615] = 1,
    ACTIONS(2562), 1,
      aux_sym_create_keyspace_token1,
  [16619] = 1,
    ACTIONS(2564), 1,
      sym_code_block,
  [16623] = 1,
    ACTIONS(2566), 1,
      aux_sym_select_element_token1,
  [16627] = 1,
    ACTIONS(2568), 1,
      sym_object_name,
  [16631] = 1,
    ACTIONS(2570), 1,
      sym_object_name,
  [16635] = 1,
    ACTIONS(2572), 1,
      sym_code_block,
  [16639] = 1,
    ACTIONS(2574), 1,
      aux_sym_select_element_token1,
  [16643] = 1,
    ACTIONS(2576), 1,
      sym_object_name,
  [16647] = 1,
    ACTIONS(2578), 1,
      aux_sym_from_spec_token1,
  [16651] = 1,
    ACTIONS(2580), 1,
      sym_object_name,
  [16655] = 1,
    ACTIONS(2582), 1,
      aux_sym_create_aggregate_token6,
  [16659] = 1,
    ACTIONS(2584), 1,
      aux_sym_delete_statement_token3,
  [16663] = 1,
    ACTIONS(2586), 1,
      sym_object_name,
  [16667] = 1,
    ACTIONS(2588), 1,
      sym_object_name,
  [16671] = 1,
    ACTIONS(2590), 1,
      sym_object_name,
  [16675] = 1,
    ACTIONS(2592), 1,
      sym_object_name,
  [16679] = 1,
    ACTIONS(2594), 1,
      aux_sym_relation_contains_key_token2,
  [16683] = 1,
    ACTIONS(2596), 1,
      aux_sym_create_materialized_view_token1,
  [16687] = 1,
    ACTIONS(2598), 1,
      anon_sym_LPAREN,
  [16691] = 1,
    ACTIONS(2600), 1,
      anon_sym_LPAREN,
  [16695] = 1,
    ACTIONS(2602), 1,
      sym_decimal_literal,
  [16699] = 1,
    ACTIONS(2604), 1,
      anon_sym_RPAREN,
  [16703] = 1,
    ACTIONS(2606), 1,
      sym_object_name,
  [16707] = 1,
    ACTIONS(2608), 1,
      aux_sym_create_function_token1,
  [16711] = 1,
    ACTIONS(2610), 1,
      sym_object_name,
  [16715] = 1,
    ACTIONS(2612), 1,
      sym_object_name,
  [16719] = 1,
    ACTIONS(2614), 1,
      aux_sym_create_function_token2,
  [16723] = 1,
    ACTIONS(2616), 1,
      sym_object_name,
  [16727] = 1,
    ACTIONS(2618), 1,
      aux_sym_select_element_token1,
  [16731] = 1,
    ACTIONS(2620), 1,
      sym_object_name,
  [16735] = 1,
    ACTIONS(2622), 1,
      aux_sym_create_function_token2,
  [16739] = 1,
    ACTIONS(2624), 1,
      sym_object_name,
  [16743] = 1,
    ACTIONS(2626), 1,
      sym_code_block,
  [16747] = 1,
    ACTIONS(2628), 1,
      aux_sym_select_element_token1,
  [16751] = 1,
    ACTIONS(2630), 1,
      sym_object_name,
  [16755] = 1,
    ACTIONS(2632), 1,
      sym_object_name,
  [16759] = 1,
    ACTIONS(2634), 1,
      aux_sym_create_aggregate_token5,
  [16763] = 1,
    ACTIONS(2636), 1,
      aux_sym_create_aggregate_token6,
  [16767] = 1,
    ACTIONS(2638), 1,
      aux_sym_select_element_token1,
  [16771] = 1,
    ACTIONS(2640), 1,
      sym_object_name,
  [16775] = 1,
    ACTIONS(2642), 1,
      aux_sym_create_function_token2,
  [16779] = 1,
    ACTIONS(2644), 1,
      sym_object_name,
  [16783] = 1,
    ACTIONS(2646), 1,
      sym_code_block,
  [16787] = 1,
    ACTIONS(2648), 1,
      aux_sym_select_element_token1,
  [16791] = 1,
    ACTIONS(2650), 1,
      sym_object_name,
  [16795] = 1,
    ACTIONS(2652), 1,
      sym_code_block,
  [16799] = 1,
    ACTIONS(2654), 1,
      aux_sym_create_aggregate_token5,
  [16803] = 1,
    ACTIONS(2656), 1,
      aux_sym_create_aggregate_token6,
  [16807] = 1,
    ACTIONS(2658), 1,
      aux_sym_delete_statement_token3,
  [16811] = 1,
    ACTIONS(2660), 1,
      sym_object_name,
  [16815] = 1,
    ACTIONS(2662), 1,
      anon_sym_COLON,
  [16819] = 1,
    ACTIONS(2664), 1,
      sym_object_name,
  [16823] = 1,
    ACTIONS(2666), 1,
      sym_object_name,
  [16827] = 1,
    ACTIONS(2668), 1,
      sym_object_name,
  [16831] = 1,
    ACTIONS(2670), 1,
      sym_object_name,
  [16835] = 1,
    ACTIONS(2672), 1,
      aux_sym_create_materialized_view_token1,
  [16839] = 1,
    ACTIONS(2674), 1,
      aux_sym_create_materialized_view_token1,
  [16843] = 1,
    ACTIONS(2676), 1,
      anon_sym_LPAREN,
  [16847] = 1,
    ACTIONS(2678), 1,
      aux_sym_relation_contains_key_token2,
  [16851] = 1,
    ACTIONS(2680), 1,
      sym_object_name,
  [16855] = 1,
    ACTIONS(2682), 1,
      sym_object_name,
  [16859] = 1,
    ACTIONS(2684), 1,
      sym_object_name,
  [16863] = 1,
    ACTIONS(2686), 1,
      aux_sym_create_function_token2,
  [16867] = 1,
    ACTIONS(2688), 1,
      sym_object_name,
  [16871] = 1,
    ACTIONS(2690), 1,
      aux_sym_create_function_token1,
  [16875] = 1,
    ACTIONS(2692), 1,
      aux_sym_select_element_token1,
  [16879] = 1,
    ACTIONS(2694), 1,
      sym_object_name,
  [16883] = 1,
    ACTIONS(2696), 1,
      aux_sym_create_function_token2,
  [16887] = 1,
    ACTIONS(2698), 1,
      sym_code_block,
  [16891] = 1,
    ACTIONS(2700), 1,
      aux_sym_select_element_token1,
  [16895] = 1,
    ACTIONS(2702), 1,
      sym_object_name,
  [16899] = 1,
    ACTIONS(2704), 1,
      aux_sym_delete_statement_token3,
  [16903] = 1,
    ACTIONS(2706), 1,
      sym_code_block,
  [16907] = 1,
    ACTIONS(2708), 1,
      aux_sym_create_aggregate_token4,
  [16911] = 1,
    ACTIONS(2710), 1,
      aux_sym_create_aggregate_token5,
  [16915] = 1,
    ACTIONS(2712), 1,
      sym_object_name,
  [16919] = 1,
    ACTIONS(2714), 1,
      sym_object_name,
  [16923] = 1,
    ACTIONS(2716), 1,
      sym_code_block,
  [16927] = 1,
    ACTIONS(2718), 1,
      aux_sym_select_element_token1,
  [16931] = 1,
    ACTIONS(2720), 1,
      sym_object_name,
  [16935] = 1,
    ACTIONS(2722), 1,
      sym_object_name,
  [16939] = 1,
    ACTIONS(2724), 1,
      sym_code_block,
  [16943] = 1,
    ACTIONS(2726), 1,
      aux_sym_delete_statement_token3,
  [16947] = 1,
    ACTIONS(2728), 1,
      sym_object_name,
  [16951] = 1,
    ACTIONS(2730), 1,
      sym_object_name,
  [16955] = 1,
    ACTIONS(2732), 1,
      sym_object_name,
  [16959] = 1,
    ACTIONS(2734), 1,
      aux_sym_delete_statement_token3,
  [16963] = 1,
    ACTIONS(2736), 1,
      aux_sym_insert_statement_token3,
  [16967] = 1,
    ACTIONS(2738), 1,
      sym_object_name,
  [16971] = 1,
    ACTIONS(2740), 1,
      aux_sym_delete_statement_token3,
  [16975] = 1,
    ACTIONS(2742), 1,
      aux_sym_delete_statement_token3,
  [16979] = 1,
    ACTIONS(2744), 1,
      sym_object_name,
  [16983] = 1,
    ACTIONS(2746), 1,
      aux_sym_delete_statement_token3,
  [16987] = 1,
    ACTIONS(2748), 1,
      aux_sym_create_keyspace_token1,
  [16991] = 1,
    ACTIONS(2750), 1,
      aux_sym_delete_statement_token3,
  [16995] = 1,
    ACTIONS(2752), 1,
      aux_sym_delete_statement_token3,
  [16999] = 1,
    ACTIONS(2754), 1,
      aux_sym_relation_contains_key_token2,
  [17003] = 1,
    ACTIONS(2756), 1,
      aux_sym_relation_contains_key_token2,
  [17007] = 1,
    ACTIONS(2758), 1,
      sym_object_name,
  [17011] = 1,
    ACTIONS(2760), 1,
      anon_sym_LPAREN,
  [17015] = 1,
    ACTIONS(2762), 1,
      anon_sym_RPAREN,
  [17019] = 1,
    ACTIONS(2764), 1,
      anon_sym_RPAREN,
  [17023] = 1,
    ACTIONS(2766), 1,
      sym_object_name,
  [17027] = 1,
    ACTIONS(2768), 1,
      sym_object_name,
  [17031] = 1,
    ACTIONS(2770), 1,
      aux_sym_create_function_token2,
  [17035] = 1,
    ACTIONS(2772), 1,
      aux_sym_delete_statement_token3,
  [17039] = 1,
    ACTIONS(2774), 1,
      sym_code_block,
  [17043] = 1,
    ACTIONS(2776), 1,
      aux_sym_select_element_token1,
  [17047] = 1,
    ACTIONS(2778), 1,
      sym_object_name,
  [17051] = 1,
    ACTIONS(2780), 1,
      sym_object_name,
  [17055] = 1,
    ACTIONS(2782), 1,
      sym_code_block,
  [17059] = 1,
    ACTIONS(2784), 1,
      aux_sym_select_element_token1,
  [17063] = 1,
    ACTIONS(2786), 1,
      anon_sym_LPAREN,
  [17067] = 1,
    ACTIONS(2788), 1,
      sym_object_name,
  [17071] = 1,
    ACTIONS(2790), 1,
      sym_object_name,
  [17075] = 1,
    ACTIONS(2792), 1,
      aux_sym_create_aggregate_token6,
  [17079] = 1,
    ACTIONS(2794), 1,
      sym_decimal_literal,
  [17083] = 1,
    ACTIONS(2796), 1,
      sym_object_name,
  [17087] = 1,
    ACTIONS(2798), 1,
      sym_code_block,
  [17091] = 1,
    ACTIONS(2800), 1,
      aux_sym_select_element_token1,
  [17095] = 1,
    ACTIONS(2802), 1,
      anon_sym_RBRACK,
  [17099] = 1,
    ACTIONS(2804), 1,
      aux_sym_create_aggregate_token6,
  [17103] = 1,
    ACTIONS(2806), 1,
      sym_object_name,
  [17107] = 1,
    ACTIONS(2808), 1,
      aux_sym_order_spec_token2,
  [17111] = 1,
    ACTIONS(2810), 1,
      sym_decimal_literal,
  [17115] = 1,
    ACTIONS(2812), 1,
      aux_sym_select_statement_token5,
  [17119] = 1,
    ACTIONS(2814), 1,
      anon_sym_RPAREN,
  [17123] = 1,
    ACTIONS(2816), 1,
      sym_object_name,
  [17127] = 1,
    ACTIONS(2818), 1,
      sym_object_name,
  [17131] = 1,
    ACTIONS(2820), 1,
      sym_object_name,
  [17135] = 1,
    ACTIONS(2822), 1,
      aux_sym_create_materialized_view_token2,
  [17139] = 1,
    ACTIONS(2824), 1,
      aux_sym_create_materialized_view_token1,
  [17143] = 1,
    ACTIONS(2826), 1,
      anon_sym_LPAREN,
  [17147] = 1,
    ACTIONS(2828), 1,
      anon_sym_LPAREN,
  [17151] = 1,
    ACTIONS(2830), 1,
      anon_sym_RPAREN,
  [17155] = 1,
    ACTIONS(2832), 1,
      sym_object_name,
  [17159] = 1,
    ACTIONS(2834), 1,
      aux_sym_create_materialized_view_token2,
  [17163] = 1,
    ACTIONS(2836), 1,
      aux_sym_update_token2,
  [17167] = 1,
    ACTIONS(2838), 1,
      sym_object_name,
  [17171] = 1,
    ACTIONS(2840), 1,
      aux_sym_delete_statement_token3,
  [17175] = 1,
    ACTIONS(2842), 1,
      aux_sym_delete_statement_token3,
  [17179] = 1,
    ACTIONS(2844), 1,
      aux_sym_select_element_token1,
  [17183] = 1,
    ACTIONS(2846), 1,
      sym_object_name,
  [17187] = 1,
    ACTIONS(2848), 1,
      aux_sym_create_function_token2,
  [17191] = 1,
    ACTIONS(2850), 1,
      aux_sym_insert_statement_token2,
  [17195] = 1,
    ACTIONS(2852), 1,
      sym_code_block,
  [17199] = 1,
    ACTIONS(2854), 1,
      aux_sym_select_element_token1,
  [17203] = 1,
    ACTIONS(2856), 1,
      aux_sym_delete_statement_token3,
  [17207] = 1,
    ACTIONS(2858), 1,
      sym_code_block,
  [17211] = 1,
    ACTIONS(2860), 1,
      aux_sym_create_aggregate_token5,
  [17215] = 1,
    ACTIONS(2862), 1,
      aux_sym_create_aggregate_token6,
  [17219] = 1,
    ACTIONS(2864), 1,
      aux_sym_delete_statement_token3,
  [17223] = 1,
    ACTIONS(2866), 1,
      aux_sym_delete_statement_token3,
  [17227] = 1,
    ACTIONS(2868), 1,
      sym_code_block,
  [17231] = 1,
    ACTIONS(2870), 1,
      aux_sym_delete_statement_token3,
  [17235] = 1,
    ACTIONS(2872), 1,
      aux_sym_relation_contains_key_token2,
  [17239] = 1,
    ACTIONS(2874), 1,
      aux_sym_delete_statement_token3,
  [17243] = 1,
    ACTIONS(2876), 1,
      aux_sym_delete_statement_token3,
  [17247] = 1,
    ACTIONS(2878), 1,
      aux_sym_create_materialized_view_token2,
  [17251] = 1,
    ACTIONS(2880), 1,
      anon_sym_RPAREN,
  [17255] = 1,
    ACTIONS(2882), 1,
      aux_sym_insert_statement_token3,
  [17259] = 1,
    ACTIONS(2884), 1,
      aux_sym_insert_statement_token3,
  [17263] = 1,
    ACTIONS(2886), 1,
      aux_sym_insert_statement_token3,
  [17267] = 1,
    ACTIONS(2888), 1,
      sym_code_block,
  [17271] = 1,
    ACTIONS(2890), 1,
      aux_sym_select_element_token1,
  [17275] = 1,
    ACTIONS(2892), 1,
      sym_object_name,
  [17279] = 1,
    ACTIONS(2894), 1,
      aux_sym_insert_statement_token3,
  [17283] = 1,
    ACTIONS(2896), 1,
      sym_code_block,
  [17287] = 1,
    ACTIONS(2898), 1,
      aux_sym_insert_statement_token3,
  [17291] = 1,
    ACTIONS(2900), 1,
      sym_object_name,
  [17295] = 1,
    ACTIONS(2902), 1,
      aux_sym_insert_statement_token3,
  [17299] = 1,
    ACTIONS(2904), 1,
      aux_sym_create_materialized_view_token2,
  [17303] = 1,
    ACTIONS(2906), 1,
      aux_sym_insert_statement_token3,
  [17307] = 1,
    ACTIONS(2908), 1,
      sym_object_name,
  [17311] = 1,
    ACTIONS(2910), 1,
      anon_sym_LPAREN,
  [17315] = 1,
    ACTIONS(2912), 1,
      anon_sym_RPAREN,
  [17319] = 1,
    ACTIONS(2914), 1,
      anon_sym_RPAREN,
  [17323] = 1,
    ACTIONS(2916), 1,
      aux_sym_insert_statement_token3,
  [17327] = 1,
    ACTIONS(2918), 1,
      aux_sym_create_index_token3,
  [17331] = 1,
    ACTIONS(2920), 1,
      aux_sym_insert_statement_token3,
  [17335] = 1,
    ACTIONS(2922), 1,
      sym_object_name,
  [17339] = 1,
    ACTIONS(2924), 1,
      sym_object_name,
  [17343] = 1,
    ACTIONS(2924), 1,
      anon_sym_STAR,
  [17347] = 1,
    ACTIONS(2926), 1,
      sym_code_block,
  [17351] = 1,
    ACTIONS(2928), 1,
      aux_sym_select_element_token1,
  [17355] = 1,
    ACTIONS(2930), 1,
      sym_object_name,
  [17359] = 1,
    ACTIONS(2932), 1,
      aux_sym_create_aggregate_token6,
  [17363] = 1,
    ACTIONS(2934), 1,
      aux_sym_insert_statement_token2,
  [17367] = 1,
    ACTIONS(2936), 1,
      sym_object_name,
  [17371] = 1,
    ACTIONS(2938), 1,
      sym_object_name,
  [17375] = 1,
    ACTIONS(2940), 1,
      aux_sym_drop_materialized_view_token2,
  [17379] = 1,
    ACTIONS(2942), 1,
      sym_object_name,
  [17383] = 1,
    ACTIONS(2944), 1,
      sym_object_name,
  [17387] = 1,
    ACTIONS(2946), 1,
      sym_object_name,
  [17391] = 1,
    ACTIONS(2948), 1,
      sym_code_block,
  [17395] = 1,
    ACTIONS(2950), 1,
      aux_sym_create_index_token3,
  [17399] = 1,
    ACTIONS(2952), 1,
      anon_sym_RPAREN,
  [17403] = 1,
    ACTIONS(2954), 1,
      aux_sym_create_index_token3,
  [17407] = 1,
    ACTIONS(2956), 1,
      aux_sym_drop_materialized_view_token2,
  [17411] = 1,
    ACTIONS(2958), 1,
      aux_sym_create_aggregate_token2,
  [17415] = 1,
    ACTIONS(2960), 1,
      aux_sym_drop_materialized_view_token2,
  [17419] = 1,
    ACTIONS(2962), 1,
      sym_object_name,
  [17423] = 1,
    ACTIONS(2964), 1,
      sym_object_name,
  [17427] = 1,
    ACTIONS(2966), 1,
      aux_sym_begin_batch_token4,
  [17431] = 1,
    ACTIONS(2968), 1,
      sym_object_name,
  [17435] = 1,
    ACTIONS(2970), 1,
      ts_builtin_sym_end,
  [17439] = 1,
    ACTIONS(2972), 1,
      aux_sym_begin_batch_token4,
  [17443] = 1,
    ACTIONS(2974), 1,
      sym_object_name,
  [17447] = 1,
    ACTIONS(2976), 1,
      sym_object_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 92,
  [SMALL_STATE(4)] = 184,
  [SMALL_STATE(5)] = 221,
  [SMALL_STATE(6)] = 254,
  [SMALL_STATE(7)] = 289,
  [SMALL_STATE(8)] = 324,
  [SMALL_STATE(9)] = 359,
  [SMALL_STATE(10)] = 394,
  [SMALL_STATE(11)] = 429,
  [SMALL_STATE(12)] = 464,
  [SMALL_STATE(13)] = 499,
  [SMALL_STATE(14)] = 534,
  [SMALL_STATE(15)] = 569,
  [SMALL_STATE(16)] = 604,
  [SMALL_STATE(17)] = 639,
  [SMALL_STATE(18)] = 674,
  [SMALL_STATE(19)] = 709,
  [SMALL_STATE(20)] = 744,
  [SMALL_STATE(21)] = 779,
  [SMALL_STATE(22)] = 814,
  [SMALL_STATE(23)] = 849,
  [SMALL_STATE(24)] = 884,
  [SMALL_STATE(25)] = 919,
  [SMALL_STATE(26)] = 954,
  [SMALL_STATE(27)] = 989,
  [SMALL_STATE(28)] = 1024,
  [SMALL_STATE(29)] = 1059,
  [SMALL_STATE(30)] = 1094,
  [SMALL_STATE(31)] = 1129,
  [SMALL_STATE(32)] = 1164,
  [SMALL_STATE(33)] = 1199,
  [SMALL_STATE(34)] = 1234,
  [SMALL_STATE(35)] = 1269,
  [SMALL_STATE(36)] = 1304,
  [SMALL_STATE(37)] = 1339,
  [SMALL_STATE(38)] = 1374,
  [SMALL_STATE(39)] = 1409,
  [SMALL_STATE(40)] = 1444,
  [SMALL_STATE(41)] = 1479,
  [SMALL_STATE(42)] = 1514,
  [SMALL_STATE(43)] = 1549,
  [SMALL_STATE(44)] = 1584,
  [SMALL_STATE(45)] = 1619,
  [SMALL_STATE(46)] = 1654,
  [SMALL_STATE(47)] = 1689,
  [SMALL_STATE(48)] = 1724,
  [SMALL_STATE(49)] = 1759,
  [SMALL_STATE(50)] = 1794,
  [SMALL_STATE(51)] = 1829,
  [SMALL_STATE(52)] = 1864,
  [SMALL_STATE(53)] = 1899,
  [SMALL_STATE(54)] = 1934,
  [SMALL_STATE(55)] = 1969,
  [SMALL_STATE(56)] = 2004,
  [SMALL_STATE(57)] = 2039,
  [SMALL_STATE(58)] = 2071,
  [SMALL_STATE(59)] = 2103,
  [SMALL_STATE(60)] = 2135,
  [SMALL_STATE(61)] = 2162,
  [SMALL_STATE(62)] = 2193,
  [SMALL_STATE(63)] = 2220,
  [SMALL_STATE(64)] = 2251,
  [SMALL_STATE(65)] = 2278,
  [SMALL_STATE(66)] = 2305,
  [SMALL_STATE(67)] = 2336,
  [SMALL_STATE(68)] = 2367,
  [SMALL_STATE(69)] = 2393,
  [SMALL_STATE(70)] = 2433,
  [SMALL_STATE(71)] = 2473,
  [SMALL_STATE(72)] = 2503,
  [SMALL_STATE(73)] = 2543,
  [SMALL_STATE(74)] = 2572,
  [SMALL_STATE(75)] = 2597,
  [SMALL_STATE(76)] = 2622,
  [SMALL_STATE(77)] = 2647,
  [SMALL_STATE(78)] = 2686,
  [SMALL_STATE(79)] = 2711,
  [SMALL_STATE(80)] = 2738,
  [SMALL_STATE(81)] = 2763,
  [SMALL_STATE(82)] = 2788,
  [SMALL_STATE(83)] = 2817,
  [SMALL_STATE(84)] = 2842,
  [SMALL_STATE(85)] = 2867,
  [SMALL_STATE(86)] = 2892,
  [SMALL_STATE(87)] = 2917,
  [SMALL_STATE(88)] = 2946,
  [SMALL_STATE(89)] = 2970,
  [SMALL_STATE(90)] = 3004,
  [SMALL_STATE(91)] = 3032,
  [SMALL_STATE(92)] = 3066,
  [SMALL_STATE(93)] = 3100,
  [SMALL_STATE(94)] = 3124,
  [SMALL_STATE(95)] = 3148,
  [SMALL_STATE(96)] = 3172,
  [SMALL_STATE(97)] = 3196,
  [SMALL_STATE(98)] = 3221,
  [SMALL_STATE(99)] = 3246,
  [SMALL_STATE(100)] = 3269,
  [SMALL_STATE(101)] = 3294,
  [SMALL_STATE(102)] = 3319,
  [SMALL_STATE(103)] = 3346,
  [SMALL_STATE(104)] = 3372,
  [SMALL_STATE(105)] = 3400,
  [SMALL_STATE(106)] = 3422,
  [SMALL_STATE(107)] = 3444,
  [SMALL_STATE(108)] = 3472,
  [SMALL_STATE(109)] = 3500,
  [SMALL_STATE(110)] = 3528,
  [SMALL_STATE(111)] = 3550,
  [SMALL_STATE(112)] = 3578,
  [SMALL_STATE(113)] = 3606,
  [SMALL_STATE(114)] = 3630,
  [SMALL_STATE(115)] = 3652,
  [SMALL_STATE(116)] = 3678,
  [SMALL_STATE(117)] = 3706,
  [SMALL_STATE(118)] = 3732,
  [SMALL_STATE(119)] = 3754,
  [SMALL_STATE(120)] = 3776,
  [SMALL_STATE(121)] = 3798,
  [SMALL_STATE(122)] = 3820,
  [SMALL_STATE(123)] = 3842,
  [SMALL_STATE(124)] = 3864,
  [SMALL_STATE(125)] = 3890,
  [SMALL_STATE(126)] = 3918,
  [SMALL_STATE(127)] = 3944,
  [SMALL_STATE(128)] = 3972,
  [SMALL_STATE(129)] = 4000,
  [SMALL_STATE(130)] = 4028,
  [SMALL_STATE(131)] = 4054,
  [SMALL_STATE(132)] = 4076,
  [SMALL_STATE(133)] = 4098,
  [SMALL_STATE(134)] = 4126,
  [SMALL_STATE(135)] = 4147,
  [SMALL_STATE(136)] = 4172,
  [SMALL_STATE(137)] = 4197,
  [SMALL_STATE(138)] = 4222,
  [SMALL_STATE(139)] = 4245,
  [SMALL_STATE(140)] = 4270,
  [SMALL_STATE(141)] = 4293,
  [SMALL_STATE(142)] = 4318,
  [SMALL_STATE(143)] = 4341,
  [SMALL_STATE(144)] = 4366,
  [SMALL_STATE(145)] = 4387,
  [SMALL_STATE(146)] = 4412,
  [SMALL_STATE(147)] = 4437,
  [SMALL_STATE(148)] = 4462,
  [SMALL_STATE(149)] = 4487,
  [SMALL_STATE(150)] = 4512,
  [SMALL_STATE(151)] = 4535,
  [SMALL_STATE(152)] = 4560,
  [SMALL_STATE(153)] = 4581,
  [SMALL_STATE(154)] = 4606,
  [SMALL_STATE(155)] = 4627,
  [SMALL_STATE(156)] = 4652,
  [SMALL_STATE(157)] = 4677,
  [SMALL_STATE(158)] = 4698,
  [SMALL_STATE(159)] = 4719,
  [SMALL_STATE(160)] = 4744,
  [SMALL_STATE(161)] = 4769,
  [SMALL_STATE(162)] = 4794,
  [SMALL_STATE(163)] = 4819,
  [SMALL_STATE(164)] = 4844,
  [SMALL_STATE(165)] = 4869,
  [SMALL_STATE(166)] = 4894,
  [SMALL_STATE(167)] = 4919,
  [SMALL_STATE(168)] = 4940,
  [SMALL_STATE(169)] = 4965,
  [SMALL_STATE(170)] = 4986,
  [SMALL_STATE(171)] = 5011,
  [SMALL_STATE(172)] = 5036,
  [SMALL_STATE(173)] = 5061,
  [SMALL_STATE(174)] = 5086,
  [SMALL_STATE(175)] = 5111,
  [SMALL_STATE(176)] = 5132,
  [SMALL_STATE(177)] = 5157,
  [SMALL_STATE(178)] = 5182,
  [SMALL_STATE(179)] = 5203,
  [SMALL_STATE(180)] = 5228,
  [SMALL_STATE(181)] = 5253,
  [SMALL_STATE(182)] = 5274,
  [SMALL_STATE(183)] = 5299,
  [SMALL_STATE(184)] = 5324,
  [SMALL_STATE(185)] = 5345,
  [SMALL_STATE(186)] = 5370,
  [SMALL_STATE(187)] = 5395,
  [SMALL_STATE(188)] = 5420,
  [SMALL_STATE(189)] = 5441,
  [SMALL_STATE(190)] = 5466,
  [SMALL_STATE(191)] = 5491,
  [SMALL_STATE(192)] = 5516,
  [SMALL_STATE(193)] = 5541,
  [SMALL_STATE(194)] = 5562,
  [SMALL_STATE(195)] = 5587,
  [SMALL_STATE(196)] = 5612,
  [SMALL_STATE(197)] = 5633,
  [SMALL_STATE(198)] = 5658,
  [SMALL_STATE(199)] = 5683,
  [SMALL_STATE(200)] = 5708,
  [SMALL_STATE(201)] = 5733,
  [SMALL_STATE(202)] = 5768,
  [SMALL_STATE(203)] = 5789,
  [SMALL_STATE(204)] = 5810,
  [SMALL_STATE(205)] = 5835,
  [SMALL_STATE(206)] = 5860,
  [SMALL_STATE(207)] = 5881,
  [SMALL_STATE(208)] = 5906,
  [SMALL_STATE(209)] = 5928,
  [SMALL_STATE(210)] = 5948,
  [SMALL_STATE(211)] = 5968,
  [SMALL_STATE(212)] = 5990,
  [SMALL_STATE(213)] = 6012,
  [SMALL_STATE(214)] = 6034,
  [SMALL_STATE(215)] = 6056,
  [SMALL_STATE(216)] = 6076,
  [SMALL_STATE(217)] = 6096,
  [SMALL_STATE(218)] = 6118,
  [SMALL_STATE(219)] = 6150,
  [SMALL_STATE(220)] = 6172,
  [SMALL_STATE(221)] = 6194,
  [SMALL_STATE(222)] = 6216,
  [SMALL_STATE(223)] = 6236,
  [SMALL_STATE(224)] = 6258,
  [SMALL_STATE(225)] = 6280,
  [SMALL_STATE(226)] = 6302,
  [SMALL_STATE(227)] = 6324,
  [SMALL_STATE(228)] = 6346,
  [SMALL_STATE(229)] = 6366,
  [SMALL_STATE(230)] = 6388,
  [SMALL_STATE(231)] = 6410,
  [SMALL_STATE(232)] = 6432,
  [SMALL_STATE(233)] = 6454,
  [SMALL_STATE(234)] = 6474,
  [SMALL_STATE(235)] = 6494,
  [SMALL_STATE(236)] = 6516,
  [SMALL_STATE(237)] = 6538,
  [SMALL_STATE(238)] = 6560,
  [SMALL_STATE(239)] = 6582,
  [SMALL_STATE(240)] = 6604,
  [SMALL_STATE(241)] = 6626,
  [SMALL_STATE(242)] = 6648,
  [SMALL_STATE(243)] = 6670,
  [SMALL_STATE(244)] = 6692,
  [SMALL_STATE(245)] = 6714,
  [SMALL_STATE(246)] = 6736,
  [SMALL_STATE(247)] = 6758,
  [SMALL_STATE(248)] = 6780,
  [SMALL_STATE(249)] = 6802,
  [SMALL_STATE(250)] = 6824,
  [SMALL_STATE(251)] = 6844,
  [SMALL_STATE(252)] = 6866,
  [SMALL_STATE(253)] = 6888,
  [SMALL_STATE(254)] = 6910,
  [SMALL_STATE(255)] = 6932,
  [SMALL_STATE(256)] = 6954,
  [SMALL_STATE(257)] = 6976,
  [SMALL_STATE(258)] = 6998,
  [SMALL_STATE(259)] = 7017,
  [SMALL_STATE(260)] = 7036,
  [SMALL_STATE(261)] = 7055,
  [SMALL_STATE(262)] = 7074,
  [SMALL_STATE(263)] = 7093,
  [SMALL_STATE(264)] = 7112,
  [SMALL_STATE(265)] = 7131,
  [SMALL_STATE(266)] = 7150,
  [SMALL_STATE(267)] = 7169,
  [SMALL_STATE(268)] = 7188,
  [SMALL_STATE(269)] = 7207,
  [SMALL_STATE(270)] = 7226,
  [SMALL_STATE(271)] = 7245,
  [SMALL_STATE(272)] = 7264,
  [SMALL_STATE(273)] = 7283,
  [SMALL_STATE(274)] = 7302,
  [SMALL_STATE(275)] = 7321,
  [SMALL_STATE(276)] = 7340,
  [SMALL_STATE(277)] = 7359,
  [SMALL_STATE(278)] = 7378,
  [SMALL_STATE(279)] = 7397,
  [SMALL_STATE(280)] = 7416,
  [SMALL_STATE(281)] = 7435,
  [SMALL_STATE(282)] = 7454,
  [SMALL_STATE(283)] = 7473,
  [SMALL_STATE(284)] = 7492,
  [SMALL_STATE(285)] = 7511,
  [SMALL_STATE(286)] = 7530,
  [SMALL_STATE(287)] = 7549,
  [SMALL_STATE(288)] = 7568,
  [SMALL_STATE(289)] = 7587,
  [SMALL_STATE(290)] = 7606,
  [SMALL_STATE(291)] = 7625,
  [SMALL_STATE(292)] = 7644,
  [SMALL_STATE(293)] = 7663,
  [SMALL_STATE(294)] = 7682,
  [SMALL_STATE(295)] = 7701,
  [SMALL_STATE(296)] = 7720,
  [SMALL_STATE(297)] = 7739,
  [SMALL_STATE(298)] = 7758,
  [SMALL_STATE(299)] = 7777,
  [SMALL_STATE(300)] = 7796,
  [SMALL_STATE(301)] = 7815,
  [SMALL_STATE(302)] = 7834,
  [SMALL_STATE(303)] = 7853,
  [SMALL_STATE(304)] = 7872,
  [SMALL_STATE(305)] = 7891,
  [SMALL_STATE(306)] = 7910,
  [SMALL_STATE(307)] = 7929,
  [SMALL_STATE(308)] = 7948,
  [SMALL_STATE(309)] = 7967,
  [SMALL_STATE(310)] = 7986,
  [SMALL_STATE(311)] = 8005,
  [SMALL_STATE(312)] = 8024,
  [SMALL_STATE(313)] = 8043,
  [SMALL_STATE(314)] = 8062,
  [SMALL_STATE(315)] = 8081,
  [SMALL_STATE(316)] = 8100,
  [SMALL_STATE(317)] = 8119,
  [SMALL_STATE(318)] = 8138,
  [SMALL_STATE(319)] = 8157,
  [SMALL_STATE(320)] = 8176,
  [SMALL_STATE(321)] = 8195,
  [SMALL_STATE(322)] = 8214,
  [SMALL_STATE(323)] = 8233,
  [SMALL_STATE(324)] = 8252,
  [SMALL_STATE(325)] = 8271,
  [SMALL_STATE(326)] = 8290,
  [SMALL_STATE(327)] = 8309,
  [SMALL_STATE(328)] = 8328,
  [SMALL_STATE(329)] = 8347,
  [SMALL_STATE(330)] = 8366,
  [SMALL_STATE(331)] = 8385,
  [SMALL_STATE(332)] = 8404,
  [SMALL_STATE(333)] = 8423,
  [SMALL_STATE(334)] = 8442,
  [SMALL_STATE(335)] = 8461,
  [SMALL_STATE(336)] = 8480,
  [SMALL_STATE(337)] = 8499,
  [SMALL_STATE(338)] = 8518,
  [SMALL_STATE(339)] = 8537,
  [SMALL_STATE(340)] = 8556,
  [SMALL_STATE(341)] = 8575,
  [SMALL_STATE(342)] = 8594,
  [SMALL_STATE(343)] = 8613,
  [SMALL_STATE(344)] = 8632,
  [SMALL_STATE(345)] = 8651,
  [SMALL_STATE(346)] = 8670,
  [SMALL_STATE(347)] = 8689,
  [SMALL_STATE(348)] = 8708,
  [SMALL_STATE(349)] = 8727,
  [SMALL_STATE(350)] = 8746,
  [SMALL_STATE(351)] = 8765,
  [SMALL_STATE(352)] = 8784,
  [SMALL_STATE(353)] = 8803,
  [SMALL_STATE(354)] = 8822,
  [SMALL_STATE(355)] = 8841,
  [SMALL_STATE(356)] = 8860,
  [SMALL_STATE(357)] = 8879,
  [SMALL_STATE(358)] = 8898,
  [SMALL_STATE(359)] = 8917,
  [SMALL_STATE(360)] = 8936,
  [SMALL_STATE(361)] = 8955,
  [SMALL_STATE(362)] = 8974,
  [SMALL_STATE(363)] = 8993,
  [SMALL_STATE(364)] = 9012,
  [SMALL_STATE(365)] = 9031,
  [SMALL_STATE(366)] = 9050,
  [SMALL_STATE(367)] = 9069,
  [SMALL_STATE(368)] = 9088,
  [SMALL_STATE(369)] = 9107,
  [SMALL_STATE(370)] = 9126,
  [SMALL_STATE(371)] = 9145,
  [SMALL_STATE(372)] = 9164,
  [SMALL_STATE(373)] = 9183,
  [SMALL_STATE(374)] = 9202,
  [SMALL_STATE(375)] = 9221,
  [SMALL_STATE(376)] = 9240,
  [SMALL_STATE(377)] = 9259,
  [SMALL_STATE(378)] = 9278,
  [SMALL_STATE(379)] = 9297,
  [SMALL_STATE(380)] = 9316,
  [SMALL_STATE(381)] = 9335,
  [SMALL_STATE(382)] = 9354,
  [SMALL_STATE(383)] = 9373,
  [SMALL_STATE(384)] = 9392,
  [SMALL_STATE(385)] = 9411,
  [SMALL_STATE(386)] = 9430,
  [SMALL_STATE(387)] = 9449,
  [SMALL_STATE(388)] = 9468,
  [SMALL_STATE(389)] = 9487,
  [SMALL_STATE(390)] = 9506,
  [SMALL_STATE(391)] = 9525,
  [SMALL_STATE(392)] = 9544,
  [SMALL_STATE(393)] = 9563,
  [SMALL_STATE(394)] = 9582,
  [SMALL_STATE(395)] = 9601,
  [SMALL_STATE(396)] = 9620,
  [SMALL_STATE(397)] = 9639,
  [SMALL_STATE(398)] = 9658,
  [SMALL_STATE(399)] = 9677,
  [SMALL_STATE(400)] = 9696,
  [SMALL_STATE(401)] = 9715,
  [SMALL_STATE(402)] = 9734,
  [SMALL_STATE(403)] = 9753,
  [SMALL_STATE(404)] = 9772,
  [SMALL_STATE(405)] = 9791,
  [SMALL_STATE(406)] = 9810,
  [SMALL_STATE(407)] = 9829,
  [SMALL_STATE(408)] = 9848,
  [SMALL_STATE(409)] = 9867,
  [SMALL_STATE(410)] = 9886,
  [SMALL_STATE(411)] = 9905,
  [SMALL_STATE(412)] = 9924,
  [SMALL_STATE(413)] = 9943,
  [SMALL_STATE(414)] = 9962,
  [SMALL_STATE(415)] = 9981,
  [SMALL_STATE(416)] = 10000,
  [SMALL_STATE(417)] = 10019,
  [SMALL_STATE(418)] = 10038,
  [SMALL_STATE(419)] = 10057,
  [SMALL_STATE(420)] = 10076,
  [SMALL_STATE(421)] = 10095,
  [SMALL_STATE(422)] = 10116,
  [SMALL_STATE(423)] = 10135,
  [SMALL_STATE(424)] = 10154,
  [SMALL_STATE(425)] = 10173,
  [SMALL_STATE(426)] = 10192,
  [SMALL_STATE(427)] = 10211,
  [SMALL_STATE(428)] = 10230,
  [SMALL_STATE(429)] = 10249,
  [SMALL_STATE(430)] = 10268,
  [SMALL_STATE(431)] = 10287,
  [SMALL_STATE(432)] = 10306,
  [SMALL_STATE(433)] = 10325,
  [SMALL_STATE(434)] = 10355,
  [SMALL_STATE(435)] = 10373,
  [SMALL_STATE(436)] = 10398,
  [SMALL_STATE(437)] = 10423,
  [SMALL_STATE(438)] = 10448,
  [SMALL_STATE(439)] = 10473,
  [SMALL_STATE(440)] = 10498,
  [SMALL_STATE(441)] = 10523,
  [SMALL_STATE(442)] = 10548,
  [SMALL_STATE(443)] = 10573,
  [SMALL_STATE(444)] = 10598,
  [SMALL_STATE(445)] = 10624,
  [SMALL_STATE(446)] = 10652,
  [SMALL_STATE(447)] = 10675,
  [SMALL_STATE(448)] = 10701,
  [SMALL_STATE(449)] = 10721,
  [SMALL_STATE(450)] = 10741,
  [SMALL_STATE(451)] = 10761,
  [SMALL_STATE(452)] = 10783,
  [SMALL_STATE(453)] = 10817,
  [SMALL_STATE(454)] = 10837,
  [SMALL_STATE(455)] = 10860,
  [SMALL_STATE(456)] = 10877,
  [SMALL_STATE(457)] = 10900,
  [SMALL_STATE(458)] = 10919,
  [SMALL_STATE(459)] = 10938,
  [SMALL_STATE(460)] = 10969,
  [SMALL_STATE(461)] = 10986,
  [SMALL_STATE(462)] = 11002,
  [SMALL_STATE(463)] = 11018,
  [SMALL_STATE(464)] = 11034,
  [SMALL_STATE(465)] = 11050,
  [SMALL_STATE(466)] = 11066,
  [SMALL_STATE(467)] = 11082,
  [SMALL_STATE(468)] = 11098,
  [SMALL_STATE(469)] = 11114,
  [SMALL_STATE(470)] = 11130,
  [SMALL_STATE(471)] = 11146,
  [SMALL_STATE(472)] = 11162,
  [SMALL_STATE(473)] = 11178,
  [SMALL_STATE(474)] = 11194,
  [SMALL_STATE(475)] = 11215,
  [SMALL_STATE(476)] = 11236,
  [SMALL_STATE(477)] = 11257,
  [SMALL_STATE(478)] = 11278,
  [SMALL_STATE(479)] = 11299,
  [SMALL_STATE(480)] = 11320,
  [SMALL_STATE(481)] = 11341,
  [SMALL_STATE(482)] = 11362,
  [SMALL_STATE(483)] = 11383,
  [SMALL_STATE(484)] = 11405,
  [SMALL_STATE(485)] = 11427,
  [SMALL_STATE(486)] = 11449,
  [SMALL_STATE(487)] = 11471,
  [SMALL_STATE(488)] = 11493,
  [SMALL_STATE(489)] = 11515,
  [SMALL_STATE(490)] = 11529,
  [SMALL_STATE(491)] = 11551,
  [SMALL_STATE(492)] = 11573,
  [SMALL_STATE(493)] = 11591,
  [SMALL_STATE(494)] = 11611,
  [SMALL_STATE(495)] = 11633,
  [SMALL_STATE(496)] = 11655,
  [SMALL_STATE(497)] = 11669,
  [SMALL_STATE(498)] = 11691,
  [SMALL_STATE(499)] = 11713,
  [SMALL_STATE(500)] = 11732,
  [SMALL_STATE(501)] = 11751,
  [SMALL_STATE(502)] = 11768,
  [SMALL_STATE(503)] = 11783,
  [SMALL_STATE(504)] = 11794,
  [SMALL_STATE(505)] = 11813,
  [SMALL_STATE(506)] = 11824,
  [SMALL_STATE(507)] = 11843,
  [SMALL_STATE(508)] = 11860,
  [SMALL_STATE(509)] = 11879,
  [SMALL_STATE(510)] = 11887,
  [SMALL_STATE(511)] = 11901,
  [SMALL_STATE(512)] = 11915,
  [SMALL_STATE(513)] = 11931,
  [SMALL_STATE(514)] = 11947,
  [SMALL_STATE(515)] = 11955,
  [SMALL_STATE(516)] = 11969,
  [SMALL_STATE(517)] = 11981,
  [SMALL_STATE(518)] = 11995,
  [SMALL_STATE(519)] = 12011,
  [SMALL_STATE(520)] = 12027,
  [SMALL_STATE(521)] = 12035,
  [SMALL_STATE(522)] = 12047,
  [SMALL_STATE(523)] = 12055,
  [SMALL_STATE(524)] = 12063,
  [SMALL_STATE(525)] = 12075,
  [SMALL_STATE(526)] = 12091,
  [SMALL_STATE(527)] = 12107,
  [SMALL_STATE(528)] = 12119,
  [SMALL_STATE(529)] = 12127,
  [SMALL_STATE(530)] = 12135,
  [SMALL_STATE(531)] = 12148,
  [SMALL_STATE(532)] = 12161,
  [SMALL_STATE(533)] = 12174,
  [SMALL_STATE(534)] = 12181,
  [SMALL_STATE(535)] = 12194,
  [SMALL_STATE(536)] = 12207,
  [SMALL_STATE(537)] = 12220,
  [SMALL_STATE(538)] = 12233,
  [SMALL_STATE(539)] = 12246,
  [SMALL_STATE(540)] = 12259,
  [SMALL_STATE(541)] = 12272,
  [SMALL_STATE(542)] = 12285,
  [SMALL_STATE(543)] = 12298,
  [SMALL_STATE(544)] = 12311,
  [SMALL_STATE(545)] = 12324,
  [SMALL_STATE(546)] = 12337,
  [SMALL_STATE(547)] = 12348,
  [SMALL_STATE(548)] = 12361,
  [SMALL_STATE(549)] = 12374,
  [SMALL_STATE(550)] = 12387,
  [SMALL_STATE(551)] = 12400,
  [SMALL_STATE(552)] = 12411,
  [SMALL_STATE(553)] = 12424,
  [SMALL_STATE(554)] = 12435,
  [SMALL_STATE(555)] = 12446,
  [SMALL_STATE(556)] = 12459,
  [SMALL_STATE(557)] = 12468,
  [SMALL_STATE(558)] = 12481,
  [SMALL_STATE(559)] = 12494,
  [SMALL_STATE(560)] = 12507,
  [SMALL_STATE(561)] = 12520,
  [SMALL_STATE(562)] = 12533,
  [SMALL_STATE(563)] = 12546,
  [SMALL_STATE(564)] = 12559,
  [SMALL_STATE(565)] = 12572,
  [SMALL_STATE(566)] = 12585,
  [SMALL_STATE(567)] = 12598,
  [SMALL_STATE(568)] = 12611,
  [SMALL_STATE(569)] = 12624,
  [SMALL_STATE(570)] = 12637,
  [SMALL_STATE(571)] = 12650,
  [SMALL_STATE(572)] = 12663,
  [SMALL_STATE(573)] = 12676,
  [SMALL_STATE(574)] = 12683,
  [SMALL_STATE(575)] = 12696,
  [SMALL_STATE(576)] = 12709,
  [SMALL_STATE(577)] = 12722,
  [SMALL_STATE(578)] = 12735,
  [SMALL_STATE(579)] = 12748,
  [SMALL_STATE(580)] = 12761,
  [SMALL_STATE(581)] = 12774,
  [SMALL_STATE(582)] = 12787,
  [SMALL_STATE(583)] = 12800,
  [SMALL_STATE(584)] = 12810,
  [SMALL_STATE(585)] = 12820,
  [SMALL_STATE(586)] = 12830,
  [SMALL_STATE(587)] = 12840,
  [SMALL_STATE(588)] = 12850,
  [SMALL_STATE(589)] = 12858,
  [SMALL_STATE(590)] = 12868,
  [SMALL_STATE(591)] = 12878,
  [SMALL_STATE(592)] = 12886,
  [SMALL_STATE(593)] = 12894,
  [SMALL_STATE(594)] = 12904,
  [SMALL_STATE(595)] = 12914,
  [SMALL_STATE(596)] = 12924,
  [SMALL_STATE(597)] = 12934,
  [SMALL_STATE(598)] = 12944,
  [SMALL_STATE(599)] = 12954,
  [SMALL_STATE(600)] = 12964,
  [SMALL_STATE(601)] = 12974,
  [SMALL_STATE(602)] = 12984,
  [SMALL_STATE(603)] = 12994,
  [SMALL_STATE(604)] = 13004,
  [SMALL_STATE(605)] = 13014,
  [SMALL_STATE(606)] = 13024,
  [SMALL_STATE(607)] = 13034,
  [SMALL_STATE(608)] = 13044,
  [SMALL_STATE(609)] = 13054,
  [SMALL_STATE(610)] = 13064,
  [SMALL_STATE(611)] = 13074,
  [SMALL_STATE(612)] = 13084,
  [SMALL_STATE(613)] = 13094,
  [SMALL_STATE(614)] = 13104,
  [SMALL_STATE(615)] = 13114,
  [SMALL_STATE(616)] = 13124,
  [SMALL_STATE(617)] = 13134,
  [SMALL_STATE(618)] = 13142,
  [SMALL_STATE(619)] = 13150,
  [SMALL_STATE(620)] = 13160,
  [SMALL_STATE(621)] = 13170,
  [SMALL_STATE(622)] = 13180,
  [SMALL_STATE(623)] = 13190,
  [SMALL_STATE(624)] = 13200,
  [SMALL_STATE(625)] = 13210,
  [SMALL_STATE(626)] = 13220,
  [SMALL_STATE(627)] = 13230,
  [SMALL_STATE(628)] = 13240,
  [SMALL_STATE(629)] = 13250,
  [SMALL_STATE(630)] = 13260,
  [SMALL_STATE(631)] = 13270,
  [SMALL_STATE(632)] = 13280,
  [SMALL_STATE(633)] = 13290,
  [SMALL_STATE(634)] = 13300,
  [SMALL_STATE(635)] = 13310,
  [SMALL_STATE(636)] = 13320,
  [SMALL_STATE(637)] = 13330,
  [SMALL_STATE(638)] = 13340,
  [SMALL_STATE(639)] = 13350,
  [SMALL_STATE(640)] = 13360,
  [SMALL_STATE(641)] = 13370,
  [SMALL_STATE(642)] = 13380,
  [SMALL_STATE(643)] = 13390,
  [SMALL_STATE(644)] = 13400,
  [SMALL_STATE(645)] = 13408,
  [SMALL_STATE(646)] = 13418,
  [SMALL_STATE(647)] = 13428,
  [SMALL_STATE(648)] = 13438,
  [SMALL_STATE(649)] = 13448,
  [SMALL_STATE(650)] = 13458,
  [SMALL_STATE(651)] = 13468,
  [SMALL_STATE(652)] = 13478,
  [SMALL_STATE(653)] = 13488,
  [SMALL_STATE(654)] = 13498,
  [SMALL_STATE(655)] = 13508,
  [SMALL_STATE(656)] = 13518,
  [SMALL_STATE(657)] = 13528,
  [SMALL_STATE(658)] = 13538,
  [SMALL_STATE(659)] = 13548,
  [SMALL_STATE(660)] = 13558,
  [SMALL_STATE(661)] = 13568,
  [SMALL_STATE(662)] = 13578,
  [SMALL_STATE(663)] = 13588,
  [SMALL_STATE(664)] = 13598,
  [SMALL_STATE(665)] = 13608,
  [SMALL_STATE(666)] = 13618,
  [SMALL_STATE(667)] = 13628,
  [SMALL_STATE(668)] = 13638,
  [SMALL_STATE(669)] = 13648,
  [SMALL_STATE(670)] = 13658,
  [SMALL_STATE(671)] = 13668,
  [SMALL_STATE(672)] = 13678,
  [SMALL_STATE(673)] = 13688,
  [SMALL_STATE(674)] = 13698,
  [SMALL_STATE(675)] = 13704,
  [SMALL_STATE(676)] = 13714,
  [SMALL_STATE(677)] = 13724,
  [SMALL_STATE(678)] = 13734,
  [SMALL_STATE(679)] = 13744,
  [SMALL_STATE(680)] = 13754,
  [SMALL_STATE(681)] = 13764,
  [SMALL_STATE(682)] = 13774,
  [SMALL_STATE(683)] = 13784,
  [SMALL_STATE(684)] = 13794,
  [SMALL_STATE(685)] = 13804,
  [SMALL_STATE(686)] = 13814,
  [SMALL_STATE(687)] = 13824,
  [SMALL_STATE(688)] = 13834,
  [SMALL_STATE(689)] = 13844,
  [SMALL_STATE(690)] = 13854,
  [SMALL_STATE(691)] = 13864,
  [SMALL_STATE(692)] = 13874,
  [SMALL_STATE(693)] = 13884,
  [SMALL_STATE(694)] = 13894,
  [SMALL_STATE(695)] = 13904,
  [SMALL_STATE(696)] = 13914,
  [SMALL_STATE(697)] = 13924,
  [SMALL_STATE(698)] = 13934,
  [SMALL_STATE(699)] = 13944,
  [SMALL_STATE(700)] = 13954,
  [SMALL_STATE(701)] = 13964,
  [SMALL_STATE(702)] = 13974,
  [SMALL_STATE(703)] = 13984,
  [SMALL_STATE(704)] = 13994,
  [SMALL_STATE(705)] = 14004,
  [SMALL_STATE(706)] = 14014,
  [SMALL_STATE(707)] = 14024,
  [SMALL_STATE(708)] = 14034,
  [SMALL_STATE(709)] = 14044,
  [SMALL_STATE(710)] = 14054,
  [SMALL_STATE(711)] = 14064,
  [SMALL_STATE(712)] = 14074,
  [SMALL_STATE(713)] = 14084,
  [SMALL_STATE(714)] = 14094,
  [SMALL_STATE(715)] = 14104,
  [SMALL_STATE(716)] = 14114,
  [SMALL_STATE(717)] = 14120,
  [SMALL_STATE(718)] = 14130,
  [SMALL_STATE(719)] = 14140,
  [SMALL_STATE(720)] = 14150,
  [SMALL_STATE(721)] = 14160,
  [SMALL_STATE(722)] = 14170,
  [SMALL_STATE(723)] = 14180,
  [SMALL_STATE(724)] = 14190,
  [SMALL_STATE(725)] = 14200,
  [SMALL_STATE(726)] = 14210,
  [SMALL_STATE(727)] = 14220,
  [SMALL_STATE(728)] = 14228,
  [SMALL_STATE(729)] = 14238,
  [SMALL_STATE(730)] = 14248,
  [SMALL_STATE(731)] = 14255,
  [SMALL_STATE(732)] = 14260,
  [SMALL_STATE(733)] = 14267,
  [SMALL_STATE(734)] = 14274,
  [SMALL_STATE(735)] = 14281,
  [SMALL_STATE(736)] = 14288,
  [SMALL_STATE(737)] = 14295,
  [SMALL_STATE(738)] = 14302,
  [SMALL_STATE(739)] = 14309,
  [SMALL_STATE(740)] = 14316,
  [SMALL_STATE(741)] = 14323,
  [SMALL_STATE(742)] = 14328,
  [SMALL_STATE(743)] = 14335,
  [SMALL_STATE(744)] = 14342,
  [SMALL_STATE(745)] = 14349,
  [SMALL_STATE(746)] = 14356,
  [SMALL_STATE(747)] = 14361,
  [SMALL_STATE(748)] = 14368,
  [SMALL_STATE(749)] = 14375,
  [SMALL_STATE(750)] = 14382,
  [SMALL_STATE(751)] = 14389,
  [SMALL_STATE(752)] = 14396,
  [SMALL_STATE(753)] = 14403,
  [SMALL_STATE(754)] = 14410,
  [SMALL_STATE(755)] = 14417,
  [SMALL_STATE(756)] = 14422,
  [SMALL_STATE(757)] = 14429,
  [SMALL_STATE(758)] = 14434,
  [SMALL_STATE(759)] = 14441,
  [SMALL_STATE(760)] = 14448,
  [SMALL_STATE(761)] = 14455,
  [SMALL_STATE(762)] = 14460,
  [SMALL_STATE(763)] = 14467,
  [SMALL_STATE(764)] = 14472,
  [SMALL_STATE(765)] = 14479,
  [SMALL_STATE(766)] = 14486,
  [SMALL_STATE(767)] = 14491,
  [SMALL_STATE(768)] = 14498,
  [SMALL_STATE(769)] = 14503,
  [SMALL_STATE(770)] = 14510,
  [SMALL_STATE(771)] = 14515,
  [SMALL_STATE(772)] = 14522,
  [SMALL_STATE(773)] = 14529,
  [SMALL_STATE(774)] = 14536,
  [SMALL_STATE(775)] = 14541,
  [SMALL_STATE(776)] = 14546,
  [SMALL_STATE(777)] = 14553,
  [SMALL_STATE(778)] = 14558,
  [SMALL_STATE(779)] = 14565,
  [SMALL_STATE(780)] = 14572,
  [SMALL_STATE(781)] = 14577,
  [SMALL_STATE(782)] = 14582,
  [SMALL_STATE(783)] = 14589,
  [SMALL_STATE(784)] = 14596,
  [SMALL_STATE(785)] = 14601,
  [SMALL_STATE(786)] = 14606,
  [SMALL_STATE(787)] = 14613,
  [SMALL_STATE(788)] = 14620,
  [SMALL_STATE(789)] = 14625,
  [SMALL_STATE(790)] = 14632,
  [SMALL_STATE(791)] = 14639,
  [SMALL_STATE(792)] = 14644,
  [SMALL_STATE(793)] = 14649,
  [SMALL_STATE(794)] = 14656,
  [SMALL_STATE(795)] = 14663,
  [SMALL_STATE(796)] = 14670,
  [SMALL_STATE(797)] = 14677,
  [SMALL_STATE(798)] = 14682,
  [SMALL_STATE(799)] = 14689,
  [SMALL_STATE(800)] = 14696,
  [SMALL_STATE(801)] = 14703,
  [SMALL_STATE(802)] = 14710,
  [SMALL_STATE(803)] = 14717,
  [SMALL_STATE(804)] = 14724,
  [SMALL_STATE(805)] = 14731,
  [SMALL_STATE(806)] = 14738,
  [SMALL_STATE(807)] = 14745,
  [SMALL_STATE(808)] = 14752,
  [SMALL_STATE(809)] = 14759,
  [SMALL_STATE(810)] = 14764,
  [SMALL_STATE(811)] = 14771,
  [SMALL_STATE(812)] = 14778,
  [SMALL_STATE(813)] = 14785,
  [SMALL_STATE(814)] = 14792,
  [SMALL_STATE(815)] = 14799,
  [SMALL_STATE(816)] = 14806,
  [SMALL_STATE(817)] = 14813,
  [SMALL_STATE(818)] = 14820,
  [SMALL_STATE(819)] = 14827,
  [SMALL_STATE(820)] = 14834,
  [SMALL_STATE(821)] = 14841,
  [SMALL_STATE(822)] = 14846,
  [SMALL_STATE(823)] = 14853,
  [SMALL_STATE(824)] = 14860,
  [SMALL_STATE(825)] = 14865,
  [SMALL_STATE(826)] = 14872,
  [SMALL_STATE(827)] = 14877,
  [SMALL_STATE(828)] = 14884,
  [SMALL_STATE(829)] = 14891,
  [SMALL_STATE(830)] = 14898,
  [SMALL_STATE(831)] = 14905,
  [SMALL_STATE(832)] = 14912,
  [SMALL_STATE(833)] = 14919,
  [SMALL_STATE(834)] = 14924,
  [SMALL_STATE(835)] = 14931,
  [SMALL_STATE(836)] = 14938,
  [SMALL_STATE(837)] = 14943,
  [SMALL_STATE(838)] = 14950,
  [SMALL_STATE(839)] = 14957,
  [SMALL_STATE(840)] = 14962,
  [SMALL_STATE(841)] = 14969,
  [SMALL_STATE(842)] = 14976,
  [SMALL_STATE(843)] = 14983,
  [SMALL_STATE(844)] = 14990,
  [SMALL_STATE(845)] = 14997,
  [SMALL_STATE(846)] = 15004,
  [SMALL_STATE(847)] = 15011,
  [SMALL_STATE(848)] = 15018,
  [SMALL_STATE(849)] = 15025,
  [SMALL_STATE(850)] = 15032,
  [SMALL_STATE(851)] = 15039,
  [SMALL_STATE(852)] = 15046,
  [SMALL_STATE(853)] = 15053,
  [SMALL_STATE(854)] = 15060,
  [SMALL_STATE(855)] = 15067,
  [SMALL_STATE(856)] = 15072,
  [SMALL_STATE(857)] = 15077,
  [SMALL_STATE(858)] = 15084,
  [SMALL_STATE(859)] = 15091,
  [SMALL_STATE(860)] = 15096,
  [SMALL_STATE(861)] = 15103,
  [SMALL_STATE(862)] = 15108,
  [SMALL_STATE(863)] = 15115,
  [SMALL_STATE(864)] = 15122,
  [SMALL_STATE(865)] = 15127,
  [SMALL_STATE(866)] = 15134,
  [SMALL_STATE(867)] = 15141,
  [SMALL_STATE(868)] = 15148,
  [SMALL_STATE(869)] = 15155,
  [SMALL_STATE(870)] = 15162,
  [SMALL_STATE(871)] = 15169,
  [SMALL_STATE(872)] = 15176,
  [SMALL_STATE(873)] = 15183,
  [SMALL_STATE(874)] = 15190,
  [SMALL_STATE(875)] = 15195,
  [SMALL_STATE(876)] = 15202,
  [SMALL_STATE(877)] = 15209,
  [SMALL_STATE(878)] = 15216,
  [SMALL_STATE(879)] = 15223,
  [SMALL_STATE(880)] = 15227,
  [SMALL_STATE(881)] = 15231,
  [SMALL_STATE(882)] = 15235,
  [SMALL_STATE(883)] = 15239,
  [SMALL_STATE(884)] = 15243,
  [SMALL_STATE(885)] = 15247,
  [SMALL_STATE(886)] = 15251,
  [SMALL_STATE(887)] = 15255,
  [SMALL_STATE(888)] = 15259,
  [SMALL_STATE(889)] = 15263,
  [SMALL_STATE(890)] = 15267,
  [SMALL_STATE(891)] = 15271,
  [SMALL_STATE(892)] = 15275,
  [SMALL_STATE(893)] = 15279,
  [SMALL_STATE(894)] = 15283,
  [SMALL_STATE(895)] = 15287,
  [SMALL_STATE(896)] = 15291,
  [SMALL_STATE(897)] = 15295,
  [SMALL_STATE(898)] = 15299,
  [SMALL_STATE(899)] = 15303,
  [SMALL_STATE(900)] = 15307,
  [SMALL_STATE(901)] = 15311,
  [SMALL_STATE(902)] = 15315,
  [SMALL_STATE(903)] = 15319,
  [SMALL_STATE(904)] = 15323,
  [SMALL_STATE(905)] = 15327,
  [SMALL_STATE(906)] = 15331,
  [SMALL_STATE(907)] = 15335,
  [SMALL_STATE(908)] = 15339,
  [SMALL_STATE(909)] = 15343,
  [SMALL_STATE(910)] = 15347,
  [SMALL_STATE(911)] = 15351,
  [SMALL_STATE(912)] = 15355,
  [SMALL_STATE(913)] = 15359,
  [SMALL_STATE(914)] = 15363,
  [SMALL_STATE(915)] = 15367,
  [SMALL_STATE(916)] = 15371,
  [SMALL_STATE(917)] = 15375,
  [SMALL_STATE(918)] = 15379,
  [SMALL_STATE(919)] = 15383,
  [SMALL_STATE(920)] = 15387,
  [SMALL_STATE(921)] = 15391,
  [SMALL_STATE(922)] = 15395,
  [SMALL_STATE(923)] = 15399,
  [SMALL_STATE(924)] = 15403,
  [SMALL_STATE(925)] = 15407,
  [SMALL_STATE(926)] = 15411,
  [SMALL_STATE(927)] = 15415,
  [SMALL_STATE(928)] = 15419,
  [SMALL_STATE(929)] = 15423,
  [SMALL_STATE(930)] = 15427,
  [SMALL_STATE(931)] = 15431,
  [SMALL_STATE(932)] = 15435,
  [SMALL_STATE(933)] = 15439,
  [SMALL_STATE(934)] = 15443,
  [SMALL_STATE(935)] = 15447,
  [SMALL_STATE(936)] = 15451,
  [SMALL_STATE(937)] = 15455,
  [SMALL_STATE(938)] = 15459,
  [SMALL_STATE(939)] = 15463,
  [SMALL_STATE(940)] = 15467,
  [SMALL_STATE(941)] = 15471,
  [SMALL_STATE(942)] = 15475,
  [SMALL_STATE(943)] = 15479,
  [SMALL_STATE(944)] = 15483,
  [SMALL_STATE(945)] = 15487,
  [SMALL_STATE(946)] = 15491,
  [SMALL_STATE(947)] = 15495,
  [SMALL_STATE(948)] = 15499,
  [SMALL_STATE(949)] = 15503,
  [SMALL_STATE(950)] = 15507,
  [SMALL_STATE(951)] = 15511,
  [SMALL_STATE(952)] = 15515,
  [SMALL_STATE(953)] = 15519,
  [SMALL_STATE(954)] = 15523,
  [SMALL_STATE(955)] = 15527,
  [SMALL_STATE(956)] = 15531,
  [SMALL_STATE(957)] = 15535,
  [SMALL_STATE(958)] = 15539,
  [SMALL_STATE(959)] = 15543,
  [SMALL_STATE(960)] = 15547,
  [SMALL_STATE(961)] = 15551,
  [SMALL_STATE(962)] = 15555,
  [SMALL_STATE(963)] = 15559,
  [SMALL_STATE(964)] = 15563,
  [SMALL_STATE(965)] = 15567,
  [SMALL_STATE(966)] = 15571,
  [SMALL_STATE(967)] = 15575,
  [SMALL_STATE(968)] = 15579,
  [SMALL_STATE(969)] = 15583,
  [SMALL_STATE(970)] = 15587,
  [SMALL_STATE(971)] = 15591,
  [SMALL_STATE(972)] = 15595,
  [SMALL_STATE(973)] = 15599,
  [SMALL_STATE(974)] = 15603,
  [SMALL_STATE(975)] = 15607,
  [SMALL_STATE(976)] = 15611,
  [SMALL_STATE(977)] = 15615,
  [SMALL_STATE(978)] = 15619,
  [SMALL_STATE(979)] = 15623,
  [SMALL_STATE(980)] = 15627,
  [SMALL_STATE(981)] = 15631,
  [SMALL_STATE(982)] = 15635,
  [SMALL_STATE(983)] = 15639,
  [SMALL_STATE(984)] = 15643,
  [SMALL_STATE(985)] = 15647,
  [SMALL_STATE(986)] = 15651,
  [SMALL_STATE(987)] = 15655,
  [SMALL_STATE(988)] = 15659,
  [SMALL_STATE(989)] = 15663,
  [SMALL_STATE(990)] = 15667,
  [SMALL_STATE(991)] = 15671,
  [SMALL_STATE(992)] = 15675,
  [SMALL_STATE(993)] = 15679,
  [SMALL_STATE(994)] = 15683,
  [SMALL_STATE(995)] = 15687,
  [SMALL_STATE(996)] = 15691,
  [SMALL_STATE(997)] = 15695,
  [SMALL_STATE(998)] = 15699,
  [SMALL_STATE(999)] = 15703,
  [SMALL_STATE(1000)] = 15707,
  [SMALL_STATE(1001)] = 15711,
  [SMALL_STATE(1002)] = 15715,
  [SMALL_STATE(1003)] = 15719,
  [SMALL_STATE(1004)] = 15723,
  [SMALL_STATE(1005)] = 15727,
  [SMALL_STATE(1006)] = 15731,
  [SMALL_STATE(1007)] = 15735,
  [SMALL_STATE(1008)] = 15739,
  [SMALL_STATE(1009)] = 15743,
  [SMALL_STATE(1010)] = 15747,
  [SMALL_STATE(1011)] = 15751,
  [SMALL_STATE(1012)] = 15755,
  [SMALL_STATE(1013)] = 15759,
  [SMALL_STATE(1014)] = 15763,
  [SMALL_STATE(1015)] = 15767,
  [SMALL_STATE(1016)] = 15771,
  [SMALL_STATE(1017)] = 15775,
  [SMALL_STATE(1018)] = 15779,
  [SMALL_STATE(1019)] = 15783,
  [SMALL_STATE(1020)] = 15787,
  [SMALL_STATE(1021)] = 15791,
  [SMALL_STATE(1022)] = 15795,
  [SMALL_STATE(1023)] = 15799,
  [SMALL_STATE(1024)] = 15803,
  [SMALL_STATE(1025)] = 15807,
  [SMALL_STATE(1026)] = 15811,
  [SMALL_STATE(1027)] = 15815,
  [SMALL_STATE(1028)] = 15819,
  [SMALL_STATE(1029)] = 15823,
  [SMALL_STATE(1030)] = 15827,
  [SMALL_STATE(1031)] = 15831,
  [SMALL_STATE(1032)] = 15835,
  [SMALL_STATE(1033)] = 15839,
  [SMALL_STATE(1034)] = 15843,
  [SMALL_STATE(1035)] = 15847,
  [SMALL_STATE(1036)] = 15851,
  [SMALL_STATE(1037)] = 15855,
  [SMALL_STATE(1038)] = 15859,
  [SMALL_STATE(1039)] = 15863,
  [SMALL_STATE(1040)] = 15867,
  [SMALL_STATE(1041)] = 15871,
  [SMALL_STATE(1042)] = 15875,
  [SMALL_STATE(1043)] = 15879,
  [SMALL_STATE(1044)] = 15883,
  [SMALL_STATE(1045)] = 15887,
  [SMALL_STATE(1046)] = 15891,
  [SMALL_STATE(1047)] = 15895,
  [SMALL_STATE(1048)] = 15899,
  [SMALL_STATE(1049)] = 15903,
  [SMALL_STATE(1050)] = 15907,
  [SMALL_STATE(1051)] = 15911,
  [SMALL_STATE(1052)] = 15915,
  [SMALL_STATE(1053)] = 15919,
  [SMALL_STATE(1054)] = 15923,
  [SMALL_STATE(1055)] = 15927,
  [SMALL_STATE(1056)] = 15931,
  [SMALL_STATE(1057)] = 15935,
  [SMALL_STATE(1058)] = 15939,
  [SMALL_STATE(1059)] = 15943,
  [SMALL_STATE(1060)] = 15947,
  [SMALL_STATE(1061)] = 15951,
  [SMALL_STATE(1062)] = 15955,
  [SMALL_STATE(1063)] = 15959,
  [SMALL_STATE(1064)] = 15963,
  [SMALL_STATE(1065)] = 15967,
  [SMALL_STATE(1066)] = 15971,
  [SMALL_STATE(1067)] = 15975,
  [SMALL_STATE(1068)] = 15979,
  [SMALL_STATE(1069)] = 15983,
  [SMALL_STATE(1070)] = 15987,
  [SMALL_STATE(1071)] = 15991,
  [SMALL_STATE(1072)] = 15995,
  [SMALL_STATE(1073)] = 15999,
  [SMALL_STATE(1074)] = 16003,
  [SMALL_STATE(1075)] = 16007,
  [SMALL_STATE(1076)] = 16011,
  [SMALL_STATE(1077)] = 16015,
  [SMALL_STATE(1078)] = 16019,
  [SMALL_STATE(1079)] = 16023,
  [SMALL_STATE(1080)] = 16027,
  [SMALL_STATE(1081)] = 16031,
  [SMALL_STATE(1082)] = 16035,
  [SMALL_STATE(1083)] = 16039,
  [SMALL_STATE(1084)] = 16043,
  [SMALL_STATE(1085)] = 16047,
  [SMALL_STATE(1086)] = 16051,
  [SMALL_STATE(1087)] = 16055,
  [SMALL_STATE(1088)] = 16059,
  [SMALL_STATE(1089)] = 16063,
  [SMALL_STATE(1090)] = 16067,
  [SMALL_STATE(1091)] = 16071,
  [SMALL_STATE(1092)] = 16075,
  [SMALL_STATE(1093)] = 16079,
  [SMALL_STATE(1094)] = 16083,
  [SMALL_STATE(1095)] = 16087,
  [SMALL_STATE(1096)] = 16091,
  [SMALL_STATE(1097)] = 16095,
  [SMALL_STATE(1098)] = 16099,
  [SMALL_STATE(1099)] = 16103,
  [SMALL_STATE(1100)] = 16107,
  [SMALL_STATE(1101)] = 16111,
  [SMALL_STATE(1102)] = 16115,
  [SMALL_STATE(1103)] = 16119,
  [SMALL_STATE(1104)] = 16123,
  [SMALL_STATE(1105)] = 16127,
  [SMALL_STATE(1106)] = 16131,
  [SMALL_STATE(1107)] = 16135,
  [SMALL_STATE(1108)] = 16139,
  [SMALL_STATE(1109)] = 16143,
  [SMALL_STATE(1110)] = 16147,
  [SMALL_STATE(1111)] = 16151,
  [SMALL_STATE(1112)] = 16155,
  [SMALL_STATE(1113)] = 16159,
  [SMALL_STATE(1114)] = 16163,
  [SMALL_STATE(1115)] = 16167,
  [SMALL_STATE(1116)] = 16171,
  [SMALL_STATE(1117)] = 16175,
  [SMALL_STATE(1118)] = 16179,
  [SMALL_STATE(1119)] = 16183,
  [SMALL_STATE(1120)] = 16187,
  [SMALL_STATE(1121)] = 16191,
  [SMALL_STATE(1122)] = 16195,
  [SMALL_STATE(1123)] = 16199,
  [SMALL_STATE(1124)] = 16203,
  [SMALL_STATE(1125)] = 16207,
  [SMALL_STATE(1126)] = 16211,
  [SMALL_STATE(1127)] = 16215,
  [SMALL_STATE(1128)] = 16219,
  [SMALL_STATE(1129)] = 16223,
  [SMALL_STATE(1130)] = 16227,
  [SMALL_STATE(1131)] = 16231,
  [SMALL_STATE(1132)] = 16235,
  [SMALL_STATE(1133)] = 16239,
  [SMALL_STATE(1134)] = 16243,
  [SMALL_STATE(1135)] = 16247,
  [SMALL_STATE(1136)] = 16251,
  [SMALL_STATE(1137)] = 16255,
  [SMALL_STATE(1138)] = 16259,
  [SMALL_STATE(1139)] = 16263,
  [SMALL_STATE(1140)] = 16267,
  [SMALL_STATE(1141)] = 16271,
  [SMALL_STATE(1142)] = 16275,
  [SMALL_STATE(1143)] = 16279,
  [SMALL_STATE(1144)] = 16283,
  [SMALL_STATE(1145)] = 16287,
  [SMALL_STATE(1146)] = 16291,
  [SMALL_STATE(1147)] = 16295,
  [SMALL_STATE(1148)] = 16299,
  [SMALL_STATE(1149)] = 16303,
  [SMALL_STATE(1150)] = 16307,
  [SMALL_STATE(1151)] = 16311,
  [SMALL_STATE(1152)] = 16315,
  [SMALL_STATE(1153)] = 16319,
  [SMALL_STATE(1154)] = 16323,
  [SMALL_STATE(1155)] = 16327,
  [SMALL_STATE(1156)] = 16331,
  [SMALL_STATE(1157)] = 16335,
  [SMALL_STATE(1158)] = 16339,
  [SMALL_STATE(1159)] = 16343,
  [SMALL_STATE(1160)] = 16347,
  [SMALL_STATE(1161)] = 16351,
  [SMALL_STATE(1162)] = 16355,
  [SMALL_STATE(1163)] = 16359,
  [SMALL_STATE(1164)] = 16363,
  [SMALL_STATE(1165)] = 16367,
  [SMALL_STATE(1166)] = 16371,
  [SMALL_STATE(1167)] = 16375,
  [SMALL_STATE(1168)] = 16379,
  [SMALL_STATE(1169)] = 16383,
  [SMALL_STATE(1170)] = 16387,
  [SMALL_STATE(1171)] = 16391,
  [SMALL_STATE(1172)] = 16395,
  [SMALL_STATE(1173)] = 16399,
  [SMALL_STATE(1174)] = 16403,
  [SMALL_STATE(1175)] = 16407,
  [SMALL_STATE(1176)] = 16411,
  [SMALL_STATE(1177)] = 16415,
  [SMALL_STATE(1178)] = 16419,
  [SMALL_STATE(1179)] = 16423,
  [SMALL_STATE(1180)] = 16427,
  [SMALL_STATE(1181)] = 16431,
  [SMALL_STATE(1182)] = 16435,
  [SMALL_STATE(1183)] = 16439,
  [SMALL_STATE(1184)] = 16443,
  [SMALL_STATE(1185)] = 16447,
  [SMALL_STATE(1186)] = 16451,
  [SMALL_STATE(1187)] = 16455,
  [SMALL_STATE(1188)] = 16459,
  [SMALL_STATE(1189)] = 16463,
  [SMALL_STATE(1190)] = 16467,
  [SMALL_STATE(1191)] = 16471,
  [SMALL_STATE(1192)] = 16475,
  [SMALL_STATE(1193)] = 16479,
  [SMALL_STATE(1194)] = 16483,
  [SMALL_STATE(1195)] = 16487,
  [SMALL_STATE(1196)] = 16491,
  [SMALL_STATE(1197)] = 16495,
  [SMALL_STATE(1198)] = 16499,
  [SMALL_STATE(1199)] = 16503,
  [SMALL_STATE(1200)] = 16507,
  [SMALL_STATE(1201)] = 16511,
  [SMALL_STATE(1202)] = 16515,
  [SMALL_STATE(1203)] = 16519,
  [SMALL_STATE(1204)] = 16523,
  [SMALL_STATE(1205)] = 16527,
  [SMALL_STATE(1206)] = 16531,
  [SMALL_STATE(1207)] = 16535,
  [SMALL_STATE(1208)] = 16539,
  [SMALL_STATE(1209)] = 16543,
  [SMALL_STATE(1210)] = 16547,
  [SMALL_STATE(1211)] = 16551,
  [SMALL_STATE(1212)] = 16555,
  [SMALL_STATE(1213)] = 16559,
  [SMALL_STATE(1214)] = 16563,
  [SMALL_STATE(1215)] = 16567,
  [SMALL_STATE(1216)] = 16571,
  [SMALL_STATE(1217)] = 16575,
  [SMALL_STATE(1218)] = 16579,
  [SMALL_STATE(1219)] = 16583,
  [SMALL_STATE(1220)] = 16587,
  [SMALL_STATE(1221)] = 16591,
  [SMALL_STATE(1222)] = 16595,
  [SMALL_STATE(1223)] = 16599,
  [SMALL_STATE(1224)] = 16603,
  [SMALL_STATE(1225)] = 16607,
  [SMALL_STATE(1226)] = 16611,
  [SMALL_STATE(1227)] = 16615,
  [SMALL_STATE(1228)] = 16619,
  [SMALL_STATE(1229)] = 16623,
  [SMALL_STATE(1230)] = 16627,
  [SMALL_STATE(1231)] = 16631,
  [SMALL_STATE(1232)] = 16635,
  [SMALL_STATE(1233)] = 16639,
  [SMALL_STATE(1234)] = 16643,
  [SMALL_STATE(1235)] = 16647,
  [SMALL_STATE(1236)] = 16651,
  [SMALL_STATE(1237)] = 16655,
  [SMALL_STATE(1238)] = 16659,
  [SMALL_STATE(1239)] = 16663,
  [SMALL_STATE(1240)] = 16667,
  [SMALL_STATE(1241)] = 16671,
  [SMALL_STATE(1242)] = 16675,
  [SMALL_STATE(1243)] = 16679,
  [SMALL_STATE(1244)] = 16683,
  [SMALL_STATE(1245)] = 16687,
  [SMALL_STATE(1246)] = 16691,
  [SMALL_STATE(1247)] = 16695,
  [SMALL_STATE(1248)] = 16699,
  [SMALL_STATE(1249)] = 16703,
  [SMALL_STATE(1250)] = 16707,
  [SMALL_STATE(1251)] = 16711,
  [SMALL_STATE(1252)] = 16715,
  [SMALL_STATE(1253)] = 16719,
  [SMALL_STATE(1254)] = 16723,
  [SMALL_STATE(1255)] = 16727,
  [SMALL_STATE(1256)] = 16731,
  [SMALL_STATE(1257)] = 16735,
  [SMALL_STATE(1258)] = 16739,
  [SMALL_STATE(1259)] = 16743,
  [SMALL_STATE(1260)] = 16747,
  [SMALL_STATE(1261)] = 16751,
  [SMALL_STATE(1262)] = 16755,
  [SMALL_STATE(1263)] = 16759,
  [SMALL_STATE(1264)] = 16763,
  [SMALL_STATE(1265)] = 16767,
  [SMALL_STATE(1266)] = 16771,
  [SMALL_STATE(1267)] = 16775,
  [SMALL_STATE(1268)] = 16779,
  [SMALL_STATE(1269)] = 16783,
  [SMALL_STATE(1270)] = 16787,
  [SMALL_STATE(1271)] = 16791,
  [SMALL_STATE(1272)] = 16795,
  [SMALL_STATE(1273)] = 16799,
  [SMALL_STATE(1274)] = 16803,
  [SMALL_STATE(1275)] = 16807,
  [SMALL_STATE(1276)] = 16811,
  [SMALL_STATE(1277)] = 16815,
  [SMALL_STATE(1278)] = 16819,
  [SMALL_STATE(1279)] = 16823,
  [SMALL_STATE(1280)] = 16827,
  [SMALL_STATE(1281)] = 16831,
  [SMALL_STATE(1282)] = 16835,
  [SMALL_STATE(1283)] = 16839,
  [SMALL_STATE(1284)] = 16843,
  [SMALL_STATE(1285)] = 16847,
  [SMALL_STATE(1286)] = 16851,
  [SMALL_STATE(1287)] = 16855,
  [SMALL_STATE(1288)] = 16859,
  [SMALL_STATE(1289)] = 16863,
  [SMALL_STATE(1290)] = 16867,
  [SMALL_STATE(1291)] = 16871,
  [SMALL_STATE(1292)] = 16875,
  [SMALL_STATE(1293)] = 16879,
  [SMALL_STATE(1294)] = 16883,
  [SMALL_STATE(1295)] = 16887,
  [SMALL_STATE(1296)] = 16891,
  [SMALL_STATE(1297)] = 16895,
  [SMALL_STATE(1298)] = 16899,
  [SMALL_STATE(1299)] = 16903,
  [SMALL_STATE(1300)] = 16907,
  [SMALL_STATE(1301)] = 16911,
  [SMALL_STATE(1302)] = 16915,
  [SMALL_STATE(1303)] = 16919,
  [SMALL_STATE(1304)] = 16923,
  [SMALL_STATE(1305)] = 16927,
  [SMALL_STATE(1306)] = 16931,
  [SMALL_STATE(1307)] = 16935,
  [SMALL_STATE(1308)] = 16939,
  [SMALL_STATE(1309)] = 16943,
  [SMALL_STATE(1310)] = 16947,
  [SMALL_STATE(1311)] = 16951,
  [SMALL_STATE(1312)] = 16955,
  [SMALL_STATE(1313)] = 16959,
  [SMALL_STATE(1314)] = 16963,
  [SMALL_STATE(1315)] = 16967,
  [SMALL_STATE(1316)] = 16971,
  [SMALL_STATE(1317)] = 16975,
  [SMALL_STATE(1318)] = 16979,
  [SMALL_STATE(1319)] = 16983,
  [SMALL_STATE(1320)] = 16987,
  [SMALL_STATE(1321)] = 16991,
  [SMALL_STATE(1322)] = 16995,
  [SMALL_STATE(1323)] = 16999,
  [SMALL_STATE(1324)] = 17003,
  [SMALL_STATE(1325)] = 17007,
  [SMALL_STATE(1326)] = 17011,
  [SMALL_STATE(1327)] = 17015,
  [SMALL_STATE(1328)] = 17019,
  [SMALL_STATE(1329)] = 17023,
  [SMALL_STATE(1330)] = 17027,
  [SMALL_STATE(1331)] = 17031,
  [SMALL_STATE(1332)] = 17035,
  [SMALL_STATE(1333)] = 17039,
  [SMALL_STATE(1334)] = 17043,
  [SMALL_STATE(1335)] = 17047,
  [SMALL_STATE(1336)] = 17051,
  [SMALL_STATE(1337)] = 17055,
  [SMALL_STATE(1338)] = 17059,
  [SMALL_STATE(1339)] = 17063,
  [SMALL_STATE(1340)] = 17067,
  [SMALL_STATE(1341)] = 17071,
  [SMALL_STATE(1342)] = 17075,
  [SMALL_STATE(1343)] = 17079,
  [SMALL_STATE(1344)] = 17083,
  [SMALL_STATE(1345)] = 17087,
  [SMALL_STATE(1346)] = 17091,
  [SMALL_STATE(1347)] = 17095,
  [SMALL_STATE(1348)] = 17099,
  [SMALL_STATE(1349)] = 17103,
  [SMALL_STATE(1350)] = 17107,
  [SMALL_STATE(1351)] = 17111,
  [SMALL_STATE(1352)] = 17115,
  [SMALL_STATE(1353)] = 17119,
  [SMALL_STATE(1354)] = 17123,
  [SMALL_STATE(1355)] = 17127,
  [SMALL_STATE(1356)] = 17131,
  [SMALL_STATE(1357)] = 17135,
  [SMALL_STATE(1358)] = 17139,
  [SMALL_STATE(1359)] = 17143,
  [SMALL_STATE(1360)] = 17147,
  [SMALL_STATE(1361)] = 17151,
  [SMALL_STATE(1362)] = 17155,
  [SMALL_STATE(1363)] = 17159,
  [SMALL_STATE(1364)] = 17163,
  [SMALL_STATE(1365)] = 17167,
  [SMALL_STATE(1366)] = 17171,
  [SMALL_STATE(1367)] = 17175,
  [SMALL_STATE(1368)] = 17179,
  [SMALL_STATE(1369)] = 17183,
  [SMALL_STATE(1370)] = 17187,
  [SMALL_STATE(1371)] = 17191,
  [SMALL_STATE(1372)] = 17195,
  [SMALL_STATE(1373)] = 17199,
  [SMALL_STATE(1374)] = 17203,
  [SMALL_STATE(1375)] = 17207,
  [SMALL_STATE(1376)] = 17211,
  [SMALL_STATE(1377)] = 17215,
  [SMALL_STATE(1378)] = 17219,
  [SMALL_STATE(1379)] = 17223,
  [SMALL_STATE(1380)] = 17227,
  [SMALL_STATE(1381)] = 17231,
  [SMALL_STATE(1382)] = 17235,
  [SMALL_STATE(1383)] = 17239,
  [SMALL_STATE(1384)] = 17243,
  [SMALL_STATE(1385)] = 17247,
  [SMALL_STATE(1386)] = 17251,
  [SMALL_STATE(1387)] = 17255,
  [SMALL_STATE(1388)] = 17259,
  [SMALL_STATE(1389)] = 17263,
  [SMALL_STATE(1390)] = 17267,
  [SMALL_STATE(1391)] = 17271,
  [SMALL_STATE(1392)] = 17275,
  [SMALL_STATE(1393)] = 17279,
  [SMALL_STATE(1394)] = 17283,
  [SMALL_STATE(1395)] = 17287,
  [SMALL_STATE(1396)] = 17291,
  [SMALL_STATE(1397)] = 17295,
  [SMALL_STATE(1398)] = 17299,
  [SMALL_STATE(1399)] = 17303,
  [SMALL_STATE(1400)] = 17307,
  [SMALL_STATE(1401)] = 17311,
  [SMALL_STATE(1402)] = 17315,
  [SMALL_STATE(1403)] = 17319,
  [SMALL_STATE(1404)] = 17323,
  [SMALL_STATE(1405)] = 17327,
  [SMALL_STATE(1406)] = 17331,
  [SMALL_STATE(1407)] = 17335,
  [SMALL_STATE(1408)] = 17339,
  [SMALL_STATE(1409)] = 17343,
  [SMALL_STATE(1410)] = 17347,
  [SMALL_STATE(1411)] = 17351,
  [SMALL_STATE(1412)] = 17355,
  [SMALL_STATE(1413)] = 17359,
  [SMALL_STATE(1414)] = 17363,
  [SMALL_STATE(1415)] = 17367,
  [SMALL_STATE(1416)] = 17371,
  [SMALL_STATE(1417)] = 17375,
  [SMALL_STATE(1418)] = 17379,
  [SMALL_STATE(1419)] = 17383,
  [SMALL_STATE(1420)] = 17387,
  [SMALL_STATE(1421)] = 17391,
  [SMALL_STATE(1422)] = 17395,
  [SMALL_STATE(1423)] = 17399,
  [SMALL_STATE(1424)] = 17403,
  [SMALL_STATE(1425)] = 17407,
  [SMALL_STATE(1426)] = 17411,
  [SMALL_STATE(1427)] = 17415,
  [SMALL_STATE(1428)] = 17419,
  [SMALL_STATE(1429)] = 17423,
  [SMALL_STATE(1430)] = 17427,
  [SMALL_STATE(1431)] = 17431,
  [SMALL_STATE(1432)] = 17435,
  [SMALL_STATE(1433)] = 17439,
  [SMALL_STATE(1434)] = 17443,
  [SMALL_STATE(1435)] = 17447,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1371),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1435),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1434),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1433),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(483),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(525),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(592),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1371),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(871),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(452),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(459),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1435),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1434),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(460),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(455),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(504),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(449),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1433),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 15),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 15),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(862),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 60),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 60),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 66),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 66),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1352),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1351),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1350),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1208),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(941),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1116),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2, .production_id = 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1349),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 61),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 37),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 38),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(507),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 4, .production_id = 11),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 13),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 33),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1026),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(1102),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 5, .production_id = 10),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4, .production_id = 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1202),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 17),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5, .production_id = 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1097),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2, .production_id = 44),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 59),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 17),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 8, .production_id = 64),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 36),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 43),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 22),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 34),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 59),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 5, .production_id = 10),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5, .production_id = 36),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(703),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 56),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 11),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3, .production_id = 44),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4, .production_id = 12),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 17),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3, .production_id = 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 11),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 17),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2, .production_id = 16),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 36),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 36),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 11, .production_id = 59),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2), SHIFT_REPEAT(952),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1, .production_id = 16),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 11),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 17),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(849),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2, .production_id = 16),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 11),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8, .production_id = 17),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3, .production_id = 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6, .production_id = 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(876),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 67),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6, .production_id = 40),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 17),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4, .production_id = 44),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3, .production_id = 16),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 11, .production_id = 78),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 59),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(511),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1355),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 17),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1356),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 115),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 41),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 125),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 126),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3, .production_id = 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1288),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 58),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 19),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 20),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 5),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 23),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 26),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5, .production_id = 28),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 29),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5, .production_id = 31),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12, .production_id = 85),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15, .production_id = 98),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3, .production_id = 7),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1280),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2, .production_id = 1),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1407),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 70),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 130),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9, .production_id = 6),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 51),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4, .production_id = 12),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 52),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 42),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4, .production_id = 14),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9, .production_id = 6),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3, .production_id = 8),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1276),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 110),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 3, .production_id = 44),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 111),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3, .production_id = 10),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1249),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3, .production_id = 9),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1254),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 121),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3, .production_id = 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1336),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 71),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8, .production_id = 62),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 40),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 94),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 6, .production_id = 10),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 110),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 93),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 92),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 99),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4, .production_id = 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 14, .production_id = 85),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4, .production_id = 4),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 88),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 72),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 17),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4, .production_id = 9),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6, .production_id = 30),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 120),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 14),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 12),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 95),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 119),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 77),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 96),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 97),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18, .production_id = 118),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 111),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 117),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6, .production_id = 17),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 116),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 40),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 40),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 13, .production_id = 87),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 68),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 36),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 98),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 3),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 123),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 100),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 11),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 101),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 102),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4, .production_id = 4),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 42),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 44),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7, .production_id = 3),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 112),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 36),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5, .production_id = 17),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 91),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10, .production_id = 75),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10, .production_id = 74),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7, .production_id = 36),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 124),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 6, .production_id = 10),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 13, .production_id = 90),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10, .production_id = 67),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 11, .production_id = 17),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7, .production_id = 40),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4, .production_id = 11),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 88),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 57),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 17),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 12, .production_id = 59),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 1),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 115),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 10, .production_id = 76),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 20, .production_id = 127),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 9, .production_id = 64),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 103),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 2),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 104),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11, .production_id = 80),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 12, .production_id = 87),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5, .production_id = 18),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11, .production_id = 6),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9, .production_id = 68),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8, .production_id = 63),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8, .production_id = 46),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 121),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 17),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 8, .production_id = 65),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 86),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 11, .production_id = 77),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 7, .production_id = 45),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 17),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 21),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5, .production_id = 22),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 24),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5, .production_id = 25),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 114),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 27),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3, .production_id = 6),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 3),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 122),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7, .production_id = 46),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 30),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 3),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5, .production_id = 32),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 105),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 106),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 12, .production_id = 84),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 107),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 113),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 21, .production_id = 128),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 21, .production_id = 129),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 108),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 1),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 12, .production_id = 78),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 7, .production_id = 47),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 125),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 7, .production_id = 48),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 17),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 7, .production_id = 49),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8, .production_id = 42),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 11, .production_id = 6),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 7, .production_id = 50),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5, .production_id = 14),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 11),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 11, .production_id = 81),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3, .production_id = 4),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 53),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 126),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 7, .production_id = 54),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 24, .production_id = 130),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 7, .production_id = 55),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 9, .production_id = 59),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 59),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(757),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1353),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1277),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1234),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1231),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1427),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1426),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1103),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1207),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1205),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1425),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1089),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1088),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1086),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1085),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1224),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1222),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1242),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1241),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1240),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1239),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1344),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(857),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1340),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1339),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1420),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1419),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1418),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1417),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1416),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1415),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1171),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1170),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1431),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1409),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1408),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(466),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1116),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1204),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1405),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1404),
  [1224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1400),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1405),
  [1228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 16),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1365),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 16),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 16),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1343),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1247),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1214),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [1280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(993),
  [1286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1117),
  [1312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1430),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1281),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(448),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1106),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(804),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2, .production_id = 89),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1414),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1412),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1093),
  [1362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1092),
  [1364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1093),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1, .production_id = 79),
  [1368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(1106),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1, .production_id = 83),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2, .production_id = 82),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 2),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(830),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(776),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2), SHIFT_REPEAT(965),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1383),
  [1456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null_list, 2),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(467),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(795),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(57),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(750),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 1),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_not_null_list_repeat1, 2), SHIFT_REPEAT(815),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_not_null_list_repeat1, 2),
  [1545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(698),
  [1548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(450),
  [1557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(218),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(810),
  [1575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null_list, 1),
  [1603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(867),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1307),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1303),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1312),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1311),
  [1632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1314),
  [1634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(834),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1315),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1318),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1329),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1268),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1262),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 4),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1347),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1431),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [1712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 3, .production_id = 69),
  [1714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 109),
  [1716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 39),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1366),
  [1724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1367),
  [1728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1309),
  [1732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(754),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1374),
  [1738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [1740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1378),
  [1742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [1744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1379),
  [1746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1277),
  [1750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1381),
  [1752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 73),
  [1760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1384),
  [1762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1387),
  [1770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1385),
  [1772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1388),
  [1774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [1776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [1778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1389),
  [1780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(738),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1393),
  [1788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1395),
  [1798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [1800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1397),
  [1802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [1804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1399),
  [1806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1398),
  [1808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 16),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1155),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1154),
  [1814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1406),
  [1816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [1818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1275),
  [1822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1143),
  [1836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [1838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1139),
  [1840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1204),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4, .production_id = 16),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [1862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1428),
  [1864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4),
  [1908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4),
  [1910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [1928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [2076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [2096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1075),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1076),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1077),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1079),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1082),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1090),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1104),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1105),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [2230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1125),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1136),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1137),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1138),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1141),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 16),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1147),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1162),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1166),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1167),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [2340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 35),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [2350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 79),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1182),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1183),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1185),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1189),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1190),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1192),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1199),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1056),
  [2420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [2422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1212),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [2432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1215),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1216),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1217),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1218),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1219),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1221),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [2458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [2460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1225),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1120),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1228),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1229),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1230),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1232),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1233),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [2490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1236),
  [2492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1237),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [2496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [2498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [2500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1243),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [2504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1245),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1246),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [2510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [2514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [2518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [2520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [2522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [2524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [2526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1252),
  [2528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1255),
  [2534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1256),
  [2536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [2538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [2540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1259),
  [2542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1260),
  [2544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1261),
  [2546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [2548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1264),
  [2552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1111),
  [2554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [2556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [2558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1265),
  [2560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1266),
  [2562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [2564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [2566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1269),
  [2568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1270),
  [2570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [2572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [2574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1272),
  [2576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [2578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [2580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1274),
  [2582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [2584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [2586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [2588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [2590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [2592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [2594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1284),
  [2596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1285),
  [2598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [2600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [2602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [2604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [2606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [2608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [2612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1292),
  [2614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1293),
  [2616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [2618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1295),
  [2620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1296),
  [2622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1297),
  [2624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [2628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1299),
  [2630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1300),
  [2632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [2634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1302),
  [2636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [2638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1304),
  [2640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1305),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1306),
  [2644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1128),
  [2646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [2648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1308),
  [2650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [2652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [2654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1310),
  [2656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [2658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [2660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [2662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [2664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [2666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [2668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [2670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [2672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1323),
  [2674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1324),
  [2676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [2678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1326),
  [2680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [2682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [2684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [2686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1330),
  [2688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [2690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1333),
  [2694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1334),
  [2696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1335),
  [2698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [2700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1337),
  [2702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1338),
  [2704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1149),
  [2706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [2708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1341),
  [2712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1342),
  [2714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [2716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [2718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1345),
  [2720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1346),
  [2722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [2724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [2726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1271),
  [2728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1348),
  [2730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [2732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1152),
  [2734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [2736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [2738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1160),
  [2740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1169),
  [2742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1174),
  [2744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1175),
  [2746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1176),
  [2748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [2750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1178),
  [2752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [2754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1359),
  [2756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1360),
  [2758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [2760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [2762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [2764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [2766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1193),
  [2768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1368),
  [2770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1369),
  [2772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1197),
  [2774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [2776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1372),
  [2778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1373),
  [2780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [2784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1375),
  [2786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [2788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [2790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1377),
  [2792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [2794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [2796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [2798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [2800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1380),
  [2802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [2804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [2806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [2808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [2810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [2812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [2814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [2818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [2820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [2822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [2824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1382),
  [2826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [2830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [2832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [2834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1227),
  [2836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [2838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [2840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [2842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1258),
  [2844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1390),
  [2846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1391),
  [2848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1392),
  [2850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1429),
  [2852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [2854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1394),
  [2856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1278),
  [2858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [2860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1396),
  [2862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [2864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1279),
  [2866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1286),
  [2868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [2870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1287),
  [2872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1401),
  [2874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [2876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1290),
  [2878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [2880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [2882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1298),
  [2884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1238),
  [2886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1313),
  [2888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [2890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1410),
  [2892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1411),
  [2894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1316),
  [2896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [2898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1317),
  [2900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1413),
  [2902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1319),
  [2904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1320),
  [2906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1321),
  [2908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [2910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [2912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [2914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [2916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1322),
  [2918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1325),
  [2920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1332),
  [2922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [2924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [2926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [2928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1421),
  [2930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [2932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [2934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1354),
  [2936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1357),
  [2938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [2940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1362),
  [2942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [2944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1363),
  [2946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [2948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [2950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [2952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [2954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [2956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [2958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [2960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [2962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [2964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [2966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [2968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [2970] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [2974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [2976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
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
