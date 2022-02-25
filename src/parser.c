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
#define STATE_COUNT 1432
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 305
#define ALIAS_COUNT 22
#define TOKEN_COUNT 145
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 24
#define PRODUCTION_ID_COUNT 130

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
  sym_trigger_name = 251,
  sym_trigger_class = 252,
  sym_create_type = 253,
  sym_create_user = 254,
  sym_alter_materialized_view = 255,
  sym_alter_keyspace = 256,
  sym_replication_list = 257,
  sym_alter_role = 258,
  sym_alter_table = 259,
  sym_alter_table_operation = 260,
  sym_alter_table_add = 261,
  sym_alter_table_column_definition = 262,
  sym_alter_table_drop_columns = 263,
  sym_alter_table_drop_column_list = 264,
  sym_alter_table_drop_compact_storage = 265,
  sym_alter_table_rename = 266,
  sym_alter_table_with = 267,
  sym_alter_type = 268,
  sym_alter_type_operation = 269,
  sym_alter_type_alter_type = 270,
  sym_alter_type_add = 271,
  sym_alter_type_rename = 272,
  sym_alter_type_rename_list = 273,
  sym_alter_type_rename_item = 274,
  sym_alter_user = 275,
  sym_user_password = 276,
  sym_user_super_user = 277,
  sym_apply_batch = 278,
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
  anon_alias_sym_keyspace = 314,
  anon_alias_sym_language = 315,
  anon_alias_sym_materialized_view = 316,
  anon_alias_sym_option = 317,
  anon_alias_sym_param_name = 318,
  anon_alias_sym_partition_key = 319,
  anon_alias_sym_primary_key = 320,
  anon_alias_sym_role = 321,
  anon_alias_sym_sfunc = 322,
  anon_alias_sym_table = 323,
  anon_alias_sym_trigger = 324,
  anon_alias_sym_type = 325,
  anon_alias_sym_user = 326,
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
  [38] = {.index = 0, .length = 1},
  [39] = {.index = 0, .length = 1},
  [45] = {.index = 1, .length = 1},
  [61] = {.index = 2, .length = 1},
  [62] = {.index = 2, .length = 1},
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
    [2] = anon_alias_sym_role,
  },
  [5] = {
    [0] = anon_alias_sym_trigger,
  },
  [6] = {
    [2] = anon_alias_sym_index,
  },
  [7] = {
    [2] = anon_alias_sym_keyspace,
  },
  [8] = {
    [2] = anon_alias_sym_function,
  },
  [9] = {
    [2] = anon_alias_sym_aggregate,
  },
  [10] = {
    [2] = anon_alias_sym_type,
  },
  [11] = {
    [2] = anon_alias_sym_user,
  },
  [12] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_table,
  },
  [13] = {
    [3] = anon_alias_sym_materialized_view,
  },
  [14] = {
    [0] = anon_alias_sym_table,
  },
  [15] = {
    [3] = anon_alias_sym_role,
  },
  [16] = {
    [0] = anon_alias_sym_function_name,
  },
  [17] = {
    [0] = anon_alias_sym_column,
  },
  [18] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_table,
  },
  [19] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_trigger,
  },
  [20] = {
    [4] = anon_alias_sym_table,
  },
  [21] = {
    [4] = anon_alias_sym_index,
  },
  [22] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_index,
  },
  [23] = {
    [4] = anon_alias_sym_keyspace,
  },
  [24] = {
    [4] = anon_alias_sym_function,
  },
  [25] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
  },
  [26] = {
    [4] = anon_alias_sym_role,
  },
  [27] = {
    [4] = anon_alias_sym_aggregate,
  },
  [28] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
  },
  [29] = {
    [2] = anon_alias_sym_trigger,
    [4] = anon_alias_sym_table,
  },
  [30] = {
    [4] = anon_alias_sym_type,
  },
  [31] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
  },
  [32] = {
    [4] = anon_alias_sym_user,
  },
  [33] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_user,
  },
  [34] = {
    [1] = anon_alias_sym_function,
  },
  [35] = {
    [1] = anon_alias_sym_role,
  },
  [36] = {
    [0] = anon_alias_sym_option,
  },
  [37] = {
    [3] = anon_alias_sym_table,
  },
  [38] = {
    [0] = anon_alias_sym_table,
  },
  [40] = {
    [0] = anon_alias_sym_param_name,
  },
  [41] = {
    [5] = anon_alias_sym_role,
  },
  [42] = {
    [5] = anon_alias_sym_materialized_view,
  },
  [43] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
  },
  [44] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_table,
  },
  [46] = {
    [1] = anon_alias_sym_column,
  },
  [47] = {
    [2] = anon_alias_sym_type,
    [4] = anon_alias_sym_column,
    [5] = anon_alias_sym_data_type,
  },
  [48] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_table,
  },
  [49] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_index,
  },
  [50] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
  },
  [51] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
  },
  [52] = {
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_table,
  },
  [53] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_table,
  },
  [54] = {
    [2] = anon_alias_sym_trigger,
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_table,
  },
  [55] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_type,
  },
  [56] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_user,
  },
  [57] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_function,
  },
  [58] = {
    [1] = anon_alias_sym_column,
    [3] = anon_alias_sym_column,
  },
  [59] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_column,
  },
  [60] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_table,
  },
  [62] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_table,
  },
  [63] = {
    [2] = anon_alias_sym_index,
    [4] = anon_alias_sym_table,
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
    [5] = anon_alias_sym_type,
    [7] = anon_alias_sym_column,
    [8] = anon_alias_sym_data_type,
  },
  [77] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_table,
  },
  [78] = {
    [0] = anon_alias_sym_partition_key,
  },
  [79] = {
    [5] = anon_alias_sym_index,
    [7] = anon_alias_sym_table,
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
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [84] = {
    [5] = anon_alias_sym_keyspace,
  },
  [85] = {
    [2] = anon_alias_sym_function,
    [9] = anon_alias_sym_language,
  },
  [86] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_type,
    [9] = anon_alias_sym_column,
    [10] = anon_alias_sym_data_type,
  },
  [87] = {
    [4] = anon_alias_sym_column,
  },
  [88] = {
    [0] = anon_alias_sym_clustering_key,
    [1] = anon_alias_sym_clustering_key,
  },
  [89] = {
    [5] = anon_alias_sym_index,
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_table,
  },
  [90] = {
    [2] = anon_alias_sym_function,
    [10] = anon_alias_sym_language,
  },
  [91] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [92] = {
    [2] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [93] = {
    [2] = anon_alias_sym_aggregate,
    [7] = anon_alias_sym_sfunc,
    [11] = anon_alias_sym_finalfunc,
  },
  [94] = {
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [95] = {
    [5] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [96] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [97] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_table,
  },
  [98] = {
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [99] = {
    [5] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [100] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [101] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [102] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [103] = {
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [104] = {
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [105] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [106] = {
    [5] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [107] = {
    [5] = anon_alias_sym_aggregate,
    [10] = anon_alias_sym_sfunc,
    [14] = anon_alias_sym_finalfunc,
  },
  [108] = {
    [0] = anon_alias_sym_hash_key,
  },
  [109] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
    [10] = anon_alias_sym_table,
  },
  [110] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
  },
  [111] = {
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [112] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [113] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [114] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_table,
  },
  [115] = {
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [116] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [117] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
    [11] = anon_alias_sym_sfunc,
    [15] = anon_alias_sym_finalfunc,
  },
  [118] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [119] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [120] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
    [10] = anon_alias_sym_keyspace,
    [12] = anon_alias_sym_table,
  },
  [121] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [122] = {
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [123] = {
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [124] = {
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_materialized_view,
    [13] = anon_alias_sym_table,
  },
  [125] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_keyspace,
    [13] = anon_alias_sym_table,
  },
  [126] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [17] = anon_alias_sym_language,
  },
  [127] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [18] = anon_alias_sym_language,
  },
  [128] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_aggregate,
    [14] = anon_alias_sym_sfunc,
    [18] = anon_alias_sym_finalfunc,
  },
  [129] = {
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
  [137] = 108,
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
  [152] = 110,
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
          lookahead == 'n') ADVANCE(987);
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
          lookahead == 'j') ADVANCE(950);
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
          lookahead == 'j') ADVANCE(950);
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
          lookahead == 'f') ADVANCE(985);
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
          lookahead == 'f') ADVANCE(988);
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
          lookahead == 'c') ADVANCE(970);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(965);
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
          lookahead == 'g') ADVANCE(850);
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
          lookahead == 'i') ADVANCE(915);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(891);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(895);
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
          lookahead == 'i') ADVANCE(947);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(948);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(900);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(901);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(906);
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
          lookahead == 'l') ADVANCE(949);
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
          lookahead == 'l') ADVANCE(857);
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
          lookahead == 'n') ADVANCE(678);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(560);
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
          lookahead == 'n') ADVANCE(946);
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
          lookahead == 'r') ADVANCE(986);
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
          lookahead == 'r') ADVANCE(851);
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
          lookahead == 's') ADVANCE(828);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(971);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(969);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(815);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(916);
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
          lookahead == 't') ADVANCE(849);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(858);
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
          lookahead == 'u') ADVANCE(905);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(815);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(871);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(872);
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
          lookahead == 'x') ADVANCE(855);
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
          lookahead == 'y') ADVANCE(856);
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
  [77] = {.lex_state = 550},
  [78] = {.lex_state = 550},
  [79] = {.lex_state = 550},
  [80] = {.lex_state = 552},
  [81] = {.lex_state = 550},
  [82] = {.lex_state = 550},
  [83] = {.lex_state = 550},
  [84] = {.lex_state = 550},
  [85] = {.lex_state = 550},
  [86] = {.lex_state = 550},
  [87] = {.lex_state = 550},
  [88] = {.lex_state = 551},
  [89] = {.lex_state = 550},
  [90] = {.lex_state = 550},
  [91] = {.lex_state = 550},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 550},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 550},
  [97] = {.lex_state = 550},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 550},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 550},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 550},
  [122] = {.lex_state = 550},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 550},
  [128] = {.lex_state = 0},
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
  [146] = {.lex_state = 550},
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
  [202] = {.lex_state = 550},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 550},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 550},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 550},
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
  [230] = {.lex_state = 550},
  [231] = {.lex_state = 0},
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
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 550},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 550},
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
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 1},
  [434] = {.lex_state = 550},
  [435] = {.lex_state = 550},
  [436] = {.lex_state = 550},
  [437] = {.lex_state = 550},
  [438] = {.lex_state = 550},
  [439] = {.lex_state = 550},
  [440] = {.lex_state = 550},
  [441] = {.lex_state = 550},
  [442] = {.lex_state = 550},
  [443] = {.lex_state = 1},
  [444] = {.lex_state = 1},
  [445] = {.lex_state = 1},
  [446] = {.lex_state = 1},
  [447] = {.lex_state = 550},
  [448] = {.lex_state = 41},
  [449] = {.lex_state = 53},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 1},
  [452] = {.lex_state = 550},
  [453] = {.lex_state = 550},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 550},
  [456] = {.lex_state = 550},
  [457] = {.lex_state = 53},
  [458] = {.lex_state = 41},
  [459] = {.lex_state = 41},
  [460] = {.lex_state = 550},
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
  [473] = {.lex_state = 18},
  [474] = {.lex_state = 18},
  [475] = {.lex_state = 18},
  [476] = {.lex_state = 18},
  [477] = {.lex_state = 18},
  [478] = {.lex_state = 18},
  [479] = {.lex_state = 18},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 18},
  [482] = {.lex_state = 14},
  [483] = {.lex_state = 15},
  [484] = {.lex_state = 550},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 10},
  [487] = {.lex_state = 15},
  [488] = {.lex_state = 15},
  [489] = {.lex_state = 15},
  [490] = {.lex_state = 15},
  [491] = {.lex_state = 15},
  [492] = {.lex_state = 11},
  [493] = {.lex_state = 15},
  [494] = {.lex_state = 550},
  [495] = {.lex_state = 14},
  [496] = {.lex_state = 15},
  [497] = {.lex_state = 14},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 10},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 13},
  [502] = {.lex_state = 53},
  [503] = {.lex_state = 10},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 12},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 19},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 19},
  [517] = {.lex_state = 10},
  [518] = {.lex_state = 550},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 10},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 10},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 17},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 17},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 17},
  [541] = {.lex_state = 17},
  [542] = {.lex_state = 17},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 17},
  [546] = {.lex_state = 21},
  [547] = {.lex_state = 17},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 21},
  [551] = {.lex_state = 17},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 17},
  [555] = {.lex_state = 10},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 17},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 10},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 17},
  [566] = {.lex_state = 17},
  [567] = {.lex_state = 10},
  [568] = {.lex_state = 24},
  [569] = {.lex_state = 551},
  [570] = {.lex_state = 17},
  [571] = {.lex_state = 17},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 17},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 17},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 10},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 10},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 10},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 10},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 10},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 26},
  [614] = {.lex_state = 0},
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
  [630] = {.lex_state = 10},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 10},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 10},
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
  [663] = {.lex_state = 10},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 10},
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
  [687] = {.lex_state = 10},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 25},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 10},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 10},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 20},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 551},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 10},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 16},
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
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 10},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 10},
  [736] = {.lex_state = 22},
  [737] = {.lex_state = 10},
  [738] = {.lex_state = 20},
  [739] = {.lex_state = 10},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 10},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 10},
  [745] = {.lex_state = 10},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 10},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 10},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 10},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 10},
  [759] = {.lex_state = 10},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 27},
  [762] = {.lex_state = 27},
  [763] = {.lex_state = 10},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 20},
  [766] = {.lex_state = 10},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 20},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 20},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 10},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 10},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 10},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 10},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 10},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 20},
  [795] = {.lex_state = 10},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 20},
  [798] = {.lex_state = 20},
  [799] = {.lex_state = 20},
  [800] = {.lex_state = 10},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 20},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 20},
  [805] = {.lex_state = 20},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 10},
  [808] = {.lex_state = 10},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 10},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 10},
  [815] = {.lex_state = 20},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 20},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 10},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 20},
  [824] = {.lex_state = 20},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 20},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 10},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 20},
  [833] = {.lex_state = 10},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 20},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 10},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 10},
  [850] = {.lex_state = 27},
  [851] = {.lex_state = 10},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 20},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 10},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 10},
  [862] = {.lex_state = 10},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 10},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 551},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 551},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 550},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 10},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 10},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 10},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 10},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 10},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 10},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 10},
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
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 551},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 10},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 10},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 550},
  [918] = {.lex_state = 10},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 10},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 10},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 13},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 10},
  [931] = {.lex_state = 10},
  [932] = {.lex_state = 10},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 10},
  [937] = {.lex_state = 10},
  [938] = {.lex_state = 10},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 10},
  [941] = {.lex_state = 41},
  [942] = {.lex_state = 10},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 10},
  [947] = {.lex_state = 10},
  [948] = {.lex_state = 13},
  [949] = {.lex_state = 10},
  [950] = {.lex_state = 10},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 10},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 10},
  [956] = {.lex_state = 10},
  [957] = {.lex_state = 10},
  [958] = {.lex_state = 10},
  [959] = {.lex_state = 10},
  [960] = {.lex_state = 10},
  [961] = {.lex_state = 10},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 10},
  [964] = {.lex_state = 10},
  [965] = {.lex_state = 10},
  [966] = {.lex_state = 10},
  [967] = {.lex_state = 0},
  [968] = {.lex_state = 10},
  [969] = {.lex_state = 0},
  [970] = {.lex_state = 10},
  [971] = {.lex_state = 10},
  [972] = {.lex_state = 0},
  [973] = {.lex_state = 0},
  [974] = {.lex_state = 10},
  [975] = {.lex_state = 0},
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 10},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 0},
  [980] = {.lex_state = 0},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 0},
  [984] = {.lex_state = 10},
  [985] = {.lex_state = 0},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 10},
  [988] = {.lex_state = 0},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 10},
  [993] = {.lex_state = 0},
  [994] = {.lex_state = 10},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 0},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 0},
  [999] = {.lex_state = 0},
  [1000] = {.lex_state = 10},
  [1001] = {.lex_state = 0},
  [1002] = {.lex_state = 0},
  [1003] = {.lex_state = 0},
  [1004] = {.lex_state = 0},
  [1005] = {.lex_state = 0},
  [1006] = {.lex_state = 0},
  [1007] = {.lex_state = 10},
  [1008] = {.lex_state = 0},
  [1009] = {.lex_state = 0},
  [1010] = {.lex_state = 0},
  [1011] = {.lex_state = 0},
  [1012] = {.lex_state = 10},
  [1013] = {.lex_state = 10},
  [1014] = {.lex_state = 0},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 10},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 0},
  [1020] = {.lex_state = 0},
  [1021] = {.lex_state = 10},
  [1022] = {.lex_state = 10},
  [1023] = {.lex_state = 0},
  [1024] = {.lex_state = 0},
  [1025] = {.lex_state = 0},
  [1026] = {.lex_state = 0},
  [1027] = {.lex_state = 10},
  [1028] = {.lex_state = 0},
  [1029] = {.lex_state = 0},
  [1030] = {.lex_state = 0},
  [1031] = {.lex_state = 0},
  [1032] = {.lex_state = 0},
  [1033] = {.lex_state = 10},
  [1034] = {.lex_state = 0},
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
  [1050] = {.lex_state = 10},
  [1051] = {.lex_state = 10},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 0},
  [1054] = {.lex_state = 0},
  [1055] = {.lex_state = 0},
  [1056] = {.lex_state = 10},
  [1057] = {.lex_state = 0},
  [1058] = {.lex_state = 0},
  [1059] = {.lex_state = 0},
  [1060] = {.lex_state = 0},
  [1061] = {.lex_state = 10},
  [1062] = {.lex_state = 0},
  [1063] = {.lex_state = 10},
  [1064] = {.lex_state = 10},
  [1065] = {.lex_state = 0},
  [1066] = {.lex_state = 0},
  [1067] = {.lex_state = 0},
  [1068] = {.lex_state = 10},
  [1069] = {.lex_state = 0},
  [1070] = {.lex_state = 0},
  [1071] = {.lex_state = 0},
  [1072] = {.lex_state = 0},
  [1073] = {.lex_state = 10},
  [1074] = {.lex_state = 0},
  [1075] = {.lex_state = 0},
  [1076] = {.lex_state = 0},
  [1077] = {.lex_state = 0},
  [1078] = {.lex_state = 10},
  [1079] = {.lex_state = 0},
  [1080] = {.lex_state = 0},
  [1081] = {.lex_state = 0},
  [1082] = {.lex_state = 0},
  [1083] = {.lex_state = 0},
  [1084] = {.lex_state = 10},
  [1085] = {.lex_state = 0},
  [1086] = {.lex_state = 550},
  [1087] = {.lex_state = 10},
  [1088] = {.lex_state = 0},
  [1089] = {.lex_state = 10},
  [1090] = {.lex_state = 0},
  [1091] = {.lex_state = 10},
  [1092] = {.lex_state = 0},
  [1093] = {.lex_state = 0},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 10},
  [1096] = {.lex_state = 10},
  [1097] = {.lex_state = 0},
  [1098] = {.lex_state = 0},
  [1099] = {.lex_state = 0},
  [1100] = {.lex_state = 0},
  [1101] = {.lex_state = 10},
  [1102] = {.lex_state = 10},
  [1103] = {.lex_state = 0},
  [1104] = {.lex_state = 0},
  [1105] = {.lex_state = 10},
  [1106] = {.lex_state = 0},
  [1107] = {.lex_state = 10},
  [1108] = {.lex_state = 10},
  [1109] = {.lex_state = 0},
  [1110] = {.lex_state = 0},
  [1111] = {.lex_state = 0},
  [1112] = {.lex_state = 0},
  [1113] = {.lex_state = 0},
  [1114] = {.lex_state = 0},
  [1115] = {.lex_state = 0},
  [1116] = {.lex_state = 10},
  [1117] = {.lex_state = 0},
  [1118] = {.lex_state = 0},
  [1119] = {.lex_state = 0},
  [1120] = {.lex_state = 0},
  [1121] = {.lex_state = 0},
  [1122] = {.lex_state = 0},
  [1123] = {.lex_state = 0},
  [1124] = {.lex_state = 10},
  [1125] = {.lex_state = 10},
  [1126] = {.lex_state = 0},
  [1127] = {.lex_state = 551},
  [1128] = {.lex_state = 0},
  [1129] = {.lex_state = 10},
  [1130] = {.lex_state = 0},
  [1131] = {.lex_state = 0},
  [1132] = {.lex_state = 0},
  [1133] = {.lex_state = 0},
  [1134] = {.lex_state = 10},
  [1135] = {.lex_state = 10},
  [1136] = {.lex_state = 0},
  [1137] = {.lex_state = 551},
  [1138] = {.lex_state = 0},
  [1139] = {.lex_state = 0},
  [1140] = {.lex_state = 10},
  [1141] = {.lex_state = 0},
  [1142] = {.lex_state = 0},
  [1143] = {.lex_state = 0},
  [1144] = {.lex_state = 10},
  [1145] = {.lex_state = 551},
  [1146] = {.lex_state = 0},
  [1147] = {.lex_state = 0},
  [1148] = {.lex_state = 0},
  [1149] = {.lex_state = 10},
  [1150] = {.lex_state = 0},
  [1151] = {.lex_state = 0},
  [1152] = {.lex_state = 0},
  [1153] = {.lex_state = 0},
  [1154] = {.lex_state = 0},
  [1155] = {.lex_state = 550},
  [1156] = {.lex_state = 10},
  [1157] = {.lex_state = 0},
  [1158] = {.lex_state = 0},
  [1159] = {.lex_state = 10},
  [1160] = {.lex_state = 0},
  [1161] = {.lex_state = 0},
  [1162] = {.lex_state = 10},
  [1163] = {.lex_state = 0},
  [1164] = {.lex_state = 0},
  [1165] = {.lex_state = 0},
  [1166] = {.lex_state = 0},
  [1167] = {.lex_state = 10},
  [1168] = {.lex_state = 0},
  [1169] = {.lex_state = 0},
  [1170] = {.lex_state = 10},
  [1171] = {.lex_state = 10},
  [1172] = {.lex_state = 10},
  [1173] = {.lex_state = 0},
  [1174] = {.lex_state = 10},
  [1175] = {.lex_state = 0},
  [1176] = {.lex_state = 10},
  [1177] = {.lex_state = 0},
  [1178] = {.lex_state = 0},
  [1179] = {.lex_state = 10},
  [1180] = {.lex_state = 0},
  [1181] = {.lex_state = 0},
  [1182] = {.lex_state = 0},
  [1183] = {.lex_state = 10},
  [1184] = {.lex_state = 10},
  [1185] = {.lex_state = 0},
  [1186] = {.lex_state = 0},
  [1187] = {.lex_state = 0},
  [1188] = {.lex_state = 10},
  [1189] = {.lex_state = 0},
  [1190] = {.lex_state = 10},
  [1191] = {.lex_state = 10},
  [1192] = {.lex_state = 0},
  [1193] = {.lex_state = 0},
  [1194] = {.lex_state = 550},
  [1195] = {.lex_state = 550},
  [1196] = {.lex_state = 0},
  [1197] = {.lex_state = 0},
  [1198] = {.lex_state = 0},
  [1199] = {.lex_state = 0},
  [1200] = {.lex_state = 10},
  [1201] = {.lex_state = 0},
  [1202] = {.lex_state = 0},
  [1203] = {.lex_state = 10},
  [1204] = {.lex_state = 0},
  [1205] = {.lex_state = 0},
  [1206] = {.lex_state = 0},
  [1207] = {.lex_state = 0},
  [1208] = {.lex_state = 10},
  [1209] = {.lex_state = 0},
  [1210] = {.lex_state = 0},
  [1211] = {.lex_state = 0},
  [1212] = {.lex_state = 0},
  [1213] = {.lex_state = 10},
  [1214] = {.lex_state = 0},
  [1215] = {.lex_state = 0},
  [1216] = {.lex_state = 13},
  [1217] = {.lex_state = 10},
  [1218] = {.lex_state = 0},
  [1219] = {.lex_state = 0},
  [1220] = {.lex_state = 0},
  [1221] = {.lex_state = 10},
  [1222] = {.lex_state = 0},
  [1223] = {.lex_state = 0},
  [1224] = {.lex_state = 0},
  [1225] = {.lex_state = 0},
  [1226] = {.lex_state = 10},
  [1227] = {.lex_state = 0},
  [1228] = {.lex_state = 0},
  [1229] = {.lex_state = 0},
  [1230] = {.lex_state = 0},
  [1231] = {.lex_state = 0},
  [1232] = {.lex_state = 10},
  [1233] = {.lex_state = 551},
  [1234] = {.lex_state = 10},
  [1235] = {.lex_state = 10},
  [1236] = {.lex_state = 0},
  [1237] = {.lex_state = 0},
  [1238] = {.lex_state = 0},
  [1239] = {.lex_state = 550},
  [1240] = {.lex_state = 0},
  [1241] = {.lex_state = 0},
  [1242] = {.lex_state = 0},
  [1243] = {.lex_state = 0},
  [1244] = {.lex_state = 0},
  [1245] = {.lex_state = 10},
  [1246] = {.lex_state = 0},
  [1247] = {.lex_state = 10},
  [1248] = {.lex_state = 10},
  [1249] = {.lex_state = 0},
  [1250] = {.lex_state = 10},
  [1251] = {.lex_state = 0},
  [1252] = {.lex_state = 10},
  [1253] = {.lex_state = 0},
  [1254] = {.lex_state = 10},
  [1255] = {.lex_state = 0},
  [1256] = {.lex_state = 0},
  [1257] = {.lex_state = 10},
  [1258] = {.lex_state = 0},
  [1259] = {.lex_state = 0},
  [1260] = {.lex_state = 551},
  [1261] = {.lex_state = 0},
  [1262] = {.lex_state = 10},
  [1263] = {.lex_state = 0},
  [1264] = {.lex_state = 10},
  [1265] = {.lex_state = 0},
  [1266] = {.lex_state = 0},
  [1267] = {.lex_state = 0},
  [1268] = {.lex_state = 0},
  [1269] = {.lex_state = 0},
  [1270] = {.lex_state = 551},
  [1271] = {.lex_state = 0},
  [1272] = {.lex_state = 10},
  [1273] = {.lex_state = 0},
  [1274] = {.lex_state = 0},
  [1275] = {.lex_state = 0},
  [1276] = {.lex_state = 550},
  [1277] = {.lex_state = 10},
  [1278] = {.lex_state = 0},
  [1279] = {.lex_state = 0},
  [1280] = {.lex_state = 0},
  [1281] = {.lex_state = 550},
  [1282] = {.lex_state = 0},
  [1283] = {.lex_state = 0},
  [1284] = {.lex_state = 0},
  [1285] = {.lex_state = 0},
  [1286] = {.lex_state = 10},
  [1287] = {.lex_state = 0},
  [1288] = {.lex_state = 0},
  [1289] = {.lex_state = 10},
  [1290] = {.lex_state = 0},
  [1291] = {.lex_state = 0},
  [1292] = {.lex_state = 0},
  [1293] = {.lex_state = 10},
  [1294] = {.lex_state = 0},
  [1295] = {.lex_state = 0},
  [1296] = {.lex_state = 0},
  [1297] = {.lex_state = 0},
  [1298] = {.lex_state = 10},
  [1299] = {.lex_state = 10},
  [1300] = {.lex_state = 0},
  [1301] = {.lex_state = 0},
  [1302] = {.lex_state = 10},
  [1303] = {.lex_state = 0},
  [1304] = {.lex_state = 0},
  [1305] = {.lex_state = 10},
  [1306] = {.lex_state = 10},
  [1307] = {.lex_state = 10},
  [1308] = {.lex_state = 0},
  [1309] = {.lex_state = 0},
  [1310] = {.lex_state = 0},
  [1311] = {.lex_state = 0},
  [1312] = {.lex_state = 10},
  [1313] = {.lex_state = 0},
  [1314] = {.lex_state = 10},
  [1315] = {.lex_state = 0},
  [1316] = {.lex_state = 0},
  [1317] = {.lex_state = 10},
  [1318] = {.lex_state = 0},
  [1319] = {.lex_state = 550},
  [1320] = {.lex_state = 550},
  [1321] = {.lex_state = 0},
  [1322] = {.lex_state = 0},
  [1323] = {.lex_state = 0},
  [1324] = {.lex_state = 0},
  [1325] = {.lex_state = 0},
  [1326] = {.lex_state = 10},
  [1327] = {.lex_state = 0},
  [1328] = {.lex_state = 10},
  [1329] = {.lex_state = 0},
  [1330] = {.lex_state = 0},
  [1331] = {.lex_state = 10},
  [1332] = {.lex_state = 10},
  [1333] = {.lex_state = 0},
  [1334] = {.lex_state = 0},
  [1335] = {.lex_state = 0},
  [1336] = {.lex_state = 0},
  [1337] = {.lex_state = 10},
  [1338] = {.lex_state = 551},
  [1339] = {.lex_state = 0},
  [1340] = {.lex_state = 0},
  [1341] = {.lex_state = 0},
  [1342] = {.lex_state = 0},
  [1343] = {.lex_state = 10},
  [1344] = {.lex_state = 551},
  [1345] = {.lex_state = 10},
  [1346] = {.lex_state = 0},
  [1347] = {.lex_state = 0},
  [1348] = {.lex_state = 0},
  [1349] = {.lex_state = 0},
  [1350] = {.lex_state = 10},
  [1351] = {.lex_state = 0},
  [1352] = {.lex_state = 0},
  [1353] = {.lex_state = 10},
  [1354] = {.lex_state = 0},
  [1355] = {.lex_state = 0},
  [1356] = {.lex_state = 0},
  [1357] = {.lex_state = 0},
  [1358] = {.lex_state = 0},
  [1359] = {.lex_state = 10},
  [1360] = {.lex_state = 0},
  [1361] = {.lex_state = 0},
  [1362] = {.lex_state = 10},
  [1363] = {.lex_state = 10},
  [1364] = {.lex_state = 0},
  [1365] = {.lex_state = 10},
  [1366] = {.lex_state = 0},
  [1367] = {.lex_state = 0},
  [1368] = {.lex_state = 0},
  [1369] = {.lex_state = 0},
  [1370] = {.lex_state = 10},
  [1371] = {.lex_state = 0},
  [1372] = {.lex_state = 0},
  [1373] = {.lex_state = 551},
  [1374] = {.lex_state = 0},
  [1375] = {.lex_state = 10},
  [1376] = {.lex_state = 0},
  [1377] = {.lex_state = 0},
  [1378] = {.lex_state = 550},
  [1379] = {.lex_state = 0},
  [1380] = {.lex_state = 0},
  [1381] = {.lex_state = 10},
  [1382] = {.lex_state = 0},
  [1383] = {.lex_state = 0},
  [1384] = {.lex_state = 10},
  [1385] = {.lex_state = 0},
  [1386] = {.lex_state = 0},
  [1387] = {.lex_state = 0},
  [1388] = {.lex_state = 10},
  [1389] = {.lex_state = 10},
  [1390] = {.lex_state = 0},
  [1391] = {.lex_state = 10},
  [1392] = {.lex_state = 10},
  [1393] = {.lex_state = 0},
  [1394] = {.lex_state = 10},
  [1395] = {.lex_state = 10},
  [1396] = {.lex_state = 0},
  [1397] = {.lex_state = 0},
  [1398] = {.lex_state = 0},
  [1399] = {.lex_state = 0},
  [1400] = {.lex_state = 10},
  [1401] = {.lex_state = 10},
  [1402] = {.lex_state = 10},
  [1403] = {.lex_state = 0},
  [1404] = {.lex_state = 10},
  [1405] = {.lex_state = 13},
  [1406] = {.lex_state = 0},
  [1407] = {.lex_state = 0},
  [1408] = {.lex_state = 0},
  [1409] = {.lex_state = 551},
  [1410] = {.lex_state = 0},
  [1411] = {.lex_state = 0},
  [1412] = {.lex_state = 10},
  [1413] = {.lex_state = 0},
  [1414] = {.lex_state = 0},
  [1415] = {.lex_state = 0},
  [1416] = {.lex_state = 10},
  [1417] = {.lex_state = 0},
  [1418] = {.lex_state = 10},
  [1419] = {.lex_state = 0},
  [1420] = {.lex_state = 10},
  [1421] = {.lex_state = 10},
  [1422] = {.lex_state = 10},
  [1423] = {.lex_state = 10},
  [1424] = {.lex_state = 0},
  [1425] = {.lex_state = 551},
  [1426] = {.lex_state = 10},
  [1427] = {.lex_state = 0},
  [1428] = {.lex_state = 10},
  [1429] = {.lex_state = 0},
  [1430] = {.lex_state = 0},
  [1431] = {.lex_state = 10},
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
    [sym_source_file] = STATE(1336),
    [sym__statement] = STATE(2),
    [sym_select_statement] = STATE(346),
    [sym_delete_statement] = STATE(346),
    [sym_begin_batch] = STATE(583),
    [sym_insert_statement] = STATE(346),
    [sym_truncate] = STATE(346),
    [sym_create_index] = STATE(346),
    [sym_drop_index] = STATE(346),
    [sym_update] = STATE(346),
    [sym_use] = STATE(346),
    [sym_grant] = STATE(346),
    [sym_revoke] = STATE(346),
    [sym_list_roles] = STATE(346),
    [sym_list_permissions] = STATE(346),
    [sym_drop_aggregate] = STATE(346),
    [sym_drop_materialized_view] = STATE(346),
    [sym_drop_function] = STATE(346),
    [sym_drop_keyspace] = STATE(346),
    [sym_drop_role] = STATE(346),
    [sym_drop_table] = STATE(346),
    [sym_drop_trigger] = STATE(346),
    [sym_drop_type] = STATE(346),
    [sym_drop_user] = STATE(346),
    [sym_create_aggregate] = STATE(346),
    [sym_create_materialized_view] = STATE(346),
    [sym_create_function] = STATE(346),
    [sym_create_keyspace] = STATE(346),
    [sym_create_role] = STATE(346),
    [sym_create_table] = STATE(346),
    [sym_create_trigger] = STATE(346),
    [sym_create_type] = STATE(346),
    [sym_create_user] = STATE(346),
    [sym_alter_materialized_view] = STATE(346),
    [sym_alter_keyspace] = STATE(346),
    [sym_alter_role] = STATE(346),
    [sym_alter_table] = STATE(346),
    [sym_alter_type] = STATE(346),
    [sym_alter_user] = STATE(346),
    [sym_apply_batch] = STATE(346),
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
    STATE(583), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(346), 37,
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
    STATE(583), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(346), 37,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(1160), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(1366), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(1110), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(674), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(1042), 1,
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
    STATE(68), 1,
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
  [464] = 3,
    STATE(68), 1,
      sym_data_type_name,
    STATE(1001), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(531), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(829), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(1006), 1,
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
    STATE(68), 1,
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
  [639] = 3,
    STATE(68), 1,
      sym_data_type_name,
    STATE(1372), 1,
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
    STATE(68), 1,
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
  [709] = 3,
    STATE(68), 1,
      sym_data_type_name,
    STATE(635), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(261), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(1327), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(1026), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(1126), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(1290), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(1285), 1,
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
    STATE(68), 1,
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
  [989] = 3,
    STATE(68), 1,
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
  [1024] = 3,
    STATE(68), 1,
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
  [1059] = 3,
    STATE(68), 1,
      sym_data_type_name,
    STATE(1259), 1,
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
    STATE(68), 1,
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
  [1129] = 3,
    STATE(68), 1,
      sym_data_type_name,
    STATE(1249), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(1222), 1,
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
    STATE(68), 1,
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
  [1234] = 3,
    STATE(68), 1,
      sym_data_type_name,
    STATE(1205), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(1316), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(1187), 1,
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
    STATE(68), 1,
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
  [1374] = 3,
    STATE(68), 1,
      sym_data_type_name,
    STATE(1175), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(210), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(939), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(857), 1,
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
    STATE(68), 1,
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
  [1549] = 3,
    STATE(68), 1,
      sym_data_type_name,
    STATE(1161), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(1258), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(881), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(1180), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(1131), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(1297), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(911), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(169), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(1065), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(172), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(1097), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(696), 1,
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
    STATE(68), 1,
      sym_data_type_name,
    STATE(585), 1,
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
    STATE(68), 1,
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
  [2039] = 2,
    STATE(671), 1,
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
    STATE(865), 1,
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
  [2162] = 1,
    ACTIONS(94), 24,
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
  [2189] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(96), 22,
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
  [2220] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(62), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2251] = 1,
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
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(67), 1,
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
    ACTIONS(98), 1,
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
  [2367] = 3,
    ACTIONS(110), 1,
      anon_sym_LT,
    STATE(93), 1,
      sym_data_type_definition,
    ACTIONS(108), 21,
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
  [2397] = 8,
    ACTIONS(114), 1,
      aux_sym_select_statement_token4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    STATE(89), 1,
      sym_where_spec,
    STATE(111), 1,
      sym_order_spec,
    STATE(219), 1,
      sym_limit_spec,
    ACTIONS(112), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2437] = 8,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    ACTIONS(124), 1,
      aux_sym_select_statement_token4,
    STATE(96), 1,
      sym_where_spec,
    STATE(133), 1,
      sym_order_spec,
    STATE(253), 1,
      sym_limit_spec,
    ACTIONS(122), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2477] = 1,
    ACTIONS(126), 23,
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
  [2503] = 8,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    ACTIONS(130), 1,
      aux_sym_select_statement_token4,
    STATE(94), 1,
      sym_where_spec,
    STATE(127), 1,
      sym_order_spec,
    STATE(208), 1,
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
  [2697] = 1,
    ACTIONS(147), 22,
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
  [2722] = 8,
    ACTIONS(153), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(155), 1,
      sym_object_name,
    STATE(108), 1,
      sym_table_option_item,
    STATE(181), 1,
      sym_table_options,
    STATE(288), 1,
      sym_clustering_order,
    STATE(1165), 1,
      sym_table_option_name,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(151), 14,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2761] = 2,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(157), 21,
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
  [2788] = 1,
    ACTIONS(161), 22,
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
  [2813] = 3,
    ACTIONS(165), 1,
      aux_sym_relation_elements_token1,
    STATE(84), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(163), 20,
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
  [2842] = 3,
    ACTIONS(165), 1,
      aux_sym_relation_elements_token1,
    STATE(78), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(167), 20,
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
  [2946] = 3,
    STATE(159), 1,
      sym_order_direction,
    ACTIONS(177), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(175), 18,
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
  [2974] = 6,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    ACTIONS(124), 1,
      aux_sym_select_statement_token4,
    STATE(133), 1,
      sym_order_spec,
    STATE(253), 1,
      sym_limit_spec,
    ACTIONS(122), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3008] = 1,
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
  [3032] = 1,
    ACTIONS(179), 21,
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
  [3056] = 1,
    ACTIONS(181), 21,
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
  [3080] = 1,
    ACTIONS(183), 21,
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
  [3104] = 6,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    ACTIONS(187), 1,
      aux_sym_select_statement_token4,
    STATE(121), 1,
      sym_order_spec,
    STATE(230), 1,
      sym_limit_spec,
    ACTIONS(185), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3138] = 1,
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
  [3162] = 6,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    ACTIONS(130), 1,
      aux_sym_select_statement_token4,
    STATE(127), 1,
      sym_order_spec,
    STATE(208), 1,
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
  [3196] = 1,
    ACTIONS(191), 20,
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
  [3219] = 2,
    ACTIONS(195), 1,
      anon_sym_DOT,
    ACTIONS(193), 19,
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
  [3244] = 2,
    ACTIONS(199), 1,
      anon_sym_DOT,
    ACTIONS(197), 19,
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
      aux_sym_relation_element_token1,
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
  [3346] = 1,
    ACTIONS(214), 19,
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
  [3368] = 4,
    ACTIONS(218), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(318), 1,
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
  [3396] = 3,
    STATE(341), 1,
      sym_user_super_user,
    ACTIONS(224), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(222), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3422] = 2,
    ACTIONS(228), 1,
      aux_sym_priviledge_token2,
    ACTIONS(226), 18,
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
  [3446] = 4,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(232), 1,
      aux_sym_delete_statement_token2,
    STATE(329), 1,
      sym_using_ttl_timestamp,
    ACTIONS(230), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3474] = 3,
    ACTIONS(236), 1,
      aux_sym_relation_elements_token1,
    STATE(110), 1,
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
  [3500] = 1,
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
  [3522] = 3,
    ACTIONS(236), 1,
      aux_sym_relation_elements_token1,
    STATE(128), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(240), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3548] = 4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(124), 1,
      aux_sym_select_statement_token4,
    STATE(253), 1,
      sym_limit_spec,
    ACTIONS(122), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3576] = 1,
    ACTIONS(242), 19,
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
  [3598] = 4,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(246), 1,
      aux_sym_delete_statement_token2,
    STATE(366), 1,
      sym_using_ttl_timestamp,
    ACTIONS(244), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3626] = 1,
    ACTIONS(248), 19,
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
  [3648] = 1,
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
  [3670] = 4,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(252), 1,
      aux_sym_delete_statement_token2,
    STATE(337), 1,
      sym_using_ttl_timestamp,
    ACTIONS(250), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3698] = 4,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(256), 1,
      aux_sym_delete_statement_token2,
    STATE(324), 1,
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
  [3726] = 3,
    STATE(350), 1,
      sym_user_super_user,
    ACTIONS(224), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(258), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3752] = 4,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(262), 1,
      aux_sym_delete_statement_token2,
    STATE(286), 1,
      sym_using_ttl_timestamp,
    ACTIONS(260), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3780] = 3,
    STATE(385), 1,
      sym_user_super_user,
    ACTIONS(224), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(264), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3806] = 4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(268), 1,
      aux_sym_select_statement_token4,
    STATE(216), 1,
      sym_limit_spec,
    ACTIONS(266), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3834] = 1,
    ACTIONS(270), 19,
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
  [3856] = 4,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(274), 1,
      aux_sym_delete_statement_token2,
    STATE(415), 1,
      sym_using_ttl_timestamp,
    ACTIONS(272), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3884] = 4,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(278), 1,
      aux_sym_delete_statement_token2,
    STATE(404), 1,
      sym_using_ttl_timestamp,
    ACTIONS(276), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3912] = 1,
    ACTIONS(280), 19,
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
  [3934] = 1,
    ACTIONS(282), 19,
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
  [3956] = 4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(187), 1,
      aux_sym_select_statement_token4,
    STATE(230), 1,
      sym_limit_spec,
    ACTIONS(185), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3984] = 3,
    ACTIONS(286), 1,
      aux_sym_relation_elements_token1,
    STATE(128), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(284), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4010] = 1,
    ACTIONS(289), 19,
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
  [4032] = 1,
    ACTIONS(291), 19,
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
  [4054] = 1,
    ACTIONS(293), 19,
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
  [4076] = 1,
    ACTIONS(295), 19,
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
  [4098] = 4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(130), 1,
      aux_sym_select_statement_token4,
    STATE(208), 1,
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
  [4126] = 1,
    ACTIONS(297), 18,
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
  [4147] = 3,
    ACTIONS(301), 1,
      aux_sym_relation_elements_token1,
    STATE(155), 1,
      aux_sym_if_condition_list_repeat1,
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
      anon_sym_DOT,
    ACTIONS(307), 1,
      aux_sym_create_materialized_view_token2,
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
  [4197] = 2,
    STATE(152), 1,
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
  [4220] = 2,
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
  [4243] = 2,
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
  [4266] = 3,
    ACTIONS(301), 1,
      aux_sym_relation_elements_token1,
    STATE(135), 1,
      aux_sym_if_condition_list_repeat1,
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
  [4291] = 1,
    ACTIONS(284), 18,
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
  [4312] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4337] = 3,
    ACTIONS(324), 1,
      aux_sym_delete_statement_token2,
    STATE(417), 1,
      sym_if_spec,
    ACTIONS(322), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4362] = 1,
    ACTIONS(326), 18,
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
  [4383] = 1,
    ACTIONS(328), 18,
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
  [4404] = 8,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      sym_decimal_literal,
    ACTIONS(336), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    STATE(693), 1,
      sym_expression,
    STATE(1085), 1,
      sym_expression_list,
    STATE(810), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [4439] = 3,
    ACTIONS(342), 1,
      aux_sym_delete_statement_token2,
    STATE(310), 1,
      sym_if_spec,
    ACTIONS(340), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4464] = 3,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(285), 1,
      sym_using_ttl_timestamp,
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
  [4489] = 1,
    ACTIONS(346), 18,
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
  [4510] = 3,
    ACTIONS(350), 1,
      aux_sym_create_materialized_view_token2,
    STATE(272), 1,
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
  [4535] = 1,
    ACTIONS(352), 18,
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
  [4556] = 2,
    STATE(128), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(240), 17,
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
  [4579] = 1,
    ACTIONS(354), 18,
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
  [4600] = 3,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_role_with_repeat1,
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
  [4625] = 3,
    ACTIONS(362), 1,
      aux_sym_relation_elements_token1,
    STATE(155), 1,
      aux_sym_if_condition_list_repeat1,
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
  [4650] = 1,
    ACTIONS(365), 18,
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
  [4671] = 1,
    ACTIONS(367), 18,
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
  [4692] = 3,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(369), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4717] = 1,
    ACTIONS(373), 18,
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
  [4738] = 3,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [4763] = 1,
    ACTIONS(377), 18,
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
  [4784] = 1,
    ACTIONS(379), 18,
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
  [4805] = 1,
    ACTIONS(381), 18,
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
  [4826] = 3,
    ACTIONS(385), 1,
      aux_sym_delete_statement_token2,
    STATE(276), 1,
      sym_if_spec,
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
  [4851] = 1,
    ACTIONS(387), 18,
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
  [4872] = 3,
    ACTIONS(391), 1,
      aux_sym_delete_statement_token2,
    STATE(332), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4897] = 3,
    ACTIONS(395), 1,
      aux_sym_relation_elements_token1,
    STATE(167), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4922] = 3,
    ACTIONS(400), 1,
      aux_sym_relation_elements_token1,
    STATE(167), 1,
      aux_sym_alter_type_rename_list_repeat1,
    ACTIONS(398), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4947] = 3,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [4972] = 3,
    ACTIONS(406), 1,
      aux_sym_delete_statement_token2,
    STATE(319), 1,
      sym_if_spec,
    ACTIONS(404), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4997] = 3,
    ACTIONS(410), 1,
      aux_sym_delete_statement_token2,
    STATE(355), 1,
      sym_if_spec,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5022] = 3,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(412), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5047] = 1,
    ACTIONS(414), 18,
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
  [5068] = 3,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(413), 1,
      sym_using_ttl_timestamp,
    ACTIONS(416), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5093] = 3,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(330), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5118] = 3,
    ACTIONS(422), 1,
      aux_sym_create_materialized_view_token2,
    STATE(333), 1,
      sym_with_element,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5143] = 3,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_column_list_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5168] = 3,
    ACTIONS(350), 1,
      aux_sym_create_materialized_view_token2,
    STATE(281), 1,
      sym_role_with,
    ACTIONS(428), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5193] = 3,
    ACTIONS(432), 1,
      aux_sym_delete_statement_token2,
    STATE(275), 1,
      sym_if_spec,
    ACTIONS(430), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5218] = 3,
    ACTIONS(422), 1,
      aux_sym_create_materialized_view_token2,
    STATE(428), 1,
      sym_with_element,
    ACTIONS(434), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5243] = 3,
    ACTIONS(438), 1,
      aux_sym_clustering_order_token1,
    STATE(334), 1,
      sym_clustering_order,
    ACTIONS(436), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5268] = 3,
    ACTIONS(442), 1,
      aux_sym_delete_statement_token2,
    STATE(363), 1,
      sym_if_spec,
    ACTIONS(440), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5293] = 3,
    ACTIONS(446), 1,
      aux_sym_delete_statement_token2,
    STATE(425), 1,
      sym_if_spec,
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
  [5318] = 3,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_column_list_repeat1,
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
  [5343] = 3,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(450), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5368] = 1,
    ACTIONS(455), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [5389] = 3,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(367), 1,
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
  [5414] = 3,
    ACTIONS(461), 1,
      aux_sym_delete_statement_token2,
    STATE(311), 1,
      sym_if_spec,
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
  [5439] = 3,
    ACTIONS(465), 1,
      aux_sym_delete_statement_token2,
    STATE(368), 1,
      sym_if_spec,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5464] = 3,
    ACTIONS(469), 1,
      aux_sym_delete_statement_token2,
    STATE(369), 1,
      sym_if_spec,
    ACTIONS(467), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5489] = 3,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(471), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5514] = 3,
    ACTIONS(350), 1,
      aux_sym_create_materialized_view_token2,
    STATE(308), 1,
      sym_role_with,
    ACTIONS(473), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5539] = 3,
    ACTIONS(422), 1,
      aux_sym_create_materialized_view_token2,
    STATE(322), 1,
      sym_with_element,
    ACTIONS(475), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5564] = 3,
    ACTIONS(479), 1,
      aux_sym_delete_statement_token2,
    STATE(393), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5589] = 3,
    ACTIONS(483), 1,
      aux_sym_delete_statement_token2,
    STATE(307), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5614] = 3,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(382), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5639] = 3,
    ACTIONS(422), 1,
      aux_sym_create_materialized_view_token2,
    STATE(384), 1,
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
  [5664] = 3,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(424), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5689] = 1,
    ACTIONS(226), 18,
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
  [5710] = 3,
    ACTIONS(493), 1,
      aux_sym_create_index_token3,
    ACTIONS(495), 1,
      aux_sym_list_roles_token2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5735] = 3,
    ACTIONS(499), 1,
      aux_sym_list_roles_token2,
    ACTIONS(501), 1,
      aux_sym_list_roles_token3,
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
  [5760] = 1,
    ACTIONS(503), 18,
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
  [5781] = 3,
    ACTIONS(507), 1,
      aux_sym_delete_statement_token2,
    STATE(399), 1,
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
  [5806] = 3,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(407), 1,
      sym_using_ttl_timestamp,
    ACTIONS(509), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5831] = 3,
    ACTIONS(400), 1,
      aux_sym_relation_elements_token1,
    STATE(168), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [5856] = 3,
    ACTIONS(515), 1,
      aux_sym_delete_statement_token2,
    STATE(402), 1,
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
  [5881] = 3,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(401), 1,
      sym_using_ttl_timestamp,
    ACTIONS(517), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(187), 1,
      aux_sym_select_statement_token4,
    ACTIONS(185), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5928] = 2,
    ACTIONS(521), 1,
      aux_sym_relation_elements_token1,
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
  [5950] = 1,
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
  [5970] = 2,
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
  [5992] = 2,
    ACTIONS(531), 1,
      aux_sym_relation_elements_token1,
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
  [6014] = 2,
    ACTIONS(535), 1,
      anon_sym_DOT,
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
  [6036] = 2,
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
  [6058] = 1,
    ACTIONS(541), 17,
      ts_builtin_sym_end,
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
  [6078] = 2,
    ACTIONS(545), 1,
      aux_sym_select_statement_token4,
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
  [6100] = 2,
    ACTIONS(549), 1,
      aux_sym_relation_elements_token1,
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
  [6122] = 2,
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
  [6144] = 2,
    ACTIONS(124), 1,
      aux_sym_select_statement_token4,
    ACTIONS(122), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6166] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6188] = 2,
    ACTIONS(561), 1,
      aux_sym_create_materialized_view_token2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6210] = 1,
    ACTIONS(393), 17,
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
  [6230] = 2,
    ACTIONS(565), 1,
      anon_sym_DOT,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6252] = 2,
    ACTIONS(569), 1,
      anon_sym_DOT,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6274] = 2,
    ACTIONS(573), 1,
      anon_sym_DOT,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6296] = 2,
    ACTIONS(577), 1,
      anon_sym_DOT,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6318] = 2,
    ACTIONS(581), 1,
      anon_sym_DOT,
    ACTIONS(579), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6340] = 2,
    ACTIONS(585), 1,
      anon_sym_DOT,
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
  [6362] = 2,
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
  [6384] = 2,
    ACTIONS(268), 1,
      aux_sym_select_statement_token4,
    ACTIONS(266), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6406] = 1,
    ACTIONS(591), 17,
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
  [6426] = 2,
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
  [6448] = 1,
    ACTIONS(597), 17,
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
  [6468] = 1,
    ACTIONS(360), 17,
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
  [6488] = 2,
    ACTIONS(601), 1,
      anon_sym_DOT,
    ACTIONS(599), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6510] = 7,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      sym_decimal_literal,
    ACTIONS(336), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    STATE(764), 1,
      sym_expression,
    STATE(810), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [6542] = 2,
    ACTIONS(605), 1,
      aux_sym_create_materialized_view_token2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6564] = 2,
    ACTIONS(609), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(607), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6586] = 2,
    ACTIONS(613), 1,
      anon_sym_DOT,
    ACTIONS(611), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6608] = 1,
    ACTIONS(615), 17,
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
  [6628] = 2,
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
  [6650] = 1,
    ACTIONS(317), 17,
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
      aux_sym_relation_elements_token1,
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
      aux_sym_create_materialized_view_token2,
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
      aux_sym_create_materialized_view_token2,
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
  [6758] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6778] = 2,
    ACTIONS(641), 1,
      aux_sym_create_materialized_view_token2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6800] = 2,
    ACTIONS(645), 1,
      aux_sym_create_materialized_view_token2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6822] = 2,
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
  [6844] = 2,
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
  [6866] = 2,
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
  [6888] = 2,
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
  [6910] = 2,
    ACTIONS(661), 1,
      anon_sym_DOT,
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
      aux_sym_list_roles_token2,
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
      aux_sym_list_roles_token3,
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
    ACTIONS(599), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7112] = 1,
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
  [7131] = 1,
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
  [7150] = 1,
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
  [7169] = 1,
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
  [7283] = 1,
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
    ACTIONS(340), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(404), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7378] = 1,
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
  [7397] = 1,
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
  [7416] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7530] = 1,
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
  [7549] = 1,
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
  [7568] = 1,
    ACTIONS(436), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7606] = 1,
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
  [7625] = 1,
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
  [7739] = 1,
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
  [7872] = 1,
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
  [7891] = 1,
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
  [7910] = 1,
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
  [7929] = 1,
    ACTIONS(440), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7967] = 1,
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
  [7986] = 1,
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
  [8005] = 1,
    ACTIONS(322), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [8062] = 1,
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
  [8081] = 1,
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
  [8100] = 1,
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
  [8119] = 1,
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
  [8138] = 1,
    ACTIONS(244), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(467), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [8252] = 1,
    ACTIONS(272), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [8290] = 1,
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
  [8309] = 1,
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
    ACTIONS(276), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(266), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(260), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [8537] = 1,
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
  [8556] = 1,
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
  [8575] = 1,
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
  [8594] = 1,
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
  [8613] = 1,
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
  [8632] = 1,
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
  [8651] = 1,
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
  [8670] = 2,
    ACTIONS(821), 1,
      anon_sym_SEMI,
    ACTIONS(819), 15,
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
  [8691] = 1,
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
  [8710] = 1,
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
  [8729] = 1,
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
  [8748] = 1,
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
  [8767] = 1,
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
  [8786] = 1,
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
  [8805] = 1,
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
  [8824] = 1,
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
  [8843] = 1,
    ACTIONS(430), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [8881] = 1,
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
  [8900] = 1,
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
  [8919] = 1,
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
  [8938] = 1,
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
  [8957] = 1,
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
  [8976] = 1,
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
  [8995] = 1,
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
  [9014] = 1,
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
  [9033] = 1,
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
  [9052] = 1,
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
  [9071] = 1,
    ACTIONS(517), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [9109] = 1,
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
  [9128] = 1,
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
  [9147] = 1,
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
  [9166] = 1,
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
  [9185] = 1,
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
  [9204] = 1,
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
  [9223] = 1,
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
  [9242] = 1,
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
  [9261] = 1,
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
  [9280] = 1,
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
  [9299] = 1,
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
  [9318] = 1,
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
  [9337] = 1,
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
  [9356] = 1,
    ACTIONS(509), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [9394] = 1,
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
  [9413] = 1,
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
  [9432] = 1,
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
  [9451] = 1,
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
  [9584] = 1,
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
  [9603] = 1,
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
  [9660] = 1,
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
  [9679] = 1,
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
  [9698] = 1,
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
  [9717] = 1,
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
  [9736] = 1,
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
  [9755] = 1,
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
  [9774] = 1,
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
  [9793] = 1,
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
  [9812] = 1,
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
  [9831] = 1,
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
  [9850] = 1,
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
  [9869] = 1,
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
  [9888] = 1,
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
  [9907] = 1,
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
  [9926] = 1,
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
  [9945] = 1,
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
  [9964] = 1,
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
  [9983] = 1,
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
  [10002] = 1,
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
  [10021] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10040] = 1,
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
  [10059] = 1,
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
  [10078] = 1,
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
  [10097] = 1,
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
  [10116] = 1,
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
    ACTIONS(416), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [10192] = 1,
    ACTIONS(185), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [10249] = 1,
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
  [10268] = 1,
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
  [10287] = 1,
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
  [10306] = 1,
    ACTIONS(971), 15,
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
  [10324] = 7,
    ACTIONS(336), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    ACTIONS(973), 1,
      sym_object_name,
    STATE(854), 1,
      sym_constant,
    ACTIONS(334), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    STATE(553), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(332), 5,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10354] = 5,
    ACTIONS(334), 1,
      sym_decimal_literal,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
    STATE(356), 1,
      sym_init_cond_definition,
    STATE(173), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10379] = 5,
    ACTIONS(334), 1,
      sym_decimal_literal,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
    STATE(338), 1,
      sym_init_cond_definition,
    STATE(173), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10404] = 5,
    ACTIONS(334), 1,
      sym_decimal_literal,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
    STATE(383), 1,
      sym_init_cond_definition,
    STATE(173), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10429] = 5,
    ACTIONS(334), 1,
      sym_decimal_literal,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
    STATE(309), 1,
      sym_init_cond_definition,
    STATE(173), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10454] = 5,
    ACTIONS(334), 1,
      sym_decimal_literal,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
    STATE(268), 1,
      sym_init_cond_definition,
    STATE(173), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10479] = 5,
    ACTIONS(334), 1,
      sym_decimal_literal,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
    STATE(752), 1,
      sym_init_cond_definition,
    STATE(173), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10504] = 5,
    ACTIONS(334), 1,
      sym_decimal_literal,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
    STATE(289), 1,
      sym_init_cond_definition,
    STATE(173), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10529] = 5,
    ACTIONS(334), 1,
      sym_decimal_literal,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
    STATE(343), 1,
      sym_init_cond_definition,
    STATE(173), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10554] = 5,
    ACTIONS(334), 1,
      sym_decimal_literal,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
    STATE(303), 1,
      sym_init_cond_definition,
    STATE(173), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10579] = 6,
    ACTIONS(977), 1,
      anon_sym_STAR,
    ACTIONS(979), 1,
      sym_object_name,
    STATE(916), 1,
      sym_function_args,
    STATE(588), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(334), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    ACTIONS(332), 5,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10605] = 7,
    ACTIONS(981), 1,
      anon_sym_LPAREN,
    ACTIONS(983), 1,
      sym_object_name,
    STATE(617), 1,
      sym_init_cond_hash_item,
    STATE(619), 1,
      sym_init_cond_list,
    STATE(621), 1,
      sym_constant,
    ACTIONS(334), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    ACTIONS(332), 5,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10633] = 5,
    ACTIONS(979), 1,
      sym_object_name,
    STATE(893), 1,
      sym_function_args,
    STATE(588), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(334), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    ACTIONS(332), 5,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10656] = 4,
    ACTIONS(985), 1,
      sym_object_name,
    STATE(803), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(334), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    ACTIONS(332), 5,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10676] = 4,
    ACTIONS(334), 1,
      sym_decimal_literal,
    ACTIONS(981), 1,
      anon_sym_LPAREN,
    STATE(750), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10696] = 4,
    ACTIONS(989), 1,
      aux_sym_priviledge_token1,
    ACTIONS(991), 1,
      aux_sym_resource_token4,
    STATE(200), 1,
      sym_priviledge,
    ACTIONS(987), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10716] = 11,
    ACTIONS(993), 1,
      aux_sym_truncate_token2,
    ACTIONS(995), 1,
      aux_sym_create_index_token2,
    ACTIONS(997), 1,
      aux_sym_resource_token2,
    ACTIONS(999), 1,
      aux_sym_resource_token5,
    ACTIONS(1001), 1,
      aux_sym_resource_token6,
    ACTIONS(1003), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(1005), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1007), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(1009), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1011), 1,
      aux_sym_drop_user_token1,
    ACTIONS(1013), 1,
      aux_sym_create_aggregate_token1,
  [10750] = 7,
    ACTIONS(1015), 1,
      anon_sym_DOT,
    ACTIONS(1017), 1,
      aux_sym_drop_index_token1,
    ACTIONS(1019), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(1021), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1023), 1,
      aux_sym_alter_table_rename_token1,
    STATE(269), 1,
      sym_alter_table_operation,
    STATE(270), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10776] = 4,
    ACTIONS(1025), 1,
      sym_object_name,
    STATE(75), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(334), 3,
      aux_sym_constant_token1,
      sym_decimal_literal,
      sym_boolean_literal,
    ACTIONS(332), 5,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_code_block,
  [10796] = 5,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      sym_decimal_literal,
    STATE(64), 1,
      sym_assignment_tuple,
    STATE(536), 1,
      sym_constant,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10818] = 6,
    ACTIONS(1027), 1,
      anon_sym_DOT,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
    ACTIONS(1035), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1037), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(1031), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1033), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10841] = 6,
    ACTIONS(1017), 1,
      aux_sym_drop_index_token1,
    ACTIONS(1019), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(1021), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1023), 1,
      aux_sym_alter_table_rename_token1,
    STATE(352), 1,
      sym_alter_table_operation,
    STATE(270), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10864] = 4,
    ACTIONS(334), 1,
      sym_decimal_literal,
    ACTIONS(1039), 1,
      aux_sym_relation_contains_key_token2,
    STATE(76), 1,
      sym_constant,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10883] = 4,
    ACTIONS(334), 1,
      sym_decimal_literal,
    ACTIONS(1041), 1,
      anon_sym_RBRACE,
    STATE(529), 1,
      sym_constant,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10902] = 10,
    ACTIONS(1043), 1,
      aux_sym_truncate_token2,
    ACTIONS(1045), 1,
      aux_sym_create_index_token2,
    ACTIONS(1047), 1,
      aux_sym_resource_token2,
    ACTIONS(1049), 1,
      aux_sym_resource_token5,
    ACTIONS(1051), 1,
      aux_sym_resource_token6,
    ACTIONS(1053), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(1055), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1057), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(1059), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1061), 1,
      aux_sym_drop_user_token1,
  [10933] = 3,
    ACTIONS(989), 1,
      aux_sym_priviledge_token1,
    STATE(967), 1,
      sym_priviledge,
    ACTIONS(987), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10950] = 3,
    ACTIONS(989), 1,
      aux_sym_priviledge_token1,
    STATE(969), 1,
      sym_priviledge,
    ACTIONS(987), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10967] = 3,
    ACTIONS(334), 1,
      sym_decimal_literal,
    STATE(852), 1,
      sym_constant,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10983] = 3,
    ACTIONS(334), 1,
      sym_decimal_literal,
    STATE(233), 1,
      sym_constant,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [10999] = 3,
    ACTIONS(334), 1,
      sym_decimal_literal,
    STATE(536), 1,
      sym_constant,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11015] = 3,
    ACTIONS(334), 1,
      sym_decimal_literal,
    STATE(621), 1,
      sym_constant,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11031] = 3,
    ACTIONS(334), 1,
      sym_decimal_literal,
    STATE(86), 1,
      sym_constant,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11047] = 3,
    ACTIONS(334), 1,
      sym_decimal_literal,
    STATE(1047), 1,
      sym_constant,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11063] = 3,
    ACTIONS(334), 1,
      sym_decimal_literal,
    STATE(144), 1,
      sym_constant,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11079] = 3,
    ACTIONS(334), 1,
      sym_decimal_literal,
    STATE(618), 1,
      sym_constant,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11095] = 3,
    ACTIONS(334), 1,
      sym_decimal_literal,
    STATE(500), 1,
      sym_constant,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11111] = 3,
    ACTIONS(334), 1,
      sym_decimal_literal,
    STATE(620), 1,
      sym_constant,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11127] = 3,
    ACTIONS(334), 1,
      sym_decimal_literal,
    STATE(77), 1,
      sym_constant,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11143] = 3,
    ACTIONS(334), 1,
      sym_decimal_literal,
    STATE(793), 1,
      sym_constant,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11159] = 3,
    ACTIONS(334), 1,
      sym_decimal_literal,
    STATE(79), 1,
      sym_constant,
    ACTIONS(332), 7,
      aux_sym_constant_token1,
      sym_uuid,
      sym__string_literal,
      sym_float_literal,
      sym_hexadecimal_literal,
      sym_boolean_literal,
      sym_code_block,
  [11175] = 6,
    ACTIONS(1063), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1065), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1067), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1069), 1,
      sym_object_name,
    STATE(898), 1,
      sym_index_column_spec,
    STATE(1041), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11196] = 6,
    ACTIONS(1063), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1065), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1067), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1069), 1,
      sym_object_name,
    STATE(1058), 1,
      sym_index_column_spec,
    STATE(1041), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11217] = 6,
    ACTIONS(1063), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1065), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1067), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1069), 1,
      sym_object_name,
    STATE(982), 1,
      sym_index_column_spec,
    STATE(1041), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11238] = 6,
    ACTIONS(1063), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1065), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1067), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1069), 1,
      sym_object_name,
    STATE(1043), 1,
      sym_index_column_spec,
    STATE(1041), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11259] = 6,
    ACTIONS(1063), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1065), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1067), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1069), 1,
      sym_object_name,
    STATE(894), 1,
      sym_index_column_spec,
    STATE(1041), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11280] = 6,
    ACTIONS(1063), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1065), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1067), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1069), 1,
      sym_object_name,
    STATE(1118), 1,
      sym_index_column_spec,
    STATE(1041), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11301] = 6,
    ACTIONS(1063), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1065), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1067), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1069), 1,
      sym_object_name,
    STATE(945), 1,
      sym_index_column_spec,
    STATE(1041), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11322] = 6,
    ACTIONS(1071), 1,
      anon_sym_DOT,
    ACTIONS(1073), 1,
      aux_sym_priviledge_token3,
    ACTIONS(1075), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1077), 1,
      aux_sym_alter_table_rename_token1,
    STATE(278), 1,
      sym_alter_type_operation,
    STATE(279), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [11343] = 6,
    ACTIONS(1063), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1065), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1067), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1069), 1,
      sym_object_name,
    STATE(1238), 1,
      sym_index_column_spec,
    STATE(1041), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11364] = 7,
    ACTIONS(1079), 1,
      aux_sym_truncate_token2,
    ACTIONS(1081), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1083), 1,
      aux_sym_resource_token2,
    ACTIONS(1085), 1,
      aux_sym_resource_token5,
    ACTIONS(1087), 1,
      aux_sym_resource_token6,
    ACTIONS(1089), 1,
      sym_object_name,
    STATE(255), 1,
      sym_resource,
  [11386] = 7,
    ACTIONS(153), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(155), 1,
      sym_object_name,
    STATE(137), 1,
      sym_table_option_item,
    STATE(244), 1,
      sym_table_options,
    STATE(287), 1,
      sym_materialized_view_options,
    STATE(327), 1,
      sym_clustering_order,
    STATE(1165), 1,
      sym_table_option_name,
  [11408] = 3,
    ACTIONS(1095), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1091), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1093), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11422] = 5,
    ACTIONS(1073), 1,
      aux_sym_priviledge_token3,
    ACTIONS(1075), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1077), 1,
      aux_sym_alter_table_rename_token1,
    STATE(347), 1,
      sym_alter_type_operation,
    STATE(279), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [11440] = 6,
    ACTIONS(1097), 1,
      anon_sym_LPAREN,
    ACTIONS(1099), 1,
      sym_object_name,
    STATE(83), 1,
      sym_relation_element,
    STATE(97), 1,
      sym_relation_elements,
    STATE(505), 1,
      sym_function_call,
    STATE(82), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11460] = 7,
    ACTIONS(153), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(155), 1,
      sym_object_name,
    STATE(137), 1,
      sym_table_option_item,
    STATE(244), 1,
      sym_table_options,
    STATE(264), 1,
      sym_materialized_view_options,
    STATE(327), 1,
      sym_clustering_order,
    STATE(1165), 1,
      sym_table_option_name,
  [11482] = 7,
    ACTIONS(153), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(155), 1,
      sym_object_name,
    STATE(137), 1,
      sym_table_option_item,
    STATE(244), 1,
      sym_table_options,
    STATE(267), 1,
      sym_materialized_view_options,
    STATE(327), 1,
      sym_clustering_order,
    STATE(1165), 1,
      sym_table_option_name,
  [11504] = 7,
    ACTIONS(153), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(155), 1,
      sym_object_name,
    STATE(137), 1,
      sym_table_option_item,
    STATE(244), 1,
      sym_table_options,
    STATE(299), 1,
      sym_materialized_view_options,
    STATE(327), 1,
      sym_clustering_order,
    STATE(1165), 1,
      sym_table_option_name,
  [11526] = 7,
    ACTIONS(153), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(155), 1,
      sym_object_name,
    STATE(137), 1,
      sym_table_option_item,
    STATE(244), 1,
      sym_table_options,
    STATE(262), 1,
      sym_materialized_view_options,
    STATE(327), 1,
      sym_clustering_order,
    STATE(1165), 1,
      sym_table_option_name,
  [11548] = 7,
    ACTIONS(153), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(155), 1,
      sym_object_name,
    STATE(137), 1,
      sym_table_option_item,
    STATE(244), 1,
      sym_table_options,
    STATE(298), 1,
      sym_materialized_view_options,
    STATE(327), 1,
      sym_clustering_order,
    STATE(1165), 1,
      sym_table_option_name,
  [11570] = 7,
    ACTIONS(1101), 1,
      aux_sym_select_statement_token2,
    ACTIONS(1103), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1105), 1,
      anon_sym_STAR,
    ACTIONS(1107), 1,
      sym_object_name,
    STATE(616), 1,
      sym_select_element,
    STATE(622), 1,
      sym_function_call,
    STATE(776), 1,
      sym_select_elements,
  [11592] = 7,
    ACTIONS(153), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(155), 1,
      sym_object_name,
    STATE(137), 1,
      sym_table_option_item,
    STATE(244), 1,
      sym_table_options,
    STATE(327), 1,
      sym_clustering_order,
    STATE(328), 1,
      sym_materialized_view_options,
    STATE(1165), 1,
      sym_table_option_name,
  [11614] = 3,
    ACTIONS(1113), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1109), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1111), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11628] = 7,
    ACTIONS(1079), 1,
      aux_sym_truncate_token2,
    ACTIONS(1081), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1083), 1,
      aux_sym_resource_token2,
    ACTIONS(1085), 1,
      aux_sym_resource_token5,
    ACTIONS(1087), 1,
      aux_sym_resource_token6,
    ACTIONS(1089), 1,
      sym_object_name,
    STATE(1429), 1,
      sym_resource,
  [11650] = 7,
    ACTIONS(153), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(155), 1,
      sym_object_name,
    STATE(137), 1,
      sym_table_option_item,
    STATE(244), 1,
      sym_table_options,
    STATE(274), 1,
      sym_materialized_view_options,
    STATE(327), 1,
      sym_clustering_order,
    STATE(1165), 1,
      sym_table_option_name,
  [11672] = 7,
    ACTIONS(1079), 1,
      aux_sym_truncate_token2,
    ACTIONS(1081), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1083), 1,
      aux_sym_resource_token2,
    ACTIONS(1085), 1,
      aux_sym_resource_token5,
    ACTIONS(1087), 1,
      aux_sym_resource_token6,
    ACTIONS(1089), 1,
      sym_object_name,
    STATE(1430), 1,
      sym_resource,
  [11694] = 6,
    ACTIONS(1115), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1117), 1,
      anon_sym_DOT,
    ACTIONS(1119), 1,
      anon_sym_LPAREN,
    ACTIONS(1121), 1,
      aux_sym_insert_values_spec_token1,
    STATE(116), 1,
      sym_insert_values_spec,
    STATE(612), 1,
      sym_insert_column_spec,
  [11713] = 5,
    ACTIONS(1097), 1,
      anon_sym_LPAREN,
    ACTIONS(1099), 1,
      sym_object_name,
    STATE(505), 1,
      sym_function_call,
    STATE(1197), 1,
      sym_relation_element,
    STATE(82), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11730] = 6,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    ACTIONS(1125), 1,
      anon_sym_RPAREN,
    STATE(712), 1,
      sym_assignment_tuple,
    STATE(714), 1,
      aux_sym_relation_element_repeat2,
    STATE(715), 1,
      aux_sym_assignment_tuple_repeat1,
  [11749] = 4,
    ACTIONS(336), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    ACTIONS(1127), 1,
      sym_decimal_literal,
    STATE(837), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [11764] = 6,
    ACTIONS(1129), 1,
      aux_sym_truncate_token2,
    ACTIONS(1131), 1,
      aux_sym_resource_token2,
    ACTIONS(1133), 1,
      aux_sym_resource_token6,
    ACTIONS(1135), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1137), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1139), 1,
      aux_sym_drop_user_token1,
  [11783] = 5,
    ACTIONS(1097), 1,
      anon_sym_LPAREN,
    ACTIONS(1099), 1,
      sym_object_name,
    STATE(90), 1,
      sym_relation_element,
    STATE(505), 1,
      sym_function_call,
    STATE(82), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11800] = 2,
    ACTIONS(1141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1143), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11811] = 2,
    ACTIONS(1145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1147), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11822] = 6,
    ACTIONS(1115), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1119), 1,
      anon_sym_LPAREN,
    ACTIONS(1121), 1,
      aux_sym_insert_values_spec_token1,
    ACTIONS(1149), 1,
      anon_sym_DOT,
    STATE(117), 1,
      sym_insert_values_spec,
    STATE(704), 1,
      sym_insert_column_spec,
  [11841] = 6,
    ACTIONS(1105), 1,
      anon_sym_STAR,
    ACTIONS(1107), 1,
      sym_object_name,
    ACTIONS(1151), 1,
      aux_sym_select_statement_token3,
    STATE(616), 1,
      sym_select_element,
    STATE(622), 1,
      sym_function_call,
    STATE(875), 1,
      sym_select_elements,
  [11860] = 5,
    ACTIONS(1115), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1119), 1,
      anon_sym_LPAREN,
    ACTIONS(1121), 1,
      aux_sym_insert_values_spec_token1,
    STATE(107), 1,
      sym_insert_values_spec,
    STATE(699), 1,
      sym_insert_column_spec,
  [11876] = 1,
    ACTIONS(1153), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11884] = 1,
    ACTIONS(1155), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11892] = 5,
    ACTIONS(1115), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1119), 1,
      anon_sym_LPAREN,
    ACTIONS(1121), 1,
      aux_sym_insert_values_spec_token1,
    STATE(104), 1,
      sym_insert_values_spec,
    STATE(728), 1,
      sym_insert_column_spec,
  [11908] = 4,
    ACTIONS(1157), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1161), 1,
      aux_sym_role_with_options_token4,
    STATE(242), 1,
      sym_role_with_options,
    ACTIONS(1159), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11922] = 1,
    ACTIONS(1163), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11930] = 5,
    ACTIONS(1165), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1167), 1,
      sym_object_name,
    STATE(535), 1,
      sym_from_spec,
    STATE(634), 1,
      sym_delete_column_item,
    STATE(879), 1,
      sym_delete_column_list,
  [11946] = 3,
    ACTIONS(1171), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(647), 1,
      sym_using_timestamp_spec,
    ACTIONS(1169), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11958] = 5,
    ACTIONS(1165), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1167), 1,
      sym_object_name,
    STATE(533), 1,
      sym_from_spec,
    STATE(634), 1,
      sym_delete_column_item,
    STATE(781), 1,
      sym_delete_column_list,
  [11974] = 4,
    ACTIONS(1173), 1,
      anon_sym_LPAREN,
    ACTIONS(1175), 1,
      sym_object_name,
    STATE(978), 1,
      sym_primary_key_definition,
    STATE(979), 2,
      sym_compound_key,
      sym_composite_key,
  [11988] = 3,
    ACTIONS(1177), 1,
      anon_sym_LPAREN,
    ACTIONS(1179), 2,
      sym__string_literal,
      sym_float_literal,
    STATE(153), 2,
      sym_option_hash,
      sym_table_option_value,
  [12000] = 4,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
    ACTIONS(1183), 1,
      anon_sym_DOT,
    ACTIONS(1185), 1,
      aux_sym_select_element_token1,
    ACTIONS(1181), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12014] = 1,
    ACTIONS(1187), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12022] = 1,
    ACTIONS(1189), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12030] = 1,
    ACTIONS(1191), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12038] = 3,
    ACTIONS(1171), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(645), 1,
      sym_using_timestamp_spec,
    ACTIONS(1193), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12050] = 5,
    ACTIONS(1105), 1,
      anon_sym_STAR,
    ACTIONS(1195), 1,
      sym_object_name,
    STATE(616), 1,
      sym_select_element,
    STATE(622), 1,
      sym_function_call,
    STATE(875), 1,
      sym_select_elements,
  [12066] = 3,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    STATE(525), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(1200), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [12078] = 4,
    ACTIONS(1157), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1161), 1,
      aux_sym_role_with_options_token4,
    STATE(154), 1,
      sym_role_with_options,
    ACTIONS(1159), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [12092] = 5,
    ACTIONS(1105), 1,
      anon_sym_STAR,
    ACTIONS(1195), 1,
      sym_object_name,
    STATE(616), 1,
      sym_select_element,
    STATE(622), 1,
      sym_function_call,
    STATE(874), 1,
      sym_select_elements,
  [12108] = 1,
    ACTIONS(1202), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12116] = 4,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    ACTIONS(1206), 1,
      anon_sym_COLON,
    ACTIONS(1208), 1,
      anon_sym_RBRACE,
    STATE(729), 1,
      aux_sym_assignment_tuple_repeat1,
  [12129] = 4,
    ACTIONS(1210), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(1212), 1,
      sym_object_name,
    STATE(140), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [12142] = 3,
    ACTIONS(1216), 1,
      aux_sym_create_materialized_view_token1,
    STATE(863), 1,
      sym_primary_key_column,
    ACTIONS(1214), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12153] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      sym_where_spec,
    STATE(572), 1,
      aux_sym_update_repeat1,
  [12166] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1171), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(194), 1,
      sym_where_spec,
    STATE(866), 1,
      sym_using_timestamp_spec,
  [12179] = 3,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(1220), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [12190] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1171), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(188), 1,
      sym_where_spec,
    STATE(842), 1,
      sym_using_timestamp_spec,
  [12203] = 1,
    ACTIONS(1200), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [12210] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      sym_where_spec,
    STATE(558), 1,
      aux_sym_update_repeat1,
  [12223] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1222), 1,
      aux_sym_delete_statement_token3,
    STATE(140), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [12236] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1171), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(143), 1,
      sym_where_spec,
    STATE(796), 1,
      sym_using_timestamp_spec,
  [12249] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1224), 1,
      aux_sym_delete_statement_token3,
    STATE(140), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [12262] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1226), 1,
      aux_sym_delete_statement_token3,
    STATE(140), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [12275] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1228), 1,
      aux_sym_delete_statement_token3,
    STATE(140), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [12288] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      sym_where_spec,
    STATE(614), 1,
      aux_sym_update_repeat1,
  [12301] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      sym_where_spec,
    STATE(614), 1,
      aux_sym_update_repeat1,
  [12314] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1230), 1,
      aux_sym_delete_statement_token3,
    STATE(140), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [12327] = 4,
    ACTIONS(1232), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1234), 1,
      sym_object_name,
    STATE(858), 1,
      sym_column_definition,
    STATE(934), 1,
      sym_primary_key_element,
  [12340] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1236), 1,
      aux_sym_delete_statement_token3,
    STATE(140), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [12353] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      sym_where_spec,
    STATE(544), 1,
      aux_sym_update_repeat1,
  [12366] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      sym_where_spec,
    STATE(574), 1,
      aux_sym_update_repeat1,
  [12379] = 4,
    ACTIONS(1232), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1234), 1,
      sym_object_name,
    STATE(858), 1,
      sym_column_definition,
    STATE(1267), 1,
      sym_primary_key_element,
  [12392] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1238), 1,
      aux_sym_delete_statement_token3,
    STATE(140), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [12405] = 3,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    STATE(534), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(1240), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [12416] = 2,
    ACTIONS(1242), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1244), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12425] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1246), 1,
      aux_sym_delete_statement_token3,
    STATE(140), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [12438] = 4,
    ACTIONS(1248), 1,
      sym_object_name,
    STATE(108), 1,
      sym_table_option_item,
    STATE(348), 1,
      sym_table_options,
    STATE(1165), 1,
      sym_table_option_name,
  [12451] = 1,
    ACTIONS(1250), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12458] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      sym_where_spec,
    STATE(543), 1,
      aux_sym_update_repeat1,
  [12471] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      sym_where_spec,
    STATE(614), 1,
      aux_sym_update_repeat1,
  [12484] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1252), 1,
      aux_sym_delete_statement_token3,
    STATE(140), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [12497] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      sym_where_spec,
    STATE(614), 1,
      aux_sym_update_repeat1,
  [12510] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      sym_where_spec,
    STATE(614), 1,
      aux_sym_update_repeat1,
  [12523] = 4,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1254), 1,
      anon_sym_DOT,
    ACTIONS(1256), 1,
      aux_sym_update_token2,
    STATE(962), 1,
      sym_using_ttl_timestamp,
  [12536] = 4,
    ACTIONS(1248), 1,
      sym_object_name,
    STATE(108), 1,
      sym_table_option_item,
    STATE(414), 1,
      sym_table_options,
    STATE(1165), 1,
      sym_table_option_name,
  [12549] = 4,
    ACTIONS(1258), 1,
      aux_sym_timestamp_token1,
    ACTIONS(1260), 1,
      aux_sym_ttl_token1,
    STATE(138), 1,
      sym_ttl,
    STATE(139), 1,
      sym_timestamp,
  [12562] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1262), 1,
      aux_sym_delete_statement_token3,
    STATE(140), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [12575] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1264), 1,
      aux_sym_delete_statement_token3,
    STATE(140), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [12588] = 4,
    ACTIONS(1248), 1,
      sym_object_name,
    STATE(108), 1,
      sym_table_option_item,
    STATE(315), 1,
      sym_table_options,
    STATE(1165), 1,
      sym_table_option_name,
  [12601] = 4,
    ACTIONS(1266), 1,
      sym__string_literal,
    ACTIONS(1268), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1270), 1,
      aux_sym_create_index_token3,
    ACTIONS(1272), 1,
      sym_object_name,
  [12614] = 3,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
    STATE(1169), 1,
      sym_order_direction,
    ACTIONS(177), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [12625] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1276), 1,
      aux_sym_delete_statement_token3,
    STATE(140), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [12638] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1278), 1,
      aux_sym_delete_statement_token3,
    STATE(140), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [12651] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      sym_where_spec,
    STATE(614), 1,
      aux_sym_update_repeat1,
  [12664] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      sym_where_spec,
    STATE(577), 1,
      aux_sym_update_repeat1,
  [12677] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      sym_where_spec,
    STATE(614), 1,
      aux_sym_update_repeat1,
  [12690] = 4,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1280), 1,
      anon_sym_DOT,
    ACTIONS(1282), 1,
      aux_sym_update_token2,
    STATE(1414), 1,
      sym_using_ttl_timestamp,
  [12703] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      sym_where_spec,
    STATE(561), 1,
      aux_sym_update_repeat1,
  [12716] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      sym_where_spec,
    STATE(614), 1,
      aux_sym_update_repeat1,
  [12729] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      sym_where_spec,
    STATE(560), 1,
      aux_sym_update_repeat1,
  [12742] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1284), 1,
      aux_sym_delete_statement_token3,
    STATE(140), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [12755] = 4,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
    STATE(690), 1,
      aux_sym_function_args_repeat1,
  [12768] = 4,
    ACTIONS(1212), 1,
      sym_object_name,
    ACTIONS(1290), 1,
      aux_sym_delete_statement_token3,
    STATE(140), 1,
      sym_if_condition,
    STATE(313), 1,
      sym_if_condition_list,
  [12781] = 3,
    ACTIONS(1292), 1,
      anon_sym_DOT,
    ACTIONS(1294), 1,
      aux_sym_where_spec_token1,
    STATE(1015), 1,
      sym_materialized_view_where,
  [12791] = 3,
    ACTIONS(1296), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1298), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1300), 1,
      aux_sym_update_token1,
  [12801] = 3,
    ACTIONS(1302), 1,
      anon_sym_COMMA,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
    STATE(609), 1,
      aux_sym_init_cond_hash_repeat1,
  [12811] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
    STATE(651), 1,
      aux_sym_create_type_repeat1,
  [12821] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(1177), 1,
      sym_return_mode,
  [12831] = 3,
    ACTIONS(1314), 1,
      anon_sym_COMMA,
    ACTIONS(1317), 1,
      anon_sym_GT,
    STATE(587), 1,
      aux_sym_data_type_definition_repeat1,
  [12841] = 3,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
    STATE(690), 1,
      aux_sym_function_args_repeat1,
  [12851] = 3,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1321), 1,
      anon_sym_RPAREN,
    STATE(655), 1,
      aux_sym_create_function_repeat1,
  [12861] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(1024), 1,
      sym_return_mode,
  [12871] = 3,
    ACTIONS(1323), 1,
      anon_sym_COMMA,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
    STATE(646), 1,
      aux_sym_option_hash_repeat1,
  [12881] = 3,
    ACTIONS(1195), 1,
      sym_object_name,
    STATE(622), 1,
      sym_function_call,
    STATE(877), 1,
      sym_select_element,
  [12891] = 3,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    ACTIONS(1329), 1,
      aux_sym_from_spec_token1,
    STATE(598), 1,
      aux_sym_select_elements_repeat1,
  [12901] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(997), 1,
      sym_return_mode,
  [12911] = 3,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1331), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_create_function_repeat1,
  [12921] = 3,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1336), 1,
      anon_sym_RPAREN,
    STATE(596), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12931] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(993), 1,
      sym_return_mode,
  [12941] = 3,
    ACTIONS(1338), 1,
      anon_sym_COMMA,
    ACTIONS(1341), 1,
      aux_sym_from_spec_token1,
    STATE(598), 1,
      aux_sym_select_elements_repeat1,
  [12951] = 3,
    ACTIONS(1343), 1,
      anon_sym_RPAREN,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(641), 1,
      sym_param,
  [12961] = 3,
    ACTIONS(1347), 1,
      anon_sym_COMMA,
    ACTIONS(1349), 1,
      anon_sym_RBRACE,
    STATE(638), 1,
      aux_sym_replication_list_repeat1,
  [12971] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(1028), 1,
      sym_return_mode,
  [12981] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1351), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      aux_sym_create_type_repeat1,
  [12991] = 3,
    ACTIONS(1353), 1,
      anon_sym_COMMA,
    ACTIONS(1355), 1,
      anon_sym_RPAREN,
    STATE(596), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13001] = 3,
    ACTIONS(1345), 1,
      sym_object_name,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
    STATE(658), 1,
      sym_param,
  [13011] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(1023), 1,
      sym_return_mode,
  [13021] = 3,
    ACTIONS(1359), 1,
      anon_sym_COMMA,
    ACTIONS(1362), 1,
      anon_sym_RPAREN,
    STATE(606), 1,
      aux_sym_relation_element_repeat1,
  [13031] = 3,
    ACTIONS(1248), 1,
      sym_object_name,
    STATE(141), 1,
      sym_table_option_item,
    STATE(1165), 1,
      sym_table_option_name,
  [13041] = 3,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1364), 1,
      anon_sym_RPAREN,
    STATE(662), 1,
      aux_sym_create_function_repeat1,
  [13051] = 3,
    ACTIONS(1366), 1,
      anon_sym_COMMA,
    ACTIONS(1369), 1,
      anon_sym_RPAREN,
    STATE(609), 1,
      aux_sym_init_cond_hash_repeat1,
  [13061] = 3,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    ACTIONS(1371), 1,
      anon_sym_RPAREN,
    STATE(525), 1,
      aux_sym_assignment_tuple_repeat1,
  [13071] = 3,
    ACTIONS(1373), 1,
      sym_object_name,
    STATE(615), 1,
      sym_column_definition,
    STATE(973), 1,
      sym_column_definition_list,
  [13081] = 3,
    ACTIONS(1115), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1121), 1,
      aux_sym_insert_values_spec_token1,
    STATE(119), 1,
      sym_insert_values_spec,
  [13091] = 3,
    ACTIONS(1375), 1,
      sym__string_literal,
    ACTIONS(1377), 1,
      aux_sym_create_index_token3,
    ACTIONS(1379), 1,
      sym_object_name,
  [13101] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    ACTIONS(1384), 1,
      aux_sym_where_spec_token1,
    STATE(614), 1,
      aux_sym_update_repeat1,
  [13111] = 3,
    ACTIONS(1386), 1,
      anon_sym_COMMA,
    ACTIONS(1388), 1,
      anon_sym_RPAREN,
    STATE(680), 1,
      aux_sym_column_definition_list_repeat1,
  [13121] = 3,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    ACTIONS(1390), 1,
      aux_sym_from_spec_token1,
    STATE(593), 1,
      aux_sym_select_elements_repeat1,
  [13131] = 3,
    ACTIONS(1302), 1,
      anon_sym_COMMA,
    ACTIONS(1392), 1,
      anon_sym_RPAREN,
    STATE(584), 1,
      aux_sym_init_cond_hash_repeat1,
  [13141] = 3,
    ACTIONS(1394), 1,
      anon_sym_COMMA,
    ACTIONS(1396), 1,
      anon_sym_RBRACE,
    STATE(631), 1,
      aux_sym_assignment_map_repeat1,
  [13151] = 3,
    ACTIONS(1353), 1,
      anon_sym_COMMA,
    ACTIONS(1398), 1,
      anon_sym_RPAREN,
    STATE(603), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13161] = 3,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    ACTIONS(1400), 1,
      anon_sym_RBRACK,
    STATE(723), 1,
      aux_sym_assignment_tuple_repeat1,
  [13171] = 3,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    ACTIONS(1402), 1,
      anon_sym_RPAREN,
    STATE(610), 1,
      aux_sym_assignment_tuple_repeat1,
  [13181] = 2,
    ACTIONS(1185), 1,
      aux_sym_select_element_token1,
    ACTIONS(1181), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13189] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(1287), 1,
      sym_return_mode,
  [13199] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1404), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [13209] = 3,
    ACTIONS(1406), 1,
      anon_sym_COMMA,
    ACTIONS(1408), 1,
      anon_sym_RPAREN,
    STATE(709), 1,
      aux_sym_expression_list_repeat1,
  [13219] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1404), 1,
      anon_sym_RPAREN,
    STATE(665), 1,
      aux_sym_relation_element_repeat2,
  [13229] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1410), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [13239] = 3,
    ACTIONS(1294), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1412), 1,
      anon_sym_DOT,
    STATE(1278), 1,
      sym_materialized_view_where,
  [13249] = 3,
    ACTIONS(1373), 1,
      sym_object_name,
    STATE(615), 1,
      sym_column_definition,
    STATE(1282), 1,
      sym_column_definition_list,
  [13259] = 3,
    ACTIONS(1345), 1,
      sym_object_name,
    ACTIONS(1414), 1,
      anon_sym_RPAREN,
    STATE(686), 1,
      sym_param,
  [13269] = 3,
    ACTIONS(1394), 1,
      anon_sym_COMMA,
    ACTIONS(1416), 1,
      anon_sym_RBRACE,
    STATE(668), 1,
      aux_sym_assignment_map_repeat1,
  [13279] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1418), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_relation_element_repeat2,
  [13289] = 2,
    ACTIONS(1422), 1,
      anon_sym_LBRACK,
    ACTIONS(1420), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13297] = 3,
    ACTIONS(1424), 1,
      anon_sym_COMMA,
    ACTIONS(1426), 1,
      aux_sym_from_spec_token1,
    STATE(636), 1,
      aux_sym_delete_column_list_repeat1,
  [13307] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1428), 1,
      anon_sym_RPAREN,
    STATE(681), 1,
      aux_sym_create_type_repeat1,
  [13317] = 3,
    ACTIONS(1424), 1,
      anon_sym_COMMA,
    ACTIONS(1430), 1,
      aux_sym_from_spec_token1,
    STATE(644), 1,
      aux_sym_delete_column_list_repeat1,
  [13327] = 3,
    ACTIONS(1432), 1,
      sym__string_literal,
    STATE(684), 1,
      sym_replication_list_item,
    STATE(1059), 1,
      sym_replication_list,
  [13337] = 3,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    ACTIONS(1437), 1,
      anon_sym_RBRACE,
    STATE(638), 1,
      aux_sym_replication_list_repeat1,
  [13347] = 3,
    ACTIONS(1439), 1,
      anon_sym_COMMA,
    ACTIONS(1442), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      aux_sym_column_definition_list_repeat1,
  [13357] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(1062), 1,
      sym_return_mode,
  [13367] = 3,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1444), 1,
      anon_sym_RPAREN,
    STATE(689), 1,
      aux_sym_create_function_repeat1,
  [13377] = 3,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1446), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_create_function_repeat1,
  [13387] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(1067), 1,
      sym_return_mode,
  [13397] = 3,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    ACTIONS(1451), 1,
      aux_sym_from_spec_token1,
    STATE(644), 1,
      aux_sym_delete_column_list_repeat1,
  [13407] = 1,
    ACTIONS(1169), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13413] = 3,
    ACTIONS(1453), 1,
      anon_sym_COMMA,
    ACTIONS(1456), 1,
      anon_sym_RPAREN,
    STATE(646), 1,
      aux_sym_option_hash_repeat1,
  [13423] = 1,
    ACTIONS(1458), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13429] = 3,
    ACTIONS(1460), 1,
      sym_object_name,
    STATE(695), 1,
      sym_column_not_null,
    STATE(812), 1,
      sym_column_not_null_list,
  [13439] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(1246), 1,
      sym_return_mode,
  [13449] = 3,
    ACTIONS(1432), 1,
      sym__string_literal,
    STATE(684), 1,
      sym_replication_list_item,
    STATE(1199), 1,
      sym_replication_list,
  [13459] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1462), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      aux_sym_create_type_repeat1,
  [13469] = 3,
    ACTIONS(1345), 1,
      sym_object_name,
    ACTIONS(1464), 1,
      anon_sym_RPAREN,
    STATE(682), 1,
      sym_param,
  [13479] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(1044), 1,
      sym_return_mode,
  [13489] = 3,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1466), 1,
      anon_sym_RPAREN,
    STATE(678), 1,
      aux_sym_create_function_repeat1,
  [13499] = 3,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1468), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_create_function_repeat1,
  [13509] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(1004), 1,
      sym_return_mode,
  [13519] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(1090), 1,
      sym_return_mode,
  [13529] = 3,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1470), 1,
      anon_sym_RPAREN,
    STATE(703), 1,
      aux_sym_create_function_repeat1,
  [13539] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(1094), 1,
      sym_return_mode,
  [13549] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(1122), 1,
      sym_return_mode,
  [13559] = 3,
    ACTIONS(1472), 1,
      anon_sym_COMMA,
    ACTIONS(1475), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_create_function_repeat1,
  [13569] = 3,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1477), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_create_function_repeat1,
  [13579] = 3,
    ACTIONS(1345), 1,
      sym_object_name,
    ACTIONS(1479), 1,
      anon_sym_RPAREN,
    STATE(654), 1,
      sym_param,
  [13589] = 3,
    ACTIONS(1481), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1484), 1,
      aux_sym_create_materialized_view_token1,
    STATE(664), 1,
      aux_sym_column_not_null_list_repeat1,
  [13599] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1486), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [13609] = 3,
    ACTIONS(1488), 1,
      anon_sym_COMMA,
    ACTIONS(1490), 1,
      anon_sym_RPAREN,
    STATE(606), 1,
      aux_sym_relation_element_repeat1,
  [13619] = 3,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1492), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_create_function_repeat1,
  [13629] = 3,
    ACTIONS(1494), 1,
      anon_sym_COMMA,
    ACTIONS(1497), 1,
      anon_sym_RBRACE,
    STATE(668), 1,
      aux_sym_assignment_map_repeat1,
  [13639] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(935), 1,
      sym_return_mode,
  [13649] = 3,
    ACTIONS(1345), 1,
      sym_object_name,
    ACTIONS(1499), 1,
      anon_sym_RPAREN,
    STATE(608), 1,
      sym_param,
  [13659] = 3,
    ACTIONS(1501), 1,
      anon_sym_COMMA,
    ACTIONS(1503), 1,
      anon_sym_GT,
    STATE(676), 1,
      aux_sym_data_type_definition_repeat1,
  [13669] = 3,
    ACTIONS(1505), 1,
      anon_sym_COMMA,
    ACTIONS(1508), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      aux_sym_create_type_repeat1,
  [13679] = 3,
    ACTIONS(1488), 1,
      anon_sym_COMMA,
    ACTIONS(1510), 1,
      anon_sym_RPAREN,
    STATE(725), 1,
      aux_sym_relation_element_repeat1,
  [13689] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1512), 1,
      anon_sym_RPAREN,
    STATE(602), 1,
      aux_sym_create_type_repeat1,
  [13699] = 3,
    ACTIONS(1488), 1,
      anon_sym_COMMA,
    ACTIONS(1514), 1,
      anon_sym_RPAREN,
    STATE(710), 1,
      aux_sym_relation_element_repeat1,
  [13709] = 3,
    ACTIONS(1501), 1,
      anon_sym_COMMA,
    ACTIONS(1516), 1,
      anon_sym_GT,
    STATE(587), 1,
      aux_sym_data_type_definition_repeat1,
  [13719] = 3,
    ACTIONS(1323), 1,
      anon_sym_COMMA,
    ACTIONS(1518), 1,
      anon_sym_RPAREN,
    STATE(591), 1,
      aux_sym_option_hash_repeat1,
  [13729] = 3,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1520), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_create_function_repeat1,
  [13739] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(907), 1,
      sym_return_mode,
  [13749] = 3,
    ACTIONS(1522), 1,
      anon_sym_COMMA,
    ACTIONS(1524), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      aux_sym_column_definition_list_repeat1,
  [13759] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1526), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      aux_sym_create_type_repeat1,
  [13769] = 3,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1528), 1,
      anon_sym_RPAREN,
    STATE(595), 1,
      aux_sym_create_function_repeat1,
  [13779] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(904), 1,
      sym_return_mode,
  [13789] = 3,
    ACTIONS(1347), 1,
      anon_sym_COMMA,
    ACTIONS(1530), 1,
      anon_sym_RBRACE,
    STATE(600), 1,
      aux_sym_replication_list_repeat1,
  [13799] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(1054), 1,
      sym_return_mode,
  [13809] = 3,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1532), 1,
      anon_sym_RPAREN,
    STATE(667), 1,
      aux_sym_create_function_repeat1,
  [13819] = 3,
    ACTIONS(1373), 1,
      sym_object_name,
    STATE(615), 1,
      sym_column_definition,
    STATE(882), 1,
      sym_column_definition_list,
  [13829] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(1123), 1,
      sym_return_mode,
  [13839] = 3,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1534), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_create_function_repeat1,
  [13849] = 3,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1536), 1,
      anon_sym_RPAREN,
    STATE(718), 1,
      aux_sym_function_args_repeat1,
  [13859] = 3,
    ACTIONS(1538), 1,
      sym__string_literal,
    ACTIONS(1540), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1542), 1,
      sym_object_name,
  [13869] = 3,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1544), 1,
      aux_sym_update_token2,
    STATE(1230), 1,
      sym_using_ttl_timestamp,
  [13879] = 3,
    ACTIONS(1406), 1,
      anon_sym_COMMA,
    ACTIONS(1546), 1,
      anon_sym_RPAREN,
    STATE(625), 1,
      aux_sym_expression_list_repeat1,
  [13889] = 3,
    ACTIONS(1294), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1548), 1,
      anon_sym_DOT,
    STATE(1141), 1,
      sym_materialized_view_where,
  [13899] = 2,
    STATE(717), 1,
      aux_sym_column_not_null_list_repeat1,
    ACTIONS(1550), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13907] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1552), 1,
      anon_sym_RPAREN,
    STATE(708), 1,
      aux_sym_create_type_repeat1,
  [13917] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(1207), 1,
      sym_return_mode,
  [13927] = 3,
    ACTIONS(1345), 1,
      sym_object_name,
    ACTIONS(1554), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      sym_param,
  [13937] = 3,
    ACTIONS(1115), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1121), 1,
      aux_sym_insert_values_spec_token1,
    STATE(124), 1,
      sym_insert_values_spec,
  [13947] = 3,
    ACTIONS(1556), 1,
      sym_object_name,
    STATE(205), 1,
      sym_alter_type_rename_item,
    STATE(427), 1,
      sym_alter_type_rename_list,
  [13957] = 3,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1558), 1,
      anon_sym_RPAREN,
    STATE(642), 1,
      aux_sym_create_function_repeat1,
  [13967] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(1153), 1,
      sym_return_mode,
  [13977] = 3,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1560), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_create_function_repeat1,
  [13987] = 3,
    ACTIONS(1115), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1121), 1,
      aux_sym_insert_values_spec_token1,
    STATE(123), 1,
      sym_insert_values_spec,
  [13997] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(1157), 1,
      sym_return_mode,
  [14007] = 3,
    ACTIONS(1310), 1,
      aux_sym_create_function_token1,
    ACTIONS(1312), 1,
      aux_sym_return_mode_token1,
    STATE(1202), 1,
      sym_return_mode,
  [14017] = 3,
    ACTIONS(1562), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1564), 1,
      sym_object_name,
    STATE(1315), 1,
      sym_trigger_name,
  [14027] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1566), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      aux_sym_create_type_repeat1,
  [14037] = 3,
    ACTIONS(1568), 1,
      anon_sym_COMMA,
    ACTIONS(1571), 1,
      anon_sym_RPAREN,
    STATE(709), 1,
      aux_sym_expression_list_repeat1,
  [14047] = 3,
    ACTIONS(1488), 1,
      anon_sym_COMMA,
    ACTIONS(1573), 1,
      anon_sym_RPAREN,
    STATE(606), 1,
      aux_sym_relation_element_repeat1,
  [14057] = 2,
    ACTIONS(1575), 1,
      aux_sym_resource_token1,
    ACTIONS(1577), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [14065] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1579), 1,
      anon_sym_RPAREN,
    STATE(627), 1,
      aux_sym_relation_element_repeat2,
  [14075] = 3,
    ACTIONS(1373), 1,
      sym_object_name,
    STATE(615), 1,
      sym_column_definition,
    STATE(1361), 1,
      sym_column_definition_list,
  [14085] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1579), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [14095] = 3,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    ACTIONS(1579), 1,
      anon_sym_RPAREN,
    STATE(525), 1,
      aux_sym_assignment_tuple_repeat1,
  [14105] = 3,
    ACTIONS(1581), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    ACTIONS(1583), 1,
      sym_object_name,
    STATE(412), 1,
      sym_alter_table_drop_column_list,
  [14115] = 2,
    STATE(664), 1,
      aux_sym_column_not_null_list_repeat1,
    ACTIONS(1585), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [14123] = 3,
    ACTIONS(1587), 1,
      anon_sym_COMMA,
    ACTIONS(1590), 1,
      anon_sym_RPAREN,
    STATE(718), 1,
      aux_sym_function_args_repeat1,
  [14133] = 3,
    ACTIONS(1345), 1,
      sym_object_name,
    ACTIONS(1592), 1,
      anon_sym_RPAREN,
    STATE(589), 1,
      sym_param,
  [14143] = 3,
    ACTIONS(1432), 1,
      sym__string_literal,
    STATE(684), 1,
      sym_replication_list_item,
    STATE(990), 1,
      sym_replication_list,
  [14153] = 2,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
    ACTIONS(1590), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14161] = 2,
    ACTIONS(1596), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1594), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [14169] = 3,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    ACTIONS(1598), 1,
      anon_sym_RBRACK,
    STATE(525), 1,
      aux_sym_assignment_tuple_repeat1,
  [14179] = 3,
    ACTIONS(1294), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1600), 1,
      anon_sym_DOT,
    STATE(1192), 1,
      sym_materialized_view_where,
  [14189] = 3,
    ACTIONS(1488), 1,
      anon_sym_COMMA,
    ACTIONS(1602), 1,
      anon_sym_RPAREN,
    STATE(606), 1,
      aux_sym_relation_element_repeat1,
  [14199] = 3,
    ACTIONS(220), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1604), 1,
      aux_sym_update_token2,
    STATE(912), 1,
      sym_using_ttl_timestamp,
  [14209] = 3,
    ACTIONS(1488), 1,
      anon_sym_COMMA,
    ACTIONS(1606), 1,
      anon_sym_RPAREN,
    STATE(666), 1,
      aux_sym_relation_element_repeat1,
  [14219] = 3,
    ACTIONS(1115), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1121), 1,
      aux_sym_insert_values_spec_token1,
    STATE(113), 1,
      sym_insert_values_spec,
  [14229] = 3,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    ACTIONS(1608), 1,
      anon_sym_RBRACE,
    STATE(525), 1,
      aux_sym_assignment_tuple_repeat1,
  [14239] = 1,
    ACTIONS(1610), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [14244] = 2,
    ACTIONS(1612), 1,
      sym__string_literal,
    STATE(838), 1,
      sym_option_hash_item,
  [14251] = 2,
    ACTIONS(1614), 1,
      sym_object_name,
    STATE(418), 1,
      sym_alter_table_column_definition,
  [14258] = 2,
    ACTIONS(1616), 1,
      aux_sym_role_with_options_token1,
    STATE(105), 1,
      sym_user_password,
  [14265] = 2,
    ACTIONS(1618), 1,
      anon_sym_DOT,
    ACTIONS(1620), 1,
      aux_sym_create_index_token3,
  [14272] = 2,
    ACTIONS(1622), 1,
      sym_object_name,
    STATE(573), 1,
      sym_assignment_element,
  [14279] = 2,
    ACTIONS(1624), 1,
      aux_sym_truncate_token2,
    ACTIONS(1626), 1,
      sym_object_name,
  [14286] = 2,
    ACTIONS(1622), 1,
      sym_object_name,
    STATE(578), 1,
      sym_assignment_element,
  [14293] = 2,
    ACTIONS(1628), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1630), 1,
      sym_object_name,
  [14300] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1419), 1,
      sym_column_list,
  [14307] = 2,
    ACTIONS(1634), 1,
      anon_sym_EQ,
    ACTIONS(1636), 1,
      anon_sym_LBRACK,
  [14314] = 2,
    ACTIONS(1638), 1,
      sym_object_name,
    STATE(202), 1,
      sym_order_spec_element,
  [14321] = 1,
    ACTIONS(1640), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14326] = 2,
    ACTIONS(438), 1,
      aux_sym_clustering_order_token1,
    STATE(293), 1,
      sym_clustering_order,
  [14333] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1399), 1,
      sym_column_list,
  [14340] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1398), 1,
      sym_column_list,
  [14347] = 2,
    ACTIONS(1642), 1,
      anon_sym_DOT,
    ACTIONS(1644), 1,
      anon_sym_LPAREN,
  [14354] = 2,
    ACTIONS(1646), 1,
      aux_sym_resource_token5,
    ACTIONS(1648), 1,
      aux_sym_drop_aggregate_token1,
  [14361] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1382), 1,
      sym_column_list,
  [14368] = 1,
    ACTIONS(1369), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14373] = 1,
    ACTIONS(1336), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14378] = 2,
    ACTIONS(1622), 1,
      sym_object_name,
    STATE(557), 1,
      sym_assignment_element,
  [14385] = 1,
    ACTIONS(1650), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14390] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1357), 1,
      sym_column_list,
  [14397] = 2,
    ACTIONS(1652), 1,
      anon_sym_DOT,
    ACTIONS(1654), 1,
      anon_sym_LPAREN,
  [14404] = 2,
    ACTIONS(1294), 1,
      aux_sym_where_spec_token1,
    STATE(1354), 1,
      sym_materialized_view_where,
  [14411] = 2,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    STATE(632), 1,
      sym_assignment_tuple,
  [14418] = 2,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_assignment_tuple,
  [14425] = 2,
    ACTIONS(1656), 1,
      sym_object_name,
    STATE(749), 1,
      sym_init_cond_hash_item,
  [14432] = 2,
    ACTIONS(1658), 1,
      sym_object_name,
    STATE(988), 1,
      sym_trigger_name,
  [14439] = 2,
    ACTIONS(1660), 1,
      anon_sym_DOT,
    ACTIONS(1662), 1,
      aux_sym_using_timestamp_spec_token1,
  [14446] = 2,
    ACTIONS(1664), 1,
      sym__string_literal,
    ACTIONS(1666), 1,
      sym_object_name,
  [14453] = 2,
    ACTIONS(1668), 1,
      sym__string_literal,
    ACTIONS(1670), 1,
      sym_object_name,
  [14460] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1324), 1,
      sym_column_list,
  [14467] = 1,
    ACTIONS(1571), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14472] = 2,
    ACTIONS(1672), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1674), 1,
      sym_object_name,
  [14479] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1323), 1,
      sym_column_list,
  [14486] = 2,
    ACTIONS(1676), 1,
      anon_sym_DOT,
    ACTIONS(1678), 1,
      anon_sym_LPAREN,
  [14493] = 2,
    ACTIONS(1680), 1,
      anon_sym_DOT,
    ACTIONS(1682), 1,
      anon_sym_LPAREN,
  [14500] = 1,
    ACTIONS(1684), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14505] = 2,
    ACTIONS(1686), 1,
      anon_sym_DOT,
    ACTIONS(1688), 1,
      anon_sym_LPAREN,
  [14512] = 2,
    ACTIONS(1690), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1692), 1,
      sym_object_name,
  [14519] = 2,
    ACTIONS(1616), 1,
      aux_sym_role_with_options_token1,
    STATE(118), 1,
      sym_user_password,
  [14526] = 2,
    ACTIONS(1694), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1696), 1,
      sym_object_name,
  [14533] = 2,
    ACTIONS(1616), 1,
      aux_sym_role_with_options_token1,
    STATE(120), 1,
      sym_user_password,
  [14540] = 2,
    ACTIONS(1373), 1,
      sym_object_name,
    STATE(858), 1,
      sym_column_definition,
  [14547] = 2,
    ACTIONS(1698), 1,
      aux_sym_from_spec_token1,
    STATE(69), 1,
      sym_from_spec,
  [14554] = 2,
    ACTIONS(1700), 1,
      anon_sym_DOT,
    ACTIONS(1702), 1,
      aux_sym_create_index_token3,
  [14561] = 2,
    ACTIONS(1704), 1,
      anon_sym_DOT,
    ACTIONS(1706), 1,
      anon_sym_LPAREN,
  [14568] = 1,
    ACTIONS(1708), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [14573] = 2,
    ACTIONS(1294), 1,
      aux_sym_where_spec_token1,
    STATE(1279), 1,
      sym_materialized_view_where,
  [14580] = 2,
    ACTIONS(1698), 1,
      aux_sym_from_spec_token1,
    STATE(535), 1,
      sym_from_spec,
  [14587] = 2,
    ACTIONS(1260), 1,
      aux_sym_ttl_token1,
    STATE(215), 1,
      sym_ttl,
  [14594] = 2,
    ACTIONS(1258), 1,
      aux_sym_timestamp_token1,
    STATE(215), 1,
      sym_timestamp,
  [14601] = 2,
    ACTIONS(1622), 1,
      sym_object_name,
    STATE(855), 1,
      sym_assignment_element,
  [14608] = 2,
    ACTIONS(1710), 1,
      sym__string_literal,
    STATE(258), 1,
      sym_trigger_class,
  [14615] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1244), 1,
      sym_column_list,
  [14622] = 2,
    ACTIONS(1712), 1,
      anon_sym_DOT,
    ACTIONS(1714), 1,
      aux_sym_select_element_token1,
  [14629] = 1,
    ACTIONS(1484), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [14634] = 2,
    ACTIONS(1294), 1,
      aux_sym_where_spec_token1,
    STATE(1240), 1,
      sym_materialized_view_where,
  [14641] = 2,
    ACTIONS(1622), 1,
      sym_object_name,
    STATE(548), 1,
      sym_assignment_element,
  [14648] = 2,
    ACTIONS(1716), 1,
      aux_sym_durable_writes_token1,
    STATE(391), 1,
      sym_durable_writes,
  [14655] = 2,
    ACTIONS(1718), 1,
      sym_object_name,
    STATE(1219), 1,
      sym_clustering_key_list,
  [14662] = 1,
    ACTIONS(1720), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14667] = 2,
    ACTIONS(1722), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1724), 1,
      sym_object_name,
  [14674] = 2,
    ACTIONS(1460), 1,
      sym_object_name,
    STATE(788), 1,
      sym_column_not_null,
  [14681] = 2,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    STATE(166), 1,
      sym_where_spec,
  [14688] = 2,
    ACTIONS(1726), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1728), 1,
      sym_object_name,
  [14695] = 2,
    ACTIONS(1730), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1732), 1,
      sym_object_name,
  [14702] = 2,
    ACTIONS(1734), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1736), 1,
      sym_object_name,
  [14709] = 2,
    ACTIONS(1622), 1,
      sym_object_name,
    STATE(576), 1,
      sym_assignment_element,
  [14716] = 2,
    ACTIONS(1738), 1,
      anon_sym_DOT,
    ACTIONS(1740), 1,
      anon_sym_LPAREN,
  [14723] = 2,
    ACTIONS(1742), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1744), 1,
      sym_object_name,
  [14730] = 1,
    ACTIONS(1590), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14735] = 2,
    ACTIONS(1746), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1748), 1,
      sym_object_name,
  [14742] = 2,
    ACTIONS(1750), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1752), 1,
      sym_object_name,
  [14749] = 2,
    ACTIONS(1754), 1,
      anon_sym_DOT,
    ACTIONS(1756), 1,
      anon_sym_LPAREN,
  [14756] = 2,
    ACTIONS(1758), 1,
      sym_object_name,
    STATE(234), 1,
      sym_if_condition,
  [14763] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1383), 1,
      sym_column_list,
  [14770] = 1,
    ACTIONS(1760), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [14775] = 1,
    ACTIONS(1762), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14780] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(922), 1,
      sym_column_list,
  [14787] = 2,
    ACTIONS(1764), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1766), 1,
      aux_sym_create_materialized_view_token1,
  [14794] = 2,
    ACTIONS(1294), 1,
      aux_sym_where_spec_token1,
    STATE(1142), 1,
      sym_materialized_view_where,
  [14801] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1138), 1,
      sym_column_list,
  [14808] = 2,
    ACTIONS(1768), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1770), 1,
      sym_object_name,
  [14815] = 2,
    ACTIONS(1710), 1,
      sym__string_literal,
    STATE(302), 1,
      sym_trigger_class,
  [14822] = 1,
    ACTIONS(1772), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14827] = 2,
    ACTIONS(1774), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1776), 1,
      sym_object_name,
  [14834] = 2,
    ACTIONS(1778), 1,
      anon_sym_DOT,
    ACTIONS(1780), 1,
      anon_sym_LPAREN,
  [14841] = 2,
    ACTIONS(1718), 1,
      sym_object_name,
    STATE(1117), 1,
      sym_clustering_key_list,
  [14848] = 2,
    ACTIONS(1782), 1,
      anon_sym_DOT,
    ACTIONS(1784), 1,
      anon_sym_LPAREN,
  [14855] = 2,
    ACTIONS(1786), 1,
      anon_sym_DOT,
    ACTIONS(1788), 1,
      aux_sym_select_element_token1,
  [14862] = 2,
    ACTIONS(1790), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1792), 1,
      sym_object_name,
  [14869] = 2,
    ACTIONS(1794), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1796), 1,
      sym_object_name,
  [14876] = 2,
    ACTIONS(1716), 1,
      aux_sym_durable_writes_token1,
    STATE(423), 1,
      sym_durable_writes,
  [14883] = 2,
    ACTIONS(1798), 1,
      anon_sym_DOT,
    ACTIONS(1800), 1,
      anon_sym_LPAREN,
  [14890] = 2,
    ACTIONS(1802), 1,
      anon_sym_DOT,
    ACTIONS(1804), 1,
      anon_sym_LPAREN,
  [14897] = 2,
    ACTIONS(1806), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1808), 1,
      sym_object_name,
  [14904] = 1,
    ACTIONS(1810), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14909] = 2,
    ACTIONS(1345), 1,
      sym_object_name,
    STATE(839), 1,
      sym_param,
  [14916] = 2,
    ACTIONS(1177), 1,
      anon_sym_LPAREN,
    STATE(240), 1,
      sym_option_hash,
  [14923] = 2,
    ACTIONS(1812), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1814), 1,
      sym_object_name,
  [14930] = 2,
    ACTIONS(1622), 1,
      sym_object_name,
    STATE(532), 1,
      sym_assignment_element,
  [14937] = 2,
    ACTIONS(1816), 1,
      anon_sym_DOT,
    ACTIONS(1818), 1,
      anon_sym_LPAREN,
  [14944] = 2,
    ACTIONS(1820), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1822), 1,
      sym_object_name,
  [14951] = 2,
    ACTIONS(1612), 1,
      sym__string_literal,
    STATE(677), 1,
      sym_option_hash_item,
  [14958] = 1,
    ACTIONS(1824), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14963] = 1,
    ACTIONS(1456), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14968] = 1,
    ACTIONS(1475), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14973] = 1,
    ACTIONS(1451), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14978] = 2,
    ACTIONS(1826), 1,
      anon_sym_DOT,
    ACTIONS(1828), 1,
      anon_sym_LPAREN,
  [14985] = 2,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    STATE(143), 1,
      sym_where_spec,
  [14992] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1074), 1,
      sym_column_list,
  [14999] = 2,
    ACTIONS(1716), 1,
      aux_sym_durable_writes_token1,
    STATE(411), 1,
      sym_durable_writes,
  [15006] = 1,
    ACTIONS(1437), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15011] = 1,
    ACTIONS(1830), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15016] = 2,
    ACTIONS(1832), 1,
      anon_sym_DOT,
    ACTIONS(1834), 1,
      anon_sym_LPAREN,
  [15023] = 2,
    ACTIONS(1836), 1,
      anon_sym_COMMA,
    ACTIONS(1838), 1,
      anon_sym_RPAREN,
  [15030] = 2,
    ACTIONS(1840), 1,
      sym_object_name,
    STATE(1053), 1,
      sym_partition_key_list,
  [15037] = 2,
    ACTIONS(1842), 1,
      sym__string_literal,
    ACTIONS(1844), 1,
      sym_object_name,
  [15044] = 2,
    ACTIONS(1622), 1,
      sym_object_name,
    STATE(549), 1,
      sym_assignment_element,
  [15051] = 1,
    ACTIONS(1846), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [15056] = 2,
    ACTIONS(1848), 1,
      anon_sym_DOT,
    ACTIONS(1850), 1,
      anon_sym_LPAREN,
  [15063] = 1,
    ACTIONS(1242), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [15068] = 1,
    ACTIONS(1384), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [15073] = 2,
    ACTIONS(1852), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1854), 1,
      sym_object_name,
  [15080] = 1,
    ACTIONS(1856), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15085] = 1,
    ACTIONS(1442), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15090] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1011), 1,
      sym_column_list,
  [15097] = 2,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_assignment_tuple,
  [15104] = 2,
    ACTIONS(1858), 1,
      sym_object_name,
    STATE(840), 1,
      sym_delete_column_item,
  [15111] = 2,
    ACTIONS(1556), 1,
      sym_object_name,
    STATE(222), 1,
      sym_alter_type_rename_item,
  [15118] = 1,
    ACTIONS(1860), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15123] = 2,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    STATE(626), 1,
      sym_assignment_tuple,
  [15130] = 1,
    ACTIONS(1317), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [15135] = 2,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    STATE(188), 1,
      sym_where_spec,
  [15142] = 2,
    ACTIONS(1622), 1,
      sym_object_name,
    STATE(537), 1,
      sym_assignment_element,
  [15149] = 2,
    ACTIONS(1258), 1,
      aux_sym_timestamp_token1,
    STATE(556), 1,
      sym_timestamp,
  [15156] = 1,
    ACTIONS(1862), 2,
      sym__string_literal,
      sym_decimal_literal,
  [15161] = 2,
    ACTIONS(1432), 1,
      sym__string_literal,
    STATE(845), 1,
      sym_replication_list_item,
  [15168] = 1,
    ACTIONS(1864), 2,
      sym__string_literal,
      sym_decimal_literal,
  [15173] = 1,
    ACTIONS(1362), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15178] = 1,
    ACTIONS(1866), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [15183] = 2,
    ACTIONS(1698), 1,
      aux_sym_from_spec_token1,
    STATE(72), 1,
      sym_from_spec,
  [15190] = 2,
    ACTIONS(1698), 1,
      aux_sym_from_spec_token1,
    STATE(70), 1,
      sym_from_spec,
  [15197] = 2,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_assignment_tuple,
  [15204] = 1,
    ACTIONS(1341), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [15209] = 1,
    ACTIONS(1868), 2,
      sym__string_literal,
      sym_float_literal,
  [15214] = 2,
    ACTIONS(1698), 1,
      aux_sym_from_spec_token1,
    STATE(539), 1,
      sym_from_spec,
  [15221] = 1,
    ACTIONS(1870), 1,
      sym_object_name,
  [15225] = 1,
    ACTIONS(1872), 1,
      aux_sym_create_function_token2,
  [15229] = 1,
    ACTIONS(1874), 1,
      anon_sym_RPAREN,
  [15233] = 1,
    ACTIONS(1876), 1,
      sym_object_name,
  [15237] = 1,
    ACTIONS(1878), 1,
      aux_sym_create_materialized_view_token2,
  [15241] = 1,
    ACTIONS(1880), 1,
      aux_sym_delete_statement_token3,
  [15245] = 1,
    ACTIONS(1882), 1,
      sym_object_name,
  [15249] = 1,
    ACTIONS(1884), 1,
      aux_sym_create_materialized_view_token2,
  [15253] = 1,
    ACTIONS(1886), 1,
      sym_object_name,
  [15257] = 1,
    ACTIONS(1888), 1,
      aux_sym_insert_statement_token3,
  [15261] = 1,
    ACTIONS(1890), 1,
      sym_object_name,
  [15265] = 1,
    ACTIONS(1892), 1,
      aux_sym_order_spec_token2,
  [15269] = 1,
    ACTIONS(1894), 1,
      sym_object_name,
  [15273] = 1,
    ACTIONS(1896), 1,
      anon_sym_RPAREN,
  [15277] = 1,
    ACTIONS(1898), 1,
      anon_sym_RPAREN,
  [15281] = 1,
    ACTIONS(1900), 1,
      sym_object_name,
  [15285] = 1,
    ACTIONS(1902), 1,
      anon_sym_LPAREN,
  [15289] = 1,
    ACTIONS(1904), 1,
      anon_sym_LPAREN,
  [15293] = 1,
    ACTIONS(1906), 1,
      anon_sym_RPAREN,
  [15297] = 1,
    ACTIONS(1908), 1,
      anon_sym_RPAREN,
  [15301] = 1,
    ACTIONS(1910), 1,
      anon_sym_RPAREN,
  [15305] = 1,
    ACTIONS(1912), 1,
      anon_sym_RPAREN,
  [15309] = 1,
    ACTIONS(1914), 1,
      anon_sym_LBRACE,
  [15313] = 1,
    ACTIONS(1916), 1,
      sym_object_name,
  [15317] = 1,
    ACTIONS(1918), 1,
      aux_sym_create_function_token1,
  [15321] = 1,
    ACTIONS(1920), 1,
      aux_sym_select_statement_token5,
  [15325] = 1,
    ACTIONS(1916), 1,
      anon_sym_STAR,
  [15329] = 1,
    ACTIONS(1922), 1,
      aux_sym_create_function_token1,
  [15333] = 1,
    ACTIONS(1924), 1,
      aux_sym_return_mode_token2,
  [15337] = 1,
    ACTIONS(1926), 1,
      aux_sym_create_function_token1,
  [15341] = 1,
    ACTIONS(1928), 1,
      sym_object_name,
  [15345] = 1,
    ACTIONS(1930), 1,
      aux_sym_create_function_token2,
  [15349] = 1,
    ACTIONS(1932), 1,
      aux_sym_update_token2,
  [15353] = 1,
    ACTIONS(1934), 1,
      aux_sym_insert_statement_token3,
  [15357] = 1,
    ACTIONS(1936), 1,
      aux_sym_create_aggregate_token3,
  [15361] = 1,
    ACTIONS(1938), 1,
      sym_object_name,
  [15365] = 1,
    ACTIONS(1940), 1,
      anon_sym_RPAREN,
  [15369] = 1,
    ACTIONS(1942), 1,
      aux_sym_relation_contains_key_token2,
  [15373] = 1,
    ACTIONS(1944), 1,
      sym_object_name,
  [15377] = 1,
    ACTIONS(1946), 1,
      aux_sym_delete_statement_token3,
  [15381] = 1,
    ACTIONS(1948), 1,
      aux_sym_select_element_token1,
  [15385] = 1,
    ACTIONS(1950), 1,
      sym_object_name,
  [15389] = 1,
    ACTIONS(1952), 1,
      aux_sym_from_spec_token1,
  [15393] = 1,
    ACTIONS(1954), 1,
      aux_sym_create_aggregate_token3,
  [15397] = 1,
    ACTIONS(1956), 1,
      sym_object_name,
  [15401] = 1,
    ACTIONS(1958), 1,
      aux_sym_select_statement_token5,
  [15405] = 1,
    ACTIONS(1960), 1,
      sym_decimal_literal,
  [15409] = 1,
    ACTIONS(1962), 1,
      aux_sym_order_spec_token2,
  [15413] = 1,
    ACTIONS(1964), 1,
      aux_sym_select_statement_token5,
  [15417] = 1,
    ACTIONS(1966), 1,
      anon_sym_LBRACE,
  [15421] = 1,
    ACTIONS(1968), 1,
      sym_object_name,
  [15425] = 1,
    ACTIONS(1970), 1,
      sym_object_name,
  [15429] = 1,
    ACTIONS(1972), 1,
      sym_object_name,
  [15433] = 1,
    ACTIONS(1974), 1,
      anon_sym_RBRACK,
  [15437] = 1,
    ACTIONS(1976), 1,
      anon_sym_RPAREN,
  [15441] = 1,
    ACTIONS(1978), 1,
      aux_sym_create_function_token1,
  [15445] = 1,
    ACTIONS(1980), 1,
      sym_object_name,
  [15449] = 1,
    ACTIONS(1982), 1,
      sym_object_name,
  [15453] = 1,
    ACTIONS(1984), 1,
      sym_object_name,
  [15457] = 1,
    ACTIONS(1986), 1,
      anon_sym_RPAREN,
  [15461] = 1,
    ACTIONS(1988), 1,
      sym_object_name,
  [15465] = 1,
    ACTIONS(1990), 1,
      aux_sym_resource_token2,
  [15469] = 1,
    ACTIONS(1992), 1,
      sym_object_name,
  [15473] = 1,
    ACTIONS(1994), 1,
      anon_sym_LPAREN,
  [15477] = 1,
    ACTIONS(1996), 1,
      anon_sym_RBRACK,
  [15481] = 1,
    ACTIONS(1998), 1,
      anon_sym_RPAREN,
  [15485] = 1,
    ACTIONS(2000), 1,
      sym_object_name,
  [15489] = 1,
    ACTIONS(2002), 1,
      sym_object_name,
  [15493] = 1,
    ACTIONS(2004), 1,
      sym_decimal_literal,
  [15497] = 1,
    ACTIONS(2006), 1,
      sym_object_name,
  [15501] = 1,
    ACTIONS(2008), 1,
      sym_object_name,
  [15505] = 1,
    ACTIONS(2010), 1,
      aux_sym_insert_statement_token3,
  [15509] = 1,
    ACTIONS(2012), 1,
      sym_object_name,
  [15513] = 1,
    ACTIONS(2014), 1,
      aux_sym_delete_statement_token3,
  [15517] = 1,
    ACTIONS(2016), 1,
      aux_sym_drop_materialized_view_token2,
  [15521] = 1,
    ACTIONS(2018), 1,
      sym_object_name,
  [15525] = 1,
    ACTIONS(2020), 1,
      sym_object_name,
  [15529] = 1,
    ACTIONS(2022), 1,
      sym_object_name,
  [15533] = 1,
    ACTIONS(2024), 1,
      sym_object_name,
  [15537] = 1,
    ACTIONS(2026), 1,
      sym_object_name,
  [15541] = 1,
    ACTIONS(2028), 1,
      sym_object_name,
  [15545] = 1,
    ACTIONS(2030), 1,
      sym_object_name,
  [15549] = 1,
    ACTIONS(2032), 1,
      aux_sym_update_token2,
  [15553] = 1,
    ACTIONS(2034), 1,
      sym_object_name,
  [15557] = 1,
    ACTIONS(2036), 1,
      sym_object_name,
  [15561] = 1,
    ACTIONS(2038), 1,
      sym_object_name,
  [15565] = 1,
    ACTIONS(2040), 1,
      sym_object_name,
  [15569] = 1,
    ACTIONS(2042), 1,
      aux_sym_create_index_token3,
  [15573] = 1,
    ACTIONS(2044), 1,
      sym_object_name,
  [15577] = 1,
    ACTIONS(2046), 1,
      aux_sym_create_index_token3,
  [15581] = 1,
    ACTIONS(2048), 1,
      sym_object_name,
  [15585] = 1,
    ACTIONS(2050), 1,
      sym_object_name,
  [15589] = 1,
    ACTIONS(2052), 1,
      aux_sym_delete_statement_token3,
  [15593] = 1,
    ACTIONS(2054), 1,
      anon_sym_RPAREN,
  [15597] = 1,
    ACTIONS(2056), 1,
      sym_object_name,
  [15601] = 1,
    ACTIONS(2058), 1,
      anon_sym_LPAREN,
  [15605] = 1,
    ACTIONS(2060), 1,
      aux_sym_delete_statement_token3,
  [15609] = 1,
    ACTIONS(2062), 1,
      sym_object_name,
  [15613] = 1,
    ACTIONS(2064), 1,
      anon_sym_RPAREN,
  [15617] = 1,
    ACTIONS(2066), 1,
      anon_sym_RPAREN,
  [15621] = 1,
    ACTIONS(2068), 1,
      aux_sym_delete_statement_token3,
  [15625] = 1,
    ACTIONS(2070), 1,
      anon_sym_LPAREN,
  [15629] = 1,
    ACTIONS(2072), 1,
      anon_sym_RPAREN,
  [15633] = 1,
    ACTIONS(2074), 1,
      aux_sym_create_materialized_view_token2,
  [15637] = 1,
    ACTIONS(2076), 1,
      sym_object_name,
  [15641] = 1,
    ACTIONS(2078), 1,
      aux_sym_insert_statement_token3,
  [15645] = 1,
    ACTIONS(2080), 1,
      aux_sym_create_keyspace_token1,
  [15649] = 1,
    ACTIONS(2082), 1,
      sym_object_name,
  [15653] = 1,
    ACTIONS(2084), 1,
      aux_sym_using_timestamp_spec_token1,
  [15657] = 1,
    ACTIONS(2086), 1,
      aux_sym_create_index_token3,
  [15661] = 1,
    ACTIONS(2088), 1,
      anon_sym_RBRACE,
  [15665] = 1,
    ACTIONS(2090), 1,
      aux_sym_select_element_token1,
  [15669] = 1,
    ACTIONS(2092), 1,
      sym_object_name,
  [15673] = 1,
    ACTIONS(2094), 1,
      aux_sym_create_function_token1,
  [15677] = 1,
    ACTIONS(2096), 1,
      sym_object_name,
  [15681] = 1,
    ACTIONS(2098), 1,
      aux_sym_create_function_token2,
  [15685] = 1,
    ACTIONS(2100), 1,
      aux_sym_insert_statement_token3,
  [15689] = 1,
    ACTIONS(2102), 1,
      aux_sym_create_function_token1,
  [15693] = 1,
    ACTIONS(2104), 1,
      aux_sym_create_function_token1,
  [15697] = 1,
    ACTIONS(2106), 1,
      aux_sym_select_element_token1,
  [15701] = 1,
    ACTIONS(2108), 1,
      sym_object_name,
  [15705] = 1,
    ACTIONS(2110), 1,
      aux_sym_create_function_token2,
  [15709] = 1,
    ACTIONS(2112), 1,
      anon_sym_RPAREN,
  [15713] = 1,
    ACTIONS(2114), 1,
      aux_sym_constant_token1,
  [15717] = 1,
    ACTIONS(2116), 1,
      aux_sym_create_function_token1,
  [15721] = 1,
    ACTIONS(2118), 1,
      anon_sym_LPAREN,
  [15725] = 1,
    ACTIONS(2120), 1,
      anon_sym_RPAREN,
  [15729] = 1,
    ACTIONS(2122), 1,
      sym_object_name,
  [15733] = 1,
    ACTIONS(2124), 1,
      aux_sym_create_aggregate_token4,
  [15737] = 1,
    ACTIONS(2126), 1,
      aux_sym_create_aggregate_token5,
  [15741] = 1,
    ACTIONS(2128), 1,
      aux_sym_select_statement_token1,
  [15745] = 1,
    ACTIONS(2130), 1,
      aux_sym_from_spec_token1,
  [15749] = 1,
    ACTIONS(2132), 1,
      sym_object_name,
  [15753] = 1,
    ACTIONS(2134), 1,
      sym_object_name,
  [15757] = 1,
    ACTIONS(2136), 1,
      aux_sym_create_index_token3,
  [15761] = 1,
    ACTIONS(2138), 1,
      aux_sym_create_materialized_view_token1,
  [15765] = 1,
    ACTIONS(2140), 1,
      aux_sym_delete_statement_token3,
  [15769] = 1,
    ACTIONS(2142), 1,
      sym_object_name,
  [15773] = 1,
    ACTIONS(2144), 1,
      sym_boolean_literal,
  [15777] = 1,
    ACTIONS(2144), 1,
      sym__string_literal,
  [15781] = 1,
    ACTIONS(2146), 1,
      anon_sym_LPAREN,
  [15785] = 1,
    ACTIONS(2148), 1,
      sym_object_name,
  [15789] = 1,
    ACTIONS(2150), 1,
      sym_object_name,
  [15793] = 1,
    ACTIONS(2152), 1,
      aux_sym_create_function_token1,
  [15797] = 1,
    ACTIONS(2154), 1,
      aux_sym_create_function_token1,
  [15801] = 1,
    ACTIONS(2156), 1,
      aux_sym_create_index_token3,
  [15805] = 1,
    ACTIONS(2158), 1,
      aux_sym_create_function_token2,
  [15809] = 1,
    ACTIONS(2160), 1,
      sym_object_name,
  [15813] = 1,
    ACTIONS(2162), 1,
      aux_sym_create_function_token1,
  [15817] = 1,
    ACTIONS(2164), 1,
      anon_sym_LPAREN,
  [15821] = 1,
    ACTIONS(2166), 1,
      anon_sym_RPAREN,
  [15825] = 1,
    ACTIONS(2168), 1,
      aux_sym_create_aggregate_token3,
  [15829] = 1,
    ACTIONS(2170), 1,
      aux_sym_create_aggregate_token4,
  [15833] = 1,
    ACTIONS(2172), 1,
      sym_object_name,
  [15837] = 1,
    ACTIONS(2174), 1,
      aux_sym_constant_token1,
  [15841] = 1,
    ACTIONS(2176), 1,
      aux_sym_create_aggregate_token3,
  [15845] = 1,
    ACTIONS(2178), 1,
      aux_sym_insert_statement_token3,
  [15849] = 1,
    ACTIONS(2180), 1,
      aux_sym_delete_statement_token3,
  [15853] = 1,
    ACTIONS(2182), 1,
      aux_sym_drop_materialized_view_token2,
  [15857] = 1,
    ACTIONS(2184), 1,
      anon_sym_LBRACE,
  [15861] = 1,
    ACTIONS(2186), 1,
      aux_sym_create_materialized_view_token2,
  [15865] = 1,
    ACTIONS(2188), 1,
      anon_sym_RPAREN,
  [15869] = 1,
    ACTIONS(2190), 1,
      anon_sym_RPAREN,
  [15873] = 1,
    ACTIONS(2192), 1,
      anon_sym_RPAREN,
  [15877] = 1,
    ACTIONS(2194), 1,
      aux_sym_create_function_token1,
  [15881] = 1,
    ACTIONS(2196), 1,
      anon_sym_RPAREN,
  [15885] = 1,
    ACTIONS(2198), 1,
      anon_sym_LPAREN,
  [15889] = 1,
    ACTIONS(2200), 1,
      anon_sym_COLON,
  [15893] = 1,
    ACTIONS(2202), 1,
      aux_sym_delete_statement_token3,
  [15897] = 1,
    ACTIONS(2204), 1,
      anon_sym_LPAREN,
  [15901] = 1,
    ACTIONS(2206), 1,
      sym_object_name,
  [15905] = 1,
    ACTIONS(2208), 1,
      sym_object_name,
  [15909] = 1,
    ACTIONS(2210), 1,
      anon_sym_LPAREN,
  [15913] = 1,
    ACTIONS(2212), 1,
      anon_sym_RPAREN,
  [15917] = 1,
    ACTIONS(2214), 1,
      aux_sym_create_function_token1,
  [15921] = 1,
    ACTIONS(2216), 1,
      anon_sym_RPAREN,
  [15925] = 1,
    ACTIONS(2218), 1,
      sym_object_name,
  [15929] = 1,
    ACTIONS(2220), 1,
      aux_sym_create_index_token3,
  [15933] = 1,
    ACTIONS(2222), 1,
      anon_sym_RPAREN,
  [15937] = 1,
    ACTIONS(2224), 1,
      anon_sym_RBRACE,
  [15941] = 1,
    ACTIONS(2226), 1,
      anon_sym_EQ,
  [15945] = 1,
    ACTIONS(2228), 1,
      sym_object_name,
  [15949] = 1,
    ACTIONS(2230), 1,
      aux_sym_create_function_token1,
  [15953] = 1,
    ACTIONS(2232), 1,
      sym_object_name,
  [15957] = 1,
    ACTIONS(2234), 1,
      sym_object_name,
  [15961] = 1,
    ACTIONS(2236), 1,
      aux_sym_create_function_token2,
  [15965] = 1,
    ACTIONS(2238), 1,
      aux_sym_select_statement_token1,
  [15969] = 1,
    ACTIONS(2240), 1,
      aux_sym_create_function_token1,
  [15973] = 1,
    ACTIONS(2242), 1,
      sym_object_name,
  [15977] = 1,
    ACTIONS(2244), 1,
      aux_sym_create_function_token2,
  [15981] = 1,
    ACTIONS(2246), 1,
      aux_sym_delete_statement_token3,
  [15985] = 1,
    ACTIONS(2248), 1,
      sym_code_block,
  [15989] = 1,
    ACTIONS(2250), 1,
      aux_sym_select_element_token1,
  [15993] = 1,
    ACTIONS(2252), 1,
      sym_object_name,
  [15997] = 1,
    ACTIONS(2254), 1,
      aux_sym_from_spec_token1,
  [16001] = 1,
    ACTIONS(2256), 1,
      aux_sym_create_aggregate_token3,
  [16005] = 1,
    ACTIONS(2258), 1,
      aux_sym_create_aggregate_token4,
  [16009] = 1,
    ACTIONS(2260), 1,
      aux_sym_insert_statement_token3,
  [16013] = 1,
    ACTIONS(2262), 1,
      sym_object_name,
  [16017] = 1,
    ACTIONS(2264), 1,
      aux_sym_create_materialized_view_token2,
  [16021] = 1,
    ACTIONS(2266), 1,
      aux_sym_create_index_token3,
  [16025] = 1,
    ACTIONS(2268), 1,
      aux_sym_insert_statement_token3,
  [16029] = 1,
    ACTIONS(2270), 1,
      anon_sym_LPAREN,
  [16033] = 1,
    ACTIONS(2272), 1,
      aux_sym_column_not_null_token1,
  [16037] = 1,
    ACTIONS(2274), 1,
      sym_object_name,
  [16041] = 1,
    ACTIONS(2276), 1,
      anon_sym_RPAREN,
  [16045] = 1,
    ACTIONS(2278), 1,
      aux_sym_relation_contains_key_token2,
  [16049] = 1,
    ACTIONS(2280), 1,
      sym_object_name,
  [16053] = 1,
    ACTIONS(2282), 1,
      aux_sym_select_statement_token1,
  [16057] = 1,
    ACTIONS(2284), 1,
      sym_object_name,
  [16061] = 1,
    ACTIONS(2286), 1,
      aux_sym_create_function_token1,
  [16065] = 1,
    ACTIONS(2288), 1,
      sym_object_name,
  [16069] = 1,
    ACTIONS(2290), 1,
      anon_sym_LPAREN,
  [16073] = 1,
    ACTIONS(2292), 1,
      aux_sym_create_aggregate_token2,
  [16077] = 1,
    ACTIONS(2294), 1,
      aux_sym_create_function_token1,
  [16081] = 1,
    ACTIONS(2296), 1,
      sym_object_name,
  [16085] = 1,
    ACTIONS(2298), 1,
      sym_object_name,
  [16089] = 1,
    ACTIONS(2300), 1,
      aux_sym_create_function_token2,
  [16093] = 1,
    ACTIONS(2302), 1,
      aux_sym_insert_statement_token3,
  [16097] = 1,
    ACTIONS(2304), 1,
      aux_sym_create_aggregate_token4,
  [16101] = 1,
    ACTIONS(2306), 1,
      aux_sym_create_aggregate_token3,
  [16105] = 1,
    ACTIONS(2308), 1,
      sym_object_name,
  [16109] = 1,
    ACTIONS(2310), 1,
      sym_object_name,
  [16113] = 1,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
  [16117] = 1,
    ACTIONS(2312), 1,
      aux_sym_delete_statement_token3,
  [16121] = 1,
    ACTIONS(2314), 1,
      sym_object_name,
  [16125] = 1,
    ACTIONS(2316), 1,
      aux_sym_drop_materialized_view_token2,
  [16129] = 1,
    ACTIONS(2318), 1,
      sym_object_name,
  [16133] = 1,
    ACTIONS(2320), 1,
      sym_object_name,
  [16137] = 1,
    ACTIONS(2322), 1,
      aux_sym_create_aggregate_token3,
  [16141] = 1,
    ACTIONS(2324), 1,
      anon_sym_RPAREN,
  [16145] = 1,
    ACTIONS(2326), 1,
      aux_sym_delete_statement_token3,
  [16149] = 1,
    ACTIONS(2328), 1,
      anon_sym_LPAREN,
  [16153] = 1,
    ACTIONS(2330), 1,
      aux_sym_delete_statement_token3,
  [16157] = 1,
    ACTIONS(2332), 1,
      aux_sym_select_statement_token5,
  [16161] = 1,
    ACTIONS(2334), 1,
      anon_sym_COMMA,
  [16165] = 1,
    ACTIONS(2336), 1,
      sym_object_name,
  [16169] = 1,
    ACTIONS(2338), 1,
      anon_sym_RPAREN,
  [16173] = 1,
    ACTIONS(2340), 1,
      anon_sym_RPAREN,
  [16177] = 1,
    ACTIONS(2342), 1,
      aux_sym_create_keyspace_token1,
  [16181] = 1,
    ACTIONS(2344), 1,
      anon_sym_COLON,
  [16185] = 1,
    ACTIONS(2346), 1,
      sym_boolean_literal,
  [16189] = 1,
    ACTIONS(2348), 1,
      aux_sym_create_function_token1,
  [16193] = 1,
    ACTIONS(2350), 1,
      aux_sym_create_function_token1,
  [16197] = 1,
    ACTIONS(2352), 1,
      sym_object_name,
  [16201] = 1,
    ACTIONS(2354), 1,
      sym_object_name,
  [16205] = 1,
    ACTIONS(2356), 1,
      aux_sym_create_function_token2,
  [16209] = 1,
    ACTIONS(2358), 1,
      aux_sym_insert_statement_token2,
  [16213] = 1,
    ACTIONS(2360), 1,
      aux_sym_select_element_token1,
  [16217] = 1,
    ACTIONS(2362), 1,
      sym_object_name,
  [16221] = 1,
    ACTIONS(2364), 1,
      aux_sym_create_function_token2,
  [16225] = 1,
    ACTIONS(2366), 1,
      aux_sym_create_function_token2,
  [16229] = 1,
    ACTIONS(2368), 1,
      sym_code_block,
  [16233] = 1,
    ACTIONS(2370), 1,
      aux_sym_select_element_token1,
  [16237] = 1,
    ACTIONS(2372), 1,
      sym_object_name,
  [16241] = 1,
    ACTIONS(2374), 1,
      sym_object_name,
  [16245] = 1,
    ACTIONS(2376), 1,
      aux_sym_create_aggregate_token5,
  [16249] = 1,
    ACTIONS(2378), 1,
      aux_sym_create_aggregate_token6,
  [16253] = 1,
    ACTIONS(2380), 1,
      aux_sym_from_spec_token1,
  [16257] = 1,
    ACTIONS(2382), 1,
      aux_sym_delete_statement_token3,
  [16261] = 1,
    ACTIONS(2384), 1,
      sym_object_name,
  [16265] = 1,
    ACTIONS(2386), 1,
      aux_sym_create_materialized_view_token1,
  [16269] = 1,
    ACTIONS(2388), 1,
      aux_sym_create_materialized_view_token1,
  [16273] = 1,
    ACTIONS(2390), 1,
      aux_sym_insert_statement_token3,
  [16277] = 1,
    ACTIONS(2392), 1,
      sym_object_name,
  [16281] = 1,
    ACTIONS(2394), 1,
      aux_sym_return_mode_token2,
  [16285] = 1,
    ACTIONS(2396), 1,
      aux_sym_grant_token2,
  [16289] = 1,
    ACTIONS(2398), 1,
      anon_sym_LPAREN,
  [16293] = 1,
    ACTIONS(2400), 1,
      aux_sym_drop_type_token1,
  [16297] = 1,
    ACTIONS(2402), 1,
      sym_object_name,
  [16301] = 1,
    ACTIONS(2404), 1,
      anon_sym_EQ,
  [16305] = 1,
    ACTIONS(2406), 1,
      aux_sym_grant_token2,
  [16309] = 1,
    ACTIONS(2408), 1,
      aux_sym_constant_token1,
  [16313] = 1,
    ACTIONS(2410), 1,
      aux_sym_create_function_token1,
  [16317] = 1,
    ACTIONS(2412), 1,
      aux_sym_delete_statement_token3,
  [16321] = 1,
    ACTIONS(2414), 1,
      aux_sym_relation_contains_key_token2,
  [16325] = 1,
    ACTIONS(2416), 1,
      sym_object_name,
  [16329] = 1,
    ACTIONS(2418), 1,
      aux_sym_create_function_token1,
  [16333] = 1,
    ACTIONS(2420), 1,
      aux_sym_select_element_token1,
  [16337] = 1,
    ACTIONS(2422), 1,
      sym_object_name,
  [16341] = 1,
    ACTIONS(2424), 1,
      aux_sym_create_function_token2,
  [16345] = 1,
    ACTIONS(2426), 1,
      anon_sym_RPAREN,
  [16349] = 1,
    ACTIONS(2428), 1,
      sym_object_name,
  [16353] = 1,
    ACTIONS(2430), 1,
      aux_sym_create_aggregate_token4,
  [16357] = 1,
    ACTIONS(2432), 1,
      aux_sym_create_aggregate_token5,
  [16361] = 1,
    ACTIONS(2434), 1,
      anon_sym_EQ,
  [16365] = 1,
    ACTIONS(2436), 1,
      anon_sym_EQ,
  [16369] = 1,
    ACTIONS(2438), 1,
      sym_object_name,
  [16373] = 1,
    ACTIONS(2440), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [16377] = 1,
    ACTIONS(2442), 1,
      anon_sym_RPAREN,
  [16381] = 1,
    ACTIONS(2444), 1,
      sym_object_name,
  [16385] = 1,
    ACTIONS(2446), 1,
      sym_object_name,
  [16389] = 1,
    ACTIONS(2448), 1,
      sym_object_name,
  [16393] = 1,
    ACTIONS(2450), 1,
      aux_sym_insert_statement_token3,
  [16397] = 1,
    ACTIONS(2452), 1,
      sym_object_name,
  [16401] = 1,
    ACTIONS(2454), 1,
      aux_sym_create_function_token2,
  [16405] = 1,
    ACTIONS(2456), 1,
      sym_object_name,
  [16409] = 1,
    ACTIONS(2458), 1,
      aux_sym_create_function_token1,
  [16413] = 1,
    ACTIONS(2460), 1,
      aux_sym_select_element_token1,
  [16417] = 1,
    ACTIONS(2462), 1,
      sym_object_name,
  [16421] = 1,
    ACTIONS(2464), 1,
      aux_sym_create_function_token2,
  [16425] = 1,
    ACTIONS(2466), 1,
      sym_code_block,
  [16429] = 1,
    ACTIONS(2468), 1,
      aux_sym_select_element_token1,
  [16433] = 1,
    ACTIONS(2470), 1,
      sym_object_name,
  [16437] = 1,
    ACTIONS(2472), 1,
      sym_object_name,
  [16441] = 1,
    ACTIONS(2474), 1,
      sym_code_block,
  [16445] = 1,
    ACTIONS(2476), 1,
      aux_sym_create_aggregate_token4,
  [16449] = 1,
    ACTIONS(2478), 1,
      aux_sym_create_aggregate_token5,
  [16453] = 1,
    ACTIONS(2480), 1,
      sym_object_name,
  [16457] = 1,
    ACTIONS(2482), 1,
      aux_sym_insert_statement_token3,
  [16461] = 1,
    ACTIONS(2484), 1,
      sym_object_name,
  [16465] = 1,
    ACTIONS(2486), 1,
      sym_object_name,
  [16469] = 1,
    ACTIONS(2488), 1,
      aux_sym_create_materialized_view_token1,
  [16473] = 1,
    ACTIONS(2490), 1,
      anon_sym_LPAREN,
  [16477] = 1,
    ACTIONS(2492), 1,
      aux_sym_relation_contains_key_token2,
  [16481] = 1,
    ACTIONS(2494), 1,
      aux_sym_relation_contains_key_token2,
  [16485] = 1,
    ACTIONS(2496), 1,
      aux_sym_constant_token1,
  [16489] = 1,
    ACTIONS(2498), 1,
      aux_sym_create_materialized_view_token1,
  [16493] = 1,
    ACTIONS(2500), 1,
      anon_sym_LPAREN,
  [16497] = 1,
    ACTIONS(2502), 1,
      anon_sym_RBRACE,
  [16501] = 1,
    ACTIONS(2504), 1,
      sym_object_name,
  [16505] = 1,
    ACTIONS(2506), 1,
      aux_sym_delete_statement_token3,
  [16509] = 1,
    ACTIONS(2508), 1,
      aux_sym_create_function_token1,
  [16513] = 1,
    ACTIONS(2510), 1,
      sym_object_name,
  [16517] = 1,
    ACTIONS(2512), 1,
      anon_sym_COLON,
  [16521] = 1,
    ACTIONS(2514), 1,
      aux_sym_create_function_token2,
  [16525] = 1,
    ACTIONS(2516), 1,
      anon_sym_GT,
  [16529] = 1,
    ACTIONS(2518), 1,
      aux_sym_create_function_token1,
  [16533] = 1,
    ACTIONS(2520), 1,
      sym_object_name,
  [16537] = 1,
    ACTIONS(2522), 1,
      aux_sym_create_function_token2,
  [16541] = 1,
    ACTIONS(2524), 1,
      aux_sym_begin_batch_token4,
  [16545] = 1,
    ACTIONS(2526), 1,
      sym_code_block,
  [16549] = 1,
    ACTIONS(2528), 1,
      aux_sym_select_element_token1,
  [16553] = 1,
    ACTIONS(2530), 1,
      sym_object_name,
  [16557] = 1,
    ACTIONS(2532), 1,
      aux_sym_create_aggregate_token3,
  [16561] = 1,
    ACTIONS(2534), 1,
      aux_sym_create_aggregate_token4,
  [16565] = 1,
    ACTIONS(2536), 1,
      sym_decimal_literal,
  [16569] = 1,
    ACTIONS(2538), 1,
      sym_object_name,
  [16573] = 1,
    ACTIONS(2540), 1,
      anon_sym_RPAREN,
  [16577] = 1,
    ACTIONS(2542), 1,
      anon_sym_RPAREN,
  [16581] = 1,
    ACTIONS(2544), 1,
      anon_sym_RPAREN,
  [16585] = 1,
    ACTIONS(2546), 1,
      sym_object_name,
  [16589] = 1,
    ACTIONS(2548), 1,
      aux_sym_create_function_token2,
  [16593] = 1,
    ACTIONS(2550), 1,
      anon_sym_RPAREN,
  [16597] = 1,
    ACTIONS(2552), 1,
      sym_code_block,
  [16601] = 1,
    ACTIONS(2554), 1,
      aux_sym_select_element_token1,
  [16605] = 1,
    ACTIONS(2556), 1,
      sym_object_name,
  [16609] = 1,
    ACTIONS(2558), 1,
      aux_sym_delete_statement_token3,
  [16613] = 1,
    ACTIONS(2560), 1,
      sym_code_block,
  [16617] = 1,
    ACTIONS(2562), 1,
      aux_sym_select_element_token1,
  [16621] = 1,
    ACTIONS(2564), 1,
      aux_sym_update_token2,
  [16625] = 1,
    ACTIONS(2566), 1,
      anon_sym_LPAREN,
  [16629] = 1,
    ACTIONS(2568), 1,
      sym_object_name,
  [16633] = 1,
    ACTIONS(2570), 1,
      aux_sym_create_aggregate_token6,
  [16637] = 1,
    ACTIONS(2572), 1,
      sym_object_name,
  [16641] = 1,
    ACTIONS(2574), 1,
      sym_object_name,
  [16645] = 1,
    ACTIONS(2576), 1,
      aux_sym_delete_statement_token3,
  [16649] = 1,
    ACTIONS(2578), 1,
      aux_sym_create_index_token3,
  [16653] = 1,
    ACTIONS(2580), 1,
      anon_sym_RPAREN,
  [16657] = 1,
    ACTIONS(2582), 1,
      aux_sym_relation_contains_key_token2,
  [16661] = 1,
    ACTIONS(2584), 1,
      aux_sym_create_materialized_view_token1,
  [16665] = 1,
    ACTIONS(2586), 1,
      anon_sym_LPAREN,
  [16669] = 1,
    ACTIONS(2588), 1,
      anon_sym_LPAREN,
  [16673] = 1,
    ACTIONS(2590), 1,
      anon_sym_LPAREN,
  [16677] = 1,
    ACTIONS(2592), 1,
      anon_sym_RPAREN,
  [16681] = 1,
    ACTIONS(2594), 1,
      sym_object_name,
  [16685] = 1,
    ACTIONS(2596), 1,
      aux_sym_create_function_token1,
  [16689] = 1,
    ACTIONS(2598), 1,
      sym_object_name,
  [16693] = 1,
    ACTIONS(2600), 1,
      sym_object_name,
  [16697] = 1,
    ACTIONS(2602), 1,
      aux_sym_create_function_token2,
  [16701] = 1,
    ACTIONS(2604), 1,
      sym_object_name,
  [16705] = 1,
    ACTIONS(2606), 1,
      aux_sym_select_element_token1,
  [16709] = 1,
    ACTIONS(2608), 1,
      sym_object_name,
  [16713] = 1,
    ACTIONS(2610), 1,
      aux_sym_create_function_token2,
  [16717] = 1,
    ACTIONS(2612), 1,
      sym_object_name,
  [16721] = 1,
    ACTIONS(2614), 1,
      sym_code_block,
  [16725] = 1,
    ACTIONS(2616), 1,
      aux_sym_select_element_token1,
  [16729] = 1,
    ACTIONS(2618), 1,
      sym_object_name,
  [16733] = 1,
    ACTIONS(2620), 1,
      anon_sym_RPAREN,
  [16737] = 1,
    ACTIONS(2622), 1,
      aux_sym_create_aggregate_token5,
  [16741] = 1,
    ACTIONS(2624), 1,
      aux_sym_create_aggregate_token6,
  [16745] = 1,
    ACTIONS(2626), 1,
      aux_sym_select_element_token1,
  [16749] = 1,
    ACTIONS(2628), 1,
      sym_object_name,
  [16753] = 1,
    ACTIONS(2630), 1,
      aux_sym_create_function_token2,
  [16757] = 1,
    ACTIONS(2632), 1,
      sym_object_name,
  [16761] = 1,
    ACTIONS(2634), 1,
      sym_code_block,
  [16765] = 1,
    ACTIONS(2636), 1,
      aux_sym_select_element_token1,
  [16769] = 1,
    ACTIONS(2638), 1,
      anon_sym_RPAREN,
  [16773] = 1,
    ACTIONS(2640), 1,
      sym_code_block,
  [16777] = 1,
    ACTIONS(2642), 1,
      aux_sym_create_aggregate_token5,
  [16781] = 1,
    ACTIONS(2644), 1,
      aux_sym_create_aggregate_token6,
  [16785] = 1,
    ACTIONS(2646), 1,
      anon_sym_LPAREN,
  [16789] = 1,
    ACTIONS(2648), 1,
      sym_object_name,
  [16793] = 1,
    ACTIONS(2650), 1,
      anon_sym_COLON,
  [16797] = 1,
    ACTIONS(2652), 1,
      aux_sym_insert_statement_token3,
  [16801] = 1,
    ACTIONS(2654), 1,
      aux_sym_insert_statement_token3,
  [16805] = 1,
    ACTIONS(2656), 1,
      aux_sym_order_spec_token1,
  [16809] = 1,
    ACTIONS(2658), 1,
      sym_object_name,
  [16813] = 1,
    ACTIONS(2660), 1,
      aux_sym_create_materialized_view_token1,
  [16817] = 1,
    ACTIONS(2662), 1,
      aux_sym_create_materialized_view_token1,
  [16821] = 1,
    ACTIONS(2664), 1,
      anon_sym_LPAREN,
  [16825] = 1,
    ACTIONS(2666), 1,
      aux_sym_relation_contains_key_token2,
  [16829] = 1,
    ACTIONS(2668), 1,
      anon_sym_RPAREN,
  [16833] = 1,
    ACTIONS(2670), 1,
      anon_sym_LPAREN,
  [16837] = 1,
    ACTIONS(2672), 1,
      aux_sym_insert_statement_token3,
  [16841] = 1,
    ACTIONS(2674), 1,
      aux_sym_create_function_token2,
  [16845] = 1,
    ACTIONS(2676), 1,
      sym_object_name,
  [16849] = 1,
    ACTIONS(2678), 1,
      aux_sym_create_function_token1,
  [16853] = 1,
    ACTIONS(2680), 1,
      aux_sym_select_element_token1,
  [16857] = 1,
    ACTIONS(2682), 1,
      sym_object_name,
  [16861] = 1,
    ACTIONS(2684), 1,
      aux_sym_create_function_token2,
  [16865] = 1,
    ACTIONS(2686), 1,
      sym_code_block,
  [16869] = 1,
    ACTIONS(2688), 1,
      aux_sym_select_element_token1,
  [16873] = 1,
    ACTIONS(2690), 1,
      sym_object_name,
  [16877] = 1,
    ACTIONS(2692), 1,
      sym__string_literal,
  [16881] = 1,
    ACTIONS(2694), 1,
      sym_code_block,
  [16885] = 1,
    ACTIONS(2696), 1,
      aux_sym_create_aggregate_token4,
  [16889] = 1,
    ACTIONS(2698), 1,
      aux_sym_create_aggregate_token5,
  [16893] = 1,
    ACTIONS(2700), 1,
      sym_object_name,
  [16897] = 1,
    ACTIONS(2702), 1,
      sym_object_name,
  [16901] = 1,
    ACTIONS(2704), 1,
      sym_code_block,
  [16905] = 1,
    ACTIONS(2706), 1,
      aux_sym_select_element_token1,
  [16909] = 1,
    ACTIONS(2708), 1,
      sym_object_name,
  [16913] = 1,
    ACTIONS(2710), 1,
      aux_sym_delete_statement_token3,
  [16917] = 1,
    ACTIONS(2712), 1,
      sym_code_block,
  [16921] = 1,
    ACTIONS(2714), 1,
      sym_object_name,
  [16925] = 1,
    ACTIONS(2716), 1,
      sym_object_name,
  [16929] = 1,
    ACTIONS(2718), 1,
      sym_object_name,
  [16933] = 1,
    ACTIONS(2720), 1,
      aux_sym_delete_statement_token3,
  [16937] = 1,
    ACTIONS(2722), 1,
      aux_sym_using_timestamp_spec_token1,
  [16941] = 1,
    ACTIONS(2724), 1,
      aux_sym_insert_statement_token3,
  [16945] = 1,
    ACTIONS(2726), 1,
      aux_sym_select_statement_token1,
  [16949] = 1,
    ACTIONS(2728), 1,
      sym_object_name,
  [16953] = 1,
    ACTIONS(2730), 1,
      aux_sym_delete_statement_token3,
  [16957] = 1,
    ACTIONS(2732), 1,
      sym_object_name,
  [16961] = 1,
    ACTIONS(2734), 1,
      aux_sym_using_timestamp_spec_token1,
  [16965] = 1,
    ACTIONS(2736), 1,
      anon_sym_RPAREN,
  [16969] = 1,
    ACTIONS(2738), 1,
      sym_object_name,
  [16973] = 1,
    ACTIONS(2740), 1,
      anon_sym_LPAREN,
  [16977] = 1,
    ACTIONS(2742), 1,
      aux_sym_relation_contains_key_token2,
  [16981] = 1,
    ACTIONS(2744), 1,
      aux_sym_relation_contains_key_token2,
  [16985] = 1,
    ACTIONS(2746), 1,
      aux_sym_insert_statement_token3,
  [16989] = 1,
    ACTIONS(2748), 1,
      anon_sym_LPAREN,
  [16993] = 1,
    ACTIONS(2750), 1,
      anon_sym_RPAREN,
  [16997] = 1,
    ACTIONS(2752), 1,
      anon_sym_RPAREN,
  [17001] = 1,
    ACTIONS(2754), 1,
      anon_sym_LPAREN,
  [17005] = 1,
    ACTIONS(2756), 1,
      sym_object_name,
  [17009] = 1,
    ACTIONS(2758), 1,
      aux_sym_create_function_token2,
  [17013] = 1,
    ACTIONS(2760), 1,
      sym_object_name,
  [17017] = 1,
    ACTIONS(2762), 1,
      sym_code_block,
  [17021] = 1,
    ACTIONS(2764), 1,
      aux_sym_select_element_token1,
  [17025] = 1,
    ACTIONS(2766), 1,
      sym_object_name,
  [17029] = 1,
    ACTIONS(2768), 1,
      sym_object_name,
  [17033] = 1,
    ACTIONS(2770), 1,
      sym_code_block,
  [17037] = 1,
    ACTIONS(2772), 1,
      aux_sym_select_element_token1,
  [17041] = 1,
    ACTIONS(2774), 1,
      anon_sym_EQ,
  [17045] = 1,
    ACTIONS(2776), 1,
      ts_builtin_sym_end,
  [17049] = 1,
    ACTIONS(2778), 1,
      sym_object_name,
  [17053] = 1,
    ACTIONS(2780), 1,
      aux_sym_create_aggregate_token6,
  [17057] = 1,
    ACTIONS(2782), 1,
      anon_sym_EQ,
  [17061] = 1,
    ACTIONS(2784), 1,
      anon_sym_EQ,
  [17065] = 1,
    ACTIONS(2786), 1,
      sym_code_block,
  [17069] = 1,
    ACTIONS(2788), 1,
      aux_sym_select_element_token1,
  [17073] = 1,
    ACTIONS(2790), 1,
      sym_object_name,
  [17077] = 1,
    ACTIONS(2792), 1,
      aux_sym_create_aggregate_token6,
  [17081] = 1,
    ACTIONS(2794), 1,
      sym_object_name,
  [17085] = 1,
    ACTIONS(2796), 1,
      aux_sym_select_statement_token5,
  [17089] = 1,
    ACTIONS(2798), 1,
      aux_sym_begin_batch_token4,
  [17093] = 1,
    ACTIONS(2800), 1,
      aux_sym_insert_statement_token3,
  [17097] = 1,
    ACTIONS(2802), 1,
      anon_sym_LPAREN,
  [17101] = 1,
    ACTIONS(2804), 1,
      sym_object_name,
  [17105] = 1,
    ACTIONS(2806), 1,
      aux_sym_delete_statement_token3,
  [17109] = 1,
    ACTIONS(2808), 1,
      anon_sym_GT,
  [17113] = 1,
    ACTIONS(2810), 1,
      sym_object_name,
  [17117] = 1,
    ACTIONS(2812), 1,
      aux_sym_create_materialized_view_token1,
  [17121] = 1,
    ACTIONS(2814), 1,
      anon_sym_LPAREN,
  [17125] = 1,
    ACTIONS(2816), 1,
      anon_sym_LPAREN,
  [17129] = 1,
    ACTIONS(2818), 1,
      anon_sym_RPAREN,
  [17133] = 1,
    ACTIONS(2820), 1,
      aux_sym_insert_statement_token3,
  [17137] = 1,
    ACTIONS(2822), 1,
      sym_object_name,
  [17141] = 1,
    ACTIONS(2824), 1,
      aux_sym_create_materialized_view_token2,
  [17145] = 1,
    ACTIONS(2826), 1,
      anon_sym_RPAREN,
  [17149] = 1,
    ACTIONS(2828), 1,
      sym_object_name,
  [17153] = 1,
    ACTIONS(2830), 1,
      sym_object_name,
  [17157] = 1,
    ACTIONS(2832), 1,
      aux_sym_select_element_token1,
  [17161] = 1,
    ACTIONS(2834), 1,
      sym_object_name,
  [17165] = 1,
    ACTIONS(2836), 1,
      aux_sym_create_function_token2,
  [17169] = 1,
    ACTIONS(2838), 1,
      anon_sym_LPAREN,
  [17173] = 1,
    ACTIONS(2840), 1,
      sym_code_block,
  [17177] = 1,
    ACTIONS(2842), 1,
      aux_sym_select_element_token1,
  [17181] = 1,
    ACTIONS(2844), 1,
      sym_object_name,
  [17185] = 1,
    ACTIONS(2846), 1,
      sym_code_block,
  [17189] = 1,
    ACTIONS(2848), 1,
      aux_sym_create_aggregate_token5,
  [17193] = 1,
    ACTIONS(2850), 1,
      aux_sym_create_aggregate_token6,
  [17197] = 1,
    ACTIONS(2852), 1,
      aux_sym_insert_statement_token3,
  [17201] = 1,
    ACTIONS(2854), 1,
      sym_object_name,
  [17205] = 1,
    ACTIONS(2856), 1,
      sym_code_block,
  [17209] = 1,
    ACTIONS(2858), 1,
      aux_sym_delete_statement_token3,
  [17213] = 1,
    ACTIONS(2860), 1,
      aux_sym_relation_contains_key_token2,
  [17217] = 1,
    ACTIONS(2862), 1,
      aux_sym_delete_statement_token3,
  [17221] = 1,
    ACTIONS(2864), 1,
      aux_sym_delete_statement_token3,
  [17225] = 1,
    ACTIONS(2866), 1,
      sym_object_name,
  [17229] = 1,
    ACTIONS(2868), 1,
      anon_sym_RPAREN,
  [17233] = 1,
    ACTIONS(2870), 1,
      anon_sym_RPAREN,
  [17237] = 1,
    ACTIONS(2872), 1,
      sym_object_name,
  [17241] = 1,
    ACTIONS(2874), 1,
      aux_sym_delete_statement_token3,
  [17245] = 1,
    ACTIONS(2876), 1,
      sym_code_block,
  [17249] = 1,
    ACTIONS(2878), 1,
      aux_sym_select_element_token1,
  [17253] = 1,
    ACTIONS(2880), 1,
      sym_object_name,
  [17257] = 1,
    ACTIONS(2882), 1,
      sym_object_name,
  [17261] = 1,
    ACTIONS(2884), 1,
      sym_code_block,
  [17265] = 1,
    ACTIONS(2886), 1,
      sym_object_name,
  [17269] = 1,
    ACTIONS(2888), 1,
      sym_object_name,
  [17273] = 1,
    ACTIONS(2890), 1,
      anon_sym_EQ,
  [17277] = 1,
    ACTIONS(2892), 1,
      sym_object_name,
  [17281] = 1,
    ACTIONS(2894), 1,
      sym_object_name,
  [17285] = 1,
    ACTIONS(2896), 1,
      anon_sym_LPAREN,
  [17289] = 1,
    ACTIONS(2898), 1,
      anon_sym_LPAREN,
  [17293] = 1,
    ACTIONS(2900), 1,
      anon_sym_RPAREN,
  [17297] = 1,
    ACTIONS(2902), 1,
      anon_sym_RPAREN,
  [17301] = 1,
    ACTIONS(2904), 1,
      sym_object_name,
  [17305] = 1,
    ACTIONS(2906), 1,
      sym_object_name,
  [17309] = 1,
    ACTIONS(2908), 1,
      sym_object_name,
  [17313] = 1,
    ACTIONS(2910), 1,
      aux_sym_delete_statement_token3,
  [17317] = 1,
    ACTIONS(2912), 1,
      sym_object_name,
  [17321] = 1,
    ACTIONS(2914), 1,
      sym_decimal_literal,
  [17325] = 1,
    ACTIONS(2916), 1,
      sym_code_block,
  [17329] = 1,
    ACTIONS(2918), 1,
      aux_sym_select_element_token1,
  [17333] = 1,
    ACTIONS(2920), 1,
      aux_sym_insert_statement_token3,
  [17337] = 1,
    ACTIONS(2922), 1,
      aux_sym_create_aggregate_token6,
  [17341] = 1,
    ACTIONS(2924), 1,
      aux_sym_select_statement_token5,
  [17345] = 1,
    ACTIONS(2926), 1,
      aux_sym_delete_statement_token3,
  [17349] = 1,
    ACTIONS(2928), 1,
      sym_object_name,
  [17353] = 1,
    ACTIONS(2930), 1,
      aux_sym_delete_statement_token3,
  [17357] = 1,
    ACTIONS(2932), 1,
      aux_sym_update_token2,
  [17361] = 1,
    ACTIONS(2934), 1,
      anon_sym_EQ,
  [17365] = 1,
    ACTIONS(2936), 1,
      sym_object_name,
  [17369] = 1,
    ACTIONS(2938), 1,
      sym_code_block,
  [17373] = 1,
    ACTIONS(2940), 1,
      sym_object_name,
  [17377] = 1,
    ACTIONS(2942), 1,
      anon_sym_RPAREN,
  [17381] = 1,
    ACTIONS(1127), 1,
      sym_object_name,
  [17385] = 1,
    ACTIONS(2944), 1,
      sym_object_name,
  [17389] = 1,
    ACTIONS(2946), 1,
      sym_object_name,
  [17393] = 1,
    ACTIONS(2948), 1,
      sym_object_name,
  [17397] = 1,
    ACTIONS(2950), 1,
      aux_sym_create_keyspace_token1,
  [17401] = 1,
    ACTIONS(2952), 1,
      aux_sym_insert_statement_token2,
  [17405] = 1,
    ACTIONS(2954), 1,
      sym_object_name,
  [17409] = 1,
    ACTIONS(2956), 1,
      aux_sym_delete_statement_token3,
  [17413] = 1,
    ACTIONS(2958), 1,
      sym_object_name,
  [17417] = 1,
    ACTIONS(2960), 1,
      aux_sym_from_spec_token1,
  [17421] = 1,
    ACTIONS(2962), 1,
      aux_sym_grant_token2,
  [17425] = 1,
    ACTIONS(2964), 1,
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
  [SMALL_STATE(62)] = 2189,
  [SMALL_STATE(63)] = 2220,
  [SMALL_STATE(64)] = 2251,
  [SMALL_STATE(65)] = 2278,
  [SMALL_STATE(66)] = 2305,
  [SMALL_STATE(67)] = 2336,
  [SMALL_STATE(68)] = 2367,
  [SMALL_STATE(69)] = 2397,
  [SMALL_STATE(70)] = 2437,
  [SMALL_STATE(71)] = 2477,
  [SMALL_STATE(72)] = 2503,
  [SMALL_STATE(73)] = 2543,
  [SMALL_STATE(74)] = 2568,
  [SMALL_STATE(75)] = 2593,
  [SMALL_STATE(76)] = 2618,
  [SMALL_STATE(77)] = 2643,
  [SMALL_STATE(78)] = 2668,
  [SMALL_STATE(79)] = 2697,
  [SMALL_STATE(80)] = 2722,
  [SMALL_STATE(81)] = 2761,
  [SMALL_STATE(82)] = 2788,
  [SMALL_STATE(83)] = 2813,
  [SMALL_STATE(84)] = 2842,
  [SMALL_STATE(85)] = 2871,
  [SMALL_STATE(86)] = 2896,
  [SMALL_STATE(87)] = 2921,
  [SMALL_STATE(88)] = 2946,
  [SMALL_STATE(89)] = 2974,
  [SMALL_STATE(90)] = 3008,
  [SMALL_STATE(91)] = 3032,
  [SMALL_STATE(92)] = 3056,
  [SMALL_STATE(93)] = 3080,
  [SMALL_STATE(94)] = 3104,
  [SMALL_STATE(95)] = 3138,
  [SMALL_STATE(96)] = 3162,
  [SMALL_STATE(97)] = 3196,
  [SMALL_STATE(98)] = 3219,
  [SMALL_STATE(99)] = 3244,
  [SMALL_STATE(100)] = 3269,
  [SMALL_STATE(101)] = 3296,
  [SMALL_STATE(102)] = 3321,
  [SMALL_STATE(103)] = 3346,
  [SMALL_STATE(104)] = 3368,
  [SMALL_STATE(105)] = 3396,
  [SMALL_STATE(106)] = 3422,
  [SMALL_STATE(107)] = 3446,
  [SMALL_STATE(108)] = 3474,
  [SMALL_STATE(109)] = 3500,
  [SMALL_STATE(110)] = 3522,
  [SMALL_STATE(111)] = 3548,
  [SMALL_STATE(112)] = 3576,
  [SMALL_STATE(113)] = 3598,
  [SMALL_STATE(114)] = 3626,
  [SMALL_STATE(115)] = 3648,
  [SMALL_STATE(116)] = 3670,
  [SMALL_STATE(117)] = 3698,
  [SMALL_STATE(118)] = 3726,
  [SMALL_STATE(119)] = 3752,
  [SMALL_STATE(120)] = 3780,
  [SMALL_STATE(121)] = 3806,
  [SMALL_STATE(122)] = 3834,
  [SMALL_STATE(123)] = 3856,
  [SMALL_STATE(124)] = 3884,
  [SMALL_STATE(125)] = 3912,
  [SMALL_STATE(126)] = 3934,
  [SMALL_STATE(127)] = 3956,
  [SMALL_STATE(128)] = 3984,
  [SMALL_STATE(129)] = 4010,
  [SMALL_STATE(130)] = 4032,
  [SMALL_STATE(131)] = 4054,
  [SMALL_STATE(132)] = 4076,
  [SMALL_STATE(133)] = 4098,
  [SMALL_STATE(134)] = 4126,
  [SMALL_STATE(135)] = 4147,
  [SMALL_STATE(136)] = 4172,
  [SMALL_STATE(137)] = 4197,
  [SMALL_STATE(138)] = 4220,
  [SMALL_STATE(139)] = 4243,
  [SMALL_STATE(140)] = 4266,
  [SMALL_STATE(141)] = 4291,
  [SMALL_STATE(142)] = 4312,
  [SMALL_STATE(143)] = 4337,
  [SMALL_STATE(144)] = 4362,
  [SMALL_STATE(145)] = 4383,
  [SMALL_STATE(146)] = 4404,
  [SMALL_STATE(147)] = 4439,
  [SMALL_STATE(148)] = 4464,
  [SMALL_STATE(149)] = 4489,
  [SMALL_STATE(150)] = 4510,
  [SMALL_STATE(151)] = 4535,
  [SMALL_STATE(152)] = 4556,
  [SMALL_STATE(153)] = 4579,
  [SMALL_STATE(154)] = 4600,
  [SMALL_STATE(155)] = 4625,
  [SMALL_STATE(156)] = 4650,
  [SMALL_STATE(157)] = 4671,
  [SMALL_STATE(158)] = 4692,
  [SMALL_STATE(159)] = 4717,
  [SMALL_STATE(160)] = 4738,
  [SMALL_STATE(161)] = 4763,
  [SMALL_STATE(162)] = 4784,
  [SMALL_STATE(163)] = 4805,
  [SMALL_STATE(164)] = 4826,
  [SMALL_STATE(165)] = 4851,
  [SMALL_STATE(166)] = 4872,
  [SMALL_STATE(167)] = 4897,
  [SMALL_STATE(168)] = 4922,
  [SMALL_STATE(169)] = 4947,
  [SMALL_STATE(170)] = 4972,
  [SMALL_STATE(171)] = 4997,
  [SMALL_STATE(172)] = 5022,
  [SMALL_STATE(173)] = 5047,
  [SMALL_STATE(174)] = 5068,
  [SMALL_STATE(175)] = 5093,
  [SMALL_STATE(176)] = 5118,
  [SMALL_STATE(177)] = 5143,
  [SMALL_STATE(178)] = 5168,
  [SMALL_STATE(179)] = 5193,
  [SMALL_STATE(180)] = 5218,
  [SMALL_STATE(181)] = 5243,
  [SMALL_STATE(182)] = 5268,
  [SMALL_STATE(183)] = 5293,
  [SMALL_STATE(184)] = 5318,
  [SMALL_STATE(185)] = 5343,
  [SMALL_STATE(186)] = 5368,
  [SMALL_STATE(187)] = 5389,
  [SMALL_STATE(188)] = 5414,
  [SMALL_STATE(189)] = 5439,
  [SMALL_STATE(190)] = 5464,
  [SMALL_STATE(191)] = 5489,
  [SMALL_STATE(192)] = 5514,
  [SMALL_STATE(193)] = 5539,
  [SMALL_STATE(194)] = 5564,
  [SMALL_STATE(195)] = 5589,
  [SMALL_STATE(196)] = 5614,
  [SMALL_STATE(197)] = 5639,
  [SMALL_STATE(198)] = 5664,
  [SMALL_STATE(199)] = 5689,
  [SMALL_STATE(200)] = 5710,
  [SMALL_STATE(201)] = 5735,
  [SMALL_STATE(202)] = 5760,
  [SMALL_STATE(203)] = 5781,
  [SMALL_STATE(204)] = 5806,
  [SMALL_STATE(205)] = 5831,
  [SMALL_STATE(206)] = 5856,
  [SMALL_STATE(207)] = 5881,
  [SMALL_STATE(208)] = 5906,
  [SMALL_STATE(209)] = 5928,
  [SMALL_STATE(210)] = 5950,
  [SMALL_STATE(211)] = 5970,
  [SMALL_STATE(212)] = 5992,
  [SMALL_STATE(213)] = 6014,
  [SMALL_STATE(214)] = 6036,
  [SMALL_STATE(215)] = 6058,
  [SMALL_STATE(216)] = 6078,
  [SMALL_STATE(217)] = 6100,
  [SMALL_STATE(218)] = 6122,
  [SMALL_STATE(219)] = 6144,
  [SMALL_STATE(220)] = 6166,
  [SMALL_STATE(221)] = 6188,
  [SMALL_STATE(222)] = 6210,
  [SMALL_STATE(223)] = 6230,
  [SMALL_STATE(224)] = 6252,
  [SMALL_STATE(225)] = 6274,
  [SMALL_STATE(226)] = 6296,
  [SMALL_STATE(227)] = 6318,
  [SMALL_STATE(228)] = 6340,
  [SMALL_STATE(229)] = 6362,
  [SMALL_STATE(230)] = 6384,
  [SMALL_STATE(231)] = 6406,
  [SMALL_STATE(232)] = 6426,
  [SMALL_STATE(233)] = 6448,
  [SMALL_STATE(234)] = 6468,
  [SMALL_STATE(235)] = 6488,
  [SMALL_STATE(236)] = 6510,
  [SMALL_STATE(237)] = 6542,
  [SMALL_STATE(238)] = 6564,
  [SMALL_STATE(239)] = 6586,
  [SMALL_STATE(240)] = 6608,
  [SMALL_STATE(241)] = 6628,
  [SMALL_STATE(242)] = 6650,
  [SMALL_STATE(243)] = 6670,
  [SMALL_STATE(244)] = 6692,
  [SMALL_STATE(245)] = 6714,
  [SMALL_STATE(246)] = 6736,
  [SMALL_STATE(247)] = 6758,
  [SMALL_STATE(248)] = 6778,
  [SMALL_STATE(249)] = 6800,
  [SMALL_STATE(250)] = 6822,
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
  [SMALL_STATE(347)] = 8691,
  [SMALL_STATE(348)] = 8710,
  [SMALL_STATE(349)] = 8729,
  [SMALL_STATE(350)] = 8748,
  [SMALL_STATE(351)] = 8767,
  [SMALL_STATE(352)] = 8786,
  [SMALL_STATE(353)] = 8805,
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
  [SMALL_STATE(429)] = 10249,
  [SMALL_STATE(430)] = 10268,
  [SMALL_STATE(431)] = 10287,
  [SMALL_STATE(432)] = 10306,
  [SMALL_STATE(433)] = 10324,
  [SMALL_STATE(434)] = 10354,
  [SMALL_STATE(435)] = 10379,
  [SMALL_STATE(436)] = 10404,
  [SMALL_STATE(437)] = 10429,
  [SMALL_STATE(438)] = 10454,
  [SMALL_STATE(439)] = 10479,
  [SMALL_STATE(440)] = 10504,
  [SMALL_STATE(441)] = 10529,
  [SMALL_STATE(442)] = 10554,
  [SMALL_STATE(443)] = 10579,
  [SMALL_STATE(444)] = 10605,
  [SMALL_STATE(445)] = 10633,
  [SMALL_STATE(446)] = 10656,
  [SMALL_STATE(447)] = 10676,
  [SMALL_STATE(448)] = 10696,
  [SMALL_STATE(449)] = 10716,
  [SMALL_STATE(450)] = 10750,
  [SMALL_STATE(451)] = 10776,
  [SMALL_STATE(452)] = 10796,
  [SMALL_STATE(453)] = 10818,
  [SMALL_STATE(454)] = 10841,
  [SMALL_STATE(455)] = 10864,
  [SMALL_STATE(456)] = 10883,
  [SMALL_STATE(457)] = 10902,
  [SMALL_STATE(458)] = 10933,
  [SMALL_STATE(459)] = 10950,
  [SMALL_STATE(460)] = 10967,
  [SMALL_STATE(461)] = 10983,
  [SMALL_STATE(462)] = 10999,
  [SMALL_STATE(463)] = 11015,
  [SMALL_STATE(464)] = 11031,
  [SMALL_STATE(465)] = 11047,
  [SMALL_STATE(466)] = 11063,
  [SMALL_STATE(467)] = 11079,
  [SMALL_STATE(468)] = 11095,
  [SMALL_STATE(469)] = 11111,
  [SMALL_STATE(470)] = 11127,
  [SMALL_STATE(471)] = 11143,
  [SMALL_STATE(472)] = 11159,
  [SMALL_STATE(473)] = 11175,
  [SMALL_STATE(474)] = 11196,
  [SMALL_STATE(475)] = 11217,
  [SMALL_STATE(476)] = 11238,
  [SMALL_STATE(477)] = 11259,
  [SMALL_STATE(478)] = 11280,
  [SMALL_STATE(479)] = 11301,
  [SMALL_STATE(480)] = 11322,
  [SMALL_STATE(481)] = 11343,
  [SMALL_STATE(482)] = 11364,
  [SMALL_STATE(483)] = 11386,
  [SMALL_STATE(484)] = 11408,
  [SMALL_STATE(485)] = 11422,
  [SMALL_STATE(486)] = 11440,
  [SMALL_STATE(487)] = 11460,
  [SMALL_STATE(488)] = 11482,
  [SMALL_STATE(489)] = 11504,
  [SMALL_STATE(490)] = 11526,
  [SMALL_STATE(491)] = 11548,
  [SMALL_STATE(492)] = 11570,
  [SMALL_STATE(493)] = 11592,
  [SMALL_STATE(494)] = 11614,
  [SMALL_STATE(495)] = 11628,
  [SMALL_STATE(496)] = 11650,
  [SMALL_STATE(497)] = 11672,
  [SMALL_STATE(498)] = 11694,
  [SMALL_STATE(499)] = 11713,
  [SMALL_STATE(500)] = 11730,
  [SMALL_STATE(501)] = 11749,
  [SMALL_STATE(502)] = 11764,
  [SMALL_STATE(503)] = 11783,
  [SMALL_STATE(504)] = 11800,
  [SMALL_STATE(505)] = 11811,
  [SMALL_STATE(506)] = 11822,
  [SMALL_STATE(507)] = 11841,
  [SMALL_STATE(508)] = 11860,
  [SMALL_STATE(509)] = 11876,
  [SMALL_STATE(510)] = 11884,
  [SMALL_STATE(511)] = 11892,
  [SMALL_STATE(512)] = 11908,
  [SMALL_STATE(513)] = 11922,
  [SMALL_STATE(514)] = 11930,
  [SMALL_STATE(515)] = 11946,
  [SMALL_STATE(516)] = 11958,
  [SMALL_STATE(517)] = 11974,
  [SMALL_STATE(518)] = 11988,
  [SMALL_STATE(519)] = 12000,
  [SMALL_STATE(520)] = 12014,
  [SMALL_STATE(521)] = 12022,
  [SMALL_STATE(522)] = 12030,
  [SMALL_STATE(523)] = 12038,
  [SMALL_STATE(524)] = 12050,
  [SMALL_STATE(525)] = 12066,
  [SMALL_STATE(526)] = 12078,
  [SMALL_STATE(527)] = 12092,
  [SMALL_STATE(528)] = 12108,
  [SMALL_STATE(529)] = 12116,
  [SMALL_STATE(530)] = 12129,
  [SMALL_STATE(531)] = 12142,
  [SMALL_STATE(532)] = 12153,
  [SMALL_STATE(533)] = 12166,
  [SMALL_STATE(534)] = 12179,
  [SMALL_STATE(535)] = 12190,
  [SMALL_STATE(536)] = 12203,
  [SMALL_STATE(537)] = 12210,
  [SMALL_STATE(538)] = 12223,
  [SMALL_STATE(539)] = 12236,
  [SMALL_STATE(540)] = 12249,
  [SMALL_STATE(541)] = 12262,
  [SMALL_STATE(542)] = 12275,
  [SMALL_STATE(543)] = 12288,
  [SMALL_STATE(544)] = 12301,
  [SMALL_STATE(545)] = 12314,
  [SMALL_STATE(546)] = 12327,
  [SMALL_STATE(547)] = 12340,
  [SMALL_STATE(548)] = 12353,
  [SMALL_STATE(549)] = 12366,
  [SMALL_STATE(550)] = 12379,
  [SMALL_STATE(551)] = 12392,
  [SMALL_STATE(552)] = 12405,
  [SMALL_STATE(553)] = 12416,
  [SMALL_STATE(554)] = 12425,
  [SMALL_STATE(555)] = 12438,
  [SMALL_STATE(556)] = 12451,
  [SMALL_STATE(557)] = 12458,
  [SMALL_STATE(558)] = 12471,
  [SMALL_STATE(559)] = 12484,
  [SMALL_STATE(560)] = 12497,
  [SMALL_STATE(561)] = 12510,
  [SMALL_STATE(562)] = 12523,
  [SMALL_STATE(563)] = 12536,
  [SMALL_STATE(564)] = 12549,
  [SMALL_STATE(565)] = 12562,
  [SMALL_STATE(566)] = 12575,
  [SMALL_STATE(567)] = 12588,
  [SMALL_STATE(568)] = 12601,
  [SMALL_STATE(569)] = 12614,
  [SMALL_STATE(570)] = 12625,
  [SMALL_STATE(571)] = 12638,
  [SMALL_STATE(572)] = 12651,
  [SMALL_STATE(573)] = 12664,
  [SMALL_STATE(574)] = 12677,
  [SMALL_STATE(575)] = 12690,
  [SMALL_STATE(576)] = 12703,
  [SMALL_STATE(577)] = 12716,
  [SMALL_STATE(578)] = 12729,
  [SMALL_STATE(579)] = 12742,
  [SMALL_STATE(580)] = 12755,
  [SMALL_STATE(581)] = 12768,
  [SMALL_STATE(582)] = 12781,
  [SMALL_STATE(583)] = 12791,
  [SMALL_STATE(584)] = 12801,
  [SMALL_STATE(585)] = 12811,
  [SMALL_STATE(586)] = 12821,
  [SMALL_STATE(587)] = 12831,
  [SMALL_STATE(588)] = 12841,
  [SMALL_STATE(589)] = 12851,
  [SMALL_STATE(590)] = 12861,
  [SMALL_STATE(591)] = 12871,
  [SMALL_STATE(592)] = 12881,
  [SMALL_STATE(593)] = 12891,
  [SMALL_STATE(594)] = 12901,
  [SMALL_STATE(595)] = 12911,
  [SMALL_STATE(596)] = 12921,
  [SMALL_STATE(597)] = 12931,
  [SMALL_STATE(598)] = 12941,
  [SMALL_STATE(599)] = 12951,
  [SMALL_STATE(600)] = 12961,
  [SMALL_STATE(601)] = 12971,
  [SMALL_STATE(602)] = 12981,
  [SMALL_STATE(603)] = 12991,
  [SMALL_STATE(604)] = 13001,
  [SMALL_STATE(605)] = 13011,
  [SMALL_STATE(606)] = 13021,
  [SMALL_STATE(607)] = 13031,
  [SMALL_STATE(608)] = 13041,
  [SMALL_STATE(609)] = 13051,
  [SMALL_STATE(610)] = 13061,
  [SMALL_STATE(611)] = 13071,
  [SMALL_STATE(612)] = 13081,
  [SMALL_STATE(613)] = 13091,
  [SMALL_STATE(614)] = 13101,
  [SMALL_STATE(615)] = 13111,
  [SMALL_STATE(616)] = 13121,
  [SMALL_STATE(617)] = 13131,
  [SMALL_STATE(618)] = 13141,
  [SMALL_STATE(619)] = 13151,
  [SMALL_STATE(620)] = 13161,
  [SMALL_STATE(621)] = 13171,
  [SMALL_STATE(622)] = 13181,
  [SMALL_STATE(623)] = 13189,
  [SMALL_STATE(624)] = 13199,
  [SMALL_STATE(625)] = 13209,
  [SMALL_STATE(626)] = 13219,
  [SMALL_STATE(627)] = 13229,
  [SMALL_STATE(628)] = 13239,
  [SMALL_STATE(629)] = 13249,
  [SMALL_STATE(630)] = 13259,
  [SMALL_STATE(631)] = 13269,
  [SMALL_STATE(632)] = 13279,
  [SMALL_STATE(633)] = 13289,
  [SMALL_STATE(634)] = 13297,
  [SMALL_STATE(635)] = 13307,
  [SMALL_STATE(636)] = 13317,
  [SMALL_STATE(637)] = 13327,
  [SMALL_STATE(638)] = 13337,
  [SMALL_STATE(639)] = 13347,
  [SMALL_STATE(640)] = 13357,
  [SMALL_STATE(641)] = 13367,
  [SMALL_STATE(642)] = 13377,
  [SMALL_STATE(643)] = 13387,
  [SMALL_STATE(644)] = 13397,
  [SMALL_STATE(645)] = 13407,
  [SMALL_STATE(646)] = 13413,
  [SMALL_STATE(647)] = 13423,
  [SMALL_STATE(648)] = 13429,
  [SMALL_STATE(649)] = 13439,
  [SMALL_STATE(650)] = 13449,
  [SMALL_STATE(651)] = 13459,
  [SMALL_STATE(652)] = 13469,
  [SMALL_STATE(653)] = 13479,
  [SMALL_STATE(654)] = 13489,
  [SMALL_STATE(655)] = 13499,
  [SMALL_STATE(656)] = 13509,
  [SMALL_STATE(657)] = 13519,
  [SMALL_STATE(658)] = 13529,
  [SMALL_STATE(659)] = 13539,
  [SMALL_STATE(660)] = 13549,
  [SMALL_STATE(661)] = 13559,
  [SMALL_STATE(662)] = 13569,
  [SMALL_STATE(663)] = 13579,
  [SMALL_STATE(664)] = 13589,
  [SMALL_STATE(665)] = 13599,
  [SMALL_STATE(666)] = 13609,
  [SMALL_STATE(667)] = 13619,
  [SMALL_STATE(668)] = 13629,
  [SMALL_STATE(669)] = 13639,
  [SMALL_STATE(670)] = 13649,
  [SMALL_STATE(671)] = 13659,
  [SMALL_STATE(672)] = 13669,
  [SMALL_STATE(673)] = 13679,
  [SMALL_STATE(674)] = 13689,
  [SMALL_STATE(675)] = 13699,
  [SMALL_STATE(676)] = 13709,
  [SMALL_STATE(677)] = 13719,
  [SMALL_STATE(678)] = 13729,
  [SMALL_STATE(679)] = 13739,
  [SMALL_STATE(680)] = 13749,
  [SMALL_STATE(681)] = 13759,
  [SMALL_STATE(682)] = 13769,
  [SMALL_STATE(683)] = 13779,
  [SMALL_STATE(684)] = 13789,
  [SMALL_STATE(685)] = 13799,
  [SMALL_STATE(686)] = 13809,
  [SMALL_STATE(687)] = 13819,
  [SMALL_STATE(688)] = 13829,
  [SMALL_STATE(689)] = 13839,
  [SMALL_STATE(690)] = 13849,
  [SMALL_STATE(691)] = 13859,
  [SMALL_STATE(692)] = 13869,
  [SMALL_STATE(693)] = 13879,
  [SMALL_STATE(694)] = 13889,
  [SMALL_STATE(695)] = 13899,
  [SMALL_STATE(696)] = 13907,
  [SMALL_STATE(697)] = 13917,
  [SMALL_STATE(698)] = 13927,
  [SMALL_STATE(699)] = 13937,
  [SMALL_STATE(700)] = 13947,
  [SMALL_STATE(701)] = 13957,
  [SMALL_STATE(702)] = 13967,
  [SMALL_STATE(703)] = 13977,
  [SMALL_STATE(704)] = 13987,
  [SMALL_STATE(705)] = 13997,
  [SMALL_STATE(706)] = 14007,
  [SMALL_STATE(707)] = 14017,
  [SMALL_STATE(708)] = 14027,
  [SMALL_STATE(709)] = 14037,
  [SMALL_STATE(710)] = 14047,
  [SMALL_STATE(711)] = 14057,
  [SMALL_STATE(712)] = 14065,
  [SMALL_STATE(713)] = 14075,
  [SMALL_STATE(714)] = 14085,
  [SMALL_STATE(715)] = 14095,
  [SMALL_STATE(716)] = 14105,
  [SMALL_STATE(717)] = 14115,
  [SMALL_STATE(718)] = 14123,
  [SMALL_STATE(719)] = 14133,
  [SMALL_STATE(720)] = 14143,
  [SMALL_STATE(721)] = 14153,
  [SMALL_STATE(722)] = 14161,
  [SMALL_STATE(723)] = 14169,
  [SMALL_STATE(724)] = 14179,
  [SMALL_STATE(725)] = 14189,
  [SMALL_STATE(726)] = 14199,
  [SMALL_STATE(727)] = 14209,
  [SMALL_STATE(728)] = 14219,
  [SMALL_STATE(729)] = 14229,
  [SMALL_STATE(730)] = 14239,
  [SMALL_STATE(731)] = 14244,
  [SMALL_STATE(732)] = 14251,
  [SMALL_STATE(733)] = 14258,
  [SMALL_STATE(734)] = 14265,
  [SMALL_STATE(735)] = 14272,
  [SMALL_STATE(736)] = 14279,
  [SMALL_STATE(737)] = 14286,
  [SMALL_STATE(738)] = 14293,
  [SMALL_STATE(739)] = 14300,
  [SMALL_STATE(740)] = 14307,
  [SMALL_STATE(741)] = 14314,
  [SMALL_STATE(742)] = 14321,
  [SMALL_STATE(743)] = 14326,
  [SMALL_STATE(744)] = 14333,
  [SMALL_STATE(745)] = 14340,
  [SMALL_STATE(746)] = 14347,
  [SMALL_STATE(747)] = 14354,
  [SMALL_STATE(748)] = 14361,
  [SMALL_STATE(749)] = 14368,
  [SMALL_STATE(750)] = 14373,
  [SMALL_STATE(751)] = 14378,
  [SMALL_STATE(752)] = 14385,
  [SMALL_STATE(753)] = 14390,
  [SMALL_STATE(754)] = 14397,
  [SMALL_STATE(755)] = 14404,
  [SMALL_STATE(756)] = 14411,
  [SMALL_STATE(757)] = 14418,
  [SMALL_STATE(758)] = 14425,
  [SMALL_STATE(759)] = 14432,
  [SMALL_STATE(760)] = 14439,
  [SMALL_STATE(761)] = 14446,
  [SMALL_STATE(762)] = 14453,
  [SMALL_STATE(763)] = 14460,
  [SMALL_STATE(764)] = 14467,
  [SMALL_STATE(765)] = 14472,
  [SMALL_STATE(766)] = 14479,
  [SMALL_STATE(767)] = 14486,
  [SMALL_STATE(768)] = 14493,
  [SMALL_STATE(769)] = 14500,
  [SMALL_STATE(770)] = 14505,
  [SMALL_STATE(771)] = 14512,
  [SMALL_STATE(772)] = 14519,
  [SMALL_STATE(773)] = 14526,
  [SMALL_STATE(774)] = 14533,
  [SMALL_STATE(775)] = 14540,
  [SMALL_STATE(776)] = 14547,
  [SMALL_STATE(777)] = 14554,
  [SMALL_STATE(778)] = 14561,
  [SMALL_STATE(779)] = 14568,
  [SMALL_STATE(780)] = 14573,
  [SMALL_STATE(781)] = 14580,
  [SMALL_STATE(782)] = 14587,
  [SMALL_STATE(783)] = 14594,
  [SMALL_STATE(784)] = 14601,
  [SMALL_STATE(785)] = 14608,
  [SMALL_STATE(786)] = 14615,
  [SMALL_STATE(787)] = 14622,
  [SMALL_STATE(788)] = 14629,
  [SMALL_STATE(789)] = 14634,
  [SMALL_STATE(790)] = 14641,
  [SMALL_STATE(791)] = 14648,
  [SMALL_STATE(792)] = 14655,
  [SMALL_STATE(793)] = 14662,
  [SMALL_STATE(794)] = 14667,
  [SMALL_STATE(795)] = 14674,
  [SMALL_STATE(796)] = 14681,
  [SMALL_STATE(797)] = 14688,
  [SMALL_STATE(798)] = 14695,
  [SMALL_STATE(799)] = 14702,
  [SMALL_STATE(800)] = 14709,
  [SMALL_STATE(801)] = 14716,
  [SMALL_STATE(802)] = 14723,
  [SMALL_STATE(803)] = 14730,
  [SMALL_STATE(804)] = 14735,
  [SMALL_STATE(805)] = 14742,
  [SMALL_STATE(806)] = 14749,
  [SMALL_STATE(807)] = 14756,
  [SMALL_STATE(808)] = 14763,
  [SMALL_STATE(809)] = 14770,
  [SMALL_STATE(810)] = 14775,
  [SMALL_STATE(811)] = 14780,
  [SMALL_STATE(812)] = 14787,
  [SMALL_STATE(813)] = 14794,
  [SMALL_STATE(814)] = 14801,
  [SMALL_STATE(815)] = 14808,
  [SMALL_STATE(816)] = 14815,
  [SMALL_STATE(817)] = 14822,
  [SMALL_STATE(818)] = 14827,
  [SMALL_STATE(819)] = 14834,
  [SMALL_STATE(820)] = 14841,
  [SMALL_STATE(821)] = 14848,
  [SMALL_STATE(822)] = 14855,
  [SMALL_STATE(823)] = 14862,
  [SMALL_STATE(824)] = 14869,
  [SMALL_STATE(825)] = 14876,
  [SMALL_STATE(826)] = 14883,
  [SMALL_STATE(827)] = 14890,
  [SMALL_STATE(828)] = 14897,
  [SMALL_STATE(829)] = 14904,
  [SMALL_STATE(830)] = 14909,
  [SMALL_STATE(831)] = 14916,
  [SMALL_STATE(832)] = 14923,
  [SMALL_STATE(833)] = 14930,
  [SMALL_STATE(834)] = 14937,
  [SMALL_STATE(835)] = 14944,
  [SMALL_STATE(836)] = 14951,
  [SMALL_STATE(837)] = 14958,
  [SMALL_STATE(838)] = 14963,
  [SMALL_STATE(839)] = 14968,
  [SMALL_STATE(840)] = 14973,
  [SMALL_STATE(841)] = 14978,
  [SMALL_STATE(842)] = 14985,
  [SMALL_STATE(843)] = 14992,
  [SMALL_STATE(844)] = 14999,
  [SMALL_STATE(845)] = 15006,
  [SMALL_STATE(846)] = 15011,
  [SMALL_STATE(847)] = 15016,
  [SMALL_STATE(848)] = 15023,
  [SMALL_STATE(849)] = 15030,
  [SMALL_STATE(850)] = 15037,
  [SMALL_STATE(851)] = 15044,
  [SMALL_STATE(852)] = 15051,
  [SMALL_STATE(853)] = 15056,
  [SMALL_STATE(854)] = 15063,
  [SMALL_STATE(855)] = 15068,
  [SMALL_STATE(856)] = 15073,
  [SMALL_STATE(857)] = 15080,
  [SMALL_STATE(858)] = 15085,
  [SMALL_STATE(859)] = 15090,
  [SMALL_STATE(860)] = 15097,
  [SMALL_STATE(861)] = 15104,
  [SMALL_STATE(862)] = 15111,
  [SMALL_STATE(863)] = 15118,
  [SMALL_STATE(864)] = 15123,
  [SMALL_STATE(865)] = 15130,
  [SMALL_STATE(866)] = 15135,
  [SMALL_STATE(867)] = 15142,
  [SMALL_STATE(868)] = 15149,
  [SMALL_STATE(869)] = 15156,
  [SMALL_STATE(870)] = 15161,
  [SMALL_STATE(871)] = 15168,
  [SMALL_STATE(872)] = 15173,
  [SMALL_STATE(873)] = 15178,
  [SMALL_STATE(874)] = 15183,
  [SMALL_STATE(875)] = 15190,
  [SMALL_STATE(876)] = 15197,
  [SMALL_STATE(877)] = 15204,
  [SMALL_STATE(878)] = 15209,
  [SMALL_STATE(879)] = 15214,
  [SMALL_STATE(880)] = 15221,
  [SMALL_STATE(881)] = 15225,
  [SMALL_STATE(882)] = 15229,
  [SMALL_STATE(883)] = 15233,
  [SMALL_STATE(884)] = 15237,
  [SMALL_STATE(885)] = 15241,
  [SMALL_STATE(886)] = 15245,
  [SMALL_STATE(887)] = 15249,
  [SMALL_STATE(888)] = 15253,
  [SMALL_STATE(889)] = 15257,
  [SMALL_STATE(890)] = 15261,
  [SMALL_STATE(891)] = 15265,
  [SMALL_STATE(892)] = 15269,
  [SMALL_STATE(893)] = 15273,
  [SMALL_STATE(894)] = 15277,
  [SMALL_STATE(895)] = 15281,
  [SMALL_STATE(896)] = 15285,
  [SMALL_STATE(897)] = 15289,
  [SMALL_STATE(898)] = 15293,
  [SMALL_STATE(899)] = 15297,
  [SMALL_STATE(900)] = 15301,
  [SMALL_STATE(901)] = 15305,
  [SMALL_STATE(902)] = 15309,
  [SMALL_STATE(903)] = 15313,
  [SMALL_STATE(904)] = 15317,
  [SMALL_STATE(905)] = 15321,
  [SMALL_STATE(906)] = 15325,
  [SMALL_STATE(907)] = 15329,
  [SMALL_STATE(908)] = 15333,
  [SMALL_STATE(909)] = 15337,
  [SMALL_STATE(910)] = 15341,
  [SMALL_STATE(911)] = 15345,
  [SMALL_STATE(912)] = 15349,
  [SMALL_STATE(913)] = 15353,
  [SMALL_STATE(914)] = 15357,
  [SMALL_STATE(915)] = 15361,
  [SMALL_STATE(916)] = 15365,
  [SMALL_STATE(917)] = 15369,
  [SMALL_STATE(918)] = 15373,
  [SMALL_STATE(919)] = 15377,
  [SMALL_STATE(920)] = 15381,
  [SMALL_STATE(921)] = 15385,
  [SMALL_STATE(922)] = 15389,
  [SMALL_STATE(923)] = 15393,
  [SMALL_STATE(924)] = 15397,
  [SMALL_STATE(925)] = 15401,
  [SMALL_STATE(926)] = 15405,
  [SMALL_STATE(927)] = 15409,
  [SMALL_STATE(928)] = 15413,
  [SMALL_STATE(929)] = 15417,
  [SMALL_STATE(930)] = 15421,
  [SMALL_STATE(931)] = 15425,
  [SMALL_STATE(932)] = 15429,
  [SMALL_STATE(933)] = 15433,
  [SMALL_STATE(934)] = 15437,
  [SMALL_STATE(935)] = 15441,
  [SMALL_STATE(936)] = 15445,
  [SMALL_STATE(937)] = 15449,
  [SMALL_STATE(938)] = 15453,
  [SMALL_STATE(939)] = 15457,
  [SMALL_STATE(940)] = 15461,
  [SMALL_STATE(941)] = 15465,
  [SMALL_STATE(942)] = 15469,
  [SMALL_STATE(943)] = 15473,
  [SMALL_STATE(944)] = 15477,
  [SMALL_STATE(945)] = 15481,
  [SMALL_STATE(946)] = 15485,
  [SMALL_STATE(947)] = 15489,
  [SMALL_STATE(948)] = 15493,
  [SMALL_STATE(949)] = 15497,
  [SMALL_STATE(950)] = 15501,
  [SMALL_STATE(951)] = 15505,
  [SMALL_STATE(952)] = 15509,
  [SMALL_STATE(953)] = 15513,
  [SMALL_STATE(954)] = 15517,
  [SMALL_STATE(955)] = 15521,
  [SMALL_STATE(956)] = 15525,
  [SMALL_STATE(957)] = 15529,
  [SMALL_STATE(958)] = 15533,
  [SMALL_STATE(959)] = 15537,
  [SMALL_STATE(960)] = 15541,
  [SMALL_STATE(961)] = 15545,
  [SMALL_STATE(962)] = 15549,
  [SMALL_STATE(963)] = 15553,
  [SMALL_STATE(964)] = 15557,
  [SMALL_STATE(965)] = 15561,
  [SMALL_STATE(966)] = 15565,
  [SMALL_STATE(967)] = 15569,
  [SMALL_STATE(968)] = 15573,
  [SMALL_STATE(969)] = 15577,
  [SMALL_STATE(970)] = 15581,
  [SMALL_STATE(971)] = 15585,
  [SMALL_STATE(972)] = 15589,
  [SMALL_STATE(973)] = 15593,
  [SMALL_STATE(974)] = 15597,
  [SMALL_STATE(975)] = 15601,
  [SMALL_STATE(976)] = 15605,
  [SMALL_STATE(977)] = 15609,
  [SMALL_STATE(978)] = 15613,
  [SMALL_STATE(979)] = 15617,
  [SMALL_STATE(980)] = 15621,
  [SMALL_STATE(981)] = 15625,
  [SMALL_STATE(982)] = 15629,
  [SMALL_STATE(983)] = 15633,
  [SMALL_STATE(984)] = 15637,
  [SMALL_STATE(985)] = 15641,
  [SMALL_STATE(986)] = 15645,
  [SMALL_STATE(987)] = 15649,
  [SMALL_STATE(988)] = 15653,
  [SMALL_STATE(989)] = 15657,
  [SMALL_STATE(990)] = 15661,
  [SMALL_STATE(991)] = 15665,
  [SMALL_STATE(992)] = 15669,
  [SMALL_STATE(993)] = 15673,
  [SMALL_STATE(994)] = 15677,
  [SMALL_STATE(995)] = 15681,
  [SMALL_STATE(996)] = 15685,
  [SMALL_STATE(997)] = 15689,
  [SMALL_STATE(998)] = 15693,
  [SMALL_STATE(999)] = 15697,
  [SMALL_STATE(1000)] = 15701,
  [SMALL_STATE(1001)] = 15705,
  [SMALL_STATE(1002)] = 15709,
  [SMALL_STATE(1003)] = 15713,
  [SMALL_STATE(1004)] = 15717,
  [SMALL_STATE(1005)] = 15721,
  [SMALL_STATE(1006)] = 15725,
  [SMALL_STATE(1007)] = 15729,
  [SMALL_STATE(1008)] = 15733,
  [SMALL_STATE(1009)] = 15737,
  [SMALL_STATE(1010)] = 15741,
  [SMALL_STATE(1011)] = 15745,
  [SMALL_STATE(1012)] = 15749,
  [SMALL_STATE(1013)] = 15753,
  [SMALL_STATE(1014)] = 15757,
  [SMALL_STATE(1015)] = 15761,
  [SMALL_STATE(1016)] = 15765,
  [SMALL_STATE(1017)] = 15769,
  [SMALL_STATE(1018)] = 15773,
  [SMALL_STATE(1019)] = 15777,
  [SMALL_STATE(1020)] = 15781,
  [SMALL_STATE(1021)] = 15785,
  [SMALL_STATE(1022)] = 15789,
  [SMALL_STATE(1023)] = 15793,
  [SMALL_STATE(1024)] = 15797,
  [SMALL_STATE(1025)] = 15801,
  [SMALL_STATE(1026)] = 15805,
  [SMALL_STATE(1027)] = 15809,
  [SMALL_STATE(1028)] = 15813,
  [SMALL_STATE(1029)] = 15817,
  [SMALL_STATE(1030)] = 15821,
  [SMALL_STATE(1031)] = 15825,
  [SMALL_STATE(1032)] = 15829,
  [SMALL_STATE(1033)] = 15833,
  [SMALL_STATE(1034)] = 15837,
  [SMALL_STATE(1035)] = 15841,
  [SMALL_STATE(1036)] = 15845,
  [SMALL_STATE(1037)] = 15849,
  [SMALL_STATE(1038)] = 15853,
  [SMALL_STATE(1039)] = 15857,
  [SMALL_STATE(1040)] = 15861,
  [SMALL_STATE(1041)] = 15865,
  [SMALL_STATE(1042)] = 15869,
  [SMALL_STATE(1043)] = 15873,
  [SMALL_STATE(1044)] = 15877,
  [SMALL_STATE(1045)] = 15881,
  [SMALL_STATE(1046)] = 15885,
  [SMALL_STATE(1047)] = 15889,
  [SMALL_STATE(1048)] = 15893,
  [SMALL_STATE(1049)] = 15897,
  [SMALL_STATE(1050)] = 15901,
  [SMALL_STATE(1051)] = 15905,
  [SMALL_STATE(1052)] = 15909,
  [SMALL_STATE(1053)] = 15913,
  [SMALL_STATE(1054)] = 15917,
  [SMALL_STATE(1055)] = 15921,
  [SMALL_STATE(1056)] = 15925,
  [SMALL_STATE(1057)] = 15929,
  [SMALL_STATE(1058)] = 15933,
  [SMALL_STATE(1059)] = 15937,
  [SMALL_STATE(1060)] = 15941,
  [SMALL_STATE(1061)] = 15945,
  [SMALL_STATE(1062)] = 15949,
  [SMALL_STATE(1063)] = 15953,
  [SMALL_STATE(1064)] = 15957,
  [SMALL_STATE(1065)] = 15961,
  [SMALL_STATE(1066)] = 15965,
  [SMALL_STATE(1067)] = 15969,
  [SMALL_STATE(1068)] = 15973,
  [SMALL_STATE(1069)] = 15977,
  [SMALL_STATE(1070)] = 15981,
  [SMALL_STATE(1071)] = 15985,
  [SMALL_STATE(1072)] = 15989,
  [SMALL_STATE(1073)] = 15993,
  [SMALL_STATE(1074)] = 15997,
  [SMALL_STATE(1075)] = 16001,
  [SMALL_STATE(1076)] = 16005,
  [SMALL_STATE(1077)] = 16009,
  [SMALL_STATE(1078)] = 16013,
  [SMALL_STATE(1079)] = 16017,
  [SMALL_STATE(1080)] = 16021,
  [SMALL_STATE(1081)] = 16025,
  [SMALL_STATE(1082)] = 16029,
  [SMALL_STATE(1083)] = 16033,
  [SMALL_STATE(1084)] = 16037,
  [SMALL_STATE(1085)] = 16041,
  [SMALL_STATE(1086)] = 16045,
  [SMALL_STATE(1087)] = 16049,
  [SMALL_STATE(1088)] = 16053,
  [SMALL_STATE(1089)] = 16057,
  [SMALL_STATE(1090)] = 16061,
  [SMALL_STATE(1091)] = 16065,
  [SMALL_STATE(1092)] = 16069,
  [SMALL_STATE(1093)] = 16073,
  [SMALL_STATE(1094)] = 16077,
  [SMALL_STATE(1095)] = 16081,
  [SMALL_STATE(1096)] = 16085,
  [SMALL_STATE(1097)] = 16089,
  [SMALL_STATE(1098)] = 16093,
  [SMALL_STATE(1099)] = 16097,
  [SMALL_STATE(1100)] = 16101,
  [SMALL_STATE(1101)] = 16105,
  [SMALL_STATE(1102)] = 16109,
  [SMALL_STATE(1103)] = 16113,
  [SMALL_STATE(1104)] = 16117,
  [SMALL_STATE(1105)] = 16121,
  [SMALL_STATE(1106)] = 16125,
  [SMALL_STATE(1107)] = 16129,
  [SMALL_STATE(1108)] = 16133,
  [SMALL_STATE(1109)] = 16137,
  [SMALL_STATE(1110)] = 16141,
  [SMALL_STATE(1111)] = 16145,
  [SMALL_STATE(1112)] = 16149,
  [SMALL_STATE(1113)] = 16153,
  [SMALL_STATE(1114)] = 16157,
  [SMALL_STATE(1115)] = 16161,
  [SMALL_STATE(1116)] = 16165,
  [SMALL_STATE(1117)] = 16169,
  [SMALL_STATE(1118)] = 16173,
  [SMALL_STATE(1119)] = 16177,
  [SMALL_STATE(1120)] = 16181,
  [SMALL_STATE(1121)] = 16185,
  [SMALL_STATE(1122)] = 16189,
  [SMALL_STATE(1123)] = 16193,
  [SMALL_STATE(1124)] = 16197,
  [SMALL_STATE(1125)] = 16201,
  [SMALL_STATE(1126)] = 16205,
  [SMALL_STATE(1127)] = 16209,
  [SMALL_STATE(1128)] = 16213,
  [SMALL_STATE(1129)] = 16217,
  [SMALL_STATE(1130)] = 16221,
  [SMALL_STATE(1131)] = 16225,
  [SMALL_STATE(1132)] = 16229,
  [SMALL_STATE(1133)] = 16233,
  [SMALL_STATE(1134)] = 16237,
  [SMALL_STATE(1135)] = 16241,
  [SMALL_STATE(1136)] = 16245,
  [SMALL_STATE(1137)] = 16249,
  [SMALL_STATE(1138)] = 16253,
  [SMALL_STATE(1139)] = 16257,
  [SMALL_STATE(1140)] = 16261,
  [SMALL_STATE(1141)] = 16265,
  [SMALL_STATE(1142)] = 16269,
  [SMALL_STATE(1143)] = 16273,
  [SMALL_STATE(1144)] = 16277,
  [SMALL_STATE(1145)] = 16281,
  [SMALL_STATE(1146)] = 16285,
  [SMALL_STATE(1147)] = 16289,
  [SMALL_STATE(1148)] = 16293,
  [SMALL_STATE(1149)] = 16297,
  [SMALL_STATE(1150)] = 16301,
  [SMALL_STATE(1151)] = 16305,
  [SMALL_STATE(1152)] = 16309,
  [SMALL_STATE(1153)] = 16313,
  [SMALL_STATE(1154)] = 16317,
  [SMALL_STATE(1155)] = 16321,
  [SMALL_STATE(1156)] = 16325,
  [SMALL_STATE(1157)] = 16329,
  [SMALL_STATE(1158)] = 16333,
  [SMALL_STATE(1159)] = 16337,
  [SMALL_STATE(1160)] = 16341,
  [SMALL_STATE(1161)] = 16345,
  [SMALL_STATE(1162)] = 16349,
  [SMALL_STATE(1163)] = 16353,
  [SMALL_STATE(1164)] = 16357,
  [SMALL_STATE(1165)] = 16361,
  [SMALL_STATE(1166)] = 16365,
  [SMALL_STATE(1167)] = 16369,
  [SMALL_STATE(1168)] = 16373,
  [SMALL_STATE(1169)] = 16377,
  [SMALL_STATE(1170)] = 16381,
  [SMALL_STATE(1171)] = 16385,
  [SMALL_STATE(1172)] = 16389,
  [SMALL_STATE(1173)] = 16393,
  [SMALL_STATE(1174)] = 16397,
  [SMALL_STATE(1175)] = 16401,
  [SMALL_STATE(1176)] = 16405,
  [SMALL_STATE(1177)] = 16409,
  [SMALL_STATE(1178)] = 16413,
  [SMALL_STATE(1179)] = 16417,
  [SMALL_STATE(1180)] = 16421,
  [SMALL_STATE(1181)] = 16425,
  [SMALL_STATE(1182)] = 16429,
  [SMALL_STATE(1183)] = 16433,
  [SMALL_STATE(1184)] = 16437,
  [SMALL_STATE(1185)] = 16441,
  [SMALL_STATE(1186)] = 16445,
  [SMALL_STATE(1187)] = 16449,
  [SMALL_STATE(1188)] = 16453,
  [SMALL_STATE(1189)] = 16457,
  [SMALL_STATE(1190)] = 16461,
  [SMALL_STATE(1191)] = 16465,
  [SMALL_STATE(1192)] = 16469,
  [SMALL_STATE(1193)] = 16473,
  [SMALL_STATE(1194)] = 16477,
  [SMALL_STATE(1195)] = 16481,
  [SMALL_STATE(1196)] = 16485,
  [SMALL_STATE(1197)] = 16489,
  [SMALL_STATE(1198)] = 16493,
  [SMALL_STATE(1199)] = 16497,
  [SMALL_STATE(1200)] = 16501,
  [SMALL_STATE(1201)] = 16505,
  [SMALL_STATE(1202)] = 16509,
  [SMALL_STATE(1203)] = 16513,
  [SMALL_STATE(1204)] = 16517,
  [SMALL_STATE(1205)] = 16521,
  [SMALL_STATE(1206)] = 16525,
  [SMALL_STATE(1207)] = 16529,
  [SMALL_STATE(1208)] = 16533,
  [SMALL_STATE(1209)] = 16537,
  [SMALL_STATE(1210)] = 16541,
  [SMALL_STATE(1211)] = 16545,
  [SMALL_STATE(1212)] = 16549,
  [SMALL_STATE(1213)] = 16553,
  [SMALL_STATE(1214)] = 16557,
  [SMALL_STATE(1215)] = 16561,
  [SMALL_STATE(1216)] = 16565,
  [SMALL_STATE(1217)] = 16569,
  [SMALL_STATE(1218)] = 16573,
  [SMALL_STATE(1219)] = 16577,
  [SMALL_STATE(1220)] = 16581,
  [SMALL_STATE(1221)] = 16585,
  [SMALL_STATE(1222)] = 16589,
  [SMALL_STATE(1223)] = 16593,
  [SMALL_STATE(1224)] = 16597,
  [SMALL_STATE(1225)] = 16601,
  [SMALL_STATE(1226)] = 16605,
  [SMALL_STATE(1227)] = 16609,
  [SMALL_STATE(1228)] = 16613,
  [SMALL_STATE(1229)] = 16617,
  [SMALL_STATE(1230)] = 16621,
  [SMALL_STATE(1231)] = 16625,
  [SMALL_STATE(1232)] = 16629,
  [SMALL_STATE(1233)] = 16633,
  [SMALL_STATE(1234)] = 16637,
  [SMALL_STATE(1235)] = 16641,
  [SMALL_STATE(1236)] = 16645,
  [SMALL_STATE(1237)] = 16649,
  [SMALL_STATE(1238)] = 16653,
  [SMALL_STATE(1239)] = 16657,
  [SMALL_STATE(1240)] = 16661,
  [SMALL_STATE(1241)] = 16665,
  [SMALL_STATE(1242)] = 16669,
  [SMALL_STATE(1243)] = 16673,
  [SMALL_STATE(1244)] = 16677,
  [SMALL_STATE(1245)] = 16681,
  [SMALL_STATE(1246)] = 16685,
  [SMALL_STATE(1247)] = 16689,
  [SMALL_STATE(1248)] = 16693,
  [SMALL_STATE(1249)] = 16697,
  [SMALL_STATE(1250)] = 16701,
  [SMALL_STATE(1251)] = 16705,
  [SMALL_STATE(1252)] = 16709,
  [SMALL_STATE(1253)] = 16713,
  [SMALL_STATE(1254)] = 16717,
  [SMALL_STATE(1255)] = 16721,
  [SMALL_STATE(1256)] = 16725,
  [SMALL_STATE(1257)] = 16729,
  [SMALL_STATE(1258)] = 16733,
  [SMALL_STATE(1259)] = 16737,
  [SMALL_STATE(1260)] = 16741,
  [SMALL_STATE(1261)] = 16745,
  [SMALL_STATE(1262)] = 16749,
  [SMALL_STATE(1263)] = 16753,
  [SMALL_STATE(1264)] = 16757,
  [SMALL_STATE(1265)] = 16761,
  [SMALL_STATE(1266)] = 16765,
  [SMALL_STATE(1267)] = 16769,
  [SMALL_STATE(1268)] = 16773,
  [SMALL_STATE(1269)] = 16777,
  [SMALL_STATE(1270)] = 16781,
  [SMALL_STATE(1271)] = 16785,
  [SMALL_STATE(1272)] = 16789,
  [SMALL_STATE(1273)] = 16793,
  [SMALL_STATE(1274)] = 16797,
  [SMALL_STATE(1275)] = 16801,
  [SMALL_STATE(1276)] = 16805,
  [SMALL_STATE(1277)] = 16809,
  [SMALL_STATE(1278)] = 16813,
  [SMALL_STATE(1279)] = 16817,
  [SMALL_STATE(1280)] = 16821,
  [SMALL_STATE(1281)] = 16825,
  [SMALL_STATE(1282)] = 16829,
  [SMALL_STATE(1283)] = 16833,
  [SMALL_STATE(1284)] = 16837,
  [SMALL_STATE(1285)] = 16841,
  [SMALL_STATE(1286)] = 16845,
  [SMALL_STATE(1287)] = 16849,
  [SMALL_STATE(1288)] = 16853,
  [SMALL_STATE(1289)] = 16857,
  [SMALL_STATE(1290)] = 16861,
  [SMALL_STATE(1291)] = 16865,
  [SMALL_STATE(1292)] = 16869,
  [SMALL_STATE(1293)] = 16873,
  [SMALL_STATE(1294)] = 16877,
  [SMALL_STATE(1295)] = 16881,
  [SMALL_STATE(1296)] = 16885,
  [SMALL_STATE(1297)] = 16889,
  [SMALL_STATE(1298)] = 16893,
  [SMALL_STATE(1299)] = 16897,
  [SMALL_STATE(1300)] = 16901,
  [SMALL_STATE(1301)] = 16905,
  [SMALL_STATE(1302)] = 16909,
  [SMALL_STATE(1303)] = 16913,
  [SMALL_STATE(1304)] = 16917,
  [SMALL_STATE(1305)] = 16921,
  [SMALL_STATE(1306)] = 16925,
  [SMALL_STATE(1307)] = 16929,
  [SMALL_STATE(1308)] = 16933,
  [SMALL_STATE(1309)] = 16937,
  [SMALL_STATE(1310)] = 16941,
  [SMALL_STATE(1311)] = 16945,
  [SMALL_STATE(1312)] = 16949,
  [SMALL_STATE(1313)] = 16953,
  [SMALL_STATE(1314)] = 16957,
  [SMALL_STATE(1315)] = 16961,
  [SMALL_STATE(1316)] = 16965,
  [SMALL_STATE(1317)] = 16969,
  [SMALL_STATE(1318)] = 16973,
  [SMALL_STATE(1319)] = 16977,
  [SMALL_STATE(1320)] = 16981,
  [SMALL_STATE(1321)] = 16985,
  [SMALL_STATE(1322)] = 16989,
  [SMALL_STATE(1323)] = 16993,
  [SMALL_STATE(1324)] = 16997,
  [SMALL_STATE(1325)] = 17001,
  [SMALL_STATE(1326)] = 17005,
  [SMALL_STATE(1327)] = 17009,
  [SMALL_STATE(1328)] = 17013,
  [SMALL_STATE(1329)] = 17017,
  [SMALL_STATE(1330)] = 17021,
  [SMALL_STATE(1331)] = 17025,
  [SMALL_STATE(1332)] = 17029,
  [SMALL_STATE(1333)] = 17033,
  [SMALL_STATE(1334)] = 17037,
  [SMALL_STATE(1335)] = 17041,
  [SMALL_STATE(1336)] = 17045,
  [SMALL_STATE(1337)] = 17049,
  [SMALL_STATE(1338)] = 17053,
  [SMALL_STATE(1339)] = 17057,
  [SMALL_STATE(1340)] = 17061,
  [SMALL_STATE(1341)] = 17065,
  [SMALL_STATE(1342)] = 17069,
  [SMALL_STATE(1343)] = 17073,
  [SMALL_STATE(1344)] = 17077,
  [SMALL_STATE(1345)] = 17081,
  [SMALL_STATE(1346)] = 17085,
  [SMALL_STATE(1347)] = 17089,
  [SMALL_STATE(1348)] = 17093,
  [SMALL_STATE(1349)] = 17097,
  [SMALL_STATE(1350)] = 17101,
  [SMALL_STATE(1351)] = 17105,
  [SMALL_STATE(1352)] = 17109,
  [SMALL_STATE(1353)] = 17113,
  [SMALL_STATE(1354)] = 17117,
  [SMALL_STATE(1355)] = 17121,
  [SMALL_STATE(1356)] = 17125,
  [SMALL_STATE(1357)] = 17129,
  [SMALL_STATE(1358)] = 17133,
  [SMALL_STATE(1359)] = 17137,
  [SMALL_STATE(1360)] = 17141,
  [SMALL_STATE(1361)] = 17145,
  [SMALL_STATE(1362)] = 17149,
  [SMALL_STATE(1363)] = 17153,
  [SMALL_STATE(1364)] = 17157,
  [SMALL_STATE(1365)] = 17161,
  [SMALL_STATE(1366)] = 17165,
  [SMALL_STATE(1367)] = 17169,
  [SMALL_STATE(1368)] = 17173,
  [SMALL_STATE(1369)] = 17177,
  [SMALL_STATE(1370)] = 17181,
  [SMALL_STATE(1371)] = 17185,
  [SMALL_STATE(1372)] = 17189,
  [SMALL_STATE(1373)] = 17193,
  [SMALL_STATE(1374)] = 17197,
  [SMALL_STATE(1375)] = 17201,
  [SMALL_STATE(1376)] = 17205,
  [SMALL_STATE(1377)] = 17209,
  [SMALL_STATE(1378)] = 17213,
  [SMALL_STATE(1379)] = 17217,
  [SMALL_STATE(1380)] = 17221,
  [SMALL_STATE(1381)] = 17225,
  [SMALL_STATE(1382)] = 17229,
  [SMALL_STATE(1383)] = 17233,
  [SMALL_STATE(1384)] = 17237,
  [SMALL_STATE(1385)] = 17241,
  [SMALL_STATE(1386)] = 17245,
  [SMALL_STATE(1387)] = 17249,
  [SMALL_STATE(1388)] = 17253,
  [SMALL_STATE(1389)] = 17257,
  [SMALL_STATE(1390)] = 17261,
  [SMALL_STATE(1391)] = 17265,
  [SMALL_STATE(1392)] = 17269,
  [SMALL_STATE(1393)] = 17273,
  [SMALL_STATE(1394)] = 17277,
  [SMALL_STATE(1395)] = 17281,
  [SMALL_STATE(1396)] = 17285,
  [SMALL_STATE(1397)] = 17289,
  [SMALL_STATE(1398)] = 17293,
  [SMALL_STATE(1399)] = 17297,
  [SMALL_STATE(1400)] = 17301,
  [SMALL_STATE(1401)] = 17305,
  [SMALL_STATE(1402)] = 17309,
  [SMALL_STATE(1403)] = 17313,
  [SMALL_STATE(1404)] = 17317,
  [SMALL_STATE(1405)] = 17321,
  [SMALL_STATE(1406)] = 17325,
  [SMALL_STATE(1407)] = 17329,
  [SMALL_STATE(1408)] = 17333,
  [SMALL_STATE(1409)] = 17337,
  [SMALL_STATE(1410)] = 17341,
  [SMALL_STATE(1411)] = 17345,
  [SMALL_STATE(1412)] = 17349,
  [SMALL_STATE(1413)] = 17353,
  [SMALL_STATE(1414)] = 17357,
  [SMALL_STATE(1415)] = 17361,
  [SMALL_STATE(1416)] = 17365,
  [SMALL_STATE(1417)] = 17369,
  [SMALL_STATE(1418)] = 17373,
  [SMALL_STATE(1419)] = 17377,
  [SMALL_STATE(1420)] = 17381,
  [SMALL_STATE(1421)] = 17385,
  [SMALL_STATE(1422)] = 17389,
  [SMALL_STATE(1423)] = 17393,
  [SMALL_STATE(1424)] = 17397,
  [SMALL_STATE(1425)] = 17401,
  [SMALL_STATE(1426)] = 17405,
  [SMALL_STATE(1427)] = 17409,
  [SMALL_STATE(1428)] = 17413,
  [SMALL_STATE(1429)] = 17417,
  [SMALL_STATE(1430)] = 17421,
  [SMALL_STATE(1431)] = 17425,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1425),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1381),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1362),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1347),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(492),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(516),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(722),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1425),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(736),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(449),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(457),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1381),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1362),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(459),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(458),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(502),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(448),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1347),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 16),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 16),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(860),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 61),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 61),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 66),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 66),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1410),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 39),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(503),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 38),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1276),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1166),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 62),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 4, .production_id = 12),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 34),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 14),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1174),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(1089),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(941),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 60),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 5, .production_id = 11),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 18),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 44),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 35),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 60),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5, .production_id = 37),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4, .production_id = 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1374),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 8, .production_id = 64),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 37),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1358),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 5, .production_id = 11),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1346),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5, .production_id = 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 18),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1310),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2, .production_id = 46),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 23),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(607),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 57),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 12),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4, .production_id = 13),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1149),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(512),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3, .production_id = 4),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(807),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3, .production_id = 17),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1401),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4, .production_id = 46),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(862),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3, .production_id = 46),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2, .production_id = 17),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 11, .production_id = 60),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8, .production_id = 18),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2, .production_id = 17),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3, .production_id = 4),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 11, .production_id = 77),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1276),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 12),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 18),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1, .production_id = 17),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2), SHIFT_REPEAT(1401),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 37),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 18),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6, .production_id = 41),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6, .production_id = 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 12),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 18),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 67),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 60),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 12),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 18),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 18),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 37),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9, .production_id = 7),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 3, .production_id = 46),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 70),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9, .production_id = 7),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 42),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1264),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3, .production_id = 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12, .production_id = 84),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2, .production_id = 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15, .production_id = 97),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 43),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5, .production_id = 32),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 30),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5, .production_id = 29),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 27),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 24),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 21),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 20),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 59),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3, .production_id = 3),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1286),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 6),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 109),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 110),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3, .production_id = 9),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1375),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4, .production_id = 13),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1250),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3, .production_id = 11),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1404),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 114),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 120),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 124),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 125),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 129),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3, .production_id = 8),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1332),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3, .production_id = 10),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1395),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 52),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4, .production_id = 15),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 53),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 3),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 46),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 24, .production_id = 129),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 58),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 125),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3, .production_id = 7),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3, .production_id = 4),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 124),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 21, .production_id = 128),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4, .production_id = 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 21, .production_id = 127),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4, .production_id = 4),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 120),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 7, .production_id = 56),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4, .production_id = 10),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 7, .production_id = 55),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4, .production_id = 4),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 20, .production_id = 126),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 15),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 54),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 37),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 114),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 123),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 122),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 7, .production_id = 51),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 121),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 7, .production_id = 50),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 7, .production_id = 49),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 7, .production_id = 48),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 110),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 109),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8, .production_id = 63),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7, .production_id = 47),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 119),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8, .production_id = 47),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 118),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 8, .production_id = 65),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7, .production_id = 41),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18, .production_id = 117),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 1),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 116),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 115),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8, .production_id = 43),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7, .production_id = 37),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 113),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7, .production_id = 3),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 112),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5, .production_id = 18),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 111),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 97),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 3),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 18),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 9, .production_id = 60),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 107),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 41),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 106),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 6, .production_id = 11),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 105),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 104),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 103),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 102),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6, .production_id = 31),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 13),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9, .production_id = 68),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 9, .production_id = 64),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6, .production_id = 18),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 41),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 45),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 101),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 71),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 100),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 99),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 72),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 98),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 1),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 60),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 3),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 18),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 96),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 22),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5, .production_id = 23),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 95),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 25),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5, .production_id = 26),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 94),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 28),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 43),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 93),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10, .production_id = 67),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 6, .production_id = 11),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 31),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5, .production_id = 33),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 92),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 91),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 14, .production_id = 84),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 87),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10, .production_id = 74),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10, .production_id = 75),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 2),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 76),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 68),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 12),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 13, .production_id = 86),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 37),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 90),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 18),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 13, .production_id = 89),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 11, .production_id = 18),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 87),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11, .production_id = 79),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 18),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11, .production_id = 7),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 12, .production_id = 60),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 3),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 11, .production_id = 76),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4, .production_id = 12),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 11, .production_id = 80),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 12, .production_id = 86),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 12),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 11, .production_id = 7),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 18),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 12, .production_id = 77),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 12, .production_id = 83),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5, .production_id = 15),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 85),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1273),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1106),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1093),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1428),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1426),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1103),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1400),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1396),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1049),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1005),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1046),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1045),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1423),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1422),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1421),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1418),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1431),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(946),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1305),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(876),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(757),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1318),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1340),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1339),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1335),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1245),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(462),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1393),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 17),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1155),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 17),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(917),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 17),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1420),
  [1246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1166),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [1252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1116),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1405),
  [1262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1036),
  [1270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1064),
  [1272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1014),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1416),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1127),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1167),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [1314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(58),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(447),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(592),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 2),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(1107),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(758),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [1377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1056),
  [1379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1057),
  [1381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(784),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1277),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1204),
  [1434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(870),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(775),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(861),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(731),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(830),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_not_null_list_repeat1, 2), SHIFT_REPEAT(795),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_not_null_list_repeat1, 2),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2, .production_id = 88),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(465),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2), SHIFT_REPEAT(1167),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1, .production_id = 78),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 1),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1380),
  [1542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1140),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null_list, 1),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1146),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1173),
  [1564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(236),
  [1571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1168),
  [1583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null_list, 2),
  [1587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(446),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1210),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1191),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2, .production_id = 81),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1, .production_id = 82),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1120),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1294),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1389),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1391),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1156),
  [1626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [1628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1377),
  [1630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1216),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 108),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1234),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1235),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1273),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1203),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 5),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [1672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1189),
  [1674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1184),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1275),
  [1692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(770),
  [1694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1284),
  [1696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(767),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1245),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4, .production_id = 17),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1312),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1311),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(996),
  [1724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(841),
  [1726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1077),
  [1728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1079),
  [1730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1098),
  [1732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [1734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1408),
  [1736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1359),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1274),
  [1744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [1746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1321),
  [1748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(754),
  [1750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1348),
  [1752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1360),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1393),
  [1760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1379),
  [1770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 4),
  [1774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1385),
  [1776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [1790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1016),
  [1792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1411),
  [1796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1413),
  [1808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [1810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 40),
  [1812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1427),
  [1814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1303),
  [1822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1105),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 73),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1247),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1403),
  [1854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [1856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 3, .production_id = 69),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 17),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [1866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1208),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1283),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1424),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1308),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4),
  [1910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4),
  [1912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [1926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1000),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1351),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1271),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1412),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1415),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1243),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1193),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1218),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [2066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1176),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1206),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1152),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1104),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [2104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1071),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1145),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1075),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1076),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1086),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1345),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1111),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
  [2188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [2196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 17),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1328),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1170),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1125),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1128),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1137),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1082),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1147),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1158),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1159),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1139),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1162),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1370),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1367),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1353),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [2338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 78),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1352),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [2350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1178),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1179),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1181),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1182),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1183),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1185),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1188),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1190),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1350),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1196),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1349),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1343),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1211),
  [2422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1212),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1213),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1214),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1215),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [2432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1217),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [2436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 36),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1223),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1201),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1221),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [2458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1224),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1225),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1228),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1229),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1325),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1232),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1233),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1313),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1239),
  [2490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [2492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1241),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [2496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [2498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [2500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [2504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1309),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [2514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1248),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [2518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [2522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1252),
  [2524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [2526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [2528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1255),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1256),
  [2532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1257),
  [2534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [2538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1260),
  [2540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [2542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [2544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [2546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1261),
  [2548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1262),
  [2550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [2552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [2554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1265),
  [2556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1266),
  [2558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1307),
  [2560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [2562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1268),
  [2564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [2566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [2568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1270),
  [2570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [2572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1231),
  [2574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [2576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1299),
  [2578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [2580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1280),
  [2584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1281),
  [2586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [2588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [2590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [2592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [2594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [2596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [2600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1288),
  [2602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1289),
  [2604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [2606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1291),
  [2608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1292),
  [2610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1293),
  [2612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [2614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [2616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1295),
  [2618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1296),
  [2620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [2622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1298),
  [2624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1300),
  [2628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1301),
  [2630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1302),
  [2632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [2634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [2636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1304),
  [2638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [2640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1306),
  [2644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [2646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [2648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [2650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [2652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [2654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [2656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [2658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [2660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1319),
  [2662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1320),
  [2664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [2666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1322),
  [2668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [2670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [2672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [2674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1326),
  [2676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [2678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1329),
  [2682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1330),
  [2684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1331),
  [2686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [2688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1333),
  [2690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1334),
  [2692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [2694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [2696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [2698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1337),
  [2700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1338),
  [2702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [2704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [2706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1341),
  [2708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1342),
  [2710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1402),
  [2712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [2714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [2716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1344),
  [2718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [2720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [2722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 19),
  [2724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [2726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [2728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [2730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [2732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [2734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [2736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [2738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [2740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [2742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1355),
  [2744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1356),
  [2746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1227),
  [2748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [2750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [2752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [2754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1364),
  [2758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1365),
  [2760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [2762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [2764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1368),
  [2766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1369),
  [2768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [2770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [2772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1371),
  [2774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [2776] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1373),
  [2780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [2782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [2784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [2786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [2788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1376),
  [2790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [2792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [2794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [2796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [2798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [2800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1236),
  [2802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [2804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [2806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [2808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [2810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [2812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1378),
  [2814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [2816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [2818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [2820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [2822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [2824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [2826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [2828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [2830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [2832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1386),
  [2834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1387),
  [2836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1388),
  [2838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [2840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [2842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1390),
  [2844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [2846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [2848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1392),
  [2850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [2852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [2854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [2856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [2858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1254),
  [2860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1397),
  [2862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1272),
  [2864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [2866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [2868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [2870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [2872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [2874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1314),
  [2876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [2878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1406),
  [2880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1407),
  [2882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1237),
  [2884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [2886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [2888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1409),
  [2890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [2892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [2894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [2896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [2898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [2900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [2902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [2904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [2906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [2908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [2910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1317),
  [2912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [2914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [2916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [2918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1417),
  [2920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1154),
  [2922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [2924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [2926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1363),
  [2928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [2930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1384),
  [2932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [2934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [2936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [2938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [2940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [2942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [2944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [2948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [2950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [2952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [2954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [2956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1394),
  [2958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [2960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1171),
  [2962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [2964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
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
