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
#define STATE_COUNT 1416
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 307
#define ALIAS_COUNT 25
#define TOKEN_COUNT 145
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
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
  sym__string_literal = 16,
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
  sym_table_name = 185,
  sym_index_name = 186,
  sym_index_column_spec = 187,
  sym_index_keys_spec = 188,
  sym_index_entries_s_spec = 189,
  sym_index_full_spec = 190,
  sym_drop_index = 191,
  sym_update = 192,
  sym_assignment_element = 193,
  sym_use = 194,
  sym_grant = 195,
  sym_revoke = 196,
  sym_priviledge = 197,
  sym_resource = 198,
  sym_list_roles = 199,
  sym_list_permissions = 200,
  sym_drop_aggregate = 201,
  sym_drop_materialized_view = 202,
  sym_drop_function = 203,
  sym_drop_keyspace = 204,
  sym_drop_role = 205,
  sym_drop_table = 206,
  sym_drop_trigger = 207,
  sym_drop_type = 208,
  sym_drop_user = 209,
  sym_create_aggregate = 210,
  sym_init_cond_definition = 211,
  sym_init_cond_list = 212,
  sym_init_cond_list_nested = 213,
  sym_init_cond_hash = 214,
  sym_init_cond_hash_item = 215,
  sym_create_materialized_view = 216,
  sym_materialized_view_where = 217,
  sym_column_not_null_list = 218,
  sym_column_not_null = 219,
  sym_materialized_view_options = 220,
  sym_create_function = 221,
  sym_param = 222,
  sym_data_type = 223,
  sym_data_type_name = 224,
  sym_data_type_definition = 225,
  sym_return_mode = 226,
  sym_create_keyspace = 227,
  sym_replication_list_item = 228,
  sym_durable_writes = 229,
  sym_create_role = 230,
  sym_role_with = 231,
  sym_role_with_options = 232,
  sym_option_hash = 233,
  sym_option_hash_item = 234,
  sym_create_table = 235,
  sym_column_definition_list = 236,
  sym_column_definition = 237,
  sym_primary_key_column = 238,
  sym_primary_key_element = 239,
  sym_primary_key_definition = 240,
  sym_compound_key = 241,
  sym_clustering_key_list = 242,
  sym_composite_key = 243,
  sym_partition_key_list = 244,
  sym_with_element = 245,
  sym_table_options = 246,
  sym_table_option_item = 247,
  sym_table_option_name = 248,
  sym_table_option_value = 249,
  sym_clustering_order = 250,
  sym_order_direction = 251,
  sym_create_trigger = 252,
  sym_trigger_name = 253,
  sym_trigger_class = 254,
  sym_create_type = 255,
  sym_create_user = 256,
  sym_alter_materialized_view = 257,
  sym_alter_keyspace = 258,
  sym_replication_list = 259,
  sym_alter_role = 260,
  sym_alter_table = 261,
  sym_alter_table_operation = 262,
  sym_alter_table_add = 263,
  sym_alter_table_column_definition = 264,
  sym_alter_table_drop_columns = 265,
  sym_alter_table_drop_column_list = 266,
  sym_alter_table_drop_compact_storage = 267,
  sym_alter_table_rename = 268,
  sym_alter_table_with = 269,
  sym_alter_type = 270,
  sym_alter_type_operation = 271,
  sym_alter_type_alter_type = 272,
  sym_alter_type_add = 273,
  sym_alter_type_rename = 274,
  sym_alter_type_rename_list = 275,
  sym_alter_type_rename_item = 276,
  sym_alter_user = 277,
  sym_user_password = 278,
  sym_user_super_user = 279,
  sym_apply_batch = 280,
  aux_sym_source_file_repeat1 = 281,
  aux_sym_select_elements_repeat1 = 282,
  aux_sym_function_args_repeat1 = 283,
  aux_sym_relation_elements_repeat1 = 284,
  aux_sym_relation_element_repeat1 = 285,
  aux_sym_relation_element_repeat2 = 286,
  aux_sym_assignment_tuple_repeat1 = 287,
  aux_sym_delete_column_list_repeat1 = 288,
  aux_sym_if_condition_list_repeat1 = 289,
  aux_sym_column_list_repeat1 = 290,
  aux_sym_expression_list_repeat1 = 291,
  aux_sym_assignment_map_repeat1 = 292,
  aux_sym_update_repeat1 = 293,
  aux_sym_init_cond_list_nested_repeat1 = 294,
  aux_sym_init_cond_hash_repeat1 = 295,
  aux_sym_column_not_null_list_repeat1 = 296,
  aux_sym_create_function_repeat1 = 297,
  aux_sym_data_type_definition_repeat1 = 298,
  aux_sym_role_with_repeat1 = 299,
  aux_sym_option_hash_repeat1 = 300,
  aux_sym_column_definition_list_repeat1 = 301,
  aux_sym_table_options_repeat1 = 302,
  aux_sym_create_type_repeat1 = 303,
  aux_sym_replication_list_repeat1 = 304,
  aux_sym_alter_table_column_definition_repeat1 = 305,
  aux_sym_alter_type_rename_list_repeat1 = 306,
  anon_alias_sym_aggregate = 307,
  anon_alias_sym_clustering_key = 308,
  anon_alias_sym_column = 309,
  anon_alias_sym_data_type = 310,
  anon_alias_sym_entries = 311,
  anon_alias_sym_finalfunc = 312,
  anon_alias_sym_full = 313,
  anon_alias_sym_function = 314,
  anon_alias_sym_function_name = 315,
  anon_alias_sym_hash_key = 316,
  anon_alias_sym_index = 317,
  anon_alias_sym_keys = 318,
  anon_alias_sym_keyspace = 319,
  anon_alias_sym_language = 320,
  anon_alias_sym_materialized_view = 321,
  anon_alias_sym_option = 322,
  anon_alias_sym_param_name = 323,
  anon_alias_sym_partition_key = 324,
  anon_alias_sym_primary_key = 325,
  anon_alias_sym_role = 326,
  anon_alias_sym_sfunc = 327,
  anon_alias_sym_table = 328,
  anon_alias_sym_trigger = 329,
  anon_alias_sym_type = 330,
  anon_alias_sym_user = 331,
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
  [sym__string_literal] = "_string_literal",
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
  [sym_table_name] = "table_name",
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
  [sym_trigger_name] = "trigger_name",
  [sym_trigger_class] = "trigger_class",
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
  [anon_alias_sym_entries] = "entries",
  [anon_alias_sym_finalfunc] = "finalfunc",
  [anon_alias_sym_full] = "full",
  [anon_alias_sym_function] = "function",
  [anon_alias_sym_function_name] = "function_name",
  [anon_alias_sym_hash_key] = "hash_key",
  [anon_alias_sym_index] = "index",
  [anon_alias_sym_keys] = "keys",
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
  [sym__string_literal] = sym__string_literal,
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
  [sym_table_name] = sym_table_name,
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
  [sym_trigger_name] = sym_trigger_name,
  [sym_trigger_class] = sym_trigger_class,
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
  [anon_alias_sym_entries] = anon_alias_sym_entries,
  [anon_alias_sym_finalfunc] = anon_alias_sym_finalfunc,
  [anon_alias_sym_full] = anon_alias_sym_full,
  [anon_alias_sym_function] = anon_alias_sym_function,
  [anon_alias_sym_function_name] = anon_alias_sym_function_name,
  [anon_alias_sym_hash_key] = anon_alias_sym_hash_key,
  [anon_alias_sym_index] = anon_alias_sym_index,
  [anon_alias_sym_keys] = anon_alias_sym_keys,
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
  [sym__string_literal] = {
    .visible = false,
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
  [sym_table_name] = {
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
  [sym_trigger_name] = {
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
  [anon_alias_sym_entries] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_finalfunc] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_full] = {
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
  [anon_alias_sym_keys] = {
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
  field_role = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_operator] = "operator",
  [field_role] = "role",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [39] = {.index = 0, .length = 1},
  [40] = {.index = 0, .length = 1},
  [46] = {.index = 1, .length = 1},
  [62] = {.index = 2, .length = 1},
  [63] = {.index = 2, .length = 1},
  [66] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 1},
  [1] =
    {field_role, 5},
  [2] =
    {field_operator, 3},
  [3] =
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
    [0] = anon_alias_sym_index,
  },
  [5] = {
    [2] = anon_alias_sym_role,
  },
  [6] = {
    [0] = anon_alias_sym_trigger,
  },
  [7] = {
    [2] = anon_alias_sym_index,
  },
  [8] = {
    [2] = anon_alias_sym_keyspace,
  },
  [9] = {
    [2] = anon_alias_sym_function,
  },
  [10] = {
    [2] = anon_alias_sym_aggregate,
  },
  [11] = {
    [2] = anon_alias_sym_type,
  },
  [12] = {
    [2] = anon_alias_sym_user,
  },
  [13] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_table,
  },
  [14] = {
    [0] = anon_alias_sym_table,
  },
  [15] = {
    [3] = anon_alias_sym_materialized_view,
  },
  [16] = {
    [3] = anon_alias_sym_role,
  },
  [17] = {
    [0] = anon_alias_sym_function_name,
  },
  [18] = {
    [0] = anon_alias_sym_column,
  },
  [19] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_table,
  },
  [20] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_trigger,
  },
  [21] = {
    [4] = anon_alias_sym_table,
  },
  [22] = {
    [4] = anon_alias_sym_index,
  },
  [23] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_index,
  },
  [24] = {
    [4] = anon_alias_sym_keyspace,
  },
  [25] = {
    [4] = anon_alias_sym_function,
  },
  [26] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
  },
  [27] = {
    [4] = anon_alias_sym_role,
  },
  [28] = {
    [4] = anon_alias_sym_aggregate,
  },
  [29] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
  },
  [30] = {
    [2] = anon_alias_sym_trigger,
    [4] = anon_alias_sym_table,
  },
  [31] = {
    [4] = anon_alias_sym_type,
  },
  [32] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
  },
  [33] = {
    [4] = anon_alias_sym_user,
  },
  [34] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_user,
  },
  [35] = {
    [1] = anon_alias_sym_function,
  },
  [36] = {
    [1] = anon_alias_sym_role,
  },
  [37] = {
    [0] = anon_alias_sym_option,
  },
  [38] = {
    [3] = anon_alias_sym_table,
  },
  [39] = {
    [0] = anon_alias_sym_table,
  },
  [41] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_table,
  },
  [42] = {
    [0] = anon_alias_sym_param_name,
  },
  [43] = {
    [5] = anon_alias_sym_role,
  },
  [44] = {
    [5] = anon_alias_sym_materialized_view,
  },
  [45] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
  },
  [47] = {
    [1] = anon_alias_sym_column,
  },
  [48] = {
    [2] = anon_alias_sym_type,
    [4] = anon_alias_sym_column,
    [5] = anon_alias_sym_data_type,
  },
  [49] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_table,
  },
  [50] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_index,
  },
  [51] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
  },
  [52] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
  },
  [53] = {
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_table,
  },
  [54] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_table,
  },
  [55] = {
    [2] = anon_alias_sym_trigger,
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_table,
  },
  [56] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_type,
  },
  [57] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_user,
  },
  [58] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_function,
  },
  [59] = {
    [1] = anon_alias_sym_column,
    [3] = anon_alias_sym_column,
  },
  [60] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_column,
  },
  [61] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_table,
  },
  [63] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_table,
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
    [2] = anon_alias_sym_keys,
  },
  [69] = {
    [2] = anon_alias_sym_entries,
  },
  [70] = {
    [2] = anon_alias_sym_full,
  },
  [71] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
    [6] = anon_alias_sym_column,
    [7] = anon_alias_sym_data_type,
  },
  [72] = {
    [1] = anon_alias_sym_column,
    [2] = anon_alias_sym_data_type,
  },
  [73] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_trigger,
    [8] = anon_alias_sym_table,
  },
  [74] = {
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [75] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [76] = {
    [0] = anon_alias_sym_primary_key,
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
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_trigger,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
  },
  [81] = {
    [0] = anon_alias_sym_partition_key,
    [1] = anon_alias_sym_partition_key,
  },
  [82] = {
    [0] = anon_alias_sym_clustering_key,
  },
  [83] = {
    [5] = anon_alias_sym_keyspace,
  },
  [84] = {
    [2] = anon_alias_sym_function,
    [9] = anon_alias_sym_language,
  },
  [85] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_type,
    [9] = anon_alias_sym_column,
    [10] = anon_alias_sym_data_type,
  },
  [86] = {
    [4] = anon_alias_sym_column,
  },
  [87] = {
    [0] = anon_alias_sym_clustering_key,
    [1] = anon_alias_sym_clustering_key,
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
  [137] = 110,
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
  [148] = 126,
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
      ACCEPT_TOKEN(sym__string_literal);
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
  [68] = {.lex_state = 550},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 550},
  [72] = {.lex_state = 550},
  [73] = {.lex_state = 550},
  [74] = {.lex_state = 550},
  [75] = {.lex_state = 550},
  [76] = {.lex_state = 550},
  [77] = {.lex_state = 550},
  [78] = {.lex_state = 550},
  [79] = {.lex_state = 550},
  [80] = {.lex_state = 550},
  [81] = {.lex_state = 550},
  [82] = {.lex_state = 550},
  [83] = {.lex_state = 550},
  [84] = {.lex_state = 552},
  [85] = {.lex_state = 550},
  [86] = {.lex_state = 550},
  [87] = {.lex_state = 550},
  [88] = {.lex_state = 550},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 550},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 550},
  [94] = {.lex_state = 551},
  [95] = {.lex_state = 550},
  [96] = {.lex_state = 550},
  [97] = {.lex_state = 550},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 550},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 550},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 550},
  [116] = {.lex_state = 550},
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
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 550},
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
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 550},
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
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 550},
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
  [195] = {.lex_state = 550},
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
  [214] = {.lex_state = 550},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 550},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 550},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 550},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 550},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 550},
  [251] = {.lex_state = 550},
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
  [429] = {.lex_state = 1},
  [430] = {.lex_state = 550},
  [431] = {.lex_state = 550},
  [432] = {.lex_state = 550},
  [433] = {.lex_state = 550},
  [434] = {.lex_state = 550},
  [435] = {.lex_state = 550},
  [436] = {.lex_state = 550},
  [437] = {.lex_state = 550},
  [438] = {.lex_state = 550},
  [439] = {.lex_state = 1},
  [440] = {.lex_state = 1},
  [441] = {.lex_state = 1},
  [442] = {.lex_state = 550},
  [443] = {.lex_state = 1},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 550},
  [446] = {.lex_state = 41},
  [447] = {.lex_state = 53},
  [448] = {.lex_state = 1},
  [449] = {.lex_state = 53},
  [450] = {.lex_state = 41},
  [451] = {.lex_state = 550},
  [452] = {.lex_state = 550},
  [453] = {.lex_state = 41},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 550},
  [456] = {.lex_state = 550},
  [457] = {.lex_state = 550},
  [458] = {.lex_state = 550},
  [459] = {.lex_state = 550},
  [460] = {.lex_state = 550},
  [461] = {.lex_state = 550},
  [462] = {.lex_state = 550},
  [463] = {.lex_state = 550},
  [464] = {.lex_state = 550},
  [465] = {.lex_state = 550},
  [466] = {.lex_state = 550},
  [467] = {.lex_state = 550},
  [468] = {.lex_state = 550},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 18},
  [471] = {.lex_state = 18},
  [472] = {.lex_state = 18},
  [473] = {.lex_state = 18},
  [474] = {.lex_state = 15},
  [475] = {.lex_state = 15},
  [476] = {.lex_state = 11},
  [477] = {.lex_state = 550},
  [478] = {.lex_state = 14},
  [479] = {.lex_state = 14},
  [480] = {.lex_state = 15},
  [481] = {.lex_state = 550},
  [482] = {.lex_state = 15},
  [483] = {.lex_state = 15},
  [484] = {.lex_state = 10},
  [485] = {.lex_state = 15},
  [486] = {.lex_state = 14},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 15},
  [489] = {.lex_state = 15},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 13},
  [494] = {.lex_state = 12},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 10},
  [498] = {.lex_state = 10},
  [499] = {.lex_state = 53},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 10},
  [505] = {.lex_state = 19},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 24},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 10},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 10},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 550},
  [518] = {.lex_state = 19},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 17},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 17},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 21},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 17},
  [530] = {.lex_state = 17},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 551},
  [535] = {.lex_state = 17},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 17},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 17},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 17},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 17},
  [547] = {.lex_state = 10},
  [548] = {.lex_state = 17},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 17},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 17},
  [558] = {.lex_state = 10},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 26},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 17},
  [565] = {.lex_state = 17},
  [566] = {.lex_state = 21},
  [567] = {.lex_state = 10},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 17},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 17},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 16},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 10},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 10},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 10},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 10},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 25},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 10},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 20},
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
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 10},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 10},
  [635] = {.lex_state = 10},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 10},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
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
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 10},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 10},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 10},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 10},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 10},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 551},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 10},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 10},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 20},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 551},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 10},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 10},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 10},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 20},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 10},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 10},
  [751] = {.lex_state = 10},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 10},
  [756] = {.lex_state = 27},
  [757] = {.lex_state = 10},
  [758] = {.lex_state = 27},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 10},
  [764] = {.lex_state = 10},
  [765] = {.lex_state = 20},
  [766] = {.lex_state = 20},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 10},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 10},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 20},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 20},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 10},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 10},
  [786] = {.lex_state = 20},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 20},
  [789] = {.lex_state = 20},
  [790] = {.lex_state = 10},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 10},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 10},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 10},
  [798] = {.lex_state = 10},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 550},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 20},
  [807] = {.lex_state = 10},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 10},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 27},
  [814] = {.lex_state = 10},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 20},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 20},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 10},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 10},
  [827] = {.lex_state = 20},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 20},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 10},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 10},
  [837] = {.lex_state = 20},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 10},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 10},
  [842] = {.lex_state = 10},
  [843] = {.lex_state = 20},
  [844] = {.lex_state = 551},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 20},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 20},
  [852] = {.lex_state = 10},
  [853] = {.lex_state = 10},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 20},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 22},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 10},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 10},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 10},
  [869] = {.lex_state = 10},
  [870] = {.lex_state = 10},
  [871] = {.lex_state = 10},
  [872] = {.lex_state = 10},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 10},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 10},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 10},
  [882] = {.lex_state = 10},
  [883] = {.lex_state = 10},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 551},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 10},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 10},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 551},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 10},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 10},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 10},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 550},
  [929] = {.lex_state = 10},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 10},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 10},
  [941] = {.lex_state = 10},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 10},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 10},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 10},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 10},
  [953] = {.lex_state = 10},
  [954] = {.lex_state = 10},
  [955] = {.lex_state = 10},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 10},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 10},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 0},
  [964] = {.lex_state = 10},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 0},
  [967] = {.lex_state = 0},
  [968] = {.lex_state = 0},
  [969] = {.lex_state = 0},
  [970] = {.lex_state = 0},
  [971] = {.lex_state = 0},
  [972] = {.lex_state = 10},
  [973] = {.lex_state = 0},
  [974] = {.lex_state = 10},
  [975] = {.lex_state = 0},
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 550},
  [978] = {.lex_state = 550},
  [979] = {.lex_state = 0},
  [980] = {.lex_state = 10},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 0},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 0},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 0},
  [988] = {.lex_state = 0},
  [989] = {.lex_state = 10},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 0},
  [993] = {.lex_state = 0},
  [994] = {.lex_state = 0},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 10},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 0},
  [999] = {.lex_state = 0},
  [1000] = {.lex_state = 0},
  [1001] = {.lex_state = 10},
  [1002] = {.lex_state = 10},
  [1003] = {.lex_state = 0},
  [1004] = {.lex_state = 0},
  [1005] = {.lex_state = 10},
  [1006] = {.lex_state = 0},
  [1007] = {.lex_state = 10},
  [1008] = {.lex_state = 10},
  [1009] = {.lex_state = 0},
  [1010] = {.lex_state = 41},
  [1011] = {.lex_state = 10},
  [1012] = {.lex_state = 0},
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 10},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 10},
  [1017] = {.lex_state = 0},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 0},
  [1020] = {.lex_state = 0},
  [1021] = {.lex_state = 0},
  [1022] = {.lex_state = 10},
  [1023] = {.lex_state = 10},
  [1024] = {.lex_state = 10},
  [1025] = {.lex_state = 10},
  [1026] = {.lex_state = 0},
  [1027] = {.lex_state = 10},
  [1028] = {.lex_state = 10},
  [1029] = {.lex_state = 10},
  [1030] = {.lex_state = 10},
  [1031] = {.lex_state = 10},
  [1032] = {.lex_state = 0},
  [1033] = {.lex_state = 10},
  [1034] = {.lex_state = 0},
  [1035] = {.lex_state = 0},
  [1036] = {.lex_state = 0},
  [1037] = {.lex_state = 10},
  [1038] = {.lex_state = 0},
  [1039] = {.lex_state = 0},
  [1040] = {.lex_state = 10},
  [1041] = {.lex_state = 10},
  [1042] = {.lex_state = 0},
  [1043] = {.lex_state = 0},
  [1044] = {.lex_state = 0},
  [1045] = {.lex_state = 0},
  [1046] = {.lex_state = 0},
  [1047] = {.lex_state = 0},
  [1048] = {.lex_state = 0},
  [1049] = {.lex_state = 0},
  [1050] = {.lex_state = 0},
  [1051] = {.lex_state = 0},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 0},
  [1054] = {.lex_state = 0},
  [1055] = {.lex_state = 10},
  [1056] = {.lex_state = 0},
  [1057] = {.lex_state = 0},
  [1058] = {.lex_state = 0},
  [1059] = {.lex_state = 0},
  [1060] = {.lex_state = 10},
  [1061] = {.lex_state = 0},
  [1062] = {.lex_state = 0},
  [1063] = {.lex_state = 0},
  [1064] = {.lex_state = 0},
  [1065] = {.lex_state = 10},
  [1066] = {.lex_state = 0},
  [1067] = {.lex_state = 10},
  [1068] = {.lex_state = 0},
  [1069] = {.lex_state = 0},
  [1070] = {.lex_state = 0},
  [1071] = {.lex_state = 0},
  [1072] = {.lex_state = 0},
  [1073] = {.lex_state = 550},
  [1074] = {.lex_state = 0},
  [1075] = {.lex_state = 0},
  [1076] = {.lex_state = 0},
  [1077] = {.lex_state = 0},
  [1078] = {.lex_state = 0},
  [1079] = {.lex_state = 0},
  [1080] = {.lex_state = 10},
  [1081] = {.lex_state = 0},
  [1082] = {.lex_state = 0},
  [1083] = {.lex_state = 10},
  [1084] = {.lex_state = 0},
  [1085] = {.lex_state = 10},
  [1086] = {.lex_state = 0},
  [1087] = {.lex_state = 0},
  [1088] = {.lex_state = 10},
  [1089] = {.lex_state = 10},
  [1090] = {.lex_state = 10},
  [1091] = {.lex_state = 0},
  [1092] = {.lex_state = 0},
  [1093] = {.lex_state = 10},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 0},
  [1096] = {.lex_state = 0},
  [1097] = {.lex_state = 0},
  [1098] = {.lex_state = 0},
  [1099] = {.lex_state = 10},
  [1100] = {.lex_state = 10},
  [1101] = {.lex_state = 10},
  [1102] = {.lex_state = 0},
  [1103] = {.lex_state = 13},
  [1104] = {.lex_state = 0},
  [1105] = {.lex_state = 10},
  [1106] = {.lex_state = 0},
  [1107] = {.lex_state = 0},
  [1108] = {.lex_state = 0},
  [1109] = {.lex_state = 10},
  [1110] = {.lex_state = 10},
  [1111] = {.lex_state = 0},
  [1112] = {.lex_state = 10},
  [1113] = {.lex_state = 0},
  [1114] = {.lex_state = 10},
  [1115] = {.lex_state = 0},
  [1116] = {.lex_state = 0},
  [1117] = {.lex_state = 0},
  [1118] = {.lex_state = 0},
  [1119] = {.lex_state = 10},
  [1120] = {.lex_state = 0},
  [1121] = {.lex_state = 0},
  [1122] = {.lex_state = 551},
  [1123] = {.lex_state = 0},
  [1124] = {.lex_state = 0},
  [1125] = {.lex_state = 10},
  [1126] = {.lex_state = 0},
  [1127] = {.lex_state = 0},
  [1128] = {.lex_state = 0},
  [1129] = {.lex_state = 10},
  [1130] = {.lex_state = 0},
  [1131] = {.lex_state = 10},
  [1132] = {.lex_state = 0},
  [1133] = {.lex_state = 0},
  [1134] = {.lex_state = 0},
  [1135] = {.lex_state = 10},
  [1136] = {.lex_state = 0},
  [1137] = {.lex_state = 0},
  [1138] = {.lex_state = 0},
  [1139] = {.lex_state = 10},
  [1140] = {.lex_state = 0},
  [1141] = {.lex_state = 0},
  [1142] = {.lex_state = 0},
  [1143] = {.lex_state = 0},
  [1144] = {.lex_state = 10},
  [1145] = {.lex_state = 0},
  [1146] = {.lex_state = 0},
  [1147] = {.lex_state = 10},
  [1148] = {.lex_state = 0},
  [1149] = {.lex_state = 0},
  [1150] = {.lex_state = 0},
  [1151] = {.lex_state = 0},
  [1152] = {.lex_state = 10},
  [1153] = {.lex_state = 0},
  [1154] = {.lex_state = 0},
  [1155] = {.lex_state = 10},
  [1156] = {.lex_state = 0},
  [1157] = {.lex_state = 10},
  [1158] = {.lex_state = 0},
  [1159] = {.lex_state = 0},
  [1160] = {.lex_state = 10},
  [1161] = {.lex_state = 0},
  [1162] = {.lex_state = 0},
  [1163] = {.lex_state = 10},
  [1164] = {.lex_state = 0},
  [1165] = {.lex_state = 0},
  [1166] = {.lex_state = 0},
  [1167] = {.lex_state = 10},
  [1168] = {.lex_state = 0},
  [1169] = {.lex_state = 0},
  [1170] = {.lex_state = 0},
  [1171] = {.lex_state = 0},
  [1172] = {.lex_state = 10},
  [1173] = {.lex_state = 0},
  [1174] = {.lex_state = 10},
  [1175] = {.lex_state = 10},
  [1176] = {.lex_state = 0},
  [1177] = {.lex_state = 10},
  [1178] = {.lex_state = 550},
  [1179] = {.lex_state = 550},
  [1180] = {.lex_state = 0},
  [1181] = {.lex_state = 0},
  [1182] = {.lex_state = 0},
  [1183] = {.lex_state = 0},
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
  [1195] = {.lex_state = 0},
  [1196] = {.lex_state = 0},
  [1197] = {.lex_state = 10},
  [1198] = {.lex_state = 0},
  [1199] = {.lex_state = 0},
  [1200] = {.lex_state = 10},
  [1201] = {.lex_state = 10},
  [1202] = {.lex_state = 10},
  [1203] = {.lex_state = 0},
  [1204] = {.lex_state = 10},
  [1205] = {.lex_state = 10},
  [1206] = {.lex_state = 0},
  [1207] = {.lex_state = 0},
  [1208] = {.lex_state = 0},
  [1209] = {.lex_state = 0},
  [1210] = {.lex_state = 10},
  [1211] = {.lex_state = 10},
  [1212] = {.lex_state = 0},
  [1213] = {.lex_state = 0},
  [1214] = {.lex_state = 10},
  [1215] = {.lex_state = 0},
  [1216] = {.lex_state = 10},
  [1217] = {.lex_state = 551},
  [1218] = {.lex_state = 0},
  [1219] = {.lex_state = 10},
  [1220] = {.lex_state = 0},
  [1221] = {.lex_state = 10},
  [1222] = {.lex_state = 10},
  [1223] = {.lex_state = 550},
  [1224] = {.lex_state = 0},
  [1225] = {.lex_state = 0},
  [1226] = {.lex_state = 0},
  [1227] = {.lex_state = 13},
  [1228] = {.lex_state = 0},
  [1229] = {.lex_state = 10},
  [1230] = {.lex_state = 0},
  [1231] = {.lex_state = 10},
  [1232] = {.lex_state = 10},
  [1233] = {.lex_state = 0},
  [1234] = {.lex_state = 10},
  [1235] = {.lex_state = 0},
  [1236] = {.lex_state = 10},
  [1237] = {.lex_state = 0},
  [1238] = {.lex_state = 10},
  [1239] = {.lex_state = 0},
  [1240] = {.lex_state = 0},
  [1241] = {.lex_state = 10},
  [1242] = {.lex_state = 10},
  [1243] = {.lex_state = 0},
  [1244] = {.lex_state = 551},
  [1245] = {.lex_state = 0},
  [1246] = {.lex_state = 10},
  [1247] = {.lex_state = 0},
  [1248] = {.lex_state = 10},
  [1249] = {.lex_state = 0},
  [1250] = {.lex_state = 0},
  [1251] = {.lex_state = 10},
  [1252] = {.lex_state = 0},
  [1253] = {.lex_state = 0},
  [1254] = {.lex_state = 551},
  [1255] = {.lex_state = 0},
  [1256] = {.lex_state = 10},
  [1257] = {.lex_state = 0},
  [1258] = {.lex_state = 10},
  [1259] = {.lex_state = 10},
  [1260] = {.lex_state = 10},
  [1261] = {.lex_state = 10},
  [1262] = {.lex_state = 0},
  [1263] = {.lex_state = 0},
  [1264] = {.lex_state = 0},
  [1265] = {.lex_state = 550},
  [1266] = {.lex_state = 10},
  [1267] = {.lex_state = 10},
  [1268] = {.lex_state = 10},
  [1269] = {.lex_state = 0},
  [1270] = {.lex_state = 10},
  [1271] = {.lex_state = 0},
  [1272] = {.lex_state = 0},
  [1273] = {.lex_state = 10},
  [1274] = {.lex_state = 0},
  [1275] = {.lex_state = 0},
  [1276] = {.lex_state = 0},
  [1277] = {.lex_state = 10},
  [1278] = {.lex_state = 0},
  [1279] = {.lex_state = 0},
  [1280] = {.lex_state = 0},
  [1281] = {.lex_state = 0},
  [1282] = {.lex_state = 10},
  [1283] = {.lex_state = 10},
  [1284] = {.lex_state = 0},
  [1285] = {.lex_state = 0},
  [1286] = {.lex_state = 10},
  [1287] = {.lex_state = 10},
  [1288] = {.lex_state = 0},
  [1289] = {.lex_state = 0},
  [1290] = {.lex_state = 10},
  [1291] = {.lex_state = 10},
  [1292] = {.lex_state = 0},
  [1293] = {.lex_state = 0},
  [1294] = {.lex_state = 10},
  [1295] = {.lex_state = 0},
  [1296] = {.lex_state = 0},
  [1297] = {.lex_state = 10},
  [1298] = {.lex_state = 0},
  [1299] = {.lex_state = 0},
  [1300] = {.lex_state = 0},
  [1301] = {.lex_state = 0},
  [1302] = {.lex_state = 0},
  [1303] = {.lex_state = 550},
  [1304] = {.lex_state = 550},
  [1305] = {.lex_state = 10},
  [1306] = {.lex_state = 0},
  [1307] = {.lex_state = 0},
  [1308] = {.lex_state = 0},
  [1309] = {.lex_state = 0},
  [1310] = {.lex_state = 10},
  [1311] = {.lex_state = 0},
  [1312] = {.lex_state = 10},
  [1313] = {.lex_state = 0},
  [1314] = {.lex_state = 0},
  [1315] = {.lex_state = 10},
  [1316] = {.lex_state = 0},
  [1317] = {.lex_state = 0},
  [1318] = {.lex_state = 0},
  [1319] = {.lex_state = 10},
  [1320] = {.lex_state = 13},
  [1321] = {.lex_state = 10},
  [1322] = {.lex_state = 551},
  [1323] = {.lex_state = 10},
  [1324] = {.lex_state = 0},
  [1325] = {.lex_state = 0},
  [1326] = {.lex_state = 0},
  [1327] = {.lex_state = 10},
  [1328] = {.lex_state = 551},
  [1329] = {.lex_state = 0},
  [1330] = {.lex_state = 13},
  [1331] = {.lex_state = 0},
  [1332] = {.lex_state = 0},
  [1333] = {.lex_state = 10},
  [1334] = {.lex_state = 10},
  [1335] = {.lex_state = 10},
  [1336] = {.lex_state = 0},
  [1337] = {.lex_state = 10},
  [1338] = {.lex_state = 0},
  [1339] = {.lex_state = 0},
  [1340] = {.lex_state = 0},
  [1341] = {.lex_state = 0},
  [1342] = {.lex_state = 0},
  [1343] = {.lex_state = 0},
  [1344] = {.lex_state = 10},
  [1345] = {.lex_state = 0},
  [1346] = {.lex_state = 0},
  [1347] = {.lex_state = 0},
  [1348] = {.lex_state = 0},
  [1349] = {.lex_state = 10},
  [1350] = {.lex_state = 0},
  [1351] = {.lex_state = 551},
  [1352] = {.lex_state = 0},
  [1353] = {.lex_state = 0},
  [1354] = {.lex_state = 0},
  [1355] = {.lex_state = 0},
  [1356] = {.lex_state = 0},
  [1357] = {.lex_state = 551},
  [1358] = {.lex_state = 0},
  [1359] = {.lex_state = 0},
  [1360] = {.lex_state = 0},
  [1361] = {.lex_state = 0},
  [1362] = {.lex_state = 550},
  [1363] = {.lex_state = 0},
  [1364] = {.lex_state = 0},
  [1365] = {.lex_state = 0},
  [1366] = {.lex_state = 0},
  [1367] = {.lex_state = 0},
  [1368] = {.lex_state = 0},
  [1369] = {.lex_state = 0},
  [1370] = {.lex_state = 0},
  [1371] = {.lex_state = 0},
  [1372] = {.lex_state = 10},
  [1373] = {.lex_state = 0},
  [1374] = {.lex_state = 0},
  [1375] = {.lex_state = 0},
  [1376] = {.lex_state = 10},
  [1377] = {.lex_state = 0},
  [1378] = {.lex_state = 0},
  [1379] = {.lex_state = 0},
  [1380] = {.lex_state = 0},
  [1381] = {.lex_state = 0},
  [1382] = {.lex_state = 0},
  [1383] = {.lex_state = 0},
  [1384] = {.lex_state = 0},
  [1385] = {.lex_state = 0},
  [1386] = {.lex_state = 0},
  [1387] = {.lex_state = 10},
  [1388] = {.lex_state = 10},
  [1389] = {.lex_state = 0},
  [1390] = {.lex_state = 0},
  [1391] = {.lex_state = 0},
  [1392] = {.lex_state = 10},
  [1393] = {.lex_state = 551},
  [1394] = {.lex_state = 551},
  [1395] = {.lex_state = 10},
  [1396] = {.lex_state = 10},
  [1397] = {.lex_state = 0},
  [1398] = {.lex_state = 10},
  [1399] = {.lex_state = 10},
  [1400] = {.lex_state = 10},
  [1401] = {.lex_state = 0},
  [1402] = {.lex_state = 0},
  [1403] = {.lex_state = 0},
  [1404] = {.lex_state = 0},
  [1405] = {.lex_state = 0},
  [1406] = {.lex_state = 0},
  [1407] = {.lex_state = 0},
  [1408] = {.lex_state = 10},
  [1409] = {.lex_state = 10},
  [1410] = {.lex_state = 0},
  [1411] = {.lex_state = 10},
  [1412] = {.lex_state = 0},
  [1413] = {.lex_state = 0},
  [1414] = {.lex_state = 10},
  [1415] = {.lex_state = 10},
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
    [sym__string_literal] = ACTIONS(1),
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
    [sym_source_file] = STATE(1412),
    [sym__statement] = STATE(2),
    [sym_select_statement] = STATE(353),
    [sym_delete_statement] = STATE(353),
    [sym_begin_batch] = STATE(638),
    [sym_insert_statement] = STATE(353),
    [sym_truncate] = STATE(353),
    [sym_create_index] = STATE(353),
    [sym_drop_index] = STATE(353),
    [sym_update] = STATE(353),
    [sym_use] = STATE(353),
    [sym_grant] = STATE(353),
    [sym_revoke] = STATE(353),
    [sym_list_roles] = STATE(353),
    [sym_list_permissions] = STATE(353),
    [sym_drop_aggregate] = STATE(353),
    [sym_drop_materialized_view] = STATE(353),
    [sym_drop_function] = STATE(353),
    [sym_drop_keyspace] = STATE(353),
    [sym_drop_role] = STATE(353),
    [sym_drop_table] = STATE(353),
    [sym_drop_trigger] = STATE(353),
    [sym_drop_type] = STATE(353),
    [sym_drop_user] = STATE(353),
    [sym_create_aggregate] = STATE(353),
    [sym_create_materialized_view] = STATE(353),
    [sym_create_function] = STATE(353),
    [sym_create_keyspace] = STATE(353),
    [sym_create_role] = STATE(353),
    [sym_create_table] = STATE(353),
    [sym_create_trigger] = STATE(353),
    [sym_create_type] = STATE(353),
    [sym_create_user] = STATE(353),
    [sym_alter_materialized_view] = STATE(353),
    [sym_alter_keyspace] = STATE(353),
    [sym_alter_role] = STATE(353),
    [sym_alter_table] = STATE(353),
    [sym_alter_type] = STATE(353),
    [sym_alter_user] = STATE(353),
    [sym_apply_batch] = STATE(353),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(638), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(353), 37,
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
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      aux_sym_select_statement_token1,
    ACTIONS(40), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(43), 1,
      aux_sym_begin_batch_token1,
    ACTIONS(46), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(49), 1,
      aux_sym_truncate_token1,
    ACTIONS(52), 1,
      aux_sym_create_index_token1,
    ACTIONS(55), 1,
      aux_sym_drop_index_token1,
    ACTIONS(58), 1,
      aux_sym_update_token1,
    ACTIONS(61), 1,
      aux_sym_use_token1,
    ACTIONS(64), 1,
      aux_sym_grant_token1,
    ACTIONS(67), 1,
      aux_sym_revoke_token1,
    ACTIONS(70), 1,
      aux_sym_priviledge_token3,
    ACTIONS(73), 1,
      aux_sym_list_roles_token1,
    ACTIONS(76), 1,
      aux_sym_apply_batch_token1,
    STATE(638), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(353), 37,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1243), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1171), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(201), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(990), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(227), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(200), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(984), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(931), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1149), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(778), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(664), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1146), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1237), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1350), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(995), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(900), 1,
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
    STATE(69), 1,
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
  [849] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1233), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1015), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1019), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1145), 1,
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
    STATE(69), 1,
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
  [1024] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1356), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1193), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1311), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1281), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1274), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1269), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(625), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(646), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1121), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1056), 1,
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
    STATE(69), 1,
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
  [1409] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1115), 1,
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
    STATE(69), 1,
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
  [1479] = 3,
    STATE(69), 1,
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
  [1514] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1247), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1052), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1189), 1,
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
    STATE(69), 1,
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
  [1654] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(903), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1111), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1136), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(959), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(771), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(411), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(694), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(568), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1084), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(948), 1,
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
    STATE(69), 1,
      sym_data_type_name,
    STATE(1206), 1,
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
  [2071] = 2,
    STATE(792), 1,
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
  [2193] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(67), 1,
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
  [2224] = 1,
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
  [2251] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(102), 22,
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
  [2282] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2309] = 1,
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
  [2336] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(59), 1,
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
  [2367] = 8,
    ACTIONS(110), 1,
      aux_sym_select_statement_token4,
    ACTIONS(112), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(116), 1,
      aux_sym_order_spec_token1,
    STATE(93), 1,
      sym_where_spec,
    STATE(132), 1,
      sym_order_spec,
    STATE(223), 1,
      sym_limit_spec,
    ACTIONS(108), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2407] = 3,
    ACTIONS(120), 1,
      anon_sym_LT,
    STATE(89), 1,
      sym_data_type_definition,
    ACTIONS(118), 21,
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
  [2437] = 1,
    ACTIONS(122), 23,
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
  [2463] = 8,
    ACTIONS(112), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(116), 1,
      aux_sym_order_spec_token1,
    ACTIONS(126), 1,
      aux_sym_select_statement_token4,
    STATE(95), 1,
      sym_where_spec,
    STATE(103), 1,
      sym_order_spec,
    STATE(251), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2503] = 8,
    ACTIONS(112), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(116), 1,
      aux_sym_order_spec_token1,
    ACTIONS(130), 1,
      aux_sym_select_statement_token4,
    STATE(90), 1,
      sym_where_spec,
    STATE(133), 1,
      sym_order_spec,
    STATE(228), 1,
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
  [2543] = 1,
    ACTIONS(132), 22,
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
  [2568] = 1,
    ACTIONS(134), 22,
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
  [2593] = 1,
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
  [2618] = 1,
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
  [2643] = 1,
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
  [2668] = 3,
    ACTIONS(144), 1,
      aux_sym_relation_elements_token1,
    STATE(78), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(142), 20,
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
  [2697] = 2,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(147), 21,
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
  [2724] = 1,
    ACTIONS(151), 22,
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
  [2749] = 3,
    ACTIONS(155), 1,
      aux_sym_relation_elements_token1,
    STATE(78), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(153), 20,
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
  [2778] = 3,
    ACTIONS(155), 1,
      aux_sym_relation_elements_token1,
    STATE(81), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(157), 20,
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
  [2807] = 1,
    ACTIONS(159), 22,
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
  [2832] = 8,
    ACTIONS(165), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(167), 1,
      sym_object_name,
    STATE(126), 1,
      sym_table_option_item,
    STATE(154), 1,
      sym_table_options,
    STATE(370), 1,
      sym_clustering_order,
    STATE(1096), 1,
      sym_table_option_name,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(163), 14,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2871] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2896] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2921] = 1,
    ACTIONS(173), 22,
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
  [2946] = 1,
    ACTIONS(142), 21,
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
  [2970] = 1,
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
  [2994] = 6,
    ACTIONS(112), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_order_spec_token1,
    ACTIONS(126), 1,
      aux_sym_select_statement_token4,
    STATE(103), 1,
      sym_order_spec,
    STATE(251), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3028] = 1,
    ACTIONS(177), 21,
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
  [3052] = 1,
    ACTIONS(179), 21,
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
  [3076] = 6,
    ACTIONS(112), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_order_spec_token1,
    ACTIONS(183), 1,
      aux_sym_select_statement_token4,
    STATE(115), 1,
      sym_order_spec,
    STATE(214), 1,
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
  [3110] = 3,
    STATE(195), 1,
      sym_order_direction,
    ACTIONS(187), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(185), 18,
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
  [3138] = 6,
    ACTIONS(110), 1,
      aux_sym_select_statement_token4,
    ACTIONS(112), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_order_spec_token1,
    STATE(132), 1,
      sym_order_spec,
    STATE(223), 1,
      sym_limit_spec,
    ACTIONS(108), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3172] = 1,
    ACTIONS(189), 21,
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
  [3196] = 2,
    ACTIONS(193), 1,
      aux_sym_relation_element_token1,
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
  [3269] = 3,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(201), 18,
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
  [3296] = 2,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(206), 19,
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
  [3321] = 2,
    ACTIONS(212), 1,
      anon_sym_DOT,
    ACTIONS(210), 19,
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
  [3346] = 4,
    ACTIONS(110), 1,
      aux_sym_select_statement_token4,
    ACTIONS(112), 1,
      aux_sym_limit_spec_token1,
    STATE(223), 1,
      sym_limit_spec,
    ACTIONS(108), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3374] = 1,
    ACTIONS(214), 19,
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
  [3396] = 4,
    ACTIONS(218), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(291), 1,
      sym_using_ttl_timestamp,
    ACTIONS(216), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3424] = 2,
    ACTIONS(224), 1,
      aux_sym_priviledge_token2,
    ACTIONS(222), 18,
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
  [3448] = 4,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(228), 1,
      aux_sym_delete_statement_token2,
    STATE(365), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3476] = 1,
    ACTIONS(230), 19,
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
  [3498] = 1,
    ACTIONS(232), 19,
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
  [3520] = 3,
    ACTIONS(236), 1,
      aux_sym_relation_elements_token1,
    STATE(123), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(234), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3546] = 1,
    ACTIONS(238), 19,
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
  [3568] = 1,
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
  [3590] = 4,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(242), 1,
      aux_sym_delete_statement_token2,
    STATE(417), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3618] = 1,
    ACTIONS(244), 19,
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
  [3640] = 4,
    ACTIONS(112), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(248), 1,
      aux_sym_select_statement_token4,
    STATE(246), 1,
      sym_limit_spec,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3668] = 1,
    ACTIONS(250), 19,
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
  [3690] = 4,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(254), 1,
      aux_sym_delete_statement_token2,
    STATE(389), 1,
      sym_using_ttl_timestamp,
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
  [3718] = 4,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(258), 1,
      aux_sym_delete_statement_token2,
    STATE(357), 1,
      sym_using_ttl_timestamp,
    ACTIONS(256), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3746] = 1,
    ACTIONS(260), 19,
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
  [3768] = 3,
    STATE(279), 1,
      sym_user_super_user,
    ACTIONS(264), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(262), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3794] = 1,
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
  [3816] = 1,
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
  [3838] = 3,
    ACTIONS(272), 1,
      aux_sym_relation_elements_token1,
    STATE(123), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(270), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3864] = 4,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(277), 1,
      aux_sym_delete_statement_token2,
    STATE(295), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3892] = 4,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(281), 1,
      aux_sym_delete_statement_token2,
    STATE(326), 1,
      sym_using_ttl_timestamp,
    ACTIONS(279), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3920] = 3,
    ACTIONS(236), 1,
      aux_sym_relation_elements_token1,
    STATE(110), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(283), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3946] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [3968] = 3,
    STATE(303), 1,
      sym_user_super_user,
    ACTIONS(264), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3994] = 4,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(291), 1,
      aux_sym_delete_statement_token2,
    STATE(263), 1,
      sym_using_ttl_timestamp,
    ACTIONS(289), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4022] = 3,
    STATE(368), 1,
      sym_user_super_user,
    ACTIONS(264), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4048] = 1,
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
  [4070] = 4,
    ACTIONS(112), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(183), 1,
      aux_sym_select_statement_token4,
    STATE(214), 1,
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
  [4098] = 4,
    ACTIONS(112), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(126), 1,
      aux_sym_select_statement_token4,
    STATE(251), 1,
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
  [4147] = 1,
    ACTIONS(299), 18,
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
  [4168] = 3,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      aux_sym_create_materialized_view_token2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4193] = 2,
    STATE(123), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(234), 17,
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
  [4216] = 3,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(314), 1,
      sym_using_ttl_timestamp,
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
  [4241] = 2,
    ACTIONS(311), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(309), 17,
      ts_builtin_sym_end,
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
  [4264] = 2,
    ACTIONS(313), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(309), 17,
      ts_builtin_sym_end,
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
  [4287] = 3,
    ACTIONS(317), 1,
      aux_sym_create_materialized_view_token2,
    STATE(319), 1,
      sym_role_with,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4312] = 3,
    ACTIONS(321), 1,
      aux_sym_relation_elements_token1,
    STATE(186), 1,
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
  [4337] = 3,
    ACTIONS(325), 1,
      aux_sym_delete_statement_token2,
    STATE(384), 1,
      sym_if_spec,
    ACTIONS(323), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4362] = 3,
    ACTIONS(329), 1,
      aux_sym_delete_statement_token2,
    STATE(333), 1,
      sym_if_spec,
    ACTIONS(327), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4387] = 3,
    ACTIONS(333), 1,
      aux_sym_delete_statement_token2,
    STATE(338), 1,
      sym_if_spec,
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
  [4412] = 1,
    ACTIONS(335), 18,
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
  [4433] = 3,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(258), 1,
      sym_using_ttl_timestamp,
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
  [4458] = 2,
    STATE(137), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(283), 17,
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
  [4481] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(339), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4506] = 3,
    ACTIONS(346), 1,
      aux_sym_delete_statement_token2,
    STATE(395), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4531] = 3,
    ACTIONS(317), 1,
      aux_sym_create_materialized_view_token2,
    STATE(274), 1,
      sym_role_with,
    ACTIONS(348), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4556] = 1,
    ACTIONS(350), 18,
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
  [4577] = 3,
    ACTIONS(354), 1,
      aux_sym_create_materialized_view_token2,
    STATE(312), 1,
      sym_with_element,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4602] = 3,
    ACTIONS(358), 1,
      aux_sym_clustering_order_token1,
    STATE(350), 1,
      sym_clustering_order,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4627] = 3,
    ACTIONS(354), 1,
      aux_sym_create_materialized_view_token2,
    STATE(352), 1,
      sym_with_element,
    ACTIONS(360), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(260), 1,
      sym_using_ttl_timestamp,
    ACTIONS(362), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(364), 18,
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
  [4698] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4719] = 8,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      sym_decimal_literal,
    ACTIONS(374), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    STATE(700), 1,
      sym_expression,
    STATE(1079), 1,
      sym_expression_list,
    STATE(753), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [4754] = 3,
    ACTIONS(380), 1,
      aux_sym_delete_statement_token2,
    STATE(289), 1,
      sym_if_spec,
    ACTIONS(378), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4779] = 3,
    ACTIONS(384), 1,
      aux_sym_delete_statement_token2,
    STATE(290), 1,
      sym_if_spec,
    ACTIONS(382), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4804] = 3,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4829] = 1,
    ACTIONS(390), 18,
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
  [4850] = 3,
    ACTIONS(394), 1,
      aux_sym_relation_elements_token1,
    STATE(164), 1,
      aux_sym_alter_type_rename_list_repeat1,
    ACTIONS(392), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4875] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4896] = 3,
    ACTIONS(401), 1,
      aux_sym_delete_statement_token2,
    STATE(282), 1,
      sym_if_spec,
    ACTIONS(399), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4921] = 1,
    ACTIONS(403), 18,
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
  [4942] = 3,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(405), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4967] = 3,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(409), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4992] = 1,
    ACTIONS(411), 18,
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
  [5013] = 1,
    ACTIONS(413), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [5034] = 1,
    ACTIONS(270), 18,
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
  [5055] = 3,
    ACTIONS(417), 1,
      aux_sym_delete_statement_token2,
    STATE(307), 1,
      sym_if_spec,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5080] = 3,
    ACTIONS(421), 1,
      aux_sym_delete_statement_token2,
    STATE(320), 1,
      sym_if_spec,
    ACTIONS(419), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5105] = 3,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_column_list_repeat1,
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
  [5130] = 3,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(345), 1,
      sym_using_ttl_timestamp,
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
  [5155] = 3,
    ACTIONS(431), 1,
      aux_sym_delete_statement_token2,
    STATE(318), 1,
      sym_if_spec,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5180] = 3,
    ACTIONS(435), 1,
      aux_sym_relation_elements_token1,
    STATE(199), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5205] = 1,
    ACTIONS(437), 18,
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
  [5226] = 3,
    ACTIONS(441), 1,
      aux_sym_create_index_token3,
    ACTIONS(443), 1,
      aux_sym_list_roles_token2,
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
  [5251] = 3,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(294), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5276] = 3,
    ACTIONS(449), 1,
      aux_sym_delete_statement_token2,
    STATE(296), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5301] = 3,
    ACTIONS(453), 1,
      aux_sym_list_roles_token2,
    ACTIONS(455), 1,
      aux_sym_list_roles_token3,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5326] = 3,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(309), 1,
      sym_using_ttl_timestamp,
    ACTIONS(457), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5351] = 3,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5376] = 3,
    ACTIONS(321), 1,
      aux_sym_relation_elements_token1,
    STATE(192), 1,
      aux_sym_if_condition_list_repeat1,
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
  [5401] = 3,
    ACTIONS(354), 1,
      aux_sym_create_materialized_view_token2,
    STATE(306), 1,
      sym_with_element,
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
  [5426] = 3,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(377), 1,
      sym_using_ttl_timestamp,
    ACTIONS(468), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5451] = 3,
    ACTIONS(472), 1,
      aux_sym_delete_statement_token2,
    STATE(313), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5476] = 3,
    ACTIONS(317), 1,
      aux_sym_create_materialized_view_token2,
    STATE(317), 1,
      sym_role_with,
    ACTIONS(474), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5501] = 1,
    ACTIONS(476), 18,
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
  [5522] = 3,
    ACTIONS(480), 1,
      aux_sym_relation_elements_token1,
    STATE(192), 1,
      aux_sym_if_condition_list_repeat1,
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
  [5547] = 3,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    STATE(185), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5572] = 1,
    ACTIONS(222), 18,
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
  [5593] = 1,
    ACTIONS(485), 18,
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
  [5614] = 3,
    ACTIONS(354), 1,
      aux_sym_create_materialized_view_token2,
    STATE(409), 1,
      sym_with_element,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5639] = 3,
    ACTIONS(491), 1,
      aux_sym_delete_statement_token2,
    STATE(402), 1,
      sym_if_spec,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5664] = 3,
    ACTIONS(495), 1,
      aux_sym_delete_statement_token2,
    STATE(262), 1,
      sym_if_spec,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5689] = 3,
    ACTIONS(435), 1,
      aux_sym_relation_elements_token1,
    STATE(164), 1,
      aux_sym_alter_type_rename_list_repeat1,
    ACTIONS(497), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5714] = 3,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    STATE(168), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5739] = 3,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [5764] = 3,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(503), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5789] = 3,
    ACTIONS(507), 1,
      aux_sym_delete_statement_token2,
    STATE(387), 1,
      sym_if_spec,
    ACTIONS(505), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5814] = 1,
    ACTIONS(509), 18,
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
  [5835] = 3,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(421), 1,
      sym_using_ttl_timestamp,
    ACTIONS(511), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5860] = 3,
    ACTIONS(515), 1,
      aux_sym_delete_statement_token2,
    STATE(418), 1,
      sym_if_spec,
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
  [5885] = 1,
    ACTIONS(517), 18,
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
  [5906] = 1,
    ACTIONS(392), 17,
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
  [5926] = 2,
    ACTIONS(521), 1,
      anon_sym_DOT,
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
  [5948] = 1,
    ACTIONS(523), 17,
      ts_builtin_sym_end,
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
  [5968] = 2,
    ACTIONS(527), 1,
      aux_sym_create_materialized_view_token2,
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
      anon_sym_DOT,
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
      aux_sym_relation_elements_token1,
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
    ACTIONS(248), 1,
      aux_sym_select_statement_token4,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6056] = 1,
    ACTIONS(537), 17,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6096] = 7,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      sym_decimal_literal,
    ACTIONS(374), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    STATE(761), 1,
      sym_expression,
    STATE(753), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [6128] = 2,
    ACTIONS(541), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(539), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6150] = 1,
    ACTIONS(543), 17,
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
  [6170] = 1,
    ACTIONS(459), 17,
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
  [6190] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6212] = 2,
    ACTIONS(551), 1,
      anon_sym_DOT,
    ACTIONS(549), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6234] = 2,
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
  [6256] = 2,
    ACTIONS(555), 1,
      anon_sym_DOT,
    ACTIONS(553), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6278] = 2,
    ACTIONS(559), 1,
      anon_sym_DOT,
    ACTIONS(557), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6300] = 2,
    ACTIONS(563), 1,
      aux_sym_relation_elements_token1,
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
  [6322] = 1,
    ACTIONS(565), 17,
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
  [6342] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6364] = 1,
    ACTIONS(567), 17,
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
  [6384] = 2,
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
  [6406] = 2,
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
  [6428] = 2,
    ACTIONS(579), 1,
      aux_sym_create_materialized_view_token2,
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
  [6450] = 2,
    ACTIONS(583), 1,
      anon_sym_DOT,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6472] = 2,
    ACTIONS(587), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6494] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6516] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6538] = 2,
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
  [6560] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6582] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6604] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6626] = 2,
    ACTIONS(615), 1,
      aux_sym_create_materialized_view_token2,
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
  [6648] = 2,
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
  [6670] = 2,
    ACTIONS(623), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6692] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6714] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6736] = 2,
    ACTIONS(635), 1,
      aux_sym_select_statement_token4,
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
  [6780] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6802] = 2,
    ACTIONS(647), 1,
      aux_sym_create_materialized_view_token2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6824] = 1,
    ACTIONS(649), 17,
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
  [6844] = 2,
    ACTIONS(110), 1,
      aux_sym_select_statement_token4,
    ACTIONS(108), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
      aux_sym_list_roles_token2,
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
      aux_sym_list_roles_token3,
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
      aux_sym_create_materialized_view_token2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7017] = 1,
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
  [7036] = 1,
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
  [7055] = 1,
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
  [7074] = 1,
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
  [7093] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7112] = 1,
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
  [7131] = 1,
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
  [7150] = 1,
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
  [7169] = 1,
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
  [7188] = 1,
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
  [7207] = 1,
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
  [7226] = 1,
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
  [7245] = 1,
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
  [7264] = 1,
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
  [7359] = 1,
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
  [7378] = 1,
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
  [7397] = 1,
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
  [7416] = 1,
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
  [7435] = 1,
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
  [7454] = 1,
    ACTIONS(505), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7492] = 1,
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
  [7511] = 1,
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
  [7530] = 1,
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
    ACTIONS(327), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7644] = 1,
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
  [7663] = 1,
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
    ACTIONS(256), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7739] = 1,
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
  [7758] = 1,
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
  [7777] = 1,
    ACTIONS(108), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7815] = 1,
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
  [7834] = 1,
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
  [7853] = 1,
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
  [7872] = 1,
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
  [7891] = 1,
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
  [7910] = 1,
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
  [8005] = 1,
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
  [8024] = 1,
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
  [8043] = 1,
    ACTIONS(323), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(457), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8157] = 1,
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
  [8176] = 1,
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
  [8195] = 1,
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
  [8214] = 1,
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
  [8233] = 1,
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
  [8252] = 1,
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
  [8271] = 1,
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
  [8290] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8309] = 1,
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
  [8328] = 1,
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
  [8347] = 1,
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
  [8366] = 1,
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
  [8385] = 1,
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
  [8404] = 1,
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
  [8423] = 1,
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
  [8442] = 1,
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
  [8461] = 1,
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
  [8480] = 1,
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
  [8499] = 1,
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
  [8518] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8537] = 1,
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
  [8556] = 1,
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
  [8575] = 1,
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
  [8594] = 1,
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
  [8613] = 1,
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
  [8632] = 1,
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
  [8651] = 1,
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
  [8670] = 1,
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
  [8689] = 1,
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
  [8708] = 1,
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
  [8727] = 1,
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
  [8746] = 1,
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
  [8765] = 1,
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
  [8784] = 1,
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
  [8803] = 2,
    ACTIONS(837), 1,
      anon_sym_SEMI,
    ACTIONS(835), 15,
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
  [8824] = 1,
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
  [8843] = 1,
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
  [8862] = 1,
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
  [8881] = 1,
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
  [8900] = 1,
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
  [8919] = 1,
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
  [8938] = 1,
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
  [8957] = 1,
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
  [8976] = 1,
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
  [8995] = 1,
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
  [9014] = 1,
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
  [9033] = 1,
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
  [9052] = 1,
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
  [9071] = 1,
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
  [9090] = 1,
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
  [9109] = 1,
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
  [9128] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9147] = 1,
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
  [9166] = 1,
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
  [9185] = 1,
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
  [9204] = 1,
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
  [9223] = 1,
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
  [9242] = 1,
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
  [9261] = 1,
    ACTIONS(362), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9280] = 1,
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
  [9299] = 1,
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
  [9318] = 1,
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
  [9337] = 1,
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
  [9356] = 1,
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
  [9375] = 1,
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
  [9394] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9413] = 1,
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
  [9432] = 1,
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
  [9451] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9470] = 1,
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
  [9489] = 1,
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
  [9508] = 1,
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
  [9527] = 1,
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
  [9546] = 1,
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
  [9565] = 1,
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
  [9584] = 1,
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
  [9603] = 1,
    ACTIONS(382), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9622] = 1,
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
  [9641] = 1,
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
  [9660] = 1,
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
  [9679] = 1,
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
  [9698] = 1,
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
  [9717] = 1,
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
  [9736] = 1,
    ACTIONS(378), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9755] = 1,
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
  [9774] = 1,
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
  [9793] = 1,
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
  [9812] = 1,
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
  [9831] = 1,
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
  [9850] = 1,
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
  [9869] = 1,
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
  [9888] = 1,
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
  [9907] = 1,
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
  [9926] = 1,
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
  [9945] = 1,
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
  [9964] = 1,
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
  [9983] = 1,
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
  [10002] = 1,
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
  [10021] = 1,
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
  [10040] = 1,
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
  [10059] = 1,
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
  [10078] = 1,
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
  [10097] = 1,
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
  [10116] = 1,
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
  [10135] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10154] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10173] = 1,
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
  [10192] = 1,
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
  [10211] = 1,
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
  [10230] = 1,
    ACTIONS(963), 15,
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
  [10248] = 7,
    ACTIONS(374), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    ACTIONS(965), 1,
      sym_object_name,
    STATE(865), 1,
      sym_constant,
    ACTIONS(372), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    STATE(554), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(370), 5,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10278] = 5,
    ACTIONS(372), 1,
      sym_decimal_literal,
    ACTIONS(967), 1,
      anon_sym_LPAREN,
    STATE(401), 1,
      sym_init_cond_definition,
    STATE(165), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10303] = 5,
    ACTIONS(372), 1,
      sym_decimal_literal,
    ACTIONS(967), 1,
      anon_sym_LPAREN,
    STATE(380), 1,
      sym_init_cond_definition,
    STATE(165), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10328] = 5,
    ACTIONS(372), 1,
      sym_decimal_literal,
    ACTIONS(967), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym_init_cond_definition,
    STATE(165), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10353] = 5,
    ACTIONS(372), 1,
      sym_decimal_literal,
    ACTIONS(967), 1,
      anon_sym_LPAREN,
    STATE(385), 1,
      sym_init_cond_definition,
    STATE(165), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10378] = 5,
    ACTIONS(372), 1,
      sym_decimal_literal,
    ACTIONS(967), 1,
      anon_sym_LPAREN,
    STATE(730), 1,
      sym_init_cond_definition,
    STATE(165), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10403] = 5,
    ACTIONS(372), 1,
      sym_decimal_literal,
    ACTIONS(967), 1,
      anon_sym_LPAREN,
    STATE(408), 1,
      sym_init_cond_definition,
    STATE(165), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10428] = 5,
    ACTIONS(372), 1,
      sym_decimal_literal,
    ACTIONS(967), 1,
      anon_sym_LPAREN,
    STATE(392), 1,
      sym_init_cond_definition,
    STATE(165), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10453] = 5,
    ACTIONS(372), 1,
      sym_decimal_literal,
    ACTIONS(967), 1,
      anon_sym_LPAREN,
    STATE(261), 1,
      sym_init_cond_definition,
    STATE(165), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10478] = 5,
    ACTIONS(372), 1,
      sym_decimal_literal,
    ACTIONS(967), 1,
      anon_sym_LPAREN,
    STATE(349), 1,
      sym_init_cond_definition,
    STATE(165), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10503] = 7,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    ACTIONS(971), 1,
      sym_object_name,
    STATE(677), 1,
      sym_constant,
    STATE(686), 1,
      sym_init_cond_list,
    STATE(688), 1,
      sym_init_cond_hash_item,
    ACTIONS(372), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    ACTIONS(370), 5,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10531] = 6,
    ACTIONS(973), 1,
      anon_sym_STAR,
    ACTIONS(975), 1,
      sym_object_name,
    STATE(1332), 1,
      sym_function_args,
    STATE(717), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(372), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    ACTIONS(370), 5,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10557] = 5,
    ACTIONS(975), 1,
      sym_object_name,
    STATE(985), 1,
      sym_function_args,
    STATE(717), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(372), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    ACTIONS(370), 5,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10580] = 4,
    ACTIONS(372), 1,
      sym_decimal_literal,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    STATE(819), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10600] = 4,
    ACTIONS(977), 1,
      sym_object_name,
    STATE(74), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(372), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    ACTIONS(370), 5,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10620] = 7,
    ACTIONS(979), 1,
      anon_sym_DOT,
    ACTIONS(981), 1,
      aux_sym_drop_index_token1,
    ACTIONS(983), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(985), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(987), 1,
      aux_sym_alter_table_rename_token1,
    STATE(271), 1,
      sym_alter_table_operation,
    STATE(272), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10646] = 5,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      sym_decimal_literal,
    STATE(66), 1,
      sym_assignment_tuple,
    STATE(563), 1,
      sym_constant,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10668] = 4,
    ACTIONS(991), 1,
      aux_sym_priviledge_token1,
    ACTIONS(993), 1,
      aux_sym_resource_token4,
    STATE(180), 1,
      sym_priviledge,
    ACTIONS(989), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10688] = 11,
    ACTIONS(995), 1,
      aux_sym_truncate_token2,
    ACTIONS(997), 1,
      aux_sym_create_index_token2,
    ACTIONS(999), 1,
      aux_sym_resource_token2,
    ACTIONS(1001), 1,
      aux_sym_resource_token5,
    ACTIONS(1003), 1,
      aux_sym_resource_token6,
    ACTIONS(1005), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(1007), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1009), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(1011), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1013), 1,
      aux_sym_drop_user_token1,
    ACTIONS(1015), 1,
      aux_sym_create_aggregate_token1,
  [10722] = 4,
    ACTIONS(1017), 1,
      sym_object_name,
    STATE(739), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(372), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    ACTIONS(370), 5,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10742] = 10,
    ACTIONS(1019), 1,
      aux_sym_truncate_token2,
    ACTIONS(1021), 1,
      aux_sym_create_index_token2,
    ACTIONS(1023), 1,
      aux_sym_resource_token2,
    ACTIONS(1025), 1,
      aux_sym_resource_token5,
    ACTIONS(1027), 1,
      aux_sym_resource_token6,
    ACTIONS(1029), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(1031), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1033), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(1035), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1037), 1,
      aux_sym_drop_user_token1,
  [10773] = 3,
    ACTIONS(991), 1,
      aux_sym_priviledge_token1,
    STATE(1404), 1,
      sym_priviledge,
    ACTIONS(989), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10790] = 6,
    ACTIONS(1039), 1,
      anon_sym_DOT,
    ACTIONS(1041), 1,
      anon_sym_LPAREN,
    ACTIONS(1047), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1049), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(1043), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1045), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10813] = 4,
    ACTIONS(372), 1,
      sym_decimal_literal,
    ACTIONS(1051), 1,
      aux_sym_relation_contains_key_token2,
    STATE(76), 1,
      sym_constant,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10832] = 3,
    ACTIONS(991), 1,
      aux_sym_priviledge_token1,
    STATE(1402), 1,
      sym_priviledge,
    ACTIONS(989), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10849] = 6,
    ACTIONS(981), 1,
      aux_sym_drop_index_token1,
    ACTIONS(983), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(985), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(987), 1,
      aux_sym_alter_table_rename_token1,
    STATE(267), 1,
      sym_alter_table_operation,
    STATE(272), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10872] = 4,
    ACTIONS(372), 1,
      sym_decimal_literal,
    ACTIONS(1053), 1,
      anon_sym_RBRACE,
    STATE(533), 1,
      sym_constant,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10891] = 3,
    ACTIONS(372), 1,
      sym_decimal_literal,
    STATE(563), 1,
      sym_constant,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10907] = 3,
    ACTIONS(372), 1,
      sym_decimal_literal,
    STATE(83), 1,
      sym_constant,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10923] = 3,
    ACTIONS(372), 1,
      sym_decimal_literal,
    STATE(77), 1,
      sym_constant,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10939] = 3,
    ACTIONS(372), 1,
      sym_decimal_literal,
    STATE(816), 1,
      sym_constant,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10955] = 3,
    ACTIONS(372), 1,
      sym_decimal_literal,
    STATE(86), 1,
      sym_constant,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10971] = 3,
    ACTIONS(372), 1,
      sym_decimal_literal,
    STATE(621), 1,
      sym_constant,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10987] = 3,
    ACTIONS(372), 1,
      sym_decimal_literal,
    STATE(215), 1,
      sym_constant,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11003] = 3,
    ACTIONS(372), 1,
      sym_decimal_literal,
    STATE(1036), 1,
      sym_constant,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11019] = 3,
    ACTIONS(372), 1,
      sym_decimal_literal,
    STATE(579), 1,
      sym_constant,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11035] = 3,
    ACTIONS(372), 1,
      sym_decimal_literal,
    STATE(677), 1,
      sym_constant,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11051] = 3,
    ACTIONS(372), 1,
      sym_decimal_literal,
    STATE(157), 1,
      sym_constant,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11067] = 3,
    ACTIONS(372), 1,
      sym_decimal_literal,
    STATE(727), 1,
      sym_constant,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11083] = 3,
    ACTIONS(372), 1,
      sym_decimal_literal,
    STATE(491), 1,
      sym_constant,
    ACTIONS(370), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11099] = 6,
    ACTIONS(1055), 1,
      anon_sym_DOT,
    ACTIONS(1057), 1,
      aux_sym_priviledge_token3,
    ACTIONS(1059), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1061), 1,
      aux_sym_alter_table_rename_token1,
    STATE(280), 1,
      sym_alter_type_operation,
    STATE(281), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [11120] = 6,
    ACTIONS(1063), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1065), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1067), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1069), 1,
      sym_object_name,
    STATE(890), 1,
      sym_index_column_spec,
    STATE(1064), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11141] = 6,
    ACTIONS(1063), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1065), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1067), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1069), 1,
      sym_object_name,
    STATE(1066), 1,
      sym_index_column_spec,
    STATE(1064), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11162] = 6,
    ACTIONS(1063), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1065), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1067), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1069), 1,
      sym_object_name,
    STATE(968), 1,
      sym_index_column_spec,
    STATE(1064), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11183] = 6,
    ACTIONS(1063), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1065), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1067), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1069), 1,
      sym_object_name,
    STATE(973), 1,
      sym_index_column_spec,
    STATE(1064), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11204] = 7,
    ACTIONS(165), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(167), 1,
      sym_object_name,
    STATE(148), 1,
      sym_table_option_item,
    STATE(213), 1,
      sym_table_options,
    STATE(293), 1,
      sym_materialized_view_options,
    STATE(386), 1,
      sym_clustering_order,
    STATE(1096), 1,
      sym_table_option_name,
  [11226] = 7,
    ACTIONS(165), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(167), 1,
      sym_object_name,
    STATE(148), 1,
      sym_table_option_item,
    STATE(213), 1,
      sym_table_options,
    STATE(302), 1,
      sym_materialized_view_options,
    STATE(386), 1,
      sym_clustering_order,
    STATE(1096), 1,
      sym_table_option_name,
  [11248] = 7,
    ACTIONS(1071), 1,
      aux_sym_select_statement_token2,
    ACTIONS(1073), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1075), 1,
      anon_sym_STAR,
    ACTIONS(1077), 1,
      sym_object_name,
    STATE(647), 1,
      sym_select_element,
    STATE(683), 1,
      sym_function_call,
    STATE(791), 1,
      sym_select_elements,
  [11270] = 3,
    ACTIONS(1083), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1079), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1081), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11284] = 7,
    ACTIONS(1085), 1,
      aux_sym_truncate_token2,
    ACTIONS(1087), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1089), 1,
      aux_sym_resource_token2,
    ACTIONS(1091), 1,
      aux_sym_resource_token5,
    ACTIONS(1093), 1,
      aux_sym_resource_token6,
    ACTIONS(1095), 1,
      sym_object_name,
    STATE(1215), 1,
      sym_resource,
  [11306] = 7,
    ACTIONS(1085), 1,
      aux_sym_truncate_token2,
    ACTIONS(1087), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1089), 1,
      aux_sym_resource_token2,
    ACTIONS(1091), 1,
      aux_sym_resource_token5,
    ACTIONS(1093), 1,
      aux_sym_resource_token6,
    ACTIONS(1095), 1,
      sym_object_name,
    STATE(1218), 1,
      sym_resource,
  [11328] = 7,
    ACTIONS(165), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(167), 1,
      sym_object_name,
    STATE(148), 1,
      sym_table_option_item,
    STATE(213), 1,
      sym_table_options,
    STATE(386), 1,
      sym_clustering_order,
    STATE(427), 1,
      sym_materialized_view_options,
    STATE(1096), 1,
      sym_table_option_name,
  [11350] = 3,
    ACTIONS(1101), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1097), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1099), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11364] = 7,
    ACTIONS(165), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(167), 1,
      sym_object_name,
    STATE(148), 1,
      sym_table_option_item,
    STATE(213), 1,
      sym_table_options,
    STATE(374), 1,
      sym_materialized_view_options,
    STATE(386), 1,
      sym_clustering_order,
    STATE(1096), 1,
      sym_table_option_name,
  [11386] = 7,
    ACTIONS(165), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(167), 1,
      sym_object_name,
    STATE(148), 1,
      sym_table_option_item,
    STATE(213), 1,
      sym_table_options,
    STATE(343), 1,
      sym_materialized_view_options,
    STATE(386), 1,
      sym_clustering_order,
    STATE(1096), 1,
      sym_table_option_name,
  [11408] = 6,
    ACTIONS(1103), 1,
      anon_sym_LPAREN,
    ACTIONS(1105), 1,
      sym_object_name,
    STATE(82), 1,
      sym_relation_element,
    STATE(99), 1,
      sym_relation_elements,
    STATE(492), 1,
      sym_function_call,
    STATE(87), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11428] = 7,
    ACTIONS(165), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(167), 1,
      sym_object_name,
    STATE(148), 1,
      sym_table_option_item,
    STATE(213), 1,
      sym_table_options,
    STATE(386), 1,
      sym_clustering_order,
    STATE(406), 1,
      sym_materialized_view_options,
    STATE(1096), 1,
      sym_table_option_name,
  [11450] = 7,
    ACTIONS(1085), 1,
      aux_sym_truncate_token2,
    ACTIONS(1087), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1089), 1,
      aux_sym_resource_token2,
    ACTIONS(1091), 1,
      aux_sym_resource_token5,
    ACTIONS(1093), 1,
      aux_sym_resource_token6,
    ACTIONS(1095), 1,
      sym_object_name,
    STATE(252), 1,
      sym_resource,
  [11472] = 5,
    ACTIONS(1057), 1,
      aux_sym_priviledge_token3,
    ACTIONS(1059), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1061), 1,
      aux_sym_alter_table_rename_token1,
    STATE(287), 1,
      sym_alter_type_operation,
    STATE(281), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [11490] = 7,
    ACTIONS(165), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(167), 1,
      sym_object_name,
    STATE(148), 1,
      sym_table_option_item,
    STATE(213), 1,
      sym_table_options,
    STATE(270), 1,
      sym_materialized_view_options,
    STATE(386), 1,
      sym_clustering_order,
    STATE(1096), 1,
      sym_table_option_name,
  [11512] = 7,
    ACTIONS(165), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(167), 1,
      sym_object_name,
    STATE(148), 1,
      sym_table_option_item,
    STATE(213), 1,
      sym_table_options,
    STATE(336), 1,
      sym_materialized_view_options,
    STATE(386), 1,
      sym_clustering_order,
    STATE(1096), 1,
      sym_table_option_name,
  [11534] = 6,
    ACTIONS(1107), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1109), 1,
      anon_sym_DOT,
    ACTIONS(1111), 1,
      anon_sym_LPAREN,
    ACTIONS(1113), 1,
      aux_sym_insert_values_spec_token1,
    STATE(125), 1,
      sym_insert_values_spec,
    STATE(603), 1,
      sym_insert_column_spec,
  [11553] = 6,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
    ACTIONS(1117), 1,
      anon_sym_RPAREN,
    STATE(698), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(702), 1,
      aux_sym_relation_element_repeat2,
    STATE(703), 1,
      sym_assignment_tuple,
  [11572] = 2,
    ACTIONS(1119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1121), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11583] = 4,
    ACTIONS(374), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    ACTIONS(1123), 1,
      sym_decimal_literal,
    STATE(833), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [11598] = 6,
    ACTIONS(1075), 1,
      anon_sym_STAR,
    ACTIONS(1077), 1,
      sym_object_name,
    ACTIONS(1125), 1,
      aux_sym_select_statement_token3,
    STATE(647), 1,
      sym_select_element,
    STATE(683), 1,
      sym_function_call,
    STATE(722), 1,
      sym_select_elements,
  [11617] = 2,
    ACTIONS(1127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1129), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11628] = 6,
    ACTIONS(1107), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1111), 1,
      anon_sym_LPAREN,
    ACTIONS(1113), 1,
      aux_sym_insert_values_spec_token1,
    ACTIONS(1131), 1,
      anon_sym_DOT,
    STATE(129), 1,
      sym_insert_values_spec,
    STATE(721), 1,
      sym_insert_column_spec,
  [11647] = 5,
    ACTIONS(1103), 1,
      anon_sym_LPAREN,
    ACTIONS(1105), 1,
      sym_object_name,
    STATE(88), 1,
      sym_relation_element,
    STATE(492), 1,
      sym_function_call,
    STATE(87), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11664] = 5,
    ACTIONS(1103), 1,
      anon_sym_LPAREN,
    ACTIONS(1105), 1,
      sym_object_name,
    STATE(492), 1,
      sym_function_call,
    STATE(1181), 1,
      sym_relation_element,
    STATE(87), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11681] = 6,
    ACTIONS(1133), 1,
      aux_sym_truncate_token2,
    ACTIONS(1135), 1,
      aux_sym_resource_token2,
    ACTIONS(1137), 1,
      aux_sym_resource_token6,
    ACTIONS(1139), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1141), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1143), 1,
      aux_sym_drop_user_token1,
  [11700] = 1,
    ACTIONS(1145), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11708] = 1,
    ACTIONS(1147), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11716] = 1,
    ACTIONS(1149), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11724] = 5,
    ACTIONS(1107), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1111), 1,
      anon_sym_LPAREN,
    ACTIONS(1113), 1,
      aux_sym_insert_values_spec_token1,
    STATE(124), 1,
      sym_insert_values_spec,
    STATE(716), 1,
      sym_insert_column_spec,
  [11740] = 4,
    ACTIONS(1151), 1,
      anon_sym_LPAREN,
    ACTIONS(1153), 1,
      sym_object_name,
    STATE(970), 1,
      sym_primary_key_definition,
    STATE(971), 2,
      sym_compound_key,
      sym_composite_key,
  [11754] = 5,
    ACTIONS(1155), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1157), 1,
      sym_object_name,
    STATE(573), 1,
      sym_from_spec,
    STATE(615), 1,
      sym_delete_column_item,
    STATE(745), 1,
      sym_delete_column_list,
  [11770] = 4,
    ACTIONS(1041), 1,
      anon_sym_LPAREN,
    ACTIONS(1161), 1,
      anon_sym_DOT,
    ACTIONS(1163), 1,
      aux_sym_select_element_token1,
    ACTIONS(1159), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11784] = 5,
    ACTIONS(1165), 1,
      sym__string_literal,
    ACTIONS(1167), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1169), 1,
      aux_sym_create_index_token3,
    ACTIONS(1171), 1,
      sym_object_name,
    STATE(1380), 1,
      sym_index_name,
  [11800] = 3,
    ACTIONS(1175), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(614), 1,
      sym_using_timestamp_spec,
    ACTIONS(1173), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11812] = 1,
    ACTIONS(1177), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11820] = 5,
    ACTIONS(1075), 1,
      anon_sym_STAR,
    ACTIONS(1179), 1,
      sym_object_name,
    STATE(647), 1,
      sym_select_element,
    STATE(683), 1,
      sym_function_call,
    STATE(722), 1,
      sym_select_elements,
  [11836] = 3,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    STATE(511), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(1184), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11848] = 5,
    ACTIONS(1107), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1111), 1,
      anon_sym_LPAREN,
    ACTIONS(1113), 1,
      aux_sym_insert_values_spec_token1,
    STATE(105), 1,
      sym_insert_values_spec,
    STATE(705), 1,
      sym_insert_column_spec,
  [11864] = 4,
    ACTIONS(1186), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1190), 1,
      aux_sym_role_with_options_token4,
    STATE(220), 1,
      sym_role_with_options,
    ACTIONS(1188), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11878] = 1,
    ACTIONS(1192), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11886] = 5,
    ACTIONS(1075), 1,
      anon_sym_STAR,
    ACTIONS(1179), 1,
      sym_object_name,
    STATE(647), 1,
      sym_select_element,
    STATE(683), 1,
      sym_function_call,
    STATE(729), 1,
      sym_select_elements,
  [11902] = 3,
    ACTIONS(1175), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(671), 1,
      sym_using_timestamp_spec,
    ACTIONS(1194), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11914] = 3,
    ACTIONS(1196), 1,
      anon_sym_LPAREN,
    ACTIONS(1198), 2,
      sym__string_literal,
      sym_float_literal,
    STATE(170), 2,
      sym_option_hash,
      sym_table_option_value,
  [11926] = 5,
    ACTIONS(1155), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1157), 1,
      sym_object_name,
    STATE(526), 1,
      sym_from_spec,
    STATE(615), 1,
      sym_delete_column_item,
    STATE(749), 1,
      sym_delete_column_list,
  [11942] = 4,
    ACTIONS(1186), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1190), 1,
      aux_sym_role_with_options_token4,
    STATE(162), 1,
      sym_role_with_options,
    ACTIONS(1188), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11956] = 1,
    ACTIONS(1200), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11964] = 1,
    ACTIONS(1202), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11972] = 4,
    ACTIONS(1204), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(1206), 1,
      sym_object_name,
    STATE(142), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11985] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      sym_where_spec,
    STATE(569), 1,
      aux_sym_update_repeat1,
  [11998] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      sym_where_spec,
    STATE(561), 1,
      aux_sym_update_repeat1,
  [12011] = 4,
    ACTIONS(1206), 1,
      sym_object_name,
    ACTIONS(1210), 1,
      aux_sym_delete_statement_token3,
    STATE(142), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12024] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1175), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(189), 1,
      sym_where_spec,
    STATE(810), 1,
      sym_using_timestamp_spec,
  [12037] = 4,
    ACTIONS(1212), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1214), 1,
      sym_object_name,
    STATE(803), 1,
      sym_column_definition,
    STATE(904), 1,
      sym_primary_key_element,
  [12050] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      sym_where_spec,
    STATE(542), 1,
      aux_sym_update_repeat1,
  [12063] = 4,
    ACTIONS(1206), 1,
      sym_object_name,
    ACTIONS(1216), 1,
      aux_sym_delete_statement_token3,
    STATE(142), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12076] = 4,
    ACTIONS(1206), 1,
      sym_object_name,
    ACTIONS(1218), 1,
      aux_sym_delete_statement_token3,
    STATE(142), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12089] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      sym_where_spec,
    STATE(586), 1,
      aux_sym_update_repeat1,
  [12102] = 4,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1220), 1,
      anon_sym_DOT,
    ACTIONS(1222), 1,
      aux_sym_update_token2,
    STATE(1190), 1,
      sym_using_ttl_timestamp,
  [12115] = 4,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(1226), 1,
      anon_sym_COLON,
    ACTIONS(1228), 1,
      anon_sym_RBRACE,
    STATE(692), 1,
      aux_sym_assignment_tuple_repeat1,
  [12128] = 3,
    ACTIONS(1230), 1,
      anon_sym_RPAREN,
    STATE(1154), 1,
      sym_order_direction,
    ACTIONS(187), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [12139] = 4,
    ACTIONS(1206), 1,
      sym_object_name,
    ACTIONS(1232), 1,
      aux_sym_delete_statement_token3,
    STATE(142), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12152] = 4,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1234), 1,
      anon_sym_DOT,
    ACTIONS(1236), 1,
      aux_sym_update_token2,
    STATE(1343), 1,
      sym_using_ttl_timestamp,
  [12165] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      sym_where_spec,
    STATE(551), 1,
      aux_sym_update_repeat1,
  [12178] = 4,
    ACTIONS(1206), 1,
      sym_object_name,
    ACTIONS(1238), 1,
      aux_sym_delete_statement_token3,
    STATE(142), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12191] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      sym_where_spec,
    STATE(586), 1,
      aux_sym_update_repeat1,
  [12204] = 4,
    ACTIONS(1206), 1,
      sym_object_name,
    ACTIONS(1240), 1,
      aux_sym_delete_statement_token3,
    STATE(142), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12217] = 3,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    STATE(571), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(1242), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [12228] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      sym_where_spec,
    STATE(586), 1,
      aux_sym_update_repeat1,
  [12241] = 1,
    ACTIONS(1244), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12248] = 4,
    ACTIONS(1206), 1,
      sym_object_name,
    ACTIONS(1246), 1,
      aux_sym_delete_statement_token3,
    STATE(142), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12261] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      sym_where_spec,
    STATE(562), 1,
      aux_sym_update_repeat1,
  [12274] = 4,
    ACTIONS(1206), 1,
      sym_object_name,
    ACTIONS(1248), 1,
      aux_sym_delete_statement_token3,
    STATE(142), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12287] = 4,
    ACTIONS(1250), 1,
      sym_object_name,
    STATE(126), 1,
      sym_table_option_item,
    STATE(300), 1,
      sym_table_options,
    STATE(1096), 1,
      sym_table_option_name,
  [12300] = 4,
    ACTIONS(1206), 1,
      sym_object_name,
    ACTIONS(1252), 1,
      aux_sym_delete_statement_token3,
    STATE(142), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12313] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      sym_where_spec,
    STATE(586), 1,
      aux_sym_update_repeat1,
  [12326] = 4,
    ACTIONS(1206), 1,
      sym_object_name,
    ACTIONS(1254), 1,
      aux_sym_delete_statement_token3,
    STATE(142), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12339] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      sym_where_spec,
    STATE(586), 1,
      aux_sym_update_repeat1,
  [12352] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      sym_where_spec,
    STATE(539), 1,
      aux_sym_update_repeat1,
  [12365] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1175), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(143), 1,
      sym_where_spec,
    STATE(726), 1,
      sym_using_timestamp_spec,
  [12378] = 2,
    ACTIONS(1256), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1258), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12387] = 4,
    ACTIONS(1041), 1,
      anon_sym_LPAREN,
    ACTIONS(1260), 1,
      anon_sym_COMMA,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    STATE(595), 1,
      aux_sym_function_args_repeat1,
  [12400] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      sym_where_spec,
    STATE(549), 1,
      aux_sym_update_repeat1,
  [12413] = 4,
    ACTIONS(1206), 1,
      sym_object_name,
    ACTIONS(1264), 1,
      aux_sym_delete_statement_token3,
    STATE(142), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12426] = 4,
    ACTIONS(1250), 1,
      sym_object_name,
    STATE(126), 1,
      sym_table_option_item,
    STATE(288), 1,
      sym_table_options,
    STATE(1096), 1,
      sym_table_option_name,
  [12439] = 4,
    ACTIONS(1266), 1,
      aux_sym_timestamp_token1,
    ACTIONS(1268), 1,
      aux_sym_ttl_token1,
    STATE(139), 1,
      sym_ttl,
    STATE(140), 1,
      sym_timestamp,
  [12452] = 4,
    ACTIONS(1165), 1,
      sym__string_literal,
    ACTIONS(1171), 1,
      sym_object_name,
    ACTIONS(1270), 1,
      aux_sym_create_index_token3,
    STATE(1075), 1,
      sym_index_name,
  [12465] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      sym_where_spec,
    STATE(586), 1,
      aux_sym_update_repeat1,
  [12478] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      sym_where_spec,
    STATE(586), 1,
      aux_sym_update_repeat1,
  [12491] = 1,
    ACTIONS(1184), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [12498] = 4,
    ACTIONS(1206), 1,
      sym_object_name,
    ACTIONS(1272), 1,
      aux_sym_delete_statement_token3,
    STATE(142), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12511] = 4,
    ACTIONS(1206), 1,
      sym_object_name,
    ACTIONS(1274), 1,
      aux_sym_delete_statement_token3,
    STATE(142), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12524] = 4,
    ACTIONS(1212), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1214), 1,
      sym_object_name,
    STATE(803), 1,
      sym_column_definition,
    STATE(976), 1,
      sym_primary_key_element,
  [12537] = 4,
    ACTIONS(1250), 1,
      sym_object_name,
    STATE(126), 1,
      sym_table_option_item,
    STATE(416), 1,
      sym_table_options,
    STATE(1096), 1,
      sym_table_option_name,
  [12550] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_materialized_view_token1,
    STATE(808), 1,
      sym_primary_key_column,
    ACTIONS(1276), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12561] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      sym_where_spec,
    STATE(586), 1,
      aux_sym_update_repeat1,
  [12574] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      sym_where_spec,
    STATE(531), 1,
      aux_sym_update_repeat1,
  [12587] = 3,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(1280), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [12598] = 4,
    ACTIONS(1206), 1,
      sym_object_name,
    ACTIONS(1282), 1,
      aux_sym_delete_statement_token3,
    STATE(142), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12611] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1175), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(174), 1,
      sym_where_spec,
    STATE(734), 1,
      sym_using_timestamp_spec,
  [12624] = 4,
    ACTIONS(1206), 1,
      sym_object_name,
    ACTIONS(1284), 1,
      aux_sym_delete_statement_token3,
    STATE(142), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12637] = 3,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
    STATE(619), 1,
      aux_sym_create_type_repeat1,
  [12647] = 3,
    ACTIONS(1290), 1,
      anon_sym_COMMA,
    ACTIONS(1293), 1,
      aux_sym_from_spec_token1,
    STATE(576), 1,
      aux_sym_select_elements_repeat1,
  [12657] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1297), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_create_function_repeat1,
  [12667] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(1081), 1,
      sym_return_mode,
  [12677] = 3,
    ACTIONS(1303), 1,
      anon_sym_COMMA,
    ACTIONS(1305), 1,
      anon_sym_RBRACE,
    STATE(648), 1,
      aux_sym_assignment_map_repeat1,
  [12687] = 3,
    ACTIONS(1307), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    ACTIONS(1309), 1,
      sym_object_name,
    STATE(414), 1,
      sym_alter_table_drop_column_list,
  [12697] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(1311), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [12707] = 2,
    ACTIONS(1315), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1313), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [12715] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
    STATE(704), 1,
      aux_sym_create_function_repeat1,
  [12725] = 3,
    ACTIONS(1319), 1,
      sym_object_name,
    STATE(178), 1,
      sym_alter_type_rename_item,
    STATE(424), 1,
      sym_alter_type_rename_list,
  [12735] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(1321), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      aux_sym_relation_element_repeat2,
  [12745] = 3,
    ACTIONS(1323), 1,
      anon_sym_COMMA,
    ACTIONS(1326), 1,
      aux_sym_where_spec_token1,
    STATE(586), 1,
      aux_sym_update_repeat1,
  [12755] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(1077), 1,
      sym_return_mode,
  [12765] = 3,
    ACTIONS(1328), 1,
      anon_sym_DOT,
    ACTIONS(1330), 1,
      aux_sym_where_spec_token1,
    STATE(1262), 1,
      sym_materialized_view_where,
  [12775] = 3,
    ACTIONS(1332), 1,
      anon_sym_COMMA,
    ACTIONS(1334), 1,
      anon_sym_RBRACE,
    STATE(632), 1,
      aux_sym_replication_list_repeat1,
  [12785] = 3,
    ACTIONS(1336), 1,
      anon_sym_COMMA,
    ACTIONS(1338), 1,
      anon_sym_RPAREN,
    STATE(598), 1,
      aux_sym_init_cond_hash_repeat1,
  [12795] = 3,
    ACTIONS(1250), 1,
      sym_object_name,
    STATE(172), 1,
      sym_table_option_item,
    STATE(1096), 1,
      sym_table_option_name,
  [12805] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1340), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_create_function_repeat1,
  [12815] = 3,
    ACTIONS(1342), 1,
      sym_object_name,
    STATE(604), 1,
      sym_column_definition,
    STATE(1168), 1,
      sym_column_definition_list,
  [12825] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(1230), 1,
      sym_return_mode,
  [12835] = 3,
    ACTIONS(1260), 1,
      anon_sym_COMMA,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
    STATE(711), 1,
      aux_sym_function_args_repeat1,
  [12845] = 3,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1346), 1,
      aux_sym_update_token2,
    STATE(1043), 1,
      sym_using_ttl_timestamp,
  [12855] = 3,
    ACTIONS(1348), 1,
      sym_object_name,
    STATE(693), 1,
      sym_column_not_null,
    STATE(760), 1,
      sym_column_not_null_list,
  [12865] = 3,
    ACTIONS(1350), 1,
      anon_sym_COMMA,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
    STATE(598), 1,
      aux_sym_init_cond_hash_repeat1,
  [12875] = 3,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
    STATE(709), 1,
      aux_sym_relation_element_repeat1,
  [12885] = 3,
    ACTIONS(1359), 1,
      anon_sym_COMMA,
    ACTIONS(1362), 1,
      anon_sym_RPAREN,
    STATE(600), 1,
      aux_sym_option_hash_repeat1,
  [12895] = 3,
    ACTIONS(1364), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1367), 1,
      aux_sym_create_materialized_view_token1,
    STATE(601), 1,
      aux_sym_column_not_null_list_repeat1,
  [12905] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(1271), 1,
      sym_return_mode,
  [12915] = 3,
    ACTIONS(1107), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1113), 1,
      aux_sym_insert_values_spec_token1,
    STATE(107), 1,
      sym_insert_values_spec,
  [12925] = 3,
    ACTIONS(1369), 1,
      anon_sym_COMMA,
    ACTIONS(1371), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      aux_sym_column_definition_list_repeat1,
  [12935] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1373), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_create_function_repeat1,
  [12945] = 3,
    ACTIONS(1375), 1,
      sym__string_literal,
    ACTIONS(1377), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1379), 1,
      sym_object_name,
  [12955] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(982), 1,
      sym_return_mode,
  [12965] = 3,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    ACTIONS(1381), 1,
      anon_sym_RPAREN,
    STATE(611), 1,
      aux_sym_relation_element_repeat1,
  [12975] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1383), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_create_function_repeat1,
  [12985] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(927), 1,
      sym_return_mode,
  [12995] = 3,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1388), 1,
      anon_sym_RPAREN,
    STATE(611), 1,
      aux_sym_relation_element_repeat1,
  [13005] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(1054), 1,
      sym_return_mode,
  [13015] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(986), 1,
      sym_return_mode,
  [13025] = 1,
    ACTIONS(1390), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13031] = 3,
    ACTIONS(1392), 1,
      anon_sym_COMMA,
    ACTIONS(1394), 1,
      aux_sym_from_spec_token1,
    STATE(714), 1,
      aux_sym_delete_column_list_repeat1,
  [13041] = 3,
    ACTIONS(1396), 1,
      anon_sym_RPAREN,
    ACTIONS(1398), 1,
      sym_object_name,
    STATE(676), 1,
      sym_param,
  [13051] = 3,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    ACTIONS(1400), 1,
      anon_sym_RPAREN,
    STATE(712), 1,
      aux_sym_relation_element_repeat1,
  [13061] = 3,
    ACTIONS(1402), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1404), 1,
      sym_object_name,
    STATE(1368), 1,
      sym_trigger_name,
  [13071] = 3,
    ACTIONS(1406), 1,
      anon_sym_COMMA,
    ACTIONS(1409), 1,
      anon_sym_RPAREN,
    STATE(619), 1,
      aux_sym_create_type_repeat1,
  [13081] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(1050), 1,
      sym_return_mode,
  [13091] = 3,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(1411), 1,
      anon_sym_RBRACK,
    STATE(695), 1,
      aux_sym_assignment_tuple_repeat1,
  [13101] = 3,
    ACTIONS(1413), 1,
      anon_sym_COMMA,
    ACTIONS(1415), 1,
      anon_sym_RPAREN,
    STATE(681), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13111] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1417), 1,
      anon_sym_RPAREN,
    STATE(669), 1,
      aux_sym_create_function_repeat1,
  [13121] = 3,
    ACTIONS(1419), 1,
      anon_sym_COMMA,
    ACTIONS(1422), 1,
      aux_sym_from_spec_token1,
    STATE(624), 1,
      aux_sym_delete_column_list_repeat1,
  [13131] = 3,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1424), 1,
      anon_sym_RPAREN,
    STATE(667), 1,
      aux_sym_create_type_repeat1,
  [13141] = 3,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    ACTIONS(1428), 1,
      anon_sym_RPAREN,
    STATE(691), 1,
      aux_sym_expression_list_repeat1,
  [13151] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1430), 1,
      anon_sym_RPAREN,
    STATE(679), 1,
      aux_sym_create_function_repeat1,
  [13161] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(1191), 1,
      sym_return_mode,
  [13171] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(1049), 1,
      sym_return_mode,
  [13181] = 3,
    ACTIONS(1342), 1,
      sym_object_name,
    STATE(604), 1,
      sym_column_definition,
    STATE(930), 1,
      sym_column_definition_list,
  [13191] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1432), 1,
      anon_sym_RPAREN,
    STATE(592), 1,
      aux_sym_create_function_repeat1,
  [13201] = 3,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    ACTIONS(1437), 1,
      anon_sym_RBRACE,
    STATE(632), 1,
      aux_sym_replication_list_repeat1,
  [13211] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(1186), 1,
      sym_return_mode,
  [13221] = 3,
    ACTIONS(1398), 1,
      sym_object_name,
    ACTIONS(1439), 1,
      anon_sym_RPAREN,
    STATE(627), 1,
      sym_param,
  [13231] = 3,
    ACTIONS(1398), 1,
      sym_object_name,
    ACTIONS(1441), 1,
      anon_sym_RPAREN,
    STATE(685), 1,
      sym_param,
  [13241] = 3,
    ACTIONS(1443), 1,
      anon_sym_COMMA,
    ACTIONS(1445), 1,
      anon_sym_GT,
    STATE(656), 1,
      aux_sym_data_type_definition_repeat1,
  [13251] = 3,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1447), 1,
      anon_sym_RPAREN,
    STATE(619), 1,
      aux_sym_create_type_repeat1,
  [13261] = 3,
    ACTIONS(1449), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1451), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1453), 1,
      aux_sym_update_token1,
  [13271] = 3,
    ACTIONS(1398), 1,
      sym_object_name,
    ACTIONS(1455), 1,
      anon_sym_RPAREN,
    STATE(623), 1,
      sym_param,
  [13281] = 3,
    ACTIONS(1457), 1,
      anon_sym_COMMA,
    ACTIONS(1460), 1,
      anon_sym_RPAREN,
    STATE(640), 1,
      aux_sym_column_definition_list_repeat1,
  [13291] = 3,
    ACTIONS(1462), 1,
      sym__string_literal,
    STATE(663), 1,
      sym_replication_list_item,
    STATE(1046), 1,
      sym_replication_list,
  [13301] = 3,
    ACTIONS(1464), 1,
      anon_sym_COMMA,
    ACTIONS(1466), 1,
      anon_sym_RPAREN,
    STATE(644), 1,
      aux_sym_option_hash_repeat1,
  [13311] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(1468), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [13321] = 3,
    ACTIONS(1464), 1,
      anon_sym_COMMA,
    ACTIONS(1470), 1,
      anon_sym_RPAREN,
    STATE(600), 1,
      aux_sym_option_hash_repeat1,
  [13331] = 2,
    STATE(601), 1,
      aux_sym_column_not_null_list_repeat1,
    ACTIONS(1472), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13339] = 3,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1474), 1,
      anon_sym_RPAREN,
    STATE(680), 1,
      aux_sym_create_type_repeat1,
  [13349] = 3,
    ACTIONS(1476), 1,
      anon_sym_COMMA,
    ACTIONS(1478), 1,
      aux_sym_from_spec_token1,
    STATE(715), 1,
      aux_sym_select_elements_repeat1,
  [13359] = 3,
    ACTIONS(1303), 1,
      anon_sym_COMMA,
    ACTIONS(1480), 1,
      anon_sym_RBRACE,
    STATE(654), 1,
      aux_sym_assignment_map_repeat1,
  [13369] = 3,
    ACTIONS(1462), 1,
      sym__string_literal,
    STATE(663), 1,
      sym_replication_list_item,
    STATE(917), 1,
      sym_replication_list,
  [13379] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1482), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_create_function_repeat1,
  [13389] = 3,
    ACTIONS(1398), 1,
      sym_object_name,
    ACTIONS(1484), 1,
      anon_sym_RPAREN,
    STATE(657), 1,
      sym_param,
  [13399] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(913), 1,
      sym_return_mode,
  [13409] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1486), 1,
      anon_sym_RPAREN,
    STATE(650), 1,
      aux_sym_create_function_repeat1,
  [13419] = 3,
    ACTIONS(1488), 1,
      anon_sym_COMMA,
    ACTIONS(1491), 1,
      anon_sym_RBRACE,
    STATE(654), 1,
      aux_sym_assignment_map_repeat1,
  [13429] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(896), 1,
      sym_return_mode,
  [13439] = 3,
    ACTIONS(1493), 1,
      anon_sym_COMMA,
    ACTIONS(1496), 1,
      anon_sym_GT,
    STATE(656), 1,
      aux_sym_data_type_definition_repeat1,
  [13449] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1498), 1,
      anon_sym_RPAREN,
    STATE(605), 1,
      aux_sym_create_function_repeat1,
  [13459] = 3,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(1500), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      aux_sym_assignment_tuple_repeat1,
  [13469] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(908), 1,
      sym_return_mode,
  [13479] = 3,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
    ACTIONS(1505), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_create_function_repeat1,
  [13489] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(895), 1,
      sym_return_mode,
  [13499] = 3,
    ACTIONS(1330), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1507), 1,
      anon_sym_DOT,
    STATE(1004), 1,
      sym_materialized_view_where,
  [13509] = 3,
    ACTIONS(1332), 1,
      anon_sym_COMMA,
    ACTIONS(1509), 1,
      anon_sym_RBRACE,
    STATE(589), 1,
      aux_sym_replication_list_repeat1,
  [13519] = 3,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1511), 1,
      anon_sym_RPAREN,
    STATE(575), 1,
      aux_sym_create_type_repeat1,
  [13529] = 3,
    ACTIONS(1330), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1513), 1,
      anon_sym_DOT,
    STATE(1176), 1,
      sym_materialized_view_where,
  [13539] = 3,
    ACTIONS(1342), 1,
      sym_object_name,
    STATE(604), 1,
      sym_column_definition,
    STATE(965), 1,
      sym_column_definition_list,
  [13549] = 3,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1515), 1,
      anon_sym_RPAREN,
    STATE(619), 1,
      aux_sym_create_type_repeat1,
  [13559] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(1517), 1,
      anon_sym_RPAREN,
    STATE(643), 1,
      aux_sym_relation_element_repeat2,
  [13569] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1519), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_create_function_repeat1,
  [13579] = 3,
    ACTIONS(1443), 1,
      anon_sym_COMMA,
    ACTIONS(1521), 1,
      anon_sym_GT,
    STATE(636), 1,
      aux_sym_data_type_definition_repeat1,
  [13589] = 1,
    ACTIONS(1173), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13595] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(1517), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [13605] = 3,
    ACTIONS(1398), 1,
      sym_object_name,
    ACTIONS(1523), 1,
      anon_sym_RPAREN,
    STATE(583), 1,
      sym_param,
  [13615] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(1012), 1,
      sym_return_mode,
  [13625] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(961), 1,
      sym_return_mode,
  [13635] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1525), 1,
      anon_sym_RPAREN,
    STATE(577), 1,
      aux_sym_create_function_repeat1,
  [13645] = 3,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(1527), 1,
      anon_sym_RPAREN,
    STATE(658), 1,
      aux_sym_assignment_tuple_repeat1,
  [13655] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(1108), 1,
      sym_return_mode,
  [13665] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1529), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_create_function_repeat1,
  [13675] = 3,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1531), 1,
      anon_sym_RPAREN,
    STATE(619), 1,
      aux_sym_create_type_repeat1,
  [13685] = 3,
    ACTIONS(1533), 1,
      anon_sym_COMMA,
    ACTIONS(1536), 1,
      anon_sym_RPAREN,
    STATE(681), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13695] = 3,
    ACTIONS(1398), 1,
      sym_object_name,
    ACTIONS(1538), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      sym_param,
  [13705] = 2,
    ACTIONS(1163), 1,
      aux_sym_select_element_token1,
    ACTIONS(1159), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13713] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(879), 1,
      sym_return_mode,
  [13723] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1540), 1,
      anon_sym_RPAREN,
    STATE(609), 1,
      aux_sym_create_function_repeat1,
  [13733] = 3,
    ACTIONS(1413), 1,
      anon_sym_COMMA,
    ACTIONS(1542), 1,
      anon_sym_RPAREN,
    STATE(622), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13743] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(1017), 1,
      sym_return_mode,
  [13753] = 3,
    ACTIONS(1336), 1,
      anon_sym_COMMA,
    ACTIONS(1544), 1,
      anon_sym_RPAREN,
    STATE(590), 1,
      aux_sym_init_cond_hash_repeat1,
  [13763] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(1161), 1,
      sym_return_mode,
  [13773] = 3,
    ACTIONS(1330), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1546), 1,
      anon_sym_DOT,
    STATE(1126), 1,
      sym_materialized_view_where,
  [13783] = 3,
    ACTIONS(1548), 1,
      anon_sym_COMMA,
    ACTIONS(1551), 1,
      anon_sym_RPAREN,
    STATE(691), 1,
      aux_sym_expression_list_repeat1,
  [13793] = 3,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(1553), 1,
      anon_sym_RBRACE,
    STATE(511), 1,
      aux_sym_assignment_tuple_repeat1,
  [13803] = 2,
    STATE(645), 1,
      aux_sym_column_not_null_list_repeat1,
    ACTIONS(1555), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13811] = 3,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1557), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_type_repeat1,
  [13821] = 3,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(1559), 1,
      anon_sym_RBRACK,
    STATE(511), 1,
      aux_sym_assignment_tuple_repeat1,
  [13831] = 3,
    ACTIONS(1561), 1,
      anon_sym_COMMA,
    ACTIONS(1563), 1,
      anon_sym_RPAREN,
    STATE(640), 1,
      aux_sym_column_definition_list_repeat1,
  [13841] = 3,
    ACTIONS(1342), 1,
      sym_object_name,
    STATE(604), 1,
      sym_column_definition,
    STATE(979), 1,
      sym_column_definition_list,
  [13851] = 3,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(1565), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      aux_sym_assignment_tuple_repeat1,
  [13861] = 3,
    ACTIONS(1398), 1,
      sym_object_name,
    ACTIONS(1567), 1,
      anon_sym_RPAREN,
    STATE(631), 1,
      sym_param,
  [13871] = 3,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    ACTIONS(1569), 1,
      anon_sym_RPAREN,
    STATE(626), 1,
      aux_sym_expression_list_repeat1,
  [13881] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(1138), 1,
      sym_return_mode,
  [13891] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(1565), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [13901] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(1565), 1,
      anon_sym_RPAREN,
    STATE(581), 1,
      aux_sym_relation_element_repeat2,
  [13911] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1571), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_create_function_repeat1,
  [13921] = 3,
    ACTIONS(1107), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1113), 1,
      aux_sym_insert_values_spec_token1,
    STATE(117), 1,
      sym_insert_values_spec,
  [13931] = 2,
    ACTIONS(1575), 1,
      anon_sym_LBRACK,
    ACTIONS(1573), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13939] = 2,
    ACTIONS(1577), 1,
      aux_sym_resource_token1,
    ACTIONS(1579), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [13947] = 3,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    ACTIONS(1581), 1,
      anon_sym_RPAREN,
    STATE(608), 1,
      aux_sym_relation_element_repeat1,
  [13957] = 3,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    ACTIONS(1583), 1,
      anon_sym_RPAREN,
    STATE(611), 1,
      aux_sym_relation_element_repeat1,
  [13967] = 3,
    ACTIONS(1299), 1,
      aux_sym_create_function_token1,
    ACTIONS(1301), 1,
      aux_sym_return_mode_token1,
    STATE(1142), 1,
      sym_return_mode,
  [13977] = 3,
    ACTIONS(1585), 1,
      anon_sym_COMMA,
    ACTIONS(1588), 1,
      anon_sym_RPAREN,
    STATE(711), 1,
      aux_sym_function_args_repeat1,
  [13987] = 3,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    ACTIONS(1590), 1,
      anon_sym_RPAREN,
    STATE(611), 1,
      aux_sym_relation_element_repeat1,
  [13997] = 2,
    ACTIONS(1041), 1,
      anon_sym_LPAREN,
    ACTIONS(1588), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14005] = 3,
    ACTIONS(1392), 1,
      anon_sym_COMMA,
    ACTIONS(1592), 1,
      aux_sym_from_spec_token1,
    STATE(624), 1,
      aux_sym_delete_column_list_repeat1,
  [14015] = 3,
    ACTIONS(1476), 1,
      anon_sym_COMMA,
    ACTIONS(1594), 1,
      aux_sym_from_spec_token1,
    STATE(576), 1,
      aux_sym_select_elements_repeat1,
  [14025] = 3,
    ACTIONS(1107), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1113), 1,
      aux_sym_insert_values_spec_token1,
    STATE(118), 1,
      sym_insert_values_spec,
  [14035] = 3,
    ACTIONS(1260), 1,
      anon_sym_COMMA,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    STATE(595), 1,
      aux_sym_function_args_repeat1,
  [14045] = 3,
    ACTIONS(1179), 1,
      sym_object_name,
    STATE(683), 1,
      sym_function_call,
    STATE(728), 1,
      sym_select_element,
  [14055] = 3,
    ACTIONS(1462), 1,
      sym__string_literal,
    STATE(663), 1,
      sym_replication_list_item,
    STATE(884), 1,
      sym_replication_list,
  [14065] = 3,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1596), 1,
      aux_sym_update_token2,
    STATE(994), 1,
      sym_using_ttl_timestamp,
  [14075] = 3,
    ACTIONS(1107), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1113), 1,
      aux_sym_insert_values_spec_token1,
    STATE(113), 1,
      sym_insert_values_spec,
  [14085] = 2,
    ACTIONS(1598), 1,
      aux_sym_from_spec_token1,
    STATE(71), 1,
      sym_from_spec,
  [14092] = 2,
    ACTIONS(1600), 1,
      sym_object_name,
    STATE(552), 1,
      sym_assignment_element,
  [14099] = 1,
    ACTIONS(1602), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14104] = 2,
    ACTIONS(1604), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1606), 1,
      sym_object_name,
  [14111] = 2,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    STATE(198), 1,
      sym_where_spec,
  [14118] = 1,
    ACTIONS(1608), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14123] = 1,
    ACTIONS(1293), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14128] = 2,
    ACTIONS(1598), 1,
      aux_sym_from_spec_token1,
    STATE(68), 1,
      sym_from_spec,
  [14135] = 1,
    ACTIONS(1610), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14140] = 1,
    ACTIONS(1612), 2,
      sym__string_literal,
      sym_decimal_literal,
  [14145] = 2,
    ACTIONS(1266), 1,
      aux_sym_timestamp_token1,
    STATE(543), 1,
      sym_timestamp,
  [14152] = 2,
    ACTIONS(1600), 1,
      sym_object_name,
    STATE(545), 1,
      sym_assignment_element,
  [14159] = 2,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    STATE(189), 1,
      sym_where_spec,
  [14166] = 2,
    ACTIONS(1614), 1,
      sym_object_name,
    STATE(812), 1,
      sym_delete_column_item,
  [14173] = 2,
    ACTIONS(1616), 1,
      sym__string_literal,
    STATE(360), 1,
      sym_trigger_class,
  [14180] = 2,
    ACTIONS(1618), 1,
      aux_sym_role_with_options_token1,
    STATE(128), 1,
      sym_user_password,
  [14187] = 2,
    ACTIONS(1600), 1,
      sym_object_name,
    STATE(863), 1,
      sym_assignment_element,
  [14194] = 1,
    ACTIONS(1588), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14199] = 2,
    ACTIONS(1620), 1,
      anon_sym_DOT,
    ACTIONS(1622), 1,
      aux_sym_create_index_token3,
  [14206] = 2,
    ACTIONS(1266), 1,
      aux_sym_timestamp_token1,
    STATE(210), 1,
      sym_timestamp,
  [14213] = 2,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    STATE(585), 1,
      sym_assignment_tuple,
  [14220] = 2,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_assignment_tuple,
  [14227] = 2,
    ACTIONS(1268), 1,
      aux_sym_ttl_token1,
    STATE(210), 1,
      sym_ttl,
  [14234] = 2,
    ACTIONS(1598), 1,
      aux_sym_from_spec_token1,
    STATE(526), 1,
      sym_from_spec,
  [14241] = 2,
    ACTIONS(1624), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1626), 1,
      sym_object_name,
  [14248] = 2,
    ACTIONS(1628), 1,
      anon_sym_DOT,
    ACTIONS(1630), 1,
      aux_sym_select_element_token1,
  [14255] = 2,
    ACTIONS(1600), 1,
      sym_object_name,
    STATE(523), 1,
      sym_assignment_element,
  [14262] = 2,
    ACTIONS(1598), 1,
      aux_sym_from_spec_token1,
    STATE(553), 1,
      sym_from_spec,
  [14269] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1403), 1,
      sym_column_list,
  [14276] = 2,
    ACTIONS(1634), 1,
      sym_object_name,
    STATE(216), 1,
      sym_if_condition,
  [14283] = 1,
    ACTIONS(1636), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [14288] = 1,
    ACTIONS(1638), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14293] = 2,
    ACTIONS(1640), 1,
      anon_sym_DOT,
    ACTIONS(1642), 1,
      anon_sym_LPAREN,
  [14300] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1308), 1,
      sym_column_list,
  [14307] = 2,
    ACTIONS(1644), 1,
      sym__string_literal,
    ACTIONS(1646), 1,
      sym_object_name,
  [14314] = 2,
    ACTIONS(1648), 1,
      sym_object_name,
    STATE(975), 1,
      sym_table_name,
  [14321] = 2,
    ACTIONS(1650), 1,
      sym__string_literal,
    ACTIONS(1652), 1,
      sym_object_name,
  [14328] = 2,
    ACTIONS(1654), 1,
      anon_sym_DOT,
    ACTIONS(1656), 1,
      aux_sym_create_index_token3,
  [14335] = 2,
    ACTIONS(1658), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1660), 1,
      aux_sym_create_materialized_view_token1,
  [14342] = 1,
    ACTIONS(1551), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14347] = 2,
    ACTIONS(1330), 1,
      aux_sym_where_spec_token1,
    STATE(1127), 1,
      sym_materialized_view_where,
  [14354] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1123), 1,
      sym_column_list,
  [14361] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1307), 1,
      sym_column_list,
  [14368] = 2,
    ACTIONS(1662), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1664), 1,
      sym_object_name,
  [14375] = 2,
    ACTIONS(1666), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1668), 1,
      sym_object_name,
  [14382] = 1,
    ACTIONS(1670), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14387] = 1,
    ACTIONS(1672), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14392] = 2,
    ACTIONS(1674), 1,
      anon_sym_DOT,
    ACTIONS(1676), 1,
      anon_sym_LPAREN,
  [14399] = 2,
    ACTIONS(1618), 1,
      aux_sym_role_with_options_token1,
    STATE(130), 1,
      sym_user_password,
  [14406] = 1,
    ACTIONS(1678), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14411] = 2,
    ACTIONS(1398), 1,
      sym_object_name,
    STATE(787), 1,
      sym_param,
  [14418] = 2,
    ACTIONS(1616), 1,
      sym__string_literal,
    STATE(347), 1,
      sym_trigger_class,
  [14425] = 2,
    ACTIONS(1342), 1,
      sym_object_name,
    STATE(803), 1,
      sym_column_definition,
  [14432] = 2,
    ACTIONS(1680), 1,
      anon_sym_DOT,
    ACTIONS(1682), 1,
      anon_sym_LPAREN,
  [14439] = 2,
    ACTIONS(1684), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1686), 1,
      sym_object_name,
  [14446] = 2,
    ACTIONS(1688), 1,
      anon_sym_DOT,
    ACTIONS(1690), 1,
      aux_sym_select_element_token1,
  [14453] = 1,
    ACTIONS(1692), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14458] = 2,
    ACTIONS(1694), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1696), 1,
      sym_object_name,
  [14465] = 2,
    ACTIONS(1698), 1,
      anon_sym_DOT,
    ACTIONS(1700), 1,
      anon_sym_LPAREN,
  [14472] = 2,
    ACTIONS(1702), 1,
      sym_object_name,
    STATE(1104), 1,
      sym_clustering_key_list,
  [14479] = 2,
    ACTIONS(1196), 1,
      anon_sym_LPAREN,
    STATE(219), 1,
      sym_option_hash,
  [14486] = 2,
    ACTIONS(1704), 1,
      sym__string_literal,
    STATE(642), 1,
      sym_option_hash_item,
  [14493] = 2,
    ACTIONS(1706), 1,
      anon_sym_DOT,
    ACTIONS(1708), 1,
      anon_sym_LPAREN,
  [14500] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1000), 1,
      sym_column_list,
  [14507] = 2,
    ACTIONS(1710), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1712), 1,
      sym_object_name,
  [14514] = 1,
    ACTIONS(1505), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14519] = 2,
    ACTIONS(1714), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1716), 1,
      sym_object_name,
  [14526] = 2,
    ACTIONS(1718), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1720), 1,
      sym_object_name,
  [14533] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(956), 1,
      sym_column_list,
  [14540] = 2,
    ACTIONS(1598), 1,
      aux_sym_from_spec_token1,
    STATE(72), 1,
      sym_from_spec,
  [14547] = 1,
    ACTIONS(1496), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14552] = 2,
    ACTIONS(1348), 1,
      sym_object_name,
    STATE(830), 1,
      sym_column_not_null,
  [14559] = 2,
    ACTIONS(1722), 1,
      anon_sym_DOT,
    ACTIONS(1724), 1,
      anon_sym_LPAREN,
  [14566] = 2,
    ACTIONS(1726), 1,
      sym_object_name,
    STATE(1042), 1,
      sym_partition_key_list,
  [14573] = 2,
    ACTIONS(1728), 1,
      anon_sym_COMMA,
    ACTIONS(1730), 1,
      anon_sym_RPAREN,
  [14580] = 2,
    ACTIONS(1648), 1,
      sym_object_name,
    STATE(924), 1,
      sym_table_name,
  [14587] = 2,
    ACTIONS(1732), 1,
      sym_object_name,
    STATE(1038), 1,
      sym_trigger_name,
  [14594] = 2,
    ACTIONS(1704), 1,
      sym__string_literal,
    STATE(828), 1,
      sym_option_hash_item,
  [14601] = 1,
    ACTIONS(1734), 2,
      sym__string_literal,
      sym_float_literal,
  [14606] = 1,
    ACTIONS(1353), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14611] = 1,
    ACTIONS(1736), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14616] = 1,
    ACTIONS(1460), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14621] = 1,
    ACTIONS(1437), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14626] = 2,
    ACTIONS(1738), 1,
      anon_sym_DOT,
    ACTIONS(1740), 1,
      anon_sym_LPAREN,
  [14633] = 2,
    ACTIONS(1742), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1744), 1,
      sym_object_name,
  [14640] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(914), 1,
      sym_column_list,
  [14647] = 1,
    ACTIONS(1746), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14652] = 2,
    ACTIONS(1748), 1,
      aux_sym_durable_writes_token1,
    STATE(328), 1,
      sym_durable_writes,
  [14659] = 2,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    STATE(143), 1,
      sym_where_spec,
  [14666] = 2,
    ACTIONS(1648), 1,
      sym_object_name,
    STATE(1301), 1,
      sym_table_name,
  [14673] = 1,
    ACTIONS(1422), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14678] = 2,
    ACTIONS(1750), 1,
      sym__string_literal,
    ACTIONS(1752), 1,
      sym_object_name,
  [14685] = 2,
    ACTIONS(1754), 1,
      sym_object_name,
    STATE(801), 1,
      sym_init_cond_hash_item,
  [14692] = 2,
    ACTIONS(1748), 1,
      aux_sym_durable_writes_token1,
    STATE(423), 1,
      sym_durable_writes,
  [14699] = 1,
    ACTIONS(1756), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14704] = 2,
    ACTIONS(1758), 1,
      anon_sym_DOT,
    ACTIONS(1760), 1,
      anon_sym_LPAREN,
  [14711] = 2,
    ACTIONS(1762), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1764), 1,
      sym_object_name,
  [14718] = 1,
    ACTIONS(1536), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14723] = 2,
    ACTIONS(1766), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1768), 1,
      sym_object_name,
  [14730] = 2,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_assignment_tuple,
  [14737] = 2,
    ACTIONS(1770), 1,
      anon_sym_DOT,
    ACTIONS(1772), 1,
      anon_sym_LPAREN,
  [14744] = 2,
    ACTIONS(1702), 1,
      sym_object_name,
    STATE(1203), 1,
      sym_clustering_key_list,
  [14751] = 1,
    ACTIONS(1388), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14756] = 2,
    ACTIONS(1748), 1,
      aux_sym_durable_writes_token1,
    STATE(273), 1,
      sym_durable_writes,
  [14763] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1183), 1,
      sym_column_list,
  [14770] = 2,
    ACTIONS(1774), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1776), 1,
      sym_object_name,
  [14777] = 1,
    ACTIONS(1362), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14782] = 2,
    ACTIONS(1330), 1,
      aux_sym_where_spec_token1,
    STATE(1224), 1,
      sym_materialized_view_where,
  [14789] = 1,
    ACTIONS(1367), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [14794] = 2,
    ACTIONS(1778), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1780), 1,
      sym_object_name,
  [14801] = 2,
    ACTIONS(1782), 1,
      aux_sym_resource_token5,
    ACTIONS(1784), 1,
      aux_sym_drop_aggregate_token1,
  [14808] = 1,
    ACTIONS(1786), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14813] = 2,
    ACTIONS(1600), 1,
      sym_object_name,
    STATE(528), 1,
      sym_assignment_element,
  [14820] = 2,
    ACTIONS(1788), 1,
      anon_sym_DOT,
    ACTIONS(1790), 1,
      anon_sym_LPAREN,
  [14827] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1228), 1,
      sym_column_list,
  [14834] = 2,
    ACTIONS(1792), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1794), 1,
      sym_object_name,
  [14841] = 1,
    ACTIONS(1796), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14846] = 2,
    ACTIONS(1319), 1,
      sym_object_name,
    STATE(208), 1,
      sym_alter_type_rename_item,
  [14853] = 1,
    ACTIONS(1798), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [14858] = 2,
    ACTIONS(1800), 1,
      sym_object_name,
    STATE(179), 1,
      sym_order_spec_element,
  [14865] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1341), 1,
      sym_column_list,
  [14872] = 2,
    ACTIONS(1802), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1804), 1,
      sym_object_name,
  [14879] = 1,
    ACTIONS(1806), 2,
      sym__string_literal,
      sym_decimal_literal,
  [14884] = 2,
    ACTIONS(358), 1,
      aux_sym_clustering_order_token1,
    STATE(419), 1,
      sym_clustering_order,
  [14891] = 2,
    ACTIONS(1462), 1,
      sym__string_literal,
    STATE(804), 1,
      sym_replication_list_item,
  [14898] = 2,
    ACTIONS(1808), 1,
      anon_sym_DOT,
    ACTIONS(1810), 1,
      anon_sym_LPAREN,
  [14905] = 2,
    ACTIONS(1812), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1814), 1,
      sym_object_name,
  [14912] = 2,
    ACTIONS(1330), 1,
      aux_sym_where_spec_token1,
    STATE(1263), 1,
      sym_materialized_view_where,
  [14919] = 2,
    ACTIONS(1330), 1,
      aux_sym_where_spec_token1,
    STATE(1338), 1,
      sym_materialized_view_where,
  [14926] = 2,
    ACTIONS(1816), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1818), 1,
      sym_object_name,
  [14933] = 2,
    ACTIONS(1600), 1,
      sym_object_name,
    STATE(537), 1,
      sym_assignment_element,
  [14940] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1366), 1,
      sym_column_list,
  [14947] = 2,
    ACTIONS(1820), 1,
      anon_sym_DOT,
    ACTIONS(1822), 1,
      aux_sym_using_timestamp_spec_token1,
  [14954] = 2,
    ACTIONS(1824), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1826), 1,
      sym_object_name,
  [14961] = 2,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_assignment_tuple,
  [14968] = 2,
    ACTIONS(1828), 1,
      anon_sym_EQ,
    ACTIONS(1830), 1,
      anon_sym_LBRACK,
  [14975] = 2,
    ACTIONS(1832), 1,
      anon_sym_DOT,
    ACTIONS(1834), 1,
      anon_sym_LPAREN,
  [14982] = 2,
    ACTIONS(1836), 1,
      aux_sym_truncate_token2,
    ACTIONS(1838), 1,
      sym_object_name,
  [14989] = 2,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    STATE(668), 1,
      sym_assignment_tuple,
  [14996] = 2,
    ACTIONS(1600), 1,
      sym_object_name,
    STATE(556), 1,
      sym_assignment_element,
  [15003] = 2,
    ACTIONS(1618), 1,
      aux_sym_role_with_options_token1,
    STATE(120), 1,
      sym_user_password,
  [15010] = 1,
    ACTIONS(1326), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [15015] = 2,
    ACTIONS(1600), 1,
      sym_object_name,
    STATE(524), 1,
      sym_assignment_element,
  [15022] = 1,
    ACTIONS(1256), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [15027] = 1,
    ACTIONS(1840), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [15032] = 2,
    ACTIONS(1842), 1,
      anon_sym_DOT,
    ACTIONS(1844), 1,
      anon_sym_LPAREN,
  [15039] = 2,
    ACTIONS(1846), 1,
      sym_object_name,
    STATE(420), 1,
      sym_alter_table_column_definition,
  [15046] = 2,
    ACTIONS(1648), 1,
      sym_object_name,
    STATE(1158), 1,
      sym_table_name,
  [15053] = 2,
    ACTIONS(1600), 1,
      sym_object_name,
    STATE(570), 1,
      sym_assignment_element,
  [15060] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1383), 1,
      sym_column_list,
  [15067] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1382), 1,
      sym_column_list,
  [15074] = 1,
    ACTIONS(1848), 1,
      aux_sym_delete_statement_token3,
  [15078] = 1,
    ACTIONS(1850), 1,
      aux_sym_create_aggregate_token4,
  [15082] = 1,
    ACTIONS(1852), 1,
      sym_object_name,
  [15086] = 1,
    ACTIONS(1854), 1,
      aux_sym_select_statement_token1,
  [15090] = 1,
    ACTIONS(1856), 1,
      sym_object_name,
  [15094] = 1,
    ACTIONS(1858), 1,
      anon_sym_LPAREN,
  [15098] = 1,
    ACTIONS(1860), 1,
      aux_sym_create_function_token1,
  [15102] = 1,
    ACTIONS(1862), 1,
      aux_sym_create_aggregate_token3,
  [15106] = 1,
    ACTIONS(1864), 1,
      sym_object_name,
  [15110] = 1,
    ACTIONS(1866), 1,
      sym_object_name,
  [15114] = 1,
    ACTIONS(1868), 1,
      sym_object_name,
  [15118] = 1,
    ACTIONS(1870), 1,
      anon_sym_RBRACE,
  [15122] = 1,
    ACTIONS(1872), 1,
      aux_sym_insert_statement_token3,
  [15126] = 1,
    ACTIONS(1874), 1,
      aux_sym_delete_statement_token3,
  [15130] = 1,
    ACTIONS(1876), 1,
      aux_sym_select_statement_token5,
  [15134] = 1,
    ACTIONS(1878), 1,
      aux_sym_delete_statement_token3,
  [15138] = 1,
    ACTIONS(1880), 1,
      aux_sym_order_spec_token2,
  [15142] = 1,
    ACTIONS(1882), 1,
      anon_sym_RPAREN,
  [15146] = 1,
    ACTIONS(1884), 1,
      anon_sym_RPAREN,
  [15150] = 1,
    ACTIONS(1886), 1,
      anon_sym_RPAREN,
  [15154] = 1,
    ACTIONS(1888), 1,
      anon_sym_RPAREN,
  [15158] = 1,
    ACTIONS(1890), 1,
      anon_sym_LBRACE,
  [15162] = 1,
    ACTIONS(1892), 1,
      aux_sym_create_function_token1,
  [15166] = 1,
    ACTIONS(1894), 1,
      aux_sym_create_function_token1,
  [15170] = 1,
    ACTIONS(1896), 1,
      aux_sym_return_mode_token2,
  [15174] = 1,
    ACTIONS(1898), 1,
      aux_sym_create_function_token1,
  [15178] = 1,
    ACTIONS(1900), 1,
      sym_object_name,
  [15182] = 1,
    ACTIONS(1902), 1,
      aux_sym_create_function_token2,
  [15186] = 1,
    ACTIONS(1904), 1,
      anon_sym_LPAREN,
  [15190] = 1,
    ACTIONS(1906), 1,
      aux_sym_create_aggregate_token3,
  [15194] = 1,
    ACTIONS(1908), 1,
      anon_sym_RPAREN,
  [15198] = 1,
    ACTIONS(1910), 1,
      anon_sym_RPAREN,
  [15202] = 1,
    ACTIONS(1912), 1,
      anon_sym_COLON,
  [15206] = 1,
    ACTIONS(1914), 1,
      aux_sym_create_aggregate_token3,
  [15210] = 1,
    ACTIONS(1916), 1,
      sym_object_name,
  [15214] = 1,
    ACTIONS(1918), 1,
      aux_sym_create_function_token1,
  [15218] = 1,
    ACTIONS(1920), 1,
      aux_sym_create_function_token2,
  [15222] = 1,
    ACTIONS(1922), 1,
      aux_sym_return_mode_token2,
  [15226] = 1,
    ACTIONS(1924), 1,
      aux_sym_constant_token1,
  [15230] = 1,
    ACTIONS(1926), 1,
      aux_sym_select_element_token1,
  [15234] = 1,
    ACTIONS(1928), 1,
      aux_sym_create_function_token1,
  [15238] = 1,
    ACTIONS(1930), 1,
      aux_sym_from_spec_token1,
  [15242] = 1,
    ACTIONS(1932), 1,
      anon_sym_LPAREN,
  [15246] = 1,
    ACTIONS(1934), 1,
      sym_object_name,
  [15250] = 1,
    ACTIONS(1936), 1,
      anon_sym_RBRACE,
  [15254] = 1,
    ACTIONS(1938), 1,
      anon_sym_COLON,
  [15258] = 1,
    ACTIONS(1940), 1,
      anon_sym_GT,
  [15262] = 1,
    ACTIONS(1942), 1,
      anon_sym_RPAREN,
  [15266] = 1,
    ACTIONS(1944), 1,
      anon_sym_RPAREN,
  [15270] = 1,
    ACTIONS(1946), 1,
      sym_object_name,
  [15274] = 1,
    ACTIONS(1948), 1,
      anon_sym_RPAREN,
  [15278] = 1,
    ACTIONS(1950), 1,
      anon_sym_LPAREN,
  [15282] = 1,
    ACTIONS(1952), 1,
      sym_object_name,
  [15286] = 1,
    ACTIONS(1954), 1,
      anon_sym_LPAREN,
  [15290] = 1,
    ACTIONS(1956), 1,
      aux_sym_create_function_token1,
  [15294] = 1,
    ACTIONS(1958), 1,
      aux_sym_order_spec_token1,
  [15298] = 1,
    ACTIONS(1960), 1,
      sym_object_name,
  [15302] = 1,
    ACTIONS(1962), 1,
      anon_sym_RPAREN,
  [15306] = 1,
    ACTIONS(1964), 1,
      anon_sym_RPAREN,
  [15310] = 1,
    ACTIONS(1966), 1,
      sym_object_name,
  [15314] = 1,
    ACTIONS(1968), 1,
      anon_sym_LPAREN,
  [15318] = 1,
    ACTIONS(1970), 1,
      aux_sym_delete_statement_token3,
  [15322] = 1,
    ACTIONS(1972), 1,
      aux_sym_insert_statement_token3,
  [15326] = 1,
    ACTIONS(1974), 1,
      anon_sym_LPAREN,
  [15330] = 1,
    ACTIONS(1976), 1,
      aux_sym_select_statement_token5,
  [15334] = 1,
    ACTIONS(1978), 1,
      aux_sym_delete_statement_token3,
  [15338] = 1,
    ACTIONS(1980), 1,
      aux_sym_insert_statement_token3,
  [15342] = 1,
    ACTIONS(1982), 1,
      sym_object_name,
  [15346] = 1,
    ACTIONS(1984), 1,
      sym_object_name,
  [15350] = 1,
    ACTIONS(1986), 1,
      anon_sym_EQ,
  [15354] = 1,
    ACTIONS(1988), 1,
      aux_sym_insert_statement_token3,
  [15358] = 1,
    ACTIONS(1123), 1,
      sym_object_name,
  [15362] = 1,
    ACTIONS(1990), 1,
      aux_sym_delete_statement_token3,
  [15366] = 1,
    ACTIONS(1992), 1,
      aux_sym_create_index_token3,
  [15370] = 1,
    ACTIONS(1994), 1,
      sym_object_name,
  [15374] = 1,
    ACTIONS(1996), 1,
      anon_sym_RPAREN,
  [15378] = 1,
    ACTIONS(1998), 1,
      anon_sym_LPAREN,
  [15382] = 1,
    ACTIONS(2000), 1,
      sym_object_name,
  [15386] = 1,
    ACTIONS(2002), 1,
      anon_sym_LPAREN,
  [15390] = 1,
    ACTIONS(2004), 1,
      sym_object_name,
  [15394] = 1,
    ACTIONS(2006), 1,
      sym_object_name,
  [15398] = 1,
    ACTIONS(2008), 1,
      sym_object_name,
  [15402] = 1,
    ACTIONS(2010), 1,
      sym_object_name,
  [15406] = 1,
    ACTIONS(2012), 1,
      aux_sym_from_spec_token1,
  [15410] = 1,
    ACTIONS(2014), 1,
      aux_sym_select_statement_token1,
  [15414] = 1,
    ACTIONS(2016), 1,
      sym_object_name,
  [15418] = 1,
    ACTIONS(2018), 1,
      anon_sym_RPAREN,
  [15422] = 1,
    ACTIONS(2020), 1,
      sym_object_name,
  [15426] = 1,
    ACTIONS(2022), 1,
      aux_sym_create_function_token1,
  [15430] = 1,
    ACTIONS(2024), 1,
      aux_sym_constant_token1,
  [15434] = 1,
    ACTIONS(2026), 1,
      aux_sym_create_index_token3,
  [15438] = 1,
    ACTIONS(2028), 1,
      sym_object_name,
  [15442] = 1,
    ACTIONS(2030), 1,
      anon_sym_RPAREN,
  [15446] = 1,
    ACTIONS(2032), 1,
      aux_sym_create_keyspace_token1,
  [15450] = 1,
    ACTIONS(2034), 1,
      anon_sym_LPAREN,
  [15454] = 1,
    ACTIONS(2036), 1,
      anon_sym_RPAREN,
  [15458] = 1,
    ACTIONS(2038), 1,
      aux_sym_delete_statement_token3,
  [15462] = 1,
    ACTIONS(2040), 1,
      anon_sym_RPAREN,
  [15466] = 1,
    ACTIONS(2042), 1,
      anon_sym_RPAREN,
  [15470] = 1,
    ACTIONS(2044), 1,
      sym_object_name,
  [15474] = 1,
    ACTIONS(2046), 1,
      anon_sym_RPAREN,
  [15478] = 1,
    ACTIONS(2048), 1,
      sym_object_name,
  [15482] = 1,
    ACTIONS(2050), 1,
      anon_sym_LPAREN,
  [15486] = 1,
    ACTIONS(2052), 1,
      anon_sym_RPAREN,
  [15490] = 1,
    ACTIONS(2054), 1,
      aux_sym_relation_contains_key_token2,
  [15494] = 1,
    ACTIONS(2056), 1,
      aux_sym_relation_contains_key_token2,
  [15498] = 1,
    ACTIONS(2058), 1,
      anon_sym_RPAREN,
  [15502] = 1,
    ACTIONS(2060), 1,
      sym_object_name,
  [15506] = 1,
    ACTIONS(2062), 1,
      aux_sym_delete_statement_token3,
  [15510] = 1,
    ACTIONS(2064), 1,
      aux_sym_create_function_token1,
  [15514] = 1,
    ACTIONS(2066), 1,
      aux_sym_insert_statement_token3,
  [15518] = 1,
    ACTIONS(2068), 1,
      aux_sym_create_function_token2,
  [15522] = 1,
    ACTIONS(2070), 1,
      anon_sym_RPAREN,
  [15526] = 1,
    ACTIONS(2072), 1,
      aux_sym_create_function_token1,
  [15530] = 1,
    ACTIONS(2074), 1,
      aux_sym_create_function_token1,
  [15534] = 1,
    ACTIONS(2076), 1,
      aux_sym_select_element_token1,
  [15538] = 1,
    ACTIONS(2078), 1,
      sym_object_name,
  [15542] = 1,
    ACTIONS(2080), 1,
      aux_sym_create_function_token2,
  [15546] = 1,
    ACTIONS(2082), 1,
      anon_sym_RPAREN,
  [15550] = 1,
    ACTIONS(2084), 1,
      anon_sym_LPAREN,
  [15554] = 1,
    ACTIONS(2086), 1,
      aux_sym_select_statement_token5,
  [15558] = 1,
    ACTIONS(2088), 1,
      aux_sym_update_token2,
  [15562] = 1,
    ACTIONS(2090), 1,
      anon_sym_RPAREN,
  [15566] = 1,
    ACTIONS(2092), 1,
      sym_object_name,
  [15570] = 1,
    ACTIONS(2094), 1,
      aux_sym_create_aggregate_token4,
  [15574] = 1,
    ACTIONS(2096), 1,
      aux_sym_create_aggregate_token5,
  [15578] = 1,
    ACTIONS(2098), 1,
      aux_sym_select_statement_token1,
  [15582] = 1,
    ACTIONS(2100), 1,
      aux_sym_from_spec_token1,
  [15586] = 1,
    ACTIONS(2102), 1,
      sym_object_name,
  [15590] = 1,
    ACTIONS(2104), 1,
      sym_object_name,
  [15594] = 1,
    ACTIONS(2106), 1,
      aux_sym_insert_statement_token3,
  [15598] = 1,
    ACTIONS(2108), 1,
      aux_sym_create_materialized_view_token1,
  [15602] = 1,
    ACTIONS(2110), 1,
      sym_object_name,
  [15606] = 1,
    ACTIONS(2112), 1,
      anon_sym_LBRACE,
  [15610] = 1,
    ACTIONS(2114), 1,
      sym_object_name,
  [15614] = 1,
    ACTIONS(2116), 1,
      sym_object_name,
  [15618] = 1,
    ACTIONS(2118), 1,
      anon_sym_LPAREN,
  [15622] = 1,
    ACTIONS(2120), 1,
      aux_sym_resource_token2,
  [15626] = 1,
    ACTIONS(2122), 1,
      sym_object_name,
  [15630] = 1,
    ACTIONS(2124), 1,
      aux_sym_create_function_token1,
  [15634] = 1,
    ACTIONS(2126), 1,
      anon_sym_RBRACK,
  [15638] = 1,
    ACTIONS(2128), 1,
      sym_object_name,
  [15642] = 1,
    ACTIONS(2130), 1,
      aux_sym_create_function_token2,
  [15646] = 1,
    ACTIONS(2132), 1,
      sym_object_name,
  [15650] = 1,
    ACTIONS(2134), 1,
      aux_sym_create_function_token1,
  [15654] = 1,
    ACTIONS(2136), 1,
      anon_sym_LPAREN,
  [15658] = 1,
    ACTIONS(2138), 1,
      anon_sym_RPAREN,
  [15662] = 1,
    ACTIONS(2140), 1,
      aux_sym_create_aggregate_token3,
  [15666] = 1,
    ACTIONS(2142), 1,
      aux_sym_create_aggregate_token4,
  [15670] = 1,
    ACTIONS(2144), 1,
      sym_object_name,
  [15674] = 1,
    ACTIONS(2146), 1,
      sym_object_name,
  [15678] = 1,
    ACTIONS(2148), 1,
      sym_object_name,
  [15682] = 1,
    ACTIONS(2150), 1,
      sym_object_name,
  [15686] = 1,
    ACTIONS(2152), 1,
      aux_sym_delete_statement_token3,
  [15690] = 1,
    ACTIONS(2154), 1,
      sym_object_name,
  [15694] = 1,
    ACTIONS(2156), 1,
      sym_object_name,
  [15698] = 1,
    ACTIONS(2158), 1,
      sym_object_name,
  [15702] = 1,
    ACTIONS(2160), 1,
      sym_object_name,
  [15706] = 1,
    ACTIONS(2162), 1,
      sym_object_name,
  [15710] = 1,
    ACTIONS(2164), 1,
      aux_sym_create_aggregate_token3,
  [15714] = 1,
    ACTIONS(2166), 1,
      sym_object_name,
  [15718] = 1,
    ACTIONS(2168), 1,
      aux_sym_delete_statement_token3,
  [15722] = 1,
    ACTIONS(2170), 1,
      aux_sym_create_materialized_view_token2,
  [15726] = 1,
    ACTIONS(2172), 1,
      anon_sym_COLON,
  [15730] = 1,
    ACTIONS(2174), 1,
      sym_object_name,
  [15734] = 1,
    ACTIONS(2176), 1,
      aux_sym_using_timestamp_spec_token1,
  [15738] = 1,
    ACTIONS(2178), 1,
      aux_sym_select_element_token1,
  [15742] = 1,
    ACTIONS(2180), 1,
      sym_object_name,
  [15746] = 1,
    ACTIONS(2182), 1,
      sym_object_name,
  [15750] = 1,
    ACTIONS(2184), 1,
      anon_sym_RPAREN,
  [15754] = 1,
    ACTIONS(2186), 1,
      aux_sym_update_token2,
  [15758] = 1,
    ACTIONS(2188), 1,
      anon_sym_RPAREN,
  [15762] = 1,
    ACTIONS(2190), 1,
      sym_boolean_literal,
  [15766] = 1,
    ACTIONS(2192), 1,
      anon_sym_RBRACE,
  [15770] = 1,
    ACTIONS(2194), 1,
      anon_sym_EQ,
  [15774] = 1,
    ACTIONS(2190), 1,
      sym__string_literal,
  [15778] = 1,
    ACTIONS(2196), 1,
      aux_sym_create_function_token1,
  [15782] = 1,
    ACTIONS(2198), 1,
      aux_sym_create_function_token1,
  [15786] = 1,
    ACTIONS(2200), 1,
      aux_sym_create_index_token3,
  [15790] = 1,
    ACTIONS(2202), 1,
      aux_sym_create_function_token2,
  [15794] = 1,
    ACTIONS(2204), 1,
      aux_sym_constant_token1,
  [15798] = 1,
    ACTIONS(2206), 1,
      aux_sym_create_function_token1,
  [15802] = 1,
    ACTIONS(2208), 1,
      sym_object_name,
  [15806] = 1,
    ACTIONS(2210), 1,
      aux_sym_create_function_token2,
  [15810] = 1,
    ACTIONS(2212), 1,
      anon_sym_LBRACE,
  [15814] = 1,
    ACTIONS(2214), 1,
      sym_code_block,
  [15818] = 1,
    ACTIONS(2216), 1,
      aux_sym_select_element_token1,
  [15822] = 1,
    ACTIONS(2218), 1,
      sym_object_name,
  [15826] = 1,
    ACTIONS(2220), 1,
      aux_sym_create_materialized_view_token2,
  [15830] = 1,
    ACTIONS(2222), 1,
      aux_sym_create_aggregate_token3,
  [15834] = 1,
    ACTIONS(2224), 1,
      aux_sym_create_aggregate_token4,
  [15838] = 1,
    ACTIONS(2226), 1,
      anon_sym_RPAREN,
  [15842] = 1,
    ACTIONS(2228), 1,
      sym_object_name,
  [15846] = 1,
    ACTIONS(2230), 1,
      anon_sym_RPAREN,
  [15850] = 1,
    ACTIONS(2232), 1,
      sym_object_name,
  [15854] = 1,
    ACTIONS(2234), 1,
      anon_sym_RPAREN,
  [15858] = 1,
    ACTIONS(2236), 1,
      anon_sym_LPAREN,
  [15862] = 1,
    ACTIONS(2238), 1,
      aux_sym_column_not_null_token1,
  [15866] = 1,
    ACTIONS(2240), 1,
      anon_sym_LPAREN,
  [15870] = 1,
    ACTIONS(2242), 1,
      anon_sym_LPAREN,
  [15874] = 1,
    ACTIONS(2244), 1,
      aux_sym_relation_contains_key_token2,
  [15878] = 1,
    ACTIONS(2246), 1,
      anon_sym_LPAREN,
  [15882] = 1,
    ACTIONS(2248), 1,
      aux_sym_create_index_token3,
  [15886] = 1,
    ACTIONS(2250), 1,
      aux_sym_delete_statement_token3,
  [15890] = 1,
    ACTIONS(2252), 1,
      aux_sym_create_function_token1,
  [15894] = 1,
    ACTIONS(2254), 1,
      aux_sym_insert_statement_token3,
  [15898] = 1,
    ACTIONS(2256), 1,
      anon_sym_RPAREN,
  [15902] = 1,
    ACTIONS(2258), 1,
      sym_object_name,
  [15906] = 1,
    ACTIONS(2260), 1,
      aux_sym_create_function_token1,
  [15910] = 1,
    ACTIONS(1041), 1,
      anon_sym_LPAREN,
  [15914] = 1,
    ACTIONS(2262), 1,
      sym_object_name,
  [15918] = 1,
    ACTIONS(2264), 1,
      aux_sym_create_function_token2,
  [15922] = 1,
    ACTIONS(2266), 1,
      sym_object_name,
  [15926] = 1,
    ACTIONS(2268), 1,
      aux_sym_select_statement_token5,
  [15930] = 1,
    ACTIONS(2270), 1,
      aux_sym_create_aggregate_token3,
  [15934] = 1,
    ACTIONS(2272), 1,
      sym_object_name,
  [15938] = 1,
    ACTIONS(2274), 1,
      sym_object_name,
  [15942] = 1,
    ACTIONS(2276), 1,
      sym_object_name,
  [15946] = 1,
    ACTIONS(2278), 1,
      aux_sym_grant_token2,
  [15950] = 1,
    ACTIONS(2280), 1,
      aux_sym_drop_type_token1,
  [15954] = 1,
    ACTIONS(2282), 1,
      sym_object_name,
  [15958] = 1,
    ACTIONS(2284), 1,
      anon_sym_EQ,
  [15962] = 1,
    ACTIONS(2286), 1,
      aux_sym_grant_token2,
  [15966] = 1,
    ACTIONS(2288), 1,
      anon_sym_EQ,
  [15970] = 1,
    ACTIONS(2290), 1,
      anon_sym_EQ,
  [15974] = 1,
    ACTIONS(2292), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [15978] = 1,
    ACTIONS(2294), 1,
      sym_object_name,
  [15982] = 1,
    ACTIONS(2296), 1,
      sym_object_name,
  [15986] = 1,
    ACTIONS(2298), 1,
      sym_object_name,
  [15990] = 1,
    ACTIONS(2300), 1,
      anon_sym_COMMA,
  [15994] = 1,
    ACTIONS(2302), 1,
      sym_decimal_literal,
  [15998] = 1,
    ACTIONS(2304), 1,
      anon_sym_RPAREN,
  [16002] = 1,
    ACTIONS(2306), 1,
      sym_object_name,
  [16006] = 1,
    ACTIONS(2308), 1,
      sym_boolean_literal,
  [16010] = 1,
    ACTIONS(2310), 1,
      aux_sym_create_index_token3,
  [16014] = 1,
    ACTIONS(2312), 1,
      aux_sym_create_function_token1,
  [16018] = 1,
    ACTIONS(2314), 1,
      sym_object_name,
  [16022] = 1,
    ACTIONS(2316), 1,
      sym_object_name,
  [16026] = 1,
    ACTIONS(2318), 1,
      aux_sym_create_function_token2,
  [16030] = 1,
    ACTIONS(2320), 1,
      sym_object_name,
  [16034] = 1,
    ACTIONS(2322), 1,
      aux_sym_select_element_token1,
  [16038] = 1,
    ACTIONS(2324), 1,
      sym_object_name,
  [16042] = 1,
    ACTIONS(2326), 1,
      aux_sym_create_function_token2,
  [16046] = 1,
    ACTIONS(2328), 1,
      aux_sym_insert_statement_token3,
  [16050] = 1,
    ACTIONS(2330), 1,
      sym_code_block,
  [16054] = 1,
    ACTIONS(2332), 1,
      aux_sym_select_element_token1,
  [16058] = 1,
    ACTIONS(2334), 1,
      sym_object_name,
  [16062] = 1,
    ACTIONS(2336), 1,
      aux_sym_insert_statement_token3,
  [16066] = 1,
    ACTIONS(2338), 1,
      aux_sym_create_aggregate_token5,
  [16070] = 1,
    ACTIONS(2340), 1,
      aux_sym_create_aggregate_token6,
  [16074] = 1,
    ACTIONS(2342), 1,
      aux_sym_from_spec_token1,
  [16078] = 1,
    ACTIONS(2344), 1,
      sym__string_literal,
  [16082] = 1,
    ACTIONS(2346), 1,
      sym_object_name,
  [16086] = 1,
    ACTIONS(2348), 1,
      aux_sym_create_materialized_view_token1,
  [16090] = 1,
    ACTIONS(2350), 1,
      aux_sym_create_materialized_view_token1,
  [16094] = 1,
    ACTIONS(2352), 1,
      aux_sym_insert_statement_token3,
  [16098] = 1,
    ACTIONS(2354), 1,
      sym_object_name,
  [16102] = 1,
    ACTIONS(2356), 1,
      anon_sym_LPAREN,
  [16106] = 1,
    ACTIONS(2358), 1,
      sym_object_name,
  [16110] = 1,
    ACTIONS(2360), 1,
      anon_sym_LPAREN,
  [16114] = 1,
    ACTIONS(2362), 1,
      aux_sym_using_timestamp_spec_token1,
  [16118] = 1,
    ACTIONS(2364), 1,
      aux_sym_select_statement_token1,
  [16122] = 1,
    ACTIONS(2366), 1,
      sym_object_name,
  [16126] = 1,
    ACTIONS(2368), 1,
      anon_sym_RPAREN,
  [16130] = 1,
    ACTIONS(2370), 1,
      anon_sym_LPAREN,
  [16134] = 1,
    ACTIONS(2372), 1,
      aux_sym_create_function_token1,
  [16138] = 1,
    ACTIONS(2374), 1,
      sym_object_name,
  [16142] = 1,
    ACTIONS(2376), 1,
      aux_sym_create_function_token2,
  [16146] = 1,
    ACTIONS(2378), 1,
      anon_sym_EQ,
  [16150] = 1,
    ACTIONS(2380), 1,
      aux_sym_create_function_token1,
  [16154] = 1,
    ACTIONS(2382), 1,
      aux_sym_select_element_token1,
  [16158] = 1,
    ACTIONS(2384), 1,
      sym_object_name,
  [16162] = 1,
    ACTIONS(2386), 1,
      aux_sym_create_function_token2,
  [16166] = 1,
    ACTIONS(2388), 1,
      anon_sym_RPAREN,
  [16170] = 1,
    ACTIONS(2390), 1,
      sym_object_name,
  [16174] = 1,
    ACTIONS(2392), 1,
      aux_sym_create_aggregate_token4,
  [16178] = 1,
    ACTIONS(2394), 1,
      aux_sym_create_aggregate_token5,
  [16182] = 1,
    ACTIONS(2396), 1,
      anon_sym_EQ,
  [16186] = 1,
    ACTIONS(2398), 1,
      anon_sym_EQ,
  [16190] = 1,
    ACTIONS(2400), 1,
      sym_object_name,
  [16194] = 1,
    ACTIONS(2402), 1,
      anon_sym_LPAREN,
  [16198] = 1,
    ACTIONS(2404), 1,
      anon_sym_RPAREN,
  [16202] = 1,
    ACTIONS(2406), 1,
      sym_object_name,
  [16206] = 1,
    ACTIONS(2408), 1,
      anon_sym_GT,
  [16210] = 1,
    ACTIONS(2410), 1,
      sym_object_name,
  [16214] = 1,
    ACTIONS(2412), 1,
      anon_sym_LPAREN,
  [16218] = 1,
    ACTIONS(2414), 1,
      aux_sym_create_function_token2,
  [16222] = 1,
    ACTIONS(2416), 1,
      sym_object_name,
  [16226] = 1,
    ACTIONS(2418), 1,
      aux_sym_create_function_token1,
  [16230] = 1,
    ACTIONS(2420), 1,
      aux_sym_select_element_token1,
  [16234] = 1,
    ACTIONS(2422), 1,
      sym_object_name,
  [16238] = 1,
    ACTIONS(2424), 1,
      aux_sym_create_function_token2,
  [16242] = 1,
    ACTIONS(2426), 1,
      sym_code_block,
  [16246] = 1,
    ACTIONS(2428), 1,
      aux_sym_select_element_token1,
  [16250] = 1,
    ACTIONS(2430), 1,
      sym_object_name,
  [16254] = 1,
    ACTIONS(2432), 1,
      anon_sym_RPAREN,
  [16258] = 1,
    ACTIONS(2434), 1,
      sym_code_block,
  [16262] = 1,
    ACTIONS(2436), 1,
      aux_sym_create_aggregate_token4,
  [16266] = 1,
    ACTIONS(2438), 1,
      aux_sym_create_aggregate_token5,
  [16270] = 1,
    ACTIONS(2440), 1,
      sym_object_name,
  [16274] = 1,
    ACTIONS(2442), 1,
      anon_sym_LPAREN,
  [16278] = 1,
    ACTIONS(2444), 1,
      sym_object_name,
  [16282] = 1,
    ACTIONS(2446), 1,
      sym_object_name,
  [16286] = 1,
    ACTIONS(2448), 1,
      aux_sym_create_materialized_view_token1,
  [16290] = 1,
    ACTIONS(2450), 1,
      sym_object_name,
  [16294] = 1,
    ACTIONS(2452), 1,
      aux_sym_relation_contains_key_token2,
  [16298] = 1,
    ACTIONS(2454), 1,
      aux_sym_relation_contains_key_token2,
  [16302] = 1,
    ACTIONS(2456), 1,
      aux_sym_constant_token1,
  [16306] = 1,
    ACTIONS(2458), 1,
      aux_sym_create_materialized_view_token1,
  [16310] = 1,
    ACTIONS(2460), 1,
      aux_sym_insert_statement_token3,
  [16314] = 1,
    ACTIONS(2462), 1,
      anon_sym_RPAREN,
  [16318] = 1,
    ACTIONS(2464), 1,
      anon_sym_EQ,
  [16322] = 1,
    ACTIONS(2466), 1,
      anon_sym_LPAREN,
  [16326] = 1,
    ACTIONS(2468), 1,
      aux_sym_create_function_token1,
  [16330] = 1,
    ACTIONS(2470), 1,
      sym_object_name,
  [16334] = 1,
    ACTIONS(2472), 1,
      aux_sym_select_statement_token5,
  [16338] = 1,
    ACTIONS(2474), 1,
      aux_sym_create_function_token2,
  [16342] = 1,
    ACTIONS(2476), 1,
      aux_sym_update_token2,
  [16346] = 1,
    ACTIONS(2478), 1,
      aux_sym_create_function_token1,
  [16350] = 1,
    ACTIONS(2480), 1,
      sym_object_name,
  [16354] = 1,
    ACTIONS(2482), 1,
      aux_sym_create_function_token2,
  [16358] = 1,
    ACTIONS(2484), 1,
      sym_object_name,
  [16362] = 1,
    ACTIONS(2486), 1,
      sym_code_block,
  [16366] = 1,
    ACTIONS(2488), 1,
      aux_sym_select_element_token1,
  [16370] = 1,
    ACTIONS(2490), 1,
      sym_object_name,
  [16374] = 1,
    ACTIONS(2492), 1,
      aux_sym_create_aggregate_token3,
  [16378] = 1,
    ACTIONS(2494), 1,
      aux_sym_create_aggregate_token4,
  [16382] = 1,
    ACTIONS(2496), 1,
      sym_object_name,
  [16386] = 1,
    ACTIONS(2498), 1,
      sym_object_name,
  [16390] = 1,
    ACTIONS(2500), 1,
      sym_object_name,
  [16394] = 1,
    ACTIONS(2502), 1,
      anon_sym_RPAREN,
  [16398] = 1,
    ACTIONS(2504), 1,
      sym_object_name,
  [16402] = 1,
    ACTIONS(2506), 1,
      sym_object_name,
  [16406] = 1,
    ACTIONS(2508), 1,
      aux_sym_create_function_token2,
  [16410] = 1,
    ACTIONS(2510), 1,
      aux_sym_create_keyspace_token1,
  [16414] = 1,
    ACTIONS(2512), 1,
      sym_code_block,
  [16418] = 1,
    ACTIONS(2514), 1,
      aux_sym_select_element_token1,
  [16422] = 1,
    ACTIONS(2516), 1,
      sym_object_name,
  [16426] = 1,
    ACTIONS(2518), 1,
      sym_object_name,
  [16430] = 1,
    ACTIONS(2520), 1,
      sym_code_block,
  [16434] = 1,
    ACTIONS(2522), 1,
      aux_sym_select_element_token1,
  [16438] = 1,
    ACTIONS(2524), 1,
      sym_object_name,
  [16442] = 1,
    ACTIONS(2526), 1,
      aux_sym_from_spec_token1,
  [16446] = 1,
    ACTIONS(2528), 1,
      sym_object_name,
  [16450] = 1,
    ACTIONS(2530), 1,
      aux_sym_create_aggregate_token6,
  [16454] = 1,
    ACTIONS(2532), 1,
      aux_sym_grant_token2,
  [16458] = 1,
    ACTIONS(2534), 1,
      sym_object_name,
  [16462] = 1,
    ACTIONS(2536), 1,
      aux_sym_delete_statement_token3,
  [16466] = 1,
    ACTIONS(2538), 1,
      sym_object_name,
  [16470] = 1,
    ACTIONS(2540), 1,
      sym_object_name,
  [16474] = 1,
    ACTIONS(2542), 1,
      aux_sym_relation_contains_key_token2,
  [16478] = 1,
    ACTIONS(2544), 1,
      aux_sym_create_materialized_view_token1,
  [16482] = 1,
    ACTIONS(2546), 1,
      anon_sym_LPAREN,
  [16486] = 1,
    ACTIONS(2548), 1,
      anon_sym_LPAREN,
  [16490] = 1,
    ACTIONS(2550), 1,
      sym_decimal_literal,
  [16494] = 1,
    ACTIONS(2552), 1,
      anon_sym_RPAREN,
  [16498] = 1,
    ACTIONS(2554), 1,
      sym_object_name,
  [16502] = 1,
    ACTIONS(2556), 1,
      aux_sym_create_function_token1,
  [16506] = 1,
    ACTIONS(2558), 1,
      sym_object_name,
  [16510] = 1,
    ACTIONS(2560), 1,
      sym_object_name,
  [16514] = 1,
    ACTIONS(2562), 1,
      aux_sym_create_function_token2,
  [16518] = 1,
    ACTIONS(2564), 1,
      sym_object_name,
  [16522] = 1,
    ACTIONS(2566), 1,
      aux_sym_select_element_token1,
  [16526] = 1,
    ACTIONS(2568), 1,
      sym_object_name,
  [16530] = 1,
    ACTIONS(2570), 1,
      aux_sym_create_function_token2,
  [16534] = 1,
    ACTIONS(2572), 1,
      sym_object_name,
  [16538] = 1,
    ACTIONS(2574), 1,
      sym_code_block,
  [16542] = 1,
    ACTIONS(2576), 1,
      aux_sym_select_element_token1,
  [16546] = 1,
    ACTIONS(2578), 1,
      sym_object_name,
  [16550] = 1,
    ACTIONS(2580), 1,
      sym_object_name,
  [16554] = 1,
    ACTIONS(2582), 1,
      aux_sym_create_aggregate_token5,
  [16558] = 1,
    ACTIONS(2584), 1,
      aux_sym_create_aggregate_token6,
  [16562] = 1,
    ACTIONS(2586), 1,
      aux_sym_select_element_token1,
  [16566] = 1,
    ACTIONS(2588), 1,
      sym_object_name,
  [16570] = 1,
    ACTIONS(2590), 1,
      aux_sym_create_function_token2,
  [16574] = 1,
    ACTIONS(2592), 1,
      sym_object_name,
  [16578] = 1,
    ACTIONS(2594), 1,
      sym_code_block,
  [16582] = 1,
    ACTIONS(2596), 1,
      aux_sym_select_element_token1,
  [16586] = 1,
    ACTIONS(2598), 1,
      sym_object_name,
  [16590] = 1,
    ACTIONS(2600), 1,
      sym_code_block,
  [16594] = 1,
    ACTIONS(2602), 1,
      aux_sym_create_aggregate_token5,
  [16598] = 1,
    ACTIONS(2604), 1,
      aux_sym_create_aggregate_token6,
  [16602] = 1,
    ACTIONS(2606), 1,
      aux_sym_delete_statement_token3,
  [16606] = 1,
    ACTIONS(2608), 1,
      sym_object_name,
  [16610] = 1,
    ACTIONS(2610), 1,
      anon_sym_COLON,
  [16614] = 1,
    ACTIONS(2612), 1,
      sym_object_name,
  [16618] = 1,
    ACTIONS(2614), 1,
      sym_object_name,
  [16622] = 1,
    ACTIONS(2616), 1,
      sym_object_name,
  [16626] = 1,
    ACTIONS(2618), 1,
      sym_object_name,
  [16630] = 1,
    ACTIONS(2620), 1,
      aux_sym_create_materialized_view_token1,
  [16634] = 1,
    ACTIONS(2622), 1,
      aux_sym_create_materialized_view_token1,
  [16638] = 1,
    ACTIONS(2624), 1,
      anon_sym_LPAREN,
  [16642] = 1,
    ACTIONS(2626), 1,
      aux_sym_relation_contains_key_token2,
  [16646] = 1,
    ACTIONS(2628), 1,
      sym_object_name,
  [16650] = 1,
    ACTIONS(2630), 1,
      sym_object_name,
  [16654] = 1,
    ACTIONS(2632), 1,
      sym_object_name,
  [16658] = 1,
    ACTIONS(2634), 1,
      aux_sym_create_function_token2,
  [16662] = 1,
    ACTIONS(2636), 1,
      sym_object_name,
  [16666] = 1,
    ACTIONS(2638), 1,
      aux_sym_create_function_token1,
  [16670] = 1,
    ACTIONS(2640), 1,
      aux_sym_select_element_token1,
  [16674] = 1,
    ACTIONS(2642), 1,
      sym_object_name,
  [16678] = 1,
    ACTIONS(2644), 1,
      aux_sym_create_function_token2,
  [16682] = 1,
    ACTIONS(2646), 1,
      sym_code_block,
  [16686] = 1,
    ACTIONS(2648), 1,
      aux_sym_select_element_token1,
  [16690] = 1,
    ACTIONS(2650), 1,
      sym_object_name,
  [16694] = 1,
    ACTIONS(2652), 1,
      aux_sym_delete_statement_token3,
  [16698] = 1,
    ACTIONS(2654), 1,
      sym_code_block,
  [16702] = 1,
    ACTIONS(2656), 1,
      aux_sym_create_aggregate_token4,
  [16706] = 1,
    ACTIONS(2658), 1,
      aux_sym_create_aggregate_token5,
  [16710] = 1,
    ACTIONS(2660), 1,
      sym_object_name,
  [16714] = 1,
    ACTIONS(2662), 1,
      sym_object_name,
  [16718] = 1,
    ACTIONS(2664), 1,
      sym_code_block,
  [16722] = 1,
    ACTIONS(2666), 1,
      aux_sym_select_element_token1,
  [16726] = 1,
    ACTIONS(2668), 1,
      sym_object_name,
  [16730] = 1,
    ACTIONS(2670), 1,
      sym_object_name,
  [16734] = 1,
    ACTIONS(2672), 1,
      sym_code_block,
  [16738] = 1,
    ACTIONS(2674), 1,
      aux_sym_delete_statement_token3,
  [16742] = 1,
    ACTIONS(2676), 1,
      sym_object_name,
  [16746] = 1,
    ACTIONS(2678), 1,
      sym_object_name,
  [16750] = 1,
    ACTIONS(2680), 1,
      aux_sym_delete_statement_token3,
  [16754] = 1,
    ACTIONS(2682), 1,
      aux_sym_insert_statement_token3,
  [16758] = 1,
    ACTIONS(2684), 1,
      sym_object_name,
  [16762] = 1,
    ACTIONS(2686), 1,
      aux_sym_delete_statement_token3,
  [16766] = 1,
    ACTIONS(2688), 1,
      aux_sym_delete_statement_token3,
  [16770] = 1,
    ACTIONS(2690), 1,
      sym_object_name,
  [16774] = 1,
    ACTIONS(2692), 1,
      aux_sym_delete_statement_token3,
  [16778] = 1,
    ACTIONS(2694), 1,
      aux_sym_create_keyspace_token1,
  [16782] = 1,
    ACTIONS(2696), 1,
      aux_sym_delete_statement_token3,
  [16786] = 1,
    ACTIONS(2698), 1,
      anon_sym_LPAREN,
  [16790] = 1,
    ACTIONS(2700), 1,
      aux_sym_delete_statement_token3,
  [16794] = 1,
    ACTIONS(2702), 1,
      aux_sym_relation_contains_key_token2,
  [16798] = 1,
    ACTIONS(2704), 1,
      aux_sym_relation_contains_key_token2,
  [16802] = 1,
    ACTIONS(2706), 1,
      sym_object_name,
  [16806] = 1,
    ACTIONS(2708), 1,
      anon_sym_LPAREN,
  [16810] = 1,
    ACTIONS(2710), 1,
      anon_sym_RPAREN,
  [16814] = 1,
    ACTIONS(2712), 1,
      anon_sym_RPAREN,
  [16818] = 1,
    ACTIONS(2714), 1,
      aux_sym_delete_statement_token3,
  [16822] = 1,
    ACTIONS(2716), 1,
      sym_object_name,
  [16826] = 1,
    ACTIONS(2718), 1,
      aux_sym_create_function_token2,
  [16830] = 1,
    ACTIONS(2720), 1,
      sym_object_name,
  [16834] = 1,
    ACTIONS(2722), 1,
      sym_code_block,
  [16838] = 1,
    ACTIONS(2724), 1,
      aux_sym_select_element_token1,
  [16842] = 1,
    ACTIONS(2726), 1,
      sym_object_name,
  [16846] = 1,
    ACTIONS(2728), 1,
      anon_sym_LPAREN,
  [16850] = 1,
    ACTIONS(2730), 1,
      sym_code_block,
  [16854] = 1,
    ACTIONS(2732), 1,
      aux_sym_select_element_token1,
  [16858] = 1,
    ACTIONS(2734), 1,
      sym_object_name,
  [16862] = 1,
    ACTIONS(2736), 1,
      sym_decimal_literal,
  [16866] = 1,
    ACTIONS(2738), 1,
      sym_object_name,
  [16870] = 1,
    ACTIONS(2740), 1,
      aux_sym_create_aggregate_token6,
  [16874] = 1,
    ACTIONS(2742), 1,
      sym_object_name,
  [16878] = 1,
    ACTIONS(2744), 1,
      anon_sym_RBRACK,
  [16882] = 1,
    ACTIONS(2746), 1,
      sym_code_block,
  [16886] = 1,
    ACTIONS(2748), 1,
      aux_sym_select_element_token1,
  [16890] = 1,
    ACTIONS(2750), 1,
      sym_object_name,
  [16894] = 1,
    ACTIONS(2752), 1,
      aux_sym_create_aggregate_token6,
  [16898] = 1,
    ACTIONS(2754), 1,
      aux_sym_order_spec_token2,
  [16902] = 1,
    ACTIONS(2756), 1,
      sym_decimal_literal,
  [16906] = 1,
    ACTIONS(2758), 1,
      aux_sym_select_statement_token5,
  [16910] = 1,
    ACTIONS(2760), 1,
      anon_sym_RPAREN,
  [16914] = 1,
    ACTIONS(2762), 1,
      sym_object_name,
  [16918] = 1,
    ACTIONS(2764), 1,
      sym_object_name,
  [16922] = 1,
    ACTIONS(2766), 1,
      sym_object_name,
  [16926] = 1,
    ACTIONS(2768), 1,
      aux_sym_create_materialized_view_token2,
  [16930] = 1,
    ACTIONS(2770), 1,
      sym_object_name,
  [16934] = 1,
    ACTIONS(2772), 1,
      aux_sym_create_materialized_view_token1,
  [16938] = 1,
    ACTIONS(2774), 1,
      anon_sym_LPAREN,
  [16942] = 1,
    ACTIONS(2776), 1,
      anon_sym_LPAREN,
  [16946] = 1,
    ACTIONS(2778), 1,
      anon_sym_RPAREN,
  [16950] = 1,
    ACTIONS(2780), 1,
      aux_sym_create_materialized_view_token2,
  [16954] = 1,
    ACTIONS(2782), 1,
      aux_sym_update_token2,
  [16958] = 1,
    ACTIONS(2784), 1,
      sym_object_name,
  [16962] = 1,
    ACTIONS(2786), 1,
      aux_sym_delete_statement_token3,
  [16966] = 1,
    ACTIONS(2788), 1,
      aux_sym_delete_statement_token3,
  [16970] = 1,
    ACTIONS(2790), 1,
      aux_sym_delete_statement_token3,
  [16974] = 1,
    ACTIONS(2792), 1,
      aux_sym_select_element_token1,
  [16978] = 1,
    ACTIONS(2794), 1,
      sym_object_name,
  [16982] = 1,
    ACTIONS(2796), 1,
      aux_sym_create_function_token2,
  [16986] = 1,
    ACTIONS(2798), 1,
      aux_sym_insert_statement_token2,
  [16990] = 1,
    ACTIONS(2800), 1,
      sym_code_block,
  [16994] = 1,
    ACTIONS(2802), 1,
      aux_sym_select_element_token1,
  [16998] = 1,
    ACTIONS(2804), 1,
      aux_sym_delete_statement_token3,
  [17002] = 1,
    ACTIONS(2806), 1,
      sym_code_block,
  [17006] = 1,
    ACTIONS(2808), 1,
      aux_sym_create_aggregate_token5,
  [17010] = 1,
    ACTIONS(2810), 1,
      aux_sym_create_aggregate_token6,
  [17014] = 1,
    ACTIONS(2812), 1,
      aux_sym_delete_statement_token3,
  [17018] = 1,
    ACTIONS(2814), 1,
      aux_sym_delete_statement_token3,
  [17022] = 1,
    ACTIONS(2816), 1,
      sym_code_block,
  [17026] = 1,
    ACTIONS(2818), 1,
      aux_sym_delete_statement_token3,
  [17030] = 1,
    ACTIONS(2820), 1,
      aux_sym_relation_contains_key_token2,
  [17034] = 1,
    ACTIONS(2822), 1,
      aux_sym_delete_statement_token3,
  [17038] = 1,
    ACTIONS(2824), 1,
      aux_sym_create_materialized_view_token2,
  [17042] = 1,
    ACTIONS(2826), 1,
      aux_sym_insert_statement_token3,
  [17046] = 1,
    ACTIONS(2828), 1,
      anon_sym_RPAREN,
  [17050] = 1,
    ACTIONS(2830), 1,
      aux_sym_insert_statement_token3,
  [17054] = 1,
    ACTIONS(2832), 1,
      aux_sym_using_timestamp_spec_token1,
  [17058] = 1,
    ACTIONS(2834), 1,
      aux_sym_insert_statement_token3,
  [17062] = 1,
    ACTIONS(2836), 1,
      sym_code_block,
  [17066] = 1,
    ACTIONS(2838), 1,
      aux_sym_select_element_token1,
  [17070] = 1,
    ACTIONS(2840), 1,
      sym_object_name,
  [17074] = 1,
    ACTIONS(2842), 1,
      aux_sym_insert_statement_token3,
  [17078] = 1,
    ACTIONS(2844), 1,
      sym_code_block,
  [17082] = 1,
    ACTIONS(2846), 1,
      aux_sym_insert_statement_token3,
  [17086] = 1,
    ACTIONS(2848), 1,
      sym_object_name,
  [17090] = 1,
    ACTIONS(2850), 1,
      aux_sym_insert_statement_token3,
  [17094] = 1,
    ACTIONS(2852), 1,
      aux_sym_create_materialized_view_token2,
  [17098] = 1,
    ACTIONS(2854), 1,
      aux_sym_insert_statement_token3,
  [17102] = 1,
    ACTIONS(2856), 1,
      aux_sym_create_index_token3,
  [17106] = 1,
    ACTIONS(2858), 1,
      anon_sym_LPAREN,
  [17110] = 1,
    ACTIONS(2860), 1,
      anon_sym_RPAREN,
  [17114] = 1,
    ACTIONS(2862), 1,
      anon_sym_RPAREN,
  [17118] = 1,
    ACTIONS(2864), 1,
      aux_sym_insert_statement_token3,
  [17122] = 1,
    ACTIONS(2866), 1,
      aux_sym_create_index_token3,
  [17126] = 1,
    ACTIONS(2868), 1,
      aux_sym_insert_statement_token3,
  [17130] = 1,
    ACTIONS(2870), 1,
      sym_object_name,
  [17134] = 1,
    ACTIONS(2872), 1,
      sym_object_name,
  [17138] = 1,
    ACTIONS(2872), 1,
      anon_sym_STAR,
  [17142] = 1,
    ACTIONS(2874), 1,
      sym_code_block,
  [17146] = 1,
    ACTIONS(2876), 1,
      aux_sym_select_element_token1,
  [17150] = 1,
    ACTIONS(2878), 1,
      sym_object_name,
  [17154] = 1,
    ACTIONS(2880), 1,
      aux_sym_create_aggregate_token6,
  [17158] = 1,
    ACTIONS(2882), 1,
      aux_sym_insert_statement_token2,
  [17162] = 1,
    ACTIONS(2884), 1,
      sym_object_name,
  [17166] = 1,
    ACTIONS(2886), 1,
      sym_object_name,
  [17170] = 1,
    ACTIONS(2888), 1,
      aux_sym_drop_materialized_view_token2,
  [17174] = 1,
    ACTIONS(2890), 1,
      sym_object_name,
  [17178] = 1,
    ACTIONS(2892), 1,
      sym_object_name,
  [17182] = 1,
    ACTIONS(2894), 1,
      sym_object_name,
  [17186] = 1,
    ACTIONS(2896), 1,
      sym_code_block,
  [17190] = 1,
    ACTIONS(2898), 1,
      aux_sym_create_index_token3,
  [17194] = 1,
    ACTIONS(2900), 1,
      anon_sym_RPAREN,
  [17198] = 1,
    ACTIONS(2902), 1,
      aux_sym_create_index_token3,
  [17202] = 1,
    ACTIONS(2904), 1,
      aux_sym_drop_materialized_view_token2,
  [17206] = 1,
    ACTIONS(2906), 1,
      aux_sym_create_aggregate_token2,
  [17210] = 1,
    ACTIONS(2908), 1,
      aux_sym_drop_materialized_view_token2,
  [17214] = 1,
    ACTIONS(2910), 1,
      sym_object_name,
  [17218] = 1,
    ACTIONS(2912), 1,
      sym_object_name,
  [17222] = 1,
    ACTIONS(2914), 1,
      aux_sym_begin_batch_token4,
  [17226] = 1,
    ACTIONS(2916), 1,
      sym_object_name,
  [17230] = 1,
    ACTIONS(2918), 1,
      ts_builtin_sym_end,
  [17234] = 1,
    ACTIONS(2920), 1,
      aux_sym_begin_batch_token4,
  [17238] = 1,
    ACTIONS(2922), 1,
      sym_object_name,
  [17242] = 1,
    ACTIONS(2924), 1,
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
  [SMALL_STATE(63)] = 2224,
  [SMALL_STATE(64)] = 2251,
  [SMALL_STATE(65)] = 2282,
  [SMALL_STATE(66)] = 2309,
  [SMALL_STATE(67)] = 2336,
  [SMALL_STATE(68)] = 2367,
  [SMALL_STATE(69)] = 2407,
  [SMALL_STATE(70)] = 2437,
  [SMALL_STATE(71)] = 2463,
  [SMALL_STATE(72)] = 2503,
  [SMALL_STATE(73)] = 2543,
  [SMALL_STATE(74)] = 2568,
  [SMALL_STATE(75)] = 2593,
  [SMALL_STATE(76)] = 2618,
  [SMALL_STATE(77)] = 2643,
  [SMALL_STATE(78)] = 2668,
  [SMALL_STATE(79)] = 2697,
  [SMALL_STATE(80)] = 2724,
  [SMALL_STATE(81)] = 2749,
  [SMALL_STATE(82)] = 2778,
  [SMALL_STATE(83)] = 2807,
  [SMALL_STATE(84)] = 2832,
  [SMALL_STATE(85)] = 2871,
  [SMALL_STATE(86)] = 2896,
  [SMALL_STATE(87)] = 2921,
  [SMALL_STATE(88)] = 2946,
  [SMALL_STATE(89)] = 2970,
  [SMALL_STATE(90)] = 2994,
  [SMALL_STATE(91)] = 3028,
  [SMALL_STATE(92)] = 3052,
  [SMALL_STATE(93)] = 3076,
  [SMALL_STATE(94)] = 3110,
  [SMALL_STATE(95)] = 3138,
  [SMALL_STATE(96)] = 3172,
  [SMALL_STATE(97)] = 3196,
  [SMALL_STATE(98)] = 3221,
  [SMALL_STATE(99)] = 3246,
  [SMALL_STATE(100)] = 3269,
  [SMALL_STATE(101)] = 3296,
  [SMALL_STATE(102)] = 3321,
  [SMALL_STATE(103)] = 3346,
  [SMALL_STATE(104)] = 3374,
  [SMALL_STATE(105)] = 3396,
  [SMALL_STATE(106)] = 3424,
  [SMALL_STATE(107)] = 3448,
  [SMALL_STATE(108)] = 3476,
  [SMALL_STATE(109)] = 3498,
  [SMALL_STATE(110)] = 3520,
  [SMALL_STATE(111)] = 3546,
  [SMALL_STATE(112)] = 3568,
  [SMALL_STATE(113)] = 3590,
  [SMALL_STATE(114)] = 3618,
  [SMALL_STATE(115)] = 3640,
  [SMALL_STATE(116)] = 3668,
  [SMALL_STATE(117)] = 3690,
  [SMALL_STATE(118)] = 3718,
  [SMALL_STATE(119)] = 3746,
  [SMALL_STATE(120)] = 3768,
  [SMALL_STATE(121)] = 3794,
  [SMALL_STATE(122)] = 3816,
  [SMALL_STATE(123)] = 3838,
  [SMALL_STATE(124)] = 3864,
  [SMALL_STATE(125)] = 3892,
  [SMALL_STATE(126)] = 3920,
  [SMALL_STATE(127)] = 3946,
  [SMALL_STATE(128)] = 3968,
  [SMALL_STATE(129)] = 3994,
  [SMALL_STATE(130)] = 4022,
  [SMALL_STATE(131)] = 4048,
  [SMALL_STATE(132)] = 4070,
  [SMALL_STATE(133)] = 4098,
  [SMALL_STATE(134)] = 4126,
  [SMALL_STATE(135)] = 4147,
  [SMALL_STATE(136)] = 4168,
  [SMALL_STATE(137)] = 4193,
  [SMALL_STATE(138)] = 4216,
  [SMALL_STATE(139)] = 4241,
  [SMALL_STATE(140)] = 4264,
  [SMALL_STATE(141)] = 4287,
  [SMALL_STATE(142)] = 4312,
  [SMALL_STATE(143)] = 4337,
  [SMALL_STATE(144)] = 4362,
  [SMALL_STATE(145)] = 4387,
  [SMALL_STATE(146)] = 4412,
  [SMALL_STATE(147)] = 4433,
  [SMALL_STATE(148)] = 4458,
  [SMALL_STATE(149)] = 4481,
  [SMALL_STATE(150)] = 4506,
  [SMALL_STATE(151)] = 4531,
  [SMALL_STATE(152)] = 4556,
  [SMALL_STATE(153)] = 4577,
  [SMALL_STATE(154)] = 4602,
  [SMALL_STATE(155)] = 4627,
  [SMALL_STATE(156)] = 4652,
  [SMALL_STATE(157)] = 4677,
  [SMALL_STATE(158)] = 4698,
  [SMALL_STATE(159)] = 4719,
  [SMALL_STATE(160)] = 4754,
  [SMALL_STATE(161)] = 4779,
  [SMALL_STATE(162)] = 4804,
  [SMALL_STATE(163)] = 4829,
  [SMALL_STATE(164)] = 4850,
  [SMALL_STATE(165)] = 4875,
  [SMALL_STATE(166)] = 4896,
  [SMALL_STATE(167)] = 4921,
  [SMALL_STATE(168)] = 4942,
  [SMALL_STATE(169)] = 4967,
  [SMALL_STATE(170)] = 4992,
  [SMALL_STATE(171)] = 5013,
  [SMALL_STATE(172)] = 5034,
  [SMALL_STATE(173)] = 5055,
  [SMALL_STATE(174)] = 5080,
  [SMALL_STATE(175)] = 5105,
  [SMALL_STATE(176)] = 5130,
  [SMALL_STATE(177)] = 5155,
  [SMALL_STATE(178)] = 5180,
  [SMALL_STATE(179)] = 5205,
  [SMALL_STATE(180)] = 5226,
  [SMALL_STATE(181)] = 5251,
  [SMALL_STATE(182)] = 5276,
  [SMALL_STATE(183)] = 5301,
  [SMALL_STATE(184)] = 5326,
  [SMALL_STATE(185)] = 5351,
  [SMALL_STATE(186)] = 5376,
  [SMALL_STATE(187)] = 5401,
  [SMALL_STATE(188)] = 5426,
  [SMALL_STATE(189)] = 5451,
  [SMALL_STATE(190)] = 5476,
  [SMALL_STATE(191)] = 5501,
  [SMALL_STATE(192)] = 5522,
  [SMALL_STATE(193)] = 5547,
  [SMALL_STATE(194)] = 5572,
  [SMALL_STATE(195)] = 5593,
  [SMALL_STATE(196)] = 5614,
  [SMALL_STATE(197)] = 5639,
  [SMALL_STATE(198)] = 5664,
  [SMALL_STATE(199)] = 5689,
  [SMALL_STATE(200)] = 5714,
  [SMALL_STATE(201)] = 5739,
  [SMALL_STATE(202)] = 5764,
  [SMALL_STATE(203)] = 5789,
  [SMALL_STATE(204)] = 5814,
  [SMALL_STATE(205)] = 5835,
  [SMALL_STATE(206)] = 5860,
  [SMALL_STATE(207)] = 5885,
  [SMALL_STATE(208)] = 5906,
  [SMALL_STATE(209)] = 5926,
  [SMALL_STATE(210)] = 5948,
  [SMALL_STATE(211)] = 5968,
  [SMALL_STATE(212)] = 5990,
  [SMALL_STATE(213)] = 6012,
  [SMALL_STATE(214)] = 6034,
  [SMALL_STATE(215)] = 6056,
  [SMALL_STATE(216)] = 6076,
  [SMALL_STATE(217)] = 6096,
  [SMALL_STATE(218)] = 6128,
  [SMALL_STATE(219)] = 6150,
  [SMALL_STATE(220)] = 6170,
  [SMALL_STATE(221)] = 6190,
  [SMALL_STATE(222)] = 6212,
  [SMALL_STATE(223)] = 6234,
  [SMALL_STATE(224)] = 6256,
  [SMALL_STATE(225)] = 6278,
  [SMALL_STATE(226)] = 6300,
  [SMALL_STATE(227)] = 6322,
  [SMALL_STATE(228)] = 6342,
  [SMALL_STATE(229)] = 6364,
  [SMALL_STATE(230)] = 6384,
  [SMALL_STATE(231)] = 6406,
  [SMALL_STATE(232)] = 6428,
  [SMALL_STATE(233)] = 6450,
  [SMALL_STATE(234)] = 6472,
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
  [SMALL_STATE(354)] = 8824,
  [SMALL_STATE(355)] = 8843,
  [SMALL_STATE(356)] = 8862,
  [SMALL_STATE(357)] = 8881,
  [SMALL_STATE(358)] = 8900,
  [SMALL_STATE(359)] = 8919,
  [SMALL_STATE(360)] = 8938,
  [SMALL_STATE(361)] = 8957,
  [SMALL_STATE(362)] = 8976,
  [SMALL_STATE(363)] = 8995,
  [SMALL_STATE(364)] = 9014,
  [SMALL_STATE(365)] = 9033,
  [SMALL_STATE(366)] = 9052,
  [SMALL_STATE(367)] = 9071,
  [SMALL_STATE(368)] = 9090,
  [SMALL_STATE(369)] = 9109,
  [SMALL_STATE(370)] = 9128,
  [SMALL_STATE(371)] = 9147,
  [SMALL_STATE(372)] = 9166,
  [SMALL_STATE(373)] = 9185,
  [SMALL_STATE(374)] = 9204,
  [SMALL_STATE(375)] = 9223,
  [SMALL_STATE(376)] = 9242,
  [SMALL_STATE(377)] = 9261,
  [SMALL_STATE(378)] = 9280,
  [SMALL_STATE(379)] = 9299,
  [SMALL_STATE(380)] = 9318,
  [SMALL_STATE(381)] = 9337,
  [SMALL_STATE(382)] = 9356,
  [SMALL_STATE(383)] = 9375,
  [SMALL_STATE(384)] = 9394,
  [SMALL_STATE(385)] = 9413,
  [SMALL_STATE(386)] = 9432,
  [SMALL_STATE(387)] = 9451,
  [SMALL_STATE(388)] = 9470,
  [SMALL_STATE(389)] = 9489,
  [SMALL_STATE(390)] = 9508,
  [SMALL_STATE(391)] = 9527,
  [SMALL_STATE(392)] = 9546,
  [SMALL_STATE(393)] = 9565,
  [SMALL_STATE(394)] = 9584,
  [SMALL_STATE(395)] = 9603,
  [SMALL_STATE(396)] = 9622,
  [SMALL_STATE(397)] = 9641,
  [SMALL_STATE(398)] = 9660,
  [SMALL_STATE(399)] = 9679,
  [SMALL_STATE(400)] = 9698,
  [SMALL_STATE(401)] = 9717,
  [SMALL_STATE(402)] = 9736,
  [SMALL_STATE(403)] = 9755,
  [SMALL_STATE(404)] = 9774,
  [SMALL_STATE(405)] = 9793,
  [SMALL_STATE(406)] = 9812,
  [SMALL_STATE(407)] = 9831,
  [SMALL_STATE(408)] = 9850,
  [SMALL_STATE(409)] = 9869,
  [SMALL_STATE(410)] = 9888,
  [SMALL_STATE(411)] = 9907,
  [SMALL_STATE(412)] = 9926,
  [SMALL_STATE(413)] = 9945,
  [SMALL_STATE(414)] = 9964,
  [SMALL_STATE(415)] = 9983,
  [SMALL_STATE(416)] = 10002,
  [SMALL_STATE(417)] = 10021,
  [SMALL_STATE(418)] = 10040,
  [SMALL_STATE(419)] = 10059,
  [SMALL_STATE(420)] = 10078,
  [SMALL_STATE(421)] = 10097,
  [SMALL_STATE(422)] = 10116,
  [SMALL_STATE(423)] = 10135,
  [SMALL_STATE(424)] = 10154,
  [SMALL_STATE(425)] = 10173,
  [SMALL_STATE(426)] = 10192,
  [SMALL_STATE(427)] = 10211,
  [SMALL_STATE(428)] = 10230,
  [SMALL_STATE(429)] = 10248,
  [SMALL_STATE(430)] = 10278,
  [SMALL_STATE(431)] = 10303,
  [SMALL_STATE(432)] = 10328,
  [SMALL_STATE(433)] = 10353,
  [SMALL_STATE(434)] = 10378,
  [SMALL_STATE(435)] = 10403,
  [SMALL_STATE(436)] = 10428,
  [SMALL_STATE(437)] = 10453,
  [SMALL_STATE(438)] = 10478,
  [SMALL_STATE(439)] = 10503,
  [SMALL_STATE(440)] = 10531,
  [SMALL_STATE(441)] = 10557,
  [SMALL_STATE(442)] = 10580,
  [SMALL_STATE(443)] = 10600,
  [SMALL_STATE(444)] = 10620,
  [SMALL_STATE(445)] = 10646,
  [SMALL_STATE(446)] = 10668,
  [SMALL_STATE(447)] = 10688,
  [SMALL_STATE(448)] = 10722,
  [SMALL_STATE(449)] = 10742,
  [SMALL_STATE(450)] = 10773,
  [SMALL_STATE(451)] = 10790,
  [SMALL_STATE(452)] = 10813,
  [SMALL_STATE(453)] = 10832,
  [SMALL_STATE(454)] = 10849,
  [SMALL_STATE(455)] = 10872,
  [SMALL_STATE(456)] = 10891,
  [SMALL_STATE(457)] = 10907,
  [SMALL_STATE(458)] = 10923,
  [SMALL_STATE(459)] = 10939,
  [SMALL_STATE(460)] = 10955,
  [SMALL_STATE(461)] = 10971,
  [SMALL_STATE(462)] = 10987,
  [SMALL_STATE(463)] = 11003,
  [SMALL_STATE(464)] = 11019,
  [SMALL_STATE(465)] = 11035,
  [SMALL_STATE(466)] = 11051,
  [SMALL_STATE(467)] = 11067,
  [SMALL_STATE(468)] = 11083,
  [SMALL_STATE(469)] = 11099,
  [SMALL_STATE(470)] = 11120,
  [SMALL_STATE(471)] = 11141,
  [SMALL_STATE(472)] = 11162,
  [SMALL_STATE(473)] = 11183,
  [SMALL_STATE(474)] = 11204,
  [SMALL_STATE(475)] = 11226,
  [SMALL_STATE(476)] = 11248,
  [SMALL_STATE(477)] = 11270,
  [SMALL_STATE(478)] = 11284,
  [SMALL_STATE(479)] = 11306,
  [SMALL_STATE(480)] = 11328,
  [SMALL_STATE(481)] = 11350,
  [SMALL_STATE(482)] = 11364,
  [SMALL_STATE(483)] = 11386,
  [SMALL_STATE(484)] = 11408,
  [SMALL_STATE(485)] = 11428,
  [SMALL_STATE(486)] = 11450,
  [SMALL_STATE(487)] = 11472,
  [SMALL_STATE(488)] = 11490,
  [SMALL_STATE(489)] = 11512,
  [SMALL_STATE(490)] = 11534,
  [SMALL_STATE(491)] = 11553,
  [SMALL_STATE(492)] = 11572,
  [SMALL_STATE(493)] = 11583,
  [SMALL_STATE(494)] = 11598,
  [SMALL_STATE(495)] = 11617,
  [SMALL_STATE(496)] = 11628,
  [SMALL_STATE(497)] = 11647,
  [SMALL_STATE(498)] = 11664,
  [SMALL_STATE(499)] = 11681,
  [SMALL_STATE(500)] = 11700,
  [SMALL_STATE(501)] = 11708,
  [SMALL_STATE(502)] = 11716,
  [SMALL_STATE(503)] = 11724,
  [SMALL_STATE(504)] = 11740,
  [SMALL_STATE(505)] = 11754,
  [SMALL_STATE(506)] = 11770,
  [SMALL_STATE(507)] = 11784,
  [SMALL_STATE(508)] = 11800,
  [SMALL_STATE(509)] = 11812,
  [SMALL_STATE(510)] = 11820,
  [SMALL_STATE(511)] = 11836,
  [SMALL_STATE(512)] = 11848,
  [SMALL_STATE(513)] = 11864,
  [SMALL_STATE(514)] = 11878,
  [SMALL_STATE(515)] = 11886,
  [SMALL_STATE(516)] = 11902,
  [SMALL_STATE(517)] = 11914,
  [SMALL_STATE(518)] = 11926,
  [SMALL_STATE(519)] = 11942,
  [SMALL_STATE(520)] = 11956,
  [SMALL_STATE(521)] = 11964,
  [SMALL_STATE(522)] = 11972,
  [SMALL_STATE(523)] = 11985,
  [SMALL_STATE(524)] = 11998,
  [SMALL_STATE(525)] = 12011,
  [SMALL_STATE(526)] = 12024,
  [SMALL_STATE(527)] = 12037,
  [SMALL_STATE(528)] = 12050,
  [SMALL_STATE(529)] = 12063,
  [SMALL_STATE(530)] = 12076,
  [SMALL_STATE(531)] = 12089,
  [SMALL_STATE(532)] = 12102,
  [SMALL_STATE(533)] = 12115,
  [SMALL_STATE(534)] = 12128,
  [SMALL_STATE(535)] = 12139,
  [SMALL_STATE(536)] = 12152,
  [SMALL_STATE(537)] = 12165,
  [SMALL_STATE(538)] = 12178,
  [SMALL_STATE(539)] = 12191,
  [SMALL_STATE(540)] = 12204,
  [SMALL_STATE(541)] = 12217,
  [SMALL_STATE(542)] = 12228,
  [SMALL_STATE(543)] = 12241,
  [SMALL_STATE(544)] = 12248,
  [SMALL_STATE(545)] = 12261,
  [SMALL_STATE(546)] = 12274,
  [SMALL_STATE(547)] = 12287,
  [SMALL_STATE(548)] = 12300,
  [SMALL_STATE(549)] = 12313,
  [SMALL_STATE(550)] = 12326,
  [SMALL_STATE(551)] = 12339,
  [SMALL_STATE(552)] = 12352,
  [SMALL_STATE(553)] = 12365,
  [SMALL_STATE(554)] = 12378,
  [SMALL_STATE(555)] = 12387,
  [SMALL_STATE(556)] = 12400,
  [SMALL_STATE(557)] = 12413,
  [SMALL_STATE(558)] = 12426,
  [SMALL_STATE(559)] = 12439,
  [SMALL_STATE(560)] = 12452,
  [SMALL_STATE(561)] = 12465,
  [SMALL_STATE(562)] = 12478,
  [SMALL_STATE(563)] = 12491,
  [SMALL_STATE(564)] = 12498,
  [SMALL_STATE(565)] = 12511,
  [SMALL_STATE(566)] = 12524,
  [SMALL_STATE(567)] = 12537,
  [SMALL_STATE(568)] = 12550,
  [SMALL_STATE(569)] = 12561,
  [SMALL_STATE(570)] = 12574,
  [SMALL_STATE(571)] = 12587,
  [SMALL_STATE(572)] = 12598,
  [SMALL_STATE(573)] = 12611,
  [SMALL_STATE(574)] = 12624,
  [SMALL_STATE(575)] = 12637,
  [SMALL_STATE(576)] = 12647,
  [SMALL_STATE(577)] = 12657,
  [SMALL_STATE(578)] = 12667,
  [SMALL_STATE(579)] = 12677,
  [SMALL_STATE(580)] = 12687,
  [SMALL_STATE(581)] = 12697,
  [SMALL_STATE(582)] = 12707,
  [SMALL_STATE(583)] = 12715,
  [SMALL_STATE(584)] = 12725,
  [SMALL_STATE(585)] = 12735,
  [SMALL_STATE(586)] = 12745,
  [SMALL_STATE(587)] = 12755,
  [SMALL_STATE(588)] = 12765,
  [SMALL_STATE(589)] = 12775,
  [SMALL_STATE(590)] = 12785,
  [SMALL_STATE(591)] = 12795,
  [SMALL_STATE(592)] = 12805,
  [SMALL_STATE(593)] = 12815,
  [SMALL_STATE(594)] = 12825,
  [SMALL_STATE(595)] = 12835,
  [SMALL_STATE(596)] = 12845,
  [SMALL_STATE(597)] = 12855,
  [SMALL_STATE(598)] = 12865,
  [SMALL_STATE(599)] = 12875,
  [SMALL_STATE(600)] = 12885,
  [SMALL_STATE(601)] = 12895,
  [SMALL_STATE(602)] = 12905,
  [SMALL_STATE(603)] = 12915,
  [SMALL_STATE(604)] = 12925,
  [SMALL_STATE(605)] = 12935,
  [SMALL_STATE(606)] = 12945,
  [SMALL_STATE(607)] = 12955,
  [SMALL_STATE(608)] = 12965,
  [SMALL_STATE(609)] = 12975,
  [SMALL_STATE(610)] = 12985,
  [SMALL_STATE(611)] = 12995,
  [SMALL_STATE(612)] = 13005,
  [SMALL_STATE(613)] = 13015,
  [SMALL_STATE(614)] = 13025,
  [SMALL_STATE(615)] = 13031,
  [SMALL_STATE(616)] = 13041,
  [SMALL_STATE(617)] = 13051,
  [SMALL_STATE(618)] = 13061,
  [SMALL_STATE(619)] = 13071,
  [SMALL_STATE(620)] = 13081,
  [SMALL_STATE(621)] = 13091,
  [SMALL_STATE(622)] = 13101,
  [SMALL_STATE(623)] = 13111,
  [SMALL_STATE(624)] = 13121,
  [SMALL_STATE(625)] = 13131,
  [SMALL_STATE(626)] = 13141,
  [SMALL_STATE(627)] = 13151,
  [SMALL_STATE(628)] = 13161,
  [SMALL_STATE(629)] = 13171,
  [SMALL_STATE(630)] = 13181,
  [SMALL_STATE(631)] = 13191,
  [SMALL_STATE(632)] = 13201,
  [SMALL_STATE(633)] = 13211,
  [SMALL_STATE(634)] = 13221,
  [SMALL_STATE(635)] = 13231,
  [SMALL_STATE(636)] = 13241,
  [SMALL_STATE(637)] = 13251,
  [SMALL_STATE(638)] = 13261,
  [SMALL_STATE(639)] = 13271,
  [SMALL_STATE(640)] = 13281,
  [SMALL_STATE(641)] = 13291,
  [SMALL_STATE(642)] = 13301,
  [SMALL_STATE(643)] = 13311,
  [SMALL_STATE(644)] = 13321,
  [SMALL_STATE(645)] = 13331,
  [SMALL_STATE(646)] = 13339,
  [SMALL_STATE(647)] = 13349,
  [SMALL_STATE(648)] = 13359,
  [SMALL_STATE(649)] = 13369,
  [SMALL_STATE(650)] = 13379,
  [SMALL_STATE(651)] = 13389,
  [SMALL_STATE(652)] = 13399,
  [SMALL_STATE(653)] = 13409,
  [SMALL_STATE(654)] = 13419,
  [SMALL_STATE(655)] = 13429,
  [SMALL_STATE(656)] = 13439,
  [SMALL_STATE(657)] = 13449,
  [SMALL_STATE(658)] = 13459,
  [SMALL_STATE(659)] = 13469,
  [SMALL_STATE(660)] = 13479,
  [SMALL_STATE(661)] = 13489,
  [SMALL_STATE(662)] = 13499,
  [SMALL_STATE(663)] = 13509,
  [SMALL_STATE(664)] = 13519,
  [SMALL_STATE(665)] = 13529,
  [SMALL_STATE(666)] = 13539,
  [SMALL_STATE(667)] = 13549,
  [SMALL_STATE(668)] = 13559,
  [SMALL_STATE(669)] = 13569,
  [SMALL_STATE(670)] = 13579,
  [SMALL_STATE(671)] = 13589,
  [SMALL_STATE(672)] = 13595,
  [SMALL_STATE(673)] = 13605,
  [SMALL_STATE(674)] = 13615,
  [SMALL_STATE(675)] = 13625,
  [SMALL_STATE(676)] = 13635,
  [SMALL_STATE(677)] = 13645,
  [SMALL_STATE(678)] = 13655,
  [SMALL_STATE(679)] = 13665,
  [SMALL_STATE(680)] = 13675,
  [SMALL_STATE(681)] = 13685,
  [SMALL_STATE(682)] = 13695,
  [SMALL_STATE(683)] = 13705,
  [SMALL_STATE(684)] = 13713,
  [SMALL_STATE(685)] = 13723,
  [SMALL_STATE(686)] = 13733,
  [SMALL_STATE(687)] = 13743,
  [SMALL_STATE(688)] = 13753,
  [SMALL_STATE(689)] = 13763,
  [SMALL_STATE(690)] = 13773,
  [SMALL_STATE(691)] = 13783,
  [SMALL_STATE(692)] = 13793,
  [SMALL_STATE(693)] = 13803,
  [SMALL_STATE(694)] = 13811,
  [SMALL_STATE(695)] = 13821,
  [SMALL_STATE(696)] = 13831,
  [SMALL_STATE(697)] = 13841,
  [SMALL_STATE(698)] = 13851,
  [SMALL_STATE(699)] = 13861,
  [SMALL_STATE(700)] = 13871,
  [SMALL_STATE(701)] = 13881,
  [SMALL_STATE(702)] = 13891,
  [SMALL_STATE(703)] = 13901,
  [SMALL_STATE(704)] = 13911,
  [SMALL_STATE(705)] = 13921,
  [SMALL_STATE(706)] = 13931,
  [SMALL_STATE(707)] = 13939,
  [SMALL_STATE(708)] = 13947,
  [SMALL_STATE(709)] = 13957,
  [SMALL_STATE(710)] = 13967,
  [SMALL_STATE(711)] = 13977,
  [SMALL_STATE(712)] = 13987,
  [SMALL_STATE(713)] = 13997,
  [SMALL_STATE(714)] = 14005,
  [SMALL_STATE(715)] = 14015,
  [SMALL_STATE(716)] = 14025,
  [SMALL_STATE(717)] = 14035,
  [SMALL_STATE(718)] = 14045,
  [SMALL_STATE(719)] = 14055,
  [SMALL_STATE(720)] = 14065,
  [SMALL_STATE(721)] = 14075,
  [SMALL_STATE(722)] = 14085,
  [SMALL_STATE(723)] = 14092,
  [SMALL_STATE(724)] = 14099,
  [SMALL_STATE(725)] = 14104,
  [SMALL_STATE(726)] = 14111,
  [SMALL_STATE(727)] = 14118,
  [SMALL_STATE(728)] = 14123,
  [SMALL_STATE(729)] = 14128,
  [SMALL_STATE(730)] = 14135,
  [SMALL_STATE(731)] = 14140,
  [SMALL_STATE(732)] = 14145,
  [SMALL_STATE(733)] = 14152,
  [SMALL_STATE(734)] = 14159,
  [SMALL_STATE(735)] = 14166,
  [SMALL_STATE(736)] = 14173,
  [SMALL_STATE(737)] = 14180,
  [SMALL_STATE(738)] = 14187,
  [SMALL_STATE(739)] = 14194,
  [SMALL_STATE(740)] = 14199,
  [SMALL_STATE(741)] = 14206,
  [SMALL_STATE(742)] = 14213,
  [SMALL_STATE(743)] = 14220,
  [SMALL_STATE(744)] = 14227,
  [SMALL_STATE(745)] = 14234,
  [SMALL_STATE(746)] = 14241,
  [SMALL_STATE(747)] = 14248,
  [SMALL_STATE(748)] = 14255,
  [SMALL_STATE(749)] = 14262,
  [SMALL_STATE(750)] = 14269,
  [SMALL_STATE(751)] = 14276,
  [SMALL_STATE(752)] = 14283,
  [SMALL_STATE(753)] = 14288,
  [SMALL_STATE(754)] = 14293,
  [SMALL_STATE(755)] = 14300,
  [SMALL_STATE(756)] = 14307,
  [SMALL_STATE(757)] = 14314,
  [SMALL_STATE(758)] = 14321,
  [SMALL_STATE(759)] = 14328,
  [SMALL_STATE(760)] = 14335,
  [SMALL_STATE(761)] = 14342,
  [SMALL_STATE(762)] = 14347,
  [SMALL_STATE(763)] = 14354,
  [SMALL_STATE(764)] = 14361,
  [SMALL_STATE(765)] = 14368,
  [SMALL_STATE(766)] = 14375,
  [SMALL_STATE(767)] = 14382,
  [SMALL_STATE(768)] = 14387,
  [SMALL_STATE(769)] = 14392,
  [SMALL_STATE(770)] = 14399,
  [SMALL_STATE(771)] = 14406,
  [SMALL_STATE(772)] = 14411,
  [SMALL_STATE(773)] = 14418,
  [SMALL_STATE(774)] = 14425,
  [SMALL_STATE(775)] = 14432,
  [SMALL_STATE(776)] = 14439,
  [SMALL_STATE(777)] = 14446,
  [SMALL_STATE(778)] = 14453,
  [SMALL_STATE(779)] = 14458,
  [SMALL_STATE(780)] = 14465,
  [SMALL_STATE(781)] = 14472,
  [SMALL_STATE(782)] = 14479,
  [SMALL_STATE(783)] = 14486,
  [SMALL_STATE(784)] = 14493,
  [SMALL_STATE(785)] = 14500,
  [SMALL_STATE(786)] = 14507,
  [SMALL_STATE(787)] = 14514,
  [SMALL_STATE(788)] = 14519,
  [SMALL_STATE(789)] = 14526,
  [SMALL_STATE(790)] = 14533,
  [SMALL_STATE(791)] = 14540,
  [SMALL_STATE(792)] = 14547,
  [SMALL_STATE(793)] = 14552,
  [SMALL_STATE(794)] = 14559,
  [SMALL_STATE(795)] = 14566,
  [SMALL_STATE(796)] = 14573,
  [SMALL_STATE(797)] = 14580,
  [SMALL_STATE(798)] = 14587,
  [SMALL_STATE(799)] = 14594,
  [SMALL_STATE(800)] = 14601,
  [SMALL_STATE(801)] = 14606,
  [SMALL_STATE(802)] = 14611,
  [SMALL_STATE(803)] = 14616,
  [SMALL_STATE(804)] = 14621,
  [SMALL_STATE(805)] = 14626,
  [SMALL_STATE(806)] = 14633,
  [SMALL_STATE(807)] = 14640,
  [SMALL_STATE(808)] = 14647,
  [SMALL_STATE(809)] = 14652,
  [SMALL_STATE(810)] = 14659,
  [SMALL_STATE(811)] = 14666,
  [SMALL_STATE(812)] = 14673,
  [SMALL_STATE(813)] = 14678,
  [SMALL_STATE(814)] = 14685,
  [SMALL_STATE(815)] = 14692,
  [SMALL_STATE(816)] = 14699,
  [SMALL_STATE(817)] = 14704,
  [SMALL_STATE(818)] = 14711,
  [SMALL_STATE(819)] = 14718,
  [SMALL_STATE(820)] = 14723,
  [SMALL_STATE(821)] = 14730,
  [SMALL_STATE(822)] = 14737,
  [SMALL_STATE(823)] = 14744,
  [SMALL_STATE(824)] = 14751,
  [SMALL_STATE(825)] = 14756,
  [SMALL_STATE(826)] = 14763,
  [SMALL_STATE(827)] = 14770,
  [SMALL_STATE(828)] = 14777,
  [SMALL_STATE(829)] = 14782,
  [SMALL_STATE(830)] = 14789,
  [SMALL_STATE(831)] = 14794,
  [SMALL_STATE(832)] = 14801,
  [SMALL_STATE(833)] = 14808,
  [SMALL_STATE(834)] = 14813,
  [SMALL_STATE(835)] = 14820,
  [SMALL_STATE(836)] = 14827,
  [SMALL_STATE(837)] = 14834,
  [SMALL_STATE(838)] = 14841,
  [SMALL_STATE(839)] = 14846,
  [SMALL_STATE(840)] = 14853,
  [SMALL_STATE(841)] = 14858,
  [SMALL_STATE(842)] = 14865,
  [SMALL_STATE(843)] = 14872,
  [SMALL_STATE(844)] = 14879,
  [SMALL_STATE(845)] = 14884,
  [SMALL_STATE(846)] = 14891,
  [SMALL_STATE(847)] = 14898,
  [SMALL_STATE(848)] = 14905,
  [SMALL_STATE(849)] = 14912,
  [SMALL_STATE(850)] = 14919,
  [SMALL_STATE(851)] = 14926,
  [SMALL_STATE(852)] = 14933,
  [SMALL_STATE(853)] = 14940,
  [SMALL_STATE(854)] = 14947,
  [SMALL_STATE(855)] = 14954,
  [SMALL_STATE(856)] = 14961,
  [SMALL_STATE(857)] = 14968,
  [SMALL_STATE(858)] = 14975,
  [SMALL_STATE(859)] = 14982,
  [SMALL_STATE(860)] = 14989,
  [SMALL_STATE(861)] = 14996,
  [SMALL_STATE(862)] = 15003,
  [SMALL_STATE(863)] = 15010,
  [SMALL_STATE(864)] = 15015,
  [SMALL_STATE(865)] = 15022,
  [SMALL_STATE(866)] = 15027,
  [SMALL_STATE(867)] = 15032,
  [SMALL_STATE(868)] = 15039,
  [SMALL_STATE(869)] = 15046,
  [SMALL_STATE(870)] = 15053,
  [SMALL_STATE(871)] = 15060,
  [SMALL_STATE(872)] = 15067,
  [SMALL_STATE(873)] = 15074,
  [SMALL_STATE(874)] = 15078,
  [SMALL_STATE(875)] = 15082,
  [SMALL_STATE(876)] = 15086,
  [SMALL_STATE(877)] = 15090,
  [SMALL_STATE(878)] = 15094,
  [SMALL_STATE(879)] = 15098,
  [SMALL_STATE(880)] = 15102,
  [SMALL_STATE(881)] = 15106,
  [SMALL_STATE(882)] = 15110,
  [SMALL_STATE(883)] = 15114,
  [SMALL_STATE(884)] = 15118,
  [SMALL_STATE(885)] = 15122,
  [SMALL_STATE(886)] = 15126,
  [SMALL_STATE(887)] = 15130,
  [SMALL_STATE(888)] = 15134,
  [SMALL_STATE(889)] = 15138,
  [SMALL_STATE(890)] = 15142,
  [SMALL_STATE(891)] = 15146,
  [SMALL_STATE(892)] = 15150,
  [SMALL_STATE(893)] = 15154,
  [SMALL_STATE(894)] = 15158,
  [SMALL_STATE(895)] = 15162,
  [SMALL_STATE(896)] = 15166,
  [SMALL_STATE(897)] = 15170,
  [SMALL_STATE(898)] = 15174,
  [SMALL_STATE(899)] = 15178,
  [SMALL_STATE(900)] = 15182,
  [SMALL_STATE(901)] = 15186,
  [SMALL_STATE(902)] = 15190,
  [SMALL_STATE(903)] = 15194,
  [SMALL_STATE(904)] = 15198,
  [SMALL_STATE(905)] = 15202,
  [SMALL_STATE(906)] = 15206,
  [SMALL_STATE(907)] = 15210,
  [SMALL_STATE(908)] = 15214,
  [SMALL_STATE(909)] = 15218,
  [SMALL_STATE(910)] = 15222,
  [SMALL_STATE(911)] = 15226,
  [SMALL_STATE(912)] = 15230,
  [SMALL_STATE(913)] = 15234,
  [SMALL_STATE(914)] = 15238,
  [SMALL_STATE(915)] = 15242,
  [SMALL_STATE(916)] = 15246,
  [SMALL_STATE(917)] = 15250,
  [SMALL_STATE(918)] = 15254,
  [SMALL_STATE(919)] = 15258,
  [SMALL_STATE(920)] = 15262,
  [SMALL_STATE(921)] = 15266,
  [SMALL_STATE(922)] = 15270,
  [SMALL_STATE(923)] = 15274,
  [SMALL_STATE(924)] = 15278,
  [SMALL_STATE(925)] = 15282,
  [SMALL_STATE(926)] = 15286,
  [SMALL_STATE(927)] = 15290,
  [SMALL_STATE(928)] = 15294,
  [SMALL_STATE(929)] = 15298,
  [SMALL_STATE(930)] = 15302,
  [SMALL_STATE(931)] = 15306,
  [SMALL_STATE(932)] = 15310,
  [SMALL_STATE(933)] = 15314,
  [SMALL_STATE(934)] = 15318,
  [SMALL_STATE(935)] = 15322,
  [SMALL_STATE(936)] = 15326,
  [SMALL_STATE(937)] = 15330,
  [SMALL_STATE(938)] = 15334,
  [SMALL_STATE(939)] = 15338,
  [SMALL_STATE(940)] = 15342,
  [SMALL_STATE(941)] = 15346,
  [SMALL_STATE(942)] = 15350,
  [SMALL_STATE(943)] = 15354,
  [SMALL_STATE(944)] = 15358,
  [SMALL_STATE(945)] = 15362,
  [SMALL_STATE(946)] = 15366,
  [SMALL_STATE(947)] = 15370,
  [SMALL_STATE(948)] = 15374,
  [SMALL_STATE(949)] = 15378,
  [SMALL_STATE(950)] = 15382,
  [SMALL_STATE(951)] = 15386,
  [SMALL_STATE(952)] = 15390,
  [SMALL_STATE(953)] = 15394,
  [SMALL_STATE(954)] = 15398,
  [SMALL_STATE(955)] = 15402,
  [SMALL_STATE(956)] = 15406,
  [SMALL_STATE(957)] = 15410,
  [SMALL_STATE(958)] = 15414,
  [SMALL_STATE(959)] = 15418,
  [SMALL_STATE(960)] = 15422,
  [SMALL_STATE(961)] = 15426,
  [SMALL_STATE(962)] = 15430,
  [SMALL_STATE(963)] = 15434,
  [SMALL_STATE(964)] = 15438,
  [SMALL_STATE(965)] = 15442,
  [SMALL_STATE(966)] = 15446,
  [SMALL_STATE(967)] = 15450,
  [SMALL_STATE(968)] = 15454,
  [SMALL_STATE(969)] = 15458,
  [SMALL_STATE(970)] = 15462,
  [SMALL_STATE(971)] = 15466,
  [SMALL_STATE(972)] = 15470,
  [SMALL_STATE(973)] = 15474,
  [SMALL_STATE(974)] = 15478,
  [SMALL_STATE(975)] = 15482,
  [SMALL_STATE(976)] = 15486,
  [SMALL_STATE(977)] = 15490,
  [SMALL_STATE(978)] = 15494,
  [SMALL_STATE(979)] = 15498,
  [SMALL_STATE(980)] = 15502,
  [SMALL_STATE(981)] = 15506,
  [SMALL_STATE(982)] = 15510,
  [SMALL_STATE(983)] = 15514,
  [SMALL_STATE(984)] = 15518,
  [SMALL_STATE(985)] = 15522,
  [SMALL_STATE(986)] = 15526,
  [SMALL_STATE(987)] = 15530,
  [SMALL_STATE(988)] = 15534,
  [SMALL_STATE(989)] = 15538,
  [SMALL_STATE(990)] = 15542,
  [SMALL_STATE(991)] = 15546,
  [SMALL_STATE(992)] = 15550,
  [SMALL_STATE(993)] = 15554,
  [SMALL_STATE(994)] = 15558,
  [SMALL_STATE(995)] = 15562,
  [SMALL_STATE(996)] = 15566,
  [SMALL_STATE(997)] = 15570,
  [SMALL_STATE(998)] = 15574,
  [SMALL_STATE(999)] = 15578,
  [SMALL_STATE(1000)] = 15582,
  [SMALL_STATE(1001)] = 15586,
  [SMALL_STATE(1002)] = 15590,
  [SMALL_STATE(1003)] = 15594,
  [SMALL_STATE(1004)] = 15598,
  [SMALL_STATE(1005)] = 15602,
  [SMALL_STATE(1006)] = 15606,
  [SMALL_STATE(1007)] = 15610,
  [SMALL_STATE(1008)] = 15614,
  [SMALL_STATE(1009)] = 15618,
  [SMALL_STATE(1010)] = 15622,
  [SMALL_STATE(1011)] = 15626,
  [SMALL_STATE(1012)] = 15630,
  [SMALL_STATE(1013)] = 15634,
  [SMALL_STATE(1014)] = 15638,
  [SMALL_STATE(1015)] = 15642,
  [SMALL_STATE(1016)] = 15646,
  [SMALL_STATE(1017)] = 15650,
  [SMALL_STATE(1018)] = 15654,
  [SMALL_STATE(1019)] = 15658,
  [SMALL_STATE(1020)] = 15662,
  [SMALL_STATE(1021)] = 15666,
  [SMALL_STATE(1022)] = 15670,
  [SMALL_STATE(1023)] = 15674,
  [SMALL_STATE(1024)] = 15678,
  [SMALL_STATE(1025)] = 15682,
  [SMALL_STATE(1026)] = 15686,
  [SMALL_STATE(1027)] = 15690,
  [SMALL_STATE(1028)] = 15694,
  [SMALL_STATE(1029)] = 15698,
  [SMALL_STATE(1030)] = 15702,
  [SMALL_STATE(1031)] = 15706,
  [SMALL_STATE(1032)] = 15710,
  [SMALL_STATE(1033)] = 15714,
  [SMALL_STATE(1034)] = 15718,
  [SMALL_STATE(1035)] = 15722,
  [SMALL_STATE(1036)] = 15726,
  [SMALL_STATE(1037)] = 15730,
  [SMALL_STATE(1038)] = 15734,
  [SMALL_STATE(1039)] = 15738,
  [SMALL_STATE(1040)] = 15742,
  [SMALL_STATE(1041)] = 15746,
  [SMALL_STATE(1042)] = 15750,
  [SMALL_STATE(1043)] = 15754,
  [SMALL_STATE(1044)] = 15758,
  [SMALL_STATE(1045)] = 15762,
  [SMALL_STATE(1046)] = 15766,
  [SMALL_STATE(1047)] = 15770,
  [SMALL_STATE(1048)] = 15774,
  [SMALL_STATE(1049)] = 15778,
  [SMALL_STATE(1050)] = 15782,
  [SMALL_STATE(1051)] = 15786,
  [SMALL_STATE(1052)] = 15790,
  [SMALL_STATE(1053)] = 15794,
  [SMALL_STATE(1054)] = 15798,
  [SMALL_STATE(1055)] = 15802,
  [SMALL_STATE(1056)] = 15806,
  [SMALL_STATE(1057)] = 15810,
  [SMALL_STATE(1058)] = 15814,
  [SMALL_STATE(1059)] = 15818,
  [SMALL_STATE(1060)] = 15822,
  [SMALL_STATE(1061)] = 15826,
  [SMALL_STATE(1062)] = 15830,
  [SMALL_STATE(1063)] = 15834,
  [SMALL_STATE(1064)] = 15838,
  [SMALL_STATE(1065)] = 15842,
  [SMALL_STATE(1066)] = 15846,
  [SMALL_STATE(1067)] = 15850,
  [SMALL_STATE(1068)] = 15854,
  [SMALL_STATE(1069)] = 15858,
  [SMALL_STATE(1070)] = 15862,
  [SMALL_STATE(1071)] = 15866,
  [SMALL_STATE(1072)] = 15870,
  [SMALL_STATE(1073)] = 15874,
  [SMALL_STATE(1074)] = 15878,
  [SMALL_STATE(1075)] = 15882,
  [SMALL_STATE(1076)] = 15886,
  [SMALL_STATE(1077)] = 15890,
  [SMALL_STATE(1078)] = 15894,
  [SMALL_STATE(1079)] = 15898,
  [SMALL_STATE(1080)] = 15902,
  [SMALL_STATE(1081)] = 15906,
  [SMALL_STATE(1082)] = 15910,
  [SMALL_STATE(1083)] = 15914,
  [SMALL_STATE(1084)] = 15918,
  [SMALL_STATE(1085)] = 15922,
  [SMALL_STATE(1086)] = 15926,
  [SMALL_STATE(1087)] = 15930,
  [SMALL_STATE(1088)] = 15934,
  [SMALL_STATE(1089)] = 15938,
  [SMALL_STATE(1090)] = 15942,
  [SMALL_STATE(1091)] = 15946,
  [SMALL_STATE(1092)] = 15950,
  [SMALL_STATE(1093)] = 15954,
  [SMALL_STATE(1094)] = 15958,
  [SMALL_STATE(1095)] = 15962,
  [SMALL_STATE(1096)] = 15966,
  [SMALL_STATE(1097)] = 15970,
  [SMALL_STATE(1098)] = 15974,
  [SMALL_STATE(1099)] = 15978,
  [SMALL_STATE(1100)] = 15982,
  [SMALL_STATE(1101)] = 15986,
  [SMALL_STATE(1102)] = 15990,
  [SMALL_STATE(1103)] = 15994,
  [SMALL_STATE(1104)] = 15998,
  [SMALL_STATE(1105)] = 16002,
  [SMALL_STATE(1106)] = 16006,
  [SMALL_STATE(1107)] = 16010,
  [SMALL_STATE(1108)] = 16014,
  [SMALL_STATE(1109)] = 16018,
  [SMALL_STATE(1110)] = 16022,
  [SMALL_STATE(1111)] = 16026,
  [SMALL_STATE(1112)] = 16030,
  [SMALL_STATE(1113)] = 16034,
  [SMALL_STATE(1114)] = 16038,
  [SMALL_STATE(1115)] = 16042,
  [SMALL_STATE(1116)] = 16046,
  [SMALL_STATE(1117)] = 16050,
  [SMALL_STATE(1118)] = 16054,
  [SMALL_STATE(1119)] = 16058,
  [SMALL_STATE(1120)] = 16062,
  [SMALL_STATE(1121)] = 16066,
  [SMALL_STATE(1122)] = 16070,
  [SMALL_STATE(1123)] = 16074,
  [SMALL_STATE(1124)] = 16078,
  [SMALL_STATE(1125)] = 16082,
  [SMALL_STATE(1126)] = 16086,
  [SMALL_STATE(1127)] = 16090,
  [SMALL_STATE(1128)] = 16094,
  [SMALL_STATE(1129)] = 16098,
  [SMALL_STATE(1130)] = 16102,
  [SMALL_STATE(1131)] = 16106,
  [SMALL_STATE(1132)] = 16110,
  [SMALL_STATE(1133)] = 16114,
  [SMALL_STATE(1134)] = 16118,
  [SMALL_STATE(1135)] = 16122,
  [SMALL_STATE(1136)] = 16126,
  [SMALL_STATE(1137)] = 16130,
  [SMALL_STATE(1138)] = 16134,
  [SMALL_STATE(1139)] = 16138,
  [SMALL_STATE(1140)] = 16142,
  [SMALL_STATE(1141)] = 16146,
  [SMALL_STATE(1142)] = 16150,
  [SMALL_STATE(1143)] = 16154,
  [SMALL_STATE(1144)] = 16158,
  [SMALL_STATE(1145)] = 16162,
  [SMALL_STATE(1146)] = 16166,
  [SMALL_STATE(1147)] = 16170,
  [SMALL_STATE(1148)] = 16174,
  [SMALL_STATE(1149)] = 16178,
  [SMALL_STATE(1150)] = 16182,
  [SMALL_STATE(1151)] = 16186,
  [SMALL_STATE(1152)] = 16190,
  [SMALL_STATE(1153)] = 16194,
  [SMALL_STATE(1154)] = 16198,
  [SMALL_STATE(1155)] = 16202,
  [SMALL_STATE(1156)] = 16206,
  [SMALL_STATE(1157)] = 16210,
  [SMALL_STATE(1158)] = 16214,
  [SMALL_STATE(1159)] = 16218,
  [SMALL_STATE(1160)] = 16222,
  [SMALL_STATE(1161)] = 16226,
  [SMALL_STATE(1162)] = 16230,
  [SMALL_STATE(1163)] = 16234,
  [SMALL_STATE(1164)] = 16238,
  [SMALL_STATE(1165)] = 16242,
  [SMALL_STATE(1166)] = 16246,
  [SMALL_STATE(1167)] = 16250,
  [SMALL_STATE(1168)] = 16254,
  [SMALL_STATE(1169)] = 16258,
  [SMALL_STATE(1170)] = 16262,
  [SMALL_STATE(1171)] = 16266,
  [SMALL_STATE(1172)] = 16270,
  [SMALL_STATE(1173)] = 16274,
  [SMALL_STATE(1174)] = 16278,
  [SMALL_STATE(1175)] = 16282,
  [SMALL_STATE(1176)] = 16286,
  [SMALL_STATE(1177)] = 16290,
  [SMALL_STATE(1178)] = 16294,
  [SMALL_STATE(1179)] = 16298,
  [SMALL_STATE(1180)] = 16302,
  [SMALL_STATE(1181)] = 16306,
  [SMALL_STATE(1182)] = 16310,
  [SMALL_STATE(1183)] = 16314,
  [SMALL_STATE(1184)] = 16318,
  [SMALL_STATE(1185)] = 16322,
  [SMALL_STATE(1186)] = 16326,
  [SMALL_STATE(1187)] = 16330,
  [SMALL_STATE(1188)] = 16334,
  [SMALL_STATE(1189)] = 16338,
  [SMALL_STATE(1190)] = 16342,
  [SMALL_STATE(1191)] = 16346,
  [SMALL_STATE(1192)] = 16350,
  [SMALL_STATE(1193)] = 16354,
  [SMALL_STATE(1194)] = 16358,
  [SMALL_STATE(1195)] = 16362,
  [SMALL_STATE(1196)] = 16366,
  [SMALL_STATE(1197)] = 16370,
  [SMALL_STATE(1198)] = 16374,
  [SMALL_STATE(1199)] = 16378,
  [SMALL_STATE(1200)] = 16382,
  [SMALL_STATE(1201)] = 16386,
  [SMALL_STATE(1202)] = 16390,
  [SMALL_STATE(1203)] = 16394,
  [SMALL_STATE(1204)] = 16398,
  [SMALL_STATE(1205)] = 16402,
  [SMALL_STATE(1206)] = 16406,
  [SMALL_STATE(1207)] = 16410,
  [SMALL_STATE(1208)] = 16414,
  [SMALL_STATE(1209)] = 16418,
  [SMALL_STATE(1210)] = 16422,
  [SMALL_STATE(1211)] = 16426,
  [SMALL_STATE(1212)] = 16430,
  [SMALL_STATE(1213)] = 16434,
  [SMALL_STATE(1214)] = 16438,
  [SMALL_STATE(1215)] = 16442,
  [SMALL_STATE(1216)] = 16446,
  [SMALL_STATE(1217)] = 16450,
  [SMALL_STATE(1218)] = 16454,
  [SMALL_STATE(1219)] = 16458,
  [SMALL_STATE(1220)] = 16462,
  [SMALL_STATE(1221)] = 16466,
  [SMALL_STATE(1222)] = 16470,
  [SMALL_STATE(1223)] = 16474,
  [SMALL_STATE(1224)] = 16478,
  [SMALL_STATE(1225)] = 16482,
  [SMALL_STATE(1226)] = 16486,
  [SMALL_STATE(1227)] = 16490,
  [SMALL_STATE(1228)] = 16494,
  [SMALL_STATE(1229)] = 16498,
  [SMALL_STATE(1230)] = 16502,
  [SMALL_STATE(1231)] = 16506,
  [SMALL_STATE(1232)] = 16510,
  [SMALL_STATE(1233)] = 16514,
  [SMALL_STATE(1234)] = 16518,
  [SMALL_STATE(1235)] = 16522,
  [SMALL_STATE(1236)] = 16526,
  [SMALL_STATE(1237)] = 16530,
  [SMALL_STATE(1238)] = 16534,
  [SMALL_STATE(1239)] = 16538,
  [SMALL_STATE(1240)] = 16542,
  [SMALL_STATE(1241)] = 16546,
  [SMALL_STATE(1242)] = 16550,
  [SMALL_STATE(1243)] = 16554,
  [SMALL_STATE(1244)] = 16558,
  [SMALL_STATE(1245)] = 16562,
  [SMALL_STATE(1246)] = 16566,
  [SMALL_STATE(1247)] = 16570,
  [SMALL_STATE(1248)] = 16574,
  [SMALL_STATE(1249)] = 16578,
  [SMALL_STATE(1250)] = 16582,
  [SMALL_STATE(1251)] = 16586,
  [SMALL_STATE(1252)] = 16590,
  [SMALL_STATE(1253)] = 16594,
  [SMALL_STATE(1254)] = 16598,
  [SMALL_STATE(1255)] = 16602,
  [SMALL_STATE(1256)] = 16606,
  [SMALL_STATE(1257)] = 16610,
  [SMALL_STATE(1258)] = 16614,
  [SMALL_STATE(1259)] = 16618,
  [SMALL_STATE(1260)] = 16622,
  [SMALL_STATE(1261)] = 16626,
  [SMALL_STATE(1262)] = 16630,
  [SMALL_STATE(1263)] = 16634,
  [SMALL_STATE(1264)] = 16638,
  [SMALL_STATE(1265)] = 16642,
  [SMALL_STATE(1266)] = 16646,
  [SMALL_STATE(1267)] = 16650,
  [SMALL_STATE(1268)] = 16654,
  [SMALL_STATE(1269)] = 16658,
  [SMALL_STATE(1270)] = 16662,
  [SMALL_STATE(1271)] = 16666,
  [SMALL_STATE(1272)] = 16670,
  [SMALL_STATE(1273)] = 16674,
  [SMALL_STATE(1274)] = 16678,
  [SMALL_STATE(1275)] = 16682,
  [SMALL_STATE(1276)] = 16686,
  [SMALL_STATE(1277)] = 16690,
  [SMALL_STATE(1278)] = 16694,
  [SMALL_STATE(1279)] = 16698,
  [SMALL_STATE(1280)] = 16702,
  [SMALL_STATE(1281)] = 16706,
  [SMALL_STATE(1282)] = 16710,
  [SMALL_STATE(1283)] = 16714,
  [SMALL_STATE(1284)] = 16718,
  [SMALL_STATE(1285)] = 16722,
  [SMALL_STATE(1286)] = 16726,
  [SMALL_STATE(1287)] = 16730,
  [SMALL_STATE(1288)] = 16734,
  [SMALL_STATE(1289)] = 16738,
  [SMALL_STATE(1290)] = 16742,
  [SMALL_STATE(1291)] = 16746,
  [SMALL_STATE(1292)] = 16750,
  [SMALL_STATE(1293)] = 16754,
  [SMALL_STATE(1294)] = 16758,
  [SMALL_STATE(1295)] = 16762,
  [SMALL_STATE(1296)] = 16766,
  [SMALL_STATE(1297)] = 16770,
  [SMALL_STATE(1298)] = 16774,
  [SMALL_STATE(1299)] = 16778,
  [SMALL_STATE(1300)] = 16782,
  [SMALL_STATE(1301)] = 16786,
  [SMALL_STATE(1302)] = 16790,
  [SMALL_STATE(1303)] = 16794,
  [SMALL_STATE(1304)] = 16798,
  [SMALL_STATE(1305)] = 16802,
  [SMALL_STATE(1306)] = 16806,
  [SMALL_STATE(1307)] = 16810,
  [SMALL_STATE(1308)] = 16814,
  [SMALL_STATE(1309)] = 16818,
  [SMALL_STATE(1310)] = 16822,
  [SMALL_STATE(1311)] = 16826,
  [SMALL_STATE(1312)] = 16830,
  [SMALL_STATE(1313)] = 16834,
  [SMALL_STATE(1314)] = 16838,
  [SMALL_STATE(1315)] = 16842,
  [SMALL_STATE(1316)] = 16846,
  [SMALL_STATE(1317)] = 16850,
  [SMALL_STATE(1318)] = 16854,
  [SMALL_STATE(1319)] = 16858,
  [SMALL_STATE(1320)] = 16862,
  [SMALL_STATE(1321)] = 16866,
  [SMALL_STATE(1322)] = 16870,
  [SMALL_STATE(1323)] = 16874,
  [SMALL_STATE(1324)] = 16878,
  [SMALL_STATE(1325)] = 16882,
  [SMALL_STATE(1326)] = 16886,
  [SMALL_STATE(1327)] = 16890,
  [SMALL_STATE(1328)] = 16894,
  [SMALL_STATE(1329)] = 16898,
  [SMALL_STATE(1330)] = 16902,
  [SMALL_STATE(1331)] = 16906,
  [SMALL_STATE(1332)] = 16910,
  [SMALL_STATE(1333)] = 16914,
  [SMALL_STATE(1334)] = 16918,
  [SMALL_STATE(1335)] = 16922,
  [SMALL_STATE(1336)] = 16926,
  [SMALL_STATE(1337)] = 16930,
  [SMALL_STATE(1338)] = 16934,
  [SMALL_STATE(1339)] = 16938,
  [SMALL_STATE(1340)] = 16942,
  [SMALL_STATE(1341)] = 16946,
  [SMALL_STATE(1342)] = 16950,
  [SMALL_STATE(1343)] = 16954,
  [SMALL_STATE(1344)] = 16958,
  [SMALL_STATE(1345)] = 16962,
  [SMALL_STATE(1346)] = 16966,
  [SMALL_STATE(1347)] = 16970,
  [SMALL_STATE(1348)] = 16974,
  [SMALL_STATE(1349)] = 16978,
  [SMALL_STATE(1350)] = 16982,
  [SMALL_STATE(1351)] = 16986,
  [SMALL_STATE(1352)] = 16990,
  [SMALL_STATE(1353)] = 16994,
  [SMALL_STATE(1354)] = 16998,
  [SMALL_STATE(1355)] = 17002,
  [SMALL_STATE(1356)] = 17006,
  [SMALL_STATE(1357)] = 17010,
  [SMALL_STATE(1358)] = 17014,
  [SMALL_STATE(1359)] = 17018,
  [SMALL_STATE(1360)] = 17022,
  [SMALL_STATE(1361)] = 17026,
  [SMALL_STATE(1362)] = 17030,
  [SMALL_STATE(1363)] = 17034,
  [SMALL_STATE(1364)] = 17038,
  [SMALL_STATE(1365)] = 17042,
  [SMALL_STATE(1366)] = 17046,
  [SMALL_STATE(1367)] = 17050,
  [SMALL_STATE(1368)] = 17054,
  [SMALL_STATE(1369)] = 17058,
  [SMALL_STATE(1370)] = 17062,
  [SMALL_STATE(1371)] = 17066,
  [SMALL_STATE(1372)] = 17070,
  [SMALL_STATE(1373)] = 17074,
  [SMALL_STATE(1374)] = 17078,
  [SMALL_STATE(1375)] = 17082,
  [SMALL_STATE(1376)] = 17086,
  [SMALL_STATE(1377)] = 17090,
  [SMALL_STATE(1378)] = 17094,
  [SMALL_STATE(1379)] = 17098,
  [SMALL_STATE(1380)] = 17102,
  [SMALL_STATE(1381)] = 17106,
  [SMALL_STATE(1382)] = 17110,
  [SMALL_STATE(1383)] = 17114,
  [SMALL_STATE(1384)] = 17118,
  [SMALL_STATE(1385)] = 17122,
  [SMALL_STATE(1386)] = 17126,
  [SMALL_STATE(1387)] = 17130,
  [SMALL_STATE(1388)] = 17134,
  [SMALL_STATE(1389)] = 17138,
  [SMALL_STATE(1390)] = 17142,
  [SMALL_STATE(1391)] = 17146,
  [SMALL_STATE(1392)] = 17150,
  [SMALL_STATE(1393)] = 17154,
  [SMALL_STATE(1394)] = 17158,
  [SMALL_STATE(1395)] = 17162,
  [SMALL_STATE(1396)] = 17166,
  [SMALL_STATE(1397)] = 17170,
  [SMALL_STATE(1398)] = 17174,
  [SMALL_STATE(1399)] = 17178,
  [SMALL_STATE(1400)] = 17182,
  [SMALL_STATE(1401)] = 17186,
  [SMALL_STATE(1402)] = 17190,
  [SMALL_STATE(1403)] = 17194,
  [SMALL_STATE(1404)] = 17198,
  [SMALL_STATE(1405)] = 17202,
  [SMALL_STATE(1406)] = 17206,
  [SMALL_STATE(1407)] = 17210,
  [SMALL_STATE(1408)] = 17214,
  [SMALL_STATE(1409)] = 17218,
  [SMALL_STATE(1410)] = 17222,
  [SMALL_STATE(1411)] = 17226,
  [SMALL_STATE(1412)] = 17230,
  [SMALL_STATE(1413)] = 17234,
  [SMALL_STATE(1414)] = 17238,
  [SMALL_STATE(1415)] = 17242,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1351),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1415),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1414),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1413),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(476),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(505),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(582),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1351),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(859),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(447),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(449),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1415),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1414),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(450),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(453),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(499),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(446),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1413),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 17),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 17),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(856),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 66),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 62),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 66),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 62),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1086),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1330),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1329),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1188),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1331),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 40),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 39),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(497),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1327),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(928),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1097),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 63),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 4, .production_id = 13),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1010),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(1080),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 14),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 35),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2, .production_id = 47),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 19),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5, .production_id = 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 41),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 38),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 19),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 61),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 36),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 5, .production_id = 12),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 13),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 58),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(591),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 61),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4, .production_id = 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1182),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 5, .production_id = 12),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5, .production_id = 38),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 8, .production_id = 64),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 24),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4, .production_id = 15),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1093),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 19),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3, .production_id = 5),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 19),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 38),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2), SHIFT_REPEAT(940),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 13),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3, .production_id = 5),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 67),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8, .production_id = 19),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 13),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(839),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4, .production_id = 47),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3, .production_id = 18),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1, .production_id = 18),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 11, .production_id = 61),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 13),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1334),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 38),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 19),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1335),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 19),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(513),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6, .production_id = 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6, .production_id = 43),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(751),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 11, .production_id = 78),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3, .production_id = 47),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2, .production_id = 18),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2, .production_id = 18),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 61),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 19),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 7),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 45),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 44),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 122),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2, .production_id = 1),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1387),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 53),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3, .production_id = 10),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1256),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 54),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9, .production_id = 8),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 3, .production_id = 47),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 60),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5, .production_id = 33),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 31),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15, .production_id = 95),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5, .production_id = 30),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12, .production_id = 83),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 28),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 25),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 22),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 21),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3, .production_id = 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1312),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 123),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 118),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3, .production_id = 9),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1260),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4, .production_id = 15),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 127),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3, .production_id = 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1268),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 73),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9, .production_id = 8),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 107),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1090),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3, .production_id = 12),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1229),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 108),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4, .production_id = 16),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 112),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3, .production_id = 11),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1234),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 110),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 3),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 91),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 90),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 89),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6, .production_id = 19),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 43),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 46),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 95),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4, .production_id = 3),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 14, .production_id = 83),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4, .production_id = 5),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 94),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 86),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 71),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 43),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 6, .production_id = 12),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4, .production_id = 11),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4, .production_id = 13),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 16),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6, .production_id = 32),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 15),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 13),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 45),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 118),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 38),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8, .production_id = 45),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 24, .production_id = 127),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 6, .production_id = 12),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 13, .production_id = 85),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7, .production_id = 3),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 11, .production_id = 19),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 113),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10, .production_id = 67),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 20, .production_id = 124),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7, .production_id = 43),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4, .production_id = 5),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 101),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 92),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 114),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5, .production_id = 19),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11, .production_id = 8),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 88),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3, .production_id = 8),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18, .production_id = 115),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 8, .production_id = 65),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 3),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7, .production_id = 48),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 112),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 77),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 86),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8, .production_id = 48),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 7, .production_id = 49),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 116),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 123),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 19),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 12, .production_id = 61),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 7, .production_id = 50),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 93),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 117),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 7, .production_id = 51),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 19),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 7, .production_id = 52),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 12, .production_id = 85),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 61),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 100),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9, .production_id = 71),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 55),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 11, .production_id = 77),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 3),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 7, .production_id = 56),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 84),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 9, .production_id = 64),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 7, .production_id = 57),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 19),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 122),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 23),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5, .production_id = 24),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 26),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5, .production_id = 27),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 102),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 29),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 111),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 103),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 99),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 32),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 19),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5, .production_id = 34),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 74),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 121),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 75),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3, .production_id = 5),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 21, .production_id = 125),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 98),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 1),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 21, .production_id = 126),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 104),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 120),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 107),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 119),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 105),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 12, .production_id = 78),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 59),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 47),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 109),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 96),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5, .production_id = 16),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 38),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 19),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 3),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 97),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 11, .production_id = 8),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 11, .production_id = 80),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 13),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 108),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(866),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1257),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1332),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1082),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1214),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1211),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1407),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1406),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1405),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1185),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1204),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1202),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1072),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1071),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1069),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1068),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(743),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1222),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1221),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1160),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1219),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(821),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1323),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1319),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1316),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1400),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1399),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1398),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1397),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1396),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1395),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1411),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(706),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1389),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1388),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1385),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1384),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1385),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(456),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1141),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1184),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(977),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1344),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 18),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [1246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1097),
  [1252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1320),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1227),
  [1270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(757),
  [1272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 18),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 18),
  [1282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(718),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1098),
  [1309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1410),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(738),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1261),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 2),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [1350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(814),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(799),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_not_null_list_repeat1, 2), SHIFT_REPEAT(793),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_not_null_list_repeat1, 2),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1361),
  [1379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2, .production_id = 87),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(1085),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1, .production_id = 79),
  [1402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1369),
  [1404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(854),
  [1406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2), SHIFT_REPEAT(953),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(735),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(846),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1394),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1392),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(774),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null_list, 2),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(463),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(58),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(772),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [1509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 1),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1175),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(442),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1125),
  [1548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(217),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null_list, 1),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1, .production_id = 82),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(448),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2, .production_id = 81),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1411),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1345),
  [1606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 106),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1324),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1248),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [1624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1116),
  [1626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(775),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1184),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1255),
  [1664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1365),
  [1668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1364),
  [1670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 4),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 42),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1386),
  [1686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(805),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 3, .production_id = 72),
  [1694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1379),
  [1696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1378),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1120),
  [1712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [1714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1377),
  [1716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(835),
  [1718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1375),
  [1720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 76),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [1736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1305),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1373),
  [1744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(847),
  [1746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 18),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1257),
  [1756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1367),
  [1764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(867),
  [1766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1363),
  [1768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1359),
  [1776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1358),
  [1780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1297),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1354),
  [1794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [1796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [1798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4, .production_id = 18),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1289),
  [1804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1294),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1293),
  [1814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [1816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1347),
  [1818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(740),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1291),
  [1822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 6),
  [1824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1346),
  [1826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1105),
  [1834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 14),
  [1836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1408),
  [1838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1287),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1283),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 68),
  [1886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 69),
  [1888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 70),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [1898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [2042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [2052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [2074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1067),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [2188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1106),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1122),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [2234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 18),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1128),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [2246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 41),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1147),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [2290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 37),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [2304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 79),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1162),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1165),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1166),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1167),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1169),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1170),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1174),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1178),
  [2350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1179),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1180),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [2362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 20),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1192),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1196),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1197),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1199),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1201),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1205),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1208),
  [2422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1209),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1210),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1212),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1213),
  [2432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1216),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1217),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1223),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1225),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [2458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [2460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1076),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1232),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1235),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1236),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1239),
  [2490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1240),
  [2492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1241),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [2498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1244),
  [2500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [2502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [2504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1245),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1246),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1094),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [2514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1249),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1250),
  [2518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [2520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [2522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1252),
  [2524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [2526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [2528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1254),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [2532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [2534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [2536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [2538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [2540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [2542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1264),
  [2544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1265),
  [2546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [2548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [2550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [2552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [2554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [2556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [2560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1272),
  [2562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1273),
  [2564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [2566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1275),
  [2568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1276),
  [2570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1277),
  [2572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [2574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [2576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1279),
  [2578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1280),
  [2580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [2582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1282),
  [2584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [2586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1284),
  [2588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1285),
  [2590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1286),
  [2592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [2594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [2596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1288),
  [2598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [2600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [2602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1290),
  [2604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [2606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [2608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [2610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [2612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [2614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [2616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [2618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [2620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1303),
  [2622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1304),
  [2624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1306),
  [2628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [2630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [2632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [2634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1310),
  [2636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [2638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [2640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1313),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1314),
  [2644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1315),
  [2646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [2648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1317),
  [2650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1318),
  [2652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [2654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [2656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1321),
  [2660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1322),
  [2662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [2666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1325),
  [2668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1326),
  [2670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1130),
  [2672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [2674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1258),
  [2676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1328),
  [2678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [2680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [2682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [2684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1137),
  [2686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1139),
  [2688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1152),
  [2690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [2692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1155),
  [2694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [2696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1157),
  [2698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [2700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [2702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1339),
  [2704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1340),
  [2706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1173),
  [2708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [2710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [2712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [2714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [2716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1348),
  [2718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1349),
  [2720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [2722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [2724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1352),
  [2726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1353),
  [2728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [2730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [2732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1355),
  [2734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [2736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [2738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1357),
  [2740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [2742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [2744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [2746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [2748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1360),
  [2750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [2752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [2754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [2756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [2758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [2760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [2764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [2766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [2768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [2770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [2772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1362),
  [2774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [2776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [2778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [2780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1207),
  [2782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [2784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [2786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1231),
  [2788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1238),
  [2790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [2792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1370),
  [2794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1371),
  [2796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1372),
  [2798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1409),
  [2800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [2802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1374),
  [2804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1259),
  [2806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1376),
  [2810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [2812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1266),
  [2814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1267),
  [2816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [2818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [2820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1381),
  [2822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1270),
  [2824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [2826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1278),
  [2828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [2830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [2832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [2834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1292),
  [2836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [2838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1390),
  [2840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1391),
  [2842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1295),
  [2844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [2846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1296),
  [2848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1393),
  [2850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1298),
  [2852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1299),
  [2854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1300),
  [2856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [2858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [2860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [2862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [2864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1302),
  [2866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 4),
  [2868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1309),
  [2870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [2872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [2874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [2876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1401),
  [2878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [2880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [2882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1333),
  [2884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1336),
  [2886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [2888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1337),
  [2890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [2892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1342),
  [2894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [2896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [2898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [2900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [2902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [2904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [2906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [2908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [2910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [2912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [2914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [2916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [2918] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [2922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [2924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
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
