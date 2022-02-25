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
#define STATE_COUNT 1406
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 308
#define ALIAS_COUNT 25
#define TOKEN_COUNT 145
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 24
#define PRODUCTION_ID_COUNT 120

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
  aux_sym_constant_token2 = 15,
  aux_sym_constant_token3 = 16,
  sym__string_literal = 17,
  sym__decimal_literal = 18,
  sym__float_literal = 19,
  sym__boolean_literal = 20,
  sym__code_block = 21,
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
  sym_table_name = 155,
  sym_where_spec = 156,
  sym_relation_elements = 157,
  sym_relation_element = 158,
  sym_assignment_tuple = 159,
  sym_relation_contains_key = 160,
  sym_relation_contains = 161,
  sym_order_spec = 162,
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
  sym_revoke = 195,
  sym_priviledge = 196,
  sym_resource = 197,
  sym_list_roles = 198,
  sym_role_name = 199,
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
  sym_user_name = 257,
  sym_alter_materialized_view = 258,
  sym_alter_keyspace = 259,
  sym_replication_list = 260,
  sym_alter_role = 261,
  sym_alter_table = 262,
  sym_alter_table_operation = 263,
  sym_alter_table_add = 264,
  sym_alter_table_column_definition = 265,
  sym_alter_table_drop_columns = 266,
  sym_alter_table_drop_column_list = 267,
  sym_alter_table_drop_compact_storage = 268,
  sym_alter_table_rename = 269,
  sym_alter_table_with = 270,
  sym_alter_type = 271,
  sym_alter_type_operation = 272,
  sym_alter_type_alter_type = 273,
  sym_alter_type_add = 274,
  sym_alter_type_rename = 275,
  sym_alter_type_rename_list = 276,
  sym_alter_type_rename_item = 277,
  sym_alter_user = 278,
  sym_user_password = 279,
  sym_user_super_user = 280,
  sym_apply_batch = 281,
  aux_sym_source_file_repeat1 = 282,
  aux_sym_select_elements_repeat1 = 283,
  aux_sym_function_args_repeat1 = 284,
  aux_sym_relation_elements_repeat1 = 285,
  aux_sym_relation_element_repeat1 = 286,
  aux_sym_relation_element_repeat2 = 287,
  aux_sym_assignment_tuple_repeat1 = 288,
  aux_sym_delete_column_list_repeat1 = 289,
  aux_sym_if_condition_list_repeat1 = 290,
  aux_sym_column_list_repeat1 = 291,
  aux_sym_expression_list_repeat1 = 292,
  aux_sym_assignment_map_repeat1 = 293,
  aux_sym_update_repeat1 = 294,
  aux_sym_init_cond_list_nested_repeat1 = 295,
  aux_sym_init_cond_hash_repeat1 = 296,
  aux_sym_column_not_null_list_repeat1 = 297,
  aux_sym_create_function_repeat1 = 298,
  aux_sym_data_type_definition_repeat1 = 299,
  aux_sym_role_with_repeat1 = 300,
  aux_sym_option_hash_repeat1 = 301,
  aux_sym_column_definition_list_repeat1 = 302,
  aux_sym_table_options_repeat1 = 303,
  aux_sym_create_type_repeat1 = 304,
  aux_sym_replication_list_repeat1 = 305,
  aux_sym_alter_table_column_definition_repeat1 = 306,
  aux_sym_alter_type_rename_list_repeat1 = 307,
  anon_alias_sym_aggregate = 308,
  anon_alias_sym_clustering_key = 309,
  anon_alias_sym_column = 310,
  anon_alias_sym_data_type = 311,
  anon_alias_sym_entries = 312,
  anon_alias_sym_finalfunc = 313,
  anon_alias_sym_full = 314,
  anon_alias_sym_function = 315,
  anon_alias_sym_function_name = 316,
  anon_alias_sym_hash_key = 317,
  anon_alias_sym_index = 318,
  anon_alias_sym_keys = 319,
  anon_alias_sym_keyspace = 320,
  anon_alias_sym_language = 321,
  anon_alias_sym_materialized_view = 322,
  anon_alias_sym_option = 323,
  anon_alias_sym_param_name = 324,
  anon_alias_sym_partition_key = 325,
  anon_alias_sym_primary_key = 326,
  anon_alias_sym_role = 327,
  anon_alias_sym_sfunc = 328,
  anon_alias_sym_table = 329,
  anon_alias_sym_trigger = 330,
  anon_alias_sym_type = 331,
  anon_alias_sym_user = 332,
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
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_constant_token2] = "NULL",
  [aux_sym_constant_token3] = "constant_token3",
  [sym__string_literal] = "_string_literal",
  [sym__decimal_literal] = "_decimal_literal",
  [sym__float_literal] = "_float_literal",
  [sym__boolean_literal] = "_boolean_literal",
  [sym__code_block] = "_code_block",
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
  [sym_table_name] = "table_name",
  [sym_where_spec] = "where_spec",
  [sym_relation_elements] = "relation_elements",
  [sym_relation_element] = "relation_element",
  [sym_assignment_tuple] = "assignment_tuple",
  [sym_relation_contains_key] = "relation_contains_key",
  [sym_relation_contains] = "relation_contains",
  [sym_order_spec] = "order_spec",
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
  [sym_revoke] = "revoke",
  [sym_priviledge] = "priviledge",
  [sym_resource] = "resource",
  [sym_list_roles] = "list_roles",
  [sym_role_name] = "role_name",
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
  [sym_user_name] = "user_name",
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
  [aux_sym_constant_token2] = aux_sym_constant_token2,
  [aux_sym_constant_token3] = aux_sym_constant_token3,
  [sym__string_literal] = sym__string_literal,
  [sym__decimal_literal] = sym__decimal_literal,
  [sym__float_literal] = sym__float_literal,
  [sym__boolean_literal] = sym__boolean_literal,
  [sym__code_block] = sym__code_block,
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
  [sym_table_name] = sym_table_name,
  [sym_where_spec] = sym_where_spec,
  [sym_relation_elements] = sym_relation_elements,
  [sym_relation_element] = sym_relation_element,
  [sym_assignment_tuple] = sym_assignment_tuple,
  [sym_relation_contains_key] = sym_relation_contains_key,
  [sym_relation_contains] = sym_relation_contains,
  [sym_order_spec] = sym_order_spec,
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
  [sym_revoke] = sym_revoke,
  [sym_priviledge] = sym_priviledge,
  [sym_resource] = sym_resource,
  [sym_list_roles] = sym_list_roles,
  [sym_role_name] = sym_role_name,
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
  [sym_user_name] = sym_user_name,
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
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_constant_token3] = {
    .visible = false,
    .named = false,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__decimal_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__float_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__code_block] = {
    .visible = false,
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
  [sym_table_name] = {
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
  [sym_role_name] = {
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
  [sym_user_name] = {
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
  field_role = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_role] = "role",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [43] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_role, 5},
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
    [0] = anon_alias_sym_table,
  },
  [4] = {
    [2] = anon_alias_sym_table,
  },
  [5] = {
    [0] = anon_alias_sym_index,
  },
  [6] = {
    [2] = anon_alias_sym_role,
  },
  [7] = {
    [0] = anon_alias_sym_trigger,
  },
  [8] = {
    [0] = anon_alias_sym_user,
  },
  [9] = {
    [2] = anon_alias_sym_index,
  },
  [10] = {
    [2] = anon_alias_sym_keyspace,
  },
  [11] = {
    [2] = anon_alias_sym_function,
  },
  [12] = {
    [2] = anon_alias_sym_aggregate,
  },
  [13] = {
    [2] = anon_alias_sym_type,
  },
  [14] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_table,
  },
  [15] = {
    [3] = anon_alias_sym_materialized_view,
  },
  [16] = {
    [0] = anon_alias_sym_role,
  },
  [17] = {
    [3] = anon_alias_sym_role,
  },
  [18] = {
    [0] = anon_alias_sym_function_name,
  },
  [19] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_table,
  },
  [20] = {
    [0] = anon_alias_sym_column,
  },
  [21] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_table,
  },
  [22] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_trigger,
  },
  [23] = {
    [4] = anon_alias_sym_table,
  },
  [24] = {
    [4] = anon_alias_sym_index,
  },
  [25] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_index,
  },
  [26] = {
    [4] = anon_alias_sym_keyspace,
  },
  [27] = {
    [4] = anon_alias_sym_function,
  },
  [28] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
  },
  [29] = {
    [4] = anon_alias_sym_role,
  },
  [30] = {
    [4] = anon_alias_sym_aggregate,
  },
  [31] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
  },
  [32] = {
    [2] = anon_alias_sym_trigger,
    [4] = anon_alias_sym_table,
  },
  [33] = {
    [4] = anon_alias_sym_type,
  },
  [34] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
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
  [44] = {
    [1] = anon_alias_sym_column,
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
    [6] = anon_alias_sym_index,
  },
  [48] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
  },
  [49] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
  },
  [50] = {
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_table,
  },
  [51] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_table,
  },
  [52] = {
    [2] = anon_alias_sym_trigger,
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_table,
  },
  [53] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_type,
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
  [58] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_materialized_view,
  },
  [59] = {
    [5] = anon_alias_sym_table,
  },
  [60] = {
    [2] = anon_alias_sym_keys,
  },
  [61] = {
    [2] = anon_alias_sym_entries,
  },
  [62] = {
    [2] = anon_alias_sym_full,
  },
  [63] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
    [6] = anon_alias_sym_column,
    [7] = anon_alias_sym_data_type,
  },
  [64] = {
    [1] = anon_alias_sym_column,
    [2] = anon_alias_sym_data_type,
  },
  [65] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_trigger,
    [8] = anon_alias_sym_table,
  },
  [66] = {
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [67] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [68] = {
    [0] = anon_alias_sym_primary_key,
  },
  [69] = {
    [5] = anon_alias_sym_type,
    [7] = anon_alias_sym_column,
    [8] = anon_alias_sym_data_type,
  },
  [70] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_table,
  },
  [71] = {
    [0] = anon_alias_sym_partition_key,
  },
  [72] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_trigger,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
  },
  [73] = {
    [0] = anon_alias_sym_partition_key,
    [1] = anon_alias_sym_partition_key,
  },
  [74] = {
    [0] = anon_alias_sym_clustering_key,
  },
  [75] = {
    [5] = anon_alias_sym_keyspace,
  },
  [76] = {
    [2] = anon_alias_sym_function,
    [9] = anon_alias_sym_language,
  },
  [77] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_type,
    [9] = anon_alias_sym_column,
    [10] = anon_alias_sym_data_type,
  },
  [78] = {
    [4] = anon_alias_sym_column,
  },
  [79] = {
    [0] = anon_alias_sym_clustering_key,
    [1] = anon_alias_sym_clustering_key,
  },
  [80] = {
    [2] = anon_alias_sym_function,
    [10] = anon_alias_sym_language,
  },
  [81] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [82] = {
    [2] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [83] = {
    [2] = anon_alias_sym_aggregate,
    [7] = anon_alias_sym_sfunc,
    [11] = anon_alias_sym_finalfunc,
  },
  [84] = {
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [85] = {
    [5] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [86] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [87] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_table,
  },
  [88] = {
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [89] = {
    [5] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [90] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [91] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [92] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [93] = {
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [94] = {
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [95] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [96] = {
    [5] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [97] = {
    [5] = anon_alias_sym_aggregate,
    [10] = anon_alias_sym_sfunc,
    [14] = anon_alias_sym_finalfunc,
  },
  [98] = {
    [0] = anon_alias_sym_hash_key,
  },
  [99] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
    [10] = anon_alias_sym_table,
  },
  [100] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
  },
  [101] = {
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [102] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [103] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [104] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_table,
  },
  [105] = {
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [106] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [107] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
    [11] = anon_alias_sym_sfunc,
    [15] = anon_alias_sym_finalfunc,
  },
  [108] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [109] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [110] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
    [10] = anon_alias_sym_keyspace,
    [12] = anon_alias_sym_table,
  },
  [111] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [112] = {
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [113] = {
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [114] = {
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_materialized_view,
    [13] = anon_alias_sym_table,
  },
  [115] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_keyspace,
    [13] = anon_alias_sym_table,
  },
  [116] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [17] = anon_alias_sym_language,
  },
  [117] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [18] = anon_alias_sym_language,
  },
  [118] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_aggregate,
    [14] = anon_alias_sym_sfunc,
    [18] = anon_alias_sym_finalfunc,
  },
  [119] = {
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
  [135] = 113,
  [136] = 136,
  [137] = 103,
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
          lookahead == 'b') ADVANCE(43);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(35);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(44);
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
          lookahead == 'p') ADVANCE(46);
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
      if (lookahead == '0') ADVANCE(577);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(585);
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
      if (lookahead == '\'') ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(575);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(575);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(570);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
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
          lookahead == 'a') ADVANCE(197);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(385);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
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
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(253);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(385);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(339);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(357);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
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
    case 44:
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
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(418);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 47:
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
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(387);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
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
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
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
          lookahead == 'e') ADVANCE(51);
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
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(433);
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
          lookahead == 'l') ADVANCE(572);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(715);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
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
          lookahead == 'n') ADVANCE(53);
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
          lookahead == 'm') ADVANCE(52);
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
          lookahead == 'n') ADVANCE(48);
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
          lookahead == 't') ADVANCE(49);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      END_STATE();
    case 512:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      END_STATE();
    case 513:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      END_STATE();
    case 514:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(571);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(574);
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
      if (lookahead == '0') ADVANCE(577);
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
          lookahead == 'f') ADVANCE(45);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(585);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(571);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__string_literal);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '.') ADVANCE(512);
      if (lookahead == 'X') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(516);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(519);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(521);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '.') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__code_block);
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
          lookahead == 'l') ADVANCE(573);
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
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 550},
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
  [83] = {.lex_state = 552},
  [84] = {.lex_state = 550},
  [85] = {.lex_state = 550},
  [86] = {.lex_state = 550},
  [87] = {.lex_state = 550},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 550},
  [90] = {.lex_state = 550},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 551},
  [93] = {.lex_state = 550},
  [94] = {.lex_state = 550},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 550},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 550},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 550},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
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
  [118] = {.lex_state = 550},
  [119] = {.lex_state = 550},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 550},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 550},
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
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 550},
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
  [180] = {.lex_state = 550},
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
  [214] = {.lex_state = 550},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 550},
  [227] = {.lex_state = 550},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 550},
  [232] = {.lex_state = 550},
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
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 550},
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
  [426] = {.lex_state = 1},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 550},
  [429] = {.lex_state = 550},
  [430] = {.lex_state = 550},
  [431] = {.lex_state = 550},
  [432] = {.lex_state = 550},
  [433] = {.lex_state = 550},
  [434] = {.lex_state = 550},
  [435] = {.lex_state = 550},
  [436] = {.lex_state = 550},
  [437] = {.lex_state = 1},
  [438] = {.lex_state = 1},
  [439] = {.lex_state = 1},
  [440] = {.lex_state = 41},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 550},
  [443] = {.lex_state = 550},
  [444] = {.lex_state = 42},
  [445] = {.lex_state = 1},
  [446] = {.lex_state = 1},
  [447] = {.lex_state = 41},
  [448] = {.lex_state = 41},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 550},
  [451] = {.lex_state = 550},
  [452] = {.lex_state = 41},
  [453] = {.lex_state = 550},
  [454] = {.lex_state = 550},
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
  [466] = {.lex_state = 18},
  [467] = {.lex_state = 18},
  [468] = {.lex_state = 18},
  [469] = {.lex_state = 18},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 15},
  [472] = {.lex_state = 15},
  [473] = {.lex_state = 550},
  [474] = {.lex_state = 11},
  [475] = {.lex_state = 14},
  [476] = {.lex_state = 15},
  [477] = {.lex_state = 14},
  [478] = {.lex_state = 15},
  [479] = {.lex_state = 14},
  [480] = {.lex_state = 10},
  [481] = {.lex_state = 15},
  [482] = {.lex_state = 15},
  [483] = {.lex_state = 15},
  [484] = {.lex_state = 15},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 550},
  [487] = {.lex_state = 41},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 10},
  [490] = {.lex_state = 10},
  [491] = {.lex_state = 13},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 12},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 19},
  [499] = {.lex_state = 19},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 550},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 24},
  [505] = {.lex_state = 10},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 10},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 10},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 17},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 17},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 10},
  [526] = {.lex_state = 17},
  [527] = {.lex_state = 26},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 17},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 21},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 17},
  [534] = {.lex_state = 17},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 17},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 17},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 551},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 17},
  [549] = {.lex_state = 21},
  [550] = {.lex_state = 17},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 17},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 10},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 10},
  [560] = {.lex_state = 17},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 17},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 17},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 17},
  [570] = {.lex_state = 17},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 10},
  [573] = {.lex_state = 10},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 551},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 10},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 10},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 10},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 16},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 10},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 10},
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
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 20},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 20},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 10},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 10},
  [655] = {.lex_state = 10},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 25},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 10},
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
  [684] = {.lex_state = 20},
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
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 10},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 10},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 550},
  [722] = {.lex_state = 20},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 10},
  [725] = {.lex_state = 10},
  [726] = {.lex_state = 10},
  [727] = {.lex_state = 10},
  [728] = {.lex_state = 20},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 10},
  [732] = {.lex_state = 10},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 10},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 10},
  [743] = {.lex_state = 10},
  [744] = {.lex_state = 10},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 10},
  [755] = {.lex_state = 10},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 10},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 10},
  [762] = {.lex_state = 10},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 10},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 10},
  [768] = {.lex_state = 10},
  [769] = {.lex_state = 10},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 10},
  [773] = {.lex_state = 10},
  [774] = {.lex_state = 22},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 10},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 10},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 20},
  [788] = {.lex_state = 20},
  [789] = {.lex_state = 27},
  [790] = {.lex_state = 10},
  [791] = {.lex_state = 10},
  [792] = {.lex_state = 27},
  [793] = {.lex_state = 27},
  [794] = {.lex_state = 10},
  [795] = {.lex_state = 10},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 10},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 20},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 10},
  [810] = {.lex_state = 10},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 20},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 10},
  [816] = {.lex_state = 10},
  [817] = {.lex_state = 10},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 10},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 551},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 20},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 10},
  [833] = {.lex_state = 20},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 20},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 10},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 10},
  [843] = {.lex_state = 10},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 20},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 20},
  [848] = {.lex_state = 10},
  [849] = {.lex_state = 20},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 20},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 20},
  [856] = {.lex_state = 10},
  [857] = {.lex_state = 10},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 20},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 10},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 20},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 10},
  [867] = {.lex_state = 551},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 20},
  [872] = {.lex_state = 550},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 10},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 551},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 10},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 10},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 10},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 10},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 10},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 10},
  [906] = {.lex_state = 10},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 10},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 10},
  [915] = {.lex_state = 550},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 10},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 10},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 10},
  [927] = {.lex_state = 10},
  [928] = {.lex_state = 550},
  [929] = {.lex_state = 10},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 10},
  [932] = {.lex_state = 10},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 10},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 10},
  [937] = {.lex_state = 10},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 10},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 10},
  [943] = {.lex_state = 551},
  [944] = {.lex_state = 10},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 10},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 13},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 10},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 10},
  [963] = {.lex_state = 0},
  [964] = {.lex_state = 0},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 10},
  [967] = {.lex_state = 0},
  [968] = {.lex_state = 0},
  [969] = {.lex_state = 0},
  [970] = {.lex_state = 0},
  [971] = {.lex_state = 10},
  [972] = {.lex_state = 0},
  [973] = {.lex_state = 10},
  [974] = {.lex_state = 0},
  [975] = {.lex_state = 10},
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 0},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 10},
  [980] = {.lex_state = 0},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 10},
  [983] = {.lex_state = 10},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 0},
  [986] = {.lex_state = 10},
  [987] = {.lex_state = 0},
  [988] = {.lex_state = 0},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 10},
  [992] = {.lex_state = 10},
  [993] = {.lex_state = 10},
  [994] = {.lex_state = 0},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 10},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 10},
  [999] = {.lex_state = 0},
  [1000] = {.lex_state = 0},
  [1001] = {.lex_state = 0},
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
  [1012] = {.lex_state = 10},
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 0},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 10},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 10},
  [1020] = {.lex_state = 0},
  [1021] = {.lex_state = 0},
  [1022] = {.lex_state = 10},
  [1023] = {.lex_state = 0},
  [1024] = {.lex_state = 10},
  [1025] = {.lex_state = 10},
  [1026] = {.lex_state = 0},
  [1027] = {.lex_state = 0},
  [1028] = {.lex_state = 10},
  [1029] = {.lex_state = 10},
  [1030] = {.lex_state = 10},
  [1031] = {.lex_state = 10},
  [1032] = {.lex_state = 0},
  [1033] = {.lex_state = 10},
  [1034] = {.lex_state = 0},
  [1035] = {.lex_state = 10},
  [1036] = {.lex_state = 0},
  [1037] = {.lex_state = 0},
  [1038] = {.lex_state = 10},
  [1039] = {.lex_state = 0},
  [1040] = {.lex_state = 0},
  [1041] = {.lex_state = 10},
  [1042] = {.lex_state = 0},
  [1043] = {.lex_state = 0},
  [1044] = {.lex_state = 0},
  [1045] = {.lex_state = 10},
  [1046] = {.lex_state = 0},
  [1047] = {.lex_state = 0},
  [1048] = {.lex_state = 0},
  [1049] = {.lex_state = 0},
  [1050] = {.lex_state = 10},
  [1051] = {.lex_state = 10},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 0},
  [1054] = {.lex_state = 0},
  [1055] = {.lex_state = 10},
  [1056] = {.lex_state = 0},
  [1057] = {.lex_state = 10},
  [1058] = {.lex_state = 0},
  [1059] = {.lex_state = 0},
  [1060] = {.lex_state = 0},
  [1061] = {.lex_state = 0},
  [1062] = {.lex_state = 0},
  [1063] = {.lex_state = 0},
  [1064] = {.lex_state = 10},
  [1065] = {.lex_state = 10},
  [1066] = {.lex_state = 10},
  [1067] = {.lex_state = 0},
  [1068] = {.lex_state = 10},
  [1069] = {.lex_state = 10},
  [1070] = {.lex_state = 10},
  [1071] = {.lex_state = 0},
  [1072] = {.lex_state = 41},
  [1073] = {.lex_state = 10},
  [1074] = {.lex_state = 0},
  [1075] = {.lex_state = 0},
  [1076] = {.lex_state = 10},
  [1077] = {.lex_state = 0},
  [1078] = {.lex_state = 10},
  [1079] = {.lex_state = 0},
  [1080] = {.lex_state = 10},
  [1081] = {.lex_state = 0},
  [1082] = {.lex_state = 10},
  [1083] = {.lex_state = 10},
  [1084] = {.lex_state = 10},
  [1085] = {.lex_state = 10},
  [1086] = {.lex_state = 0},
  [1087] = {.lex_state = 0},
  [1088] = {.lex_state = 10},
  [1089] = {.lex_state = 10},
  [1090] = {.lex_state = 0},
  [1091] = {.lex_state = 10},
  [1092] = {.lex_state = 0},
  [1093] = {.lex_state = 0},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 10},
  [1096] = {.lex_state = 0},
  [1097] = {.lex_state = 10},
  [1098] = {.lex_state = 0},
  [1099] = {.lex_state = 10},
  [1100] = {.lex_state = 10},
  [1101] = {.lex_state = 0},
  [1102] = {.lex_state = 10},
  [1103] = {.lex_state = 0},
  [1104] = {.lex_state = 10},
  [1105] = {.lex_state = 0},
  [1106] = {.lex_state = 0},
  [1107] = {.lex_state = 0},
  [1108] = {.lex_state = 0},
  [1109] = {.lex_state = 10},
  [1110] = {.lex_state = 10},
  [1111] = {.lex_state = 0},
  [1112] = {.lex_state = 551},
  [1113] = {.lex_state = 0},
  [1114] = {.lex_state = 10},
  [1115] = {.lex_state = 10},
  [1116] = {.lex_state = 0},
  [1117] = {.lex_state = 0},
  [1118] = {.lex_state = 0},
  [1119] = {.lex_state = 10},
  [1120] = {.lex_state = 0},
  [1121] = {.lex_state = 0},
  [1122] = {.lex_state = 0},
  [1123] = {.lex_state = 10},
  [1124] = {.lex_state = 0},
  [1125] = {.lex_state = 10},
  [1126] = {.lex_state = 10},
  [1127] = {.lex_state = 0},
  [1128] = {.lex_state = 0},
  [1129] = {.lex_state = 0},
  [1130] = {.lex_state = 0},
  [1131] = {.lex_state = 0},
  [1132] = {.lex_state = 0},
  [1133] = {.lex_state = 0},
  [1134] = {.lex_state = 10},
  [1135] = {.lex_state = 0},
  [1136] = {.lex_state = 0},
  [1137] = {.lex_state = 10},
  [1138] = {.lex_state = 0},
  [1139] = {.lex_state = 10},
  [1140] = {.lex_state = 0},
  [1141] = {.lex_state = 0},
  [1142] = {.lex_state = 0},
  [1143] = {.lex_state = 0},
  [1144] = {.lex_state = 0},
  [1145] = {.lex_state = 0},
  [1146] = {.lex_state = 10},
  [1147] = {.lex_state = 0},
  [1148] = {.lex_state = 0},
  [1149] = {.lex_state = 0},
  [1150] = {.lex_state = 0},
  [1151] = {.lex_state = 0},
  [1152] = {.lex_state = 0},
  [1153] = {.lex_state = 10},
  [1154] = {.lex_state = 0},
  [1155] = {.lex_state = 0},
  [1156] = {.lex_state = 0},
  [1157] = {.lex_state = 10},
  [1158] = {.lex_state = 10},
  [1159] = {.lex_state = 0},
  [1160] = {.lex_state = 0},
  [1161] = {.lex_state = 0},
  [1162] = {.lex_state = 10},
  [1163] = {.lex_state = 0},
  [1164] = {.lex_state = 10},
  [1165] = {.lex_state = 10},
  [1166] = {.lex_state = 0},
  [1167] = {.lex_state = 0},
  [1168] = {.lex_state = 550},
  [1169] = {.lex_state = 550},
  [1170] = {.lex_state = 0},
  [1171] = {.lex_state = 0},
  [1172] = {.lex_state = 551},
  [1173] = {.lex_state = 0},
  [1174] = {.lex_state = 0},
  [1175] = {.lex_state = 10},
  [1176] = {.lex_state = 0},
  [1177] = {.lex_state = 0},
  [1178] = {.lex_state = 10},
  [1179] = {.lex_state = 0},
  [1180] = {.lex_state = 0},
  [1181] = {.lex_state = 0},
  [1182] = {.lex_state = 10},
  [1183] = {.lex_state = 0},
  [1184] = {.lex_state = 10},
  [1185] = {.lex_state = 0},
  [1186] = {.lex_state = 0},
  [1187] = {.lex_state = 10},
  [1188] = {.lex_state = 0},
  [1189] = {.lex_state = 0},
  [1190] = {.lex_state = 10},
  [1191] = {.lex_state = 10},
  [1192] = {.lex_state = 0},
  [1193] = {.lex_state = 0},
  [1194] = {.lex_state = 10},
  [1195] = {.lex_state = 10},
  [1196] = {.lex_state = 0},
  [1197] = {.lex_state = 10},
  [1198] = {.lex_state = 0},
  [1199] = {.lex_state = 0},
  [1200] = {.lex_state = 10},
  [1201] = {.lex_state = 0},
  [1202] = {.lex_state = 0},
  [1203] = {.lex_state = 0},
  [1204] = {.lex_state = 10},
  [1205] = {.lex_state = 10},
  [1206] = {.lex_state = 10},
  [1207] = {.lex_state = 551},
  [1208] = {.lex_state = 0},
  [1209] = {.lex_state = 13},
  [1210] = {.lex_state = 0},
  [1211] = {.lex_state = 0},
  [1212] = {.lex_state = 0},
  [1213] = {.lex_state = 550},
  [1214] = {.lex_state = 0},
  [1215] = {.lex_state = 0},
  [1216] = {.lex_state = 0},
  [1217] = {.lex_state = 0},
  [1218] = {.lex_state = 0},
  [1219] = {.lex_state = 10},
  [1220] = {.lex_state = 0},
  [1221] = {.lex_state = 0},
  [1222] = {.lex_state = 10},
  [1223] = {.lex_state = 0},
  [1224] = {.lex_state = 10},
  [1225] = {.lex_state = 0},
  [1226] = {.lex_state = 10},
  [1227] = {.lex_state = 0},
  [1228] = {.lex_state = 0},
  [1229] = {.lex_state = 0},
  [1230] = {.lex_state = 0},
  [1231] = {.lex_state = 10},
  [1232] = {.lex_state = 0},
  [1233] = {.lex_state = 0},
  [1234] = {.lex_state = 551},
  [1235] = {.lex_state = 0},
  [1236] = {.lex_state = 10},
  [1237] = {.lex_state = 0},
  [1238] = {.lex_state = 0},
  [1239] = {.lex_state = 0},
  [1240] = {.lex_state = 0},
  [1241] = {.lex_state = 0},
  [1242] = {.lex_state = 0},
  [1243] = {.lex_state = 0},
  [1244] = {.lex_state = 551},
  [1245] = {.lex_state = 0},
  [1246] = {.lex_state = 0},
  [1247] = {.lex_state = 0},
  [1248] = {.lex_state = 0},
  [1249] = {.lex_state = 0},
  [1250] = {.lex_state = 10},
  [1251] = {.lex_state = 10},
  [1252] = {.lex_state = 0},
  [1253] = {.lex_state = 0},
  [1254] = {.lex_state = 0},
  [1255] = {.lex_state = 550},
  [1256] = {.lex_state = 0},
  [1257] = {.lex_state = 0},
  [1258] = {.lex_state = 0},
  [1259] = {.lex_state = 0},
  [1260] = {.lex_state = 551},
  [1261] = {.lex_state = 0},
  [1262] = {.lex_state = 0},
  [1263] = {.lex_state = 10},
  [1264] = {.lex_state = 0},
  [1265] = {.lex_state = 0},
  [1266] = {.lex_state = 0},
  [1267] = {.lex_state = 10},
  [1268] = {.lex_state = 0},
  [1269] = {.lex_state = 0},
  [1270] = {.lex_state = 0},
  [1271] = {.lex_state = 0},
  [1272] = {.lex_state = 10},
  [1273] = {.lex_state = 0},
  [1274] = {.lex_state = 0},
  [1275] = {.lex_state = 0},
  [1276] = {.lex_state = 10},
  [1277] = {.lex_state = 10},
  [1278] = {.lex_state = 0},
  [1279] = {.lex_state = 0},
  [1280] = {.lex_state = 10},
  [1281] = {.lex_state = 10},
  [1282] = {.lex_state = 0},
  [1283] = {.lex_state = 10},
  [1284] = {.lex_state = 0},
  [1285] = {.lex_state = 0},
  [1286] = {.lex_state = 0},
  [1287] = {.lex_state = 10},
  [1288] = {.lex_state = 0},
  [1289] = {.lex_state = 0},
  [1290] = {.lex_state = 550},
  [1291] = {.lex_state = 0},
  [1292] = {.lex_state = 10},
  [1293] = {.lex_state = 550},
  [1294] = {.lex_state = 550},
  [1295] = {.lex_state = 0},
  [1296] = {.lex_state = 0},
  [1297] = {.lex_state = 0},
  [1298] = {.lex_state = 0},
  [1299] = {.lex_state = 0},
  [1300] = {.lex_state = 10},
  [1301] = {.lex_state = 0},
  [1302] = {.lex_state = 0},
  [1303] = {.lex_state = 0},
  [1304] = {.lex_state = 0},
  [1305] = {.lex_state = 10},
  [1306] = {.lex_state = 0},
  [1307] = {.lex_state = 0},
  [1308] = {.lex_state = 0},
  [1309] = {.lex_state = 0},
  [1310] = {.lex_state = 0},
  [1311] = {.lex_state = 10},
  [1312] = {.lex_state = 551},
  [1313] = {.lex_state = 10},
  [1314] = {.lex_state = 10},
  [1315] = {.lex_state = 0},
  [1316] = {.lex_state = 0},
  [1317] = {.lex_state = 0},
  [1318] = {.lex_state = 551},
  [1319] = {.lex_state = 0},
  [1320] = {.lex_state = 0},
  [1321] = {.lex_state = 13},
  [1322] = {.lex_state = 10},
  [1323] = {.lex_state = 0},
  [1324] = {.lex_state = 0},
  [1325] = {.lex_state = 10},
  [1326] = {.lex_state = 0},
  [1327] = {.lex_state = 0},
  [1328] = {.lex_state = 0},
  [1329] = {.lex_state = 0},
  [1330] = {.lex_state = 0},
  [1331] = {.lex_state = 0},
  [1332] = {.lex_state = 0},
  [1333] = {.lex_state = 0},
  [1334] = {.lex_state = 0},
  [1335] = {.lex_state = 10},
  [1336] = {.lex_state = 0},
  [1337] = {.lex_state = 10},
  [1338] = {.lex_state = 0},
  [1339] = {.lex_state = 10},
  [1340] = {.lex_state = 0},
  [1341] = {.lex_state = 0},
  [1342] = {.lex_state = 0},
  [1343] = {.lex_state = 0},
  [1344] = {.lex_state = 0},
  [1345] = {.lex_state = 0},
  [1346] = {.lex_state = 0},
  [1347] = {.lex_state = 551},
  [1348] = {.lex_state = 13},
  [1349] = {.lex_state = 0},
  [1350] = {.lex_state = 0},
  [1351] = {.lex_state = 0},
  [1352] = {.lex_state = 550},
  [1353] = {.lex_state = 0},
  [1354] = {.lex_state = 10},
  [1355] = {.lex_state = 0},
  [1356] = {.lex_state = 0},
  [1357] = {.lex_state = 0},
  [1358] = {.lex_state = 0},
  [1359] = {.lex_state = 0},
  [1360] = {.lex_state = 0},
  [1361] = {.lex_state = 0},
  [1362] = {.lex_state = 10},
  [1363] = {.lex_state = 0},
  [1364] = {.lex_state = 0},
  [1365] = {.lex_state = 0},
  [1366] = {.lex_state = 10},
  [1367] = {.lex_state = 0},
  [1368] = {.lex_state = 0},
  [1369] = {.lex_state = 0},
  [1370] = {.lex_state = 0},
  [1371] = {.lex_state = 0},
  [1372] = {.lex_state = 0},
  [1373] = {.lex_state = 0},
  [1374] = {.lex_state = 10},
  [1375] = {.lex_state = 0},
  [1376] = {.lex_state = 10},
  [1377] = {.lex_state = 10},
  [1378] = {.lex_state = 10},
  [1379] = {.lex_state = 0},
  [1380] = {.lex_state = 0},
  [1381] = {.lex_state = 0},
  [1382] = {.lex_state = 0},
  [1383] = {.lex_state = 551},
  [1384] = {.lex_state = 0},
  [1385] = {.lex_state = 10},
  [1386] = {.lex_state = 0},
  [1387] = {.lex_state = 10},
  [1388] = {.lex_state = 0},
  [1389] = {.lex_state = 0},
  [1390] = {.lex_state = 0},
  [1391] = {.lex_state = 0},
  [1392] = {.lex_state = 0},
  [1393] = {.lex_state = 0},
  [1394] = {.lex_state = 10},
  [1395] = {.lex_state = 0},
  [1396] = {.lex_state = 0},
  [1397] = {.lex_state = 10},
  [1398] = {.lex_state = 0},
  [1399] = {.lex_state = 10},
  [1400] = {.lex_state = 0},
  [1401] = {.lex_state = 0},
  [1402] = {.lex_state = 0},
  [1403] = {.lex_state = 0},
  [1404] = {.lex_state = 0},
  [1405] = {.lex_state = 10},
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
    [aux_sym_constant_token2] = ACTIONS(1),
    [sym__string_literal] = ACTIONS(1),
    [sym__boolean_literal] = ACTIONS(1),
    [sym__code_block] = ACTIONS(1),
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
    [sym_source_file] = STATE(1127),
    [sym__statement] = STATE(3),
    [sym_select_statement] = STATE(301),
    [sym_delete_statement] = STATE(301),
    [sym_begin_batch] = STATE(620),
    [sym_insert_statement] = STATE(301),
    [sym_truncate] = STATE(301),
    [sym_create_index] = STATE(301),
    [sym_drop_index] = STATE(301),
    [sym_update] = STATE(301),
    [sym_use] = STATE(301),
    [sym_grant] = STATE(301),
    [sym_revoke] = STATE(301),
    [sym_list_roles] = STATE(301),
    [sym_list_permissions] = STATE(301),
    [sym_drop_aggregate] = STATE(301),
    [sym_drop_materialized_view] = STATE(301),
    [sym_drop_function] = STATE(301),
    [sym_drop_keyspace] = STATE(301),
    [sym_drop_role] = STATE(301),
    [sym_drop_table] = STATE(301),
    [sym_drop_trigger] = STATE(301),
    [sym_drop_type] = STATE(301),
    [sym_drop_user] = STATE(301),
    [sym_create_aggregate] = STATE(301),
    [sym_create_materialized_view] = STATE(301),
    [sym_create_function] = STATE(301),
    [sym_create_keyspace] = STATE(301),
    [sym_create_role] = STATE(301),
    [sym_create_table] = STATE(301),
    [sym_create_trigger] = STATE(301),
    [sym_create_type] = STATE(301),
    [sym_create_user] = STATE(301),
    [sym_alter_materialized_view] = STATE(301),
    [sym_alter_keyspace] = STATE(301),
    [sym_alter_role] = STATE(301),
    [sym_alter_table] = STATE(301),
    [sym_alter_type] = STATE(301),
    [sym_alter_user] = STATE(301),
    [sym_apply_batch] = STATE(301),
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
    STATE(620), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(301), 37,
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
    STATE(620), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(301), 37,
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
  [289] = 3,
    STATE(68), 1,
      sym_data_type_name,
    STATE(243), 1,
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
    STATE(1264), 1,
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
  [394] = 3,
    STATE(68), 1,
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
  [429] = 3,
    STATE(68), 1,
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
  [464] = 3,
    STATE(68), 1,
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
  [499] = 3,
    STATE(68), 1,
      sym_data_type_name,
    STATE(1227), 1,
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
    STATE(1223), 1,
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
    STATE(1196), 1,
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
    STATE(1183), 1,
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
  [674] = 3,
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
  [709] = 3,
    STATE(68), 1,
      sym_data_type_name,
    STATE(1154), 1,
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
  [779] = 3,
    STATE(68), 1,
      sym_data_type_name,
    STATE(665), 1,
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
    STATE(873), 1,
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
    STATE(157), 1,
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
    STATE(1135), 1,
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
  [954] = 3,
    STATE(68), 1,
      sym_data_type_name,
    STATE(910), 1,
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
    STATE(1105), 1,
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
  [1059] = 3,
    STATE(68), 1,
      sym_data_type_name,
    STATE(918), 1,
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
    STATE(1074), 1,
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
    STATE(599), 1,
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
    STATE(1046), 1,
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
  [1234] = 3,
    STATE(68), 1,
      sym_data_type_name,
    STATE(350), 1,
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
    STATE(753), 1,
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
    STATE(552), 1,
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
  [1374] = 3,
    STATE(68), 1,
      sym_data_type_name,
    STATE(1005), 1,
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
    STATE(1340), 1,
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
    STATE(988), 1,
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
    STATE(985), 1,
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
  [1549] = 3,
    STATE(68), 1,
      sym_data_type_name,
    STATE(980), 1,
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
    STATE(974), 1,
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
    STATE(1023), 1,
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
  [1689] = 3,
    STATE(68), 1,
      sym_data_type_name,
    STATE(685), 1,
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
    STATE(1346), 1,
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
    STATE(1353), 1,
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
    STATE(893), 1,
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
    STATE(921), 1,
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
  [1899] = 3,
    STATE(68), 1,
      sym_data_type_name,
    STATE(1271), 1,
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
  [1969] = 3,
    STATE(68), 1,
      sym_data_type_name,
    STATE(854), 1,
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
    STATE(633), 1,
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
    STATE(860), 1,
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
    STATE(662), 1,
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
  [2135] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(92), 22,
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
  [2166] = 3,
    ACTIONS(94), 1,
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
  [2197] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2224] = 3,
    ACTIONS(94), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2255] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(60), 1,
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
  [2286] = 1,
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
  [2313] = 1,
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
  [2340] = 1,
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
  [2367] = 3,
    ACTIONS(108), 1,
      anon_sym_LT,
    STATE(88), 1,
      sym_data_type_definition,
    ACTIONS(106), 21,
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
  [2397] = 1,
    ACTIONS(110), 23,
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
  [2423] = 8,
    ACTIONS(114), 1,
      aux_sym_select_statement_token4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    STATE(87), 1,
      sym_where_spec,
    STATE(121), 1,
      sym_order_spec,
    STATE(236), 1,
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
  [2463] = 8,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    ACTIONS(124), 1,
      aux_sym_select_statement_token4,
    STATE(93), 1,
      sym_where_spec,
    STATE(105), 1,
      sym_order_spec,
    STATE(250), 1,
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
  [2503] = 2,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(126), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_LPAREN,
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
  [2531] = 8,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    ACTIONS(132), 1,
      aux_sym_select_statement_token4,
    STATE(94), 1,
      sym_where_spec,
    STATE(130), 1,
      sym_order_spec,
    STATE(226), 1,
      sym_limit_spec,
    ACTIONS(130), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2571] = 3,
    ACTIONS(136), 1,
      aux_sym_relation_elements_token1,
    STATE(86), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(134), 20,
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
  [2600] = 1,
    ACTIONS(138), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_LPAREN,
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
  [2625] = 1,
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
  [2650] = 1,
    ACTIONS(142), 22,
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
  [2675] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2700] = 1,
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
  [2725] = 1,
    ACTIONS(146), 22,
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
  [2750] = 1,
    ACTIONS(92), 22,
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
  [2775] = 1,
    ACTIONS(148), 22,
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
  [2800] = 8,
    ACTIONS(154), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(156), 1,
      sym_object_name,
    STATE(103), 1,
      sym_table_option_item,
    STATE(186), 1,
      sym_table_options,
    STATE(333), 1,
      sym_clustering_order,
    STATE(1014), 1,
      sym_table_option_name,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(152), 14,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2839] = 1,
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
  [2864] = 3,
    ACTIONS(136), 1,
      aux_sym_relation_elements_token1,
    STATE(74), 1,
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
  [2893] = 3,
    ACTIONS(164), 1,
      aux_sym_relation_elements_token1,
    STATE(86), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(162), 20,
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
  [2922] = 6,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    ACTIONS(124), 1,
      aux_sym_select_statement_token4,
    STATE(105), 1,
      sym_order_spec,
    STATE(250), 1,
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
  [2956] = 1,
    ACTIONS(167), 21,
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
  [2980] = 1,
    ACTIONS(169), 21,
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
  [3004] = 1,
    ACTIONS(162), 21,
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
  [3028] = 1,
    ACTIONS(171), 21,
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
  [3052] = 3,
    STATE(166), 1,
      sym_order_direction,
    ACTIONS(175), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(173), 18,
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
  [3080] = 6,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    ACTIONS(179), 1,
      aux_sym_select_statement_token4,
    STATE(118), 1,
      sym_order_spec,
    STATE(231), 1,
      sym_limit_spec,
    ACTIONS(177), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3114] = 6,
    ACTIONS(114), 1,
      aux_sym_select_statement_token4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    STATE(121), 1,
      sym_order_spec,
    STATE(236), 1,
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
  [3148] = 1,
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
  [3172] = 1,
    ACTIONS(183), 20,
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
  [3195] = 3,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(185), 18,
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
  [3222] = 2,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(190), 19,
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
  [3247] = 2,
    ACTIONS(196), 1,
      aux_sym_relation_element_token1,
    ACTIONS(194), 19,
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
  [3272] = 2,
    ACTIONS(200), 1,
      anon_sym_DOT,
    ACTIONS(198), 19,
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
  [3297] = 2,
    ACTIONS(204), 1,
      anon_sym_DOT,
    ACTIONS(202), 19,
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
  [3322] = 3,
    ACTIONS(208), 1,
      aux_sym_relation_elements_token1,
    STATE(102), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(206), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3348] = 3,
    ACTIONS(213), 1,
      aux_sym_relation_elements_token1,
    STATE(113), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(211), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3374] = 1,
    ACTIONS(215), 19,
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
  [3396] = 4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(179), 1,
      aux_sym_select_statement_token4,
    STATE(231), 1,
      sym_limit_spec,
    ACTIONS(177), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3424] = 1,
    ACTIONS(217), 19,
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
  [3446] = 1,
    ACTIONS(194), 19,
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
  [3468] = 4,
    ACTIONS(221), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(400), 1,
      sym_using_ttl_timestamp,
    ACTIONS(219), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3496] = 4,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(227), 1,
      aux_sym_delete_statement_token2,
    STATE(410), 1,
      sym_using_ttl_timestamp,
    ACTIONS(225), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3524] = 3,
    STATE(346), 1,
      sym_user_super_user,
    ACTIONS(231), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(229), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3550] = 3,
    STATE(416), 1,
      sym_user_super_user,
    ACTIONS(231), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(233), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(235), 19,
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
  [3598] = 3,
    ACTIONS(213), 1,
      aux_sym_relation_elements_token1,
    STATE(102), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(237), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3624] = 1,
    ACTIONS(239), 19,
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
  [3646] = 4,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(243), 1,
      aux_sym_delete_statement_token2,
    STATE(344), 1,
      sym_using_ttl_timestamp,
    ACTIONS(241), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3674] = 4,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(247), 1,
      aux_sym_delete_statement_token2,
    STATE(316), 1,
      sym_using_ttl_timestamp,
    ACTIONS(245), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3702] = 1,
    ACTIONS(249), 19,
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
  [3724] = 4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(253), 1,
      aux_sym_select_statement_token4,
    STATE(214), 1,
      sym_limit_spec,
    ACTIONS(251), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3752] = 1,
    ACTIONS(255), 19,
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
  [3774] = 4,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(259), 1,
      aux_sym_delete_statement_token2,
    STATE(339), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3802] = 4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(124), 1,
      aux_sym_select_statement_token4,
    STATE(250), 1,
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
  [3830] = 1,
    ACTIONS(261), 19,
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
  [3852] = 1,
    ACTIONS(263), 19,
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
  [3874] = 1,
    ACTIONS(265), 19,
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
  [3896] = 4,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(269), 1,
      aux_sym_delete_statement_token2,
    STATE(312), 1,
      sym_using_ttl_timestamp,
    ACTIONS(267), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3924] = 4,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(273), 1,
      aux_sym_delete_statement_token2,
    STATE(326), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3952] = 2,
    ACTIONS(277), 1,
      aux_sym_priviledge_token2,
    ACTIONS(275), 18,
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
  [3976] = 3,
    STATE(292), 1,
      sym_user_super_user,
    ACTIONS(231), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
  [4002] = 1,
    ACTIONS(281), 19,
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
  [4024] = 4,
    ACTIONS(114), 1,
      aux_sym_select_statement_token4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    STATE(236), 1,
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
  [4052] = 4,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(285), 1,
      aux_sym_delete_statement_token2,
    STATE(277), 1,
      sym_using_ttl_timestamp,
    ACTIONS(283), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4080] = 1,
    ACTIONS(287), 19,
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
  [4102] = 1,
    ACTIONS(206), 18,
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
  [4123] = 1,
    ACTIONS(289), 18,
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
  [4144] = 2,
    STATE(102), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(237), 17,
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
  [4167] = 2,
    ACTIONS(293), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(291), 17,
      ts_builtin_sym_end,
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
  [4190] = 2,
    STATE(135), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(211), 17,
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
  [4213] = 3,
    ACTIONS(297), 1,
      aux_sym_relation_elements_token1,
    STATE(169), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4238] = 3,
    ACTIONS(301), 1,
      aux_sym_create_materialized_view_token2,
    STATE(390), 1,
      sym_role_with,
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
  [4263] = 3,
    ACTIONS(305), 1,
      aux_sym_create_materialized_view_token2,
    STATE(395), 1,
      sym_with_element,
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
  [4288] = 2,
    ACTIONS(307), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(291), 17,
      ts_builtin_sym_end,
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
  [4311] = 3,
    ACTIONS(311), 1,
      aux_sym_delete_statement_token2,
    STATE(291), 1,
      sym_if_spec,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4336] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(313), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4361] = 1,
    ACTIONS(317), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4382] = 3,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(287), 1,
      sym_using_ttl_timestamp,
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
  [4407] = 3,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(269), 1,
      sym_using_ttl_timestamp,
    ACTIONS(321), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4432] = 3,
    ACTIONS(305), 1,
      aux_sym_create_materialized_view_token2,
    STATE(295), 1,
      sym_with_element,
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
  [4457] = 1,
    ACTIONS(325), 18,
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
  [4478] = 3,
    ACTIONS(329), 1,
      aux_sym_delete_statement_token2,
    STATE(258), 1,
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
  [4503] = 3,
    ACTIONS(333), 1,
      aux_sym_delete_statement_token2,
    STATE(257), 1,
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
  [4528] = 3,
    ACTIONS(337), 1,
      aux_sym_list_roles_token2,
    ACTIONS(339), 1,
      aux_sym_list_roles_token3,
    ACTIONS(335), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4553] = 3,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(345), 1,
      aux_sym_create_materialized_view_token2,
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
  [4578] = 3,
    ACTIONS(301), 1,
      aux_sym_create_materialized_view_token2,
    STATE(274), 1,
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
  [4603] = 3,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(259), 1,
      sym_using_ttl_timestamp,
    ACTIONS(349), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4628] = 3,
    ACTIONS(353), 1,
      aux_sym_relation_elements_token1,
    STATE(160), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [4653] = 3,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(355), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4678] = 3,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(359), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4703] = 3,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(304), 1,
      sym_using_ttl_timestamp,
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
  [4728] = 3,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4753] = 3,
    ACTIONS(353), 1,
      aux_sym_relation_elements_token1,
    STATE(194), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [4778] = 3,
    ACTIONS(371), 1,
      aux_sym_delete_statement_token2,
    STATE(401), 1,
      sym_if_spec,
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
  [4803] = 3,
    ACTIONS(375), 1,
      aux_sym_delete_statement_token2,
    STATE(260), 1,
      sym_if_spec,
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
  [4828] = 3,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    STATE(156), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4853] = 3,
    ACTIONS(381), 1,
      aux_sym_delete_statement_token2,
    STATE(343), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4878] = 3,
    ACTIONS(305), 1,
      aux_sym_create_materialized_view_token2,
    STATE(264), 1,
      sym_with_element,
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
  [4903] = 1,
    ACTIONS(385), 18,
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
  [4924] = 3,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(265), 1,
      sym_using_ttl_timestamp,
    ACTIONS(387), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4949] = 3,
    ACTIONS(391), 1,
      aux_sym_delete_statement_token2,
    STATE(268), 1,
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
  [4974] = 3,
    ACTIONS(395), 1,
      aux_sym_relation_elements_token1,
    STATE(169), 1,
      aux_sym_if_condition_list_repeat1,
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
  [4999] = 3,
    ACTIONS(400), 1,
      aux_sym_delete_statement_token2,
    STATE(270), 1,
      sym_if_spec,
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
  [5024] = 1,
    ACTIONS(402), 18,
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
  [5045] = 3,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(273), 1,
      sym_using_ttl_timestamp,
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
  [5070] = 3,
    ACTIONS(408), 1,
      aux_sym_delete_statement_token2,
    STATE(370), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5095] = 3,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(336), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5120] = 1,
    ACTIONS(412), 18,
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
  [5141] = 3,
    ACTIONS(297), 1,
      aux_sym_relation_elements_token1,
    STATE(138), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(414), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5166] = 3,
    ACTIONS(418), 1,
      aux_sym_delete_statement_token2,
    STATE(371), 1,
      sym_if_spec,
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
  [5191] = 3,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [5216] = 3,
    ACTIONS(427), 1,
      aux_sym_delete_statement_token2,
    STATE(288), 1,
      sym_if_spec,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5241] = 8,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      sym__decimal_literal,
    ACTIONS(435), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    STATE(711), 1,
      sym_expression,
    STATE(1389), 1,
      sym_expression_list,
    STATE(730), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [5276] = 1,
    ACTIONS(275), 18,
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
  [5297] = 3,
    ACTIONS(441), 1,
      aux_sym_delete_statement_token2,
    STATE(383), 1,
      sym_if_spec,
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
  [5322] = 1,
    ACTIONS(443), 18,
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
  [5343] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5364] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5385] = 3,
    ACTIONS(451), 1,
      aux_sym_clustering_order_token1,
    STATE(296), 1,
      sym_clustering_order,
    ACTIONS(449), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5410] = 3,
    ACTIONS(305), 1,
      aux_sym_create_materialized_view_token2,
    STATE(299), 1,
      sym_with_element,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5435] = 3,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(303), 1,
      sym_using_ttl_timestamp,
    ACTIONS(455), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5460] = 3,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_role_with_repeat1,
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
  [5485] = 3,
    ACTIONS(464), 1,
      aux_sym_create_index_token3,
    ACTIONS(466), 1,
      aux_sym_list_roles_token2,
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
  [5510] = 3,
    ACTIONS(470), 1,
      aux_sym_delete_statement_token2,
    STATE(313), 1,
      sym_if_spec,
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
  [5535] = 1,
    ACTIONS(472), 18,
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
  [5556] = 3,
    ACTIONS(476), 1,
      aux_sym_delete_statement_token2,
    STATE(307), 1,
      sym_if_spec,
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
  [5581] = 3,
    ACTIONS(480), 1,
      aux_sym_relation_elements_token1,
    STATE(194), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5606] = 1,
    ACTIONS(483), 18,
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
  [5627] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5648] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_role_with_repeat1,
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
  [5673] = 1,
    ACTIONS(489), 18,
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
  [5694] = 3,
    ACTIONS(301), 1,
      aux_sym_create_materialized_view_token2,
    STATE(337), 1,
      sym_role_with,
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
  [5719] = 3,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [5744] = 3,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5769] = 3,
    ACTIONS(499), 1,
      aux_sym_delete_statement_token2,
    STATE(324), 1,
      sym_if_spec,
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
  [5794] = 3,
    ACTIONS(503), 1,
      aux_sym_delete_statement_token2,
    STATE(321), 1,
      sym_if_spec,
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
  [5819] = 1,
    ACTIONS(505), 18,
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
  [5840] = 1,
    ACTIONS(507), 18,
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
  [5861] = 2,
    ACTIONS(511), 1,
      anon_sym_DOT,
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
  [5883] = 2,
    ACTIONS(515), 1,
      aux_sym_create_materialized_view_token2,
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
  [5905] = 2,
    ACTIONS(519), 1,
      anon_sym_DOT,
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
  [5927] = 1,
    ACTIONS(521), 17,
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
  [5947] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5969] = 1,
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
  [5989] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6011] = 2,
    ACTIONS(533), 1,
      anon_sym_DOT,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6033] = 2,
    ACTIONS(537), 1,
      aux_sym_select_statement_token4,
    ACTIONS(535), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6055] = 2,
    ACTIONS(541), 1,
      anon_sym_DOT,
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
  [6077] = 1,
    ACTIONS(457), 17,
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
  [6097] = 2,
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
  [6119] = 2,
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
  [6141] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6163] = 2,
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
  [6185] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6207] = 2,
    ACTIONS(565), 1,
      aux_sym_relation_elements_token1,
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
  [6229] = 1,
    ACTIONS(567), 17,
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
  [6249] = 2,
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
  [6271] = 2,
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
  [6293] = 2,
    ACTIONS(114), 1,
      aux_sym_select_statement_token4,
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
  [6315] = 7,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      sym__decimal_literal,
    ACTIONS(435), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    STATE(751), 1,
      sym_expression,
    STATE(730), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [6347] = 2,
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
  [6369] = 1,
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
  [6389] = 1,
    ACTIONS(581), 17,
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
  [6409] = 2,
    ACTIONS(253), 1,
      aux_sym_select_statement_token4,
    ACTIONS(251), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6431] = 1,
    ACTIONS(583), 17,
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
  [6451] = 1,
    ACTIONS(585), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token2,
      aux_sym_apply_batch_token1,
  [6471] = 2,
    ACTIONS(589), 1,
      aux_sym_relation_elements_token1,
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
  [6493] = 2,
    ACTIONS(593), 1,
      aux_sym_relation_elements_token1,
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
  [6515] = 2,
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
  [6537] = 2,
    ACTIONS(597), 1,
      anon_sym_DOT,
    ACTIONS(595), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6559] = 2,
    ACTIONS(601), 1,
      aux_sym_create_materialized_view_token2,
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
  [6581] = 2,
    ACTIONS(605), 1,
      aux_sym_list_roles_token2,
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
  [6603] = 2,
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
  [6625] = 2,
    ACTIONS(613), 1,
      aux_sym_list_roles_token3,
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
  [6647] = 1,
    ACTIONS(615), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token3,
      aux_sym_apply_batch_token1,
  [6667] = 1,
    ACTIONS(617), 17,
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
  [6687] = 2,
    ACTIONS(621), 1,
      anon_sym_DOT,
    ACTIONS(619), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6709] = 2,
    ACTIONS(625), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6731] = 2,
    ACTIONS(629), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(627), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6753] = 2,
    ACTIONS(633), 1,
      aux_sym_create_materialized_view_token2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6775] = 1,
    ACTIONS(635), 17,
      ts_builtin_sym_end,
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
  [6795] = 2,
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
  [6817] = 2,
    ACTIONS(179), 1,
      aux_sym_select_statement_token4,
    ACTIONS(177), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6839] = 2,
    ACTIONS(643), 1,
      anon_sym_DOT,
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
  [6861] = 2,
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
  [6883] = 2,
    ACTIONS(651), 1,
      anon_sym_DOT,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6905] = 2,
    ACTIONS(655), 1,
      anon_sym_DOT,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6927] = 2,
    ACTIONS(659), 1,
      anon_sym_DOT,
    ACTIONS(657), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6949] = 1,
    ACTIONS(661), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6968] = 1,
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
  [6987] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7006] = 1,
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
  [7025] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7044] = 1,
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
  [7063] = 1,
    ACTIONS(669), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7082] = 1,
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
  [7101] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7120] = 1,
    ACTIONS(321), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7139] = 1,
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
  [7158] = 1,
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
  [7177] = 1,
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
  [7196] = 1,
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
  [7215] = 1,
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
  [7234] = 1,
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
  [7253] = 1,
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
  [7272] = 1,
    ACTIONS(349), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7291] = 1,
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
  [7310] = 1,
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
  [7329] = 1,
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
  [7348] = 1,
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
  [7367] = 1,
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
  [7386] = 1,
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
  [7405] = 1,
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
  [7424] = 1,
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
  [7443] = 1,
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
  [7462] = 1,
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
  [7481] = 1,
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
  [7500] = 1,
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
  [7519] = 1,
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
  [7538] = 1,
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
  [7557] = 1,
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
  [7576] = 1,
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
  [7595] = 1,
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
  [7614] = 1,
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
  [7633] = 1,
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
  [7652] = 1,
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
  [7671] = 1,
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
  [7690] = 1,
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
  [7709] = 1,
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
  [7728] = 1,
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
  [7747] = 1,
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
  [7766] = 1,
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
  [7785] = 1,
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
  [7804] = 2,
    ACTIONS(737), 1,
      anon_sym_SEMI,
    ACTIONS(735), 15,
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
  [7825] = 1,
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
  [7844] = 1,
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
  [7863] = 1,
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
  [7882] = 1,
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
  [7901] = 1,
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
  [7920] = 1,
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
  [7939] = 1,
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
  [7958] = 1,
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
  [7977] = 1,
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
  [7996] = 1,
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
  [8015] = 1,
    ACTIONS(283), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8034] = 1,
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
  [8053] = 1,
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
  [8072] = 1,
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
  [8091] = 1,
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
  [8110] = 1,
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
  [8129] = 1,
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
  [8148] = 1,
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
  [8167] = 1,
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
  [8186] = 1,
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
  [8205] = 1,
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
  [8224] = 1,
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
  [8243] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8262] = 1,
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
  [8281] = 1,
    ACTIONS(245), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8300] = 1,
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
  [8319] = 1,
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
  [8338] = 1,
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
  [8357] = 1,
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
  [8376] = 1,
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
  [8395] = 1,
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
  [8414] = 1,
    ACTIONS(449), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8433] = 1,
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
  [8452] = 1,
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
  [8471] = 1,
    ACTIONS(455), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8490] = 1,
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
  [8509] = 1,
    ACTIONS(177), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8528] = 1,
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
  [8547] = 1,
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
  [8566] = 1,
    ACTIONS(535), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8585] = 1,
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
  [8604] = 1,
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
  [8623] = 1,
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
  [8642] = 1,
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
  [8661] = 1,
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
  [8680] = 1,
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
  [8699] = 1,
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
  [8718] = 1,
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
  [8737] = 1,
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
  [8756] = 1,
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
  [8775] = 1,
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
  [8794] = 1,
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
  [8813] = 1,
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
  [8832] = 1,
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
  [8851] = 1,
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
  [8870] = 1,
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
  [8889] = 1,
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
  [8908] = 1,
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
  [8927] = 1,
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
  [8946] = 1,
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
  [8965] = 1,
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
  [8984] = 1,
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
  [9003] = 1,
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
  [9022] = 1,
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
  [9041] = 1,
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
  [9060] = 1,
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
  [9079] = 1,
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
  [9098] = 1,
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
  [9117] = 1,
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
  [9136] = 1,
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
  [9155] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9174] = 1,
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
  [9193] = 1,
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
  [9212] = 1,
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
  [9231] = 1,
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
  [9250] = 1,
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
  [9269] = 1,
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
  [9288] = 1,
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
  [9307] = 1,
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
  [9326] = 1,
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
  [9345] = 1,
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
  [9364] = 1,
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
  [9383] = 1,
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
  [9402] = 1,
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
  [9421] = 1,
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
  [9440] = 1,
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
  [9459] = 1,
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
  [9478] = 1,
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
  [9497] = 1,
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
  [9516] = 1,
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
  [9535] = 1,
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
  [9554] = 1,
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
  [9573] = 1,
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
  [9592] = 1,
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
  [9611] = 1,
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
  [9630] = 1,
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
  [9649] = 1,
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
  [9668] = 1,
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
  [9687] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9706] = 1,
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
  [9725] = 1,
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
  [9744] = 1,
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
  [9763] = 1,
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
  [9782] = 1,
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
  [9801] = 1,
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
  [9820] = 1,
    ACTIONS(251), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9839] = 1,
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
  [9858] = 1,
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
  [9877] = 1,
    ACTIONS(241), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9896] = 1,
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
  [9915] = 1,
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
  [9934] = 1,
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
  [9953] = 1,
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
  [9972] = 1,
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
  [9991] = 1,
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
  [10010] = 1,
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
  [10029] = 1,
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
  [10048] = 1,
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
  [10067] = 1,
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
  [10086] = 1,
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
  [10105] = 1,
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
  [10124] = 1,
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
  [10143] = 1,
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
  [10162] = 1,
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
  [10181] = 7,
    ACTIONS(435), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(949), 1,
      sym_object_name,
    STATE(798), 1,
      sym_constant,
    ACTIONS(433), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    STATE(547), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(431), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10211] = 1,
    ACTIONS(951), 15,
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
  [10229] = 5,
    ACTIONS(433), 1,
      sym__decimal_literal,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(365), 1,
      sym_init_cond_definition,
    STATE(192), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10254] = 5,
    ACTIONS(433), 1,
      sym__decimal_literal,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(413), 1,
      sym_init_cond_definition,
    STATE(192), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10279] = 5,
    ACTIONS(433), 1,
      sym__decimal_literal,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(406), 1,
      sym_init_cond_definition,
    STATE(192), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10304] = 5,
    ACTIONS(433), 1,
      sym__decimal_literal,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(342), 1,
      sym_init_cond_definition,
    STATE(192), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10329] = 5,
    ACTIONS(433), 1,
      sym__decimal_literal,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(319), 1,
      sym_init_cond_definition,
    STATE(192), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10354] = 5,
    ACTIONS(433), 1,
      sym__decimal_literal,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(381), 1,
      sym_init_cond_definition,
    STATE(192), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10379] = 5,
    ACTIONS(433), 1,
      sym__decimal_literal,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(373), 1,
      sym_init_cond_definition,
    STATE(192), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10404] = 5,
    ACTIONS(433), 1,
      sym__decimal_literal,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(748), 1,
      sym_init_cond_definition,
    STATE(192), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10429] = 5,
    ACTIONS(433), 1,
      sym__decimal_literal,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(386), 1,
      sym_init_cond_definition,
    STATE(192), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10454] = 7,
    ACTIONS(955), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 1,
      sym_object_name,
    STATE(669), 1,
      sym_constant,
    STATE(670), 1,
      sym_init_cond_list,
    STATE(671), 1,
      sym_init_cond_hash_item,
    ACTIONS(433), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(431), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10482] = 6,
    ACTIONS(959), 1,
      anon_sym_STAR,
    ACTIONS(961), 1,
      sym_object_name,
    STATE(1365), 1,
      sym_function_args,
    STATE(704), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(433), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(431), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10508] = 5,
    ACTIONS(961), 1,
      sym_object_name,
    STATE(964), 1,
      sym_function_args,
    STATE(704), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(433), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(431), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10531] = 11,
    ACTIONS(963), 1,
      aux_sym_truncate_token2,
    ACTIONS(965), 1,
      aux_sym_create_index_token2,
    ACTIONS(967), 1,
      aux_sym_resource_token2,
    ACTIONS(969), 1,
      aux_sym_resource_token5,
    ACTIONS(971), 1,
      aux_sym_resource_token6,
    ACTIONS(973), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(975), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(977), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(979), 1,
      aux_sym_drop_type_token1,
    ACTIONS(981), 1,
      aux_sym_drop_user_token1,
    ACTIONS(983), 1,
      aux_sym_create_aggregate_token1,
  [10565] = 7,
    ACTIONS(985), 1,
      anon_sym_DOT,
    ACTIONS(987), 1,
      aux_sym_drop_index_token1,
    ACTIONS(989), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(991), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(993), 1,
      aux_sym_alter_table_rename_token1,
    STATE(271), 1,
      sym_alter_table_operation,
    STATE(272), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10591] = 4,
    ACTIONS(433), 1,
      sym__decimal_literal,
    ACTIONS(955), 1,
      anon_sym_LPAREN,
    STATE(747), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10611] = 5,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      sym__decimal_literal,
    STATE(65), 1,
      sym_assignment_tuple,
    STATE(520), 1,
      sym_constant,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10633] = 4,
    ACTIONS(997), 1,
      aux_sym_priviledge_token1,
    ACTIONS(999), 1,
      aux_sym_resource_token4,
    STATE(190), 1,
      sym_priviledge,
    ACTIONS(995), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10653] = 4,
    ACTIONS(1001), 1,
      sym_object_name,
    STATE(76), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(433), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(431), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10673] = 4,
    ACTIONS(1003), 1,
      sym_object_name,
    STATE(840), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(433), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(431), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10693] = 10,
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
  [10724] = 3,
    ACTIONS(997), 1,
      aux_sym_priviledge_token1,
    STATE(1147), 1,
      sym_priviledge,
    ACTIONS(995), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10741] = 6,
    ACTIONS(987), 1,
      aux_sym_drop_index_token1,
    ACTIONS(989), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(991), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(993), 1,
      aux_sym_alter_table_rename_token1,
    STATE(402), 1,
      sym_alter_table_operation,
    STATE(272), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10764] = 4,
    ACTIONS(433), 1,
      sym__decimal_literal,
    ACTIONS(1025), 1,
      anon_sym_RBRACE,
    STATE(541), 1,
      sym_constant,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10783] = 4,
    ACTIONS(433), 1,
      sym__decimal_literal,
    ACTIONS(1027), 1,
      aux_sym_relation_contains_key_token2,
    STATE(80), 1,
      sym_constant,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10802] = 3,
    ACTIONS(997), 1,
      aux_sym_priviledge_token1,
    STATE(1367), 1,
      sym_priviledge,
    ACTIONS(995), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10819] = 3,
    ACTIONS(433), 1,
      sym__decimal_literal,
    STATE(786), 1,
      sym_constant,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10835] = 3,
    ACTIONS(433), 1,
      sym__decimal_literal,
    STATE(613), 1,
      sym_constant,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10851] = 3,
    ACTIONS(433), 1,
      sym__decimal_literal,
    STATE(76), 1,
      sym_constant,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10867] = 3,
    ACTIONS(433), 1,
      sym__decimal_literal,
    STATE(669), 1,
      sym_constant,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10883] = 3,
    ACTIONS(433), 1,
      sym__decimal_literal,
    STATE(720), 1,
      sym_constant,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10899] = 3,
    ACTIONS(433), 1,
      sym__decimal_literal,
    STATE(134), 1,
      sym_constant,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10915] = 3,
    ACTIONS(433), 1,
      sym__decimal_literal,
    STATE(77), 1,
      sym_constant,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10931] = 5,
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
  [10951] = 3,
    ACTIONS(433), 1,
      sym__decimal_literal,
    STATE(656), 1,
      sym_constant,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10967] = 3,
    ACTIONS(433), 1,
      sym__decimal_literal,
    STATE(230), 1,
      sym_constant,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10983] = 3,
    ACTIONS(433), 1,
      sym__decimal_literal,
    STATE(520), 1,
      sym_constant,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10999] = 3,
    ACTIONS(433), 1,
      sym__decimal_literal,
    STATE(488), 1,
      sym_constant,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [11015] = 3,
    ACTIONS(433), 1,
      sym__decimal_literal,
    STATE(1026), 1,
      sym_constant,
    ACTIONS(431), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [11031] = 6,
    ACTIONS(1039), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1041), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1043), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1045), 1,
      sym_object_name,
    STATE(963), 1,
      sym_index_column_spec,
    STATE(1333), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11052] = 6,
    ACTIONS(1039), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1041), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1043), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1045), 1,
      sym_object_name,
    STATE(877), 1,
      sym_index_column_spec,
    STATE(1333), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11073] = 6,
    ACTIONS(1039), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1041), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1043), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1045), 1,
      sym_object_name,
    STATE(889), 1,
      sym_index_column_spec,
    STATE(1333), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11094] = 6,
    ACTIONS(1039), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1041), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1043), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1045), 1,
      sym_object_name,
    STATE(1334), 1,
      sym_index_column_spec,
    STATE(1333), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11115] = 6,
    ACTIONS(1047), 1,
      anon_sym_DOT,
    ACTIONS(1049), 1,
      aux_sym_priviledge_token3,
    ACTIONS(1051), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1053), 1,
      aux_sym_alter_table_rename_token1,
    STATE(280), 1,
      sym_alter_type_operation,
    STATE(281), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [11136] = 7,
    ACTIONS(154), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(156), 1,
      sym_object_name,
    STATE(137), 1,
      sym_table_option_item,
    STATE(222), 1,
      sym_table_options,
    STATE(391), 1,
      sym_clustering_order,
    STATE(419), 1,
      sym_materialized_view_options,
    STATE(1014), 1,
      sym_table_option_name,
  [11158] = 7,
    ACTIONS(154), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(156), 1,
      sym_object_name,
    STATE(137), 1,
      sym_table_option_item,
    STATE(222), 1,
      sym_table_options,
    STATE(279), 1,
      sym_materialized_view_options,
    STATE(391), 1,
      sym_clustering_order,
    STATE(1014), 1,
      sym_table_option_name,
  [11180] = 3,
    ACTIONS(1059), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1055), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1057), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11194] = 7,
    ACTIONS(1061), 1,
      aux_sym_select_statement_token2,
    ACTIONS(1063), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1065), 1,
      anon_sym_STAR,
    ACTIONS(1067), 1,
      sym_object_name,
    STATE(608), 1,
      sym_function_call,
    STATE(614), 1,
      sym_select_element,
    STATE(801), 1,
      sym_select_elements,
  [11216] = 7,
    ACTIONS(1069), 1,
      aux_sym_truncate_token2,
    ACTIONS(1071), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1073), 1,
      aux_sym_resource_token2,
    ACTIONS(1075), 1,
      aux_sym_resource_token5,
    ACTIONS(1077), 1,
      aux_sym_resource_token6,
    ACTIONS(1079), 1,
      sym_object_name,
    STATE(908), 1,
      sym_resource,
  [11238] = 7,
    ACTIONS(154), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(156), 1,
      sym_object_name,
    STATE(137), 1,
      sym_table_option_item,
    STATE(222), 1,
      sym_table_options,
    STATE(298), 1,
      sym_materialized_view_options,
    STATE(391), 1,
      sym_clustering_order,
    STATE(1014), 1,
      sym_table_option_name,
  [11260] = 7,
    ACTIONS(1069), 1,
      aux_sym_truncate_token2,
    ACTIONS(1071), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1073), 1,
      aux_sym_resource_token2,
    ACTIONS(1075), 1,
      aux_sym_resource_token5,
    ACTIONS(1077), 1,
      aux_sym_resource_token6,
    ACTIONS(1079), 1,
      sym_object_name,
    STATE(951), 1,
      sym_resource,
  [11282] = 7,
    ACTIONS(154), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(156), 1,
      sym_object_name,
    STATE(137), 1,
      sym_table_option_item,
    STATE(222), 1,
      sym_table_options,
    STATE(340), 1,
      sym_materialized_view_options,
    STATE(391), 1,
      sym_clustering_order,
    STATE(1014), 1,
      sym_table_option_name,
  [11304] = 7,
    ACTIONS(1069), 1,
      aux_sym_truncate_token2,
    ACTIONS(1071), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1073), 1,
      aux_sym_resource_token2,
    ACTIONS(1075), 1,
      aux_sym_resource_token5,
    ACTIONS(1077), 1,
      aux_sym_resource_token6,
    ACTIONS(1079), 1,
      sym_object_name,
    STATE(239), 1,
      sym_resource,
  [11326] = 6,
    ACTIONS(1081), 1,
      anon_sym_LPAREN,
    ACTIONS(1083), 1,
      sym_object_name,
    STATE(85), 1,
      sym_relation_element,
    STATE(96), 1,
      sym_relation_elements,
    STATE(492), 1,
      sym_function_call,
    STATE(82), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11346] = 7,
    ACTIONS(154), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(156), 1,
      sym_object_name,
    STATE(137), 1,
      sym_table_option_item,
    STATE(222), 1,
      sym_table_options,
    STATE(363), 1,
      sym_materialized_view_options,
    STATE(391), 1,
      sym_clustering_order,
    STATE(1014), 1,
      sym_table_option_name,
  [11368] = 7,
    ACTIONS(154), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(156), 1,
      sym_object_name,
    STATE(137), 1,
      sym_table_option_item,
    STATE(222), 1,
      sym_table_options,
    STATE(331), 1,
      sym_materialized_view_options,
    STATE(391), 1,
      sym_clustering_order,
    STATE(1014), 1,
      sym_table_option_name,
  [11390] = 7,
    ACTIONS(154), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(156), 1,
      sym_object_name,
    STATE(137), 1,
      sym_table_option_item,
    STATE(222), 1,
      sym_table_options,
    STATE(391), 1,
      sym_clustering_order,
    STATE(417), 1,
      sym_materialized_view_options,
    STATE(1014), 1,
      sym_table_option_name,
  [11412] = 7,
    ACTIONS(154), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(156), 1,
      sym_object_name,
    STATE(137), 1,
      sym_table_option_item,
    STATE(222), 1,
      sym_table_options,
    STATE(389), 1,
      sym_materialized_view_options,
    STATE(391), 1,
      sym_clustering_order,
    STATE(1014), 1,
      sym_table_option_name,
  [11434] = 5,
    ACTIONS(1049), 1,
      aux_sym_priviledge_token3,
    ACTIONS(1051), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1053), 1,
      aux_sym_alter_table_rename_token1,
    STATE(420), 1,
      sym_alter_type_operation,
    STATE(281), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [11452] = 3,
    ACTIONS(1089), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1085), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1087), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11466] = 6,
    ACTIONS(1091), 1,
      aux_sym_truncate_token2,
    ACTIONS(1093), 1,
      aux_sym_resource_token2,
    ACTIONS(1095), 1,
      aux_sym_resource_token6,
    ACTIONS(1097), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1099), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1101), 1,
      aux_sym_drop_user_token1,
  [11485] = 6,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    STATE(586), 1,
      sym_assignment_tuple,
    STATE(709), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(712), 1,
      aux_sym_relation_element_repeat2,
  [11504] = 5,
    ACTIONS(1081), 1,
      anon_sym_LPAREN,
    ACTIONS(1083), 1,
      sym_object_name,
    STATE(90), 1,
      sym_relation_element,
    STATE(492), 1,
      sym_function_call,
    STATE(82), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11521] = 5,
    ACTIONS(1081), 1,
      anon_sym_LPAREN,
    ACTIONS(1083), 1,
      sym_object_name,
    STATE(492), 1,
      sym_function_call,
    STATE(1171), 1,
      sym_relation_element,
    STATE(82), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11538] = 4,
    ACTIONS(435), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(1107), 1,
      sym__decimal_literal,
    STATE(823), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [11553] = 2,
    ACTIONS(1109), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1111), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11564] = 6,
    ACTIONS(1065), 1,
      anon_sym_STAR,
    ACTIONS(1067), 1,
      sym_object_name,
    ACTIONS(1113), 1,
      aux_sym_select_statement_token3,
    STATE(608), 1,
      sym_function_call,
    STATE(614), 1,
      sym_select_element,
    STATE(834), 1,
      sym_select_elements,
  [11583] = 6,
    ACTIONS(1115), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1117), 1,
      anon_sym_DOT,
    ACTIONS(1119), 1,
      anon_sym_LPAREN,
    ACTIONS(1121), 1,
      aux_sym_insert_values_spec_token1,
    STATE(126), 1,
      sym_insert_values_spec,
    STATE(674), 1,
      sym_insert_column_spec,
  [11602] = 6,
    ACTIONS(1115), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1119), 1,
      anon_sym_LPAREN,
    ACTIONS(1121), 1,
      aux_sym_insert_values_spec_token1,
    ACTIONS(1123), 1,
      anon_sym_DOT,
    STATE(109), 1,
      sym_insert_values_spec,
    STATE(603), 1,
      sym_insert_column_spec,
  [11621] = 1,
    ACTIONS(1125), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11629] = 1,
    ACTIONS(1127), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11637] = 5,
    ACTIONS(1129), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1131), 1,
      sym_object_name,
    STATE(558), 1,
      sym_from_spec,
    STATE(581), 1,
      sym_delete_column_item,
    STATE(735), 1,
      sym_delete_column_list,
  [11653] = 5,
    ACTIONS(1129), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1131), 1,
      sym_object_name,
    STATE(565), 1,
      sym_from_spec,
    STATE(581), 1,
      sym_delete_column_item,
    STATE(818), 1,
      sym_delete_column_list,
  [11669] = 3,
    ACTIONS(1135), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(694), 1,
      sym_using_timestamp_spec,
    ACTIONS(1133), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11681] = 3,
    ACTIONS(1135), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(716), 1,
      sym_using_timestamp_spec,
    ACTIONS(1137), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11693] = 3,
    ACTIONS(1139), 1,
      anon_sym_LPAREN,
    ACTIONS(1141), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(205), 2,
      sym_option_hash,
      sym_table_option_value,
  [11705] = 1,
    ACTIONS(1143), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11713] = 5,
    ACTIONS(1145), 1,
      sym__string_literal,
    ACTIONS(1147), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1149), 1,
      aux_sym_create_index_token3,
    ACTIONS(1151), 1,
      sym_object_name,
    STATE(953), 1,
      sym_index_name,
  [11729] = 4,
    ACTIONS(1153), 1,
      anon_sym_LPAREN,
    ACTIONS(1155), 1,
      sym_object_name,
    STATE(960), 1,
      sym_primary_key_definition,
    STATE(961), 2,
      sym_compound_key,
      sym_composite_key,
  [11743] = 1,
    ACTIONS(1157), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11751] = 5,
    ACTIONS(1115), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1119), 1,
      anon_sym_LPAREN,
    ACTIONS(1121), 1,
      aux_sym_insert_values_spec_token1,
    STATE(125), 1,
      sym_insert_values_spec,
    STATE(714), 1,
      sym_insert_column_spec,
  [11767] = 3,
    ACTIONS(1159), 1,
      anon_sym_COMMA,
    STATE(508), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(1162), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11779] = 4,
    ACTIONS(1164), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1168), 1,
      aux_sym_role_with_options_token4,
    STATE(216), 1,
      sym_role_with_options,
    ACTIONS(1166), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11793] = 1,
    ACTIONS(1170), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11801] = 1,
    ACTIONS(1172), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11809] = 5,
    ACTIONS(1115), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1119), 1,
      anon_sym_LPAREN,
    ACTIONS(1121), 1,
      aux_sym_insert_values_spec_token1,
    STATE(108), 1,
      sym_insert_values_spec,
    STATE(713), 1,
      sym_insert_column_spec,
  [11825] = 5,
    ACTIONS(1065), 1,
      anon_sym_STAR,
    ACTIONS(1174), 1,
      sym_object_name,
    STATE(608), 1,
      sym_function_call,
    STATE(614), 1,
      sym_select_element,
    STATE(834), 1,
      sym_select_elements,
  [11841] = 1,
    ACTIONS(1176), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11849] = 4,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
    ACTIONS(1180), 1,
      anon_sym_DOT,
    ACTIONS(1182), 1,
      aux_sym_select_element_token1,
    ACTIONS(1178), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11863] = 4,
    ACTIONS(1164), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1168), 1,
      aux_sym_role_with_options_token4,
    STATE(197), 1,
      sym_role_with_options,
    ACTIONS(1166), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11877] = 5,
    ACTIONS(1065), 1,
      anon_sym_STAR,
    ACTIONS(1174), 1,
      sym_object_name,
    STATE(608), 1,
      sym_function_call,
    STATE(614), 1,
      sym_select_element,
    STATE(738), 1,
      sym_select_elements,
  [11893] = 3,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    STATE(557), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(1184), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11904] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      sym_where_spec,
    STATE(551), 1,
      aux_sym_update_repeat1,
  [11917] = 1,
    ACTIONS(1162), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11924] = 4,
    ACTIONS(1188), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(1190), 1,
      sym_object_name,
    STATE(176), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11937] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      sym_where_spec,
    STATE(611), 1,
      aux_sym_update_repeat1,
  [11950] = 4,
    ACTIONS(1190), 1,
      sym_object_name,
    ACTIONS(1192), 1,
      aux_sym_delete_statement_token3,
    STATE(176), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11963] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      sym_where_spec,
    STATE(611), 1,
      aux_sym_update_repeat1,
  [11976] = 4,
    ACTIONS(1194), 1,
      sym_object_name,
    STATE(103), 1,
      sym_table_option_item,
    STATE(421), 1,
      sym_table_options,
    STATE(1014), 1,
      sym_table_option_name,
  [11989] = 4,
    ACTIONS(1190), 1,
      sym_object_name,
    ACTIONS(1196), 1,
      aux_sym_delete_statement_token3,
    STATE(176), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12002] = 4,
    ACTIONS(1145), 1,
      sym__string_literal,
    ACTIONS(1151), 1,
      sym_object_name,
    ACTIONS(1198), 1,
      aux_sym_create_index_token3,
    STATE(1368), 1,
      sym_index_name,
  [12015] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      sym_where_spec,
    STATE(611), 1,
      aux_sym_update_repeat1,
  [12028] = 4,
    ACTIONS(1190), 1,
      sym_object_name,
    ACTIONS(1200), 1,
      aux_sym_delete_statement_token3,
    STATE(176), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12041] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      sym_where_spec,
    STATE(611), 1,
      aux_sym_update_repeat1,
  [12054] = 4,
    ACTIONS(1202), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1204), 1,
      sym_object_name,
    STATE(852), 1,
      sym_column_definition,
    STATE(1286), 1,
      sym_primary_key_element,
  [12067] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      sym_where_spec,
    STATE(528), 1,
      aux_sym_update_repeat1,
  [12080] = 4,
    ACTIONS(1190), 1,
      sym_object_name,
    ACTIONS(1206), 1,
      aux_sym_delete_statement_token3,
    STATE(176), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12093] = 4,
    ACTIONS(1190), 1,
      sym_object_name,
    ACTIONS(1208), 1,
      aux_sym_delete_statement_token3,
    STATE(176), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12106] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1135), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(177), 1,
      sym_where_spec,
    STATE(802), 1,
      sym_using_timestamp_spec,
  [12119] = 4,
    ACTIONS(1190), 1,
      sym_object_name,
    ACTIONS(1210), 1,
      aux_sym_delete_statement_token3,
    STATE(176), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12132] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      sym_where_spec,
    STATE(611), 1,
      aux_sym_update_repeat1,
  [12145] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      sym_where_spec,
    STATE(554), 1,
      aux_sym_update_repeat1,
  [12158] = 4,
    ACTIONS(1190), 1,
      sym_object_name,
    ACTIONS(1212), 1,
      aux_sym_delete_statement_token3,
    STATE(176), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12171] = 1,
    ACTIONS(1214), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12178] = 4,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1218), 1,
      anon_sym_COLON,
    ACTIONS(1220), 1,
      anon_sym_RBRACE,
    STATE(703), 1,
      aux_sym_assignment_tuple_repeat1,
  [12191] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      sym_where_spec,
    STATE(530), 1,
      aux_sym_update_repeat1,
  [12204] = 4,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1222), 1,
      anon_sym_DOT,
    ACTIONS(1224), 1,
      aux_sym_update_token2,
    STATE(1396), 1,
      sym_using_ttl_timestamp,
  [12217] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      sym_where_spec,
    STATE(562), 1,
      aux_sym_update_repeat1,
  [12230] = 3,
    ACTIONS(1226), 1,
      anon_sym_RPAREN,
    STATE(1144), 1,
      sym_order_direction,
    ACTIONS(175), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [12241] = 4,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    ACTIONS(1230), 1,
      anon_sym_RPAREN,
    STATE(650), 1,
      aux_sym_function_args_repeat1,
  [12254] = 2,
    ACTIONS(1232), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1234), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12263] = 4,
    ACTIONS(1190), 1,
      sym_object_name,
    ACTIONS(1236), 1,
      aux_sym_delete_statement_token3,
    STATE(176), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12276] = 4,
    ACTIONS(1202), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1204), 1,
      sym_object_name,
    STATE(852), 1,
      sym_column_definition,
    STATE(913), 1,
      sym_primary_key_element,
  [12289] = 4,
    ACTIONS(1190), 1,
      sym_object_name,
    ACTIONS(1238), 1,
      aux_sym_delete_statement_token3,
    STATE(176), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12302] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      sym_where_spec,
    STATE(611), 1,
      aux_sym_update_repeat1,
  [12315] = 3,
    ACTIONS(1242), 1,
      aux_sym_create_materialized_view_token1,
    STATE(841), 1,
      sym_primary_key_column,
    ACTIONS(1240), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12326] = 4,
    ACTIONS(1190), 1,
      sym_object_name,
    ACTIONS(1244), 1,
      aux_sym_delete_statement_token3,
    STATE(176), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12339] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      sym_where_spec,
    STATE(611), 1,
      aux_sym_update_repeat1,
  [12352] = 4,
    ACTIONS(1194), 1,
      sym_object_name,
    STATE(103), 1,
      sym_table_option_item,
    STATE(414), 1,
      sym_table_options,
    STATE(1014), 1,
      sym_table_option_name,
  [12365] = 4,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1246), 1,
      anon_sym_DOT,
    ACTIONS(1248), 1,
      aux_sym_update_token2,
    STATE(924), 1,
      sym_using_ttl_timestamp,
  [12378] = 3,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(1250), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [12389] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1135), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(191), 1,
      sym_where_spec,
    STATE(750), 1,
      sym_using_timestamp_spec,
  [12402] = 4,
    ACTIONS(1194), 1,
      sym_object_name,
    STATE(103), 1,
      sym_table_option_item,
    STATE(317), 1,
      sym_table_options,
    STATE(1014), 1,
      sym_table_option_name,
  [12415] = 4,
    ACTIONS(1190), 1,
      sym_object_name,
    ACTIONS(1252), 1,
      aux_sym_delete_statement_token3,
    STATE(176), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12428] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      sym_where_spec,
    STATE(524), 1,
      aux_sym_update_repeat1,
  [12441] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      sym_where_spec,
    STATE(611), 1,
      aux_sym_update_repeat1,
  [12454] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      sym_where_spec,
    STATE(537), 1,
      aux_sym_update_repeat1,
  [12467] = 4,
    ACTIONS(1190), 1,
      sym_object_name,
    ACTIONS(1254), 1,
      aux_sym_delete_statement_token3,
    STATE(176), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12480] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1135), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(182), 1,
      sym_where_spec,
    STATE(763), 1,
      sym_using_timestamp_spec,
  [12493] = 4,
    ACTIONS(1256), 1,
      aux_sym_timestamp_token1,
    ACTIONS(1258), 1,
      aux_sym_ttl_token1,
    STATE(136), 1,
      sym_ttl,
    STATE(141), 1,
      sym_timestamp,
  [12506] = 4,
    ACTIONS(1190), 1,
      sym_object_name,
    ACTIONS(1260), 1,
      aux_sym_delete_statement_token3,
    STATE(176), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12519] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      sym_where_spec,
    STATE(522), 1,
      aux_sym_update_repeat1,
  [12532] = 4,
    ACTIONS(1190), 1,
      sym_object_name,
    ACTIONS(1262), 1,
      aux_sym_delete_statement_token3,
    STATE(176), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12545] = 4,
    ACTIONS(1190), 1,
      sym_object_name,
    ACTIONS(1264), 1,
      aux_sym_delete_statement_token3,
    STATE(176), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12558] = 3,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    ACTIONS(1268), 1,
      anon_sym_RPAREN,
    STATE(683), 1,
      aux_sym_create_type_repeat1,
  [12568] = 3,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
    ACTIONS(1272), 1,
      sym_object_name,
    STATE(595), 1,
      sym_param,
  [12578] = 3,
    ACTIONS(1194), 1,
      sym_object_name,
    STATE(133), 1,
      sym_table_option_item,
    STATE(1014), 1,
      sym_table_option_name,
  [12588] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1276), 1,
      anon_sym_RPAREN,
    STATE(652), 1,
      aux_sym_create_function_repeat1,
  [12598] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(1098), 1,
      sym_return_mode,
  [12608] = 3,
    ACTIONS(1282), 1,
      anon_sym_COMMA,
    ACTIONS(1284), 1,
      anon_sym_RPAREN,
    STATE(615), 1,
      aux_sym_relation_element_repeat1,
  [12618] = 3,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1289), 1,
      anon_sym_RBRACE,
    STATE(577), 1,
      aux_sym_assignment_map_repeat1,
  [12628] = 3,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1291), 1,
      aux_sym_update_token2,
    STATE(875), 1,
      sym_using_ttl_timestamp,
  [12638] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1293), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [12648] = 2,
    ACTIONS(1295), 1,
      aux_sym_resource_token1,
    ACTIONS(1297), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [12656] = 3,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1301), 1,
      aux_sym_from_spec_token1,
    STATE(715), 1,
      aux_sym_delete_column_list_repeat1,
  [12666] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1303), 1,
      anon_sym_RPAREN,
    STATE(652), 1,
      aux_sym_create_function_repeat1,
  [12676] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(1071), 1,
      sym_return_mode,
  [12686] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
    STATE(609), 1,
      aux_sym_create_function_repeat1,
  [12696] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(1067), 1,
      sym_return_mode,
  [12706] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1307), 1,
      anon_sym_RPAREN,
    STATE(659), 1,
      aux_sym_relation_element_repeat2,
  [12716] = 3,
    ACTIONS(1309), 1,
      sym_object_name,
    STATE(588), 1,
      sym_column_not_null,
    STATE(804), 1,
      sym_column_not_null_list,
  [12726] = 2,
    STATE(623), 1,
      aux_sym_column_not_null_list_repeat1,
    ACTIONS(1311), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [12734] = 3,
    ACTIONS(1313), 1,
      anon_sym_DOT,
    ACTIONS(1315), 1,
      aux_sym_where_spec_token1,
    STATE(1116), 1,
      sym_materialized_view_where,
  [12744] = 3,
    ACTIONS(1317), 1,
      anon_sym_COMMA,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
    STATE(590), 1,
      aux_sym_option_hash_repeat1,
  [12754] = 3,
    ACTIONS(1322), 1,
      anon_sym_COMMA,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
    STATE(591), 1,
      aux_sym_function_args_repeat1,
  [12764] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(1044), 1,
      sym_return_mode,
  [12774] = 3,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    ACTIONS(1329), 1,
      aux_sym_from_spec_token1,
    STATE(705), 1,
      aux_sym_select_elements_repeat1,
  [12784] = 3,
    ACTIONS(1174), 1,
      sym_object_name,
    STATE(608), 1,
      sym_function_call,
    STATE(739), 1,
      sym_select_element,
  [12794] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1331), 1,
      anon_sym_RPAREN,
    STATE(574), 1,
      aux_sym_create_function_repeat1,
  [12804] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(1039), 1,
      sym_return_mode,
  [12814] = 3,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1336), 1,
      anon_sym_RBRACE,
    STATE(597), 1,
      aux_sym_replication_list_repeat1,
  [12824] = 3,
    ACTIONS(1338), 1,
      sym__string_literal,
    STATE(697), 1,
      sym_replication_list_item,
    STATE(1036), 1,
      sym_replication_list,
  [12834] = 3,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    ACTIONS(1340), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_create_type_repeat1,
  [12844] = 3,
    ACTIONS(1342), 1,
      anon_sym_COMMA,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
    STATE(600), 1,
      aux_sym_relation_element_repeat1,
  [12854] = 3,
    ACTIONS(1347), 1,
      anon_sym_COMMA,
    ACTIONS(1349), 1,
      anon_sym_RBRACE,
    STATE(577), 1,
      aux_sym_assignment_map_repeat1,
  [12864] = 3,
    ACTIONS(1272), 1,
      sym_object_name,
    ACTIONS(1351), 1,
      anon_sym_RPAREN,
    STATE(631), 1,
      sym_param,
  [12874] = 3,
    ACTIONS(1115), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1121), 1,
      aux_sym_insert_values_spec_token1,
    STATE(115), 1,
      sym_insert_values_spec,
  [12884] = 3,
    ACTIONS(1353), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    ACTIONS(1355), 1,
      sym_object_name,
    STATE(412), 1,
      sym_alter_table_drop_column_list,
  [12894] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
    STATE(579), 1,
      aux_sym_relation_element_repeat2,
  [12904] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [12914] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(1128), 1,
      sym_return_mode,
  [12924] = 2,
    ACTIONS(1182), 1,
      aux_sym_select_element_token1,
    ACTIONS(1178), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12932] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1359), 1,
      anon_sym_RPAREN,
    STATE(652), 1,
      aux_sym_create_function_repeat1,
  [12942] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(1132), 1,
      sym_return_mode,
  [12952] = 3,
    ACTIONS(1361), 1,
      anon_sym_COMMA,
    ACTIONS(1364), 1,
      aux_sym_where_spec_token1,
    STATE(611), 1,
      aux_sym_update_repeat1,
  [12962] = 3,
    ACTIONS(223), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1366), 1,
      aux_sym_update_token2,
    STATE(1000), 1,
      sym_using_ttl_timestamp,
  [12972] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1368), 1,
      anon_sym_RBRACK,
    STATE(706), 1,
      aux_sym_assignment_tuple_repeat1,
  [12982] = 3,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    ACTIONS(1370), 1,
      aux_sym_from_spec_token1,
    STATE(593), 1,
      aux_sym_select_elements_repeat1,
  [12992] = 3,
    ACTIONS(1282), 1,
      anon_sym_COMMA,
    ACTIONS(1372), 1,
      anon_sym_RPAREN,
    STATE(600), 1,
      aux_sym_relation_element_repeat1,
  [13002] = 3,
    ACTIONS(1282), 1,
      anon_sym_COMMA,
    ACTIONS(1374), 1,
      anon_sym_RPAREN,
    STATE(649), 1,
      aux_sym_relation_element_repeat1,
  [13012] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(1151), 1,
      sym_return_mode,
  [13022] = 3,
    ACTIONS(1376), 1,
      anon_sym_COMMA,
    ACTIONS(1378), 1,
      anon_sym_RPAREN,
    STATE(702), 1,
      aux_sym_expression_list_repeat1,
  [13032] = 3,
    ACTIONS(1380), 1,
      sym_object_name,
    STATE(155), 1,
      sym_alter_type_rename_item,
    STATE(409), 1,
      sym_alter_type_rename_list,
  [13042] = 3,
    ACTIONS(1382), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1384), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1386), 1,
      aux_sym_update_token1,
  [13052] = 3,
    ACTIONS(1315), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1388), 1,
      anon_sym_DOT,
    STATE(1166), 1,
      sym_materialized_view_where,
  [13062] = 3,
    ACTIONS(1390), 1,
      sym_object_name,
    STATE(688), 1,
      sym_column_definition,
    STATE(1295), 1,
      sym_column_definition_list,
  [13072] = 2,
    STATE(653), 1,
      aux_sym_column_not_null_list_repeat1,
    ACTIONS(1392), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13080] = 3,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    ACTIONS(1394), 1,
      anon_sym_RPAREN,
    STATE(683), 1,
      aux_sym_create_type_repeat1,
  [13090] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(1007), 1,
      sym_return_mode,
  [13100] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(1176), 1,
      sym_return_mode,
  [13110] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1396), 1,
      anon_sym_RPAREN,
    STATE(582), 1,
      aux_sym_create_function_repeat1,
  [13120] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(1002), 1,
      sym_return_mode,
  [13130] = 3,
    ACTIONS(1272), 1,
      sym_object_name,
    ACTIONS(1398), 1,
      anon_sym_RPAREN,
    STATE(584), 1,
      sym_param,
  [13140] = 3,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    ACTIONS(1400), 1,
      anon_sym_RPAREN,
    STATE(683), 1,
      aux_sym_create_type_repeat1,
  [13150] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1402), 1,
      anon_sym_RPAREN,
    STATE(658), 1,
      aux_sym_create_function_repeat1,
  [13160] = 3,
    ACTIONS(1404), 1,
      anon_sym_COMMA,
    ACTIONS(1407), 1,
      anon_sym_RPAREN,
    STATE(632), 1,
      aux_sym_column_definition_list_repeat1,
  [13170] = 3,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    ACTIONS(1409), 1,
      anon_sym_RPAREN,
    STATE(571), 1,
      aux_sym_create_type_repeat1,
  [13180] = 3,
    ACTIONS(1315), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1411), 1,
      anon_sym_DOT,
    STATE(994), 1,
      sym_materialized_view_where,
  [13190] = 3,
    ACTIONS(1413), 1,
      anon_sym_COMMA,
    ACTIONS(1416), 1,
      anon_sym_GT,
    STATE(635), 1,
      aux_sym_data_type_definition_repeat1,
  [13200] = 3,
    ACTIONS(1418), 1,
      anon_sym_COMMA,
    ACTIONS(1420), 1,
      anon_sym_RPAREN,
    STATE(590), 1,
      aux_sym_option_hash_repeat1,
  [13210] = 3,
    ACTIONS(1422), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1424), 1,
      sym_object_name,
    STATE(1015), 1,
      sym_trigger_name,
  [13220] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(976), 1,
      sym_return_mode,
  [13230] = 3,
    ACTIONS(1426), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1428), 1,
      sym_object_name,
    STATE(882), 1,
      sym_user_name,
  [13240] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1430), 1,
      anon_sym_RPAREN,
    STATE(652), 1,
      aux_sym_create_function_repeat1,
  [13250] = 3,
    ACTIONS(1338), 1,
      sym__string_literal,
    STATE(697), 1,
      sym_replication_list_item,
    STATE(1245), 1,
      sym_replication_list,
  [13260] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(972), 1,
      sym_return_mode,
  [13270] = 3,
    ACTIONS(1272), 1,
      sym_object_name,
    ACTIONS(1432), 1,
      anon_sym_RPAREN,
    STATE(695), 1,
      sym_param,
  [13280] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(1212), 1,
      sym_return_mode,
  [13290] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1434), 1,
      anon_sym_RPAREN,
    STATE(690), 1,
      aux_sym_create_function_repeat1,
  [13300] = 2,
    ACTIONS(1438), 1,
      anon_sym_LBRACK,
    ACTIONS(1436), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13308] = 3,
    ACTIONS(1440), 1,
      anon_sym_COMMA,
    ACTIONS(1442), 1,
      anon_sym_RBRACE,
    STATE(597), 1,
      aux_sym_replication_list_repeat1,
  [13318] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(1181), 1,
      sym_return_mode,
  [13328] = 3,
    ACTIONS(1282), 1,
      anon_sym_COMMA,
    ACTIONS(1444), 1,
      anon_sym_RPAREN,
    STATE(600), 1,
      aux_sym_relation_element_repeat1,
  [13338] = 3,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    ACTIONS(1446), 1,
      anon_sym_RPAREN,
    STATE(591), 1,
      aux_sym_function_args_repeat1,
  [13348] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(1145), 1,
      sym_return_mode,
  [13358] = 3,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    ACTIONS(1451), 1,
      anon_sym_RPAREN,
    STATE(652), 1,
      aux_sym_create_function_repeat1,
  [13368] = 3,
    ACTIONS(1453), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1456), 1,
      aux_sym_create_materialized_view_token1,
    STATE(653), 1,
      aux_sym_column_not_null_list_repeat1,
  [13378] = 3,
    ACTIONS(1390), 1,
      sym_object_name,
    STATE(688), 1,
      sym_column_definition,
    STATE(955), 1,
      sym_column_definition_list,
  [13388] = 3,
    ACTIONS(1272), 1,
      sym_object_name,
    ACTIONS(1458), 1,
      anon_sym_RPAREN,
    STATE(677), 1,
      sym_param,
  [13398] = 3,
    ACTIONS(1347), 1,
      anon_sym_COMMA,
    ACTIONS(1460), 1,
      anon_sym_RBRACE,
    STATE(601), 1,
      aux_sym_assignment_map_repeat1,
  [13408] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(1220), 1,
      sym_return_mode,
  [13418] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1462), 1,
      anon_sym_RPAREN,
    STATE(652), 1,
      aux_sym_create_function_repeat1,
  [13428] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1464), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [13438] = 3,
    ACTIONS(1466), 1,
      sym__string_literal,
    ACTIONS(1468), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1470), 1,
      sym_object_name,
  [13448] = 2,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
    ACTIONS(1325), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13456] = 3,
    ACTIONS(1472), 1,
      anon_sym_COMMA,
    ACTIONS(1474), 1,
      anon_sym_GT,
    STATE(687), 1,
      aux_sym_data_type_definition_repeat1,
  [13466] = 3,
    ACTIONS(1282), 1,
      anon_sym_COMMA,
    ACTIONS(1476), 1,
      anon_sym_RPAREN,
    STATE(717), 1,
      aux_sym_relation_element_repeat1,
  [13476] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1478), 1,
      anon_sym_RPAREN,
    STATE(606), 1,
      aux_sym_relation_element_repeat2,
  [13486] = 3,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    ACTIONS(1480), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      aux_sym_create_type_repeat1,
  [13496] = 3,
    ACTIONS(1315), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1482), 1,
      anon_sym_DOT,
    STATE(1252), 1,
      sym_materialized_view_where,
  [13506] = 3,
    ACTIONS(1272), 1,
      sym_object_name,
    ACTIONS(1484), 1,
      anon_sym_RPAREN,
    STATE(718), 1,
      sym_param,
  [13516] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(1261), 1,
      sym_return_mode,
  [13526] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1486), 1,
      anon_sym_RPAREN,
    STATE(675), 1,
      aux_sym_assignment_tuple_repeat1,
  [13536] = 3,
    ACTIONS(1488), 1,
      anon_sym_COMMA,
    ACTIONS(1490), 1,
      anon_sym_RPAREN,
    STATE(678), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13546] = 3,
    ACTIONS(1492), 1,
      anon_sym_COMMA,
    ACTIONS(1494), 1,
      anon_sym_RPAREN,
    STATE(679), 1,
      aux_sym_init_cond_hash_repeat1,
  [13556] = 3,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    ACTIONS(1496), 1,
      anon_sym_RPAREN,
    STATE(683), 1,
      aux_sym_create_type_repeat1,
  [13566] = 3,
    ACTIONS(1390), 1,
      sym_object_name,
    STATE(688), 1,
      sym_column_definition,
    STATE(1106), 1,
      sym_column_definition_list,
  [13576] = 3,
    ACTIONS(1115), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1121), 1,
      aux_sym_insert_values_spec_token1,
    STATE(116), 1,
      sym_insert_values_spec,
  [13586] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1498), 1,
      anon_sym_RPAREN,
    STATE(508), 1,
      aux_sym_assignment_tuple_repeat1,
  [13596] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(1059), 1,
      sym_return_mode,
  [13606] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1500), 1,
      anon_sym_RPAREN,
    STATE(680), 1,
      aux_sym_create_function_repeat1,
  [13616] = 3,
    ACTIONS(1488), 1,
      anon_sym_COMMA,
    ACTIONS(1502), 1,
      anon_sym_RPAREN,
    STATE(700), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13626] = 3,
    ACTIONS(1492), 1,
      anon_sym_COMMA,
    ACTIONS(1504), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      aux_sym_init_cond_hash_repeat1,
  [13636] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1506), 1,
      anon_sym_RPAREN,
    STATE(652), 1,
      aux_sym_create_function_repeat1,
  [13646] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(917), 1,
      sym_return_mode,
  [13656] = 3,
    ACTIONS(1272), 1,
      sym_object_name,
    ACTIONS(1508), 1,
      anon_sym_RPAREN,
    STATE(627), 1,
      sym_param,
  [13666] = 3,
    ACTIONS(1510), 1,
      anon_sym_COMMA,
    ACTIONS(1513), 1,
      anon_sym_RPAREN,
    STATE(683), 1,
      aux_sym_create_type_repeat1,
  [13676] = 3,
    ACTIONS(1428), 1,
      sym_object_name,
    ACTIONS(1515), 1,
      aux_sym_delete_statement_token2,
    STATE(309), 1,
      sym_user_name,
  [13686] = 3,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    ACTIONS(1517), 1,
      anon_sym_RPAREN,
    STATE(630), 1,
      aux_sym_create_type_repeat1,
  [13696] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1519), 1,
      anon_sym_RPAREN,
    STATE(652), 1,
      aux_sym_create_function_repeat1,
  [13706] = 3,
    ACTIONS(1472), 1,
      anon_sym_COMMA,
    ACTIONS(1521), 1,
      anon_sym_GT,
    STATE(635), 1,
      aux_sym_data_type_definition_repeat1,
  [13716] = 3,
    ACTIONS(1523), 1,
      anon_sym_COMMA,
    ACTIONS(1525), 1,
      anon_sym_RPAREN,
    STATE(707), 1,
      aux_sym_column_definition_list_repeat1,
  [13726] = 3,
    ACTIONS(1418), 1,
      anon_sym_COMMA,
    ACTIONS(1527), 1,
      anon_sym_RPAREN,
    STATE(636), 1,
      aux_sym_option_hash_repeat1,
  [13736] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1529), 1,
      anon_sym_RPAREN,
    STATE(652), 1,
      aux_sym_create_function_repeat1,
  [13746] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(888), 1,
      sym_return_mode,
  [13756] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(876), 1,
      sym_return_mode,
  [13766] = 2,
    ACTIONS(1533), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1531), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [13774] = 1,
    ACTIONS(1535), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13780] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1537), 1,
      anon_sym_RPAREN,
    STATE(640), 1,
      aux_sym_create_function_repeat1,
  [13790] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(884), 1,
      sym_return_mode,
  [13800] = 3,
    ACTIONS(1440), 1,
      anon_sym_COMMA,
    ACTIONS(1539), 1,
      anon_sym_RBRACE,
    STATE(647), 1,
      aux_sym_replication_list_repeat1,
  [13810] = 3,
    ACTIONS(1541), 1,
      anon_sym_COMMA,
    ACTIONS(1544), 1,
      aux_sym_from_spec_token1,
    STATE(698), 1,
      aux_sym_delete_column_list_repeat1,
  [13820] = 3,
    ACTIONS(1272), 1,
      sym_object_name,
    ACTIONS(1546), 1,
      anon_sym_RPAREN,
    STATE(645), 1,
      sym_param,
  [13830] = 3,
    ACTIONS(1548), 1,
      anon_sym_COMMA,
    ACTIONS(1551), 1,
      anon_sym_RPAREN,
    STATE(700), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13840] = 3,
    ACTIONS(1553), 1,
      anon_sym_COMMA,
    ACTIONS(1556), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      aux_sym_init_cond_hash_repeat1,
  [13850] = 3,
    ACTIONS(1558), 1,
      anon_sym_COMMA,
    ACTIONS(1561), 1,
      anon_sym_RPAREN,
    STATE(702), 1,
      aux_sym_expression_list_repeat1,
  [13860] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1563), 1,
      anon_sym_RBRACE,
    STATE(508), 1,
      aux_sym_assignment_tuple_repeat1,
  [13870] = 3,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    ACTIONS(1230), 1,
      anon_sym_RPAREN,
    STATE(650), 1,
      aux_sym_function_args_repeat1,
  [13880] = 3,
    ACTIONS(1565), 1,
      anon_sym_COMMA,
    ACTIONS(1568), 1,
      aux_sym_from_spec_token1,
    STATE(705), 1,
      aux_sym_select_elements_repeat1,
  [13890] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1570), 1,
      anon_sym_RBRACK,
    STATE(508), 1,
      aux_sym_assignment_tuple_repeat1,
  [13900] = 3,
    ACTIONS(1572), 1,
      anon_sym_COMMA,
    ACTIONS(1574), 1,
      anon_sym_RPAREN,
    STATE(632), 1,
      aux_sym_column_definition_list_repeat1,
  [13910] = 3,
    ACTIONS(1390), 1,
      sym_object_name,
    STATE(688), 1,
      sym_column_definition,
    STATE(930), 1,
      sym_column_definition_list,
  [13920] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1307), 1,
      anon_sym_RPAREN,
    STATE(508), 1,
      aux_sym_assignment_tuple_repeat1,
  [13930] = 3,
    ACTIONS(1338), 1,
      sym__string_literal,
    STATE(697), 1,
      sym_replication_list_item,
    STATE(965), 1,
      sym_replication_list,
  [13940] = 3,
    ACTIONS(1376), 1,
      anon_sym_COMMA,
    ACTIONS(1576), 1,
      anon_sym_RPAREN,
    STATE(618), 1,
      aux_sym_expression_list_repeat1,
  [13950] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1307), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [13960] = 3,
    ACTIONS(1115), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1121), 1,
      aux_sym_insert_values_spec_token1,
    STATE(120), 1,
      sym_insert_values_spec,
  [13970] = 3,
    ACTIONS(1115), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1121), 1,
      aux_sym_insert_values_spec_token1,
    STATE(131), 1,
      sym_insert_values_spec,
  [13980] = 3,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1578), 1,
      aux_sym_from_spec_token1,
    STATE(698), 1,
      aux_sym_delete_column_list_repeat1,
  [13990] = 1,
    ACTIONS(1133), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13996] = 3,
    ACTIONS(1282), 1,
      anon_sym_COMMA,
    ACTIONS(1580), 1,
      anon_sym_RPAREN,
    STATE(600), 1,
      aux_sym_relation_element_repeat1,
  [14006] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1582), 1,
      anon_sym_RPAREN,
    STATE(686), 1,
      aux_sym_create_function_repeat1,
  [14016] = 3,
    ACTIONS(1278), 1,
      aux_sym_create_function_token1,
    ACTIONS(1280), 1,
      aux_sym_return_mode_token1,
    STATE(1309), 1,
      sym_return_mode,
  [14026] = 1,
    ACTIONS(1584), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14031] = 1,
    ACTIONS(1586), 2,
      sym__string_literal,
      sym__float_literal,
  [14036] = 2,
    ACTIONS(1588), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1590), 1,
      sym_object_name,
  [14043] = 2,
    ACTIONS(1592), 1,
      anon_sym_DOT,
    ACTIONS(1594), 1,
      aux_sym_create_index_token3,
  [14050] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(519), 1,
      sym_assignment_element,
  [14057] = 2,
    ACTIONS(1598), 1,
      sym_object_name,
    STATE(752), 1,
      sym_delete_column_item,
  [14064] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(563), 1,
      sym_assignment_element,
  [14071] = 2,
    ACTIONS(1600), 1,
      sym_object_name,
    STATE(229), 1,
      sym_if_condition,
  [14078] = 2,
    ACTIONS(1602), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1604), 1,
      sym_object_name,
  [14085] = 1,
    ACTIONS(1606), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [14090] = 1,
    ACTIONS(1608), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14095] = 2,
    ACTIONS(1610), 1,
      sym_object_name,
    STATE(1393), 1,
      sym_column_list,
  [14102] = 2,
    ACTIONS(1612), 1,
      sym_object_name,
    STATE(241), 1,
      sym_role_name,
  [14109] = 2,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    STATE(664), 1,
      sym_assignment_tuple,
  [14116] = 2,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_assignment_tuple,
  [14123] = 2,
    ACTIONS(1614), 1,
      aux_sym_from_spec_token1,
    STATE(535), 1,
      sym_from_spec,
  [14130] = 2,
    ACTIONS(1616), 1,
      anon_sym_DOT,
    ACTIONS(1618), 1,
      anon_sym_LPAREN,
  [14137] = 2,
    ACTIONS(1620), 1,
      sym_object_name,
    STATE(909), 1,
      sym_table_name,
  [14144] = 2,
    ACTIONS(1614), 1,
      aux_sym_from_spec_token1,
    STATE(71), 1,
      sym_from_spec,
  [14151] = 1,
    ACTIONS(1568), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14156] = 1,
    ACTIONS(1622), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14161] = 2,
    ACTIONS(451), 1,
      aux_sym_clustering_order_token1,
    STATE(422), 1,
      sym_clustering_order,
  [14168] = 2,
    ACTIONS(1610), 1,
      sym_object_name,
    STATE(1373), 1,
      sym_column_list,
  [14175] = 2,
    ACTIONS(1610), 1,
      sym_object_name,
    STATE(1372), 1,
      sym_column_list,
  [14182] = 2,
    ACTIONS(1610), 1,
      sym_object_name,
    STATE(1356), 1,
      sym_column_list,
  [14189] = 2,
    ACTIONS(1624), 1,
      anon_sym_DOT,
    ACTIONS(1626), 1,
      anon_sym_LPAREN,
  [14196] = 1,
    ACTIONS(1556), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14201] = 1,
    ACTIONS(1551), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14206] = 1,
    ACTIONS(1628), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14211] = 2,
    ACTIONS(1630), 1,
      anon_sym_DOT,
    ACTIONS(1632), 1,
      anon_sym_LPAREN,
  [14218] = 2,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    STATE(177), 1,
      sym_where_spec,
  [14225] = 1,
    ACTIONS(1561), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14230] = 1,
    ACTIONS(1544), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14235] = 1,
    ACTIONS(1634), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14240] = 2,
    ACTIONS(1272), 1,
      sym_object_name,
    STATE(870), 1,
      sym_param,
  [14247] = 2,
    ACTIONS(1610), 1,
      sym_object_name,
    STATE(1331), 1,
      sym_column_list,
  [14254] = 2,
    ACTIONS(1315), 1,
      aux_sym_where_spec_token1,
    STATE(1328), 1,
      sym_materialized_view_where,
  [14261] = 2,
    ACTIONS(1139), 1,
      anon_sym_LPAREN,
    STATE(223), 1,
      sym_option_hash,
  [14268] = 1,
    ACTIONS(1636), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14273] = 2,
    ACTIONS(1638), 1,
      sym_object_name,
    STATE(746), 1,
      sym_init_cond_hash_item,
  [14280] = 2,
    ACTIONS(1640), 1,
      anon_sym_DOT,
    ACTIONS(1642), 1,
      anon_sym_LPAREN,
  [14287] = 2,
    ACTIONS(1644), 1,
      sym_object_name,
    STATE(1384), 1,
      sym_user_name,
  [14294] = 2,
    ACTIONS(1610), 1,
      sym_object_name,
    STATE(970), 1,
      sym_column_list,
  [14301] = 2,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    STATE(191), 1,
      sym_where_spec,
  [14308] = 2,
    ACTIONS(1390), 1,
      sym_object_name,
    STATE(852), 1,
      sym_column_definition,
  [14315] = 2,
    ACTIONS(1258), 1,
      aux_sym_ttl_token1,
    STATE(248), 1,
      sym_ttl,
  [14322] = 2,
    ACTIONS(1256), 1,
      aux_sym_timestamp_token1,
    STATE(540), 1,
      sym_timestamp,
  [14329] = 2,
    ACTIONS(1610), 1,
      sym_object_name,
    STATE(1298), 1,
      sym_column_list,
  [14336] = 2,
    ACTIONS(1610), 1,
      sym_object_name,
    STATE(1297), 1,
      sym_column_list,
  [14343] = 2,
    ACTIONS(1610), 1,
      sym_object_name,
    STATE(920), 1,
      sym_column_list,
  [14350] = 2,
    ACTIONS(1646), 1,
      aux_sym_resource_token5,
    ACTIONS(1648), 1,
      aux_sym_drop_aggregate_token1,
  [14357] = 2,
    ACTIONS(1650), 1,
      anon_sym_EQ,
    ACTIONS(1652), 1,
      anon_sym_LBRACK,
  [14364] = 2,
    ACTIONS(1620), 1,
      sym_object_name,
    STATE(1289), 1,
      sym_table_name,
  [14371] = 2,
    ACTIONS(1654), 1,
      sym_object_name,
    STATE(1246), 1,
      sym_trigger_name,
  [14378] = 2,
    ACTIONS(1656), 1,
      aux_sym_truncate_token2,
    ACTIONS(1658), 1,
      sym_object_name,
  [14385] = 2,
    ACTIONS(1660), 1,
      anon_sym_DOT,
    ACTIONS(1662), 1,
      anon_sym_LPAREN,
  [14392] = 1,
    ACTIONS(1664), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [14397] = 2,
    ACTIONS(1315), 1,
      aux_sym_where_spec_token1,
    STATE(1253), 1,
      sym_materialized_view_where,
  [14404] = 2,
    ACTIONS(1666), 1,
      anon_sym_DOT,
    ACTIONS(1668), 1,
      aux_sym_select_element_token1,
  [14411] = 2,
    ACTIONS(1670), 1,
      sym__string_literal,
    STATE(359), 1,
      sym_trigger_class,
  [14418] = 2,
    ACTIONS(1610), 1,
      sym_object_name,
    STATE(1218), 1,
      sym_column_list,
  [14425] = 1,
    ACTIONS(1456), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [14430] = 2,
    ACTIONS(1315), 1,
      aux_sym_where_spec_token1,
    STATE(1214), 1,
      sym_materialized_view_where,
  [14437] = 2,
    ACTIONS(1672), 1,
      aux_sym_durable_writes_token1,
    STATE(266), 1,
      sym_durable_writes,
  [14444] = 2,
    ACTIONS(1674), 1,
      sym_object_name,
    STATE(1193), 1,
      sym_clustering_key_list,
  [14451] = 2,
    ACTIONS(1676), 1,
      aux_sym_role_with_options_token1,
    STATE(110), 1,
      sym_user_password,
  [14458] = 1,
    ACTIONS(1678), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14463] = 2,
    ACTIONS(1680), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1682), 1,
      sym_object_name,
  [14470] = 2,
    ACTIONS(1684), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1686), 1,
      sym_object_name,
  [14477] = 2,
    ACTIONS(1688), 1,
      sym__string_literal,
    ACTIONS(1690), 1,
      sym_object_name,
  [14484] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(561), 1,
      sym_assignment_element,
  [14491] = 2,
    ACTIONS(1309), 1,
      sym_object_name,
    STATE(781), 1,
      sym_column_not_null,
  [14498] = 2,
    ACTIONS(1692), 1,
      sym__string_literal,
    ACTIONS(1694), 1,
      sym_object_name,
  [14505] = 2,
    ACTIONS(1696), 1,
      sym__string_literal,
    ACTIONS(1698), 1,
      sym_object_name,
  [14512] = 2,
    ACTIONS(1644), 1,
      sym_object_name,
    STATE(1211), 1,
      sym_user_name,
  [14519] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(532), 1,
      sym_assignment_element,
  [14526] = 1,
    ACTIONS(1700), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [14531] = 2,
    ACTIONS(1610), 1,
      sym_object_name,
    STATE(904), 1,
      sym_column_list,
  [14538] = 1,
    ACTIONS(1232), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14543] = 2,
    ACTIONS(1702), 1,
      anon_sym_DOT,
    ACTIONS(1704), 1,
      aux_sym_using_timestamp_spec_token1,
  [14550] = 1,
    ACTIONS(1364), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14555] = 2,
    ACTIONS(1614), 1,
      aux_sym_from_spec_token1,
    STATE(73), 1,
      sym_from_spec,
  [14562] = 2,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    STATE(161), 1,
      sym_where_spec,
  [14569] = 2,
    ACTIONS(1706), 1,
      anon_sym_DOT,
    ACTIONS(1708), 1,
      anon_sym_LPAREN,
  [14576] = 2,
    ACTIONS(1710), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1712), 1,
      aux_sym_create_materialized_view_token1,
  [14583] = 2,
    ACTIONS(1315), 1,
      aux_sym_where_spec_token1,
    STATE(1117), 1,
      sym_materialized_view_where,
  [14590] = 2,
    ACTIONS(1714), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1716), 1,
      sym_object_name,
  [14597] = 2,
    ACTIONS(1718), 1,
      anon_sym_DOT,
    ACTIONS(1720), 1,
      anon_sym_LPAREN,
  [14604] = 2,
    ACTIONS(1722), 1,
      anon_sym_DOT,
    ACTIONS(1724), 1,
      anon_sym_LPAREN,
  [14611] = 2,
    ACTIONS(1610), 1,
      sym_object_name,
    STATE(1113), 1,
      sym_column_list,
  [14618] = 2,
    ACTIONS(1620), 1,
      sym_object_name,
    STATE(89), 1,
      sym_table_name,
  [14625] = 2,
    ACTIONS(1726), 1,
      anon_sym_DOT,
    ACTIONS(1728), 1,
      anon_sym_LPAREN,
  [14632] = 2,
    ACTIONS(1730), 1,
      anon_sym_DOT,
    ACTIONS(1732), 1,
      anon_sym_LPAREN,
  [14639] = 2,
    ACTIONS(1734), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1736), 1,
      sym_object_name,
  [14646] = 1,
    ACTIONS(1738), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14651] = 2,
    ACTIONS(1674), 1,
      sym_object_name,
    STATE(1094), 1,
      sym_clustering_key_list,
  [14658] = 2,
    ACTIONS(1644), 1,
      sym_object_name,
    STATE(388), 1,
      sym_user_name,
  [14665] = 2,
    ACTIONS(1380), 1,
      sym_object_name,
    STATE(211), 1,
      sym_alter_type_rename_item,
  [14672] = 2,
    ACTIONS(1614), 1,
      aux_sym_from_spec_token1,
    STATE(558), 1,
      sym_from_spec,
  [14679] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(538), 1,
      sym_assignment_element,
  [14686] = 2,
    ACTIONS(1672), 1,
      aux_sym_durable_writes_token1,
    STATE(285), 1,
      sym_durable_writes,
  [14693] = 1,
    ACTIONS(1740), 2,
      sym__string_literal,
      sym__decimal_literal,
  [14698] = 1,
    ACTIONS(1320), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14703] = 1,
    ACTIONS(1742), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14708] = 1,
    ACTIONS(1345), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14713] = 2,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_assignment_tuple,
  [14720] = 2,
    ACTIONS(1672), 1,
      aux_sym_durable_writes_token1,
    STATE(276), 1,
      sym_durable_writes,
  [14727] = 1,
    ACTIONS(1336), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14732] = 2,
    ACTIONS(1744), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1746), 1,
      sym_object_name,
  [14739] = 1,
    ACTIONS(1748), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14744] = 2,
    ACTIONS(1750), 1,
      anon_sym_COMMA,
    ACTIONS(1752), 1,
      anon_sym_RPAREN,
  [14751] = 2,
    ACTIONS(1676), 1,
      aux_sym_role_with_options_token1,
    STATE(128), 1,
      sym_user_password,
  [14758] = 2,
    ACTIONS(1754), 1,
      sym_object_name,
    STATE(1032), 1,
      sym_partition_key_list,
  [14765] = 2,
    ACTIONS(1756), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1758), 1,
      sym_object_name,
  [14772] = 2,
    ACTIONS(1614), 1,
      aux_sym_from_spec_token1,
    STATE(70), 1,
      sym_from_spec,
  [14779] = 2,
    ACTIONS(1760), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1762), 1,
      sym_object_name,
  [14786] = 2,
    ACTIONS(1764), 1,
      anon_sym_DOT,
    ACTIONS(1766), 1,
      anon_sym_LPAREN,
  [14793] = 2,
    ACTIONS(1768), 1,
      sym_object_name,
    STATE(418), 1,
      sym_alter_table_column_definition,
  [14800] = 2,
    ACTIONS(1770), 1,
      anon_sym_DOT,
    ACTIONS(1772), 1,
      anon_sym_LPAREN,
  [14807] = 2,
    ACTIONS(1676), 1,
      aux_sym_role_with_options_token1,
    STATE(111), 1,
      sym_user_password,
  [14814] = 1,
    ACTIONS(1325), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14819] = 1,
    ACTIONS(1774), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14824] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(544), 1,
      sym_assignment_element,
  [14831] = 2,
    ACTIONS(1620), 1,
      sym_object_name,
    STATE(1258), 1,
      sym_table_name,
  [14838] = 2,
    ACTIONS(1670), 1,
      sym__string_literal,
    STATE(329), 1,
      sym_trigger_class,
  [14845] = 2,
    ACTIONS(1776), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1778), 1,
      sym_object_name,
  [14852] = 2,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_assignment_tuple,
  [14859] = 2,
    ACTIONS(1780), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1782), 1,
      sym_object_name,
  [14866] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(800), 1,
      sym_assignment_element,
  [14873] = 2,
    ACTIONS(1784), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1786), 1,
      sym_object_name,
  [14880] = 2,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    STATE(605), 1,
      sym_assignment_tuple,
  [14887] = 2,
    ACTIONS(1788), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1790), 1,
      sym_object_name,
  [14894] = 1,
    ACTIONS(1407), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14899] = 2,
    ACTIONS(1792), 1,
      anon_sym_DOT,
    ACTIONS(1794), 1,
      aux_sym_select_element_token1,
  [14906] = 1,
    ACTIONS(1796), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14911] = 2,
    ACTIONS(1798), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1800), 1,
      sym_object_name,
  [14918] = 2,
    ACTIONS(1620), 1,
      sym_object_name,
    STATE(1167), 1,
      sym_table_name,
  [14925] = 2,
    ACTIONS(1610), 1,
      sym_object_name,
    STATE(990), 1,
      sym_column_list,
  [14932] = 2,
    ACTIONS(1802), 1,
      anon_sym_DOT,
    ACTIONS(1804), 1,
      aux_sym_create_index_token3,
  [14939] = 2,
    ACTIONS(1806), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1808), 1,
      sym_object_name,
  [14946] = 1,
    ACTIONS(1416), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14951] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(542), 1,
      sym_assignment_element,
  [14958] = 1,
    ACTIONS(1810), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14963] = 2,
    ACTIONS(1812), 1,
      sym__string_literal,
    STATE(689), 1,
      sym_option_hash_item,
  [14970] = 2,
    ACTIONS(1814), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1816), 1,
      sym_object_name,
  [14977] = 2,
    ACTIONS(1812), 1,
      sym__string_literal,
    STATE(822), 1,
      sym_option_hash_item,
  [14984] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(568), 1,
      sym_assignment_element,
  [14991] = 1,
    ACTIONS(1818), 2,
      sym__string_literal,
      sym__decimal_literal,
  [14996] = 2,
    ACTIONS(1338), 1,
      sym__string_literal,
    STATE(827), 1,
      sym_replication_list_item,
  [15003] = 2,
    ACTIONS(1256), 1,
      aux_sym_timestamp_token1,
    STATE(248), 1,
      sym_timestamp,
  [15010] = 1,
    ACTIONS(1451), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15015] = 2,
    ACTIONS(1820), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1822), 1,
      sym_object_name,
  [15022] = 1,
    ACTIONS(1824), 1,
      aux_sym_relation_contains_key_token2,
  [15026] = 1,
    ACTIONS(1826), 1,
      aux_sym_create_aggregate_token5,
  [15030] = 1,
    ACTIONS(1828), 1,
      aux_sym_order_spec_token2,
  [15034] = 1,
    ACTIONS(1830), 1,
      aux_sym_update_token2,
  [15038] = 1,
    ACTIONS(1832), 1,
      aux_sym_create_function_token1,
  [15042] = 1,
    ACTIONS(1834), 1,
      anon_sym_RPAREN,
  [15046] = 1,
    ACTIONS(1836), 1,
      anon_sym_RPAREN,
  [15050] = 1,
    ACTIONS(1838), 1,
      anon_sym_RPAREN,
  [15054] = 1,
    ACTIONS(1840), 1,
      anon_sym_RPAREN,
  [15058] = 1,
    ACTIONS(1842), 1,
      anon_sym_LBRACE,
  [15062] = 1,
    ACTIONS(1844), 1,
      aux_sym_create_materialized_view_token2,
  [15066] = 1,
    ACTIONS(1846), 1,
      aux_sym_constant_token2,
  [15070] = 1,
    ACTIONS(1848), 1,
      aux_sym_create_function_token1,
  [15074] = 1,
    ACTIONS(1850), 1,
      aux_sym_create_index_token3,
  [15078] = 1,
    ACTIONS(1852), 1,
      sym_object_name,
  [15082] = 1,
    ACTIONS(1854), 1,
      aux_sym_create_keyspace_token1,
  [15086] = 1,
    ACTIONS(1856), 1,
      aux_sym_create_function_token1,
  [15090] = 1,
    ACTIONS(1858), 1,
      anon_sym_RPAREN,
  [15094] = 1,
    ACTIONS(1860), 1,
      aux_sym_return_mode_token2,
  [15098] = 1,
    ACTIONS(1862), 1,
      aux_sym_create_function_token1,
  [15102] = 1,
    ACTIONS(1864), 1,
      sym_object_name,
  [15106] = 1,
    ACTIONS(1866), 1,
      aux_sym_create_function_token2,
  [15110] = 1,
    ACTIONS(1868), 1,
      sym_object_name,
  [15114] = 1,
    ACTIONS(1870), 1,
      aux_sym_drop_materialized_view_token2,
  [15118] = 1,
    ACTIONS(1872), 1,
      aux_sym_create_aggregate_token3,
  [15122] = 1,
    ACTIONS(1874), 1,
      sym_object_name,
  [15126] = 1,
    ACTIONS(1876), 1,
      aux_sym_delete_statement_token3,
  [15130] = 1,
    ACTIONS(1878), 1,
      aux_sym_insert_statement_token3,
  [15134] = 1,
    ACTIONS(1880), 1,
      aux_sym_create_index_token3,
  [15138] = 1,
    ACTIONS(1882), 1,
      sym_object_name,
  [15142] = 1,
    ACTIONS(1884), 1,
      aux_sym_select_element_token1,
  [15146] = 1,
    ACTIONS(1886), 1,
      sym_object_name,
  [15150] = 1,
    ACTIONS(1888), 1,
      aux_sym_from_spec_token1,
  [15154] = 1,
    ACTIONS(1890), 1,
      sym_object_name,
  [15158] = 1,
    ACTIONS(1892), 1,
      sym_object_name,
  [15162] = 1,
    ACTIONS(1894), 1,
      aux_sym_create_aggregate_token2,
  [15166] = 1,
    ACTIONS(1896), 1,
      aux_sym_grant_token2,
  [15170] = 1,
    ACTIONS(1898), 1,
      anon_sym_LPAREN,
  [15174] = 1,
    ACTIONS(1900), 1,
      anon_sym_RPAREN,
  [15178] = 1,
    ACTIONS(1902), 1,
      aux_sym_select_statement_token5,
  [15182] = 1,
    ACTIONS(1904), 1,
      sym_object_name,
  [15186] = 1,
    ACTIONS(1906), 1,
      anon_sym_RPAREN,
  [15190] = 1,
    ACTIONS(1908), 1,
      sym_object_name,
  [15194] = 1,
    ACTIONS(1910), 1,
      aux_sym_relation_contains_key_token2,
  [15198] = 1,
    ACTIONS(1912), 1,
      aux_sym_select_statement_token1,
  [15202] = 1,
    ACTIONS(1914), 1,
      aux_sym_create_function_token1,
  [15206] = 1,
    ACTIONS(1916), 1,
      anon_sym_RPAREN,
  [15210] = 1,
    ACTIONS(1918), 1,
      sym_object_name,
  [15214] = 1,
    ACTIONS(1920), 1,
      aux_sym_from_spec_token1,
  [15218] = 1,
    ACTIONS(1922), 1,
      anon_sym_RPAREN,
  [15222] = 1,
    ACTIONS(1924), 1,
      sym_object_name,
  [15226] = 1,
    ACTIONS(1926), 1,
      aux_sym_select_statement_token5,
  [15230] = 1,
    ACTIONS(1928), 1,
      aux_sym_update_token2,
  [15234] = 1,
    ACTIONS(1930), 1,
      anon_sym_LPAREN,
  [15238] = 1,
    ACTIONS(1932), 1,
      sym_object_name,
  [15242] = 1,
    ACTIONS(1934), 1,
      sym_object_name,
  [15246] = 1,
    ACTIONS(1936), 1,
      aux_sym_relation_contains_key_token2,
  [15250] = 1,
    ACTIONS(1938), 1,
      sym_object_name,
  [15254] = 1,
    ACTIONS(1940), 1,
      anon_sym_RPAREN,
  [15258] = 1,
    ACTIONS(1942), 1,
      sym_object_name,
  [15262] = 1,
    ACTIONS(1944), 1,
      sym_object_name,
  [15266] = 1,
    ACTIONS(1946), 1,
      aux_sym_insert_statement_token3,
  [15270] = 1,
    ACTIONS(1948), 1,
      sym_object_name,
  [15274] = 1,
    ACTIONS(1950), 1,
      aux_sym_delete_statement_token3,
  [15278] = 1,
    ACTIONS(1952), 1,
      sym_object_name,
  [15282] = 1,
    ACTIONS(1954), 1,
      sym_object_name,
  [15286] = 1,
    ACTIONS(1956), 1,
      aux_sym_delete_statement_token3,
  [15290] = 1,
    ACTIONS(1958), 1,
      aux_sym_create_keyspace_token1,
  [15294] = 1,
    ACTIONS(1960), 1,
      sym_object_name,
  [15298] = 1,
    ACTIONS(1962), 1,
      aux_sym_insert_statement_token3,
  [15302] = 1,
    ACTIONS(1964), 1,
      sym_object_name,
  [15306] = 1,
    ACTIONS(1966), 1,
      aux_sym_insert_statement_token2,
  [15310] = 1,
    ACTIONS(1968), 1,
      sym_object_name,
  [15314] = 1,
    ACTIONS(1970), 1,
      aux_sym_insert_statement_token3,
  [15318] = 1,
    ACTIONS(1972), 1,
      aux_sym_insert_statement_token3,
  [15322] = 1,
    ACTIONS(1974), 1,
      aux_sym_delete_statement_token3,
  [15326] = 1,
    ACTIONS(1976), 1,
      aux_sym_insert_statement_token3,
  [15330] = 1,
    ACTIONS(1978), 1,
      aux_sym_create_materialized_view_token2,
  [15334] = 1,
    ACTIONS(1980), 1,
      sym_object_name,
  [15338] = 1,
    ACTIONS(1982), 1,
      aux_sym_from_spec_token1,
  [15342] = 1,
    ACTIONS(1984), 1,
      aux_sym_insert_statement_token3,
  [15346] = 1,
    ACTIONS(1986), 1,
      aux_sym_create_index_token3,
  [15350] = 1,
    ACTIONS(1988), 1,
      anon_sym_EQ,
  [15354] = 1,
    ACTIONS(1990), 1,
      anon_sym_RPAREN,
  [15358] = 1,
    ACTIONS(1992), 1,
      sym__decimal_literal,
  [15362] = 1,
    ACTIONS(1994), 1,
      anon_sym_LPAREN,
  [15366] = 1,
    ACTIONS(1996), 1,
      aux_sym_insert_statement_token3,
  [15370] = 1,
    ACTIONS(1998), 1,
      sym_object_name,
  [15374] = 1,
    ACTIONS(2000), 1,
      anon_sym_RPAREN,
  [15378] = 1,
    ACTIONS(2002), 1,
      anon_sym_RPAREN,
  [15382] = 1,
    ACTIONS(2004), 1,
      sym_object_name,
  [15386] = 1,
    ACTIONS(2006), 1,
      anon_sym_RPAREN,
  [15390] = 1,
    ACTIONS(2008), 1,
      anon_sym_RPAREN,
  [15394] = 1,
    ACTIONS(2010), 1,
      anon_sym_RBRACE,
  [15398] = 1,
    ACTIONS(2012), 1,
      sym_object_name,
  [15402] = 1,
    ACTIONS(2014), 1,
      anon_sym_LPAREN,
  [15406] = 1,
    ACTIONS(2016), 1,
      aux_sym_drop_materialized_view_token2,
  [15410] = 1,
    ACTIONS(2018), 1,
      anon_sym_LPAREN,
  [15414] = 1,
    ACTIONS(2020), 1,
      anon_sym_RPAREN,
  [15418] = 1,
    ACTIONS(2022), 1,
      sym_object_name,
  [15422] = 1,
    ACTIONS(2024), 1,
      aux_sym_create_function_token1,
  [15426] = 1,
    ACTIONS(2026), 1,
      sym_object_name,
  [15430] = 1,
    ACTIONS(2028), 1,
      aux_sym_create_function_token2,
  [15434] = 1,
    ACTIONS(2030), 1,
      sym_object_name,
  [15438] = 1,
    ACTIONS(2032), 1,
      aux_sym_create_function_token1,
  [15442] = 1,
    ACTIONS(2034), 1,
      aux_sym_create_function_token1,
  [15446] = 1,
    ACTIONS(2036), 1,
      aux_sym_select_element_token1,
  [15450] = 1,
    ACTIONS(2038), 1,
      sym_object_name,
  [15454] = 1,
    ACTIONS(2040), 1,
      aux_sym_create_function_token2,
  [15458] = 1,
    ACTIONS(2042), 1,
      anon_sym_RPAREN,
  [15462] = 1,
    ACTIONS(2044), 1,
      sym_object_name,
  [15466] = 1,
    ACTIONS(2046), 1,
      sym_object_name,
  [15470] = 1,
    ACTIONS(2048), 1,
      aux_sym_select_statement_token5,
  [15474] = 1,
    ACTIONS(2050), 1,
      anon_sym_RPAREN,
  [15478] = 1,
    ACTIONS(2052), 1,
      sym_object_name,
  [15482] = 1,
    ACTIONS(2054), 1,
      aux_sym_create_aggregate_token4,
  [15486] = 1,
    ACTIONS(2056), 1,
      aux_sym_create_aggregate_token5,
  [15490] = 1,
    ACTIONS(2058), 1,
      aux_sym_select_statement_token1,
  [15494] = 1,
    ACTIONS(2060), 1,
      aux_sym_from_spec_token1,
  [15498] = 1,
    ACTIONS(2062), 1,
      sym_object_name,
  [15502] = 1,
    ACTIONS(2064), 1,
      sym_object_name,
  [15506] = 1,
    ACTIONS(2066), 1,
      sym_object_name,
  [15510] = 1,
    ACTIONS(2068), 1,
      aux_sym_create_materialized_view_token1,
  [15514] = 1,
    ACTIONS(2070), 1,
      aux_sym_begin_batch_token4,
  [15518] = 1,
    ACTIONS(2072), 1,
      sym_object_name,
  [15522] = 1,
    ACTIONS(2074), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [15526] = 1,
    ACTIONS(2076), 1,
      sym_object_name,
  [15530] = 1,
    ACTIONS(2078), 1,
      anon_sym_LPAREN,
  [15534] = 1,
    ACTIONS(2080), 1,
      aux_sym_update_token2,
  [15538] = 1,
    ACTIONS(2082), 1,
      aux_sym_insert_statement_token3,
  [15542] = 1,
    ACTIONS(2084), 1,
      aux_sym_create_function_token1,
  [15546] = 1,
    ACTIONS(2086), 1,
      anon_sym_EQ,
  [15550] = 1,
    ACTIONS(2088), 1,
      aux_sym_insert_statement_token3,
  [15554] = 1,
    ACTIONS(2090), 1,
      aux_sym_create_function_token2,
  [15558] = 1,
    ACTIONS(2092), 1,
      anon_sym_STAR,
  [15562] = 1,
    ACTIONS(2094), 1,
      aux_sym_create_function_token1,
  [15566] = 1,
    ACTIONS(2096), 1,
      anon_sym_LPAREN,
  [15570] = 1,
    ACTIONS(2098), 1,
      anon_sym_RPAREN,
  [15574] = 1,
    ACTIONS(2100), 1,
      aux_sym_create_aggregate_token3,
  [15578] = 1,
    ACTIONS(2102), 1,
      anon_sym_RPAREN,
  [15582] = 1,
    ACTIONS(2104), 1,
      sym_object_name,
  [15586] = 1,
    ACTIONS(2106), 1,
      anon_sym_LPAREN,
  [15590] = 1,
    ACTIONS(2108), 1,
      anon_sym_EQ,
  [15594] = 1,
    ACTIONS(2110), 1,
      aux_sym_using_timestamp_spec_token1,
  [15598] = 1,
    ACTIONS(2112), 1,
      aux_sym_delete_statement_token3,
  [15602] = 1,
    ACTIONS(2114), 1,
      sym_object_name,
  [15606] = 1,
    ACTIONS(2116), 1,
      aux_sym_insert_statement_token3,
  [15610] = 1,
    ACTIONS(2118), 1,
      sym_object_name,
  [15614] = 1,
    ACTIONS(2120), 1,
      aux_sym_grant_token2,
  [15618] = 1,
    ACTIONS(2122), 1,
      anon_sym_GT,
  [15622] = 1,
    ACTIONS(2124), 1,
      sym_object_name,
  [15626] = 1,
    ACTIONS(2126), 1,
      aux_sym_create_function_token2,
  [15630] = 1,
    ACTIONS(2128), 1,
      sym_object_name,
  [15634] = 1,
    ACTIONS(2130), 1,
      sym_object_name,
  [15638] = 1,
    ACTIONS(2132), 1,
      anon_sym_COLON,
  [15642] = 1,
    ACTIONS(2134), 1,
      anon_sym_EQ,
  [15646] = 1,
    ACTIONS(2092), 1,
      sym_object_name,
  [15650] = 1,
    ACTIONS(2136), 1,
      sym_object_name,
  [15654] = 1,
    ACTIONS(2138), 1,
      sym_object_name,
  [15658] = 1,
    ACTIONS(2140), 1,
      sym_object_name,
  [15662] = 1,
    ACTIONS(2142), 1,
      anon_sym_RPAREN,
  [15666] = 1,
    ACTIONS(2144), 1,
      sym_object_name,
  [15670] = 1,
    ACTIONS(2146), 1,
      anon_sym_RPAREN,
  [15674] = 1,
    ACTIONS(2148), 1,
      sym_object_name,
  [15678] = 1,
    ACTIONS(2150), 1,
      anon_sym_RBRACE,
  [15682] = 1,
    ACTIONS(2152), 1,
      anon_sym_EQ,
  [15686] = 1,
    ACTIONS(2154), 1,
      sym_object_name,
  [15690] = 1,
    ACTIONS(2156), 1,
      aux_sym_create_function_token1,
  [15694] = 1,
    ACTIONS(2158), 1,
      anon_sym_LBRACE,
  [15698] = 1,
    ACTIONS(2160), 1,
      sym_object_name,
  [15702] = 1,
    ACTIONS(2162), 1,
      aux_sym_create_function_token2,
  [15706] = 1,
    ACTIONS(2164), 1,
      aux_sym_drop_type_token1,
  [15710] = 1,
    ACTIONS(2166), 1,
      aux_sym_create_function_token1,
  [15714] = 1,
    ACTIONS(2168), 1,
      sym_object_name,
  [15718] = 1,
    ACTIONS(2170), 1,
      aux_sym_create_function_token2,
  [15722] = 1,
    ACTIONS(2172), 1,
      aux_sym_create_index_token3,
  [15726] = 1,
    ACTIONS(2174), 1,
      sym__code_block,
  [15730] = 1,
    ACTIONS(2176), 1,
      aux_sym_select_element_token1,
  [15734] = 1,
    ACTIONS(2178), 1,
      sym_object_name,
  [15738] = 1,
    ACTIONS(2180), 1,
      sym_object_name,
  [15742] = 1,
    ACTIONS(2182), 1,
      aux_sym_create_aggregate_token3,
  [15746] = 1,
    ACTIONS(2184), 1,
      aux_sym_create_aggregate_token4,
  [15750] = 1,
    ACTIONS(2186), 1,
      aux_sym_create_aggregate_token3,
  [15754] = 1,
    ACTIONS(2188), 1,
      sym_object_name,
  [15758] = 1,
    ACTIONS(2190), 1,
      aux_sym_insert_statement_token3,
  [15762] = 1,
    ACTIONS(2192), 1,
      sym_object_name,
  [15766] = 1,
    ACTIONS(2194), 1,
      aux_sym_grant_token2,
  [15770] = 1,
    ACTIONS(2196), 1,
      aux_sym_create_function_token1,
  [15774] = 1,
    ACTIONS(2198), 1,
      aux_sym_column_not_null_token1,
  [15778] = 1,
    ACTIONS(2200), 1,
      aux_sym_insert_statement_token3,
  [15782] = 1,
    ACTIONS(2202), 1,
      anon_sym_LPAREN,
  [15786] = 1,
    ACTIONS(2204), 1,
      anon_sym_EQ,
  [15790] = 1,
    ACTIONS(2206), 1,
      sym_object_name,
  [15794] = 1,
    ACTIONS(2208), 1,
      sym_object_name,
  [15798] = 1,
    ACTIONS(2210), 1,
      sym_object_name,
  [15802] = 1,
    ACTIONS(2212), 1,
      aux_sym_create_function_token1,
  [15806] = 1,
    ACTIONS(2214), 1,
      sym_object_name,
  [15810] = 1,
    ACTIONS(2216), 1,
      sym_object_name,
  [15814] = 1,
    ACTIONS(2218), 1,
      sym_object_name,
  [15818] = 1,
    ACTIONS(2220), 1,
      aux_sym_create_function_token1,
  [15822] = 1,
    ACTIONS(2222), 1,
      aux_sym_resource_token2,
  [15826] = 1,
    ACTIONS(2224), 1,
      sym_object_name,
  [15830] = 1,
    ACTIONS(2226), 1,
      aux_sym_create_function_token2,
  [15834] = 1,
    ACTIONS(2228), 1,
      aux_sym_create_index_token3,
  [15838] = 1,
    ACTIONS(2230), 1,
      sym_object_name,
  [15842] = 1,
    ACTIONS(2232), 1,
      aux_sym_create_aggregate_token3,
  [15846] = 1,
    ACTIONS(2234), 1,
      sym_object_name,
  [15850] = 1,
    ACTIONS(2236), 1,
      aux_sym_insert_statement_token3,
  [15854] = 1,
    ACTIONS(2238), 1,
      sym_object_name,
  [15858] = 1,
    ACTIONS(2240), 1,
      aux_sym_delete_statement_token3,
  [15862] = 1,
    ACTIONS(2242), 1,
      sym_object_name,
  [15866] = 1,
    ACTIONS(2244), 1,
      sym_object_name,
  [15870] = 1,
    ACTIONS(2246), 1,
      sym_object_name,
  [15874] = 1,
    ACTIONS(2248), 1,
      sym_object_name,
  [15878] = 1,
    ACTIONS(2250), 1,
      sym__string_literal,
  [15882] = 1,
    ACTIONS(2252), 1,
      anon_sym_RBRACK,
  [15886] = 1,
    ACTIONS(2254), 1,
      sym_object_name,
  [15890] = 1,
    ACTIONS(2256), 1,
      sym_object_name,
  [15894] = 1,
    ACTIONS(2258), 1,
      anon_sym_LPAREN,
  [15898] = 1,
    ACTIONS(2260), 1,
      sym_object_name,
  [15902] = 1,
    ACTIONS(2262), 1,
      anon_sym_COMMA,
  [15906] = 1,
    ACTIONS(2264), 1,
      aux_sym_select_statement_token1,
  [15910] = 1,
    ACTIONS(2266), 1,
      anon_sym_RPAREN,
  [15914] = 1,
    ACTIONS(2268), 1,
      sym_object_name,
  [15918] = 1,
    ACTIONS(2270), 1,
      sym__boolean_literal,
  [15922] = 1,
    ACTIONS(2272), 1,
      sym_object_name,
  [15926] = 1,
    ACTIONS(2274), 1,
      aux_sym_create_function_token1,
  [15930] = 1,
    ACTIONS(2276), 1,
      sym_object_name,
  [15934] = 1,
    ACTIONS(2278), 1,
      sym_object_name,
  [15938] = 1,
    ACTIONS(2280), 1,
      aux_sym_create_function_token2,
  [15942] = 1,
    ACTIONS(2282), 1,
      sym_object_name,
  [15946] = 1,
    ACTIONS(2284), 1,
      aux_sym_select_element_token1,
  [15950] = 1,
    ACTIONS(2286), 1,
      sym_object_name,
  [15954] = 1,
    ACTIONS(2288), 1,
      aux_sym_create_function_token2,
  [15958] = 1,
    ACTIONS(2290), 1,
      anon_sym_RPAREN,
  [15962] = 1,
    ACTIONS(2292), 1,
      sym__code_block,
  [15966] = 1,
    ACTIONS(2294), 1,
      aux_sym_select_element_token1,
  [15970] = 1,
    ACTIONS(2296), 1,
      sym_object_name,
  [15974] = 1,
    ACTIONS(2298), 1,
      sym_object_name,
  [15978] = 1,
    ACTIONS(2300), 1,
      aux_sym_create_aggregate_token5,
  [15982] = 1,
    ACTIONS(2302), 1,
      aux_sym_create_aggregate_token6,
  [15986] = 1,
    ACTIONS(2304), 1,
      aux_sym_from_spec_token1,
  [15990] = 1,
    ACTIONS(2306), 1,
      sym_object_name,
  [15994] = 1,
    ACTIONS(2308), 1,
      sym_object_name,
  [15998] = 1,
    ACTIONS(2310), 1,
      aux_sym_create_materialized_view_token1,
  [16002] = 1,
    ACTIONS(2312), 1,
      aux_sym_create_materialized_view_token1,
  [16006] = 1,
    ACTIONS(2314), 1,
      aux_sym_insert_statement_token3,
  [16010] = 1,
    ACTIONS(2316), 1,
      sym_object_name,
  [16014] = 1,
    ACTIONS(2318), 1,
      aux_sym_insert_statement_token3,
  [16018] = 1,
    ACTIONS(2320), 1,
      aux_sym_create_aggregate_token4,
  [16022] = 1,
    ACTIONS(2322), 1,
      anon_sym_LPAREN,
  [16026] = 1,
    ACTIONS(2324), 1,
      sym_object_name,
  [16030] = 1,
    ACTIONS(2326), 1,
      aux_sym_select_statement_token5,
  [16034] = 1,
    ACTIONS(2328), 1,
      sym_object_name,
  [16038] = 1,
    ACTIONS(2330), 1,
      sym_object_name,
  [16042] = 1,
    ACTIONS(2332), 1,
      ts_builtin_sym_end,
  [16046] = 1,
    ACTIONS(2334), 1,
      aux_sym_create_function_token1,
  [16050] = 1,
    ACTIONS(2336), 1,
      aux_sym_create_aggregate_token3,
  [16054] = 1,
    ACTIONS(2338), 1,
      aux_sym_create_function_token2,
  [16058] = 1,
    ACTIONS(2340), 1,
      aux_sym_begin_batch_token4,
  [16062] = 1,
    ACTIONS(2342), 1,
      aux_sym_create_function_token1,
  [16066] = 1,
    ACTIONS(2344), 1,
      aux_sym_select_element_token1,
  [16070] = 1,
    ACTIONS(2346), 1,
      sym_object_name,
  [16074] = 1,
    ACTIONS(2348), 1,
      aux_sym_create_function_token2,
  [16078] = 1,
    ACTIONS(2350), 1,
      anon_sym_RPAREN,
  [16082] = 1,
    ACTIONS(2352), 1,
      sym_object_name,
  [16086] = 1,
    ACTIONS(2354), 1,
      aux_sym_create_aggregate_token4,
  [16090] = 1,
    ACTIONS(2356), 1,
      sym_object_name,
  [16094] = 1,
    ACTIONS(2358), 1,
      anon_sym_RPAREN,
  [16098] = 1,
    ACTIONS(2360), 1,
      anon_sym_LPAREN,
  [16102] = 1,
    ACTIONS(2362), 1,
      anon_sym_LPAREN,
  [16106] = 1,
    ACTIONS(2364), 1,
      anon_sym_COLON,
  [16110] = 1,
    ACTIONS(2366), 1,
      anon_sym_RPAREN,
  [16114] = 1,
    ACTIONS(2368), 1,
      aux_sym_create_function_token1,
  [16118] = 1,
    ACTIONS(2370), 1,
      sym_object_name,
  [16122] = 1,
    ACTIONS(2372), 1,
      aux_sym_create_index_token3,
  [16126] = 1,
    ACTIONS(2374), 1,
      aux_sym_delete_statement_token3,
  [16130] = 1,
    ACTIONS(2376), 1,
      aux_sym_create_function_token2,
  [16134] = 1,
    ACTIONS(2378), 1,
      aux_sym_delete_statement_token3,
  [16138] = 1,
    ACTIONS(2380), 1,
      aux_sym_create_function_token1,
  [16142] = 1,
    ACTIONS(2382), 1,
      aux_sym_select_element_token1,
  [16146] = 1,
    ACTIONS(2384), 1,
      sym_object_name,
  [16150] = 1,
    ACTIONS(2386), 1,
      aux_sym_create_function_token2,
  [16154] = 1,
    ACTIONS(2388), 1,
      sym__code_block,
  [16158] = 1,
    ACTIONS(2390), 1,
      aux_sym_select_element_token1,
  [16162] = 1,
    ACTIONS(2392), 1,
      sym_object_name,
  [16166] = 1,
    ACTIONS(2394), 1,
      sym_object_name,
  [16170] = 1,
    ACTIONS(2396), 1,
      sym__code_block,
  [16174] = 1,
    ACTIONS(2398), 1,
      aux_sym_create_aggregate_token4,
  [16178] = 1,
    ACTIONS(2400), 1,
      aux_sym_create_aggregate_token5,
  [16182] = 1,
    ACTIONS(2402), 1,
      sym_object_name,
  [16186] = 1,
    ACTIONS(2404), 1,
      aux_sym_delete_statement_token3,
  [16190] = 1,
    ACTIONS(2406), 1,
      sym_object_name,
  [16194] = 1,
    ACTIONS(2408), 1,
      sym_object_name,
  [16198] = 1,
    ACTIONS(2410), 1,
      aux_sym_create_materialized_view_token1,
  [16202] = 1,
    ACTIONS(2412), 1,
      anon_sym_LPAREN,
  [16206] = 1,
    ACTIONS(2414), 1,
      aux_sym_relation_contains_key_token2,
  [16210] = 1,
    ACTIONS(2416), 1,
      aux_sym_relation_contains_key_token2,
  [16214] = 1,
    ACTIONS(2418), 1,
      aux_sym_constant_token2,
  [16218] = 1,
    ACTIONS(2420), 1,
      aux_sym_create_materialized_view_token1,
  [16222] = 1,
    ACTIONS(2422), 1,
      aux_sym_return_mode_token2,
  [16226] = 1,
    ACTIONS(2424), 1,
      aux_sym_create_aggregate_token3,
  [16230] = 1,
    ACTIONS(2426), 1,
      aux_sym_constant_token2,
  [16234] = 1,
    ACTIONS(2428), 1,
      sym_object_name,
  [16238] = 1,
    ACTIONS(2430), 1,
      aux_sym_create_function_token1,
  [16242] = 1,
    ACTIONS(2432), 1,
      aux_sym_delete_statement_token3,
  [16246] = 1,
    ACTIONS(2434), 1,
      sym_object_name,
  [16250] = 1,
    ACTIONS(2436), 1,
      aux_sym_create_function_token2,
  [16254] = 1,
    ACTIONS(2438), 1,
      aux_sym_delete_statement_token3,
  [16258] = 1,
    ACTIONS(2440), 1,
      aux_sym_create_function_token1,
  [16262] = 1,
    ACTIONS(2442), 1,
      sym_object_name,
  [16266] = 1,
    ACTIONS(2444), 1,
      aux_sym_create_function_token2,
  [16270] = 1,
    ACTIONS(2446), 1,
      sym_object_name,
  [16274] = 1,
    ACTIONS(2448), 1,
      sym__code_block,
  [16278] = 1,
    ACTIONS(2450), 1,
      aux_sym_select_element_token1,
  [16282] = 1,
    ACTIONS(2452), 1,
      sym_object_name,
  [16286] = 1,
    ACTIONS(2454), 1,
      aux_sym_create_aggregate_token3,
  [16290] = 1,
    ACTIONS(2456), 1,
      aux_sym_create_aggregate_token4,
  [16294] = 1,
    ACTIONS(2458), 1,
      sym_object_name,
  [16298] = 1,
    ACTIONS(2460), 1,
      sym_object_name,
  [16302] = 1,
    ACTIONS(2462), 1,
      aux_sym_delete_statement_token3,
  [16306] = 1,
    ACTIONS(2464), 1,
      anon_sym_RPAREN,
  [16310] = 1,
    ACTIONS(1107), 1,
      sym_object_name,
  [16314] = 1,
    ACTIONS(2466), 1,
      sym_object_name,
  [16318] = 1,
    ACTIONS(2468), 1,
      aux_sym_create_function_token2,
  [16322] = 1,
    ACTIONS(2470), 1,
      sym_object_name,
  [16326] = 1,
    ACTIONS(2472), 1,
      sym__code_block,
  [16330] = 1,
    ACTIONS(2474), 1,
      aux_sym_select_element_token1,
  [16334] = 1,
    ACTIONS(2476), 1,
      sym_object_name,
  [16338] = 1,
    ACTIONS(2478), 1,
      aux_sym_insert_statement_token3,
  [16342] = 1,
    ACTIONS(2480), 1,
      sym__code_block,
  [16346] = 1,
    ACTIONS(2482), 1,
      aux_sym_select_element_token1,
  [16350] = 1,
    ACTIONS(2484), 1,
      sym_object_name,
  [16354] = 1,
    ACTIONS(2486), 1,
      sym_object_name,
  [16358] = 1,
    ACTIONS(2488), 1,
      sym_object_name,
  [16362] = 1,
    ACTIONS(2490), 1,
      aux_sym_create_aggregate_token6,
  [16366] = 1,
    ACTIONS(2492), 1,
      aux_sym_delete_statement_token3,
  [16370] = 1,
    ACTIONS(2494), 1,
      sym__decimal_literal,
  [16374] = 1,
    ACTIONS(2496), 1,
      aux_sym_delete_statement_token3,
  [16378] = 1,
    ACTIONS(2498), 1,
      aux_sym_create_materialized_view_token2,
  [16382] = 1,
    ACTIONS(2500), 1,
      aux_sym_create_function_token1,
  [16386] = 1,
    ACTIONS(2502), 1,
      aux_sym_relation_contains_key_token2,
  [16390] = 1,
    ACTIONS(2504), 1,
      aux_sym_create_materialized_view_token1,
  [16394] = 1,
    ACTIONS(2506), 1,
      anon_sym_LPAREN,
  [16398] = 1,
    ACTIONS(2508), 1,
      anon_sym_LPAREN,
  [16402] = 1,
    ACTIONS(2510), 1,
      anon_sym_EQ,
  [16406] = 1,
    ACTIONS(2512), 1,
      anon_sym_RPAREN,
  [16410] = 1,
    ACTIONS(2514), 1,
      sym_object_name,
  [16414] = 1,
    ACTIONS(2516), 1,
      aux_sym_create_function_token1,
  [16418] = 1,
    ACTIONS(2518), 1,
      aux_sym_using_timestamp_spec_token1,
  [16422] = 1,
    ACTIONS(2520), 1,
      sym_object_name,
  [16426] = 1,
    ACTIONS(2522), 1,
      aux_sym_create_function_token2,
  [16430] = 1,
    ACTIONS(2524), 1,
      sym_object_name,
  [16434] = 1,
    ACTIONS(2526), 1,
      aux_sym_select_element_token1,
  [16438] = 1,
    ACTIONS(2528), 1,
      sym_object_name,
  [16442] = 1,
    ACTIONS(2530), 1,
      aux_sym_create_function_token2,
  [16446] = 1,
    ACTIONS(2532), 1,
      aux_sym_delete_statement_token3,
  [16450] = 1,
    ACTIONS(2534), 1,
      sym__code_block,
  [16454] = 1,
    ACTIONS(2536), 1,
      aux_sym_select_element_token1,
  [16458] = 1,
    ACTIONS(2538), 1,
      sym_object_name,
  [16462] = 1,
    ACTIONS(2540), 1,
      anon_sym_LPAREN,
  [16466] = 1,
    ACTIONS(2542), 1,
      aux_sym_create_aggregate_token5,
  [16470] = 1,
    ACTIONS(2544), 1,
      aux_sym_create_aggregate_token6,
  [16474] = 1,
    ACTIONS(2546), 1,
      aux_sym_select_element_token1,
  [16478] = 1,
    ACTIONS(2548), 1,
      sym_object_name,
  [16482] = 1,
    ACTIONS(2550), 1,
      aux_sym_create_function_token2,
  [16486] = 1,
    ACTIONS(2552), 1,
      aux_sym_create_keyspace_token1,
  [16490] = 1,
    ACTIONS(2554), 1,
      sym__code_block,
  [16494] = 1,
    ACTIONS(2556), 1,
      aux_sym_select_element_token1,
  [16498] = 1,
    ACTIONS(2558), 1,
      aux_sym_delete_statement_token3,
  [16502] = 1,
    ACTIONS(2560), 1,
      sym__code_block,
  [16506] = 1,
    ACTIONS(2562), 1,
      aux_sym_create_aggregate_token5,
  [16510] = 1,
    ACTIONS(2564), 1,
      aux_sym_create_aggregate_token6,
  [16514] = 1,
    ACTIONS(2566), 1,
      anon_sym_RBRACE,
  [16518] = 1,
    ACTIONS(2568), 1,
      aux_sym_using_timestamp_spec_token1,
  [16522] = 1,
    ACTIONS(2570), 1,
      anon_sym_COLON,
  [16526] = 1,
    ACTIONS(2572), 1,
      anon_sym_COLON,
  [16530] = 1,
    ACTIONS(2574), 1,
      aux_sym_select_element_token1,
  [16534] = 1,
    ACTIONS(2576), 1,
      sym_object_name,
  [16538] = 1,
    ACTIONS(2578), 1,
      sym_object_name,
  [16542] = 1,
    ACTIONS(2580), 1,
      aux_sym_create_materialized_view_token1,
  [16546] = 1,
    ACTIONS(2582), 1,
      aux_sym_create_materialized_view_token1,
  [16550] = 1,
    ACTIONS(2584), 1,
      anon_sym_LPAREN,
  [16554] = 1,
    ACTIONS(2586), 1,
      aux_sym_relation_contains_key_token2,
  [16558] = 1,
    ACTIONS(2588), 1,
      aux_sym_create_aggregate_token4,
  [16562] = 1,
    ACTIONS(2590), 1,
      anon_sym_RPAREN,
  [16566] = 1,
    ACTIONS(2592), 1,
      anon_sym_LPAREN,
  [16570] = 1,
    ACTIONS(2594), 1,
      aux_sym_create_function_token2,
  [16574] = 1,
    ACTIONS(2596), 1,
      aux_sym_insert_statement_token2,
  [16578] = 1,
    ACTIONS(2598), 1,
      aux_sym_create_function_token1,
  [16582] = 1,
    ACTIONS(2600), 1,
      aux_sym_select_element_token1,
  [16586] = 1,
    ACTIONS(2602), 1,
      sym_object_name,
  [16590] = 1,
    ACTIONS(2604), 1,
      aux_sym_create_function_token2,
  [16594] = 1,
    ACTIONS(2606), 1,
      sym__code_block,
  [16598] = 1,
    ACTIONS(2608), 1,
      aux_sym_select_element_token1,
  [16602] = 1,
    ACTIONS(2610), 1,
      sym_object_name,
  [16606] = 1,
    ACTIONS(2612), 1,
      aux_sym_delete_statement_token3,
  [16610] = 1,
    ACTIONS(2614), 1,
      sym__code_block,
  [16614] = 1,
    ACTIONS(2616), 1,
      aux_sym_create_aggregate_token4,
  [16618] = 1,
    ACTIONS(2618), 1,
      aux_sym_create_aggregate_token5,
  [16622] = 1,
    ACTIONS(2620), 1,
      sym_object_name,
  [16626] = 1,
    ACTIONS(2622), 1,
      anon_sym_RPAREN,
  [16630] = 1,
    ACTIONS(2624), 1,
      sym__code_block,
  [16634] = 1,
    ACTIONS(2626), 1,
      aux_sym_select_element_token1,
  [16638] = 1,
    ACTIONS(2628), 1,
      sym_object_name,
  [16642] = 1,
    ACTIONS(2630), 1,
      sym_object_name,
  [16646] = 1,
    ACTIONS(2632), 1,
      sym__code_block,
  [16650] = 1,
    ACTIONS(2634), 1,
      aux_sym_delete_statement_token3,
  [16654] = 1,
    ACTIONS(2636), 1,
      sym_object_name,
  [16658] = 1,
    ACTIONS(2638), 1,
      sym_object_name,
  [16662] = 1,
    ACTIONS(2640), 1,
      aux_sym_delete_statement_token3,
  [16666] = 1,
    ACTIONS(2642), 1,
      sym_object_name,
  [16670] = 1,
    ACTIONS(2644), 1,
      anon_sym_LPAREN,
  [16674] = 1,
    ACTIONS(2646), 1,
      aux_sym_delete_statement_token3,
  [16678] = 1,
    ACTIONS(2648), 1,
      anon_sym_RPAREN,
  [16682] = 1,
    ACTIONS(2650), 1,
      sym_object_name,
  [16686] = 1,
    ACTIONS(2652), 1,
      anon_sym_LPAREN,
  [16690] = 1,
    ACTIONS(2654), 1,
      anon_sym_LPAREN,
  [16694] = 1,
    ACTIONS(2656), 1,
      aux_sym_order_spec_token1,
  [16698] = 1,
    ACTIONS(2658), 1,
      sym__boolean_literal,
  [16702] = 1,
    ACTIONS(2660), 1,
      sym_object_name,
  [16706] = 1,
    ACTIONS(2662), 1,
      aux_sym_relation_contains_key_token2,
  [16710] = 1,
    ACTIONS(2664), 1,
      aux_sym_relation_contains_key_token2,
  [16714] = 1,
    ACTIONS(2666), 1,
      anon_sym_RPAREN,
  [16718] = 1,
    ACTIONS(2668), 1,
      anon_sym_LPAREN,
  [16722] = 1,
    ACTIONS(2670), 1,
      anon_sym_RPAREN,
  [16726] = 1,
    ACTIONS(2672), 1,
      anon_sym_RPAREN,
  [16730] = 1,
    ACTIONS(2658), 1,
      sym__string_literal,
  [16734] = 1,
    ACTIONS(2674), 1,
      sym_object_name,
  [16738] = 1,
    ACTIONS(2676), 1,
      aux_sym_create_function_token2,
  [16742] = 1,
    ACTIONS(2678), 1,
      anon_sym_LPAREN,
  [16746] = 1,
    ACTIONS(2680), 1,
      sym__code_block,
  [16750] = 1,
    ACTIONS(2682), 1,
      aux_sym_select_element_token1,
  [16754] = 1,
    ACTIONS(2684), 1,
      sym_object_name,
  [16758] = 1,
    ACTIONS(2686), 1,
      anon_sym_GT,
  [16762] = 1,
    ACTIONS(2688), 1,
      sym__code_block,
  [16766] = 1,
    ACTIONS(2690), 1,
      aux_sym_select_element_token1,
  [16770] = 1,
    ACTIONS(2692), 1,
      aux_sym_create_function_token1,
  [16774] = 1,
    ACTIONS(2694), 1,
      aux_sym_create_index_token3,
  [16778] = 1,
    ACTIONS(2696), 1,
      sym_object_name,
  [16782] = 1,
    ACTIONS(2698), 1,
      aux_sym_create_aggregate_token6,
  [16786] = 1,
    ACTIONS(2700), 1,
      sym_object_name,
  [16790] = 1,
    ACTIONS(2702), 1,
      sym_object_name,
  [16794] = 1,
    ACTIONS(2704), 1,
      sym__code_block,
  [16798] = 1,
    ACTIONS(2706), 1,
      aux_sym_select_element_token1,
  [16802] = 1,
    ACTIONS(2708), 1,
      aux_sym_constant_token2,
  [16806] = 1,
    ACTIONS(2710), 1,
      aux_sym_create_aggregate_token6,
  [16810] = 1,
    ACTIONS(2712), 1,
      aux_sym_drop_materialized_view_token2,
  [16814] = 1,
    ACTIONS(2714), 1,
      aux_sym_select_statement_token1,
  [16818] = 1,
    ACTIONS(2716), 1,
      sym__decimal_literal,
  [16822] = 1,
    ACTIONS(2718), 1,
      sym_object_name,
  [16826] = 1,
    ACTIONS(2720), 1,
      aux_sym_delete_statement_token3,
  [16830] = 1,
    ACTIONS(2722), 1,
      anon_sym_LBRACE,
  [16834] = 1,
    ACTIONS(2724), 1,
      sym_object_name,
  [16838] = 1,
    ACTIONS(2726), 1,
      aux_sym_delete_statement_token3,
  [16842] = 1,
    ACTIONS(2728), 1,
      aux_sym_create_materialized_view_token2,
  [16846] = 1,
    ACTIONS(2730), 1,
      aux_sym_create_materialized_view_token1,
  [16850] = 1,
    ACTIONS(2732), 1,
      anon_sym_LPAREN,
  [16854] = 1,
    ACTIONS(2734), 1,
      anon_sym_LPAREN,
  [16858] = 1,
    ACTIONS(2736), 1,
      anon_sym_RPAREN,
  [16862] = 1,
    ACTIONS(2738), 1,
      aux_sym_delete_statement_token3,
  [16866] = 1,
    ACTIONS(2740), 1,
      anon_sym_RPAREN,
  [16870] = 1,
    ACTIONS(2742), 1,
      anon_sym_RPAREN,
  [16874] = 1,
    ACTIONS(2744), 1,
      sym_object_name,
  [16878] = 1,
    ACTIONS(2746), 1,
      anon_sym_RBRACK,
  [16882] = 1,
    ACTIONS(2748), 1,
      sym_object_name,
  [16886] = 1,
    ACTIONS(2750), 1,
      aux_sym_select_element_token1,
  [16890] = 1,
    ACTIONS(2752), 1,
      sym_object_name,
  [16894] = 1,
    ACTIONS(2754), 1,
      aux_sym_create_function_token2,
  [16898] = 1,
    ACTIONS(2756), 1,
      aux_sym_delete_statement_token3,
  [16902] = 1,
    ACTIONS(2758), 1,
      sym__code_block,
  [16906] = 1,
    ACTIONS(2760), 1,
      aux_sym_select_element_token1,
  [16910] = 1,
    ACTIONS(2762), 1,
      aux_sym_order_spec_token2,
  [16914] = 1,
    ACTIONS(2764), 1,
      sym__code_block,
  [16918] = 1,
    ACTIONS(2766), 1,
      aux_sym_create_aggregate_token5,
  [16922] = 1,
    ACTIONS(2768), 1,
      aux_sym_create_aggregate_token6,
  [16926] = 1,
    ACTIONS(2770), 1,
      sym__decimal_literal,
  [16930] = 1,
    ACTIONS(2772), 1,
      aux_sym_select_statement_token5,
  [16934] = 1,
    ACTIONS(2774), 1,
      sym__code_block,
  [16938] = 1,
    ACTIONS(2776), 1,
      anon_sym_RPAREN,
  [16942] = 1,
    ACTIONS(2778), 1,
      aux_sym_relation_contains_key_token2,
  [16946] = 1,
    ACTIONS(2780), 1,
      anon_sym_RPAREN,
  [16950] = 1,
    ACTIONS(2782), 1,
      sym_object_name,
  [16954] = 1,
    ACTIONS(2784), 1,
      anon_sym_LPAREN,
  [16958] = 1,
    ACTIONS(2786), 1,
      anon_sym_RPAREN,
  [16962] = 1,
    ACTIONS(2788), 1,
      anon_sym_LPAREN,
  [16966] = 1,
    ACTIONS(2790), 1,
      anon_sym_LPAREN,
  [16970] = 1,
    ACTIONS(2792), 1,
      aux_sym_insert_statement_token3,
  [16974] = 1,
    ACTIONS(2794), 1,
      sym__code_block,
  [16978] = 1,
    ACTIONS(2796), 1,
      aux_sym_select_element_token1,
  [16982] = 1,
    ACTIONS(2798), 1,
      sym_object_name,
  [16986] = 1,
    ACTIONS(2800), 1,
      aux_sym_delete_statement_token3,
  [16990] = 1,
    ACTIONS(2802), 1,
      sym__code_block,
  [16994] = 1,
    ACTIONS(2804), 1,
      anon_sym_RPAREN,
  [16998] = 1,
    ACTIONS(2806), 1,
      sym_object_name,
  [17002] = 1,
    ACTIONS(2808), 1,
      aux_sym_create_index_token3,
  [17006] = 1,
    ACTIONS(2810), 1,
      aux_sym_create_index_token3,
  [17010] = 1,
    ACTIONS(2812), 1,
      anon_sym_LPAREN,
  [17014] = 1,
    ACTIONS(2814), 1,
      aux_sym_delete_statement_token3,
  [17018] = 1,
    ACTIONS(2816), 1,
      anon_sym_LPAREN,
  [17022] = 1,
    ACTIONS(2818), 1,
      anon_sym_RPAREN,
  [17026] = 1,
    ACTIONS(2820), 1,
      anon_sym_RPAREN,
  [17030] = 1,
    ACTIONS(2822), 1,
      sym_object_name,
  [17034] = 1,
    ACTIONS(2824), 1,
      aux_sym_insert_statement_token3,
  [17038] = 1,
    ACTIONS(2826), 1,
      sym_object_name,
  [17042] = 1,
    ACTIONS(2828), 1,
      sym_object_name,
  [17046] = 1,
    ACTIONS(2830), 1,
      sym_object_name,
  [17050] = 1,
    ACTIONS(2832), 1,
      aux_sym_delete_statement_token3,
  [17054] = 1,
    ACTIONS(2834), 1,
      sym__code_block,
  [17058] = 1,
    ACTIONS(2836), 1,
      aux_sym_select_element_token1,
  [17062] = 1,
    ACTIONS(2838), 1,
      anon_sym_LPAREN,
  [17066] = 1,
    ACTIONS(2840), 1,
      aux_sym_create_aggregate_token6,
  [17070] = 1,
    ACTIONS(2842), 1,
      aux_sym_create_materialized_view_token2,
  [17074] = 1,
    ACTIONS(2844), 1,
      sym_object_name,
  [17078] = 1,
    ACTIONS(2846), 1,
      aux_sym_insert_statement_token3,
  [17082] = 1,
    ACTIONS(2848), 1,
      sym_object_name,
  [17086] = 1,
    ACTIONS(2850), 1,
      aux_sym_create_materialized_view_token2,
  [17090] = 1,
    ACTIONS(2852), 1,
      anon_sym_RPAREN,
  [17094] = 1,
    ACTIONS(2854), 1,
      aux_sym_insert_statement_token3,
  [17098] = 1,
    ACTIONS(2856), 1,
      sym__code_block,
  [17102] = 1,
    ACTIONS(2858), 1,
      aux_sym_select_statement_token5,
  [17106] = 1,
    ACTIONS(2860), 1,
      anon_sym_RPAREN,
  [17110] = 1,
    ACTIONS(2862), 1,
      sym_object_name,
  [17114] = 1,
    ACTIONS(2864), 1,
      anon_sym_LPAREN,
  [17118] = 1,
    ACTIONS(2866), 1,
      aux_sym_update_token2,
  [17122] = 1,
    ACTIONS(2868), 1,
      sym_object_name,
  [17126] = 1,
    ACTIONS(2870), 1,
      anon_sym_EQ,
  [17130] = 1,
    ACTIONS(2872), 1,
      sym_object_name,
  [17134] = 1,
    ACTIONS(2874), 1,
      aux_sym_delete_statement_token3,
  [17138] = 1,
    ACTIONS(2876), 1,
      aux_sym_delete_statement_token3,
  [17142] = 1,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
  [17146] = 1,
    ACTIONS(2878), 1,
      anon_sym_EQ,
  [17150] = 1,
    ACTIONS(2880), 1,
      aux_sym_delete_statement_token3,
  [17154] = 1,
    ACTIONS(2882), 1,
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
  [SMALL_STATE(61)] = 2166,
  [SMALL_STATE(62)] = 2197,
  [SMALL_STATE(63)] = 2224,
  [SMALL_STATE(64)] = 2255,
  [SMALL_STATE(65)] = 2286,
  [SMALL_STATE(66)] = 2313,
  [SMALL_STATE(67)] = 2340,
  [SMALL_STATE(68)] = 2367,
  [SMALL_STATE(69)] = 2397,
  [SMALL_STATE(70)] = 2423,
  [SMALL_STATE(71)] = 2463,
  [SMALL_STATE(72)] = 2503,
  [SMALL_STATE(73)] = 2531,
  [SMALL_STATE(74)] = 2571,
  [SMALL_STATE(75)] = 2600,
  [SMALL_STATE(76)] = 2625,
  [SMALL_STATE(77)] = 2650,
  [SMALL_STATE(78)] = 2675,
  [SMALL_STATE(79)] = 2700,
  [SMALL_STATE(80)] = 2725,
  [SMALL_STATE(81)] = 2750,
  [SMALL_STATE(82)] = 2775,
  [SMALL_STATE(83)] = 2800,
  [SMALL_STATE(84)] = 2839,
  [SMALL_STATE(85)] = 2864,
  [SMALL_STATE(86)] = 2893,
  [SMALL_STATE(87)] = 2922,
  [SMALL_STATE(88)] = 2956,
  [SMALL_STATE(89)] = 2980,
  [SMALL_STATE(90)] = 3004,
  [SMALL_STATE(91)] = 3028,
  [SMALL_STATE(92)] = 3052,
  [SMALL_STATE(93)] = 3080,
  [SMALL_STATE(94)] = 3114,
  [SMALL_STATE(95)] = 3148,
  [SMALL_STATE(96)] = 3172,
  [SMALL_STATE(97)] = 3195,
  [SMALL_STATE(98)] = 3222,
  [SMALL_STATE(99)] = 3247,
  [SMALL_STATE(100)] = 3272,
  [SMALL_STATE(101)] = 3297,
  [SMALL_STATE(102)] = 3322,
  [SMALL_STATE(103)] = 3348,
  [SMALL_STATE(104)] = 3374,
  [SMALL_STATE(105)] = 3396,
  [SMALL_STATE(106)] = 3424,
  [SMALL_STATE(107)] = 3446,
  [SMALL_STATE(108)] = 3468,
  [SMALL_STATE(109)] = 3496,
  [SMALL_STATE(110)] = 3524,
  [SMALL_STATE(111)] = 3550,
  [SMALL_STATE(112)] = 3576,
  [SMALL_STATE(113)] = 3598,
  [SMALL_STATE(114)] = 3624,
  [SMALL_STATE(115)] = 3646,
  [SMALL_STATE(116)] = 3674,
  [SMALL_STATE(117)] = 3702,
  [SMALL_STATE(118)] = 3724,
  [SMALL_STATE(119)] = 3752,
  [SMALL_STATE(120)] = 3774,
  [SMALL_STATE(121)] = 3802,
  [SMALL_STATE(122)] = 3830,
  [SMALL_STATE(123)] = 3852,
  [SMALL_STATE(124)] = 3874,
  [SMALL_STATE(125)] = 3896,
  [SMALL_STATE(126)] = 3924,
  [SMALL_STATE(127)] = 3952,
  [SMALL_STATE(128)] = 3976,
  [SMALL_STATE(129)] = 4002,
  [SMALL_STATE(130)] = 4024,
  [SMALL_STATE(131)] = 4052,
  [SMALL_STATE(132)] = 4080,
  [SMALL_STATE(133)] = 4102,
  [SMALL_STATE(134)] = 4123,
  [SMALL_STATE(135)] = 4144,
  [SMALL_STATE(136)] = 4167,
  [SMALL_STATE(137)] = 4190,
  [SMALL_STATE(138)] = 4213,
  [SMALL_STATE(139)] = 4238,
  [SMALL_STATE(140)] = 4263,
  [SMALL_STATE(141)] = 4288,
  [SMALL_STATE(142)] = 4311,
  [SMALL_STATE(143)] = 4336,
  [SMALL_STATE(144)] = 4361,
  [SMALL_STATE(145)] = 4382,
  [SMALL_STATE(146)] = 4407,
  [SMALL_STATE(147)] = 4432,
  [SMALL_STATE(148)] = 4457,
  [SMALL_STATE(149)] = 4478,
  [SMALL_STATE(150)] = 4503,
  [SMALL_STATE(151)] = 4528,
  [SMALL_STATE(152)] = 4553,
  [SMALL_STATE(153)] = 4578,
  [SMALL_STATE(154)] = 4603,
  [SMALL_STATE(155)] = 4628,
  [SMALL_STATE(156)] = 4653,
  [SMALL_STATE(157)] = 4678,
  [SMALL_STATE(158)] = 4703,
  [SMALL_STATE(159)] = 4728,
  [SMALL_STATE(160)] = 4753,
  [SMALL_STATE(161)] = 4778,
  [SMALL_STATE(162)] = 4803,
  [SMALL_STATE(163)] = 4828,
  [SMALL_STATE(164)] = 4853,
  [SMALL_STATE(165)] = 4878,
  [SMALL_STATE(166)] = 4903,
  [SMALL_STATE(167)] = 4924,
  [SMALL_STATE(168)] = 4949,
  [SMALL_STATE(169)] = 4974,
  [SMALL_STATE(170)] = 4999,
  [SMALL_STATE(171)] = 5024,
  [SMALL_STATE(172)] = 5045,
  [SMALL_STATE(173)] = 5070,
  [SMALL_STATE(174)] = 5095,
  [SMALL_STATE(175)] = 5120,
  [SMALL_STATE(176)] = 5141,
  [SMALL_STATE(177)] = 5166,
  [SMALL_STATE(178)] = 5191,
  [SMALL_STATE(179)] = 5216,
  [SMALL_STATE(180)] = 5241,
  [SMALL_STATE(181)] = 5276,
  [SMALL_STATE(182)] = 5297,
  [SMALL_STATE(183)] = 5322,
  [SMALL_STATE(184)] = 5343,
  [SMALL_STATE(185)] = 5364,
  [SMALL_STATE(186)] = 5385,
  [SMALL_STATE(187)] = 5410,
  [SMALL_STATE(188)] = 5435,
  [SMALL_STATE(189)] = 5460,
  [SMALL_STATE(190)] = 5485,
  [SMALL_STATE(191)] = 5510,
  [SMALL_STATE(192)] = 5535,
  [SMALL_STATE(193)] = 5556,
  [SMALL_STATE(194)] = 5581,
  [SMALL_STATE(195)] = 5606,
  [SMALL_STATE(196)] = 5627,
  [SMALL_STATE(197)] = 5648,
  [SMALL_STATE(198)] = 5673,
  [SMALL_STATE(199)] = 5694,
  [SMALL_STATE(200)] = 5719,
  [SMALL_STATE(201)] = 5744,
  [SMALL_STATE(202)] = 5769,
  [SMALL_STATE(203)] = 5794,
  [SMALL_STATE(204)] = 5819,
  [SMALL_STATE(205)] = 5840,
  [SMALL_STATE(206)] = 5861,
  [SMALL_STATE(207)] = 5883,
  [SMALL_STATE(208)] = 5905,
  [SMALL_STATE(209)] = 5927,
  [SMALL_STATE(210)] = 5947,
  [SMALL_STATE(211)] = 5969,
  [SMALL_STATE(212)] = 5989,
  [SMALL_STATE(213)] = 6011,
  [SMALL_STATE(214)] = 6033,
  [SMALL_STATE(215)] = 6055,
  [SMALL_STATE(216)] = 6077,
  [SMALL_STATE(217)] = 6097,
  [SMALL_STATE(218)] = 6119,
  [SMALL_STATE(219)] = 6141,
  [SMALL_STATE(220)] = 6163,
  [SMALL_STATE(221)] = 6185,
  [SMALL_STATE(222)] = 6207,
  [SMALL_STATE(223)] = 6229,
  [SMALL_STATE(224)] = 6249,
  [SMALL_STATE(225)] = 6271,
  [SMALL_STATE(226)] = 6293,
  [SMALL_STATE(227)] = 6315,
  [SMALL_STATE(228)] = 6347,
  [SMALL_STATE(229)] = 6369,
  [SMALL_STATE(230)] = 6389,
  [SMALL_STATE(231)] = 6409,
  [SMALL_STATE(232)] = 6431,
  [SMALL_STATE(233)] = 6451,
  [SMALL_STATE(234)] = 6471,
  [SMALL_STATE(235)] = 6493,
  [SMALL_STATE(236)] = 6515,
  [SMALL_STATE(237)] = 6537,
  [SMALL_STATE(238)] = 6559,
  [SMALL_STATE(239)] = 6581,
  [SMALL_STATE(240)] = 6603,
  [SMALL_STATE(241)] = 6625,
  [SMALL_STATE(242)] = 6647,
  [SMALL_STATE(243)] = 6667,
  [SMALL_STATE(244)] = 6687,
  [SMALL_STATE(245)] = 6709,
  [SMALL_STATE(246)] = 6731,
  [SMALL_STATE(247)] = 6753,
  [SMALL_STATE(248)] = 6775,
  [SMALL_STATE(249)] = 6795,
  [SMALL_STATE(250)] = 6817,
  [SMALL_STATE(251)] = 6839,
  [SMALL_STATE(252)] = 6861,
  [SMALL_STATE(253)] = 6883,
  [SMALL_STATE(254)] = 6905,
  [SMALL_STATE(255)] = 6927,
  [SMALL_STATE(256)] = 6949,
  [SMALL_STATE(257)] = 6968,
  [SMALL_STATE(258)] = 6987,
  [SMALL_STATE(259)] = 7006,
  [SMALL_STATE(260)] = 7025,
  [SMALL_STATE(261)] = 7044,
  [SMALL_STATE(262)] = 7063,
  [SMALL_STATE(263)] = 7082,
  [SMALL_STATE(264)] = 7101,
  [SMALL_STATE(265)] = 7120,
  [SMALL_STATE(266)] = 7139,
  [SMALL_STATE(267)] = 7158,
  [SMALL_STATE(268)] = 7177,
  [SMALL_STATE(269)] = 7196,
  [SMALL_STATE(270)] = 7215,
  [SMALL_STATE(271)] = 7234,
  [SMALL_STATE(272)] = 7253,
  [SMALL_STATE(273)] = 7272,
  [SMALL_STATE(274)] = 7291,
  [SMALL_STATE(275)] = 7310,
  [SMALL_STATE(276)] = 7329,
  [SMALL_STATE(277)] = 7348,
  [SMALL_STATE(278)] = 7367,
  [SMALL_STATE(279)] = 7386,
  [SMALL_STATE(280)] = 7405,
  [SMALL_STATE(281)] = 7424,
  [SMALL_STATE(282)] = 7443,
  [SMALL_STATE(283)] = 7462,
  [SMALL_STATE(284)] = 7481,
  [SMALL_STATE(285)] = 7500,
  [SMALL_STATE(286)] = 7519,
  [SMALL_STATE(287)] = 7538,
  [SMALL_STATE(288)] = 7557,
  [SMALL_STATE(289)] = 7576,
  [SMALL_STATE(290)] = 7595,
  [SMALL_STATE(291)] = 7614,
  [SMALL_STATE(292)] = 7633,
  [SMALL_STATE(293)] = 7652,
  [SMALL_STATE(294)] = 7671,
  [SMALL_STATE(295)] = 7690,
  [SMALL_STATE(296)] = 7709,
  [SMALL_STATE(297)] = 7728,
  [SMALL_STATE(298)] = 7747,
  [SMALL_STATE(299)] = 7766,
  [SMALL_STATE(300)] = 7785,
  [SMALL_STATE(301)] = 7804,
  [SMALL_STATE(302)] = 7825,
  [SMALL_STATE(303)] = 7844,
  [SMALL_STATE(304)] = 7863,
  [SMALL_STATE(305)] = 7882,
  [SMALL_STATE(306)] = 7901,
  [SMALL_STATE(307)] = 7920,
  [SMALL_STATE(308)] = 7939,
  [SMALL_STATE(309)] = 7958,
  [SMALL_STATE(310)] = 7977,
  [SMALL_STATE(311)] = 7996,
  [SMALL_STATE(312)] = 8015,
  [SMALL_STATE(313)] = 8034,
  [SMALL_STATE(314)] = 8053,
  [SMALL_STATE(315)] = 8072,
  [SMALL_STATE(316)] = 8091,
  [SMALL_STATE(317)] = 8110,
  [SMALL_STATE(318)] = 8129,
  [SMALL_STATE(319)] = 8148,
  [SMALL_STATE(320)] = 8167,
  [SMALL_STATE(321)] = 8186,
  [SMALL_STATE(322)] = 8205,
  [SMALL_STATE(323)] = 8224,
  [SMALL_STATE(324)] = 8243,
  [SMALL_STATE(325)] = 8262,
  [SMALL_STATE(326)] = 8281,
  [SMALL_STATE(327)] = 8300,
  [SMALL_STATE(328)] = 8319,
  [SMALL_STATE(329)] = 8338,
  [SMALL_STATE(330)] = 8357,
  [SMALL_STATE(331)] = 8376,
  [SMALL_STATE(332)] = 8395,
  [SMALL_STATE(333)] = 8414,
  [SMALL_STATE(334)] = 8433,
  [SMALL_STATE(335)] = 8452,
  [SMALL_STATE(336)] = 8471,
  [SMALL_STATE(337)] = 8490,
  [SMALL_STATE(338)] = 8509,
  [SMALL_STATE(339)] = 8528,
  [SMALL_STATE(340)] = 8547,
  [SMALL_STATE(341)] = 8566,
  [SMALL_STATE(342)] = 8585,
  [SMALL_STATE(343)] = 8604,
  [SMALL_STATE(344)] = 8623,
  [SMALL_STATE(345)] = 8642,
  [SMALL_STATE(346)] = 8661,
  [SMALL_STATE(347)] = 8680,
  [SMALL_STATE(348)] = 8699,
  [SMALL_STATE(349)] = 8718,
  [SMALL_STATE(350)] = 8737,
  [SMALL_STATE(351)] = 8756,
  [SMALL_STATE(352)] = 8775,
  [SMALL_STATE(353)] = 8794,
  [SMALL_STATE(354)] = 8813,
  [SMALL_STATE(355)] = 8832,
  [SMALL_STATE(356)] = 8851,
  [SMALL_STATE(357)] = 8870,
  [SMALL_STATE(358)] = 8889,
  [SMALL_STATE(359)] = 8908,
  [SMALL_STATE(360)] = 8927,
  [SMALL_STATE(361)] = 8946,
  [SMALL_STATE(362)] = 8965,
  [SMALL_STATE(363)] = 8984,
  [SMALL_STATE(364)] = 9003,
  [SMALL_STATE(365)] = 9022,
  [SMALL_STATE(366)] = 9041,
  [SMALL_STATE(367)] = 9060,
  [SMALL_STATE(368)] = 9079,
  [SMALL_STATE(369)] = 9098,
  [SMALL_STATE(370)] = 9117,
  [SMALL_STATE(371)] = 9136,
  [SMALL_STATE(372)] = 9155,
  [SMALL_STATE(373)] = 9174,
  [SMALL_STATE(374)] = 9193,
  [SMALL_STATE(375)] = 9212,
  [SMALL_STATE(376)] = 9231,
  [SMALL_STATE(377)] = 9250,
  [SMALL_STATE(378)] = 9269,
  [SMALL_STATE(379)] = 9288,
  [SMALL_STATE(380)] = 9307,
  [SMALL_STATE(381)] = 9326,
  [SMALL_STATE(382)] = 9345,
  [SMALL_STATE(383)] = 9364,
  [SMALL_STATE(384)] = 9383,
  [SMALL_STATE(385)] = 9402,
  [SMALL_STATE(386)] = 9421,
  [SMALL_STATE(387)] = 9440,
  [SMALL_STATE(388)] = 9459,
  [SMALL_STATE(389)] = 9478,
  [SMALL_STATE(390)] = 9497,
  [SMALL_STATE(391)] = 9516,
  [SMALL_STATE(392)] = 9535,
  [SMALL_STATE(393)] = 9554,
  [SMALL_STATE(394)] = 9573,
  [SMALL_STATE(395)] = 9592,
  [SMALL_STATE(396)] = 9611,
  [SMALL_STATE(397)] = 9630,
  [SMALL_STATE(398)] = 9649,
  [SMALL_STATE(399)] = 9668,
  [SMALL_STATE(400)] = 9687,
  [SMALL_STATE(401)] = 9706,
  [SMALL_STATE(402)] = 9725,
  [SMALL_STATE(403)] = 9744,
  [SMALL_STATE(404)] = 9763,
  [SMALL_STATE(405)] = 9782,
  [SMALL_STATE(406)] = 9801,
  [SMALL_STATE(407)] = 9820,
  [SMALL_STATE(408)] = 9839,
  [SMALL_STATE(409)] = 9858,
  [SMALL_STATE(410)] = 9877,
  [SMALL_STATE(411)] = 9896,
  [SMALL_STATE(412)] = 9915,
  [SMALL_STATE(413)] = 9934,
  [SMALL_STATE(414)] = 9953,
  [SMALL_STATE(415)] = 9972,
  [SMALL_STATE(416)] = 9991,
  [SMALL_STATE(417)] = 10010,
  [SMALL_STATE(418)] = 10029,
  [SMALL_STATE(419)] = 10048,
  [SMALL_STATE(420)] = 10067,
  [SMALL_STATE(421)] = 10086,
  [SMALL_STATE(422)] = 10105,
  [SMALL_STATE(423)] = 10124,
  [SMALL_STATE(424)] = 10143,
  [SMALL_STATE(425)] = 10162,
  [SMALL_STATE(426)] = 10181,
  [SMALL_STATE(427)] = 10211,
  [SMALL_STATE(428)] = 10229,
  [SMALL_STATE(429)] = 10254,
  [SMALL_STATE(430)] = 10279,
  [SMALL_STATE(431)] = 10304,
  [SMALL_STATE(432)] = 10329,
  [SMALL_STATE(433)] = 10354,
  [SMALL_STATE(434)] = 10379,
  [SMALL_STATE(435)] = 10404,
  [SMALL_STATE(436)] = 10429,
  [SMALL_STATE(437)] = 10454,
  [SMALL_STATE(438)] = 10482,
  [SMALL_STATE(439)] = 10508,
  [SMALL_STATE(440)] = 10531,
  [SMALL_STATE(441)] = 10565,
  [SMALL_STATE(442)] = 10591,
  [SMALL_STATE(443)] = 10611,
  [SMALL_STATE(444)] = 10633,
  [SMALL_STATE(445)] = 10653,
  [SMALL_STATE(446)] = 10673,
  [SMALL_STATE(447)] = 10693,
  [SMALL_STATE(448)] = 10724,
  [SMALL_STATE(449)] = 10741,
  [SMALL_STATE(450)] = 10764,
  [SMALL_STATE(451)] = 10783,
  [SMALL_STATE(452)] = 10802,
  [SMALL_STATE(453)] = 10819,
  [SMALL_STATE(454)] = 10835,
  [SMALL_STATE(455)] = 10851,
  [SMALL_STATE(456)] = 10867,
  [SMALL_STATE(457)] = 10883,
  [SMALL_STATE(458)] = 10899,
  [SMALL_STATE(459)] = 10915,
  [SMALL_STATE(460)] = 10931,
  [SMALL_STATE(461)] = 10951,
  [SMALL_STATE(462)] = 10967,
  [SMALL_STATE(463)] = 10983,
  [SMALL_STATE(464)] = 10999,
  [SMALL_STATE(465)] = 11015,
  [SMALL_STATE(466)] = 11031,
  [SMALL_STATE(467)] = 11052,
  [SMALL_STATE(468)] = 11073,
  [SMALL_STATE(469)] = 11094,
  [SMALL_STATE(470)] = 11115,
  [SMALL_STATE(471)] = 11136,
  [SMALL_STATE(472)] = 11158,
  [SMALL_STATE(473)] = 11180,
  [SMALL_STATE(474)] = 11194,
  [SMALL_STATE(475)] = 11216,
  [SMALL_STATE(476)] = 11238,
  [SMALL_STATE(477)] = 11260,
  [SMALL_STATE(478)] = 11282,
  [SMALL_STATE(479)] = 11304,
  [SMALL_STATE(480)] = 11326,
  [SMALL_STATE(481)] = 11346,
  [SMALL_STATE(482)] = 11368,
  [SMALL_STATE(483)] = 11390,
  [SMALL_STATE(484)] = 11412,
  [SMALL_STATE(485)] = 11434,
  [SMALL_STATE(486)] = 11452,
  [SMALL_STATE(487)] = 11466,
  [SMALL_STATE(488)] = 11485,
  [SMALL_STATE(489)] = 11504,
  [SMALL_STATE(490)] = 11521,
  [SMALL_STATE(491)] = 11538,
  [SMALL_STATE(492)] = 11553,
  [SMALL_STATE(493)] = 11564,
  [SMALL_STATE(494)] = 11583,
  [SMALL_STATE(495)] = 11602,
  [SMALL_STATE(496)] = 11621,
  [SMALL_STATE(497)] = 11629,
  [SMALL_STATE(498)] = 11637,
  [SMALL_STATE(499)] = 11653,
  [SMALL_STATE(500)] = 11669,
  [SMALL_STATE(501)] = 11681,
  [SMALL_STATE(502)] = 11693,
  [SMALL_STATE(503)] = 11705,
  [SMALL_STATE(504)] = 11713,
  [SMALL_STATE(505)] = 11729,
  [SMALL_STATE(506)] = 11743,
  [SMALL_STATE(507)] = 11751,
  [SMALL_STATE(508)] = 11767,
  [SMALL_STATE(509)] = 11779,
  [SMALL_STATE(510)] = 11793,
  [SMALL_STATE(511)] = 11801,
  [SMALL_STATE(512)] = 11809,
  [SMALL_STATE(513)] = 11825,
  [SMALL_STATE(514)] = 11841,
  [SMALL_STATE(515)] = 11849,
  [SMALL_STATE(516)] = 11863,
  [SMALL_STATE(517)] = 11877,
  [SMALL_STATE(518)] = 11893,
  [SMALL_STATE(519)] = 11904,
  [SMALL_STATE(520)] = 11917,
  [SMALL_STATE(521)] = 11924,
  [SMALL_STATE(522)] = 11937,
  [SMALL_STATE(523)] = 11950,
  [SMALL_STATE(524)] = 11963,
  [SMALL_STATE(525)] = 11976,
  [SMALL_STATE(526)] = 11989,
  [SMALL_STATE(527)] = 12002,
  [SMALL_STATE(528)] = 12015,
  [SMALL_STATE(529)] = 12028,
  [SMALL_STATE(530)] = 12041,
  [SMALL_STATE(531)] = 12054,
  [SMALL_STATE(532)] = 12067,
  [SMALL_STATE(533)] = 12080,
  [SMALL_STATE(534)] = 12093,
  [SMALL_STATE(535)] = 12106,
  [SMALL_STATE(536)] = 12119,
  [SMALL_STATE(537)] = 12132,
  [SMALL_STATE(538)] = 12145,
  [SMALL_STATE(539)] = 12158,
  [SMALL_STATE(540)] = 12171,
  [SMALL_STATE(541)] = 12178,
  [SMALL_STATE(542)] = 12191,
  [SMALL_STATE(543)] = 12204,
  [SMALL_STATE(544)] = 12217,
  [SMALL_STATE(545)] = 12230,
  [SMALL_STATE(546)] = 12241,
  [SMALL_STATE(547)] = 12254,
  [SMALL_STATE(548)] = 12263,
  [SMALL_STATE(549)] = 12276,
  [SMALL_STATE(550)] = 12289,
  [SMALL_STATE(551)] = 12302,
  [SMALL_STATE(552)] = 12315,
  [SMALL_STATE(553)] = 12326,
  [SMALL_STATE(554)] = 12339,
  [SMALL_STATE(555)] = 12352,
  [SMALL_STATE(556)] = 12365,
  [SMALL_STATE(557)] = 12378,
  [SMALL_STATE(558)] = 12389,
  [SMALL_STATE(559)] = 12402,
  [SMALL_STATE(560)] = 12415,
  [SMALL_STATE(561)] = 12428,
  [SMALL_STATE(562)] = 12441,
  [SMALL_STATE(563)] = 12454,
  [SMALL_STATE(564)] = 12467,
  [SMALL_STATE(565)] = 12480,
  [SMALL_STATE(566)] = 12493,
  [SMALL_STATE(567)] = 12506,
  [SMALL_STATE(568)] = 12519,
  [SMALL_STATE(569)] = 12532,
  [SMALL_STATE(570)] = 12545,
  [SMALL_STATE(571)] = 12558,
  [SMALL_STATE(572)] = 12568,
  [SMALL_STATE(573)] = 12578,
  [SMALL_STATE(574)] = 12588,
  [SMALL_STATE(575)] = 12598,
  [SMALL_STATE(576)] = 12608,
  [SMALL_STATE(577)] = 12618,
  [SMALL_STATE(578)] = 12628,
  [SMALL_STATE(579)] = 12638,
  [SMALL_STATE(580)] = 12648,
  [SMALL_STATE(581)] = 12656,
  [SMALL_STATE(582)] = 12666,
  [SMALL_STATE(583)] = 12676,
  [SMALL_STATE(584)] = 12686,
  [SMALL_STATE(585)] = 12696,
  [SMALL_STATE(586)] = 12706,
  [SMALL_STATE(587)] = 12716,
  [SMALL_STATE(588)] = 12726,
  [SMALL_STATE(589)] = 12734,
  [SMALL_STATE(590)] = 12744,
  [SMALL_STATE(591)] = 12754,
  [SMALL_STATE(592)] = 12764,
  [SMALL_STATE(593)] = 12774,
  [SMALL_STATE(594)] = 12784,
  [SMALL_STATE(595)] = 12794,
  [SMALL_STATE(596)] = 12804,
  [SMALL_STATE(597)] = 12814,
  [SMALL_STATE(598)] = 12824,
  [SMALL_STATE(599)] = 12834,
  [SMALL_STATE(600)] = 12844,
  [SMALL_STATE(601)] = 12854,
  [SMALL_STATE(602)] = 12864,
  [SMALL_STATE(603)] = 12874,
  [SMALL_STATE(604)] = 12884,
  [SMALL_STATE(605)] = 12894,
  [SMALL_STATE(606)] = 12904,
  [SMALL_STATE(607)] = 12914,
  [SMALL_STATE(608)] = 12924,
  [SMALL_STATE(609)] = 12932,
  [SMALL_STATE(610)] = 12942,
  [SMALL_STATE(611)] = 12952,
  [SMALL_STATE(612)] = 12962,
  [SMALL_STATE(613)] = 12972,
  [SMALL_STATE(614)] = 12982,
  [SMALL_STATE(615)] = 12992,
  [SMALL_STATE(616)] = 13002,
  [SMALL_STATE(617)] = 13012,
  [SMALL_STATE(618)] = 13022,
  [SMALL_STATE(619)] = 13032,
  [SMALL_STATE(620)] = 13042,
  [SMALL_STATE(621)] = 13052,
  [SMALL_STATE(622)] = 13062,
  [SMALL_STATE(623)] = 13072,
  [SMALL_STATE(624)] = 13080,
  [SMALL_STATE(625)] = 13090,
  [SMALL_STATE(626)] = 13100,
  [SMALL_STATE(627)] = 13110,
  [SMALL_STATE(628)] = 13120,
  [SMALL_STATE(629)] = 13130,
  [SMALL_STATE(630)] = 13140,
  [SMALL_STATE(631)] = 13150,
  [SMALL_STATE(632)] = 13160,
  [SMALL_STATE(633)] = 13170,
  [SMALL_STATE(634)] = 13180,
  [SMALL_STATE(635)] = 13190,
  [SMALL_STATE(636)] = 13200,
  [SMALL_STATE(637)] = 13210,
  [SMALL_STATE(638)] = 13220,
  [SMALL_STATE(639)] = 13230,
  [SMALL_STATE(640)] = 13240,
  [SMALL_STATE(641)] = 13250,
  [SMALL_STATE(642)] = 13260,
  [SMALL_STATE(643)] = 13270,
  [SMALL_STATE(644)] = 13280,
  [SMALL_STATE(645)] = 13290,
  [SMALL_STATE(646)] = 13300,
  [SMALL_STATE(647)] = 13308,
  [SMALL_STATE(648)] = 13318,
  [SMALL_STATE(649)] = 13328,
  [SMALL_STATE(650)] = 13338,
  [SMALL_STATE(651)] = 13348,
  [SMALL_STATE(652)] = 13358,
  [SMALL_STATE(653)] = 13368,
  [SMALL_STATE(654)] = 13378,
  [SMALL_STATE(655)] = 13388,
  [SMALL_STATE(656)] = 13398,
  [SMALL_STATE(657)] = 13408,
  [SMALL_STATE(658)] = 13418,
  [SMALL_STATE(659)] = 13428,
  [SMALL_STATE(660)] = 13438,
  [SMALL_STATE(661)] = 13448,
  [SMALL_STATE(662)] = 13456,
  [SMALL_STATE(663)] = 13466,
  [SMALL_STATE(664)] = 13476,
  [SMALL_STATE(665)] = 13486,
  [SMALL_STATE(666)] = 13496,
  [SMALL_STATE(667)] = 13506,
  [SMALL_STATE(668)] = 13516,
  [SMALL_STATE(669)] = 13526,
  [SMALL_STATE(670)] = 13536,
  [SMALL_STATE(671)] = 13546,
  [SMALL_STATE(672)] = 13556,
  [SMALL_STATE(673)] = 13566,
  [SMALL_STATE(674)] = 13576,
  [SMALL_STATE(675)] = 13586,
  [SMALL_STATE(676)] = 13596,
  [SMALL_STATE(677)] = 13606,
  [SMALL_STATE(678)] = 13616,
  [SMALL_STATE(679)] = 13626,
  [SMALL_STATE(680)] = 13636,
  [SMALL_STATE(681)] = 13646,
  [SMALL_STATE(682)] = 13656,
  [SMALL_STATE(683)] = 13666,
  [SMALL_STATE(684)] = 13676,
  [SMALL_STATE(685)] = 13686,
  [SMALL_STATE(686)] = 13696,
  [SMALL_STATE(687)] = 13706,
  [SMALL_STATE(688)] = 13716,
  [SMALL_STATE(689)] = 13726,
  [SMALL_STATE(690)] = 13736,
  [SMALL_STATE(691)] = 13746,
  [SMALL_STATE(692)] = 13756,
  [SMALL_STATE(693)] = 13766,
  [SMALL_STATE(694)] = 13774,
  [SMALL_STATE(695)] = 13780,
  [SMALL_STATE(696)] = 13790,
  [SMALL_STATE(697)] = 13800,
  [SMALL_STATE(698)] = 13810,
  [SMALL_STATE(699)] = 13820,
  [SMALL_STATE(700)] = 13830,
  [SMALL_STATE(701)] = 13840,
  [SMALL_STATE(702)] = 13850,
  [SMALL_STATE(703)] = 13860,
  [SMALL_STATE(704)] = 13870,
  [SMALL_STATE(705)] = 13880,
  [SMALL_STATE(706)] = 13890,
  [SMALL_STATE(707)] = 13900,
  [SMALL_STATE(708)] = 13910,
  [SMALL_STATE(709)] = 13920,
  [SMALL_STATE(710)] = 13930,
  [SMALL_STATE(711)] = 13940,
  [SMALL_STATE(712)] = 13950,
  [SMALL_STATE(713)] = 13960,
  [SMALL_STATE(714)] = 13970,
  [SMALL_STATE(715)] = 13980,
  [SMALL_STATE(716)] = 13990,
  [SMALL_STATE(717)] = 13996,
  [SMALL_STATE(718)] = 14006,
  [SMALL_STATE(719)] = 14016,
  [SMALL_STATE(720)] = 14026,
  [SMALL_STATE(721)] = 14031,
  [SMALL_STATE(722)] = 14036,
  [SMALL_STATE(723)] = 14043,
  [SMALL_STATE(724)] = 14050,
  [SMALL_STATE(725)] = 14057,
  [SMALL_STATE(726)] = 14064,
  [SMALL_STATE(727)] = 14071,
  [SMALL_STATE(728)] = 14078,
  [SMALL_STATE(729)] = 14085,
  [SMALL_STATE(730)] = 14090,
  [SMALL_STATE(731)] = 14095,
  [SMALL_STATE(732)] = 14102,
  [SMALL_STATE(733)] = 14109,
  [SMALL_STATE(734)] = 14116,
  [SMALL_STATE(735)] = 14123,
  [SMALL_STATE(736)] = 14130,
  [SMALL_STATE(737)] = 14137,
  [SMALL_STATE(738)] = 14144,
  [SMALL_STATE(739)] = 14151,
  [SMALL_STATE(740)] = 14156,
  [SMALL_STATE(741)] = 14161,
  [SMALL_STATE(742)] = 14168,
  [SMALL_STATE(743)] = 14175,
  [SMALL_STATE(744)] = 14182,
  [SMALL_STATE(745)] = 14189,
  [SMALL_STATE(746)] = 14196,
  [SMALL_STATE(747)] = 14201,
  [SMALL_STATE(748)] = 14206,
  [SMALL_STATE(749)] = 14211,
  [SMALL_STATE(750)] = 14218,
  [SMALL_STATE(751)] = 14225,
  [SMALL_STATE(752)] = 14230,
  [SMALL_STATE(753)] = 14235,
  [SMALL_STATE(754)] = 14240,
  [SMALL_STATE(755)] = 14247,
  [SMALL_STATE(756)] = 14254,
  [SMALL_STATE(757)] = 14261,
  [SMALL_STATE(758)] = 14268,
  [SMALL_STATE(759)] = 14273,
  [SMALL_STATE(760)] = 14280,
  [SMALL_STATE(761)] = 14287,
  [SMALL_STATE(762)] = 14294,
  [SMALL_STATE(763)] = 14301,
  [SMALL_STATE(764)] = 14308,
  [SMALL_STATE(765)] = 14315,
  [SMALL_STATE(766)] = 14322,
  [SMALL_STATE(767)] = 14329,
  [SMALL_STATE(768)] = 14336,
  [SMALL_STATE(769)] = 14343,
  [SMALL_STATE(770)] = 14350,
  [SMALL_STATE(771)] = 14357,
  [SMALL_STATE(772)] = 14364,
  [SMALL_STATE(773)] = 14371,
  [SMALL_STATE(774)] = 14378,
  [SMALL_STATE(775)] = 14385,
  [SMALL_STATE(776)] = 14392,
  [SMALL_STATE(777)] = 14397,
  [SMALL_STATE(778)] = 14404,
  [SMALL_STATE(779)] = 14411,
  [SMALL_STATE(780)] = 14418,
  [SMALL_STATE(781)] = 14425,
  [SMALL_STATE(782)] = 14430,
  [SMALL_STATE(783)] = 14437,
  [SMALL_STATE(784)] = 14444,
  [SMALL_STATE(785)] = 14451,
  [SMALL_STATE(786)] = 14458,
  [SMALL_STATE(787)] = 14463,
  [SMALL_STATE(788)] = 14470,
  [SMALL_STATE(789)] = 14477,
  [SMALL_STATE(790)] = 14484,
  [SMALL_STATE(791)] = 14491,
  [SMALL_STATE(792)] = 14498,
  [SMALL_STATE(793)] = 14505,
  [SMALL_STATE(794)] = 14512,
  [SMALL_STATE(795)] = 14519,
  [SMALL_STATE(796)] = 14526,
  [SMALL_STATE(797)] = 14531,
  [SMALL_STATE(798)] = 14538,
  [SMALL_STATE(799)] = 14543,
  [SMALL_STATE(800)] = 14550,
  [SMALL_STATE(801)] = 14555,
  [SMALL_STATE(802)] = 14562,
  [SMALL_STATE(803)] = 14569,
  [SMALL_STATE(804)] = 14576,
  [SMALL_STATE(805)] = 14583,
  [SMALL_STATE(806)] = 14590,
  [SMALL_STATE(807)] = 14597,
  [SMALL_STATE(808)] = 14604,
  [SMALL_STATE(809)] = 14611,
  [SMALL_STATE(810)] = 14618,
  [SMALL_STATE(811)] = 14625,
  [SMALL_STATE(812)] = 14632,
  [SMALL_STATE(813)] = 14639,
  [SMALL_STATE(814)] = 14646,
  [SMALL_STATE(815)] = 14651,
  [SMALL_STATE(816)] = 14658,
  [SMALL_STATE(817)] = 14665,
  [SMALL_STATE(818)] = 14672,
  [SMALL_STATE(819)] = 14679,
  [SMALL_STATE(820)] = 14686,
  [SMALL_STATE(821)] = 14693,
  [SMALL_STATE(822)] = 14698,
  [SMALL_STATE(823)] = 14703,
  [SMALL_STATE(824)] = 14708,
  [SMALL_STATE(825)] = 14713,
  [SMALL_STATE(826)] = 14720,
  [SMALL_STATE(827)] = 14727,
  [SMALL_STATE(828)] = 14732,
  [SMALL_STATE(829)] = 14739,
  [SMALL_STATE(830)] = 14744,
  [SMALL_STATE(831)] = 14751,
  [SMALL_STATE(832)] = 14758,
  [SMALL_STATE(833)] = 14765,
  [SMALL_STATE(834)] = 14772,
  [SMALL_STATE(835)] = 14779,
  [SMALL_STATE(836)] = 14786,
  [SMALL_STATE(837)] = 14793,
  [SMALL_STATE(838)] = 14800,
  [SMALL_STATE(839)] = 14807,
  [SMALL_STATE(840)] = 14814,
  [SMALL_STATE(841)] = 14819,
  [SMALL_STATE(842)] = 14824,
  [SMALL_STATE(843)] = 14831,
  [SMALL_STATE(844)] = 14838,
  [SMALL_STATE(845)] = 14845,
  [SMALL_STATE(846)] = 14852,
  [SMALL_STATE(847)] = 14859,
  [SMALL_STATE(848)] = 14866,
  [SMALL_STATE(849)] = 14873,
  [SMALL_STATE(850)] = 14880,
  [SMALL_STATE(851)] = 14887,
  [SMALL_STATE(852)] = 14894,
  [SMALL_STATE(853)] = 14899,
  [SMALL_STATE(854)] = 14906,
  [SMALL_STATE(855)] = 14911,
  [SMALL_STATE(856)] = 14918,
  [SMALL_STATE(857)] = 14925,
  [SMALL_STATE(858)] = 14932,
  [SMALL_STATE(859)] = 14939,
  [SMALL_STATE(860)] = 14946,
  [SMALL_STATE(861)] = 14951,
  [SMALL_STATE(862)] = 14958,
  [SMALL_STATE(863)] = 14963,
  [SMALL_STATE(864)] = 14970,
  [SMALL_STATE(865)] = 14977,
  [SMALL_STATE(866)] = 14984,
  [SMALL_STATE(867)] = 14991,
  [SMALL_STATE(868)] = 14996,
  [SMALL_STATE(869)] = 15003,
  [SMALL_STATE(870)] = 15010,
  [SMALL_STATE(871)] = 15015,
  [SMALL_STATE(872)] = 15022,
  [SMALL_STATE(873)] = 15026,
  [SMALL_STATE(874)] = 15030,
  [SMALL_STATE(875)] = 15034,
  [SMALL_STATE(876)] = 15038,
  [SMALL_STATE(877)] = 15042,
  [SMALL_STATE(878)] = 15046,
  [SMALL_STATE(879)] = 15050,
  [SMALL_STATE(880)] = 15054,
  [SMALL_STATE(881)] = 15058,
  [SMALL_STATE(882)] = 15062,
  [SMALL_STATE(883)] = 15066,
  [SMALL_STATE(884)] = 15070,
  [SMALL_STATE(885)] = 15074,
  [SMALL_STATE(886)] = 15078,
  [SMALL_STATE(887)] = 15082,
  [SMALL_STATE(888)] = 15086,
  [SMALL_STATE(889)] = 15090,
  [SMALL_STATE(890)] = 15094,
  [SMALL_STATE(891)] = 15098,
  [SMALL_STATE(892)] = 15102,
  [SMALL_STATE(893)] = 15106,
  [SMALL_STATE(894)] = 15110,
  [SMALL_STATE(895)] = 15114,
  [SMALL_STATE(896)] = 15118,
  [SMALL_STATE(897)] = 15122,
  [SMALL_STATE(898)] = 15126,
  [SMALL_STATE(899)] = 15130,
  [SMALL_STATE(900)] = 15134,
  [SMALL_STATE(901)] = 15138,
  [SMALL_STATE(902)] = 15142,
  [SMALL_STATE(903)] = 15146,
  [SMALL_STATE(904)] = 15150,
  [SMALL_STATE(905)] = 15154,
  [SMALL_STATE(906)] = 15158,
  [SMALL_STATE(907)] = 15162,
  [SMALL_STATE(908)] = 15166,
  [SMALL_STATE(909)] = 15170,
  [SMALL_STATE(910)] = 15174,
  [SMALL_STATE(911)] = 15178,
  [SMALL_STATE(912)] = 15182,
  [SMALL_STATE(913)] = 15186,
  [SMALL_STATE(914)] = 15190,
  [SMALL_STATE(915)] = 15194,
  [SMALL_STATE(916)] = 15198,
  [SMALL_STATE(917)] = 15202,
  [SMALL_STATE(918)] = 15206,
  [SMALL_STATE(919)] = 15210,
  [SMALL_STATE(920)] = 15214,
  [SMALL_STATE(921)] = 15218,
  [SMALL_STATE(922)] = 15222,
  [SMALL_STATE(923)] = 15226,
  [SMALL_STATE(924)] = 15230,
  [SMALL_STATE(925)] = 15234,
  [SMALL_STATE(926)] = 15238,
  [SMALL_STATE(927)] = 15242,
  [SMALL_STATE(928)] = 15246,
  [SMALL_STATE(929)] = 15250,
  [SMALL_STATE(930)] = 15254,
  [SMALL_STATE(931)] = 15258,
  [SMALL_STATE(932)] = 15262,
  [SMALL_STATE(933)] = 15266,
  [SMALL_STATE(934)] = 15270,
  [SMALL_STATE(935)] = 15274,
  [SMALL_STATE(936)] = 15278,
  [SMALL_STATE(937)] = 15282,
  [SMALL_STATE(938)] = 15286,
  [SMALL_STATE(939)] = 15290,
  [SMALL_STATE(940)] = 15294,
  [SMALL_STATE(941)] = 15298,
  [SMALL_STATE(942)] = 15302,
  [SMALL_STATE(943)] = 15306,
  [SMALL_STATE(944)] = 15310,
  [SMALL_STATE(945)] = 15314,
  [SMALL_STATE(946)] = 15318,
  [SMALL_STATE(947)] = 15322,
  [SMALL_STATE(948)] = 15326,
  [SMALL_STATE(949)] = 15330,
  [SMALL_STATE(950)] = 15334,
  [SMALL_STATE(951)] = 15338,
  [SMALL_STATE(952)] = 15342,
  [SMALL_STATE(953)] = 15346,
  [SMALL_STATE(954)] = 15350,
  [SMALL_STATE(955)] = 15354,
  [SMALL_STATE(956)] = 15358,
  [SMALL_STATE(957)] = 15362,
  [SMALL_STATE(958)] = 15366,
  [SMALL_STATE(959)] = 15370,
  [SMALL_STATE(960)] = 15374,
  [SMALL_STATE(961)] = 15378,
  [SMALL_STATE(962)] = 15382,
  [SMALL_STATE(963)] = 15386,
  [SMALL_STATE(964)] = 15390,
  [SMALL_STATE(965)] = 15394,
  [SMALL_STATE(966)] = 15398,
  [SMALL_STATE(967)] = 15402,
  [SMALL_STATE(968)] = 15406,
  [SMALL_STATE(969)] = 15410,
  [SMALL_STATE(970)] = 15414,
  [SMALL_STATE(971)] = 15418,
  [SMALL_STATE(972)] = 15422,
  [SMALL_STATE(973)] = 15426,
  [SMALL_STATE(974)] = 15430,
  [SMALL_STATE(975)] = 15434,
  [SMALL_STATE(976)] = 15438,
  [SMALL_STATE(977)] = 15442,
  [SMALL_STATE(978)] = 15446,
  [SMALL_STATE(979)] = 15450,
  [SMALL_STATE(980)] = 15454,
  [SMALL_STATE(981)] = 15458,
  [SMALL_STATE(982)] = 15462,
  [SMALL_STATE(983)] = 15466,
  [SMALL_STATE(984)] = 15470,
  [SMALL_STATE(985)] = 15474,
  [SMALL_STATE(986)] = 15478,
  [SMALL_STATE(987)] = 15482,
  [SMALL_STATE(988)] = 15486,
  [SMALL_STATE(989)] = 15490,
  [SMALL_STATE(990)] = 15494,
  [SMALL_STATE(991)] = 15498,
  [SMALL_STATE(992)] = 15502,
  [SMALL_STATE(993)] = 15506,
  [SMALL_STATE(994)] = 15510,
  [SMALL_STATE(995)] = 15514,
  [SMALL_STATE(996)] = 15518,
  [SMALL_STATE(997)] = 15522,
  [SMALL_STATE(998)] = 15526,
  [SMALL_STATE(999)] = 15530,
  [SMALL_STATE(1000)] = 15534,
  [SMALL_STATE(1001)] = 15538,
  [SMALL_STATE(1002)] = 15542,
  [SMALL_STATE(1003)] = 15546,
  [SMALL_STATE(1004)] = 15550,
  [SMALL_STATE(1005)] = 15554,
  [SMALL_STATE(1006)] = 15558,
  [SMALL_STATE(1007)] = 15562,
  [SMALL_STATE(1008)] = 15566,
  [SMALL_STATE(1009)] = 15570,
  [SMALL_STATE(1010)] = 15574,
  [SMALL_STATE(1011)] = 15578,
  [SMALL_STATE(1012)] = 15582,
  [SMALL_STATE(1013)] = 15586,
  [SMALL_STATE(1014)] = 15590,
  [SMALL_STATE(1015)] = 15594,
  [SMALL_STATE(1016)] = 15598,
  [SMALL_STATE(1017)] = 15602,
  [SMALL_STATE(1018)] = 15606,
  [SMALL_STATE(1019)] = 15610,
  [SMALL_STATE(1020)] = 15614,
  [SMALL_STATE(1021)] = 15618,
  [SMALL_STATE(1022)] = 15622,
  [SMALL_STATE(1023)] = 15626,
  [SMALL_STATE(1024)] = 15630,
  [SMALL_STATE(1025)] = 15634,
  [SMALL_STATE(1026)] = 15638,
  [SMALL_STATE(1027)] = 15642,
  [SMALL_STATE(1028)] = 15646,
  [SMALL_STATE(1029)] = 15650,
  [SMALL_STATE(1030)] = 15654,
  [SMALL_STATE(1031)] = 15658,
  [SMALL_STATE(1032)] = 15662,
  [SMALL_STATE(1033)] = 15666,
  [SMALL_STATE(1034)] = 15670,
  [SMALL_STATE(1035)] = 15674,
  [SMALL_STATE(1036)] = 15678,
  [SMALL_STATE(1037)] = 15682,
  [SMALL_STATE(1038)] = 15686,
  [SMALL_STATE(1039)] = 15690,
  [SMALL_STATE(1040)] = 15694,
  [SMALL_STATE(1041)] = 15698,
  [SMALL_STATE(1042)] = 15702,
  [SMALL_STATE(1043)] = 15706,
  [SMALL_STATE(1044)] = 15710,
  [SMALL_STATE(1045)] = 15714,
  [SMALL_STATE(1046)] = 15718,
  [SMALL_STATE(1047)] = 15722,
  [SMALL_STATE(1048)] = 15726,
  [SMALL_STATE(1049)] = 15730,
  [SMALL_STATE(1050)] = 15734,
  [SMALL_STATE(1051)] = 15738,
  [SMALL_STATE(1052)] = 15742,
  [SMALL_STATE(1053)] = 15746,
  [SMALL_STATE(1054)] = 15750,
  [SMALL_STATE(1055)] = 15754,
  [SMALL_STATE(1056)] = 15758,
  [SMALL_STATE(1057)] = 15762,
  [SMALL_STATE(1058)] = 15766,
  [SMALL_STATE(1059)] = 15770,
  [SMALL_STATE(1060)] = 15774,
  [SMALL_STATE(1061)] = 15778,
  [SMALL_STATE(1062)] = 15782,
  [SMALL_STATE(1063)] = 15786,
  [SMALL_STATE(1064)] = 15790,
  [SMALL_STATE(1065)] = 15794,
  [SMALL_STATE(1066)] = 15798,
  [SMALL_STATE(1067)] = 15802,
  [SMALL_STATE(1068)] = 15806,
  [SMALL_STATE(1069)] = 15810,
  [SMALL_STATE(1070)] = 15814,
  [SMALL_STATE(1071)] = 15818,
  [SMALL_STATE(1072)] = 15822,
  [SMALL_STATE(1073)] = 15826,
  [SMALL_STATE(1074)] = 15830,
  [SMALL_STATE(1075)] = 15834,
  [SMALL_STATE(1076)] = 15838,
  [SMALL_STATE(1077)] = 15842,
  [SMALL_STATE(1078)] = 15846,
  [SMALL_STATE(1079)] = 15850,
  [SMALL_STATE(1080)] = 15854,
  [SMALL_STATE(1081)] = 15858,
  [SMALL_STATE(1082)] = 15862,
  [SMALL_STATE(1083)] = 15866,
  [SMALL_STATE(1084)] = 15870,
  [SMALL_STATE(1085)] = 15874,
  [SMALL_STATE(1086)] = 15878,
  [SMALL_STATE(1087)] = 15882,
  [SMALL_STATE(1088)] = 15886,
  [SMALL_STATE(1089)] = 15890,
  [SMALL_STATE(1090)] = 15894,
  [SMALL_STATE(1091)] = 15898,
  [SMALL_STATE(1092)] = 15902,
  [SMALL_STATE(1093)] = 15906,
  [SMALL_STATE(1094)] = 15910,
  [SMALL_STATE(1095)] = 15914,
  [SMALL_STATE(1096)] = 15918,
  [SMALL_STATE(1097)] = 15922,
  [SMALL_STATE(1098)] = 15926,
  [SMALL_STATE(1099)] = 15930,
  [SMALL_STATE(1100)] = 15934,
  [SMALL_STATE(1101)] = 15938,
  [SMALL_STATE(1102)] = 15942,
  [SMALL_STATE(1103)] = 15946,
  [SMALL_STATE(1104)] = 15950,
  [SMALL_STATE(1105)] = 15954,
  [SMALL_STATE(1106)] = 15958,
  [SMALL_STATE(1107)] = 15962,
  [SMALL_STATE(1108)] = 15966,
  [SMALL_STATE(1109)] = 15970,
  [SMALL_STATE(1110)] = 15974,
  [SMALL_STATE(1111)] = 15978,
  [SMALL_STATE(1112)] = 15982,
  [SMALL_STATE(1113)] = 15986,
  [SMALL_STATE(1114)] = 15990,
  [SMALL_STATE(1115)] = 15994,
  [SMALL_STATE(1116)] = 15998,
  [SMALL_STATE(1117)] = 16002,
  [SMALL_STATE(1118)] = 16006,
  [SMALL_STATE(1119)] = 16010,
  [SMALL_STATE(1120)] = 16014,
  [SMALL_STATE(1121)] = 16018,
  [SMALL_STATE(1122)] = 16022,
  [SMALL_STATE(1123)] = 16026,
  [SMALL_STATE(1124)] = 16030,
  [SMALL_STATE(1125)] = 16034,
  [SMALL_STATE(1126)] = 16038,
  [SMALL_STATE(1127)] = 16042,
  [SMALL_STATE(1128)] = 16046,
  [SMALL_STATE(1129)] = 16050,
  [SMALL_STATE(1130)] = 16054,
  [SMALL_STATE(1131)] = 16058,
  [SMALL_STATE(1132)] = 16062,
  [SMALL_STATE(1133)] = 16066,
  [SMALL_STATE(1134)] = 16070,
  [SMALL_STATE(1135)] = 16074,
  [SMALL_STATE(1136)] = 16078,
  [SMALL_STATE(1137)] = 16082,
  [SMALL_STATE(1138)] = 16086,
  [SMALL_STATE(1139)] = 16090,
  [SMALL_STATE(1140)] = 16094,
  [SMALL_STATE(1141)] = 16098,
  [SMALL_STATE(1142)] = 16102,
  [SMALL_STATE(1143)] = 16106,
  [SMALL_STATE(1144)] = 16110,
  [SMALL_STATE(1145)] = 16114,
  [SMALL_STATE(1146)] = 16118,
  [SMALL_STATE(1147)] = 16122,
  [SMALL_STATE(1148)] = 16126,
  [SMALL_STATE(1149)] = 16130,
  [SMALL_STATE(1150)] = 16134,
  [SMALL_STATE(1151)] = 16138,
  [SMALL_STATE(1152)] = 16142,
  [SMALL_STATE(1153)] = 16146,
  [SMALL_STATE(1154)] = 16150,
  [SMALL_STATE(1155)] = 16154,
  [SMALL_STATE(1156)] = 16158,
  [SMALL_STATE(1157)] = 16162,
  [SMALL_STATE(1158)] = 16166,
  [SMALL_STATE(1159)] = 16170,
  [SMALL_STATE(1160)] = 16174,
  [SMALL_STATE(1161)] = 16178,
  [SMALL_STATE(1162)] = 16182,
  [SMALL_STATE(1163)] = 16186,
  [SMALL_STATE(1164)] = 16190,
  [SMALL_STATE(1165)] = 16194,
  [SMALL_STATE(1166)] = 16198,
  [SMALL_STATE(1167)] = 16202,
  [SMALL_STATE(1168)] = 16206,
  [SMALL_STATE(1169)] = 16210,
  [SMALL_STATE(1170)] = 16214,
  [SMALL_STATE(1171)] = 16218,
  [SMALL_STATE(1172)] = 16222,
  [SMALL_STATE(1173)] = 16226,
  [SMALL_STATE(1174)] = 16230,
  [SMALL_STATE(1175)] = 16234,
  [SMALL_STATE(1176)] = 16238,
  [SMALL_STATE(1177)] = 16242,
  [SMALL_STATE(1178)] = 16246,
  [SMALL_STATE(1179)] = 16250,
  [SMALL_STATE(1180)] = 16254,
  [SMALL_STATE(1181)] = 16258,
  [SMALL_STATE(1182)] = 16262,
  [SMALL_STATE(1183)] = 16266,
  [SMALL_STATE(1184)] = 16270,
  [SMALL_STATE(1185)] = 16274,
  [SMALL_STATE(1186)] = 16278,
  [SMALL_STATE(1187)] = 16282,
  [SMALL_STATE(1188)] = 16286,
  [SMALL_STATE(1189)] = 16290,
  [SMALL_STATE(1190)] = 16294,
  [SMALL_STATE(1191)] = 16298,
  [SMALL_STATE(1192)] = 16302,
  [SMALL_STATE(1193)] = 16306,
  [SMALL_STATE(1194)] = 16310,
  [SMALL_STATE(1195)] = 16314,
  [SMALL_STATE(1196)] = 16318,
  [SMALL_STATE(1197)] = 16322,
  [SMALL_STATE(1198)] = 16326,
  [SMALL_STATE(1199)] = 16330,
  [SMALL_STATE(1200)] = 16334,
  [SMALL_STATE(1201)] = 16338,
  [SMALL_STATE(1202)] = 16342,
  [SMALL_STATE(1203)] = 16346,
  [SMALL_STATE(1204)] = 16350,
  [SMALL_STATE(1205)] = 16354,
  [SMALL_STATE(1206)] = 16358,
  [SMALL_STATE(1207)] = 16362,
  [SMALL_STATE(1208)] = 16366,
  [SMALL_STATE(1209)] = 16370,
  [SMALL_STATE(1210)] = 16374,
  [SMALL_STATE(1211)] = 16378,
  [SMALL_STATE(1212)] = 16382,
  [SMALL_STATE(1213)] = 16386,
  [SMALL_STATE(1214)] = 16390,
  [SMALL_STATE(1215)] = 16394,
  [SMALL_STATE(1216)] = 16398,
  [SMALL_STATE(1217)] = 16402,
  [SMALL_STATE(1218)] = 16406,
  [SMALL_STATE(1219)] = 16410,
  [SMALL_STATE(1220)] = 16414,
  [SMALL_STATE(1221)] = 16418,
  [SMALL_STATE(1222)] = 16422,
  [SMALL_STATE(1223)] = 16426,
  [SMALL_STATE(1224)] = 16430,
  [SMALL_STATE(1225)] = 16434,
  [SMALL_STATE(1226)] = 16438,
  [SMALL_STATE(1227)] = 16442,
  [SMALL_STATE(1228)] = 16446,
  [SMALL_STATE(1229)] = 16450,
  [SMALL_STATE(1230)] = 16454,
  [SMALL_STATE(1231)] = 16458,
  [SMALL_STATE(1232)] = 16462,
  [SMALL_STATE(1233)] = 16466,
  [SMALL_STATE(1234)] = 16470,
  [SMALL_STATE(1235)] = 16474,
  [SMALL_STATE(1236)] = 16478,
  [SMALL_STATE(1237)] = 16482,
  [SMALL_STATE(1238)] = 16486,
  [SMALL_STATE(1239)] = 16490,
  [SMALL_STATE(1240)] = 16494,
  [SMALL_STATE(1241)] = 16498,
  [SMALL_STATE(1242)] = 16502,
  [SMALL_STATE(1243)] = 16506,
  [SMALL_STATE(1244)] = 16510,
  [SMALL_STATE(1245)] = 16514,
  [SMALL_STATE(1246)] = 16518,
  [SMALL_STATE(1247)] = 16522,
  [SMALL_STATE(1248)] = 16526,
  [SMALL_STATE(1249)] = 16530,
  [SMALL_STATE(1250)] = 16534,
  [SMALL_STATE(1251)] = 16538,
  [SMALL_STATE(1252)] = 16542,
  [SMALL_STATE(1253)] = 16546,
  [SMALL_STATE(1254)] = 16550,
  [SMALL_STATE(1255)] = 16554,
  [SMALL_STATE(1256)] = 16558,
  [SMALL_STATE(1257)] = 16562,
  [SMALL_STATE(1258)] = 16566,
  [SMALL_STATE(1259)] = 16570,
  [SMALL_STATE(1260)] = 16574,
  [SMALL_STATE(1261)] = 16578,
  [SMALL_STATE(1262)] = 16582,
  [SMALL_STATE(1263)] = 16586,
  [SMALL_STATE(1264)] = 16590,
  [SMALL_STATE(1265)] = 16594,
  [SMALL_STATE(1266)] = 16598,
  [SMALL_STATE(1267)] = 16602,
  [SMALL_STATE(1268)] = 16606,
  [SMALL_STATE(1269)] = 16610,
  [SMALL_STATE(1270)] = 16614,
  [SMALL_STATE(1271)] = 16618,
  [SMALL_STATE(1272)] = 16622,
  [SMALL_STATE(1273)] = 16626,
  [SMALL_STATE(1274)] = 16630,
  [SMALL_STATE(1275)] = 16634,
  [SMALL_STATE(1276)] = 16638,
  [SMALL_STATE(1277)] = 16642,
  [SMALL_STATE(1278)] = 16646,
  [SMALL_STATE(1279)] = 16650,
  [SMALL_STATE(1280)] = 16654,
  [SMALL_STATE(1281)] = 16658,
  [SMALL_STATE(1282)] = 16662,
  [SMALL_STATE(1283)] = 16666,
  [SMALL_STATE(1284)] = 16670,
  [SMALL_STATE(1285)] = 16674,
  [SMALL_STATE(1286)] = 16678,
  [SMALL_STATE(1287)] = 16682,
  [SMALL_STATE(1288)] = 16686,
  [SMALL_STATE(1289)] = 16690,
  [SMALL_STATE(1290)] = 16694,
  [SMALL_STATE(1291)] = 16698,
  [SMALL_STATE(1292)] = 16702,
  [SMALL_STATE(1293)] = 16706,
  [SMALL_STATE(1294)] = 16710,
  [SMALL_STATE(1295)] = 16714,
  [SMALL_STATE(1296)] = 16718,
  [SMALL_STATE(1297)] = 16722,
  [SMALL_STATE(1298)] = 16726,
  [SMALL_STATE(1299)] = 16730,
  [SMALL_STATE(1300)] = 16734,
  [SMALL_STATE(1301)] = 16738,
  [SMALL_STATE(1302)] = 16742,
  [SMALL_STATE(1303)] = 16746,
  [SMALL_STATE(1304)] = 16750,
  [SMALL_STATE(1305)] = 16754,
  [SMALL_STATE(1306)] = 16758,
  [SMALL_STATE(1307)] = 16762,
  [SMALL_STATE(1308)] = 16766,
  [SMALL_STATE(1309)] = 16770,
  [SMALL_STATE(1310)] = 16774,
  [SMALL_STATE(1311)] = 16778,
  [SMALL_STATE(1312)] = 16782,
  [SMALL_STATE(1313)] = 16786,
  [SMALL_STATE(1314)] = 16790,
  [SMALL_STATE(1315)] = 16794,
  [SMALL_STATE(1316)] = 16798,
  [SMALL_STATE(1317)] = 16802,
  [SMALL_STATE(1318)] = 16806,
  [SMALL_STATE(1319)] = 16810,
  [SMALL_STATE(1320)] = 16814,
  [SMALL_STATE(1321)] = 16818,
  [SMALL_STATE(1322)] = 16822,
  [SMALL_STATE(1323)] = 16826,
  [SMALL_STATE(1324)] = 16830,
  [SMALL_STATE(1325)] = 16834,
  [SMALL_STATE(1326)] = 16838,
  [SMALL_STATE(1327)] = 16842,
  [SMALL_STATE(1328)] = 16846,
  [SMALL_STATE(1329)] = 16850,
  [SMALL_STATE(1330)] = 16854,
  [SMALL_STATE(1331)] = 16858,
  [SMALL_STATE(1332)] = 16862,
  [SMALL_STATE(1333)] = 16866,
  [SMALL_STATE(1334)] = 16870,
  [SMALL_STATE(1335)] = 16874,
  [SMALL_STATE(1336)] = 16878,
  [SMALL_STATE(1337)] = 16882,
  [SMALL_STATE(1338)] = 16886,
  [SMALL_STATE(1339)] = 16890,
  [SMALL_STATE(1340)] = 16894,
  [SMALL_STATE(1341)] = 16898,
  [SMALL_STATE(1342)] = 16902,
  [SMALL_STATE(1343)] = 16906,
  [SMALL_STATE(1344)] = 16910,
  [SMALL_STATE(1345)] = 16914,
  [SMALL_STATE(1346)] = 16918,
  [SMALL_STATE(1347)] = 16922,
  [SMALL_STATE(1348)] = 16926,
  [SMALL_STATE(1349)] = 16930,
  [SMALL_STATE(1350)] = 16934,
  [SMALL_STATE(1351)] = 16938,
  [SMALL_STATE(1352)] = 16942,
  [SMALL_STATE(1353)] = 16946,
  [SMALL_STATE(1354)] = 16950,
  [SMALL_STATE(1355)] = 16954,
  [SMALL_STATE(1356)] = 16958,
  [SMALL_STATE(1357)] = 16962,
  [SMALL_STATE(1358)] = 16966,
  [SMALL_STATE(1359)] = 16970,
  [SMALL_STATE(1360)] = 16974,
  [SMALL_STATE(1361)] = 16978,
  [SMALL_STATE(1362)] = 16982,
  [SMALL_STATE(1363)] = 16986,
  [SMALL_STATE(1364)] = 16990,
  [SMALL_STATE(1365)] = 16994,
  [SMALL_STATE(1366)] = 16998,
  [SMALL_STATE(1367)] = 17002,
  [SMALL_STATE(1368)] = 17006,
  [SMALL_STATE(1369)] = 17010,
  [SMALL_STATE(1370)] = 17014,
  [SMALL_STATE(1371)] = 17018,
  [SMALL_STATE(1372)] = 17022,
  [SMALL_STATE(1373)] = 17026,
  [SMALL_STATE(1374)] = 17030,
  [SMALL_STATE(1375)] = 17034,
  [SMALL_STATE(1376)] = 17038,
  [SMALL_STATE(1377)] = 17042,
  [SMALL_STATE(1378)] = 17046,
  [SMALL_STATE(1379)] = 17050,
  [SMALL_STATE(1380)] = 17054,
  [SMALL_STATE(1381)] = 17058,
  [SMALL_STATE(1382)] = 17062,
  [SMALL_STATE(1383)] = 17066,
  [SMALL_STATE(1384)] = 17070,
  [SMALL_STATE(1385)] = 17074,
  [SMALL_STATE(1386)] = 17078,
  [SMALL_STATE(1387)] = 17082,
  [SMALL_STATE(1388)] = 17086,
  [SMALL_STATE(1389)] = 17090,
  [SMALL_STATE(1390)] = 17094,
  [SMALL_STATE(1391)] = 17098,
  [SMALL_STATE(1392)] = 17102,
  [SMALL_STATE(1393)] = 17106,
  [SMALL_STATE(1394)] = 17110,
  [SMALL_STATE(1395)] = 17114,
  [SMALL_STATE(1396)] = 17118,
  [SMALL_STATE(1397)] = 17122,
  [SMALL_STATE(1398)] = 17126,
  [SMALL_STATE(1399)] = 17130,
  [SMALL_STATE(1400)] = 17134,
  [SMALL_STATE(1401)] = 17138,
  [SMALL_STATE(1402)] = 17142,
  [SMALL_STATE(1403)] = 17146,
  [SMALL_STATE(1404)] = 17150,
  [SMALL_STATE(1405)] = 17154,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1260),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1205),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1197),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(474),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(499),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(693),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1260),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(774),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(440),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(447),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1205),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1197),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(448),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(452),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(487),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(444),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1131),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 18),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 18),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(846),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1348),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1344),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1337),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1349),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 19),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1290),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1003),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(489),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(1394),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 35),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1072),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1076),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(573),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 36),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 21),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5, .production_id = 38),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 19),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 38),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1359),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5, .production_id = 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1386),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1392),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 21),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1375),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2, .production_id = 44),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 14),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 54),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 57),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4, .production_id = 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 8),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 26),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 57),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6, .production_id = 40),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6, .production_id = 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 21),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 57),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 21),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 11, .production_id = 70),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 21),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4, .production_id = 15),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3, .production_id = 6),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 38),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2, .production_id = 20),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1394),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2, .production_id = 20),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1325),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 11, .production_id = 57),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3, .production_id = 44),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 14),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1, .production_id = 20),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 59),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 21),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(727),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 21),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 38),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 4),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2), SHIFT_REPEAT(1325),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 14),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1290),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8, .production_id = 21),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 4),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(509),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1378),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(817),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3, .production_id = 6),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4, .production_id = 44),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3, .production_id = 20),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 14),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 51),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15, .production_id = 87),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 50),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 56),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 23),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1146),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 24),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 27),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1126),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 30),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1125),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5, .production_id = 32),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 9),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 99),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 100),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 33),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1097),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3, .production_id = 4),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3, .production_id = 11),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 104),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 8),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9, .production_id = 10),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12, .production_id = 75),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 65),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 110),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 42),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_name, 1, .production_id = 16),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 3, .production_id = 44),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4, .production_id = 15),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9, .production_id = 10),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 114),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 115),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 41),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3, .production_id = 4),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1281),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 119),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3, .production_id = 13),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3, .production_id = 12),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1082),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2, .production_id = 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1184),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 21),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 38),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 14),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 63),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 69),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10, .production_id = 59),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 14, .production_id = 75),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 4),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 11, .production_id = 21),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4, .production_id = 4),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4, .production_id = 6),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11, .production_id = 10),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 57),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 11, .production_id = 69),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 115),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4, .production_id = 13),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 11, .production_id = 72),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 14),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 11, .production_id = 10),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 17),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 67),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 66),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 21),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 9),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9, .production_id = 63),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3, .production_id = 6),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 12, .production_id = 70),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 76),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 114),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 21),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 12, .production_id = 77),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 4),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 12, .production_id = 57),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 21),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 78),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 4),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8, .production_id = 42),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 80),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 21, .production_id = 118),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 13, .production_id = 77),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 21, .production_id = 117),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 78),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 8, .production_id = 58),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5, .production_id = 21),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8, .production_id = 45),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 2),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 24, .production_id = 119),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 81),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 82),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4, .production_id = 6),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 21),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 110),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 83),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 38),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 6),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 84),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 85),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 86),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 44),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 55),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 20, .production_id = 116),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 88),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 42),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 89),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 4),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4, .production_id = 14),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 7, .production_id = 53),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 52),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 90),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 104),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 7, .production_id = 49),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 91),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 7, .production_id = 48),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 7, .production_id = 47),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 7, .production_id = 46),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7, .production_id = 45),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 113),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 25),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5, .production_id = 26),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 92),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 28),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5, .production_id = 29),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 93),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 31),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 94),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 95),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 96),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 97),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 34),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 87),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7, .production_id = 40),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 43),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 40),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7, .production_id = 4),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 101),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 102),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 103),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6, .production_id = 21),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 105),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 106),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 112),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18, .production_id = 107),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3, .production_id = 10),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 108),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 109),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 40),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 6),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 99),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 100),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6, .production_id = 34),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 15),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 3),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 111),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1247),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1365),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1402),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1358),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1357),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1355),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1351),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1382),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1017),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(998),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(996),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(962),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1335),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(825),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1377),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1385),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1374),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1319),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1314),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1287),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1284),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(810),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1001),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(843),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1047),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [1159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(463),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1398),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1403),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 20),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(954),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(737),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(915),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1399),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 20),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [1244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 20),
  [1252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1321),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1317),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1310),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1283),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1, .production_id = 71),
  [1286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(465),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null_list, 1),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(865),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(446),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(868),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1248),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(1283),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(997),
  [1355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(848),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2, .production_id = 73),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1, .production_id = 74),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1165),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null_list, 2),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(764),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [1413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(57),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1390),
  [1424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(799),
  [1426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(899),
  [1428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 2),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2, .production_id = 79),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(754),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_not_null_list_repeat1, 2), SHIFT_REPEAT(791),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_not_null_list_repeat1, 2),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1282),
  [1470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2), SHIFT_REPEAT(942),
  [1513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2),
  [1515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1400),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 1),
  [1541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(725),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(442),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(759),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(227),
  [1561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(594),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [1588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1081),
  [1590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1201),
  [1604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1204),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 98),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 39),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1247),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1209),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(971),
  [1658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [1664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4, .production_id = 20),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1322),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1320),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1086),
  [1678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1061),
  [1682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(808),
  [1684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1056),
  [1686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1190),
  [1704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 7),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1277),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1401),
  [1716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1178),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1404),
  [1736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [1738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 4),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1336),
  [1742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1279),
  [1746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 68),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1363),
  [1758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [1760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1079),
  [1762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1224),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1158),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [1774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 20),
  [1776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(952),
  [1778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(949),
  [1780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1341),
  [1782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [1784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1323),
  [1786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [1788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(948),
  [1790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(836),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1093),
  [1796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 3, .production_id = 64),
  [1798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1326),
  [1800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [1806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(941),
  [1808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [1814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1120),
  [1816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(945),
  [1822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(838),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1122),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1191),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 60),
  [1838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 61),
  [1840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 62),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1174),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1232),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [1862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1257),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1141),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1273),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [1906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1288),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1256),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1090),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1302),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1210),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1376),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1370),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1228),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1238),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1241),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [2002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1268),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [2086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 37),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1285),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1077),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1379),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [2146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1104),
  [2172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 5),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1180),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1291),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1354),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1137),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1138),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1217),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [2266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 71),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1152),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1155),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1157),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1159),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1160),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1162),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1164),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1168),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1169),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1170),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1075),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1208),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2332] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1182),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1185),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [2350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1188),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1189),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1219),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1199),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1202),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1203),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1142),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1206),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1207),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1175),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1213),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1215),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1216),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [2420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [2422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [2432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1222),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1225),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1229),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1230),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1231),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [2458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1221),
  [2460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1234),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [2464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1235),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1236),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1239),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1240),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1332),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1395),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1244),
  [2490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [2492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1405),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [2496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1397),
  [2498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [2500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1254),
  [2504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1255),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [2514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 22),
  [2520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1262),
  [2522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1263),
  [2524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1369),
  [2526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1265),
  [2528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1266),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1267),
  [2532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1313),
  [2534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1269),
  [2538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1270),
  [2540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [2542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1272),
  [2544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [2546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1274),
  [2548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1275),
  [2550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1276),
  [2552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1306),
  [2554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [2556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1278),
  [2558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1292),
  [2560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [2562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1280),
  [2564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [2566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [2568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [2570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [2572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [2574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [2576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [2578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [2580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1293),
  [2582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1294),
  [2584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [2586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1296),
  [2588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [2592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [2594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1300),
  [2596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [2598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [2600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1303),
  [2602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1304),
  [2604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1305),
  [2606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [2608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1307),
  [2610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1308),
  [2612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [2614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [2616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1311),
  [2620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1312),
  [2622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [2624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1315),
  [2628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1316),
  [2630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [2632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [2634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [2636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1318),
  [2638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [2640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [2644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [2646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [2648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [2650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [2652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [2654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [2656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [2658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [2660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1327),
  [2662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1329),
  [2664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1330),
  [2666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [2668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [2670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [2672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [2674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1338),
  [2676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1339),
  [2678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [2680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [2682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1342),
  [2684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1343),
  [2686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1324),
  [2688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [2690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1345),
  [2692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [2696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1347),
  [2698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [2700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [2702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [2704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [2706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1350),
  [2708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [2710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [2712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1387),
  [2714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [2716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [2718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1249),
  [2720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [2722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [2724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [2728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [2730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1352),
  [2732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [2734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [2736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [2738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1250),
  [2740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [2742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [2744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [2746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [2748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [2750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1360),
  [2752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1361),
  [2754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1362),
  [2756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [2758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [2760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1364),
  [2762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1139),
  [2764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [2766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1366),
  [2768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [2770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [2772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [2774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [2776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 20),
  [2778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1371),
  [2780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1173),
  [2782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [2784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [2786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [2788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [2790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [2792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [2794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [2796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1380),
  [2798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1381),
  [2800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [2802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [2804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1383),
  [2808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [2810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [2812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [2814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [2816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [2818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [2820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [2822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [2824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [2826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [2828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [2830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [2832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [2834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [2836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1391),
  [2838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [2840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [2842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [2844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1388),
  [2846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [2848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [2850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [2852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [2854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1192),
  [2856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [2858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [2860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [2862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [2864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [2866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [2868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [2870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1299),
  [2872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [2874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [2876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [2878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [2880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [2882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
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
