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
#define STATE_COUNT 1365
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 308
#define ALIAS_COUNT 27
#define TOKEN_COUNT 145
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 23
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
  aux_sym_column_not_null_token1 = 101,
  aux_sym_materialized_view_options_token1 = 102,
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
  sym_trigger_name = 252,
  sym_trigger_class = 253,
  sym_create_type = 254,
  sym_create_user = 255,
  sym_user_name = 256,
  sym_alter_materialized_view = 257,
  sym_alter_keyspace = 258,
  sym_keyspace_name = 259,
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
  aux_sym_expression_list_repeat1 = 291,
  aux_sym_assignment_map_repeat1 = 292,
  aux_sym_update_repeat1 = 293,
  aux_sym_init_cond_list_nested_repeat1 = 294,
  aux_sym_init_cond_hash_repeat1 = 295,
  aux_sym_materialized_view_where_repeat1 = 296,
  aux_sym_materialized_view_options_repeat1 = 297,
  aux_sym_create_function_repeat1 = 298,
  aux_sym_data_type_definition_repeat1 = 299,
  aux_sym_role_with_repeat1 = 300,
  aux_sym_option_hash_repeat1 = 301,
  aux_sym_column_definition_list_repeat1 = 302,
  aux_sym_clustering_key_list_repeat1 = 303,
  aux_sym_create_type_repeat1 = 304,
  aux_sym_replication_list_repeat1 = 305,
  aux_sym_alter_table_column_definition_repeat1 = 306,
  aux_sym_alter_type_rename_list_repeat1 = 307,
  anon_alias_sym_aggregate = 308,
  anon_alias_sym_alias = 309,
  anon_alias_sym_clustering_key = 310,
  anon_alias_sym_column = 311,
  anon_alias_sym_data_type = 312,
  anon_alias_sym_entries = 313,
  anon_alias_sym_finalfunc = 314,
  anon_alias_sym_full = 315,
  anon_alias_sym_function = 316,
  anon_alias_sym_function_name = 317,
  anon_alias_sym_hash_key = 318,
  anon_alias_sym_index = 319,
  anon_alias_sym_keys = 320,
  anon_alias_sym_keyspace = 321,
  anon_alias_sym_language = 322,
  anon_alias_sym_limit_value = 323,
  anon_alias_sym_materialized_view = 324,
  anon_alias_sym_option = 325,
  anon_alias_sym_param_name = 326,
  anon_alias_sym_partition_key = 327,
  anon_alias_sym_primary_key = 328,
  anon_alias_sym_role = 329,
  anon_alias_sym_sfunc = 330,
  anon_alias_sym_table = 331,
  anon_alias_sym_trigger = 332,
  anon_alias_sym_type = 333,
  anon_alias_sym_user = 334,
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
  [aux_sym_column_not_null_token1] = "IS",
  [aux_sym_materialized_view_options_token1] = "WITH",
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
  [sym_keyspace_name] = "keyspace_name",
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
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_assignment_map_repeat1] = "assignment_map_repeat1",
  [aux_sym_update_repeat1] = "update_repeat1",
  [aux_sym_init_cond_list_nested_repeat1] = "init_cond_list_nested_repeat1",
  [aux_sym_init_cond_hash_repeat1] = "init_cond_hash_repeat1",
  [aux_sym_materialized_view_where_repeat1] = "materialized_view_where_repeat1",
  [aux_sym_materialized_view_options_repeat1] = "materialized_view_options_repeat1",
  [aux_sym_create_function_repeat1] = "create_function_repeat1",
  [aux_sym_data_type_definition_repeat1] = "data_type_definition_repeat1",
  [aux_sym_role_with_repeat1] = "role_with_repeat1",
  [aux_sym_option_hash_repeat1] = "option_hash_repeat1",
  [aux_sym_column_definition_list_repeat1] = "column_definition_list_repeat1",
  [aux_sym_clustering_key_list_repeat1] = "clustering_key_list_repeat1",
  [aux_sym_create_type_repeat1] = "create_type_repeat1",
  [aux_sym_replication_list_repeat1] = "replication_list_repeat1",
  [aux_sym_alter_table_column_definition_repeat1] = "alter_table_column_definition_repeat1",
  [aux_sym_alter_type_rename_list_repeat1] = "alter_type_rename_list_repeat1",
  [anon_alias_sym_aggregate] = "aggregate",
  [anon_alias_sym_alias] = "alias",
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
  [anon_alias_sym_limit_value] = "limit_value",
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
  [aux_sym_column_not_null_token1] = aux_sym_column_not_null_token1,
  [aux_sym_materialized_view_options_token1] = aux_sym_materialized_view_options_token1,
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
  [sym_keyspace_name] = sym_keyspace_name,
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
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_assignment_map_repeat1] = aux_sym_assignment_map_repeat1,
  [aux_sym_update_repeat1] = aux_sym_update_repeat1,
  [aux_sym_init_cond_list_nested_repeat1] = aux_sym_init_cond_list_nested_repeat1,
  [aux_sym_init_cond_hash_repeat1] = aux_sym_init_cond_hash_repeat1,
  [aux_sym_materialized_view_where_repeat1] = aux_sym_materialized_view_where_repeat1,
  [aux_sym_materialized_view_options_repeat1] = aux_sym_materialized_view_options_repeat1,
  [aux_sym_create_function_repeat1] = aux_sym_create_function_repeat1,
  [aux_sym_data_type_definition_repeat1] = aux_sym_data_type_definition_repeat1,
  [aux_sym_role_with_repeat1] = aux_sym_role_with_repeat1,
  [aux_sym_option_hash_repeat1] = aux_sym_option_hash_repeat1,
  [aux_sym_column_definition_list_repeat1] = aux_sym_column_definition_list_repeat1,
  [aux_sym_clustering_key_list_repeat1] = aux_sym_clustering_key_list_repeat1,
  [aux_sym_create_type_repeat1] = aux_sym_create_type_repeat1,
  [aux_sym_replication_list_repeat1] = aux_sym_replication_list_repeat1,
  [aux_sym_alter_table_column_definition_repeat1] = aux_sym_alter_table_column_definition_repeat1,
  [aux_sym_alter_type_rename_list_repeat1] = aux_sym_alter_type_rename_list_repeat1,
  [anon_alias_sym_aggregate] = anon_alias_sym_aggregate,
  [anon_alias_sym_alias] = anon_alias_sym_alias,
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
  [anon_alias_sym_limit_value] = anon_alias_sym_limit_value,
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
  [aux_sym_column_not_null_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_materialized_view_options_token1] = {
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
  [sym_keyspace_name] = {
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
  [aux_sym_materialized_view_where_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_materialized_view_options_repeat1] = {
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
  [anon_alias_sym_alias] = {
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
  [anon_alias_sym_limit_value] = {
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

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_column,
  },
  [2] = {
    [0] = anon_alias_sym_table,
  },
  [3] = {
    [1] = anon_alias_sym_keyspace,
  },
  [4] = {
    [0] = anon_alias_sym_index,
  },
  [5] = {
    [0] = anon_alias_sym_keyspace,
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
    [2] = anon_alias_sym_table,
  },
  [10] = {
    [2] = anon_alias_sym_index,
  },
  [11] = {
    [2] = anon_alias_sym_keyspace,
  },
  [12] = {
    [2] = anon_alias_sym_function,
  },
  [13] = {
    [2] = anon_alias_sym_aggregate,
  },
  [14] = {
    [2] = anon_alias_sym_type,
  },
  [15] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_alias,
  },
  [16] = {
    [2] = anon_alias_sym_alias,
  },
  [17] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_table,
  },
  [18] = {
    [3] = anon_alias_sym_materialized_view,
  },
  [19] = {
    [0] = anon_alias_sym_role,
  },
  [20] = {
    [3] = anon_alias_sym_role,
  },
  [21] = {
    [0] = anon_alias_sym_function_name,
  },
  [22] = {
    [1] = anon_alias_sym_limit_value,
  },
  [23] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_trigger,
  },
  [24] = {
    [4] = anon_alias_sym_table,
  },
  [25] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_table,
  },
  [26] = {
    [4] = anon_alias_sym_index,
  },
  [27] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_index,
  },
  [28] = {
    [4] = anon_alias_sym_keyspace,
  },
  [29] = {
    [4] = anon_alias_sym_function,
  },
  [30] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
  },
  [31] = {
    [4] = anon_alias_sym_role,
  },
  [32] = {
    [4] = anon_alias_sym_aggregate,
  },
  [33] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
  },
  [34] = {
    [2] = anon_alias_sym_trigger,
    [4] = anon_alias_sym_table,
  },
  [35] = {
    [4] = anon_alias_sym_type,
  },
  [36] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
  },
  [37] = {
    [1] = anon_alias_sym_table,
  },
  [38] = {
    [1] = anon_alias_sym_function,
  },
  [39] = {
    [1] = anon_alias_sym_role,
  },
  [40] = {
    [0] = anon_alias_sym_option,
  },
  [41] = {
    [0] = anon_alias_sym_param_name,
  },
  [42] = {
    [5] = anon_alias_sym_role,
  },
  [43] = {
    [5] = anon_alias_sym_materialized_view,
  },
  [44] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
  },
  [45] = {
    [1] = anon_alias_sym_column,
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
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_table,
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
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_materialized_view,
  },
  [60] = {
    [5] = anon_alias_sym_table,
  },
  [61] = {
    [2] = anon_alias_sym_keys,
  },
  [62] = {
    [2] = anon_alias_sym_entries,
  },
  [63] = {
    [2] = anon_alias_sym_full,
  },
  [64] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
    [6] = anon_alias_sym_column,
    [7] = anon_alias_sym_data_type,
  },
  [65] = {
    [1] = anon_alias_sym_column,
    [2] = anon_alias_sym_data_type,
  },
  [66] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_trigger,
    [8] = anon_alias_sym_table,
  },
  [67] = {
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [68] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [69] = {
    [0] = anon_alias_sym_primary_key,
  },
  [70] = {
    [5] = anon_alias_sym_type,
    [7] = anon_alias_sym_column,
    [8] = anon_alias_sym_data_type,
  },
  [71] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_table,
  },
  [72] = {
    [0] = anon_alias_sym_partition_key,
  },
  [73] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_trigger,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
  },
  [74] = {
    [0] = anon_alias_sym_partition_key,
    [1] = anon_alias_sym_partition_key,
  },
  [75] = {
    [0] = anon_alias_sym_clustering_key,
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
    [13] = anon_alias_sym_primary_key,
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
    [15] = anon_alias_sym_primary_key,
  },
  [100] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
    [15] = anon_alias_sym_primary_key,
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
    [16] = anon_alias_sym_primary_key,
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
    [17] = anon_alias_sym_primary_key,
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
    [18] = anon_alias_sym_primary_key,
  },
  [115] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_keyspace,
    [13] = anon_alias_sym_table,
    [18] = anon_alias_sym_primary_key,
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
    [20] = anon_alias_sym_primary_key,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_column_list, 2,
    sym_column_list,
    anon_alias_sym_primary_key,
  sym_data_type, 2,
    sym_data_type,
    anon_alias_sym_data_type,
  aux_sym_clustering_key_list_repeat1, 3,
    aux_sym_clustering_key_list_repeat1,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(555);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ')') ADVANCE(571);
      if (lookahead == '*') ADVANCE(566);
      if (lookahead == '+') ADVANCE(656);
      if (lookahead == ',') ADVANCE(567);
      if (lookahead == '-') ADVANCE(657);
      if (lookahead == '.') ADVANCE(568);
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == ':') ADVANCE(632);
      if (lookahead == ';') ADVANCE(556);
      if (lookahead == '<') ADVANCE(597);
      if (lookahead == '=') ADVANCE(600);
      if (lookahead == '>') ADVANCE(601);
      if (lookahead == 'X') ADVANCE(28);
      if (lookahead == '[') ADVANCE(621);
      if (lookahead == ']') ADVANCE(622);
      if (lookahead == '{') ADVANCE(631);
      if (lookahead == '}') ADVANCE(633);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(43);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(35);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(44);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(375);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(192);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(421);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(115);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(335);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(311);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(40);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == '*') ADVANCE(566);
      if (lookahead == '-') ADVANCE(513);
      if (lookahead == '0') ADVANCE(579);
      if (lookahead == 'X') ADVANCE(770);
      if (lookahead == '[') ADVANCE(621);
      if (lookahead == '{') ADVANCE(631);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(775);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(989);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(935);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(1006);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(551);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(592);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(577);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(577);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(517);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ')') ADVANCE(571);
      if (lookahead == '*') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == '*') ADVANCE(566);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(856);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(952);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == '*') ADVANCE(566);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(952);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '[') ADVANCE(621);
      if (lookahead == '{') ADVANCE(631);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(942);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(843);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(913);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(772);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(869);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(890);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(847);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(773);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(822);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(805);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(982);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(774);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(876);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(987);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(834);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(920);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(789);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(871);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(919);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(993);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(905);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(990);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(825);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(936);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(838);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(941);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(789);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(769);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(838);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(896);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(838);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(896);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(520);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(533);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(539);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(549);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(544);
      END_STATE();
    case 33:
      if (lookahead == 'X') ADVANCE(516);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(499);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(482);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(292);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(662);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(256);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(372);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(370);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(370);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(198);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(387);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(492);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(325);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(191);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(71);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(385);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(387);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(341);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(359);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(353);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(609);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(286);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(347);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(337);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(422);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(490);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(388);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(459);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(709);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(149);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(281);
      END_STATE();
    case 77:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(283);
      END_STATE();
    case 78:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(284);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(760);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(696);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(698);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(759);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(221);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(489);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(349);
      END_STATE();
    case 87:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(73);
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
          lookahead == 'c') ADVANCE(450);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(399);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(240);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(79);
      END_STATE();
    case 97:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(470);
      END_STATE();
    case 98:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 99:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(473);
      END_STATE();
    case 100:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(203);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(366);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(569);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(435);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(761);
      END_STATE();
    case 102:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(596);
      END_STATE();
    case 103:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(747);
      END_STATE();
    case 104:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(749);
      END_STATE();
    case 105:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(618);
      END_STATE();
    case 106:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(699);
      END_STATE();
    case 107:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(753);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(737);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(619);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(688);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(658);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(715);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(736);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(590);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(741);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(764);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(686);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(476);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(62);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(354);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(369);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(425);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 192:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(612);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(603);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(702);
      END_STATE();
    case 193:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(612);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(702);
      END_STATE();
    case 194:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(685);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(642);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(457);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(694);
      END_STATE();
    case 195:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(685);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 196:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(505);
      END_STATE();
    case 197:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(486);
      END_STATE();
    case 198:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(203);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(435);
      END_STATE();
    case 199:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(209);
      END_STATE();
    case 200:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(623);
      END_STATE();
    case 201:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(564);
      END_STATE();
    case 202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(757);
      END_STATE();
    case 203:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(400);
      END_STATE();
    case 204:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 205:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 206:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(245);
      END_STATE();
    case 207:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(210);
      END_STATE();
    case 208:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(491);
      END_STATE();
    case 209:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 210:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(139);
      END_STATE();
    case 212:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 213:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(141);
      END_STATE();
    case 214:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(212);
      END_STATE();
    case 215:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 216:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(703);
      END_STATE();
    case 217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(620);
      END_STATE();
    case 218:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(182);
      END_STATE();
    case 219:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(182);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(452);
      END_STATE();
    case 220:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(355);
      END_STATE();
    case 221:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(511);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(495);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(207);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(454);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(479);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(338);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(512);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 242:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 243:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 245:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 246:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 247:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 248:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 249:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 250:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 251:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(468);
      END_STATE();
    case 252:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 253:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(134);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(435);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(665);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(634);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(648);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(574);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(717);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(278);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(366);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(278);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(366);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(504);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(79);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(480);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 273:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 274:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 275:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 276:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 277:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(654);
      END_STATE();
    case 278:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      END_STATE();
    case 279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 285:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 286:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(472);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 287:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 288:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 289:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(593);
      END_STATE();
    case 291:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(593);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(166);
      END_STATE();
    case 292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(367);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(458);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(332);
      END_STATE();
    case 293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(363);
      END_STATE();
    case 294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(237);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(438);
      END_STATE();
    case 295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(241);
      END_STATE();
    case 296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(122);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(509);
      END_STATE();
    case 298:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 299:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(561);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(616);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(754);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(723);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(711);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(679);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(751);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(453);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(157);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(272);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(48);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(260);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(477);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(339);
      END_STATE();
    case 316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 318:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 319:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 320:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 321:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 322:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 323:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 324:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 325:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(417);
      END_STATE();
    case 329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 330:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(449);
      END_STATE();
    case 331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(451);
      END_STATE();
    case 332:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(461);
      END_STATE();
    case 333:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 334:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 335:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(393);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 336:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(662);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 337:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 338:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(628);
      END_STATE();
    case 339:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 340:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 341:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 342:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 343:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 344:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 345:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 346:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 347:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 348:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 349:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 350:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 351:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 352:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 353:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 354:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(394);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(371);
      END_STATE();
    case 355:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 356:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 357:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 358:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(312);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 359:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 360:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 361:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(729);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 362:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(650);
      END_STATE();
    case 363:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(624);
      END_STATE();
    case 364:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 365:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 366:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(264);
      END_STATE();
    case 367:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 368:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 369:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 370:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 371:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 372:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(282);
      END_STATE();
    case 373:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 374:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 375:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 376:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 377:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 378:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(668);
      END_STATE();
    case 379:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(608);
      END_STATE();
    case 380:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(713);
      END_STATE();
    case 381:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(690);
      END_STATE();
    case 382:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(743);
      END_STATE();
    case 383:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(755);
      END_STATE();
    case 384:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(766);
      END_STATE();
    case 385:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(693);
      END_STATE();
    case 386:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(692);
      END_STATE();
    case 387:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 388:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 389:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(506);
      END_STATE();
    case 390:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 391:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 392:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 393:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(493);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(629);
      END_STATE();
    case 394:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 395:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 396:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 397:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 398:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 399:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 400:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 401:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 402:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 403:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 404:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 405:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 406:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 407:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 408:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(614);
      END_STATE();
    case 409:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(630);
      END_STATE();
    case 410:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(646);
      END_STATE();
    case 411:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(756);
      END_STATE();
    case 412:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(704);
      END_STATE();
    case 413:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(605);
      END_STATE();
    case 414:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(667);
      END_STATE();
    case 415:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(752);
      END_STATE();
    case 416:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(678);
      END_STATE();
    case 417:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(674);
      END_STATE();
    case 418:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(677);
      END_STATE();
    case 419:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(498);
      END_STATE();
    case 420:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      END_STATE();
    case 421:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      END_STATE();
    case 422:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(469);
      END_STATE();
    case 423:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(432);
      END_STATE();
    case 424:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(455);
      END_STATE();
    case 425:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(95);
      END_STATE();
    case 426:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(225);
      END_STATE();
    case 427:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 428:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(175);
      END_STATE();
    case 429:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 430:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(180);
      END_STATE();
    case 431:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(373);
      END_STATE();
    case 432:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(243);
      END_STATE();
    case 433:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(368);
      END_STATE();
    case 434:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(474);
      END_STATE();
    case 435:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      END_STATE();
    case 436:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 437:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(725);
      END_STATE();
    case 438:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(683);
      END_STATE();
    case 439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(733);
      END_STATE();
    case 440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(721);
      END_STATE();
    case 441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(660);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(750);
      END_STATE();
    case 443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(565);
      END_STATE();
    case 444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(707);
      END_STATE();
    case 445:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(626);
      END_STATE();
    case 446:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(557);
      END_STATE();
    case 447:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(745);
      END_STATE();
    case 448:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(762);
      END_STATE();
    case 449:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(739);
      END_STATE();
    case 450:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(559);
      END_STATE();
    case 451:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(731);
      END_STATE();
    case 452:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      END_STATE();
    case 453:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(390);
      END_STATE();
    case 454:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 455:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(408);
      END_STATE();
    case 456:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 457:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 458:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 459:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 460:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      END_STATE();
    case 461:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 462:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 463:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 464:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 465:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 466:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 467:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 468:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      END_STATE();
    case 469:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      END_STATE();
    case 470:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 471:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 472:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      END_STATE();
    case 473:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(252);
      END_STATE();
    case 474:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 475:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 476:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 477:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(404);
      END_STATE();
    case 478:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(397);
      END_STATE();
    case 479:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(442);
      END_STATE();
    case 480:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 481:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 482:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(434);
      END_STATE();
    case 483:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 484:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(428);
      END_STATE();
    case 485:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(429);
      END_STATE();
    case 486:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(321);
      END_STATE();
    case 487:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 488:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 489:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(465);
      END_STATE();
    case 490:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 491:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 492:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 493:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(374);
      END_STATE();
    case 494:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(339);
      END_STATE();
    case 495:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(145);
      END_STATE();
    case 496:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(689);
      END_STATE();
    case 497:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(563);
      END_STATE();
    case 498:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(352);
      END_STATE();
    case 499:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(398);
      END_STATE();
    case 500:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(641);
      END_STATE();
    case 501:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(439);
      END_STATE();
    case 502:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(156);
      END_STATE();
    case 503:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(607);
      END_STATE();
    case 504:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(767);
      END_STATE();
    case 505:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(673);
      END_STATE();
    case 506:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(700);
      END_STATE();
    case 507:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(606);
      END_STATE();
    case 508:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(431);
      END_STATE();
    case 509:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(249);
      END_STATE();
    case 510:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(433);
      END_STATE();
    case 511:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(144);
      END_STATE();
    case 512:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(172);
      END_STATE();
    case 513:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      END_STATE();
    case 514:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(589);
      END_STATE();
    case 515:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      END_STATE();
    case 516:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(573);
      END_STATE();
    case 517:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 518:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 519:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(576);
      END_STATE();
    case 520:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(517);
      END_STATE();
    case 521:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(518);
      END_STATE();
    case 522:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(519);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 530:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 531:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 532:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(530);
      END_STATE();
    case 533:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(532);
      END_STATE();
    case 534:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 535:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 536:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      END_STATE();
    case 537:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 538:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(536);
      END_STATE();
    case 539:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(538);
      END_STATE();
    case 540:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(534);
      END_STATE();
    case 541:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 542:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(541);
      END_STATE();
    case 543:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(542);
      END_STATE();
    case 544:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(543);
      END_STATE();
    case 545:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(540);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(548);
      END_STATE();
    case 550:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 551:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(5);
      END_STATE();
    case 552:
      if (eof) ADVANCE(555);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ')') ADVANCE(571);
      if (lookahead == ',') ADVANCE(567);
      if (lookahead == '-') ADVANCE(513);
      if (lookahead == '.') ADVANCE(568);
      if (lookahead == '0') ADVANCE(579);
      if (lookahead == ':') ADVANCE(632);
      if (lookahead == ';') ADVANCE(556);
      if (lookahead == '<') ADVANCE(597);
      if (lookahead == '=') ADVANCE(600);
      if (lookahead == '>') ADVANCE(601);
      if (lookahead == 'X') ADVANCE(28);
      if (lookahead == '[') ADVANCE(621);
      if (lookahead == ']') ADVANCE(622);
      if (lookahead == '{') ADVANCE(631);
      if (lookahead == '}') ADVANCE(633);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(146);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(358);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(45);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(375);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(193);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(421);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(161);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(481);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(195);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(376);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(336);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(364);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(57);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(552)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(587);
      END_STATE();
    case 553:
      if (eof) ADVANCE(555);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == ')') ADVANCE(571);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == ';') ADVANCE(556);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(150);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(387);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(148);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(487);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(375);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(307);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(165);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(407);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(553)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      END_STATE();
    case 554:
      if (eof) ADVANCE(555);
      if (lookahead == '\'') ADVANCE(550);
      if (lookahead == ';') ADVANCE(556);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(882);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(833);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(870);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(835);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(938);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(898);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(847);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(810);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(836);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(934);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(924);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(554)
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_limit_spec_token1);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__string_literal);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '.') ADVANCE(514);
      if (lookahead == 'X') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(518);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(521);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(589);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__code_block);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(598);
      if (lookahead == '>') ADVANCE(599);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(602);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(454);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(479);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(727);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token1);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(644);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_insert_statement_token3);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_ttl_token1);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_update_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_update_token2);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_update_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_use_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_priviledge_token1);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_priviledge_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_priviledge_token2);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_priviledge_token3);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_priviledge_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_priviledge_token4);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_priviledge_token5);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_priviledge_token6);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_priviledge_token7);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_resource_token3);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_resource_token4);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_drop_aggregate_token1);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token1);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token2);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_drop_trigger_token1);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_drop_type_token1);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token2);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token3);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token4);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token5);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token6);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token1);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_column_not_null_token1);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_materialized_view_options_token1);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_data_type_name_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(628);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(970);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(986);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(483);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_return_mode_token1);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_return_mode_token2);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token1);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_durable_writes_token1);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_role_with_options_token1);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_role_with_options_token2);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_role_with_options_token3);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_role_with_options_token4);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_order_direction_token1);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_order_direction_token2);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_alter_table_add_token1);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_alter_table_drop_compact_storage_token1);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_alter_table_drop_compact_storage_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_alter_table_drop_compact_storage_token2);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_alter_table_rename_token1);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_user_super_user_token1);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_apply_batch_token1);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_apply_batch_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(520);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(954);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(795);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(983);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(921);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(929);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1005);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(867);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(886);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(931);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(800);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(862);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(892);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(959);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(933);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(799);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(976);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(904);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(978);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(979);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(792);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(710);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(880);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(842);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(901);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(850);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(845);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(966);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(972);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(967);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(968);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(820);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(788);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(748);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(738);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(787);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(992);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(885);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(928);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(716);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(735);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(742);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(720);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(991);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(611);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(664);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(653);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(636);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(591);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(682);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(638);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(676);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(796);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(955);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(776);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(930);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(956);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(728);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(996);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(891);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(781);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(944);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(932);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(940);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(937);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(785);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(841);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(997);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(877);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(916);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(878);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(977);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(613);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(758);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(849);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(852);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(778);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(840);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(909);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(910);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(802);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(887);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(706);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(946);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(803);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(900);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(846);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(917);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(893);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(897);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(828);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(888);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(949);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(950);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(902);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(903);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(908);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(814);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(718);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(575);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(649);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(994);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(883);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(827);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(915);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(911);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(984);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(832);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(984);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(808);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(863);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(809);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(865);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(837);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(821);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(818);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(819);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1004);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(974);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(925);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(859);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(594);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(807);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(998);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(922);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(780);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(783);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(927);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(824);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(724);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(712);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(617);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(680);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(562);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(643);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(839);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(948);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(801);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(960);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(961);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(962);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(963);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(964);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(980);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(969);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(797);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(798);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(790);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(868);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(999);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(981);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(884);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(782);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(923);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(894);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(895);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(889);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(879);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(730);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(625);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(651);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(804);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(811);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(866);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(779);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(784);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(872);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(793);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(714);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(744);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(669);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(995);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(985);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(988);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(914);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(853);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(786);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(854);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(965);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(855);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(794);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(645);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(647);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(615);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(957);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(926);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(830);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(973);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(971);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(817);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(918);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(975);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(806);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(655);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(726);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(684);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(734);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(722);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(708);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(746);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(740);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(732);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(661);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(627);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(558);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(560);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(763);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(823);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(777);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(945);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(851);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(860);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(829);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(831);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(812);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(813);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(815);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(939);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(906);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(844);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(791);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(953);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(899);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(848);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(907);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(817);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(873);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(874);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(912);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(958);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(857);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(768);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(701);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(943);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(947);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(826);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1007);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(771);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1000);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1001);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1002);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1003);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1004);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1005);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
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
  [4] = {.lex_state = 552},
  [5] = {.lex_state = 552},
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
  [59] = {.lex_state = 552},
  [60] = {.lex_state = 552},
  [61] = {.lex_state = 552},
  [62] = {.lex_state = 552},
  [63] = {.lex_state = 552},
  [64] = {.lex_state = 552},
  [65] = {.lex_state = 552},
  [66] = {.lex_state = 552},
  [67] = {.lex_state = 552},
  [68] = {.lex_state = 552},
  [69] = {.lex_state = 552},
  [70] = {.lex_state = 552},
  [71] = {.lex_state = 552},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 552},
  [75] = {.lex_state = 552},
  [76] = {.lex_state = 552},
  [77] = {.lex_state = 552},
  [78] = {.lex_state = 552},
  [79] = {.lex_state = 552},
  [80] = {.lex_state = 552},
  [81] = {.lex_state = 552},
  [82] = {.lex_state = 552},
  [83] = {.lex_state = 552},
  [84] = {.lex_state = 552},
  [85] = {.lex_state = 554},
  [86] = {.lex_state = 552},
  [87] = {.lex_state = 552},
  [88] = {.lex_state = 552},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 552},
  [92] = {.lex_state = 552},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 552},
  [95] = {.lex_state = 552},
  [96] = {.lex_state = 553},
  [97] = {.lex_state = 552},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 552},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 552},
  [104] = {.lex_state = 552},
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
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 552},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 552},
  [121] = {.lex_state = 552},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 552},
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
  [166] = {.lex_state = 552},
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
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 552},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 552},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 552},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 552},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 552},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 552},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 552},
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
  [405] = {.lex_state = 1},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 552},
  [408] = {.lex_state = 552},
  [409] = {.lex_state = 552},
  [410] = {.lex_state = 552},
  [411] = {.lex_state = 552},
  [412] = {.lex_state = 552},
  [413] = {.lex_state = 552},
  [414] = {.lex_state = 552},
  [415] = {.lex_state = 552},
  [416] = {.lex_state = 1},
  [417] = {.lex_state = 1},
  [418] = {.lex_state = 1},
  [419] = {.lex_state = 552},
  [420] = {.lex_state = 552},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 41},
  [423] = {.lex_state = 1},
  [424] = {.lex_state = 1},
  [425] = {.lex_state = 42},
  [426] = {.lex_state = 41},
  [427] = {.lex_state = 552},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 41},
  [430] = {.lex_state = 552},
  [431] = {.lex_state = 552},
  [432] = {.lex_state = 41},
  [433] = {.lex_state = 552},
  [434] = {.lex_state = 552},
  [435] = {.lex_state = 552},
  [436] = {.lex_state = 552},
  [437] = {.lex_state = 552},
  [438] = {.lex_state = 552},
  [439] = {.lex_state = 552},
  [440] = {.lex_state = 552},
  [441] = {.lex_state = 552},
  [442] = {.lex_state = 552},
  [443] = {.lex_state = 552},
  [444] = {.lex_state = 552},
  [445] = {.lex_state = 552},
  [446] = {.lex_state = 18},
  [447] = {.lex_state = 18},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 18},
  [450] = {.lex_state = 18},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 552},
  [453] = {.lex_state = 14},
  [454] = {.lex_state = 11},
  [455] = {.lex_state = 10},
  [456] = {.lex_state = 552},
  [457] = {.lex_state = 14},
  [458] = {.lex_state = 14},
  [459] = {.lex_state = 10},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 13},
  [462] = {.lex_state = 41},
  [463] = {.lex_state = 10},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 12},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 19},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 15},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 15},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 24},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 10},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 10},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 552},
  [485] = {.lex_state = 10},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 19},
  [490] = {.lex_state = 15},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 21},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 17},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 26},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 17},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 17},
  [510] = {.lex_state = 17},
  [511] = {.lex_state = 17},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 17},
  [515] = {.lex_state = 17},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 10},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 17},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 10},
  [523] = {.lex_state = 17},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 553},
  [526] = {.lex_state = 17},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 21},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 17},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 17},
  [533] = {.lex_state = 17},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 10},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 17},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 17},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 17},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 22},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 10},
  [551] = {.lex_state = 10},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 10},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 10},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 20},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 20},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 10},
  [580] = {.lex_state = 10},
  [581] = {.lex_state = 20},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 25},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 20},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 10},
  [591] = {.lex_state = 10},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 10},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 10},
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
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 553},
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
  [635] = {.lex_state = 10},
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
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
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
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 10},
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
  [685] = {.lex_state = 10},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 16},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 10},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 10},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 10},
  [701] = {.lex_state = 10},
  [702] = {.lex_state = 10},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 10},
  [705] = {.lex_state = 10},
  [706] = {.lex_state = 10},
  [707] = {.lex_state = 27},
  [708] = {.lex_state = 27},
  [709] = {.lex_state = 20},
  [710] = {.lex_state = 10},
  [711] = {.lex_state = 20},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 10},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 10},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 20},
  [722] = {.lex_state = 10},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 10},
  [725] = {.lex_state = 10},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 10},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 10},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 10},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 10},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 10},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 10},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 10},
  [752] = {.lex_state = 10},
  [753] = {.lex_state = 10},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 10},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 10},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 10},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 10},
  [775] = {.lex_state = 10},
  [776] = {.lex_state = 10},
  [777] = {.lex_state = 10},
  [778] = {.lex_state = 10},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 10},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 20},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 10},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 10},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 10},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 10},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 10},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 553},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 10},
  [807] = {.lex_state = 10},
  [808] = {.lex_state = 10},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 552},
  [811] = {.lex_state = 20},
  [812] = {.lex_state = 20},
  [813] = {.lex_state = 20},
  [814] = {.lex_state = 20},
  [815] = {.lex_state = 20},
  [816] = {.lex_state = 20},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 20},
  [819] = {.lex_state = 10},
  [820] = {.lex_state = 20},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 10},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 20},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 20},
  [828] = {.lex_state = 20},
  [829] = {.lex_state = 10},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 20},
  [832] = {.lex_state = 10},
  [833] = {.lex_state = 10},
  [834] = {.lex_state = 10},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 10},
  [839] = {.lex_state = 10},
  [840] = {.lex_state = 10},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 27},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 10},
  [849] = {.lex_state = 553},
  [850] = {.lex_state = 10},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 10},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 553},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 10},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 10},
  [868] = {.lex_state = 10},
  [869] = {.lex_state = 10},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 10},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 10},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 10},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 10},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 553},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 10},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 10},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 552},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 10},
  [913] = {.lex_state = 10},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 10},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 10},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 10},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 10},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 10},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 10},
  [927] = {.lex_state = 10},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 10},
  [934] = {.lex_state = 10},
  [935] = {.lex_state = 10},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 10},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 10},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 10},
  [950] = {.lex_state = 10},
  [951] = {.lex_state = 10},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 10},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 10},
  [960] = {.lex_state = 10},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 552},
  [964] = {.lex_state = 552},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 10},
  [967] = {.lex_state = 0},
  [968] = {.lex_state = 0},
  [969] = {.lex_state = 0},
  [970] = {.lex_state = 0},
  [971] = {.lex_state = 0},
  [972] = {.lex_state = 0},
  [973] = {.lex_state = 0},
  [974] = {.lex_state = 0},
  [975] = {.lex_state = 0},
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 0},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 0},
  [980] = {.lex_state = 10},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 10},
  [984] = {.lex_state = 10},
  [985] = {.lex_state = 41},
  [986] = {.lex_state = 10},
  [987] = {.lex_state = 0},
  [988] = {.lex_state = 10},
  [989] = {.lex_state = 10},
  [990] = {.lex_state = 10},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 10},
  [993] = {.lex_state = 10},
  [994] = {.lex_state = 10},
  [995] = {.lex_state = 10},
  [996] = {.lex_state = 10},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 10},
  [999] = {.lex_state = 0},
  [1000] = {.lex_state = 10},
  [1001] = {.lex_state = 0},
  [1002] = {.lex_state = 0},
  [1003] = {.lex_state = 0},
  [1004] = {.lex_state = 0},
  [1005] = {.lex_state = 10},
  [1006] = {.lex_state = 13},
  [1007] = {.lex_state = 0},
  [1008] = {.lex_state = 0},
  [1009] = {.lex_state = 0},
  [1010] = {.lex_state = 10},
  [1011] = {.lex_state = 0},
  [1012] = {.lex_state = 10},
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 0},
  [1015] = {.lex_state = 10},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 0},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 10},
  [1020] = {.lex_state = 0},
  [1021] = {.lex_state = 10},
  [1022] = {.lex_state = 10},
  [1023] = {.lex_state = 0},
  [1024] = {.lex_state = 0},
  [1025] = {.lex_state = 0},
  [1026] = {.lex_state = 552},
  [1027] = {.lex_state = 0},
  [1028] = {.lex_state = 0},
  [1029] = {.lex_state = 0},
  [1030] = {.lex_state = 0},
  [1031] = {.lex_state = 0},
  [1032] = {.lex_state = 0},
  [1033] = {.lex_state = 0},
  [1034] = {.lex_state = 0},
  [1035] = {.lex_state = 0},
  [1036] = {.lex_state = 10},
  [1037] = {.lex_state = 0},
  [1038] = {.lex_state = 0},
  [1039] = {.lex_state = 0},
  [1040] = {.lex_state = 0},
  [1041] = {.lex_state = 10},
  [1042] = {.lex_state = 0},
  [1043] = {.lex_state = 0},
  [1044] = {.lex_state = 0},
  [1045] = {.lex_state = 0},
  [1046] = {.lex_state = 0},
  [1047] = {.lex_state = 0},
  [1048] = {.lex_state = 0},
  [1049] = {.lex_state = 0},
  [1050] = {.lex_state = 10},
  [1051] = {.lex_state = 0},
  [1052] = {.lex_state = 10},
  [1053] = {.lex_state = 10},
  [1054] = {.lex_state = 0},
  [1055] = {.lex_state = 0},
  [1056] = {.lex_state = 0},
  [1057] = {.lex_state = 0},
  [1058] = {.lex_state = 0},
  [1059] = {.lex_state = 10},
  [1060] = {.lex_state = 0},
  [1061] = {.lex_state = 0},
  [1062] = {.lex_state = 10},
  [1063] = {.lex_state = 0},
  [1064] = {.lex_state = 0},
  [1065] = {.lex_state = 0},
  [1066] = {.lex_state = 10},
  [1067] = {.lex_state = 0},
  [1068] = {.lex_state = 0},
  [1069] = {.lex_state = 0},
  [1070] = {.lex_state = 0},
  [1071] = {.lex_state = 10},
  [1072] = {.lex_state = 0},
  [1073] = {.lex_state = 0},
  [1074] = {.lex_state = 553},
  [1075] = {.lex_state = 0},
  [1076] = {.lex_state = 0},
  [1077] = {.lex_state = 10},
  [1078] = {.lex_state = 0},
  [1079] = {.lex_state = 0},
  [1080] = {.lex_state = 0},
  [1081] = {.lex_state = 10},
  [1082] = {.lex_state = 10},
  [1083] = {.lex_state = 10},
  [1084] = {.lex_state = 0},
  [1085] = {.lex_state = 0},
  [1086] = {.lex_state = 0},
  [1087] = {.lex_state = 0},
  [1088] = {.lex_state = 10},
  [1089] = {.lex_state = 10},
  [1090] = {.lex_state = 0},
  [1091] = {.lex_state = 0},
  [1092] = {.lex_state = 0},
  [1093] = {.lex_state = 0},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 0},
  [1096] = {.lex_state = 10},
  [1097] = {.lex_state = 0},
  [1098] = {.lex_state = 0},
  [1099] = {.lex_state = 10},
  [1100] = {.lex_state = 0},
  [1101] = {.lex_state = 0},
  [1102] = {.lex_state = 0},
  [1103] = {.lex_state = 0},
  [1104] = {.lex_state = 10},
  [1105] = {.lex_state = 0},
  [1106] = {.lex_state = 0},
  [1107] = {.lex_state = 0},
  [1108] = {.lex_state = 10},
  [1109] = {.lex_state = 10},
  [1110] = {.lex_state = 0},
  [1111] = {.lex_state = 0},
  [1112] = {.lex_state = 0},
  [1113] = {.lex_state = 10},
  [1114] = {.lex_state = 0},
  [1115] = {.lex_state = 0},
  [1116] = {.lex_state = 10},
  [1117] = {.lex_state = 0},
  [1118] = {.lex_state = 0},
  [1119] = {.lex_state = 0},
  [1120] = {.lex_state = 10},
  [1121] = {.lex_state = 0},
  [1122] = {.lex_state = 0},
  [1123] = {.lex_state = 0},
  [1124] = {.lex_state = 0},
  [1125] = {.lex_state = 10},
  [1126] = {.lex_state = 0},
  [1127] = {.lex_state = 10},
  [1128] = {.lex_state = 10},
  [1129] = {.lex_state = 0},
  [1130] = {.lex_state = 0},
  [1131] = {.lex_state = 552},
  [1132] = {.lex_state = 552},
  [1133] = {.lex_state = 0},
  [1134] = {.lex_state = 0},
  [1135] = {.lex_state = 10},
  [1136] = {.lex_state = 0},
  [1137] = {.lex_state = 0},
  [1138] = {.lex_state = 0},
  [1139] = {.lex_state = 0},
  [1140] = {.lex_state = 0},
  [1141] = {.lex_state = 10},
  [1142] = {.lex_state = 0},
  [1143] = {.lex_state = 0},
  [1144] = {.lex_state = 0},
  [1145] = {.lex_state = 0},
  [1146] = {.lex_state = 10},
  [1147] = {.lex_state = 0},
  [1148] = {.lex_state = 0},
  [1149] = {.lex_state = 0},
  [1150] = {.lex_state = 0},
  [1151] = {.lex_state = 10},
  [1152] = {.lex_state = 0},
  [1153] = {.lex_state = 0},
  [1154] = {.lex_state = 0},
  [1155] = {.lex_state = 10},
  [1156] = {.lex_state = 10},
  [1157] = {.lex_state = 0},
  [1158] = {.lex_state = 0},
  [1159] = {.lex_state = 10},
  [1160] = {.lex_state = 0},
  [1161] = {.lex_state = 0},
  [1162] = {.lex_state = 0},
  [1163] = {.lex_state = 0},
  [1164] = {.lex_state = 10},
  [1165] = {.lex_state = 10},
  [1166] = {.lex_state = 0},
  [1167] = {.lex_state = 0},
  [1168] = {.lex_state = 10},
  [1169] = {.lex_state = 10},
  [1170] = {.lex_state = 10},
  [1171] = {.lex_state = 553},
  [1172] = {.lex_state = 10},
  [1173] = {.lex_state = 0},
  [1174] = {.lex_state = 10},
  [1175] = {.lex_state = 10},
  [1176] = {.lex_state = 0},
  [1177] = {.lex_state = 552},
  [1178] = {.lex_state = 0},
  [1179] = {.lex_state = 0},
  [1180] = {.lex_state = 0},
  [1181] = {.lex_state = 0},
  [1182] = {.lex_state = 10},
  [1183] = {.lex_state = 0},
  [1184] = {.lex_state = 10},
  [1185] = {.lex_state = 0},
  [1186] = {.lex_state = 10},
  [1187] = {.lex_state = 10},
  [1188] = {.lex_state = 0},
  [1189] = {.lex_state = 10},
  [1190] = {.lex_state = 0},
  [1191] = {.lex_state = 10},
  [1192] = {.lex_state = 0},
  [1193] = {.lex_state = 13},
  [1194] = {.lex_state = 0},
  [1195] = {.lex_state = 0},
  [1196] = {.lex_state = 10},
  [1197] = {.lex_state = 10},
  [1198] = {.lex_state = 0},
  [1199] = {.lex_state = 553},
  [1200] = {.lex_state = 0},
  [1201] = {.lex_state = 10},
  [1202] = {.lex_state = 0},
  [1203] = {.lex_state = 10},
  [1204] = {.lex_state = 0},
  [1205] = {.lex_state = 0},
  [1206] = {.lex_state = 10},
  [1207] = {.lex_state = 0},
  [1208] = {.lex_state = 0},
  [1209] = {.lex_state = 553},
  [1210] = {.lex_state = 10},
  [1211] = {.lex_state = 10},
  [1212] = {.lex_state = 0},
  [1213] = {.lex_state = 0},
  [1214] = {.lex_state = 10},
  [1215] = {.lex_state = 10},
  [1216] = {.lex_state = 10},
  [1217] = {.lex_state = 0},
  [1218] = {.lex_state = 0},
  [1219] = {.lex_state = 0},
  [1220] = {.lex_state = 552},
  [1221] = {.lex_state = 10},
  [1222] = {.lex_state = 10},
  [1223] = {.lex_state = 10},
  [1224] = {.lex_state = 0},
  [1225] = {.lex_state = 10},
  [1226] = {.lex_state = 0},
  [1227] = {.lex_state = 0},
  [1228] = {.lex_state = 10},
  [1229] = {.lex_state = 0},
  [1230] = {.lex_state = 0},
  [1231] = {.lex_state = 0},
  [1232] = {.lex_state = 10},
  [1233] = {.lex_state = 10},
  [1234] = {.lex_state = 0},
  [1235] = {.lex_state = 0},
  [1236] = {.lex_state = 0},
  [1237] = {.lex_state = 10},
  [1238] = {.lex_state = 0},
  [1239] = {.lex_state = 0},
  [1240] = {.lex_state = 0},
  [1241] = {.lex_state = 10},
  [1242] = {.lex_state = 0},
  [1243] = {.lex_state = 0},
  [1244] = {.lex_state = 10},
  [1245] = {.lex_state = 10},
  [1246] = {.lex_state = 10},
  [1247] = {.lex_state = 0},
  [1248] = {.lex_state = 10},
  [1249] = {.lex_state = 0},
  [1250] = {.lex_state = 0},
  [1251] = {.lex_state = 10},
  [1252] = {.lex_state = 0},
  [1253] = {.lex_state = 0},
  [1254] = {.lex_state = 10},
  [1255] = {.lex_state = 0},
  [1256] = {.lex_state = 0},
  [1257] = {.lex_state = 0},
  [1258] = {.lex_state = 552},
  [1259] = {.lex_state = 552},
  [1260] = {.lex_state = 0},
  [1261] = {.lex_state = 0},
  [1262] = {.lex_state = 0},
  [1263] = {.lex_state = 0},
  [1264] = {.lex_state = 0},
  [1265] = {.lex_state = 10},
  [1266] = {.lex_state = 10},
  [1267] = {.lex_state = 0},
  [1268] = {.lex_state = 0},
  [1269] = {.lex_state = 0},
  [1270] = {.lex_state = 0},
  [1271] = {.lex_state = 10},
  [1272] = {.lex_state = 0},
  [1273] = {.lex_state = 0},
  [1274] = {.lex_state = 0},
  [1275] = {.lex_state = 13},
  [1276] = {.lex_state = 10},
  [1277] = {.lex_state = 10},
  [1278] = {.lex_state = 553},
  [1279] = {.lex_state = 0},
  [1280] = {.lex_state = 0},
  [1281] = {.lex_state = 0},
  [1282] = {.lex_state = 0},
  [1283] = {.lex_state = 13},
  [1284] = {.lex_state = 553},
  [1285] = {.lex_state = 0},
  [1286] = {.lex_state = 0},
  [1287] = {.lex_state = 10},
  [1288] = {.lex_state = 0},
  [1289] = {.lex_state = 10},
  [1290] = {.lex_state = 0},
  [1291] = {.lex_state = 0},
  [1292] = {.lex_state = 10},
  [1293] = {.lex_state = 0},
  [1294] = {.lex_state = 0},
  [1295] = {.lex_state = 0},
  [1296] = {.lex_state = 0},
  [1297] = {.lex_state = 0},
  [1298] = {.lex_state = 0},
  [1299] = {.lex_state = 0},
  [1300] = {.lex_state = 0},
  [1301] = {.lex_state = 0},
  [1302] = {.lex_state = 553},
  [1303] = {.lex_state = 0},
  [1304] = {.lex_state = 10},
  [1305] = {.lex_state = 0},
  [1306] = {.lex_state = 0},
  [1307] = {.lex_state = 0},
  [1308] = {.lex_state = 0},
  [1309] = {.lex_state = 0},
  [1310] = {.lex_state = 0},
  [1311] = {.lex_state = 0},
  [1312] = {.lex_state = 553},
  [1313] = {.lex_state = 0},
  [1314] = {.lex_state = 0},
  [1315] = {.lex_state = 0},
  [1316] = {.lex_state = 0},
  [1317] = {.lex_state = 552},
  [1318] = {.lex_state = 0},
  [1319] = {.lex_state = 0},
  [1320] = {.lex_state = 0},
  [1321] = {.lex_state = 0},
  [1322] = {.lex_state = 0},
  [1323] = {.lex_state = 0},
  [1324] = {.lex_state = 0},
  [1325] = {.lex_state = 0},
  [1326] = {.lex_state = 0},
  [1327] = {.lex_state = 0},
  [1328] = {.lex_state = 10},
  [1329] = {.lex_state = 0},
  [1330] = {.lex_state = 0},
  [1331] = {.lex_state = 0},
  [1332] = {.lex_state = 10},
  [1333] = {.lex_state = 0},
  [1334] = {.lex_state = 0},
  [1335] = {.lex_state = 0},
  [1336] = {.lex_state = 0},
  [1337] = {.lex_state = 0},
  [1338] = {.lex_state = 0},
  [1339] = {.lex_state = 0},
  [1340] = {.lex_state = 10},
  [1341] = {.lex_state = 10},
  [1342] = {.lex_state = 10},
  [1343] = {.lex_state = 0},
  [1344] = {.lex_state = 10},
  [1345] = {.lex_state = 0},
  [1346] = {.lex_state = 0},
  [1347] = {.lex_state = 553},
  [1348] = {.lex_state = 553},
  [1349] = {.lex_state = 10},
  [1350] = {.lex_state = 0},
  [1351] = {.lex_state = 10},
  [1352] = {.lex_state = 10},
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
  [1363] = {.lex_state = 10},
  [1364] = {.lex_state = 10},
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
    [aux_sym_column_not_null_token1] = ACTIONS(1),
    [aux_sym_materialized_view_options_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(1361),
    [sym__statement] = STATE(2),
    [sym_select_statement] = STATE(384),
    [sym_delete_statement] = STATE(384),
    [sym_begin_batch] = STATE(553),
    [sym_insert_statement] = STATE(384),
    [sym_truncate] = STATE(384),
    [sym_create_index] = STATE(384),
    [sym_drop_index] = STATE(384),
    [sym_update] = STATE(384),
    [sym_use] = STATE(384),
    [sym_grant] = STATE(384),
    [sym_revoke] = STATE(384),
    [sym_list_roles] = STATE(384),
    [sym_list_permissions] = STATE(384),
    [sym_drop_aggregate] = STATE(384),
    [sym_drop_materialized_view] = STATE(384),
    [sym_drop_function] = STATE(384),
    [sym_drop_keyspace] = STATE(384),
    [sym_drop_role] = STATE(384),
    [sym_drop_table] = STATE(384),
    [sym_drop_trigger] = STATE(384),
    [sym_drop_type] = STATE(384),
    [sym_drop_user] = STATE(384),
    [sym_create_aggregate] = STATE(384),
    [sym_create_materialized_view] = STATE(384),
    [sym_create_function] = STATE(384),
    [sym_create_keyspace] = STATE(384),
    [sym_create_role] = STATE(384),
    [sym_create_table] = STATE(384),
    [sym_create_trigger] = STATE(384),
    [sym_create_type] = STATE(384),
    [sym_create_user] = STATE(384),
    [sym_alter_materialized_view] = STATE(384),
    [sym_alter_keyspace] = STATE(384),
    [sym_alter_role] = STATE(384),
    [sym_alter_table] = STATE(384),
    [sym_alter_type] = STATE(384),
    [sym_alter_user] = STATE(384),
    [sym_apply_batch] = STATE(384),
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
    STATE(553), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(384), 37,
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
    STATE(553), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(384), 37,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(238), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(1011), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(1063), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(1067), 1,
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
    STATE(72), 1,
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
  [429] = 3,
    STATE(72), 1,
      sym_data_type_name,
    STATE(165), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(879), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(257), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(1037), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(534), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(1092), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(977), 1,
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
    STATE(72), 1,
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
  [709] = 3,
    STATE(72), 1,
      sym_data_type_name,
    STATE(1098), 1,
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
    STATE(72), 1,
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
  [779] = 3,
    STATE(72), 1,
      sym_data_type_name,
    STATE(621), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(766), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(1305), 1,
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
    STATE(72), 1,
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
  [919] = 3,
    STATE(72), 1,
      sym_data_type_name,
    STATE(824), 1,
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
    STATE(72), 1,
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
  [989] = 3,
    STATE(72), 1,
      sym_data_type_name,
    STATE(614), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(563), 1,
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
    STATE(72), 1,
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
  [1094] = 3,
    STATE(72), 1,
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
  [1129] = 3,
    STATE(72), 1,
      sym_data_type_name,
    STATE(863), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(956), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(1236), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(1147), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(883), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(1229), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(1143), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(1224), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(1192), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(888), 1,
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
    STATE(72), 1,
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
  [1514] = 3,
    STATE(72), 1,
      sym_data_type_name,
    STATE(1007), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(1112), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(578), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(178), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(1117), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(895), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(1124), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(953), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(1208), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(1202), 1,
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
    STATE(72), 1,
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
  [1899] = 3,
    STATE(72), 1,
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
  [1934] = 3,
    STATE(72), 1,
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
  [1969] = 3,
    STATE(72), 1,
      sym_data_type_name,
    STATE(1188), 1,
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
    STATE(72), 1,
      sym_data_type_name,
    STATE(1198), 1,
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
    STATE(648), 1,
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
    STATE(780), 1,
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
  [2103] = 2,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(87), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token3,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_LPAREN,
      aux_sym_where_spec_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_insert_values_spec_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2133] = 3,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(91), 23,
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
  [2165] = 3,
    ACTIONS(98), 1,
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
  [2196] = 1,
    ACTIONS(91), 24,
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
  [2223] = 1,
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
  [2250] = 3,
    ACTIONS(98), 1,
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
  [2281] = 1,
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
  [2308] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2335] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(60), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2366] = 1,
    ACTIONS(110), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token3,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_LPAREN,
      aux_sym_where_spec_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_insert_values_spec_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2393] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(67), 1,
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
  [2424] = 8,
    ACTIONS(114), 1,
      aux_sym_select_statement_token4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    STATE(94), 1,
      sym_where_spec,
    STATE(120), 1,
      sym_order_spec,
    STATE(232), 1,
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
  [2464] = 8,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    ACTIONS(124), 1,
      aux_sym_select_statement_token4,
    STATE(95), 1,
      sym_where_spec,
    STATE(104), 1,
      sym_order_spec,
    STATE(212), 1,
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
  [2504] = 3,
    ACTIONS(128), 1,
      anon_sym_LT,
    STATE(90), 1,
      sym_data_type_definition,
    ACTIONS(126), 21,
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
  [2534] = 1,
    ACTIONS(130), 23,
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
  [2560] = 3,
    ACTIONS(134), 1,
      aux_sym_relation_elements_token1,
    STATE(74), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(132), 21,
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
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2590] = 8,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    ACTIONS(139), 1,
      aux_sym_select_statement_token4,
    STATE(91), 1,
      sym_where_spec,
    STATE(103), 1,
      sym_order_spec,
    STATE(205), 1,
      sym_limit_spec,
    ACTIONS(137), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2630] = 1,
    ACTIONS(141), 22,
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
  [2655] = 3,
    ACTIONS(145), 1,
      aux_sym_relation_elements_token1,
    STATE(82), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(143), 20,
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
  [2684] = 1,
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
  [2709] = 1,
    ACTIONS(149), 22,
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
  [2734] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2759] = 1,
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
  [2784] = 3,
    ACTIONS(145), 1,
      aux_sym_relation_elements_token1,
    STATE(74), 1,
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
  [2813] = 1,
    ACTIONS(155), 22,
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
  [2838] = 1,
    ACTIONS(157), 22,
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
  [2863] = 8,
    ACTIONS(163), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(165), 1,
      sym_object_name,
    STATE(108), 1,
      sym_table_option_item,
    STATE(169), 1,
      sym_table_options,
    STATE(323), 1,
      sym_clustering_order,
    STATE(1068), 1,
      sym_table_option_name,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(161), 14,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2902] = 1,
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
  [2927] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2952] = 1,
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
  [2977] = 1,
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
  [3001] = 1,
    ACTIONS(173), 21,
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
  [3025] = 6,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    ACTIONS(124), 1,
      aux_sym_select_statement_token4,
    STATE(104), 1,
      sym_order_spec,
    STATE(212), 1,
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
  [3059] = 1,
    ACTIONS(175), 21,
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
  [3083] = 1,
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
  [3107] = 6,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    ACTIONS(139), 1,
      aux_sym_select_statement_token4,
    STATE(103), 1,
      sym_order_spec,
    STATE(205), 1,
      sym_limit_spec,
    ACTIONS(137), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3141] = 6,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_order_spec_token1,
    ACTIONS(181), 1,
      aux_sym_select_statement_token4,
    STATE(121), 1,
      sym_order_spec,
    STATE(218), 1,
      sym_limit_spec,
    ACTIONS(179), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3175] = 3,
    STATE(129), 1,
      sym_order_direction,
    ACTIONS(185), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(183), 18,
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
  [3203] = 1,
    ACTIONS(187), 20,
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
  [3226] = 2,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(189), 19,
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
  [3251] = 3,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(193), 18,
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
  [3278] = 2,
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
  [3303] = 2,
    ACTIONS(204), 1,
      aux_sym_relation_element_token1,
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
  [3328] = 2,
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
  [3353] = 4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(124), 1,
      aux_sym_select_statement_token4,
    STATE(212), 1,
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
  [3381] = 4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(181), 1,
      aux_sym_select_statement_token4,
    STATE(218), 1,
      sym_limit_spec,
    ACTIONS(179), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3409] = 3,
    STATE(331), 1,
      sym_user_super_user,
    ACTIONS(212), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(210), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3435] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3457] = 3,
    STATE(344), 1,
      sym_user_super_user,
    ACTIONS(212), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
  [3483] = 3,
    ACTIONS(220), 1,
      aux_sym_relation_elements_token1,
    STATE(122), 1,
      aux_sym_materialized_view_options_repeat1,
    ACTIONS(218), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3509] = 3,
    ACTIONS(224), 1,
      aux_sym_relation_elements_token1,
    STATE(109), 1,
      aux_sym_materialized_view_options_repeat1,
    ACTIONS(222), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3535] = 4,
    ACTIONS(229), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(231), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(326), 1,
      sym_using_ttl_timestamp,
    ACTIONS(227), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3563] = 1,
    ACTIONS(233), 19,
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
  [3585] = 1,
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
  [3607] = 1,
    ACTIONS(237), 19,
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
  [3629] = 1,
    ACTIONS(239), 19,
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
  [3651] = 1,
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
  [3673] = 1,
    ACTIONS(241), 19,
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
  [3695] = 1,
    ACTIONS(243), 19,
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
  [3717] = 3,
    STATE(274), 1,
      sym_user_super_user,
    ACTIONS(212), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
  [3743] = 2,
    ACTIONS(249), 1,
      aux_sym_priviledge_token2,
    ACTIONS(247), 18,
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
  [3767] = 4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(139), 1,
      aux_sym_select_statement_token4,
    STATE(205), 1,
      sym_limit_spec,
    ACTIONS(137), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3795] = 4,
    ACTIONS(116), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(253), 1,
      aux_sym_select_statement_token4,
    STATE(224), 1,
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
  [3823] = 3,
    ACTIONS(220), 1,
      aux_sym_relation_elements_token1,
    STATE(109), 1,
      aux_sym_materialized_view_options_repeat1,
    ACTIONS(255), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3849] = 4,
    ACTIONS(231), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(259), 1,
      aux_sym_delete_statement_token2,
    STATE(254), 1,
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
  [3877] = 1,
    ACTIONS(261), 19,
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
  [3899] = 4,
    ACTIONS(231), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(265), 1,
      aux_sym_delete_statement_token2,
    STATE(258), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3927] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3949] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(269), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3974] = 3,
    ACTIONS(275), 1,
      aux_sym_materialized_view_options_token1,
    STATE(313), 1,
      sym_with_element,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3999] = 1,
    ACTIONS(277), 18,
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
  [4020] = 3,
    ACTIONS(275), 1,
      aux_sym_materialized_view_options_token1,
    STATE(404), 1,
      sym_with_element,
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
  [4045] = 3,
    ACTIONS(275), 1,
      aux_sym_materialized_view_options_token1,
    STATE(358), 1,
      sym_with_element,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4070] = 3,
    ACTIONS(285), 1,
      aux_sym_relation_elements_token1,
    STATE(134), 1,
      aux_sym_if_condition_list_repeat1,
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
  [4095] = 3,
    ACTIONS(289), 1,
      aux_sym_relation_elements_token1,
    STATE(192), 1,
      aux_sym_materialized_view_options_repeat1,
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
  [4120] = 3,
    ACTIONS(293), 1,
      aux_sym_relation_elements_token1,
    STATE(134), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4145] = 3,
    ACTIONS(298), 1,
      aux_sym_materialized_view_options_token1,
    STATE(399), 1,
      sym_materialized_view_options,
    ACTIONS(296), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4170] = 1,
    ACTIONS(300), 18,
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
  [4191] = 3,
    ACTIONS(298), 1,
      aux_sym_materialized_view_options_token1,
    STATE(320), 1,
      sym_materialized_view_options,
    ACTIONS(302), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(306), 1,
      aux_sym_relation_elements_token1,
    STATE(161), 1,
      aux_sym_alter_type_rename_list_repeat1,
    ACTIONS(304), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4241] = 3,
    ACTIONS(231), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(284), 1,
      sym_using_ttl_timestamp,
    ACTIONS(308), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4266] = 3,
    ACTIONS(312), 1,
      aux_sym_delete_statement_token2,
    STATE(276), 1,
      sym_if_spec,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4291] = 3,
    ACTIONS(316), 1,
      aux_sym_delete_statement_token2,
    STATE(379), 1,
      sym_if_spec,
    ACTIONS(314), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4316] = 3,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(318), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4341] = 3,
    ACTIONS(325), 1,
      aux_sym_delete_statement_token2,
    STATE(248), 1,
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
  [4366] = 1,
    ACTIONS(327), 18,
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
  [4387] = 3,
    ACTIONS(331), 1,
      aux_sym_delete_statement_token2,
    STATE(395), 1,
      sym_if_spec,
    ACTIONS(329), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(333), 18,
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
  [4433] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_relation_element_repeat1,
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
  [4458] = 1,
    ACTIONS(337), 18,
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
  [4479] = 1,
    ACTIONS(247), 18,
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
  [4500] = 1,
    ACTIONS(339), 18,
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
  [4521] = 3,
    ACTIONS(298), 1,
      aux_sym_materialized_view_options_token1,
    STATE(392), 1,
      sym_materialized_view_options,
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
  [4546] = 3,
    ACTIONS(345), 1,
      aux_sym_relation_elements_token1,
    STATE(152), 1,
      aux_sym_role_with_repeat1,
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
  [4571] = 3,
    ACTIONS(298), 1,
      aux_sym_materialized_view_options_token1,
    STATE(301), 1,
      sym_materialized_view_options,
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
  [4596] = 1,
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
  [4617] = 3,
    ACTIONS(354), 1,
      aux_sym_materialized_view_options_token1,
    STATE(285), 1,
      sym_role_with,
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
  [4642] = 3,
    ACTIONS(358), 1,
      aux_sym_delete_statement_token2,
    STATE(309), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4667] = 3,
    ACTIONS(362), 1,
      aux_sym_list_roles_token2,
    ACTIONS(364), 1,
      aux_sym_list_roles_token3,
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
  [4692] = 1,
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
  [4713] = 3,
    ACTIONS(370), 1,
      aux_sym_create_index_token3,
    ACTIONS(372), 1,
      aux_sym_list_roles_token2,
    ACTIONS(368), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(376), 1,
      aux_sym_relation_elements_token1,
    STATE(168), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(374), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4763] = 3,
    ACTIONS(306), 1,
      aux_sym_relation_elements_token1,
    STATE(190), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [4788] = 3,
    ACTIONS(354), 1,
      aux_sym_materialized_view_options_token1,
    STATE(380), 1,
      sym_role_with,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4813] = 3,
    ACTIONS(384), 1,
      aux_sym_delete_statement_token2,
    STATE(293), 1,
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
  [4838] = 3,
    ACTIONS(388), 1,
      aux_sym_delete_statement_token2,
    STATE(302), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4863] = 3,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [4888] = 8,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym__decimal_literal,
    ACTIONS(400), 1,
      anon_sym_LBRACK,
    ACTIONS(402), 1,
      anon_sym_LBRACE,
    STATE(561), 1,
      sym_expression,
    STATE(1048), 1,
      sym_expression_list,
    STATE(802), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [4923] = 1,
    ACTIONS(404), 18,
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
  [4944] = 3,
    ACTIONS(376), 1,
      aux_sym_relation_elements_token1,
    STATE(152), 1,
      aux_sym_role_with_repeat1,
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
  [4969] = 3,
    ACTIONS(410), 1,
      aux_sym_clustering_order_token1,
    STATE(246), 1,
      sym_clustering_order,
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
  [4994] = 1,
    ACTIONS(412), 18,
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
  [5015] = 3,
    ACTIONS(275), 1,
      aux_sym_materialized_view_options_token1,
    STATE(264), 1,
      sym_with_element,
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
  [5040] = 3,
    ACTIONS(418), 1,
      aux_sym_delete_statement_token2,
    STATE(280), 1,
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
  [5065] = 3,
    ACTIONS(285), 1,
      aux_sym_relation_elements_token1,
    STATE(132), 1,
      aux_sym_if_condition_list_repeat1,
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
  [5090] = 3,
    ACTIONS(424), 1,
      aux_sym_delete_statement_token2,
    STATE(350), 1,
      sym_if_spec,
    ACTIONS(422), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5115] = 3,
    ACTIONS(298), 1,
      aux_sym_materialized_view_options_token1,
    STATE(381), 1,
      sym_materialized_view_options,
    ACTIONS(426), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5140] = 3,
    ACTIONS(298), 1,
      aux_sym_materialized_view_options_token1,
    STATE(367), 1,
      sym_materialized_view_options,
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
  [5165] = 3,
    ACTIONS(432), 1,
      aux_sym_delete_statement_token2,
    STATE(273), 1,
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
  [5190] = 3,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [5215] = 3,
    ACTIONS(438), 1,
      anon_sym_DOT,
    ACTIONS(440), 1,
      aux_sym_materialized_view_options_token1,
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
  [5240] = 1,
    ACTIONS(442), 18,
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
  [5261] = 3,
    ACTIONS(446), 1,
      aux_sym_delete_statement_token2,
    STATE(354), 1,
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
  [5286] = 3,
    ACTIONS(231), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(249), 1,
      sym_using_ttl_timestamp,
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
  [5311] = 1,
    ACTIONS(450), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [5332] = 1,
    ACTIONS(222), 18,
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
  [5353] = 1,
    ACTIONS(452), 18,
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
  [5374] = 1,
    ACTIONS(454), 18,
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
  [5395] = 3,
    ACTIONS(298), 1,
      aux_sym_materialized_view_options_token1,
    STATE(398), 1,
      sym_materialized_view_options,
    ACTIONS(456), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5420] = 3,
    ACTIONS(298), 1,
      aux_sym_materialized_view_options_token1,
    STATE(306), 1,
      sym_materialized_view_options,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5445] = 3,
    ACTIONS(354), 1,
      aux_sym_materialized_view_options_token1,
    STATE(371), 1,
      sym_role_with,
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
  [5470] = 3,
    ACTIONS(464), 1,
      aux_sym_relation_elements_token1,
    STATE(190), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [5495] = 1,
    ACTIONS(467), 18,
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
  [5516] = 3,
    ACTIONS(471), 1,
      aux_sym_relation_elements_token1,
    STATE(109), 1,
      aux_sym_materialized_view_options_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5541] = 3,
    ACTIONS(475), 1,
      aux_sym_delete_statement_token2,
    STATE(259), 1,
      sym_if_spec,
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
  [5566] = 3,
    ACTIONS(479), 1,
      aux_sym_delete_statement_token2,
    STATE(316), 1,
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
  [5591] = 3,
    ACTIONS(483), 1,
      aux_sym_delete_statement_token2,
    STATE(365), 1,
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
  [5616] = 3,
    ACTIONS(231), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(294), 1,
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
  [5641] = 1,
    ACTIONS(487), 18,
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
  [5662] = 3,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [5687] = 2,
    ACTIONS(493), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(491), 17,
      ts_builtin_sym_end,
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
  [5710] = 3,
    ACTIONS(497), 1,
      aux_sym_delete_statement_token2,
    STATE(291), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5735] = 3,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    STATE(142), 1,
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
  [5760] = 1,
    ACTIONS(501), 18,
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
  [5781] = 2,
    ACTIONS(503), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(491), 17,
      ts_builtin_sym_end,
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
  [5804] = 3,
    ACTIONS(507), 1,
      aux_sym_delete_statement_token2,
    STATE(288), 1,
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
  [5829] = 2,
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
  [5851] = 1,
    ACTIONS(462), 17,
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
  [5871] = 2,
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
  [5893] = 2,
    ACTIONS(515), 1,
      aux_sym_relation_elements_token1,
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
  [5915] = 1,
    ACTIONS(517), 17,
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
  [5935] = 2,
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
  [5957] = 1,
    ACTIONS(291), 17,
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
  [5977] = 2,
    ACTIONS(181), 1,
      aux_sym_select_statement_token4,
    ACTIONS(179), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5999] = 2,
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
  [6021] = 7,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym__decimal_literal,
    ACTIONS(400), 1,
      anon_sym_LBRACK,
    ACTIONS(402), 1,
      anon_sym_LBRACE,
    STATE(731), 1,
      sym_expression,
    STATE(802), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [6053] = 2,
    ACTIONS(529), 1,
      aux_sym_relation_elements_token1,
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
  [6075] = 2,
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
  [6097] = 2,
    ACTIONS(537), 1,
      anon_sym_DOT,
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
  [6119] = 2,
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
  [6141] = 2,
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
  [6163] = 2,
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
  [6185] = 1,
    ACTIONS(547), 17,
      ts_builtin_sym_end,
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
  [6205] = 2,
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
  [6227] = 1,
    ACTIONS(553), 17,
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
  [6247] = 2,
    ACTIONS(557), 1,
      aux_sym_select_statement_token4,
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
  [6269] = 2,
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
  [6291] = 2,
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
  [6313] = 2,
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
  [6335] = 2,
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
  [6357] = 1,
    ACTIONS(343), 17,
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
  [6377] = 2,
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
  [6399] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6419] = 2,
    ACTIONS(139), 1,
      aux_sym_select_statement_token4,
    ACTIONS(137), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6441] = 2,
    ACTIONS(583), 1,
      aux_sym_list_roles_token2,
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
  [6463] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6485] = 2,
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
  [6507] = 2,
    ACTIONS(595), 1,
      aux_sym_relation_elements_token1,
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
  [6529] = 1,
    ACTIONS(597), 17,
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
  [6549] = 1,
    ACTIONS(599), 17,
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
  [6569] = 2,
    ACTIONS(603), 1,
      aux_sym_materialized_view_options_token1,
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
  [6591] = 2,
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
  [6613] = 1,
    ACTIONS(609), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [6633] = 2,
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
  [6655] = 1,
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
      aux_sym_materialized_view_options_token1,
      aux_sym_apply_batch_token1,
  [6675] = 1,
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
  [6694] = 1,
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
  [6713] = 1,
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
  [6732] = 1,
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
  [6751] = 1,
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
  [6770] = 1,
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
  [6789] = 1,
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
  [6808] = 1,
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
  [6827] = 1,
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
  [6846] = 1,
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
  [6865] = 1,
    ACTIONS(308), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6884] = 1,
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
  [6903] = 1,
    ACTIONS(635), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6922] = 1,
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
  [6941] = 1,
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
  [6960] = 1,
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
  [6979] = 1,
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
  [6998] = 1,
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
  [7017] = 1,
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
  [7036] = 1,
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
  [7055] = 1,
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
  [7074] = 1,
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
  [7093] = 1,
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
  [7112] = 1,
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
  [7131] = 1,
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
  [7150] = 1,
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
  [7169] = 1,
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
  [7188] = 1,
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
  [7207] = 1,
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
  [7226] = 1,
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
  [7245] = 1,
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
  [7264] = 1,
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
  [7283] = 1,
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
  [7302] = 1,
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
  [7321] = 1,
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
  [7340] = 1,
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
  [7359] = 1,
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
  [7378] = 1,
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
  [7397] = 1,
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
  [7416] = 1,
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
  [7435] = 1,
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
  [7454] = 1,
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
  [7473] = 1,
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
  [7492] = 1,
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
  [7511] = 1,
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
  [7530] = 1,
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
  [7549] = 1,
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
  [7568] = 1,
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
  [7587] = 1,
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
  [7606] = 1,
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
  [7625] = 1,
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
  [7644] = 1,
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
  [7663] = 1,
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
  [7682] = 1,
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
  [7701] = 1,
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
  [7720] = 1,
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
  [7739] = 1,
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
  [7758] = 1,
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
  [7777] = 1,
    ACTIONS(422), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7815] = 1,
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
  [7834] = 1,
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
  [7853] = 1,
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
  [7872] = 1,
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
  [7891] = 1,
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
  [7910] = 1,
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
  [7929] = 1,
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
  [7948] = 1,
    ACTIONS(179), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7986] = 1,
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
  [8005] = 1,
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
  [8024] = 1,
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
  [8043] = 1,
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
  [8062] = 1,
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
  [8081] = 1,
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
  [8100] = 1,
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
  [8119] = 1,
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
  [8138] = 1,
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
  [8157] = 1,
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
  [8176] = 1,
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
  [8195] = 1,
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
  [8214] = 1,
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
  [8233] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8252] = 1,
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
  [8271] = 1,
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
  [8290] = 1,
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
  [8309] = 1,
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
  [8328] = 1,
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
  [8347] = 1,
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
  [8366] = 1,
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
  [8385] = 1,
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
  [8404] = 1,
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
  [8423] = 1,
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
  [8442] = 1,
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
  [8461] = 1,
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
  [8480] = 1,
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
  [8499] = 1,
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
  [8518] = 1,
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
  [8537] = 1,
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
  [8556] = 1,
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
  [8575] = 1,
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
  [8594] = 1,
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
  [8613] = 1,
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
  [8632] = 1,
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
  [8651] = 1,
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
  [8670] = 1,
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
  [8689] = 1,
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
  [8708] = 1,
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
  [8727] = 1,
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
  [8746] = 1,
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
  [8765] = 1,
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
  [8784] = 1,
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
  [8803] = 1,
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
  [8822] = 1,
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
  [8841] = 1,
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
  [8860] = 1,
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
  [8879] = 1,
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
  [8898] = 1,
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
  [8917] = 1,
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
  [8936] = 1,
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
  [8955] = 1,
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
  [8974] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8993] = 1,
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
  [9012] = 1,
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
  [9031] = 1,
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
  [9050] = 1,
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
  [9069] = 1,
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
  [9088] = 1,
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
  [9107] = 1,
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
  [9126] = 1,
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
  [9145] = 1,
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
  [9164] = 1,
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
  [9183] = 1,
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
  [9202] = 1,
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
  [9221] = 1,
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
  [9240] = 1,
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
  [9259] = 1,
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
  [9278] = 1,
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
  [9297] = 1,
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
  [9316] = 1,
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
  [9335] = 2,
    ACTIONS(855), 1,
      anon_sym_SEMI,
    ACTIONS(853), 15,
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
  [9356] = 1,
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
  [9375] = 1,
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
  [9394] = 1,
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
  [9413] = 1,
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
  [9432] = 1,
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
  [9451] = 1,
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
  [9470] = 1,
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
  [9489] = 1,
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
  [9508] = 1,
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
  [9527] = 1,
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
  [9546] = 1,
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
  [9565] = 1,
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
  [9584] = 1,
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
  [9603] = 1,
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
  [9622] = 1,
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
  [9641] = 1,
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
  [9660] = 1,
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
  [9679] = 1,
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
  [9698] = 1,
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
  [9717] = 1,
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
  [9736] = 7,
    ACTIONS(400), 1,
      anon_sym_LBRACK,
    ACTIONS(402), 1,
      anon_sym_LBRACE,
    ACTIONS(893), 1,
      sym_object_name,
    STATE(845), 1,
      sym_constant,
    ACTIONS(398), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    STATE(531), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(396), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9766] = 1,
    ACTIONS(895), 15,
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
  [9784] = 5,
    ACTIONS(398), 1,
      sym__decimal_literal,
    ACTIONS(897), 1,
      anon_sym_LPAREN,
    STATE(271), 1,
      sym_init_cond_definition,
    STATE(180), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9809] = 5,
    ACTIONS(398), 1,
      sym__decimal_literal,
    ACTIONS(897), 1,
      anon_sym_LPAREN,
    STATE(321), 1,
      sym_init_cond_definition,
    STATE(180), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9834] = 5,
    ACTIONS(398), 1,
      sym__decimal_literal,
    ACTIONS(897), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym_init_cond_definition,
    STATE(180), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9859] = 5,
    ACTIONS(398), 1,
      sym__decimal_literal,
    ACTIONS(897), 1,
      anon_sym_LPAREN,
    STATE(362), 1,
      sym_init_cond_definition,
    STATE(180), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9884] = 5,
    ACTIONS(398), 1,
      sym__decimal_literal,
    ACTIONS(897), 1,
      anon_sym_LPAREN,
    STATE(247), 1,
      sym_init_cond_definition,
    STATE(180), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9909] = 5,
    ACTIONS(398), 1,
      sym__decimal_literal,
    ACTIONS(897), 1,
      anon_sym_LPAREN,
    STATE(262), 1,
      sym_init_cond_definition,
    STATE(180), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9934] = 5,
    ACTIONS(398), 1,
      sym__decimal_literal,
    ACTIONS(897), 1,
      anon_sym_LPAREN,
    STATE(748), 1,
      sym_init_cond_definition,
    STATE(180), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9959] = 5,
    ACTIONS(398), 1,
      sym__decimal_literal,
    ACTIONS(897), 1,
      anon_sym_LPAREN,
    STATE(277), 1,
      sym_init_cond_definition,
    STATE(180), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9984] = 5,
    ACTIONS(398), 1,
      sym__decimal_literal,
    ACTIONS(897), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym_init_cond_definition,
    STATE(180), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10009] = 7,
    ACTIONS(899), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_object_name,
    STATE(690), 1,
      sym_constant,
    STATE(691), 1,
      sym_init_cond_list,
    STATE(692), 1,
      sym_init_cond_hash_item,
    ACTIONS(398), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(396), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10037] = 6,
    ACTIONS(903), 1,
      anon_sym_STAR,
    ACTIONS(905), 1,
      sym_object_name,
    STATE(1286), 1,
      sym_function_args,
    STATE(655), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(398), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(396), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10063] = 5,
    ACTIONS(905), 1,
      sym_object_name,
    STATE(969), 1,
      sym_function_args,
    STATE(655), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(398), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(396), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10086] = 5,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym__decimal_literal,
    STATE(62), 1,
      sym_assignment_tuple,
    STATE(537), 1,
      sym_constant,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10108] = 4,
    ACTIONS(398), 1,
      sym__decimal_literal,
    ACTIONS(899), 1,
      anon_sym_LPAREN,
    STATE(750), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10128] = 7,
    ACTIONS(907), 1,
      anon_sym_DOT,
    ACTIONS(909), 1,
      aux_sym_drop_index_token1,
    ACTIONS(911), 1,
      aux_sym_materialized_view_options_token1,
    ACTIONS(913), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(915), 1,
      aux_sym_alter_table_rename_token1,
    STATE(282), 1,
      sym_alter_table_operation,
    STATE(283), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10154] = 11,
    ACTIONS(917), 1,
      aux_sym_truncate_token2,
    ACTIONS(919), 1,
      aux_sym_create_index_token2,
    ACTIONS(921), 1,
      aux_sym_resource_token2,
    ACTIONS(923), 1,
      aux_sym_resource_token5,
    ACTIONS(925), 1,
      aux_sym_resource_token6,
    ACTIONS(927), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(929), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(931), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(933), 1,
      aux_sym_drop_type_token1,
    ACTIONS(935), 1,
      aux_sym_drop_user_token1,
    ACTIONS(937), 1,
      aux_sym_create_aggregate_token1,
  [10188] = 4,
    ACTIONS(939), 1,
      sym_object_name,
    STATE(794), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(398), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(396), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10208] = 4,
    ACTIONS(941), 1,
      sym_object_name,
    STATE(84), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(398), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(396), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10228] = 4,
    ACTIONS(945), 1,
      aux_sym_priviledge_token1,
    ACTIONS(947), 1,
      aux_sym_resource_token4,
    STATE(159), 1,
      sym_priviledge,
    ACTIONS(943), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10248] = 3,
    ACTIONS(945), 1,
      aux_sym_priviledge_token1,
    STATE(1354), 1,
      sym_priviledge,
    ACTIONS(943), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10265] = 4,
    ACTIONS(398), 1,
      sym__decimal_literal,
    ACTIONS(949), 1,
      aux_sym_relation_contains_key_token2,
    STATE(83), 1,
      sym_constant,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10284] = 6,
    ACTIONS(909), 1,
      aux_sym_drop_index_token1,
    ACTIONS(911), 1,
      aux_sym_materialized_view_options_token1,
    ACTIONS(913), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(915), 1,
      aux_sym_alter_table_rename_token1,
    STATE(325), 1,
      sym_alter_table_operation,
    STATE(283), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10307] = 3,
    ACTIONS(945), 1,
      aux_sym_priviledge_token1,
    STATE(1353), 1,
      sym_priviledge,
    ACTIONS(943), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10324] = 4,
    ACTIONS(398), 1,
      sym__decimal_literal,
    ACTIONS(951), 1,
      anon_sym_RBRACE,
    STATE(545), 1,
      sym_constant,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10343] = 6,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    ACTIONS(959), 1,
      aux_sym_relation_element_token1,
    ACTIONS(961), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(963), 1,
      aux_sym_column_not_null_token1,
    ACTIONS(955), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(957), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10366] = 10,
    ACTIONS(965), 1,
      aux_sym_truncate_token2,
    ACTIONS(967), 1,
      aux_sym_create_index_token2,
    ACTIONS(969), 1,
      aux_sym_resource_token2,
    ACTIONS(971), 1,
      aux_sym_resource_token5,
    ACTIONS(973), 1,
      aux_sym_resource_token6,
    ACTIONS(975), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(977), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(979), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(981), 1,
      aux_sym_drop_type_token1,
    ACTIONS(983), 1,
      aux_sym_drop_user_token1,
  [10397] = 3,
    ACTIONS(398), 1,
      sym__decimal_literal,
    STATE(209), 1,
      sym_constant,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10413] = 3,
    ACTIONS(398), 1,
      sym__decimal_literal,
    STATE(569), 1,
      sym_constant,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10429] = 3,
    ACTIONS(398), 1,
      sym__decimal_literal,
    STATE(76), 1,
      sym_constant,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10445] = 3,
    ACTIONS(398), 1,
      sym__decimal_literal,
    STATE(741), 1,
      sym_constant,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10461] = 3,
    ACTIONS(398), 1,
      sym__decimal_literal,
    STATE(170), 1,
      sym_constant,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10477] = 3,
    ACTIONS(398), 1,
      sym__decimal_literal,
    STATE(87), 1,
      sym_constant,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10493] = 3,
    ACTIONS(398), 1,
      sym__decimal_literal,
    STATE(690), 1,
      sym_constant,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10509] = 3,
    ACTIONS(398), 1,
      sym__decimal_literal,
    STATE(537), 1,
      sym_constant,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10525] = 3,
    ACTIONS(398), 1,
      sym__decimal_literal,
    STATE(991), 1,
      sym_constant,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10541] = 5,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    ACTIONS(959), 1,
      aux_sym_relation_element_token1,
    ACTIONS(961), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(955), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(957), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10561] = 3,
    ACTIONS(398), 1,
      sym__decimal_literal,
    STATE(460), 1,
      sym_constant,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10577] = 3,
    ACTIONS(398), 1,
      sym__decimal_literal,
    STATE(599), 1,
      sym_constant,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10593] = 3,
    ACTIONS(398), 1,
      sym__decimal_literal,
    STATE(743), 1,
      sym_constant,
    ACTIONS(396), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10609] = 6,
    ACTIONS(985), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(987), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(989), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(991), 1,
      sym_object_name,
    STATE(857), 1,
      sym_index_column_spec,
    STATE(1035), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10630] = 6,
    ACTIONS(985), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(987), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(989), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(991), 1,
      sym_object_name,
    STATE(943), 1,
      sym_index_column_spec,
    STATE(1035), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10651] = 6,
    ACTIONS(993), 1,
      anon_sym_DOT,
    ACTIONS(995), 1,
      aux_sym_priviledge_token3,
    ACTIONS(997), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(999), 1,
      aux_sym_alter_table_rename_token1,
    STATE(289), 1,
      sym_alter_type_operation,
    STATE(290), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10672] = 6,
    ACTIONS(985), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(987), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(989), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(991), 1,
      sym_object_name,
    STATE(1038), 1,
      sym_index_column_spec,
    STATE(1035), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10693] = 6,
    ACTIONS(985), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(987), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(989), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(991), 1,
      sym_object_name,
    STATE(931), 1,
      sym_index_column_spec,
    STATE(1035), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10714] = 5,
    ACTIONS(995), 1,
      aux_sym_priviledge_token3,
    ACTIONS(997), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(999), 1,
      aux_sym_alter_table_rename_token1,
    STATE(319), 1,
      sym_alter_type_operation,
    STATE(290), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10732] = 3,
    ACTIONS(1005), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1001), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1003), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10746] = 7,
    ACTIONS(1007), 1,
      aux_sym_truncate_token2,
    ACTIONS(1009), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1011), 1,
      aux_sym_resource_token2,
    ACTIONS(1013), 1,
      aux_sym_resource_token5,
    ACTIONS(1015), 1,
      aux_sym_resource_token6,
    ACTIONS(1017), 1,
      sym_object_name,
    STATE(233), 1,
      sym_resource,
  [10768] = 7,
    ACTIONS(1019), 1,
      aux_sym_select_statement_token2,
    ACTIONS(1021), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1023), 1,
      anon_sym_STAR,
    ACTIONS(1025), 1,
      sym_object_name,
    STATE(557), 1,
      sym_select_element,
    STATE(564), 1,
      sym_function_call,
    STATE(841), 1,
      sym_select_elements,
  [10790] = 6,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
    ACTIONS(1029), 1,
      sym_object_name,
    STATE(77), 1,
      sym_relation_element,
    STATE(97), 1,
      sym_relation_elements,
    STATE(464), 1,
      sym_function_call,
    STATE(88), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10810] = 3,
    ACTIONS(1035), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1031), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1033), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10824] = 7,
    ACTIONS(1007), 1,
      aux_sym_truncate_token2,
    ACTIONS(1009), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1011), 1,
      aux_sym_resource_token2,
    ACTIONS(1013), 1,
      aux_sym_resource_token5,
    ACTIONS(1015), 1,
      aux_sym_resource_token6,
    ACTIONS(1017), 1,
      sym_object_name,
    STATE(1176), 1,
      sym_resource,
  [10846] = 7,
    ACTIONS(1007), 1,
      aux_sym_truncate_token2,
    ACTIONS(1009), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1011), 1,
      aux_sym_resource_token2,
    ACTIONS(1013), 1,
      aux_sym_resource_token5,
    ACTIONS(1015), 1,
      aux_sym_resource_token6,
    ACTIONS(1017), 1,
      sym_object_name,
    STATE(1181), 1,
      sym_resource,
  [10868] = 6,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
    ACTIONS(1037), 1,
      sym_object_name,
    STATE(86), 1,
      sym_relation_element,
    STATE(464), 1,
      sym_function_call,
    STATE(726), 1,
      sym_column_not_null,
    STATE(88), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10888] = 6,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
    STATE(673), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(677), 1,
      aux_sym_relation_element_repeat2,
    STATE(681), 1,
      sym_assignment_tuple,
  [10907] = 4,
    ACTIONS(400), 1,
      anon_sym_LBRACK,
    ACTIONS(402), 1,
      anon_sym_LBRACE,
    ACTIONS(1043), 1,
      sym__decimal_literal,
    STATE(803), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [10922] = 6,
    ACTIONS(1045), 1,
      aux_sym_truncate_token2,
    ACTIONS(1047), 1,
      aux_sym_resource_token2,
    ACTIONS(1049), 1,
      aux_sym_resource_token6,
    ACTIONS(1051), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1053), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1055), 1,
      aux_sym_drop_user_token1,
  [10941] = 5,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
    ACTIONS(1029), 1,
      sym_object_name,
    STATE(86), 1,
      sym_relation_element,
    STATE(464), 1,
      sym_function_call,
    STATE(88), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10958] = 2,
    ACTIONS(1057), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1059), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10969] = 6,
    ACTIONS(1023), 1,
      anon_sym_STAR,
    ACTIONS(1025), 1,
      sym_object_name,
    ACTIONS(1061), 1,
      aux_sym_select_statement_token3,
    STATE(557), 1,
      sym_select_element,
    STATE(564), 1,
      sym_function_call,
    STATE(805), 1,
      sym_select_elements,
  [10988] = 1,
    ACTIONS(1063), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10996] = 5,
    ACTIONS(1065), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1067), 1,
      sym_object_name,
    STATE(538), 1,
      sym_from_spec,
    STATE(568), 1,
      sym_delete_column_item,
    STATE(836), 1,
      sym_delete_column_list,
  [11012] = 1,
    ACTIONS(1069), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11020] = 5,
    ACTIONS(163), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(165), 1,
      sym_object_name,
    STATE(133), 1,
      sym_table_option_item,
    STATE(252), 1,
      sym_clustering_order,
    STATE(1068), 1,
      sym_table_option_name,
  [11036] = 3,
    ACTIONS(1071), 1,
      anon_sym_COMMA,
    STATE(470), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(1074), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11048] = 5,
    ACTIONS(163), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(165), 1,
      sym_object_name,
    STATE(184), 1,
      sym_table_option_item,
    STATE(315), 1,
      sym_clustering_order,
    STATE(1068), 1,
      sym_table_option_name,
  [11064] = 4,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    ACTIONS(1078), 1,
      anon_sym_DOT,
    ACTIONS(1080), 1,
      aux_sym_select_element_token1,
    ACTIONS(1076), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11078] = 4,
    ACTIONS(1082), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1086), 1,
      aux_sym_role_with_options_token4,
    STATE(160), 1,
      sym_role_with_options,
    ACTIONS(1084), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11092] = 5,
    ACTIONS(1088), 1,
      sym__string_literal,
    ACTIONS(1090), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1092), 1,
      aux_sym_create_index_token3,
    ACTIONS(1094), 1,
      sym_object_name,
    STATE(1333), 1,
      sym_index_name,
  [11108] = 3,
    ACTIONS(1098), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(596), 1,
      sym_using_timestamp_spec,
    ACTIONS(1096), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11120] = 5,
    ACTIONS(1100), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1102), 1,
      anon_sym_LPAREN,
    ACTIONS(1104), 1,
      aux_sym_insert_values_spec_token1,
    STATE(110), 1,
      sym_insert_values_spec,
    STATE(670), 1,
      sym_insert_column_spec,
  [11136] = 3,
    ACTIONS(1098), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(664), 1,
      sym_using_timestamp_spec,
    ACTIONS(1106), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11148] = 5,
    ACTIONS(1100), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1102), 1,
      anon_sym_LPAREN,
    ACTIONS(1104), 1,
      aux_sym_insert_values_spec_token1,
    STATE(125), 1,
      sym_insert_values_spec,
    STATE(605), 1,
      sym_insert_column_spec,
  [11164] = 1,
    ACTIONS(1108), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11172] = 5,
    ACTIONS(1023), 1,
      anon_sym_STAR,
    ACTIONS(1110), 1,
      sym_object_name,
    STATE(557), 1,
      sym_select_element,
    STATE(564), 1,
      sym_function_call,
    STATE(805), 1,
      sym_select_elements,
  [11188] = 1,
    ACTIONS(1112), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11196] = 4,
    ACTIONS(1114), 1,
      anon_sym_LPAREN,
    ACTIONS(1116), 1,
      sym_object_name,
    STATE(928), 1,
      sym_primary_key_definition,
    STATE(929), 2,
      sym_compound_key,
      sym_composite_key,
  [11210] = 1,
    ACTIONS(1118), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11218] = 3,
    ACTIONS(1122), 1,
      anon_sym_LBRACE,
    ACTIONS(1120), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(186), 2,
      sym_option_hash,
      sym_table_option_value,
  [11230] = 5,
    ACTIONS(1023), 1,
      anon_sym_STAR,
    ACTIONS(1110), 1,
      sym_object_name,
    STATE(557), 1,
      sym_select_element,
    STATE(564), 1,
      sym_function_call,
    STATE(745), 1,
      sym_select_elements,
  [11246] = 1,
    ACTIONS(1124), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11254] = 4,
    ACTIONS(1082), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1086), 1,
      aux_sym_role_with_options_token4,
    STATE(229), 1,
      sym_role_with_options,
    ACTIONS(1084), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11268] = 1,
    ACTIONS(1126), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11276] = 5,
    ACTIONS(1065), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1067), 1,
      sym_object_name,
    STATE(493), 1,
      sym_from_spec,
    STATE(568), 1,
      sym_delete_column_item,
    STATE(747), 1,
      sym_delete_column_list,
  [11292] = 5,
    ACTIONS(163), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(165), 1,
      sym_object_name,
    STATE(184), 1,
      sym_table_option_item,
    STATE(401), 1,
      sym_clustering_order,
    STATE(1068), 1,
      sym_table_option_name,
  [11308] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      sym_where_spec,
    STATE(622), 1,
      aux_sym_update_repeat1,
  [11321] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1130), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11332] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1098), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(194), 1,
      sym_where_spec,
    STATE(735), 1,
      sym_using_timestamp_spec,
  [11345] = 4,
    ACTIONS(231), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1132), 1,
      anon_sym_DOT,
    ACTIONS(1134), 1,
      aux_sym_update_token2,
    STATE(1291), 1,
      sym_using_ttl_timestamp,
  [11358] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      sym_where_spec,
    STATE(527), 1,
      aux_sym_update_repeat1,
  [11371] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      sym_where_spec,
    STATE(622), 1,
      aux_sym_update_repeat1,
  [11384] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      sym_where_spec,
    STATE(536), 1,
      aux_sym_update_repeat1,
  [11397] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      sym_where_spec,
    STATE(622), 1,
      aux_sym_update_repeat1,
  [11410] = 4,
    ACTIONS(1136), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1138), 1,
      sym_object_name,
    STATE(782), 1,
      sym_column_definition,
    STATE(904), 1,
      sym_primary_key_element,
  [11423] = 4,
    ACTIONS(1140), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1142), 1,
      aux_sym_create_materialized_view_token1,
    STATE(674), 1,
      aux_sym_relation_elements_repeat1,
    STATE(676), 1,
      aux_sym_materialized_view_where_repeat1,
  [11436] = 4,
    ACTIONS(1144), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(1146), 1,
      sym_object_name,
    STATE(173), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
  [11449] = 4,
    ACTIONS(1140), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1148), 1,
      aux_sym_create_materialized_view_token1,
    STATE(500), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(617), 1,
      aux_sym_relation_elements_repeat1,
  [11462] = 4,
    ACTIONS(1088), 1,
      sym__string_literal,
    ACTIONS(1094), 1,
      sym_object_name,
    ACTIONS(1150), 1,
      aux_sym_create_index_token3,
    STATE(1045), 1,
      sym_index_name,
  [11475] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      sym_where_spec,
    STATE(622), 1,
      aux_sym_update_repeat1,
  [11488] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    STATE(492), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1152), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11499] = 4,
    ACTIONS(1146), 1,
      sym_object_name,
    ACTIONS(1154), 1,
      aux_sym_delete_statement_token3,
    STATE(173), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
  [11512] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      sym_where_spec,
    STATE(496), 1,
      aux_sym_update_repeat1,
  [11525] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      sym_where_spec,
    STATE(491), 1,
      aux_sym_update_repeat1,
  [11538] = 4,
    ACTIONS(1146), 1,
      sym_object_name,
    ACTIONS(1156), 1,
      aux_sym_delete_statement_token3,
    STATE(173), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
  [11551] = 4,
    ACTIONS(1146), 1,
      sym_object_name,
    ACTIONS(1158), 1,
      aux_sym_delete_statement_token3,
    STATE(173), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
  [11564] = 4,
    ACTIONS(1146), 1,
      sym_object_name,
    ACTIONS(1160), 1,
      aux_sym_delete_statement_token3,
    STATE(173), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
  [11577] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      sym_where_spec,
    STATE(622), 1,
      aux_sym_update_repeat1,
  [11590] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1098), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(172), 1,
      sym_where_spec,
    STATE(790), 1,
      sym_using_timestamp_spec,
  [11603] = 4,
    ACTIONS(1146), 1,
      sym_object_name,
    ACTIONS(1162), 1,
      aux_sym_delete_statement_token3,
    STATE(173), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
  [11616] = 4,
    ACTIONS(1146), 1,
      sym_object_name,
    ACTIONS(1164), 1,
      aux_sym_delete_statement_token3,
    STATE(173), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
  [11629] = 4,
    ACTIONS(1166), 1,
      aux_sym_timestamp_token1,
    ACTIONS(1168), 1,
      aux_sym_ttl_token1,
    STATE(199), 1,
      sym_timestamp,
    STATE(203), 1,
      sym_ttl,
  [11642] = 4,
    ACTIONS(1170), 1,
      sym_object_name,
    STATE(108), 1,
      sym_table_option_item,
    STATE(366), 1,
      sym_table_options,
    STATE(1068), 1,
      sym_table_option_name,
  [11655] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      sym_where_spec,
    STATE(520), 1,
      aux_sym_update_repeat1,
  [11668] = 4,
    ACTIONS(1146), 1,
      sym_object_name,
    ACTIONS(1172), 1,
      aux_sym_delete_statement_token3,
    STATE(173), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
  [11681] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      sym_where_spec,
    STATE(622), 1,
      aux_sym_update_repeat1,
  [11694] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      sym_where_spec,
    STATE(498), 1,
      aux_sym_update_repeat1,
  [11707] = 4,
    ACTIONS(1170), 1,
      sym_object_name,
    STATE(108), 1,
      sym_table_option_item,
    STATE(400), 1,
      sym_table_options,
    STATE(1068), 1,
      sym_table_option_name,
  [11720] = 4,
    ACTIONS(1146), 1,
      sym_object_name,
    ACTIONS(1174), 1,
      aux_sym_delete_statement_token3,
    STATE(173), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
  [11733] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      sym_where_spec,
    STATE(512), 1,
      aux_sym_update_repeat1,
  [11746] = 3,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
    STATE(1105), 1,
      sym_order_direction,
    ACTIONS(185), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [11757] = 4,
    ACTIONS(1146), 1,
      sym_object_name,
    ACTIONS(1178), 1,
      aux_sym_delete_statement_token3,
    STATE(173), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
  [11770] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      sym_where_spec,
    STATE(622), 1,
      aux_sym_update_repeat1,
  [11783] = 4,
    ACTIONS(1136), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1138), 1,
      sym_object_name,
    STATE(782), 1,
      sym_column_definition,
    STATE(961), 1,
      sym_primary_key_element,
  [11796] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      sym_where_spec,
    STATE(504), 1,
      aux_sym_update_repeat1,
  [11809] = 4,
    ACTIONS(1146), 1,
      sym_object_name,
    ACTIONS(1180), 1,
      aux_sym_delete_statement_token3,
    STATE(173), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
  [11822] = 2,
    ACTIONS(1182), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1184), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11831] = 4,
    ACTIONS(1146), 1,
      sym_object_name,
    ACTIONS(1186), 1,
      aux_sym_delete_statement_token3,
    STATE(173), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
  [11844] = 4,
    ACTIONS(1146), 1,
      sym_object_name,
    ACTIONS(1188), 1,
      aux_sym_delete_statement_token3,
    STATE(173), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
  [11857] = 3,
    ACTIONS(1192), 1,
      aux_sym_create_materialized_view_token1,
    STATE(788), 1,
      sym_primary_key_column,
    ACTIONS(1190), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11868] = 4,
    ACTIONS(1170), 1,
      sym_object_name,
    STATE(108), 1,
      sym_table_option_item,
    STATE(307), 1,
      sym_table_options,
    STATE(1068), 1,
      sym_table_option_name,
  [11881] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      sym_where_spec,
    STATE(622), 1,
      aux_sym_update_repeat1,
  [11894] = 1,
    ACTIONS(1074), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11901] = 4,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1098), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(177), 1,
      sym_where_spec,
    STATE(799), 1,
      sym_using_timestamp_spec,
  [11914] = 4,
    ACTIONS(1146), 1,
      sym_object_name,
    ACTIONS(1194), 1,
      aux_sym_delete_statement_token3,
    STATE(173), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
  [11927] = 1,
    ACTIONS(1196), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11934] = 4,
    ACTIONS(1146), 1,
      sym_object_name,
    ACTIONS(1198), 1,
      aux_sym_delete_statement_token3,
    STATE(173), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
  [11947] = 4,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    ACTIONS(1202), 1,
      anon_sym_RPAREN,
    STATE(682), 1,
      aux_sym_function_args_repeat1,
  [11960] = 4,
    ACTIONS(231), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1204), 1,
      anon_sym_DOT,
    ACTIONS(1206), 1,
      aux_sym_update_token2,
    STATE(1161), 1,
      sym_using_ttl_timestamp,
  [11973] = 4,
    ACTIONS(1146), 1,
      sym_object_name,
    ACTIONS(1208), 1,
      aux_sym_delete_statement_token3,
    STATE(173), 1,
      sym_if_condition,
    STATE(317), 1,
      sym_if_condition_list,
  [11986] = 4,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      anon_sym_COLON,
    ACTIONS(1214), 1,
      anon_sym_RBRACE,
    STATE(660), 1,
      aux_sym_assignment_tuple_repeat1,
  [11999] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1218), 1,
      anon_sym_RPAREN,
    STATE(645), 1,
      aux_sym_init_cond_hash_repeat1,
  [12009] = 3,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(1222), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12019] = 3,
    ACTIONS(1224), 1,
      aux_sym_truncate_token2,
    ACTIONS(1226), 1,
      sym_object_name,
    STATE(312), 1,
      sym_table_name,
  [12029] = 3,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    ACTIONS(1230), 1,
      anon_sym_RBRACE,
    STATE(636), 1,
      aux_sym_replication_list_repeat1,
  [12039] = 3,
    ACTIONS(1232), 1,
      anon_sym_RPAREN,
    ACTIONS(1234), 1,
      sym_object_name,
    STATE(663), 1,
      sym_param,
  [12049] = 3,
    ACTIONS(1234), 1,
      sym_object_name,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
    STATE(628), 1,
      sym_param,
  [12059] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(940), 1,
      sym_return_mode,
  [12069] = 3,
    ACTIONS(1242), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1244), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1246), 1,
      aux_sym_update_token1,
  [12079] = 3,
    ACTIONS(1248), 1,
      anon_sym_COMMA,
    ACTIONS(1250), 1,
      anon_sym_RPAREN,
    STATE(609), 1,
      aux_sym_clustering_key_list_repeat1,
  [12089] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1252), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
  [12099] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_create_function_repeat1,
  [12109] = 3,
    ACTIONS(1258), 1,
      anon_sym_COMMA,
    ACTIONS(1260), 1,
      aux_sym_from_spec_token1,
    STATE(593), 1,
      aux_sym_select_elements_repeat1,
  [12119] = 3,
    ACTIONS(1170), 1,
      sym_object_name,
    STATE(184), 1,
      sym_table_option_item,
    STATE(1068), 1,
      sym_table_option_name,
  [12129] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(1060), 1,
      sym_return_mode,
  [12139] = 3,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1265), 1,
      anon_sym_RBRACE,
    STATE(560), 1,
      aux_sym_assignment_map_repeat1,
  [12149] = 3,
    ACTIONS(1267), 1,
      anon_sym_COMMA,
    ACTIONS(1269), 1,
      anon_sym_RPAREN,
    STATE(604), 1,
      aux_sym_expression_list_repeat1,
  [12159] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1271), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_create_function_repeat1,
  [12169] = 3,
    ACTIONS(1273), 1,
      anon_sym_COMMA,
    ACTIONS(1275), 1,
      anon_sym_RPAREN,
    STATE(658), 1,
      aux_sym_create_type_repeat1,
  [12179] = 2,
    ACTIONS(1279), 1,
      aux_sym_select_element_token1,
    ACTIONS(1277), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12187] = 2,
    ACTIONS(1283), 1,
      anon_sym_LBRACK,
    ACTIONS(1281), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12195] = 3,
    ACTIONS(1285), 1,
      sym_object_name,
    STATE(675), 1,
      sym_column_definition,
    STATE(923), 1,
      sym_column_definition_list,
  [12205] = 3,
    ACTIONS(1287), 1,
      anon_sym_DOT,
    ACTIONS(1289), 1,
      aux_sym_where_spec_token1,
    STATE(1078), 1,
      sym_materialized_view_where,
  [12215] = 3,
    ACTIONS(1291), 1,
      anon_sym_COMMA,
    ACTIONS(1293), 1,
      aux_sym_from_spec_token1,
    STATE(595), 1,
      aux_sym_delete_column_list_repeat1,
  [12225] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1297), 1,
      anon_sym_RBRACE,
    STATE(656), 1,
      aux_sym_assignment_map_repeat1,
  [12235] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1299), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
  [12245] = 3,
    ACTIONS(1301), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1303), 1,
      sym_object_name,
    STATE(1325), 1,
      sym_keyspace_name,
  [12255] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_create_function_repeat1,
  [12265] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(936), 1,
      sym_return_mode,
  [12275] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1307), 1,
      anon_sym_RPAREN,
    STATE(671), 1,
      aux_sym_relation_element_repeat2,
  [12285] = 3,
    ACTIONS(1309), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1311), 1,
      sym_object_name,
    STATE(1319), 1,
      sym_trigger_name,
  [12295] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(944), 1,
      sym_return_mode,
  [12305] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_create_function_repeat1,
  [12315] = 3,
    ACTIONS(1273), 1,
      anon_sym_COMMA,
    ACTIONS(1315), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      aux_sym_create_type_repeat1,
  [12325] = 3,
    ACTIONS(1234), 1,
      sym_object_name,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
    STATE(642), 1,
      sym_param,
  [12335] = 3,
    ACTIONS(1234), 1,
      sym_object_name,
    ACTIONS(1319), 1,
      anon_sym_RPAREN,
    STATE(631), 1,
      sym_param,
  [12345] = 3,
    ACTIONS(1321), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1323), 1,
      sym_object_name,
    STATE(1314), 1,
      sym_user_name,
  [12355] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(1034), 1,
      sym_return_mode,
  [12365] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(1090), 1,
      sym_return_mode,
  [12375] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_create_function_repeat1,
  [12385] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(1094), 1,
      sym_return_mode,
  [12395] = 3,
    ACTIONS(1327), 1,
      sym__string_literal,
    ACTIONS(1329), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1331), 1,
      sym_object_name,
  [12405] = 3,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    STATE(618), 1,
      aux_sym_column_definition_list_repeat1,
  [12415] = 3,
    ACTIONS(1323), 1,
      sym_object_name,
    ACTIONS(1337), 1,
      aux_sym_delete_statement_token2,
    STATE(396), 1,
      sym_user_name,
  [12425] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
    STATE(584), 1,
      aux_sym_create_function_repeat1,
  [12435] = 3,
    ACTIONS(1285), 1,
      sym_object_name,
    STATE(675), 1,
      sym_column_definition,
    STATE(965), 1,
      sym_column_definition_list,
  [12445] = 3,
    ACTIONS(1110), 1,
      sym_object_name,
    STATE(564), 1,
      sym_function_call,
    STATE(742), 1,
      sym_select_element,
  [12455] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(1030), 1,
      sym_return_mode,
  [12465] = 3,
    ACTIONS(1258), 1,
      anon_sym_COMMA,
    ACTIONS(1341), 1,
      aux_sym_from_spec_token1,
    STATE(654), 1,
      aux_sym_select_elements_repeat1,
  [12475] = 3,
    ACTIONS(1343), 1,
      anon_sym_COMMA,
    ACTIONS(1345), 1,
      anon_sym_RBRACE,
    STATE(616), 1,
      aux_sym_option_hash_repeat1,
  [12485] = 3,
    ACTIONS(1291), 1,
      anon_sym_COMMA,
    ACTIONS(1347), 1,
      aux_sym_from_spec_token1,
    STATE(657), 1,
      aux_sym_delete_column_list_repeat1,
  [12495] = 1,
    ACTIONS(1106), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12501] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(1349), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_relation_element_repeat1,
  [12511] = 3,
    ACTIONS(1351), 1,
      anon_sym_COMMA,
    ACTIONS(1354), 1,
      anon_sym_RPAREN,
    STATE(598), 1,
      aux_sym_function_args_repeat1,
  [12521] = 3,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1356), 1,
      anon_sym_RBRACK,
    STATE(667), 1,
      aux_sym_assignment_tuple_repeat1,
  [12531] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1358), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_create_function_repeat1,
  [12541] = 2,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    ACTIONS(1354), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12549] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(891), 1,
      sym_return_mode,
  [12559] = 3,
    ACTIONS(231), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1360), 1,
      aux_sym_update_token2,
    STATE(974), 1,
      sym_using_ttl_timestamp,
  [12569] = 3,
    ACTIONS(1267), 1,
      anon_sym_COMMA,
    ACTIONS(1362), 1,
      anon_sym_RPAREN,
    STATE(659), 1,
      aux_sym_expression_list_repeat1,
  [12579] = 3,
    ACTIONS(1100), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1104), 1,
      aux_sym_insert_values_spec_token1,
    STATE(123), 1,
      sym_insert_values_spec,
  [12589] = 3,
    ACTIONS(1234), 1,
      sym_object_name,
    ACTIONS(1364), 1,
      anon_sym_RPAREN,
    STATE(641), 1,
      sym_param,
  [12599] = 3,
    ACTIONS(1273), 1,
      anon_sym_COMMA,
    ACTIONS(1366), 1,
      anon_sym_RPAREN,
    STATE(611), 1,
      aux_sym_create_type_repeat1,
  [12609] = 3,
    ACTIONS(1285), 1,
      sym_object_name,
    STATE(675), 1,
      sym_column_definition,
    STATE(907), 1,
      sym_column_definition_list,
  [12619] = 3,
    ACTIONS(1248), 1,
      anon_sym_COMMA,
    ACTIONS(1368), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_clustering_key_list_repeat1,
  [12629] = 3,
    ACTIONS(1248), 1,
      anon_sym_COMMA,
    ACTIONS(1370), 1,
      anon_sym_RPAREN,
    STATE(666), 1,
      aux_sym_clustering_key_list_repeat1,
  [12639] = 3,
    ACTIONS(1372), 1,
      anon_sym_COMMA,
    ACTIONS(1375), 1,
      anon_sym_RPAREN,
    STATE(611), 1,
      aux_sym_create_type_repeat1,
  [12649] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(1114), 1,
      sym_return_mode,
  [12659] = 3,
    ACTIONS(1289), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1377), 1,
      anon_sym_DOT,
    STATE(1129), 1,
      sym_materialized_view_where,
  [12669] = 3,
    ACTIONS(1273), 1,
      anon_sym_COMMA,
    ACTIONS(1379), 1,
      anon_sym_RPAREN,
    STATE(626), 1,
      aux_sym_create_type_repeat1,
  [12679] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    ACTIONS(1384), 1,
      anon_sym_GT,
    STATE(615), 1,
      aux_sym_data_type_definition_repeat1,
  [12689] = 3,
    ACTIONS(1386), 1,
      anon_sym_COMMA,
    ACTIONS(1389), 1,
      anon_sym_RBRACE,
    STATE(616), 1,
      aux_sym_option_hash_repeat1,
  [12699] = 3,
    ACTIONS(145), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1142), 1,
      aux_sym_create_materialized_view_token1,
    STATE(74), 1,
      aux_sym_relation_elements_repeat1,
  [12709] = 3,
    ACTIONS(1391), 1,
      anon_sym_COMMA,
    ACTIONS(1394), 1,
      anon_sym_RPAREN,
    STATE(618), 1,
      aux_sym_column_definition_list_repeat1,
  [12719] = 3,
    ACTIONS(1396), 1,
      anon_sym_COMMA,
    ACTIONS(1398), 1,
      anon_sym_GT,
    STATE(615), 1,
      aux_sym_data_type_definition_repeat1,
  [12729] = 3,
    ACTIONS(1289), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1400), 1,
      anon_sym_DOT,
    STATE(962), 1,
      sym_materialized_view_where,
  [12739] = 3,
    ACTIONS(1273), 1,
      anon_sym_COMMA,
    ACTIONS(1402), 1,
      anon_sym_RPAREN,
    STATE(607), 1,
      aux_sym_create_type_repeat1,
  [12749] = 3,
    ACTIONS(1404), 1,
      anon_sym_COMMA,
    ACTIONS(1407), 1,
      aux_sym_where_spec_token1,
    STATE(622), 1,
      aux_sym_update_repeat1,
  [12759] = 2,
    ACTIONS(1411), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1409), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [12767] = 2,
    ACTIONS(1413), 1,
      aux_sym_resource_token1,
    ACTIONS(1415), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [12775] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(1009), 1,
      sym_return_mode,
  [12785] = 3,
    ACTIONS(1273), 1,
      anon_sym_COMMA,
    ACTIONS(1417), 1,
      anon_sym_RPAREN,
    STATE(611), 1,
      aux_sym_create_type_repeat1,
  [12795] = 3,
    ACTIONS(1419), 1,
      sym__string_literal,
    STATE(652), 1,
      sym_replication_list_item,
    STATE(897), 1,
      sym_replication_list,
  [12805] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1421), 1,
      anon_sym_RPAREN,
    STATE(562), 1,
      aux_sym_create_function_repeat1,
  [12815] = 3,
    ACTIONS(1234), 1,
      sym_object_name,
    ACTIONS(1423), 1,
      anon_sym_RPAREN,
    STATE(646), 1,
      sym_param,
  [12825] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(892), 1,
      sym_return_mode,
  [12835] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1425), 1,
      anon_sym_RPAREN,
    STATE(643), 1,
      aux_sym_create_function_repeat1,
  [12845] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(1004), 1,
      sym_return_mode,
  [12855] = 3,
    ACTIONS(1343), 1,
      anon_sym_COMMA,
    ACTIONS(1427), 1,
      anon_sym_RBRACE,
    STATE(594), 1,
      aux_sym_option_hash_repeat1,
  [12865] = 3,
    ACTIONS(1273), 1,
      anon_sym_COMMA,
    ACTIONS(1429), 1,
      anon_sym_RPAREN,
    STATE(611), 1,
      aux_sym_create_type_repeat1,
  [12875] = 3,
    ACTIONS(1234), 1,
      sym_object_name,
    ACTIONS(1431), 1,
      anon_sym_RPAREN,
    STATE(589), 1,
      sym_param,
  [12885] = 3,
    ACTIONS(1433), 1,
      anon_sym_COMMA,
    ACTIONS(1436), 1,
      anon_sym_RBRACE,
    STATE(636), 1,
      aux_sym_replication_list_repeat1,
  [12895] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(887), 1,
      sym_return_mode,
  [12905] = 3,
    ACTIONS(1438), 1,
      anon_sym_COMMA,
    ACTIONS(1441), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_create_function_repeat1,
  [12915] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(970), 1,
      sym_return_mode,
  [12925] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(1140), 1,
      sym_return_mode,
  [12935] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1443), 1,
      anon_sym_RPAREN,
    STATE(577), 1,
      aux_sym_create_function_repeat1,
  [12945] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1445), 1,
      anon_sym_RPAREN,
    STATE(679), 1,
      aux_sym_create_function_repeat1,
  [12955] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1447), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_create_function_repeat1,
  [12965] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(858), 1,
      sym_return_mode,
  [12975] = 3,
    ACTIONS(1449), 1,
      anon_sym_COMMA,
    ACTIONS(1452), 1,
      anon_sym_RPAREN,
    STATE(645), 1,
      aux_sym_init_cond_hash_repeat1,
  [12985] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1454), 1,
      anon_sym_RPAREN,
    STATE(556), 1,
      aux_sym_create_function_repeat1,
  [12995] = 3,
    ACTIONS(1419), 1,
      sym__string_literal,
    STATE(652), 1,
      sym_replication_list_item,
    STATE(1001), 1,
      sym_replication_list,
  [13005] = 3,
    ACTIONS(1396), 1,
      anon_sym_COMMA,
    ACTIONS(1456), 1,
      anon_sym_GT,
    STATE(619), 1,
      aux_sym_data_type_definition_repeat1,
  [13015] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(854), 1,
      sym_return_mode,
  [13025] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(1145), 1,
      sym_return_mode,
  [13035] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(975), 1,
      sym_return_mode,
  [13045] = 3,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    ACTIONS(1458), 1,
      anon_sym_RBRACE,
    STATE(549), 1,
      aux_sym_replication_list_repeat1,
  [13055] = 3,
    ACTIONS(1460), 1,
      anon_sym_COMMA,
    ACTIONS(1463), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13065] = 3,
    ACTIONS(1465), 1,
      anon_sym_COMMA,
    ACTIONS(1468), 1,
      aux_sym_from_spec_token1,
    STATE(654), 1,
      aux_sym_select_elements_repeat1,
  [13075] = 3,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    ACTIONS(1202), 1,
      anon_sym_RPAREN,
    STATE(682), 1,
      aux_sym_function_args_repeat1,
  [13085] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1470), 1,
      anon_sym_RBRACE,
    STATE(560), 1,
      aux_sym_assignment_map_repeat1,
  [13095] = 3,
    ACTIONS(1472), 1,
      anon_sym_COMMA,
    ACTIONS(1475), 1,
      aux_sym_from_spec_token1,
    STATE(657), 1,
      aux_sym_delete_column_list_repeat1,
  [13105] = 3,
    ACTIONS(1273), 1,
      anon_sym_COMMA,
    ACTIONS(1477), 1,
      anon_sym_RPAREN,
    STATE(611), 1,
      aux_sym_create_type_repeat1,
  [13115] = 3,
    ACTIONS(1479), 1,
      anon_sym_COMMA,
    ACTIONS(1482), 1,
      anon_sym_RPAREN,
    STATE(659), 1,
      aux_sym_expression_list_repeat1,
  [13125] = 3,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1484), 1,
      anon_sym_RBRACE,
    STATE(470), 1,
      aux_sym_assignment_tuple_repeat1,
  [13135] = 3,
    ACTIONS(1486), 1,
      anon_sym_COMMA,
    ACTIONS(1489), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_clustering_key_list_repeat1,
  [13145] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(873), 1,
      sym_return_mode,
  [13155] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1491), 1,
      anon_sym_RPAREN,
    STATE(600), 1,
      aux_sym_create_function_repeat1,
  [13165] = 1,
    ACTIONS(1493), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13171] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1495), 1,
      anon_sym_RPAREN,
    STATE(555), 1,
      aux_sym_relation_element_repeat2,
  [13181] = 3,
    ACTIONS(1248), 1,
      anon_sym_COMMA,
    ACTIONS(1497), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_clustering_key_list_repeat1,
  [13191] = 3,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1499), 1,
      anon_sym_RBRACK,
    STATE(470), 1,
      aux_sym_assignment_tuple_repeat1,
  [13201] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1501), 1,
      anon_sym_RPAREN,
    STATE(572), 1,
      aux_sym_create_function_repeat1,
  [13211] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(1028), 1,
      sym_return_mode,
  [13221] = 3,
    ACTIONS(1100), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1104), 1,
      aux_sym_insert_values_spec_token1,
    STATE(125), 1,
      sym_insert_values_spec,
  [13231] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1495), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
  [13241] = 3,
    ACTIONS(1285), 1,
      sym_object_name,
    STATE(675), 1,
      sym_column_definition,
    STATE(1138), 1,
      sym_column_definition_list,
  [13251] = 3,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1503), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      aux_sym_assignment_tuple_repeat1,
  [13261] = 3,
    ACTIONS(145), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1505), 1,
      aux_sym_create_materialized_view_token1,
    STATE(74), 1,
      aux_sym_relation_elements_repeat1,
  [13271] = 3,
    ACTIONS(1507), 1,
      anon_sym_COMMA,
    ACTIONS(1509), 1,
      anon_sym_RPAREN,
    STATE(587), 1,
      aux_sym_column_definition_list_repeat1,
  [13281] = 3,
    ACTIONS(1511), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1514), 1,
      aux_sym_create_materialized_view_token1,
    STATE(676), 1,
      aux_sym_materialized_view_where_repeat1,
  [13291] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1503), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
  [13301] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(1185), 1,
      sym_return_mode,
  [13311] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1516), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_create_function_repeat1,
  [13321] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(1518), 1,
      anon_sym_RPAREN,
    STATE(597), 1,
      aux_sym_relation_element_repeat1,
  [13331] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1503), 1,
      anon_sym_RPAREN,
    STATE(570), 1,
      aux_sym_relation_element_repeat2,
  [13341] = 3,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    ACTIONS(1520), 1,
      anon_sym_RPAREN,
    STATE(598), 1,
      aux_sym_function_args_repeat1,
  [13351] = 3,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1522), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      aux_sym_assignment_tuple_repeat1,
  [13361] = 3,
    ACTIONS(1419), 1,
      sym__string_literal,
    STATE(652), 1,
      sym_replication_list_item,
    STATE(866), 1,
      sym_replication_list,
  [13371] = 3,
    ACTIONS(1524), 1,
      sym_object_name,
    STATE(138), 1,
      sym_alter_type_rename_item,
    STATE(332), 1,
      sym_alter_type_rename_list,
  [13381] = 3,
    ACTIONS(231), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1526), 1,
      aux_sym_update_token2,
    STATE(1086), 1,
      sym_using_ttl_timestamp,
  [13391] = 3,
    ACTIONS(1528), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    ACTIONS(1530), 1,
      sym_object_name,
    STATE(382), 1,
      sym_alter_table_drop_column_list,
  [13401] = 3,
    ACTIONS(1289), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1532), 1,
      anon_sym_DOT,
    STATE(1217), 1,
      sym_materialized_view_where,
  [13411] = 3,
    ACTIONS(1234), 1,
      sym_object_name,
    ACTIONS(1534), 1,
      anon_sym_RPAREN,
    STATE(668), 1,
      sym_param,
  [13421] = 3,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1536), 1,
      anon_sym_RPAREN,
    STATE(683), 1,
      aux_sym_assignment_tuple_repeat1,
  [13431] = 3,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(1538), 1,
      anon_sym_RPAREN,
    STATE(547), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13441] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1540), 1,
      anon_sym_RPAREN,
    STATE(546), 1,
      aux_sym_init_cond_hash_repeat1,
  [13451] = 3,
    ACTIONS(1238), 1,
      aux_sym_create_function_token1,
    ACTIONS(1240), 1,
      aux_sym_return_mode_token1,
    STATE(1226), 1,
      sym_return_mode,
  [13461] = 1,
    ACTIONS(1542), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13466] = 1,
    ACTIONS(1389), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13471] = 2,
    ACTIONS(1544), 1,
      aux_sym_role_with_options_token1,
    STATE(107), 1,
      sym_user_password,
  [13478] = 2,
    ACTIONS(1546), 1,
      sym_object_name,
    STATE(347), 1,
      sym_alter_table_column_definition,
  [13485] = 2,
    ACTIONS(1289), 1,
      aux_sym_where_spec_token1,
    STATE(1218), 1,
      sym_materialized_view_where,
  [13492] = 1,
    ACTIONS(1548), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13497] = 2,
    ACTIONS(1550), 1,
      sym_object_name,
    STATE(726), 1,
      sym_column_not_null,
  [13504] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(1297), 1,
      sym_column_list,
  [13511] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(497), 1,
      sym_assignment_element,
  [13518] = 2,
    ACTIONS(1556), 1,
      anon_sym_EQ,
    ACTIONS(1558), 1,
      anon_sym_LBRACK,
  [13525] = 2,
    ACTIONS(1560), 1,
      sym_object_name,
    STATE(386), 1,
      sym_user_name,
  [13532] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(1262), 1,
      sym_column_list,
  [13539] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(1263), 1,
      sym_column_list,
  [13546] = 2,
    ACTIONS(1562), 1,
      sym__string_literal,
    ACTIONS(1564), 1,
      sym_object_name,
  [13553] = 2,
    ACTIONS(1566), 1,
      sym__string_literal,
    ACTIONS(1568), 1,
      sym_object_name,
  [13560] = 2,
    ACTIONS(1570), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1572), 1,
      sym_object_name,
  [13567] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(518), 1,
      sym_assignment_element,
  [13574] = 2,
    ACTIONS(1574), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1576), 1,
      sym_object_name,
  [13581] = 2,
    ACTIONS(1544), 1,
      aux_sym_role_with_options_token1,
    STATE(118), 1,
      sym_user_password,
  [13588] = 2,
    ACTIONS(1578), 1,
      sym__string_literal,
    STATE(357), 1,
      sym_trigger_class,
  [13595] = 2,
    ACTIONS(1580), 1,
      anon_sym_DOT,
    ACTIONS(1582), 1,
      aux_sym_select_element_token1,
  [13602] = 2,
    ACTIONS(1584), 1,
      sym_object_name,
    STATE(754), 1,
      sym_init_cond_hash_item,
  [13609] = 2,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    STATE(574), 1,
      sym_assignment_tuple,
  [13616] = 2,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_assignment_tuple,
  [13623] = 2,
    ACTIONS(1419), 1,
      sym__string_literal,
    STATE(760), 1,
      sym_replication_list_item,
  [13630] = 2,
    ACTIONS(1586), 1,
      sym_object_name,
    STATE(1137), 1,
      sym_table_name,
  [13637] = 2,
    ACTIONS(1289), 1,
      aux_sym_where_spec_token1,
    STATE(1294), 1,
      sym_materialized_view_where,
  [13644] = 2,
    ACTIONS(1588), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1590), 1,
      sym_object_name,
  [13651] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(1183), 1,
      sym_column_list,
  [13658] = 1,
    ACTIONS(1592), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13663] = 2,
    ACTIONS(1594), 1,
      sym_object_name,
    STATE(1056), 1,
      sym_clustering_key_list,
  [13670] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(1033), 1,
      sym_keyspace_name,
  [13677] = 1,
    ACTIONS(1514), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13682] = 2,
    ACTIONS(1289), 1,
      aux_sym_where_spec_token1,
    STATE(1178), 1,
      sym_materialized_view_where,
  [13689] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(1144), 1,
      sym_column_list,
  [13696] = 2,
    ACTIONS(1598), 1,
      aux_sym_durable_writes_token1,
    STATE(296), 1,
      sym_durable_writes,
  [13703] = 2,
    ACTIONS(1594), 1,
      sym_object_name,
    STATE(1157), 1,
      sym_clustering_key_list,
  [13710] = 1,
    ACTIONS(1482), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13715] = 1,
    ACTIONS(1489), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13720] = 2,
    ACTIONS(1544), 1,
      aux_sym_role_with_options_token1,
    STATE(105), 1,
      sym_user_password,
  [13727] = 1,
    ACTIONS(1475), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13732] = 2,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    STATE(172), 1,
      sym_where_spec,
  [13739] = 1,
    ACTIONS(1600), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13744] = 2,
    ACTIONS(1602), 1,
      sym_object_name,
    STATE(1018), 1,
      sym_trigger_name,
  [13751] = 1,
    ACTIONS(1604), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13756] = 1,
    ACTIONS(1606), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13761] = 1,
    ACTIONS(1608), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13766] = 1,
    ACTIONS(1610), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13771] = 1,
    ACTIONS(1468), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13776] = 1,
    ACTIONS(1612), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [13781] = 2,
    ACTIONS(1285), 1,
      sym_object_name,
    STATE(782), 1,
      sym_column_definition,
  [13788] = 2,
    ACTIONS(1614), 1,
      aux_sym_from_spec_token1,
    STATE(71), 1,
      sym_from_spec,
  [13795] = 2,
    ACTIONS(1586), 1,
      sym_object_name,
    STATE(478), 1,
      sym_table_name,
  [13802] = 2,
    ACTIONS(1614), 1,
      aux_sym_from_spec_token1,
    STATE(513), 1,
      sym_from_spec,
  [13809] = 1,
    ACTIONS(1616), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13814] = 2,
    ACTIONS(1618), 1,
      sym_object_name,
    STATE(242), 1,
      sym_role_name,
  [13821] = 1,
    ACTIONS(1463), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13826] = 2,
    ACTIONS(1560), 1,
      sym_object_name,
    STATE(1008), 1,
      sym_user_name,
  [13833] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(521), 1,
      sym_assignment_element,
  [13840] = 2,
    ACTIONS(1620), 1,
      sym_object_name,
    STATE(997), 1,
      sym_partition_key_list,
  [13847] = 1,
    ACTIONS(1452), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13852] = 2,
    ACTIONS(1578), 1,
      sym__string_literal,
    STATE(394), 1,
      sym_trigger_class,
  [13859] = 2,
    ACTIONS(1622), 1,
      anon_sym_COMMA,
    ACTIONS(1624), 1,
      anon_sym_RPAREN,
  [13866] = 2,
    ACTIONS(1626), 1,
      anon_sym_DOT,
    ACTIONS(1628), 1,
      aux_sym_select_element_token1,
  [13873] = 1,
    ACTIONS(1630), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13878] = 2,
    ACTIONS(1632), 1,
      anon_sym_DOT,
    ACTIONS(1634), 1,
      anon_sym_LPAREN,
  [13885] = 1,
    ACTIONS(1436), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13890] = 2,
    ACTIONS(1636), 1,
      anon_sym_DOT,
    ACTIONS(1638), 1,
      anon_sym_LPAREN,
  [13897] = 2,
    ACTIONS(1640), 1,
      sym__string_literal,
    STATE(633), 1,
      sym_option_hash_item,
  [13904] = 2,
    ACTIONS(1642), 1,
      anon_sym_DOT,
    ACTIONS(1644), 1,
      aux_sym_create_index_token3,
  [13911] = 2,
    ACTIONS(1646), 1,
      anon_sym_DOT,
    ACTIONS(1648), 1,
      aux_sym_create_index_token3,
  [13918] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(1321), 1,
      sym_column_list,
  [13925] = 1,
    ACTIONS(1650), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13930] = 1,
    ACTIONS(1441), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13935] = 2,
    ACTIONS(1598), 1,
      aux_sym_durable_writes_token1,
    STATE(268), 1,
      sym_durable_writes,
  [13942] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(529), 1,
      sym_assignment_element,
  [13949] = 2,
    ACTIONS(1166), 1,
      aux_sym_timestamp_token1,
    STATE(221), 1,
      sym_timestamp,
  [13956] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(507), 1,
      sym_assignment_element,
  [13963] = 2,
    ACTIONS(1652), 1,
      aux_sym_resource_token5,
    ACTIONS(1654), 1,
      aux_sym_drop_aggregate_token1,
  [13970] = 2,
    ACTIONS(1656), 1,
      anon_sym_DOT,
    ACTIONS(1658), 1,
      anon_sym_LPAREN,
  [13977] = 2,
    ACTIONS(1586), 1,
      sym_object_name,
    STATE(903), 1,
      sym_table_name,
  [13984] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(958), 1,
      sym_column_list,
  [13991] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(844), 1,
      sym_assignment_element,
  [13998] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(878), 1,
      sym_column_list,
  [14005] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(1338), 1,
      sym_column_list,
  [14012] = 2,
    ACTIONS(1660), 1,
      anon_sym_DOT,
    ACTIONS(1662), 1,
      aux_sym_using_timestamp_spec_token1,
  [14019] = 1,
    ACTIONS(1384), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14024] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(1339), 1,
      sym_column_list,
  [14031] = 1,
    ACTIONS(1394), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14036] = 2,
    ACTIONS(1664), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1666), 1,
      sym_object_name,
  [14043] = 2,
    ACTIONS(1668), 1,
      anon_sym_DOT,
    ACTIONS(1670), 1,
      anon_sym_LPAREN,
  [14050] = 2,
    ACTIONS(1550), 1,
      sym_object_name,
    STATE(502), 1,
      sym_column_not_null,
  [14057] = 2,
    ACTIONS(1672), 1,
      anon_sym_DOT,
    ACTIONS(1674), 1,
      anon_sym_LPAREN,
  [14064] = 2,
    ACTIONS(1676), 1,
      anon_sym_DOT,
    ACTIONS(1678), 1,
      anon_sym_LPAREN,
  [14071] = 1,
    ACTIONS(1680), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14076] = 2,
    ACTIONS(1586), 1,
      sym_object_name,
    STATE(1260), 1,
      sym_table_name,
  [14083] = 2,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    STATE(156), 1,
      sym_where_spec,
  [14090] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(495), 1,
      sym_assignment_element,
  [14097] = 2,
    ACTIONS(1682), 1,
      anon_sym_DOT,
    ACTIONS(1684), 1,
      anon_sym_LPAREN,
  [14104] = 2,
    ACTIONS(1686), 1,
      anon_sym_DOT,
    ACTIONS(1688), 1,
      anon_sym_LPAREN,
  [14111] = 1,
    ACTIONS(1354), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14116] = 2,
    ACTIONS(1690), 1,
      sym_object_name,
    STATE(211), 1,
      sym_if_condition,
  [14123] = 1,
    ACTIONS(1692), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [14128] = 2,
    ACTIONS(1694), 1,
      sym_object_name,
    STATE(734), 1,
      sym_delete_column_item,
  [14135] = 2,
    ACTIONS(1640), 1,
      sym__string_literal,
    STATE(695), 1,
      sym_option_hash_item,
  [14142] = 2,
    ACTIONS(118), 1,
      aux_sym_where_spec_token1,
    STATE(194), 1,
      sym_where_spec,
  [14149] = 2,
    ACTIONS(1166), 1,
      aux_sym_timestamp_token1,
    STATE(540), 1,
      sym_timestamp,
  [14156] = 1,
    ACTIONS(1696), 2,
      sym__string_literal,
      sym__decimal_literal,
  [14161] = 1,
    ACTIONS(1698), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14166] = 1,
    ACTIONS(1700), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14171] = 2,
    ACTIONS(1168), 1,
      aux_sym_ttl_token1,
    STATE(221), 1,
      sym_ttl,
  [14178] = 2,
    ACTIONS(1614), 1,
      aux_sym_from_spec_token1,
    STATE(75), 1,
      sym_from_spec,
  [14185] = 2,
    ACTIONS(1560), 1,
      sym_object_name,
    STATE(1288), 1,
      sym_user_name,
  [14192] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(1358), 1,
      sym_column_list,
  [14199] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(1290), 1,
      sym_keyspace_name,
  [14206] = 2,
    ACTIONS(1702), 1,
      anon_sym_DOT,
    ACTIONS(1704), 1,
      anon_sym_LPAREN,
  [14213] = 1,
    ACTIONS(1706), 2,
      sym__string_literal,
      sym__float_literal,
  [14218] = 2,
    ACTIONS(1708), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1710), 1,
      sym_object_name,
  [14225] = 2,
    ACTIONS(1712), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1714), 1,
      sym_object_name,
  [14232] = 2,
    ACTIONS(1716), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1718), 1,
      sym_object_name,
  [14239] = 2,
    ACTIONS(1720), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1722), 1,
      sym_object_name,
  [14246] = 2,
    ACTIONS(1724), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1726), 1,
      sym_object_name,
  [14253] = 2,
    ACTIONS(1728), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1730), 1,
      sym_object_name,
  [14260] = 2,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_assignment_tuple,
  [14267] = 2,
    ACTIONS(1732), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1734), 1,
      sym_object_name,
  [14274] = 2,
    ACTIONS(1586), 1,
      sym_object_name,
    STATE(952), 1,
      sym_table_name,
  [14281] = 2,
    ACTIONS(1736), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1738), 1,
      sym_object_name,
  [14288] = 2,
    ACTIONS(1740), 1,
      anon_sym_DOT,
    ACTIONS(1742), 1,
      anon_sym_LPAREN,
  [14295] = 2,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_assignment_tuple,
  [14302] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(524), 1,
      sym_assignment_element,
  [14309] = 1,
    ACTIONS(1744), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14314] = 2,
    ACTIONS(1746), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1748), 1,
      sym_object_name,
  [14321] = 2,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    STATE(665), 1,
      sym_assignment_tuple,
  [14328] = 2,
    ACTIONS(1750), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1752), 1,
      sym_object_name,
  [14335] = 2,
    ACTIONS(1754), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1756), 1,
      sym_object_name,
  [14342] = 2,
    ACTIONS(1234), 1,
      sym_object_name,
    STATE(767), 1,
      sym_param,
  [14349] = 2,
    ACTIONS(1289), 1,
      aux_sym_where_spec_token1,
    STATE(1079), 1,
      sym_materialized_view_where,
  [14356] = 2,
    ACTIONS(1758), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1760), 1,
      sym_object_name,
  [14363] = 2,
    ACTIONS(1586), 1,
      sym_object_name,
    STATE(272), 1,
      sym_table_name,
  [14370] = 2,
    ACTIONS(1586), 1,
      sym_object_name,
    STATE(476), 1,
      sym_table_name,
  [14377] = 2,
    ACTIONS(1524), 1,
      sym_object_name,
    STATE(206), 1,
      sym_alter_type_rename_item,
  [14384] = 2,
    ACTIONS(1122), 1,
      anon_sym_LBRACE,
    STATE(223), 1,
      sym_option_hash,
  [14391] = 2,
    ACTIONS(1614), 1,
      aux_sym_from_spec_token1,
    STATE(493), 1,
      sym_from_spec,
  [14398] = 2,
    ACTIONS(1762), 1,
      anon_sym_DOT,
    ACTIONS(1764), 1,
      anon_sym_LPAREN,
  [14405] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(1075), 1,
      sym_column_list,
  [14412] = 2,
    ACTIONS(1586), 1,
      sym_object_name,
    STATE(92), 1,
      sym_table_name,
  [14419] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(930), 1,
      sym_column_list,
  [14426] = 2,
    ACTIONS(1614), 1,
      aux_sym_from_spec_token1,
    STATE(70), 1,
      sym_from_spec,
  [14433] = 2,
    ACTIONS(1766), 1,
      anon_sym_DOT,
    ACTIONS(1768), 1,
      anon_sym_LPAREN,
  [14440] = 2,
    ACTIONS(1770), 1,
      sym__string_literal,
    ACTIONS(1772), 1,
      sym_object_name,
  [14447] = 1,
    ACTIONS(1407), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14452] = 1,
    ACTIONS(1182), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14457] = 1,
    ACTIONS(1774), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [14462] = 2,
    ACTIONS(1598), 1,
      aux_sym_durable_writes_token1,
    STATE(256), 1,
      sym_durable_writes,
  [14469] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(508), 1,
      sym_assignment_element,
  [14476] = 1,
    ACTIONS(1776), 2,
      sym__string_literal,
      sym__decimal_literal,
  [14481] = 1,
    ACTIONS(1778), 1,
      sym_object_name,
  [14485] = 1,
    ACTIONS(1780), 1,
      anon_sym_RPAREN,
  [14489] = 1,
    ACTIONS(1782), 1,
      anon_sym_LBRACE,
  [14493] = 1,
    ACTIONS(1784), 1,
      sym_object_name,
  [14497] = 1,
    ACTIONS(1786), 1,
      aux_sym_create_function_token1,
  [14501] = 1,
    ACTIONS(1788), 1,
      anon_sym_RPAREN,
  [14505] = 1,
    ACTIONS(1790), 1,
      anon_sym_RPAREN,
  [14509] = 1,
    ACTIONS(1792), 1,
      anon_sym_RPAREN,
  [14513] = 1,
    ACTIONS(1794), 1,
      aux_sym_create_function_token1,
  [14517] = 1,
    ACTIONS(1796), 1,
      aux_sym_order_spec_token2,
  [14521] = 1,
    ACTIONS(1798), 1,
      aux_sym_return_mode_token2,
  [14525] = 1,
    ACTIONS(1800), 1,
      aux_sym_create_function_token1,
  [14529] = 1,
    ACTIONS(1802), 1,
      sym_object_name,
  [14533] = 1,
    ACTIONS(1804), 1,
      aux_sym_create_function_token2,
  [14537] = 1,
    ACTIONS(1806), 1,
      aux_sym_select_statement_token5,
  [14541] = 1,
    ACTIONS(1808), 1,
      aux_sym_delete_statement_token3,
  [14545] = 1,
    ACTIONS(1810), 1,
      anon_sym_RBRACE,
  [14549] = 1,
    ACTIONS(1812), 1,
      sym_object_name,
  [14553] = 1,
    ACTIONS(1814), 1,
      sym_object_name,
  [14557] = 1,
    ACTIONS(1816), 1,
      sym_object_name,
  [14561] = 1,
    ACTIONS(1818), 1,
      aux_sym_create_aggregate_token3,
  [14565] = 1,
    ACTIONS(1820), 1,
      sym_object_name,
  [14569] = 1,
    ACTIONS(1822), 1,
      aux_sym_create_aggregate_token3,
  [14573] = 1,
    ACTIONS(1824), 1,
      aux_sym_create_function_token1,
  [14577] = 1,
    ACTIONS(1826), 1,
      anon_sym_LPAREN,
  [14581] = 1,
    ACTIONS(1828), 1,
      sym_object_name,
  [14585] = 1,
    ACTIONS(1830), 1,
      aux_sym_select_element_token1,
  [14589] = 1,
    ACTIONS(1832), 1,
      aux_sym_select_statement_token1,
  [14593] = 1,
    ACTIONS(1834), 1,
      aux_sym_from_spec_token1,
  [14597] = 1,
    ACTIONS(1836), 1,
      anon_sym_RPAREN,
  [14601] = 1,
    ACTIONS(1838), 1,
      sym_object_name,
  [14605] = 1,
    ACTIONS(1840), 1,
      aux_sym_create_aggregate_token4,
  [14609] = 1,
    ACTIONS(1842), 1,
      aux_sym_create_aggregate_token3,
  [14613] = 1,
    ACTIONS(1844), 1,
      anon_sym_RPAREN,
  [14617] = 1,
    ACTIONS(1846), 1,
      anon_sym_LPAREN,
  [14621] = 1,
    ACTIONS(1848), 1,
      anon_sym_COLON,
  [14625] = 1,
    ACTIONS(1850), 1,
      sym_object_name,
  [14629] = 1,
    ACTIONS(1852), 1,
      aux_sym_create_function_token1,
  [14633] = 1,
    ACTIONS(1854), 1,
      aux_sym_create_function_token2,
  [14637] = 1,
    ACTIONS(1856), 1,
      aux_sym_return_mode_token2,
  [14641] = 1,
    ACTIONS(1858), 1,
      aux_sym_constant_token2,
  [14645] = 1,
    ACTIONS(1860), 1,
      aux_sym_create_function_token1,
  [14649] = 1,
    ACTIONS(1862), 1,
      aux_sym_create_function_token1,
  [14653] = 1,
    ACTIONS(1864), 1,
      sym_object_name,
  [14657] = 1,
    ACTIONS(1866), 1,
      anon_sym_LPAREN,
  [14661] = 1,
    ACTIONS(1868), 1,
      anon_sym_RPAREN,
  [14665] = 1,
    ACTIONS(1870), 1,
      sym_object_name,
  [14669] = 1,
    ACTIONS(1872), 1,
      anon_sym_RBRACE,
  [14673] = 1,
    ACTIONS(1874), 1,
      anon_sym_COLON,
  [14677] = 1,
    ACTIONS(1876), 1,
      anon_sym_EQ,
  [14681] = 1,
    ACTIONS(1878), 1,
      anon_sym_RPAREN,
  [14685] = 1,
    ACTIONS(1880), 1,
      anon_sym_RPAREN,
  [14689] = 1,
    ACTIONS(1882), 1,
      anon_sym_RPAREN,
  [14693] = 1,
    ACTIONS(1884), 1,
      anon_sym_LPAREN,
  [14697] = 1,
    ACTIONS(1886), 1,
      anon_sym_RPAREN,
  [14701] = 1,
    ACTIONS(1888), 1,
      anon_sym_LPAREN,
  [14705] = 1,
    ACTIONS(1890), 1,
      aux_sym_order_spec_token1,
  [14709] = 1,
    ACTIONS(1892), 1,
      anon_sym_RPAREN,
  [14713] = 1,
    ACTIONS(1894), 1,
      anon_sym_LPAREN,
  [14717] = 1,
    ACTIONS(1896), 1,
      anon_sym_LPAREN,
  [14721] = 1,
    ACTIONS(1898), 1,
      aux_sym_select_statement_token5,
  [14725] = 1,
    ACTIONS(1900), 1,
      aux_sym_insert_statement_token3,
  [14729] = 1,
    ACTIONS(1902), 1,
      sym_object_name,
  [14733] = 1,
    ACTIONS(1904), 1,
      sym_object_name,
  [14737] = 1,
    ACTIONS(1906), 1,
      anon_sym_EQ,
  [14741] = 1,
    ACTIONS(1043), 1,
      sym_object_name,
  [14745] = 1,
    ACTIONS(1908), 1,
      aux_sym_create_index_token3,
  [14749] = 1,
    ACTIONS(1910), 1,
      sym_object_name,
  [14753] = 1,
    ACTIONS(1912), 1,
      anon_sym_RPAREN,
  [14757] = 1,
    ACTIONS(1914), 1,
      anon_sym_LPAREN,
  [14761] = 1,
    ACTIONS(1916), 1,
      sym_object_name,
  [14765] = 1,
    ACTIONS(1918), 1,
      anon_sym_LPAREN,
  [14769] = 1,
    ACTIONS(1920), 1,
      sym_object_name,
  [14773] = 1,
    ACTIONS(1922), 1,
      anon_sym_RPAREN,
  [14777] = 1,
    ACTIONS(1924), 1,
      sym_object_name,
  [14781] = 1,
    ACTIONS(1926), 1,
      anon_sym_LPAREN,
  [14785] = 1,
    ACTIONS(1928), 1,
      sym_object_name,
  [14789] = 1,
    ACTIONS(1930), 1,
      sym_object_name,
  [14793] = 1,
    ACTIONS(1932), 1,
      anon_sym_RPAREN,
  [14797] = 1,
    ACTIONS(1934), 1,
      anon_sym_RPAREN,
  [14801] = 1,
    ACTIONS(1936), 1,
      aux_sym_from_spec_token1,
  [14805] = 1,
    ACTIONS(1938), 1,
      anon_sym_RPAREN,
  [14809] = 1,
    ACTIONS(1940), 1,
      aux_sym_select_statement_token1,
  [14813] = 1,
    ACTIONS(1942), 1,
      sym_object_name,
  [14817] = 1,
    ACTIONS(1944), 1,
      sym_object_name,
  [14821] = 1,
    ACTIONS(1946), 1,
      sym_object_name,
  [14825] = 1,
    ACTIONS(1948), 1,
      aux_sym_create_function_token1,
  [14829] = 1,
    ACTIONS(1950), 1,
      aux_sym_constant_token2,
  [14833] = 1,
    ACTIONS(1952), 1,
      aux_sym_create_index_token3,
  [14837] = 1,
    ACTIONS(1954), 1,
      sym_object_name,
  [14841] = 1,
    ACTIONS(1956), 1,
      aux_sym_create_function_token1,
  [14845] = 1,
    ACTIONS(1958), 1,
      aux_sym_create_keyspace_token1,
  [14849] = 1,
    ACTIONS(1960), 1,
      aux_sym_create_function_token2,
  [14853] = 1,
    ACTIONS(1962), 1,
      anon_sym_RPAREN,
  [14857] = 1,
    ACTIONS(1964), 1,
      aux_sym_create_function_token1,
  [14861] = 1,
    ACTIONS(1966), 1,
      aux_sym_create_function_token1,
  [14865] = 1,
    ACTIONS(1968), 1,
      aux_sym_select_element_token1,
  [14869] = 1,
    ACTIONS(1970), 1,
      sym_object_name,
  [14873] = 1,
    ACTIONS(1972), 1,
      aux_sym_create_function_token2,
  [14877] = 1,
    ACTIONS(1974), 1,
      sym_object_name,
  [14881] = 1,
    ACTIONS(1976), 1,
      sym_object_name,
  [14885] = 1,
    ACTIONS(1978), 1,
      sym_object_name,
  [14889] = 1,
    ACTIONS(1980), 1,
      anon_sym_LPAREN,
  [14893] = 1,
    ACTIONS(1982), 1,
      anon_sym_RPAREN,
  [14897] = 1,
    ACTIONS(1984), 1,
      sym_object_name,
  [14901] = 1,
    ACTIONS(1986), 1,
      aux_sym_create_aggregate_token4,
  [14905] = 1,
    ACTIONS(1988), 1,
      aux_sym_create_aggregate_token5,
  [14909] = 1,
    ACTIONS(1990), 1,
      aux_sym_select_statement_token1,
  [14913] = 1,
    ACTIONS(1992), 1,
      aux_sym_from_spec_token1,
  [14917] = 1,
    ACTIONS(1994), 1,
      sym_object_name,
  [14921] = 1,
    ACTIONS(1996), 1,
      sym_object_name,
  [14925] = 1,
    ACTIONS(1998), 1,
      anon_sym_RPAREN,
  [14929] = 1,
    ACTIONS(2000), 1,
      aux_sym_create_materialized_view_token1,
  [14933] = 1,
    ACTIONS(2002), 1,
      aux_sym_relation_contains_key_token2,
  [14937] = 1,
    ACTIONS(2004), 1,
      aux_sym_relation_contains_key_token2,
  [14941] = 1,
    ACTIONS(2006), 1,
      anon_sym_RPAREN,
  [14945] = 1,
    ACTIONS(2008), 1,
      sym_object_name,
  [14949] = 1,
    ACTIONS(2010), 1,
      anon_sym_LPAREN,
  [14953] = 1,
    ACTIONS(2012), 1,
      aux_sym_delete_statement_token3,
  [14957] = 1,
    ACTIONS(2014), 1,
      anon_sym_RPAREN,
  [14961] = 1,
    ACTIONS(2016), 1,
      aux_sym_create_function_token1,
  [14965] = 1,
    ACTIONS(2018), 1,
      anon_sym_LPAREN,
  [14969] = 1,
    ACTIONS(2020), 1,
      aux_sym_select_statement_token5,
  [14973] = 1,
    ACTIONS(2022), 1,
      aux_sym_create_function_token2,
  [14977] = 1,
    ACTIONS(2024), 1,
      aux_sym_update_token2,
  [14981] = 1,
    ACTIONS(2026), 1,
      aux_sym_create_function_token1,
  [14985] = 1,
    ACTIONS(2028), 1,
      anon_sym_LPAREN,
  [14989] = 1,
    ACTIONS(2030), 1,
      anon_sym_RPAREN,
  [14993] = 1,
    ACTIONS(2032), 1,
      aux_sym_create_aggregate_token3,
  [14997] = 1,
    ACTIONS(2034), 1,
      aux_sym_create_aggregate_token4,
  [15001] = 1,
    ACTIONS(2036), 1,
      sym_object_name,
  [15005] = 1,
    ACTIONS(2038), 1,
      aux_sym_delete_statement_token3,
  [15009] = 1,
    ACTIONS(2040), 1,
      anon_sym_LBRACE,
  [15013] = 1,
    ACTIONS(2042), 1,
      sym_object_name,
  [15017] = 1,
    ACTIONS(2044), 1,
      sym_object_name,
  [15021] = 1,
    ACTIONS(2046), 1,
      aux_sym_resource_token2,
  [15025] = 1,
    ACTIONS(2048), 1,
      sym_object_name,
  [15029] = 1,
    ACTIONS(2050), 1,
      anon_sym_RBRACK,
  [15033] = 1,
    ACTIONS(2052), 1,
      sym_object_name,
  [15037] = 1,
    ACTIONS(2054), 1,
      sym_object_name,
  [15041] = 1,
    ACTIONS(2056), 1,
      sym_object_name,
  [15045] = 1,
    ACTIONS(2058), 1,
      anon_sym_COLON,
  [15049] = 1,
    ACTIONS(2060), 1,
      sym_object_name,
  [15053] = 1,
    ACTIONS(2062), 1,
      sym_object_name,
  [15057] = 1,
    ACTIONS(2064), 1,
      sym_object_name,
  [15061] = 1,
    ACTIONS(2066), 1,
      sym_object_name,
  [15065] = 1,
    ACTIONS(2068), 1,
      sym_object_name,
  [15069] = 1,
    ACTIONS(2070), 1,
      anon_sym_RPAREN,
  [15073] = 1,
    ACTIONS(2072), 1,
      sym_object_name,
  [15077] = 1,
    ACTIONS(2074), 1,
      anon_sym_RPAREN,
  [15081] = 1,
    ACTIONS(2076), 1,
      sym_object_name,
  [15085] = 1,
    ACTIONS(2078), 1,
      anon_sym_RBRACE,
  [15089] = 1,
    ACTIONS(2080), 1,
      anon_sym_EQ,
  [15093] = 1,
    ACTIONS(2082), 1,
      aux_sym_delete_statement_token3,
  [15097] = 1,
    ACTIONS(2084), 1,
      aux_sym_create_function_token1,
  [15101] = 1,
    ACTIONS(2086), 1,
      sym_object_name,
  [15105] = 1,
    ACTIONS(2088), 1,
      sym__decimal_literal,
  [15109] = 1,
    ACTIONS(2090), 1,
      aux_sym_create_function_token2,
  [15113] = 1,
    ACTIONS(2092), 1,
      aux_sym_materialized_view_options_token1,
  [15117] = 1,
    ACTIONS(2094), 1,
      aux_sym_create_function_token1,
  [15121] = 1,
    ACTIONS(2096), 1,
      sym_object_name,
  [15125] = 1,
    ACTIONS(2098), 1,
      aux_sym_create_function_token2,
  [15129] = 1,
    ACTIONS(2100), 1,
      sym_object_name,
  [15133] = 1,
    ACTIONS(2102), 1,
      sym__code_block,
  [15137] = 1,
    ACTIONS(2104), 1,
      aux_sym_select_element_token1,
  [15141] = 1,
    ACTIONS(2106), 1,
      sym_object_name,
  [15145] = 1,
    ACTIONS(2108), 1,
      aux_sym_create_aggregate_token3,
  [15149] = 1,
    ACTIONS(2110), 1,
      aux_sym_create_aggregate_token4,
  [15153] = 1,
    ACTIONS(2112), 1,
      aux_sym_using_timestamp_spec_token1,
  [15157] = 1,
    ACTIONS(2114), 1,
      sym_object_name,
  [15161] = 1,
    ACTIONS(2116), 1,
      aux_sym_select_element_token1,
  [15165] = 1,
    ACTIONS(2118), 1,
      sym_object_name,
  [15169] = 1,
    ACTIONS(2120), 1,
      sym_object_name,
  [15173] = 1,
    ACTIONS(2122), 1,
      aux_sym_create_aggregate_token3,
  [15177] = 1,
    ACTIONS(963), 1,
      aux_sym_column_not_null_token1,
  [15181] = 1,
    ACTIONS(2124), 1,
      sym__boolean_literal,
  [15185] = 1,
    ACTIONS(2126), 1,
      aux_sym_relation_contains_key_token2,
  [15189] = 1,
    ACTIONS(2124), 1,
      sym__string_literal,
  [15193] = 1,
    ACTIONS(2128), 1,
      aux_sym_create_function_token1,
  [15197] = 1,
    ACTIONS(2130), 1,
      aux_sym_create_index_token3,
  [15201] = 1,
    ACTIONS(2132), 1,
      aux_sym_create_function_token1,
  [15205] = 1,
    ACTIONS(2134), 1,
      aux_sym_constant_token2,
  [15209] = 1,
    ACTIONS(2136), 1,
      anon_sym_LBRACE,
  [15213] = 1,
    ACTIONS(2138), 1,
      aux_sym_materialized_view_options_token1,
  [15217] = 1,
    ACTIONS(2140), 1,
      aux_sym_create_function_token1,
  [15221] = 1,
    ACTIONS(2142), 1,
      anon_sym_RPAREN,
  [15225] = 1,
    ACTIONS(2144), 1,
      sym_object_name,
  [15229] = 1,
    ACTIONS(2146), 1,
      aux_sym_create_function_token2,
  [15233] = 1,
    ACTIONS(2148), 1,
      anon_sym_RPAREN,
  [15237] = 1,
    ACTIONS(2150), 1,
      anon_sym_RPAREN,
  [15241] = 1,
    ACTIONS(2152), 1,
      aux_sym_create_aggregate_token3,
  [15245] = 1,
    ACTIONS(2154), 1,
      sym_object_name,
  [15249] = 1,
    ACTIONS(2156), 1,
      anon_sym_LPAREN,
  [15253] = 1,
    ACTIONS(2158), 1,
      anon_sym_LPAREN,
  [15257] = 1,
    ACTIONS(2160), 1,
      anon_sym_LPAREN,
  [15261] = 1,
    ACTIONS(2162), 1,
      aux_sym_create_index_token3,
  [15265] = 1,
    ACTIONS(2164), 1,
      aux_sym_delete_statement_token3,
  [15269] = 1,
    ACTIONS(2166), 1,
      aux_sym_insert_statement_token3,
  [15273] = 1,
    ACTIONS(2168), 1,
      anon_sym_RPAREN,
  [15277] = 1,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
  [15281] = 1,
    ACTIONS(2170), 1,
      sym_object_name,
  [15285] = 1,
    ACTIONS(2172), 1,
      aux_sym_select_statement_token5,
  [15289] = 1,
    ACTIONS(2174), 1,
      sym_object_name,
  [15293] = 1,
    ACTIONS(2176), 1,
      sym_object_name,
  [15297] = 1,
    ACTIONS(2178), 1,
      anon_sym_COMMA,
  [15301] = 1,
    ACTIONS(2180), 1,
      aux_sym_grant_token2,
  [15305] = 1,
    ACTIONS(2182), 1,
      anon_sym_RPAREN,
  [15309] = 1,
    ACTIONS(2184), 1,
      aux_sym_drop_type_token1,
  [15313] = 1,
    ACTIONS(2186), 1,
      sym__boolean_literal,
  [15317] = 1,
    ACTIONS(2188), 1,
      sym_object_name,
  [15321] = 1,
    ACTIONS(2190), 1,
      aux_sym_create_function_token1,
  [15325] = 1,
    ACTIONS(2192), 1,
      anon_sym_EQ,
  [15329] = 1,
    ACTIONS(2194), 1,
      sym_object_name,
  [15333] = 1,
    ACTIONS(2196), 1,
      aux_sym_create_function_token2,
  [15337] = 1,
    ACTIONS(2198), 1,
      aux_sym_grant_token2,
  [15341] = 1,
    ACTIONS(2200), 1,
      aux_sym_select_element_token1,
  [15345] = 1,
    ACTIONS(2202), 1,
      sym_object_name,
  [15349] = 1,
    ACTIONS(2204), 1,
      aux_sym_create_function_token2,
  [15353] = 1,
    ACTIONS(2206), 1,
      anon_sym_EQ,
  [15357] = 1,
    ACTIONS(2208), 1,
      sym__code_block,
  [15361] = 1,
    ACTIONS(2210), 1,
      aux_sym_select_element_token1,
  [15365] = 1,
    ACTIONS(2212), 1,
      sym_object_name,
  [15369] = 1,
    ACTIONS(2214), 1,
      anon_sym_EQ,
  [15373] = 1,
    ACTIONS(2216), 1,
      aux_sym_create_aggregate_token5,
  [15377] = 1,
    ACTIONS(2218), 1,
      aux_sym_create_aggregate_token6,
  [15381] = 1,
    ACTIONS(2220), 1,
      aux_sym_from_spec_token1,
  [15385] = 1,
    ACTIONS(2222), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [15389] = 1,
    ACTIONS(2224), 1,
      sym_object_name,
  [15393] = 1,
    ACTIONS(2226), 1,
      aux_sym_create_materialized_view_token1,
  [15397] = 1,
    ACTIONS(2228), 1,
      aux_sym_create_materialized_view_token1,
  [15401] = 1,
    ACTIONS(2230), 1,
      aux_sym_insert_statement_token3,
  [15405] = 1,
    ACTIONS(2232), 1,
      sym_object_name,
  [15409] = 1,
    ACTIONS(2234), 1,
      sym_object_name,
  [15413] = 1,
    ACTIONS(2236), 1,
      sym_object_name,
  [15417] = 1,
    ACTIONS(2238), 1,
      anon_sym_LPAREN,
  [15421] = 1,
    ACTIONS(2240), 1,
      aux_sym_delete_statement_token3,
  [15425] = 1,
    ACTIONS(2242), 1,
      aux_sym_update_token2,
  [15429] = 1,
    ACTIONS(2244), 1,
      aux_sym_create_index_token3,
  [15433] = 1,
    ACTIONS(2246), 1,
      sym_object_name,
  [15437] = 1,
    ACTIONS(2248), 1,
      sym_object_name,
  [15441] = 1,
    ACTIONS(2250), 1,
      aux_sym_create_function_token1,
  [15445] = 1,
    ACTIONS(2252), 1,
      aux_sym_insert_statement_token3,
  [15449] = 1,
    ACTIONS(2254), 1,
      aux_sym_create_function_token2,
  [15453] = 1,
    ACTIONS(2256), 1,
      aux_sym_insert_statement_token3,
  [15457] = 1,
    ACTIONS(2258), 1,
      aux_sym_create_function_token1,
  [15461] = 1,
    ACTIONS(2260), 1,
      aux_sym_select_element_token1,
  [15465] = 1,
    ACTIONS(2262), 1,
      sym_object_name,
  [15469] = 1,
    ACTIONS(2264), 1,
      aux_sym_create_function_token2,
  [15473] = 1,
    ACTIONS(2266), 1,
      anon_sym_RPAREN,
  [15477] = 1,
    ACTIONS(2268), 1,
      sym_object_name,
  [15481] = 1,
    ACTIONS(2270), 1,
      aux_sym_create_aggregate_token4,
  [15485] = 1,
    ACTIONS(2272), 1,
      aux_sym_create_aggregate_token5,
  [15489] = 1,
    ACTIONS(2274), 1,
      sym__string_literal,
  [15493] = 1,
    ACTIONS(2276), 1,
      anon_sym_LPAREN,
  [15497] = 1,
    ACTIONS(2278), 1,
      sym_object_name,
  [15501] = 1,
    ACTIONS(2280), 1,
      anon_sym_RPAREN,
  [15505] = 1,
    ACTIONS(2282), 1,
      aux_sym_using_timestamp_spec_token1,
  [15509] = 1,
    ACTIONS(2284), 1,
      aux_sym_select_statement_token1,
  [15513] = 1,
    ACTIONS(2286), 1,
      sym_object_name,
  [15517] = 1,
    ACTIONS(2288), 1,
      sym_object_name,
  [15521] = 1,
    ACTIONS(2290), 1,
      anon_sym_RPAREN,
  [15525] = 1,
    ACTIONS(2292), 1,
      anon_sym_LPAREN,
  [15529] = 1,
    ACTIONS(2294), 1,
      aux_sym_create_function_token2,
  [15533] = 1,
    ACTIONS(2296), 1,
      sym_object_name,
  [15537] = 1,
    ACTIONS(2298), 1,
      aux_sym_create_function_token1,
  [15541] = 1,
    ACTIONS(2300), 1,
      aux_sym_select_element_token1,
  [15545] = 1,
    ACTIONS(2302), 1,
      sym_object_name,
  [15549] = 1,
    ACTIONS(2304), 1,
      aux_sym_create_function_token2,
  [15553] = 1,
    ACTIONS(2306), 1,
      sym__code_block,
  [15557] = 1,
    ACTIONS(2308), 1,
      aux_sym_select_element_token1,
  [15561] = 1,
    ACTIONS(2310), 1,
      sym_object_name,
  [15565] = 1,
    ACTIONS(2312), 1,
      anon_sym_EQ,
  [15569] = 1,
    ACTIONS(2314), 1,
      sym__code_block,
  [15573] = 1,
    ACTIONS(2316), 1,
      aux_sym_create_aggregate_token4,
  [15577] = 1,
    ACTIONS(2318), 1,
      aux_sym_create_aggregate_token5,
  [15581] = 1,
    ACTIONS(2320), 1,
      sym_object_name,
  [15585] = 1,
    ACTIONS(2322), 1,
      anon_sym_EQ,
  [15589] = 1,
    ACTIONS(2324), 1,
      sym_object_name,
  [15593] = 1,
    ACTIONS(2326), 1,
      sym_object_name,
  [15597] = 1,
    ACTIONS(2328), 1,
      aux_sym_create_materialized_view_token1,
  [15601] = 1,
    ACTIONS(2330), 1,
      anon_sym_EQ,
  [15605] = 1,
    ACTIONS(2332), 1,
      aux_sym_relation_contains_key_token2,
  [15609] = 1,
    ACTIONS(2334), 1,
      aux_sym_relation_contains_key_token2,
  [15613] = 1,
    ACTIONS(2336), 1,
      aux_sym_constant_token2,
  [15617] = 1,
    ACTIONS(2338), 1,
      anon_sym_LPAREN,
  [15621] = 1,
    ACTIONS(2340), 1,
      sym_object_name,
  [15625] = 1,
    ACTIONS(2342), 1,
      anon_sym_EQ,
  [15629] = 1,
    ACTIONS(2344), 1,
      anon_sym_LPAREN,
  [15633] = 1,
    ACTIONS(2346), 1,
      anon_sym_RPAREN,
  [15637] = 1,
    ACTIONS(2348), 1,
      anon_sym_LPAREN,
  [15641] = 1,
    ACTIONS(2350), 1,
      aux_sym_create_function_token1,
  [15645] = 1,
    ACTIONS(2352), 1,
      sym_object_name,
  [15649] = 1,
    ACTIONS(2354), 1,
      aux_sym_insert_statement_token3,
  [15653] = 1,
    ACTIONS(2356), 1,
      aux_sym_create_function_token2,
  [15657] = 1,
    ACTIONS(2358), 1,
      anon_sym_RPAREN,
  [15661] = 1,
    ACTIONS(2360), 1,
      aux_sym_create_function_token1,
  [15665] = 1,
    ACTIONS(2362), 1,
      sym_object_name,
  [15669] = 1,
    ACTIONS(2364), 1,
      aux_sym_create_function_token2,
  [15673] = 1,
    ACTIONS(2366), 1,
      anon_sym_EQ,
  [15677] = 1,
    ACTIONS(2368), 1,
      sym__code_block,
  [15681] = 1,
    ACTIONS(2370), 1,
      aux_sym_select_element_token1,
  [15685] = 1,
    ACTIONS(2372), 1,
      sym_object_name,
  [15689] = 1,
    ACTIONS(2374), 1,
      aux_sym_create_aggregate_token3,
  [15693] = 1,
    ACTIONS(2376), 1,
      aux_sym_create_aggregate_token4,
  [15697] = 1,
    ACTIONS(2378), 1,
      anon_sym_LPAREN,
  [15701] = 1,
    ACTIONS(2380), 1,
      sym_object_name,
  [15705] = 1,
    ACTIONS(2382), 1,
      sym_object_name,
  [15709] = 1,
    ACTIONS(2384), 1,
      anon_sym_RPAREN,
  [15713] = 1,
    ACTIONS(2386), 1,
      aux_sym_select_statement_token5,
  [15717] = 1,
    ACTIONS(2388), 1,
      sym_object_name,
  [15721] = 1,
    ACTIONS(2390), 1,
      aux_sym_create_function_token2,
  [15725] = 1,
    ACTIONS(2392), 1,
      aux_sym_update_token2,
  [15729] = 1,
    ACTIONS(2394), 1,
      sym__code_block,
  [15733] = 1,
    ACTIONS(2396), 1,
      aux_sym_select_element_token1,
  [15737] = 1,
    ACTIONS(2398), 1,
      sym_object_name,
  [15741] = 1,
    ACTIONS(2400), 1,
      sym_object_name,
  [15745] = 1,
    ACTIONS(2402), 1,
      sym__code_block,
  [15749] = 1,
    ACTIONS(2404), 1,
      aux_sym_select_element_token1,
  [15753] = 1,
    ACTIONS(2406), 1,
      sym_object_name,
  [15757] = 1,
    ACTIONS(2408), 1,
      sym_object_name,
  [15761] = 1,
    ACTIONS(2410), 1,
      sym_object_name,
  [15765] = 1,
    ACTIONS(2412), 1,
      aux_sym_create_aggregate_token6,
  [15769] = 1,
    ACTIONS(2414), 1,
      sym_object_name,
  [15773] = 1,
    ACTIONS(2416), 1,
      aux_sym_create_keyspace_token1,
  [15777] = 1,
    ACTIONS(2418), 1,
      sym_object_name,
  [15781] = 1,
    ACTIONS(2420), 1,
      sym_object_name,
  [15785] = 1,
    ACTIONS(2422), 1,
      aux_sym_from_spec_token1,
  [15789] = 1,
    ACTIONS(2424), 1,
      aux_sym_relation_contains_key_token2,
  [15793] = 1,
    ACTIONS(2426), 1,
      aux_sym_create_materialized_view_token1,
  [15797] = 1,
    ACTIONS(2428), 1,
      anon_sym_LPAREN,
  [15801] = 1,
    ACTIONS(2430), 1,
      anon_sym_LPAREN,
  [15805] = 1,
    ACTIONS(2432), 1,
      aux_sym_grant_token2,
  [15809] = 1,
    ACTIONS(2434), 1,
      sym_object_name,
  [15813] = 1,
    ACTIONS(2436), 1,
      anon_sym_RPAREN,
  [15817] = 1,
    ACTIONS(2438), 1,
      sym_object_name,
  [15821] = 1,
    ACTIONS(2440), 1,
      aux_sym_create_function_token1,
  [15825] = 1,
    ACTIONS(2442), 1,
      sym_object_name,
  [15829] = 1,
    ACTIONS(2444), 1,
      sym_object_name,
  [15833] = 1,
    ACTIONS(2446), 1,
      aux_sym_create_function_token2,
  [15837] = 1,
    ACTIONS(2448), 1,
      sym_object_name,
  [15841] = 1,
    ACTIONS(2450), 1,
      aux_sym_select_element_token1,
  [15845] = 1,
    ACTIONS(2452), 1,
      sym_object_name,
  [15849] = 1,
    ACTIONS(2454), 1,
      aux_sym_create_function_token2,
  [15853] = 1,
    ACTIONS(2456), 1,
      sym__decimal_literal,
  [15857] = 1,
    ACTIONS(2458), 1,
      sym__code_block,
  [15861] = 1,
    ACTIONS(2460), 1,
      aux_sym_select_element_token1,
  [15865] = 1,
    ACTIONS(2462), 1,
      sym_object_name,
  [15869] = 1,
    ACTIONS(2464), 1,
      sym_object_name,
  [15873] = 1,
    ACTIONS(2466), 1,
      aux_sym_create_aggregate_token5,
  [15877] = 1,
    ACTIONS(2468), 1,
      aux_sym_create_aggregate_token6,
  [15881] = 1,
    ACTIONS(2470), 1,
      aux_sym_select_element_token1,
  [15885] = 1,
    ACTIONS(2472), 1,
      sym_object_name,
  [15889] = 1,
    ACTIONS(2474), 1,
      aux_sym_create_function_token2,
  [15893] = 1,
    ACTIONS(2476), 1,
      sym_object_name,
  [15897] = 1,
    ACTIONS(2478), 1,
      sym__code_block,
  [15901] = 1,
    ACTIONS(2480), 1,
      aux_sym_select_element_token1,
  [15905] = 1,
    ACTIONS(2482), 1,
      sym_object_name,
  [15909] = 1,
    ACTIONS(2484), 1,
      sym__code_block,
  [15913] = 1,
    ACTIONS(2486), 1,
      aux_sym_create_aggregate_token5,
  [15917] = 1,
    ACTIONS(2488), 1,
      aux_sym_create_aggregate_token6,
  [15921] = 1,
    ACTIONS(2490), 1,
      sym_object_name,
  [15925] = 1,
    ACTIONS(2492), 1,
      sym_object_name,
  [15929] = 1,
    ACTIONS(2494), 1,
      anon_sym_COLON,
  [15933] = 1,
    ACTIONS(2496), 1,
      aux_sym_delete_statement_token3,
  [15937] = 1,
    ACTIONS(2498), 1,
      sym_object_name,
  [15941] = 1,
    ACTIONS(2500), 1,
      sym_object_name,
  [15945] = 1,
    ACTIONS(2502), 1,
      sym_object_name,
  [15949] = 1,
    ACTIONS(2504), 1,
      aux_sym_create_materialized_view_token1,
  [15953] = 1,
    ACTIONS(2506), 1,
      aux_sym_create_materialized_view_token1,
  [15957] = 1,
    ACTIONS(2508), 1,
      anon_sym_LPAREN,
  [15961] = 1,
    ACTIONS(2510), 1,
      aux_sym_relation_contains_key_token2,
  [15965] = 1,
    ACTIONS(2512), 1,
      sym_object_name,
  [15969] = 1,
    ACTIONS(2514), 1,
      sym_object_name,
  [15973] = 1,
    ACTIONS(2516), 1,
      sym_object_name,
  [15977] = 1,
    ACTIONS(2518), 1,
      aux_sym_create_function_token2,
  [15981] = 1,
    ACTIONS(2520), 1,
      sym_object_name,
  [15985] = 1,
    ACTIONS(2522), 1,
      aux_sym_create_function_token1,
  [15989] = 1,
    ACTIONS(2524), 1,
      aux_sym_select_element_token1,
  [15993] = 1,
    ACTIONS(2526), 1,
      sym_object_name,
  [15997] = 1,
    ACTIONS(2528), 1,
      aux_sym_create_function_token2,
  [16001] = 1,
    ACTIONS(2530), 1,
      sym__code_block,
  [16005] = 1,
    ACTIONS(2532), 1,
      aux_sym_select_element_token1,
  [16009] = 1,
    ACTIONS(2534), 1,
      sym_object_name,
  [16013] = 1,
    ACTIONS(2536), 1,
      sym_object_name,
  [16017] = 1,
    ACTIONS(2538), 1,
      sym__code_block,
  [16021] = 1,
    ACTIONS(2540), 1,
      aux_sym_create_aggregate_token4,
  [16025] = 1,
    ACTIONS(2542), 1,
      aux_sym_create_aggregate_token5,
  [16029] = 1,
    ACTIONS(2544), 1,
      sym_object_name,
  [16033] = 1,
    ACTIONS(2546), 1,
      aux_sym_delete_statement_token3,
  [16037] = 1,
    ACTIONS(2548), 1,
      sym__code_block,
  [16041] = 1,
    ACTIONS(2550), 1,
      aux_sym_select_element_token1,
  [16045] = 1,
    ACTIONS(2552), 1,
      sym_object_name,
  [16049] = 1,
    ACTIONS(2554), 1,
      aux_sym_delete_statement_token3,
  [16053] = 1,
    ACTIONS(2556), 1,
      sym__code_block,
  [16057] = 1,
    ACTIONS(2558), 1,
      sym_object_name,
  [16061] = 1,
    ACTIONS(2560), 1,
      sym_object_name,
  [16065] = 1,
    ACTIONS(2562), 1,
      sym_object_name,
  [16069] = 1,
    ACTIONS(2564), 1,
      aux_sym_delete_statement_token3,
  [16073] = 1,
    ACTIONS(2566), 1,
      sym_object_name,
  [16077] = 1,
    ACTIONS(2568), 1,
      aux_sym_delete_statement_token3,
  [16081] = 1,
    ACTIONS(2570), 1,
      aux_sym_insert_statement_token3,
  [16085] = 1,
    ACTIONS(2572), 1,
      sym_object_name,
  [16089] = 1,
    ACTIONS(2574), 1,
      aux_sym_delete_statement_token3,
  [16093] = 1,
    ACTIONS(2576), 1,
      aux_sym_delete_statement_token3,
  [16097] = 1,
    ACTIONS(2578), 1,
      sym_object_name,
  [16101] = 1,
    ACTIONS(2580), 1,
      aux_sym_delete_statement_token3,
  [16105] = 1,
    ACTIONS(2582), 1,
      aux_sym_create_keyspace_token1,
  [16109] = 1,
    ACTIONS(2584), 1,
      aux_sym_delete_statement_token3,
  [16113] = 1,
    ACTIONS(2586), 1,
      aux_sym_relation_contains_key_token2,
  [16117] = 1,
    ACTIONS(2588), 1,
      aux_sym_relation_contains_key_token2,
  [16121] = 1,
    ACTIONS(2590), 1,
      anon_sym_LPAREN,
  [16125] = 1,
    ACTIONS(2592), 1,
      anon_sym_LPAREN,
  [16129] = 1,
    ACTIONS(2594), 1,
      anon_sym_RPAREN,
  [16133] = 1,
    ACTIONS(2596), 1,
      anon_sym_RPAREN,
  [16137] = 1,
    ACTIONS(2598), 1,
      aux_sym_delete_statement_token3,
  [16141] = 1,
    ACTIONS(2600), 1,
      sym_object_name,
  [16145] = 1,
    ACTIONS(2602), 1,
      sym_object_name,
  [16149] = 1,
    ACTIONS(2604), 1,
      aux_sym_create_function_token2,
  [16153] = 1,
    ACTIONS(2606), 1,
      aux_sym_delete_statement_token3,
  [16157] = 1,
    ACTIONS(2608), 1,
      sym__code_block,
  [16161] = 1,
    ACTIONS(2610), 1,
      aux_sym_select_element_token1,
  [16165] = 1,
    ACTIONS(2612), 1,
      sym_object_name,
  [16169] = 1,
    ACTIONS(2614), 1,
      anon_sym_LPAREN,
  [16173] = 1,
    ACTIONS(2616), 1,
      sym__code_block,
  [16177] = 1,
    ACTIONS(2618), 1,
      aux_sym_select_element_token1,
  [16181] = 1,
    ACTIONS(2620), 1,
      sym__decimal_literal,
  [16185] = 1,
    ACTIONS(2622), 1,
      sym_object_name,
  [16189] = 1,
    ACTIONS(2624), 1,
      sym_object_name,
  [16193] = 1,
    ACTIONS(2626), 1,
      aux_sym_create_aggregate_token6,
  [16197] = 1,
    ACTIONS(2628), 1,
      anon_sym_RBRACK,
  [16201] = 1,
    ACTIONS(2630), 1,
      aux_sym_order_spec_token2,
  [16205] = 1,
    ACTIONS(2632), 1,
      sym__code_block,
  [16209] = 1,
    ACTIONS(2634), 1,
      aux_sym_select_element_token1,
  [16213] = 1,
    ACTIONS(2636), 1,
      sym__decimal_literal,
  [16217] = 1,
    ACTIONS(2638), 1,
      aux_sym_create_aggregate_token6,
  [16221] = 1,
    ACTIONS(2640), 1,
      aux_sym_select_statement_token5,
  [16225] = 1,
    ACTIONS(2642), 1,
      anon_sym_RPAREN,
  [16229] = 1,
    ACTIONS(2644), 1,
      sym_object_name,
  [16233] = 1,
    ACTIONS(2646), 1,
      aux_sym_materialized_view_options_token1,
  [16237] = 1,
    ACTIONS(2648), 1,
      sym_object_name,
  [16241] = 1,
    ACTIONS(2650), 1,
      aux_sym_materialized_view_options_token1,
  [16245] = 1,
    ACTIONS(2652), 1,
      aux_sym_update_token2,
  [16249] = 1,
    ACTIONS(2654), 1,
      sym_object_name,
  [16253] = 1,
    ACTIONS(2656), 1,
      aux_sym_delete_statement_token3,
  [16257] = 1,
    ACTIONS(2658), 1,
      aux_sym_create_materialized_view_token1,
  [16261] = 1,
    ACTIONS(2660), 1,
      anon_sym_LPAREN,
  [16265] = 1,
    ACTIONS(2662), 1,
      anon_sym_LPAREN,
  [16269] = 1,
    ACTIONS(2664), 1,
      anon_sym_RPAREN,
  [16273] = 1,
    ACTIONS(2666), 1,
      aux_sym_delete_statement_token3,
  [16277] = 1,
    ACTIONS(2668), 1,
      aux_sym_delete_statement_token3,
  [16281] = 1,
    ACTIONS(2670), 1,
      aux_sym_delete_statement_token3,
  [16285] = 1,
    ACTIONS(2672), 1,
      aux_sym_delete_statement_token3,
  [16289] = 1,
    ACTIONS(2674), 1,
      aux_sym_insert_statement_token2,
  [16293] = 1,
    ACTIONS(2676), 1,
      aux_sym_select_element_token1,
  [16297] = 1,
    ACTIONS(2678), 1,
      sym_object_name,
  [16301] = 1,
    ACTIONS(2680), 1,
      aux_sym_create_function_token2,
  [16305] = 1,
    ACTIONS(2682), 1,
      aux_sym_delete_statement_token3,
  [16309] = 1,
    ACTIONS(2684), 1,
      sym__code_block,
  [16313] = 1,
    ACTIONS(2686), 1,
      aux_sym_select_element_token1,
  [16317] = 1,
    ACTIONS(2688), 1,
      aux_sym_delete_statement_token3,
  [16321] = 1,
    ACTIONS(2690), 1,
      sym__code_block,
  [16325] = 1,
    ACTIONS(2692), 1,
      aux_sym_create_aggregate_token5,
  [16329] = 1,
    ACTIONS(2694), 1,
      aux_sym_create_aggregate_token6,
  [16333] = 1,
    ACTIONS(2696), 1,
      aux_sym_delete_statement_token3,
  [16337] = 1,
    ACTIONS(2698), 1,
      aux_sym_materialized_view_options_token1,
  [16341] = 1,
    ACTIONS(2700), 1,
      sym__code_block,
  [16345] = 1,
    ACTIONS(2702), 1,
      aux_sym_insert_statement_token3,
  [16349] = 1,
    ACTIONS(2704), 1,
      aux_sym_relation_contains_key_token2,
  [16353] = 1,
    ACTIONS(2706), 1,
      aux_sym_insert_statement_token3,
  [16357] = 1,
    ACTIONS(2708), 1,
      aux_sym_using_timestamp_spec_token1,
  [16361] = 1,
    ACTIONS(2710), 1,
      aux_sym_insert_statement_token3,
  [16365] = 1,
    ACTIONS(2712), 1,
      anon_sym_RPAREN,
  [16369] = 1,
    ACTIONS(2714), 1,
      aux_sym_insert_statement_token3,
  [16373] = 1,
    ACTIONS(2716), 1,
      aux_sym_insert_statement_token3,
  [16377] = 1,
    ACTIONS(2718), 1,
      aux_sym_insert_statement_token3,
  [16381] = 1,
    ACTIONS(2720), 1,
      aux_sym_materialized_view_options_token1,
  [16385] = 1,
    ACTIONS(2722), 1,
      sym__code_block,
  [16389] = 1,
    ACTIONS(2724), 1,
      aux_sym_select_element_token1,
  [16393] = 1,
    ACTIONS(2726), 1,
      sym_object_name,
  [16397] = 1,
    ACTIONS(2728), 1,
      aux_sym_materialized_view_options_token1,
  [16401] = 1,
    ACTIONS(2730), 1,
      sym__code_block,
  [16405] = 1,
    ACTIONS(2732), 1,
      aux_sym_insert_statement_token3,
  [16409] = 1,
    ACTIONS(2734), 1,
      sym_object_name,
  [16413] = 1,
    ACTIONS(2736), 1,
      aux_sym_create_index_token3,
  [16417] = 1,
    ACTIONS(2738), 1,
      aux_sym_insert_statement_token3,
  [16421] = 1,
    ACTIONS(2740), 1,
      aux_sym_create_index_token3,
  [16425] = 1,
    ACTIONS(2742), 1,
      aux_sym_insert_statement_token3,
  [16429] = 1,
    ACTIONS(2744), 1,
      anon_sym_LPAREN,
  [16433] = 1,
    ACTIONS(2746), 1,
      anon_sym_RPAREN,
  [16437] = 1,
    ACTIONS(2748), 1,
      anon_sym_RPAREN,
  [16441] = 1,
    ACTIONS(2750), 1,
      sym_object_name,
  [16445] = 1,
    ACTIONS(2752), 1,
      sym_object_name,
  [16449] = 1,
    ACTIONS(2754), 1,
      sym_object_name,
  [16453] = 1,
    ACTIONS(2756), 1,
      anon_sym_STAR,
  [16457] = 1,
    ACTIONS(2758), 1,
      sym_object_name,
  [16461] = 1,
    ACTIONS(2760), 1,
      sym__code_block,
  [16465] = 1,
    ACTIONS(2762), 1,
      aux_sym_select_element_token1,
  [16469] = 1,
    ACTIONS(2764), 1,
      aux_sym_insert_statement_token2,
  [16473] = 1,
    ACTIONS(2766), 1,
      aux_sym_create_aggregate_token6,
  [16477] = 1,
    ACTIONS(2768), 1,
      sym_object_name,
  [16481] = 1,
    ACTIONS(2770), 1,
      aux_sym_drop_materialized_view_token2,
  [16485] = 1,
    ACTIONS(2772), 1,
      sym_object_name,
  [16489] = 1,
    ACTIONS(2774), 1,
      sym_object_name,
  [16493] = 1,
    ACTIONS(2776), 1,
      aux_sym_create_index_token3,
  [16497] = 1,
    ACTIONS(2778), 1,
      aux_sym_create_index_token3,
  [16501] = 1,
    ACTIONS(2780), 1,
      aux_sym_drop_materialized_view_token2,
  [16505] = 1,
    ACTIONS(2782), 1,
      sym__code_block,
  [16509] = 1,
    ACTIONS(2784), 1,
      aux_sym_create_aggregate_token2,
  [16513] = 1,
    ACTIONS(2786), 1,
      anon_sym_RPAREN,
  [16517] = 1,
    ACTIONS(2788), 1,
      aux_sym_drop_materialized_view_token2,
  [16521] = 1,
    ACTIONS(2790), 1,
      aux_sym_begin_batch_token4,
  [16525] = 1,
    ACTIONS(2792), 1,
      ts_builtin_sym_end,
  [16529] = 1,
    ACTIONS(2794), 1,
      aux_sym_begin_batch_token4,
  [16533] = 1,
    ACTIONS(2796), 1,
      sym_object_name,
  [16537] = 1,
    ACTIONS(2798), 1,
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
  [SMALL_STATE(60)] = 2133,
  [SMALL_STATE(61)] = 2165,
  [SMALL_STATE(62)] = 2196,
  [SMALL_STATE(63)] = 2223,
  [SMALL_STATE(64)] = 2250,
  [SMALL_STATE(65)] = 2281,
  [SMALL_STATE(66)] = 2308,
  [SMALL_STATE(67)] = 2335,
  [SMALL_STATE(68)] = 2366,
  [SMALL_STATE(69)] = 2393,
  [SMALL_STATE(70)] = 2424,
  [SMALL_STATE(71)] = 2464,
  [SMALL_STATE(72)] = 2504,
  [SMALL_STATE(73)] = 2534,
  [SMALL_STATE(74)] = 2560,
  [SMALL_STATE(75)] = 2590,
  [SMALL_STATE(76)] = 2630,
  [SMALL_STATE(77)] = 2655,
  [SMALL_STATE(78)] = 2684,
  [SMALL_STATE(79)] = 2709,
  [SMALL_STATE(80)] = 2734,
  [SMALL_STATE(81)] = 2759,
  [SMALL_STATE(82)] = 2784,
  [SMALL_STATE(83)] = 2813,
  [SMALL_STATE(84)] = 2838,
  [SMALL_STATE(85)] = 2863,
  [SMALL_STATE(86)] = 2902,
  [SMALL_STATE(87)] = 2927,
  [SMALL_STATE(88)] = 2952,
  [SMALL_STATE(89)] = 2977,
  [SMALL_STATE(90)] = 3001,
  [SMALL_STATE(91)] = 3025,
  [SMALL_STATE(92)] = 3059,
  [SMALL_STATE(93)] = 3083,
  [SMALL_STATE(94)] = 3107,
  [SMALL_STATE(95)] = 3141,
  [SMALL_STATE(96)] = 3175,
  [SMALL_STATE(97)] = 3203,
  [SMALL_STATE(98)] = 3226,
  [SMALL_STATE(99)] = 3251,
  [SMALL_STATE(100)] = 3278,
  [SMALL_STATE(101)] = 3303,
  [SMALL_STATE(102)] = 3328,
  [SMALL_STATE(103)] = 3353,
  [SMALL_STATE(104)] = 3381,
  [SMALL_STATE(105)] = 3409,
  [SMALL_STATE(106)] = 3435,
  [SMALL_STATE(107)] = 3457,
  [SMALL_STATE(108)] = 3483,
  [SMALL_STATE(109)] = 3509,
  [SMALL_STATE(110)] = 3535,
  [SMALL_STATE(111)] = 3563,
  [SMALL_STATE(112)] = 3585,
  [SMALL_STATE(113)] = 3607,
  [SMALL_STATE(114)] = 3629,
  [SMALL_STATE(115)] = 3651,
  [SMALL_STATE(116)] = 3673,
  [SMALL_STATE(117)] = 3695,
  [SMALL_STATE(118)] = 3717,
  [SMALL_STATE(119)] = 3743,
  [SMALL_STATE(120)] = 3767,
  [SMALL_STATE(121)] = 3795,
  [SMALL_STATE(122)] = 3823,
  [SMALL_STATE(123)] = 3849,
  [SMALL_STATE(124)] = 3877,
  [SMALL_STATE(125)] = 3899,
  [SMALL_STATE(126)] = 3927,
  [SMALL_STATE(127)] = 3949,
  [SMALL_STATE(128)] = 3974,
  [SMALL_STATE(129)] = 3999,
  [SMALL_STATE(130)] = 4020,
  [SMALL_STATE(131)] = 4045,
  [SMALL_STATE(132)] = 4070,
  [SMALL_STATE(133)] = 4095,
  [SMALL_STATE(134)] = 4120,
  [SMALL_STATE(135)] = 4145,
  [SMALL_STATE(136)] = 4170,
  [SMALL_STATE(137)] = 4191,
  [SMALL_STATE(138)] = 4216,
  [SMALL_STATE(139)] = 4241,
  [SMALL_STATE(140)] = 4266,
  [SMALL_STATE(141)] = 4291,
  [SMALL_STATE(142)] = 4316,
  [SMALL_STATE(143)] = 4341,
  [SMALL_STATE(144)] = 4366,
  [SMALL_STATE(145)] = 4387,
  [SMALL_STATE(146)] = 4412,
  [SMALL_STATE(147)] = 4433,
  [SMALL_STATE(148)] = 4458,
  [SMALL_STATE(149)] = 4479,
  [SMALL_STATE(150)] = 4500,
  [SMALL_STATE(151)] = 4521,
  [SMALL_STATE(152)] = 4546,
  [SMALL_STATE(153)] = 4571,
  [SMALL_STATE(154)] = 4596,
  [SMALL_STATE(155)] = 4617,
  [SMALL_STATE(156)] = 4642,
  [SMALL_STATE(157)] = 4667,
  [SMALL_STATE(158)] = 4692,
  [SMALL_STATE(159)] = 4713,
  [SMALL_STATE(160)] = 4738,
  [SMALL_STATE(161)] = 4763,
  [SMALL_STATE(162)] = 4788,
  [SMALL_STATE(163)] = 4813,
  [SMALL_STATE(164)] = 4838,
  [SMALL_STATE(165)] = 4863,
  [SMALL_STATE(166)] = 4888,
  [SMALL_STATE(167)] = 4923,
  [SMALL_STATE(168)] = 4944,
  [SMALL_STATE(169)] = 4969,
  [SMALL_STATE(170)] = 4994,
  [SMALL_STATE(171)] = 5015,
  [SMALL_STATE(172)] = 5040,
  [SMALL_STATE(173)] = 5065,
  [SMALL_STATE(174)] = 5090,
  [SMALL_STATE(175)] = 5115,
  [SMALL_STATE(176)] = 5140,
  [SMALL_STATE(177)] = 5165,
  [SMALL_STATE(178)] = 5190,
  [SMALL_STATE(179)] = 5215,
  [SMALL_STATE(180)] = 5240,
  [SMALL_STATE(181)] = 5261,
  [SMALL_STATE(182)] = 5286,
  [SMALL_STATE(183)] = 5311,
  [SMALL_STATE(184)] = 5332,
  [SMALL_STATE(185)] = 5353,
  [SMALL_STATE(186)] = 5374,
  [SMALL_STATE(187)] = 5395,
  [SMALL_STATE(188)] = 5420,
  [SMALL_STATE(189)] = 5445,
  [SMALL_STATE(190)] = 5470,
  [SMALL_STATE(191)] = 5495,
  [SMALL_STATE(192)] = 5516,
  [SMALL_STATE(193)] = 5541,
  [SMALL_STATE(194)] = 5566,
  [SMALL_STATE(195)] = 5591,
  [SMALL_STATE(196)] = 5616,
  [SMALL_STATE(197)] = 5641,
  [SMALL_STATE(198)] = 5662,
  [SMALL_STATE(199)] = 5687,
  [SMALL_STATE(200)] = 5710,
  [SMALL_STATE(201)] = 5735,
  [SMALL_STATE(202)] = 5760,
  [SMALL_STATE(203)] = 5781,
  [SMALL_STATE(204)] = 5804,
  [SMALL_STATE(205)] = 5829,
  [SMALL_STATE(206)] = 5851,
  [SMALL_STATE(207)] = 5871,
  [SMALL_STATE(208)] = 5893,
  [SMALL_STATE(209)] = 5915,
  [SMALL_STATE(210)] = 5935,
  [SMALL_STATE(211)] = 5957,
  [SMALL_STATE(212)] = 5977,
  [SMALL_STATE(213)] = 5999,
  [SMALL_STATE(214)] = 6021,
  [SMALL_STATE(215)] = 6053,
  [SMALL_STATE(216)] = 6075,
  [SMALL_STATE(217)] = 6097,
  [SMALL_STATE(218)] = 6119,
  [SMALL_STATE(219)] = 6141,
  [SMALL_STATE(220)] = 6163,
  [SMALL_STATE(221)] = 6185,
  [SMALL_STATE(222)] = 6205,
  [SMALL_STATE(223)] = 6227,
  [SMALL_STATE(224)] = 6247,
  [SMALL_STATE(225)] = 6269,
  [SMALL_STATE(226)] = 6291,
  [SMALL_STATE(227)] = 6313,
  [SMALL_STATE(228)] = 6335,
  [SMALL_STATE(229)] = 6357,
  [SMALL_STATE(230)] = 6377,
  [SMALL_STATE(231)] = 6399,
  [SMALL_STATE(232)] = 6419,
  [SMALL_STATE(233)] = 6441,
  [SMALL_STATE(234)] = 6463,
  [SMALL_STATE(235)] = 6485,
  [SMALL_STATE(236)] = 6507,
  [SMALL_STATE(237)] = 6529,
  [SMALL_STATE(238)] = 6549,
  [SMALL_STATE(239)] = 6569,
  [SMALL_STATE(240)] = 6591,
  [SMALL_STATE(241)] = 6613,
  [SMALL_STATE(242)] = 6633,
  [SMALL_STATE(243)] = 6655,
  [SMALL_STATE(244)] = 6675,
  [SMALL_STATE(245)] = 6694,
  [SMALL_STATE(246)] = 6713,
  [SMALL_STATE(247)] = 6732,
  [SMALL_STATE(248)] = 6751,
  [SMALL_STATE(249)] = 6770,
  [SMALL_STATE(250)] = 6789,
  [SMALL_STATE(251)] = 6808,
  [SMALL_STATE(252)] = 6827,
  [SMALL_STATE(253)] = 6846,
  [SMALL_STATE(254)] = 6865,
  [SMALL_STATE(255)] = 6884,
  [SMALL_STATE(256)] = 6903,
  [SMALL_STATE(257)] = 6922,
  [SMALL_STATE(258)] = 6941,
  [SMALL_STATE(259)] = 6960,
  [SMALL_STATE(260)] = 6979,
  [SMALL_STATE(261)] = 6998,
  [SMALL_STATE(262)] = 7017,
  [SMALL_STATE(263)] = 7036,
  [SMALL_STATE(264)] = 7055,
  [SMALL_STATE(265)] = 7074,
  [SMALL_STATE(266)] = 7093,
  [SMALL_STATE(267)] = 7112,
  [SMALL_STATE(268)] = 7131,
  [SMALL_STATE(269)] = 7150,
  [SMALL_STATE(270)] = 7169,
  [SMALL_STATE(271)] = 7188,
  [SMALL_STATE(272)] = 7207,
  [SMALL_STATE(273)] = 7226,
  [SMALL_STATE(274)] = 7245,
  [SMALL_STATE(275)] = 7264,
  [SMALL_STATE(276)] = 7283,
  [SMALL_STATE(277)] = 7302,
  [SMALL_STATE(278)] = 7321,
  [SMALL_STATE(279)] = 7340,
  [SMALL_STATE(280)] = 7359,
  [SMALL_STATE(281)] = 7378,
  [SMALL_STATE(282)] = 7397,
  [SMALL_STATE(283)] = 7416,
  [SMALL_STATE(284)] = 7435,
  [SMALL_STATE(285)] = 7454,
  [SMALL_STATE(286)] = 7473,
  [SMALL_STATE(287)] = 7492,
  [SMALL_STATE(288)] = 7511,
  [SMALL_STATE(289)] = 7530,
  [SMALL_STATE(290)] = 7549,
  [SMALL_STATE(291)] = 7568,
  [SMALL_STATE(292)] = 7587,
  [SMALL_STATE(293)] = 7606,
  [SMALL_STATE(294)] = 7625,
  [SMALL_STATE(295)] = 7644,
  [SMALL_STATE(296)] = 7663,
  [SMALL_STATE(297)] = 7682,
  [SMALL_STATE(298)] = 7701,
  [SMALL_STATE(299)] = 7720,
  [SMALL_STATE(300)] = 7739,
  [SMALL_STATE(301)] = 7758,
  [SMALL_STATE(302)] = 7777,
  [SMALL_STATE(303)] = 7796,
  [SMALL_STATE(304)] = 7815,
  [SMALL_STATE(305)] = 7834,
  [SMALL_STATE(306)] = 7853,
  [SMALL_STATE(307)] = 7872,
  [SMALL_STATE(308)] = 7891,
  [SMALL_STATE(309)] = 7910,
  [SMALL_STATE(310)] = 7929,
  [SMALL_STATE(311)] = 7948,
  [SMALL_STATE(312)] = 7967,
  [SMALL_STATE(313)] = 7986,
  [SMALL_STATE(314)] = 8005,
  [SMALL_STATE(315)] = 8024,
  [SMALL_STATE(316)] = 8043,
  [SMALL_STATE(317)] = 8062,
  [SMALL_STATE(318)] = 8081,
  [SMALL_STATE(319)] = 8100,
  [SMALL_STATE(320)] = 8119,
  [SMALL_STATE(321)] = 8138,
  [SMALL_STATE(322)] = 8157,
  [SMALL_STATE(323)] = 8176,
  [SMALL_STATE(324)] = 8195,
  [SMALL_STATE(325)] = 8214,
  [SMALL_STATE(326)] = 8233,
  [SMALL_STATE(327)] = 8252,
  [SMALL_STATE(328)] = 8271,
  [SMALL_STATE(329)] = 8290,
  [SMALL_STATE(330)] = 8309,
  [SMALL_STATE(331)] = 8328,
  [SMALL_STATE(332)] = 8347,
  [SMALL_STATE(333)] = 8366,
  [SMALL_STATE(334)] = 8385,
  [SMALL_STATE(335)] = 8404,
  [SMALL_STATE(336)] = 8423,
  [SMALL_STATE(337)] = 8442,
  [SMALL_STATE(338)] = 8461,
  [SMALL_STATE(339)] = 8480,
  [SMALL_STATE(340)] = 8499,
  [SMALL_STATE(341)] = 8518,
  [SMALL_STATE(342)] = 8537,
  [SMALL_STATE(343)] = 8556,
  [SMALL_STATE(344)] = 8575,
  [SMALL_STATE(345)] = 8594,
  [SMALL_STATE(346)] = 8613,
  [SMALL_STATE(347)] = 8632,
  [SMALL_STATE(348)] = 8651,
  [SMALL_STATE(349)] = 8670,
  [SMALL_STATE(350)] = 8689,
  [SMALL_STATE(351)] = 8708,
  [SMALL_STATE(352)] = 8727,
  [SMALL_STATE(353)] = 8746,
  [SMALL_STATE(354)] = 8765,
  [SMALL_STATE(355)] = 8784,
  [SMALL_STATE(356)] = 8803,
  [SMALL_STATE(357)] = 8822,
  [SMALL_STATE(358)] = 8841,
  [SMALL_STATE(359)] = 8860,
  [SMALL_STATE(360)] = 8879,
  [SMALL_STATE(361)] = 8898,
  [SMALL_STATE(362)] = 8917,
  [SMALL_STATE(363)] = 8936,
  [SMALL_STATE(364)] = 8955,
  [SMALL_STATE(365)] = 8974,
  [SMALL_STATE(366)] = 8993,
  [SMALL_STATE(367)] = 9012,
  [SMALL_STATE(368)] = 9031,
  [SMALL_STATE(369)] = 9050,
  [SMALL_STATE(370)] = 9069,
  [SMALL_STATE(371)] = 9088,
  [SMALL_STATE(372)] = 9107,
  [SMALL_STATE(373)] = 9126,
  [SMALL_STATE(374)] = 9145,
  [SMALL_STATE(375)] = 9164,
  [SMALL_STATE(376)] = 9183,
  [SMALL_STATE(377)] = 9202,
  [SMALL_STATE(378)] = 9221,
  [SMALL_STATE(379)] = 9240,
  [SMALL_STATE(380)] = 9259,
  [SMALL_STATE(381)] = 9278,
  [SMALL_STATE(382)] = 9297,
  [SMALL_STATE(383)] = 9316,
  [SMALL_STATE(384)] = 9335,
  [SMALL_STATE(385)] = 9356,
  [SMALL_STATE(386)] = 9375,
  [SMALL_STATE(387)] = 9394,
  [SMALL_STATE(388)] = 9413,
  [SMALL_STATE(389)] = 9432,
  [SMALL_STATE(390)] = 9451,
  [SMALL_STATE(391)] = 9470,
  [SMALL_STATE(392)] = 9489,
  [SMALL_STATE(393)] = 9508,
  [SMALL_STATE(394)] = 9527,
  [SMALL_STATE(395)] = 9546,
  [SMALL_STATE(396)] = 9565,
  [SMALL_STATE(397)] = 9584,
  [SMALL_STATE(398)] = 9603,
  [SMALL_STATE(399)] = 9622,
  [SMALL_STATE(400)] = 9641,
  [SMALL_STATE(401)] = 9660,
  [SMALL_STATE(402)] = 9679,
  [SMALL_STATE(403)] = 9698,
  [SMALL_STATE(404)] = 9717,
  [SMALL_STATE(405)] = 9736,
  [SMALL_STATE(406)] = 9766,
  [SMALL_STATE(407)] = 9784,
  [SMALL_STATE(408)] = 9809,
  [SMALL_STATE(409)] = 9834,
  [SMALL_STATE(410)] = 9859,
  [SMALL_STATE(411)] = 9884,
  [SMALL_STATE(412)] = 9909,
  [SMALL_STATE(413)] = 9934,
  [SMALL_STATE(414)] = 9959,
  [SMALL_STATE(415)] = 9984,
  [SMALL_STATE(416)] = 10009,
  [SMALL_STATE(417)] = 10037,
  [SMALL_STATE(418)] = 10063,
  [SMALL_STATE(419)] = 10086,
  [SMALL_STATE(420)] = 10108,
  [SMALL_STATE(421)] = 10128,
  [SMALL_STATE(422)] = 10154,
  [SMALL_STATE(423)] = 10188,
  [SMALL_STATE(424)] = 10208,
  [SMALL_STATE(425)] = 10228,
  [SMALL_STATE(426)] = 10248,
  [SMALL_STATE(427)] = 10265,
  [SMALL_STATE(428)] = 10284,
  [SMALL_STATE(429)] = 10307,
  [SMALL_STATE(430)] = 10324,
  [SMALL_STATE(431)] = 10343,
  [SMALL_STATE(432)] = 10366,
  [SMALL_STATE(433)] = 10397,
  [SMALL_STATE(434)] = 10413,
  [SMALL_STATE(435)] = 10429,
  [SMALL_STATE(436)] = 10445,
  [SMALL_STATE(437)] = 10461,
  [SMALL_STATE(438)] = 10477,
  [SMALL_STATE(439)] = 10493,
  [SMALL_STATE(440)] = 10509,
  [SMALL_STATE(441)] = 10525,
  [SMALL_STATE(442)] = 10541,
  [SMALL_STATE(443)] = 10561,
  [SMALL_STATE(444)] = 10577,
  [SMALL_STATE(445)] = 10593,
  [SMALL_STATE(446)] = 10609,
  [SMALL_STATE(447)] = 10630,
  [SMALL_STATE(448)] = 10651,
  [SMALL_STATE(449)] = 10672,
  [SMALL_STATE(450)] = 10693,
  [SMALL_STATE(451)] = 10714,
  [SMALL_STATE(452)] = 10732,
  [SMALL_STATE(453)] = 10746,
  [SMALL_STATE(454)] = 10768,
  [SMALL_STATE(455)] = 10790,
  [SMALL_STATE(456)] = 10810,
  [SMALL_STATE(457)] = 10824,
  [SMALL_STATE(458)] = 10846,
  [SMALL_STATE(459)] = 10868,
  [SMALL_STATE(460)] = 10888,
  [SMALL_STATE(461)] = 10907,
  [SMALL_STATE(462)] = 10922,
  [SMALL_STATE(463)] = 10941,
  [SMALL_STATE(464)] = 10958,
  [SMALL_STATE(465)] = 10969,
  [SMALL_STATE(466)] = 10988,
  [SMALL_STATE(467)] = 10996,
  [SMALL_STATE(468)] = 11012,
  [SMALL_STATE(469)] = 11020,
  [SMALL_STATE(470)] = 11036,
  [SMALL_STATE(471)] = 11048,
  [SMALL_STATE(472)] = 11064,
  [SMALL_STATE(473)] = 11078,
  [SMALL_STATE(474)] = 11092,
  [SMALL_STATE(475)] = 11108,
  [SMALL_STATE(476)] = 11120,
  [SMALL_STATE(477)] = 11136,
  [SMALL_STATE(478)] = 11148,
  [SMALL_STATE(479)] = 11164,
  [SMALL_STATE(480)] = 11172,
  [SMALL_STATE(481)] = 11188,
  [SMALL_STATE(482)] = 11196,
  [SMALL_STATE(483)] = 11210,
  [SMALL_STATE(484)] = 11218,
  [SMALL_STATE(485)] = 11230,
  [SMALL_STATE(486)] = 11246,
  [SMALL_STATE(487)] = 11254,
  [SMALL_STATE(488)] = 11268,
  [SMALL_STATE(489)] = 11276,
  [SMALL_STATE(490)] = 11292,
  [SMALL_STATE(491)] = 11308,
  [SMALL_STATE(492)] = 11321,
  [SMALL_STATE(493)] = 11332,
  [SMALL_STATE(494)] = 11345,
  [SMALL_STATE(495)] = 11358,
  [SMALL_STATE(496)] = 11371,
  [SMALL_STATE(497)] = 11384,
  [SMALL_STATE(498)] = 11397,
  [SMALL_STATE(499)] = 11410,
  [SMALL_STATE(500)] = 11423,
  [SMALL_STATE(501)] = 11436,
  [SMALL_STATE(502)] = 11449,
  [SMALL_STATE(503)] = 11462,
  [SMALL_STATE(504)] = 11475,
  [SMALL_STATE(505)] = 11488,
  [SMALL_STATE(506)] = 11499,
  [SMALL_STATE(507)] = 11512,
  [SMALL_STATE(508)] = 11525,
  [SMALL_STATE(509)] = 11538,
  [SMALL_STATE(510)] = 11551,
  [SMALL_STATE(511)] = 11564,
  [SMALL_STATE(512)] = 11577,
  [SMALL_STATE(513)] = 11590,
  [SMALL_STATE(514)] = 11603,
  [SMALL_STATE(515)] = 11616,
  [SMALL_STATE(516)] = 11629,
  [SMALL_STATE(517)] = 11642,
  [SMALL_STATE(518)] = 11655,
  [SMALL_STATE(519)] = 11668,
  [SMALL_STATE(520)] = 11681,
  [SMALL_STATE(521)] = 11694,
  [SMALL_STATE(522)] = 11707,
  [SMALL_STATE(523)] = 11720,
  [SMALL_STATE(524)] = 11733,
  [SMALL_STATE(525)] = 11746,
  [SMALL_STATE(526)] = 11757,
  [SMALL_STATE(527)] = 11770,
  [SMALL_STATE(528)] = 11783,
  [SMALL_STATE(529)] = 11796,
  [SMALL_STATE(530)] = 11809,
  [SMALL_STATE(531)] = 11822,
  [SMALL_STATE(532)] = 11831,
  [SMALL_STATE(533)] = 11844,
  [SMALL_STATE(534)] = 11857,
  [SMALL_STATE(535)] = 11868,
  [SMALL_STATE(536)] = 11881,
  [SMALL_STATE(537)] = 11894,
  [SMALL_STATE(538)] = 11901,
  [SMALL_STATE(539)] = 11914,
  [SMALL_STATE(540)] = 11927,
  [SMALL_STATE(541)] = 11934,
  [SMALL_STATE(542)] = 11947,
  [SMALL_STATE(543)] = 11960,
  [SMALL_STATE(544)] = 11973,
  [SMALL_STATE(545)] = 11986,
  [SMALL_STATE(546)] = 11999,
  [SMALL_STATE(547)] = 12009,
  [SMALL_STATE(548)] = 12019,
  [SMALL_STATE(549)] = 12029,
  [SMALL_STATE(550)] = 12039,
  [SMALL_STATE(551)] = 12049,
  [SMALL_STATE(552)] = 12059,
  [SMALL_STATE(553)] = 12069,
  [SMALL_STATE(554)] = 12079,
  [SMALL_STATE(555)] = 12089,
  [SMALL_STATE(556)] = 12099,
  [SMALL_STATE(557)] = 12109,
  [SMALL_STATE(558)] = 12119,
  [SMALL_STATE(559)] = 12129,
  [SMALL_STATE(560)] = 12139,
  [SMALL_STATE(561)] = 12149,
  [SMALL_STATE(562)] = 12159,
  [SMALL_STATE(563)] = 12169,
  [SMALL_STATE(564)] = 12179,
  [SMALL_STATE(565)] = 12187,
  [SMALL_STATE(566)] = 12195,
  [SMALL_STATE(567)] = 12205,
  [SMALL_STATE(568)] = 12215,
  [SMALL_STATE(569)] = 12225,
  [SMALL_STATE(570)] = 12235,
  [SMALL_STATE(571)] = 12245,
  [SMALL_STATE(572)] = 12255,
  [SMALL_STATE(573)] = 12265,
  [SMALL_STATE(574)] = 12275,
  [SMALL_STATE(575)] = 12285,
  [SMALL_STATE(576)] = 12295,
  [SMALL_STATE(577)] = 12305,
  [SMALL_STATE(578)] = 12315,
  [SMALL_STATE(579)] = 12325,
  [SMALL_STATE(580)] = 12335,
  [SMALL_STATE(581)] = 12345,
  [SMALL_STATE(582)] = 12355,
  [SMALL_STATE(583)] = 12365,
  [SMALL_STATE(584)] = 12375,
  [SMALL_STATE(585)] = 12385,
  [SMALL_STATE(586)] = 12395,
  [SMALL_STATE(587)] = 12405,
  [SMALL_STATE(588)] = 12415,
  [SMALL_STATE(589)] = 12425,
  [SMALL_STATE(590)] = 12435,
  [SMALL_STATE(591)] = 12445,
  [SMALL_STATE(592)] = 12455,
  [SMALL_STATE(593)] = 12465,
  [SMALL_STATE(594)] = 12475,
  [SMALL_STATE(595)] = 12485,
  [SMALL_STATE(596)] = 12495,
  [SMALL_STATE(597)] = 12501,
  [SMALL_STATE(598)] = 12511,
  [SMALL_STATE(599)] = 12521,
  [SMALL_STATE(600)] = 12531,
  [SMALL_STATE(601)] = 12541,
  [SMALL_STATE(602)] = 12549,
  [SMALL_STATE(603)] = 12559,
  [SMALL_STATE(604)] = 12569,
  [SMALL_STATE(605)] = 12579,
  [SMALL_STATE(606)] = 12589,
  [SMALL_STATE(607)] = 12599,
  [SMALL_STATE(608)] = 12609,
  [SMALL_STATE(609)] = 12619,
  [SMALL_STATE(610)] = 12629,
  [SMALL_STATE(611)] = 12639,
  [SMALL_STATE(612)] = 12649,
  [SMALL_STATE(613)] = 12659,
  [SMALL_STATE(614)] = 12669,
  [SMALL_STATE(615)] = 12679,
  [SMALL_STATE(616)] = 12689,
  [SMALL_STATE(617)] = 12699,
  [SMALL_STATE(618)] = 12709,
  [SMALL_STATE(619)] = 12719,
  [SMALL_STATE(620)] = 12729,
  [SMALL_STATE(621)] = 12739,
  [SMALL_STATE(622)] = 12749,
  [SMALL_STATE(623)] = 12759,
  [SMALL_STATE(624)] = 12767,
  [SMALL_STATE(625)] = 12775,
  [SMALL_STATE(626)] = 12785,
  [SMALL_STATE(627)] = 12795,
  [SMALL_STATE(628)] = 12805,
  [SMALL_STATE(629)] = 12815,
  [SMALL_STATE(630)] = 12825,
  [SMALL_STATE(631)] = 12835,
  [SMALL_STATE(632)] = 12845,
  [SMALL_STATE(633)] = 12855,
  [SMALL_STATE(634)] = 12865,
  [SMALL_STATE(635)] = 12875,
  [SMALL_STATE(636)] = 12885,
  [SMALL_STATE(637)] = 12895,
  [SMALL_STATE(638)] = 12905,
  [SMALL_STATE(639)] = 12915,
  [SMALL_STATE(640)] = 12925,
  [SMALL_STATE(641)] = 12935,
  [SMALL_STATE(642)] = 12945,
  [SMALL_STATE(643)] = 12955,
  [SMALL_STATE(644)] = 12965,
  [SMALL_STATE(645)] = 12975,
  [SMALL_STATE(646)] = 12985,
  [SMALL_STATE(647)] = 12995,
  [SMALL_STATE(648)] = 13005,
  [SMALL_STATE(649)] = 13015,
  [SMALL_STATE(650)] = 13025,
  [SMALL_STATE(651)] = 13035,
  [SMALL_STATE(652)] = 13045,
  [SMALL_STATE(653)] = 13055,
  [SMALL_STATE(654)] = 13065,
  [SMALL_STATE(655)] = 13075,
  [SMALL_STATE(656)] = 13085,
  [SMALL_STATE(657)] = 13095,
  [SMALL_STATE(658)] = 13105,
  [SMALL_STATE(659)] = 13115,
  [SMALL_STATE(660)] = 13125,
  [SMALL_STATE(661)] = 13135,
  [SMALL_STATE(662)] = 13145,
  [SMALL_STATE(663)] = 13155,
  [SMALL_STATE(664)] = 13165,
  [SMALL_STATE(665)] = 13171,
  [SMALL_STATE(666)] = 13181,
  [SMALL_STATE(667)] = 13191,
  [SMALL_STATE(668)] = 13201,
  [SMALL_STATE(669)] = 13211,
  [SMALL_STATE(670)] = 13221,
  [SMALL_STATE(671)] = 13231,
  [SMALL_STATE(672)] = 13241,
  [SMALL_STATE(673)] = 13251,
  [SMALL_STATE(674)] = 13261,
  [SMALL_STATE(675)] = 13271,
  [SMALL_STATE(676)] = 13281,
  [SMALL_STATE(677)] = 13291,
  [SMALL_STATE(678)] = 13301,
  [SMALL_STATE(679)] = 13311,
  [SMALL_STATE(680)] = 13321,
  [SMALL_STATE(681)] = 13331,
  [SMALL_STATE(682)] = 13341,
  [SMALL_STATE(683)] = 13351,
  [SMALL_STATE(684)] = 13361,
  [SMALL_STATE(685)] = 13371,
  [SMALL_STATE(686)] = 13381,
  [SMALL_STATE(687)] = 13391,
  [SMALL_STATE(688)] = 13401,
  [SMALL_STATE(689)] = 13411,
  [SMALL_STATE(690)] = 13421,
  [SMALL_STATE(691)] = 13431,
  [SMALL_STATE(692)] = 13441,
  [SMALL_STATE(693)] = 13451,
  [SMALL_STATE(694)] = 13461,
  [SMALL_STATE(695)] = 13466,
  [SMALL_STATE(696)] = 13471,
  [SMALL_STATE(697)] = 13478,
  [SMALL_STATE(698)] = 13485,
  [SMALL_STATE(699)] = 13492,
  [SMALL_STATE(700)] = 13497,
  [SMALL_STATE(701)] = 13504,
  [SMALL_STATE(702)] = 13511,
  [SMALL_STATE(703)] = 13518,
  [SMALL_STATE(704)] = 13525,
  [SMALL_STATE(705)] = 13532,
  [SMALL_STATE(706)] = 13539,
  [SMALL_STATE(707)] = 13546,
  [SMALL_STATE(708)] = 13553,
  [SMALL_STATE(709)] = 13560,
  [SMALL_STATE(710)] = 13567,
  [SMALL_STATE(711)] = 13574,
  [SMALL_STATE(712)] = 13581,
  [SMALL_STATE(713)] = 13588,
  [SMALL_STATE(714)] = 13595,
  [SMALL_STATE(715)] = 13602,
  [SMALL_STATE(716)] = 13609,
  [SMALL_STATE(717)] = 13616,
  [SMALL_STATE(718)] = 13623,
  [SMALL_STATE(719)] = 13630,
  [SMALL_STATE(720)] = 13637,
  [SMALL_STATE(721)] = 13644,
  [SMALL_STATE(722)] = 13651,
  [SMALL_STATE(723)] = 13658,
  [SMALL_STATE(724)] = 13663,
  [SMALL_STATE(725)] = 13670,
  [SMALL_STATE(726)] = 13677,
  [SMALL_STATE(727)] = 13682,
  [SMALL_STATE(728)] = 13689,
  [SMALL_STATE(729)] = 13696,
  [SMALL_STATE(730)] = 13703,
  [SMALL_STATE(731)] = 13710,
  [SMALL_STATE(732)] = 13715,
  [SMALL_STATE(733)] = 13720,
  [SMALL_STATE(734)] = 13727,
  [SMALL_STATE(735)] = 13732,
  [SMALL_STATE(736)] = 13739,
  [SMALL_STATE(737)] = 13744,
  [SMALL_STATE(738)] = 13751,
  [SMALL_STATE(739)] = 13756,
  [SMALL_STATE(740)] = 13761,
  [SMALL_STATE(741)] = 13766,
  [SMALL_STATE(742)] = 13771,
  [SMALL_STATE(743)] = 13776,
  [SMALL_STATE(744)] = 13781,
  [SMALL_STATE(745)] = 13788,
  [SMALL_STATE(746)] = 13795,
  [SMALL_STATE(747)] = 13802,
  [SMALL_STATE(748)] = 13809,
  [SMALL_STATE(749)] = 13814,
  [SMALL_STATE(750)] = 13821,
  [SMALL_STATE(751)] = 13826,
  [SMALL_STATE(752)] = 13833,
  [SMALL_STATE(753)] = 13840,
  [SMALL_STATE(754)] = 13847,
  [SMALL_STATE(755)] = 13852,
  [SMALL_STATE(756)] = 13859,
  [SMALL_STATE(757)] = 13866,
  [SMALL_STATE(758)] = 13873,
  [SMALL_STATE(759)] = 13878,
  [SMALL_STATE(760)] = 13885,
  [SMALL_STATE(761)] = 13890,
  [SMALL_STATE(762)] = 13897,
  [SMALL_STATE(763)] = 13904,
  [SMALL_STATE(764)] = 13911,
  [SMALL_STATE(765)] = 13918,
  [SMALL_STATE(766)] = 13925,
  [SMALL_STATE(767)] = 13930,
  [SMALL_STATE(768)] = 13935,
  [SMALL_STATE(769)] = 13942,
  [SMALL_STATE(770)] = 13949,
  [SMALL_STATE(771)] = 13956,
  [SMALL_STATE(772)] = 13963,
  [SMALL_STATE(773)] = 13970,
  [SMALL_STATE(774)] = 13977,
  [SMALL_STATE(775)] = 13984,
  [SMALL_STATE(776)] = 13991,
  [SMALL_STATE(777)] = 13998,
  [SMALL_STATE(778)] = 14005,
  [SMALL_STATE(779)] = 14012,
  [SMALL_STATE(780)] = 14019,
  [SMALL_STATE(781)] = 14024,
  [SMALL_STATE(782)] = 14031,
  [SMALL_STATE(783)] = 14036,
  [SMALL_STATE(784)] = 14043,
  [SMALL_STATE(785)] = 14050,
  [SMALL_STATE(786)] = 14057,
  [SMALL_STATE(787)] = 14064,
  [SMALL_STATE(788)] = 14071,
  [SMALL_STATE(789)] = 14076,
  [SMALL_STATE(790)] = 14083,
  [SMALL_STATE(791)] = 14090,
  [SMALL_STATE(792)] = 14097,
  [SMALL_STATE(793)] = 14104,
  [SMALL_STATE(794)] = 14111,
  [SMALL_STATE(795)] = 14116,
  [SMALL_STATE(796)] = 14123,
  [SMALL_STATE(797)] = 14128,
  [SMALL_STATE(798)] = 14135,
  [SMALL_STATE(799)] = 14142,
  [SMALL_STATE(800)] = 14149,
  [SMALL_STATE(801)] = 14156,
  [SMALL_STATE(802)] = 14161,
  [SMALL_STATE(803)] = 14166,
  [SMALL_STATE(804)] = 14171,
  [SMALL_STATE(805)] = 14178,
  [SMALL_STATE(806)] = 14185,
  [SMALL_STATE(807)] = 14192,
  [SMALL_STATE(808)] = 14199,
  [SMALL_STATE(809)] = 14206,
  [SMALL_STATE(810)] = 14213,
  [SMALL_STATE(811)] = 14218,
  [SMALL_STATE(812)] = 14225,
  [SMALL_STATE(813)] = 14232,
  [SMALL_STATE(814)] = 14239,
  [SMALL_STATE(815)] = 14246,
  [SMALL_STATE(816)] = 14253,
  [SMALL_STATE(817)] = 14260,
  [SMALL_STATE(818)] = 14267,
  [SMALL_STATE(819)] = 14274,
  [SMALL_STATE(820)] = 14281,
  [SMALL_STATE(821)] = 14288,
  [SMALL_STATE(822)] = 14295,
  [SMALL_STATE(823)] = 14302,
  [SMALL_STATE(824)] = 14309,
  [SMALL_STATE(825)] = 14314,
  [SMALL_STATE(826)] = 14321,
  [SMALL_STATE(827)] = 14328,
  [SMALL_STATE(828)] = 14335,
  [SMALL_STATE(829)] = 14342,
  [SMALL_STATE(830)] = 14349,
  [SMALL_STATE(831)] = 14356,
  [SMALL_STATE(832)] = 14363,
  [SMALL_STATE(833)] = 14370,
  [SMALL_STATE(834)] = 14377,
  [SMALL_STATE(835)] = 14384,
  [SMALL_STATE(836)] = 14391,
  [SMALL_STATE(837)] = 14398,
  [SMALL_STATE(838)] = 14405,
  [SMALL_STATE(839)] = 14412,
  [SMALL_STATE(840)] = 14419,
  [SMALL_STATE(841)] = 14426,
  [SMALL_STATE(842)] = 14433,
  [SMALL_STATE(843)] = 14440,
  [SMALL_STATE(844)] = 14447,
  [SMALL_STATE(845)] = 14452,
  [SMALL_STATE(846)] = 14457,
  [SMALL_STATE(847)] = 14462,
  [SMALL_STATE(848)] = 14469,
  [SMALL_STATE(849)] = 14476,
  [SMALL_STATE(850)] = 14481,
  [SMALL_STATE(851)] = 14485,
  [SMALL_STATE(852)] = 14489,
  [SMALL_STATE(853)] = 14493,
  [SMALL_STATE(854)] = 14497,
  [SMALL_STATE(855)] = 14501,
  [SMALL_STATE(856)] = 14505,
  [SMALL_STATE(857)] = 14509,
  [SMALL_STATE(858)] = 14513,
  [SMALL_STATE(859)] = 14517,
  [SMALL_STATE(860)] = 14521,
  [SMALL_STATE(861)] = 14525,
  [SMALL_STATE(862)] = 14529,
  [SMALL_STATE(863)] = 14533,
  [SMALL_STATE(864)] = 14537,
  [SMALL_STATE(865)] = 14541,
  [SMALL_STATE(866)] = 14545,
  [SMALL_STATE(867)] = 14549,
  [SMALL_STATE(868)] = 14553,
  [SMALL_STATE(869)] = 14557,
  [SMALL_STATE(870)] = 14561,
  [SMALL_STATE(871)] = 14565,
  [SMALL_STATE(872)] = 14569,
  [SMALL_STATE(873)] = 14573,
  [SMALL_STATE(874)] = 14577,
  [SMALL_STATE(875)] = 14581,
  [SMALL_STATE(876)] = 14585,
  [SMALL_STATE(877)] = 14589,
  [SMALL_STATE(878)] = 14593,
  [SMALL_STATE(879)] = 14597,
  [SMALL_STATE(880)] = 14601,
  [SMALL_STATE(881)] = 14605,
  [SMALL_STATE(882)] = 14609,
  [SMALL_STATE(883)] = 14613,
  [SMALL_STATE(884)] = 14617,
  [SMALL_STATE(885)] = 14621,
  [SMALL_STATE(886)] = 14625,
  [SMALL_STATE(887)] = 14629,
  [SMALL_STATE(888)] = 14633,
  [SMALL_STATE(889)] = 14637,
  [SMALL_STATE(890)] = 14641,
  [SMALL_STATE(891)] = 14645,
  [SMALL_STATE(892)] = 14649,
  [SMALL_STATE(893)] = 14653,
  [SMALL_STATE(894)] = 14657,
  [SMALL_STATE(895)] = 14661,
  [SMALL_STATE(896)] = 14665,
  [SMALL_STATE(897)] = 14669,
  [SMALL_STATE(898)] = 14673,
  [SMALL_STATE(899)] = 14677,
  [SMALL_STATE(900)] = 14681,
  [SMALL_STATE(901)] = 14685,
  [SMALL_STATE(902)] = 14689,
  [SMALL_STATE(903)] = 14693,
  [SMALL_STATE(904)] = 14697,
  [SMALL_STATE(905)] = 14701,
  [SMALL_STATE(906)] = 14705,
  [SMALL_STATE(907)] = 14709,
  [SMALL_STATE(908)] = 14713,
  [SMALL_STATE(909)] = 14717,
  [SMALL_STATE(910)] = 14721,
  [SMALL_STATE(911)] = 14725,
  [SMALL_STATE(912)] = 14729,
  [SMALL_STATE(913)] = 14733,
  [SMALL_STATE(914)] = 14737,
  [SMALL_STATE(915)] = 14741,
  [SMALL_STATE(916)] = 14745,
  [SMALL_STATE(917)] = 14749,
  [SMALL_STATE(918)] = 14753,
  [SMALL_STATE(919)] = 14757,
  [SMALL_STATE(920)] = 14761,
  [SMALL_STATE(921)] = 14765,
  [SMALL_STATE(922)] = 14769,
  [SMALL_STATE(923)] = 14773,
  [SMALL_STATE(924)] = 14777,
  [SMALL_STATE(925)] = 14781,
  [SMALL_STATE(926)] = 14785,
  [SMALL_STATE(927)] = 14789,
  [SMALL_STATE(928)] = 14793,
  [SMALL_STATE(929)] = 14797,
  [SMALL_STATE(930)] = 14801,
  [SMALL_STATE(931)] = 14805,
  [SMALL_STATE(932)] = 14809,
  [SMALL_STATE(933)] = 14813,
  [SMALL_STATE(934)] = 14817,
  [SMALL_STATE(935)] = 14821,
  [SMALL_STATE(936)] = 14825,
  [SMALL_STATE(937)] = 14829,
  [SMALL_STATE(938)] = 14833,
  [SMALL_STATE(939)] = 14837,
  [SMALL_STATE(940)] = 14841,
  [SMALL_STATE(941)] = 14845,
  [SMALL_STATE(942)] = 14849,
  [SMALL_STATE(943)] = 14853,
  [SMALL_STATE(944)] = 14857,
  [SMALL_STATE(945)] = 14861,
  [SMALL_STATE(946)] = 14865,
  [SMALL_STATE(947)] = 14869,
  [SMALL_STATE(948)] = 14873,
  [SMALL_STATE(949)] = 14877,
  [SMALL_STATE(950)] = 14881,
  [SMALL_STATE(951)] = 14885,
  [SMALL_STATE(952)] = 14889,
  [SMALL_STATE(953)] = 14893,
  [SMALL_STATE(954)] = 14897,
  [SMALL_STATE(955)] = 14901,
  [SMALL_STATE(956)] = 14905,
  [SMALL_STATE(957)] = 14909,
  [SMALL_STATE(958)] = 14913,
  [SMALL_STATE(959)] = 14917,
  [SMALL_STATE(960)] = 14921,
  [SMALL_STATE(961)] = 14925,
  [SMALL_STATE(962)] = 14929,
  [SMALL_STATE(963)] = 14933,
  [SMALL_STATE(964)] = 14937,
  [SMALL_STATE(965)] = 14941,
  [SMALL_STATE(966)] = 14945,
  [SMALL_STATE(967)] = 14949,
  [SMALL_STATE(968)] = 14953,
  [SMALL_STATE(969)] = 14957,
  [SMALL_STATE(970)] = 14961,
  [SMALL_STATE(971)] = 14965,
  [SMALL_STATE(972)] = 14969,
  [SMALL_STATE(973)] = 14973,
  [SMALL_STATE(974)] = 14977,
  [SMALL_STATE(975)] = 14981,
  [SMALL_STATE(976)] = 14985,
  [SMALL_STATE(977)] = 14989,
  [SMALL_STATE(978)] = 14993,
  [SMALL_STATE(979)] = 14997,
  [SMALL_STATE(980)] = 15001,
  [SMALL_STATE(981)] = 15005,
  [SMALL_STATE(982)] = 15009,
  [SMALL_STATE(983)] = 15013,
  [SMALL_STATE(984)] = 15017,
  [SMALL_STATE(985)] = 15021,
  [SMALL_STATE(986)] = 15025,
  [SMALL_STATE(987)] = 15029,
  [SMALL_STATE(988)] = 15033,
  [SMALL_STATE(989)] = 15037,
  [SMALL_STATE(990)] = 15041,
  [SMALL_STATE(991)] = 15045,
  [SMALL_STATE(992)] = 15049,
  [SMALL_STATE(993)] = 15053,
  [SMALL_STATE(994)] = 15057,
  [SMALL_STATE(995)] = 15061,
  [SMALL_STATE(996)] = 15065,
  [SMALL_STATE(997)] = 15069,
  [SMALL_STATE(998)] = 15073,
  [SMALL_STATE(999)] = 15077,
  [SMALL_STATE(1000)] = 15081,
  [SMALL_STATE(1001)] = 15085,
  [SMALL_STATE(1002)] = 15089,
  [SMALL_STATE(1003)] = 15093,
  [SMALL_STATE(1004)] = 15097,
  [SMALL_STATE(1005)] = 15101,
  [SMALL_STATE(1006)] = 15105,
  [SMALL_STATE(1007)] = 15109,
  [SMALL_STATE(1008)] = 15113,
  [SMALL_STATE(1009)] = 15117,
  [SMALL_STATE(1010)] = 15121,
  [SMALL_STATE(1011)] = 15125,
  [SMALL_STATE(1012)] = 15129,
  [SMALL_STATE(1013)] = 15133,
  [SMALL_STATE(1014)] = 15137,
  [SMALL_STATE(1015)] = 15141,
  [SMALL_STATE(1016)] = 15145,
  [SMALL_STATE(1017)] = 15149,
  [SMALL_STATE(1018)] = 15153,
  [SMALL_STATE(1019)] = 15157,
  [SMALL_STATE(1020)] = 15161,
  [SMALL_STATE(1021)] = 15165,
  [SMALL_STATE(1022)] = 15169,
  [SMALL_STATE(1023)] = 15173,
  [SMALL_STATE(1024)] = 15177,
  [SMALL_STATE(1025)] = 15181,
  [SMALL_STATE(1026)] = 15185,
  [SMALL_STATE(1027)] = 15189,
  [SMALL_STATE(1028)] = 15193,
  [SMALL_STATE(1029)] = 15197,
  [SMALL_STATE(1030)] = 15201,
  [SMALL_STATE(1031)] = 15205,
  [SMALL_STATE(1032)] = 15209,
  [SMALL_STATE(1033)] = 15213,
  [SMALL_STATE(1034)] = 15217,
  [SMALL_STATE(1035)] = 15221,
  [SMALL_STATE(1036)] = 15225,
  [SMALL_STATE(1037)] = 15229,
  [SMALL_STATE(1038)] = 15233,
  [SMALL_STATE(1039)] = 15237,
  [SMALL_STATE(1040)] = 15241,
  [SMALL_STATE(1041)] = 15245,
  [SMALL_STATE(1042)] = 15249,
  [SMALL_STATE(1043)] = 15253,
  [SMALL_STATE(1044)] = 15257,
  [SMALL_STATE(1045)] = 15261,
  [SMALL_STATE(1046)] = 15265,
  [SMALL_STATE(1047)] = 15269,
  [SMALL_STATE(1048)] = 15273,
  [SMALL_STATE(1049)] = 15277,
  [SMALL_STATE(1050)] = 15281,
  [SMALL_STATE(1051)] = 15285,
  [SMALL_STATE(1052)] = 15289,
  [SMALL_STATE(1053)] = 15293,
  [SMALL_STATE(1054)] = 15297,
  [SMALL_STATE(1055)] = 15301,
  [SMALL_STATE(1056)] = 15305,
  [SMALL_STATE(1057)] = 15309,
  [SMALL_STATE(1058)] = 15313,
  [SMALL_STATE(1059)] = 15317,
  [SMALL_STATE(1060)] = 15321,
  [SMALL_STATE(1061)] = 15325,
  [SMALL_STATE(1062)] = 15329,
  [SMALL_STATE(1063)] = 15333,
  [SMALL_STATE(1064)] = 15337,
  [SMALL_STATE(1065)] = 15341,
  [SMALL_STATE(1066)] = 15345,
  [SMALL_STATE(1067)] = 15349,
  [SMALL_STATE(1068)] = 15353,
  [SMALL_STATE(1069)] = 15357,
  [SMALL_STATE(1070)] = 15361,
  [SMALL_STATE(1071)] = 15365,
  [SMALL_STATE(1072)] = 15369,
  [SMALL_STATE(1073)] = 15373,
  [SMALL_STATE(1074)] = 15377,
  [SMALL_STATE(1075)] = 15381,
  [SMALL_STATE(1076)] = 15385,
  [SMALL_STATE(1077)] = 15389,
  [SMALL_STATE(1078)] = 15393,
  [SMALL_STATE(1079)] = 15397,
  [SMALL_STATE(1080)] = 15401,
  [SMALL_STATE(1081)] = 15405,
  [SMALL_STATE(1082)] = 15409,
  [SMALL_STATE(1083)] = 15413,
  [SMALL_STATE(1084)] = 15417,
  [SMALL_STATE(1085)] = 15421,
  [SMALL_STATE(1086)] = 15425,
  [SMALL_STATE(1087)] = 15429,
  [SMALL_STATE(1088)] = 15433,
  [SMALL_STATE(1089)] = 15437,
  [SMALL_STATE(1090)] = 15441,
  [SMALL_STATE(1091)] = 15445,
  [SMALL_STATE(1092)] = 15449,
  [SMALL_STATE(1093)] = 15453,
  [SMALL_STATE(1094)] = 15457,
  [SMALL_STATE(1095)] = 15461,
  [SMALL_STATE(1096)] = 15465,
  [SMALL_STATE(1097)] = 15469,
  [SMALL_STATE(1098)] = 15473,
  [SMALL_STATE(1099)] = 15477,
  [SMALL_STATE(1100)] = 15481,
  [SMALL_STATE(1101)] = 15485,
  [SMALL_STATE(1102)] = 15489,
  [SMALL_STATE(1103)] = 15493,
  [SMALL_STATE(1104)] = 15497,
  [SMALL_STATE(1105)] = 15501,
  [SMALL_STATE(1106)] = 15505,
  [SMALL_STATE(1107)] = 15509,
  [SMALL_STATE(1108)] = 15513,
  [SMALL_STATE(1109)] = 15517,
  [SMALL_STATE(1110)] = 15521,
  [SMALL_STATE(1111)] = 15525,
  [SMALL_STATE(1112)] = 15529,
  [SMALL_STATE(1113)] = 15533,
  [SMALL_STATE(1114)] = 15537,
  [SMALL_STATE(1115)] = 15541,
  [SMALL_STATE(1116)] = 15545,
  [SMALL_STATE(1117)] = 15549,
  [SMALL_STATE(1118)] = 15553,
  [SMALL_STATE(1119)] = 15557,
  [SMALL_STATE(1120)] = 15561,
  [SMALL_STATE(1121)] = 15565,
  [SMALL_STATE(1122)] = 15569,
  [SMALL_STATE(1123)] = 15573,
  [SMALL_STATE(1124)] = 15577,
  [SMALL_STATE(1125)] = 15581,
  [SMALL_STATE(1126)] = 15585,
  [SMALL_STATE(1127)] = 15589,
  [SMALL_STATE(1128)] = 15593,
  [SMALL_STATE(1129)] = 15597,
  [SMALL_STATE(1130)] = 15601,
  [SMALL_STATE(1131)] = 15605,
  [SMALL_STATE(1132)] = 15609,
  [SMALL_STATE(1133)] = 15613,
  [SMALL_STATE(1134)] = 15617,
  [SMALL_STATE(1135)] = 15621,
  [SMALL_STATE(1136)] = 15625,
  [SMALL_STATE(1137)] = 15629,
  [SMALL_STATE(1138)] = 15633,
  [SMALL_STATE(1139)] = 15637,
  [SMALL_STATE(1140)] = 15641,
  [SMALL_STATE(1141)] = 15645,
  [SMALL_STATE(1142)] = 15649,
  [SMALL_STATE(1143)] = 15653,
  [SMALL_STATE(1144)] = 15657,
  [SMALL_STATE(1145)] = 15661,
  [SMALL_STATE(1146)] = 15665,
  [SMALL_STATE(1147)] = 15669,
  [SMALL_STATE(1148)] = 15673,
  [SMALL_STATE(1149)] = 15677,
  [SMALL_STATE(1150)] = 15681,
  [SMALL_STATE(1151)] = 15685,
  [SMALL_STATE(1152)] = 15689,
  [SMALL_STATE(1153)] = 15693,
  [SMALL_STATE(1154)] = 15697,
  [SMALL_STATE(1155)] = 15701,
  [SMALL_STATE(1156)] = 15705,
  [SMALL_STATE(1157)] = 15709,
  [SMALL_STATE(1158)] = 15713,
  [SMALL_STATE(1159)] = 15717,
  [SMALL_STATE(1160)] = 15721,
  [SMALL_STATE(1161)] = 15725,
  [SMALL_STATE(1162)] = 15729,
  [SMALL_STATE(1163)] = 15733,
  [SMALL_STATE(1164)] = 15737,
  [SMALL_STATE(1165)] = 15741,
  [SMALL_STATE(1166)] = 15745,
  [SMALL_STATE(1167)] = 15749,
  [SMALL_STATE(1168)] = 15753,
  [SMALL_STATE(1169)] = 15757,
  [SMALL_STATE(1170)] = 15761,
  [SMALL_STATE(1171)] = 15765,
  [SMALL_STATE(1172)] = 15769,
  [SMALL_STATE(1173)] = 15773,
  [SMALL_STATE(1174)] = 15777,
  [SMALL_STATE(1175)] = 15781,
  [SMALL_STATE(1176)] = 15785,
  [SMALL_STATE(1177)] = 15789,
  [SMALL_STATE(1178)] = 15793,
  [SMALL_STATE(1179)] = 15797,
  [SMALL_STATE(1180)] = 15801,
  [SMALL_STATE(1181)] = 15805,
  [SMALL_STATE(1182)] = 15809,
  [SMALL_STATE(1183)] = 15813,
  [SMALL_STATE(1184)] = 15817,
  [SMALL_STATE(1185)] = 15821,
  [SMALL_STATE(1186)] = 15825,
  [SMALL_STATE(1187)] = 15829,
  [SMALL_STATE(1188)] = 15833,
  [SMALL_STATE(1189)] = 15837,
  [SMALL_STATE(1190)] = 15841,
  [SMALL_STATE(1191)] = 15845,
  [SMALL_STATE(1192)] = 15849,
  [SMALL_STATE(1193)] = 15853,
  [SMALL_STATE(1194)] = 15857,
  [SMALL_STATE(1195)] = 15861,
  [SMALL_STATE(1196)] = 15865,
  [SMALL_STATE(1197)] = 15869,
  [SMALL_STATE(1198)] = 15873,
  [SMALL_STATE(1199)] = 15877,
  [SMALL_STATE(1200)] = 15881,
  [SMALL_STATE(1201)] = 15885,
  [SMALL_STATE(1202)] = 15889,
  [SMALL_STATE(1203)] = 15893,
  [SMALL_STATE(1204)] = 15897,
  [SMALL_STATE(1205)] = 15901,
  [SMALL_STATE(1206)] = 15905,
  [SMALL_STATE(1207)] = 15909,
  [SMALL_STATE(1208)] = 15913,
  [SMALL_STATE(1209)] = 15917,
  [SMALL_STATE(1210)] = 15921,
  [SMALL_STATE(1211)] = 15925,
  [SMALL_STATE(1212)] = 15929,
  [SMALL_STATE(1213)] = 15933,
  [SMALL_STATE(1214)] = 15937,
  [SMALL_STATE(1215)] = 15941,
  [SMALL_STATE(1216)] = 15945,
  [SMALL_STATE(1217)] = 15949,
  [SMALL_STATE(1218)] = 15953,
  [SMALL_STATE(1219)] = 15957,
  [SMALL_STATE(1220)] = 15961,
  [SMALL_STATE(1221)] = 15965,
  [SMALL_STATE(1222)] = 15969,
  [SMALL_STATE(1223)] = 15973,
  [SMALL_STATE(1224)] = 15977,
  [SMALL_STATE(1225)] = 15981,
  [SMALL_STATE(1226)] = 15985,
  [SMALL_STATE(1227)] = 15989,
  [SMALL_STATE(1228)] = 15993,
  [SMALL_STATE(1229)] = 15997,
  [SMALL_STATE(1230)] = 16001,
  [SMALL_STATE(1231)] = 16005,
  [SMALL_STATE(1232)] = 16009,
  [SMALL_STATE(1233)] = 16013,
  [SMALL_STATE(1234)] = 16017,
  [SMALL_STATE(1235)] = 16021,
  [SMALL_STATE(1236)] = 16025,
  [SMALL_STATE(1237)] = 16029,
  [SMALL_STATE(1238)] = 16033,
  [SMALL_STATE(1239)] = 16037,
  [SMALL_STATE(1240)] = 16041,
  [SMALL_STATE(1241)] = 16045,
  [SMALL_STATE(1242)] = 16049,
  [SMALL_STATE(1243)] = 16053,
  [SMALL_STATE(1244)] = 16057,
  [SMALL_STATE(1245)] = 16061,
  [SMALL_STATE(1246)] = 16065,
  [SMALL_STATE(1247)] = 16069,
  [SMALL_STATE(1248)] = 16073,
  [SMALL_STATE(1249)] = 16077,
  [SMALL_STATE(1250)] = 16081,
  [SMALL_STATE(1251)] = 16085,
  [SMALL_STATE(1252)] = 16089,
  [SMALL_STATE(1253)] = 16093,
  [SMALL_STATE(1254)] = 16097,
  [SMALL_STATE(1255)] = 16101,
  [SMALL_STATE(1256)] = 16105,
  [SMALL_STATE(1257)] = 16109,
  [SMALL_STATE(1258)] = 16113,
  [SMALL_STATE(1259)] = 16117,
  [SMALL_STATE(1260)] = 16121,
  [SMALL_STATE(1261)] = 16125,
  [SMALL_STATE(1262)] = 16129,
  [SMALL_STATE(1263)] = 16133,
  [SMALL_STATE(1264)] = 16137,
  [SMALL_STATE(1265)] = 16141,
  [SMALL_STATE(1266)] = 16145,
  [SMALL_STATE(1267)] = 16149,
  [SMALL_STATE(1268)] = 16153,
  [SMALL_STATE(1269)] = 16157,
  [SMALL_STATE(1270)] = 16161,
  [SMALL_STATE(1271)] = 16165,
  [SMALL_STATE(1272)] = 16169,
  [SMALL_STATE(1273)] = 16173,
  [SMALL_STATE(1274)] = 16177,
  [SMALL_STATE(1275)] = 16181,
  [SMALL_STATE(1276)] = 16185,
  [SMALL_STATE(1277)] = 16189,
  [SMALL_STATE(1278)] = 16193,
  [SMALL_STATE(1279)] = 16197,
  [SMALL_STATE(1280)] = 16201,
  [SMALL_STATE(1281)] = 16205,
  [SMALL_STATE(1282)] = 16209,
  [SMALL_STATE(1283)] = 16213,
  [SMALL_STATE(1284)] = 16217,
  [SMALL_STATE(1285)] = 16221,
  [SMALL_STATE(1286)] = 16225,
  [SMALL_STATE(1287)] = 16229,
  [SMALL_STATE(1288)] = 16233,
  [SMALL_STATE(1289)] = 16237,
  [SMALL_STATE(1290)] = 16241,
  [SMALL_STATE(1291)] = 16245,
  [SMALL_STATE(1292)] = 16249,
  [SMALL_STATE(1293)] = 16253,
  [SMALL_STATE(1294)] = 16257,
  [SMALL_STATE(1295)] = 16261,
  [SMALL_STATE(1296)] = 16265,
  [SMALL_STATE(1297)] = 16269,
  [SMALL_STATE(1298)] = 16273,
  [SMALL_STATE(1299)] = 16277,
  [SMALL_STATE(1300)] = 16281,
  [SMALL_STATE(1301)] = 16285,
  [SMALL_STATE(1302)] = 16289,
  [SMALL_STATE(1303)] = 16293,
  [SMALL_STATE(1304)] = 16297,
  [SMALL_STATE(1305)] = 16301,
  [SMALL_STATE(1306)] = 16305,
  [SMALL_STATE(1307)] = 16309,
  [SMALL_STATE(1308)] = 16313,
  [SMALL_STATE(1309)] = 16317,
  [SMALL_STATE(1310)] = 16321,
  [SMALL_STATE(1311)] = 16325,
  [SMALL_STATE(1312)] = 16329,
  [SMALL_STATE(1313)] = 16333,
  [SMALL_STATE(1314)] = 16337,
  [SMALL_STATE(1315)] = 16341,
  [SMALL_STATE(1316)] = 16345,
  [SMALL_STATE(1317)] = 16349,
  [SMALL_STATE(1318)] = 16353,
  [SMALL_STATE(1319)] = 16357,
  [SMALL_STATE(1320)] = 16361,
  [SMALL_STATE(1321)] = 16365,
  [SMALL_STATE(1322)] = 16369,
  [SMALL_STATE(1323)] = 16373,
  [SMALL_STATE(1324)] = 16377,
  [SMALL_STATE(1325)] = 16381,
  [SMALL_STATE(1326)] = 16385,
  [SMALL_STATE(1327)] = 16389,
  [SMALL_STATE(1328)] = 16393,
  [SMALL_STATE(1329)] = 16397,
  [SMALL_STATE(1330)] = 16401,
  [SMALL_STATE(1331)] = 16405,
  [SMALL_STATE(1332)] = 16409,
  [SMALL_STATE(1333)] = 16413,
  [SMALL_STATE(1334)] = 16417,
  [SMALL_STATE(1335)] = 16421,
  [SMALL_STATE(1336)] = 16425,
  [SMALL_STATE(1337)] = 16429,
  [SMALL_STATE(1338)] = 16433,
  [SMALL_STATE(1339)] = 16437,
  [SMALL_STATE(1340)] = 16441,
  [SMALL_STATE(1341)] = 16445,
  [SMALL_STATE(1342)] = 16449,
  [SMALL_STATE(1343)] = 16453,
  [SMALL_STATE(1344)] = 16457,
  [SMALL_STATE(1345)] = 16461,
  [SMALL_STATE(1346)] = 16465,
  [SMALL_STATE(1347)] = 16469,
  [SMALL_STATE(1348)] = 16473,
  [SMALL_STATE(1349)] = 16477,
  [SMALL_STATE(1350)] = 16481,
  [SMALL_STATE(1351)] = 16485,
  [SMALL_STATE(1352)] = 16489,
  [SMALL_STATE(1353)] = 16493,
  [SMALL_STATE(1354)] = 16497,
  [SMALL_STATE(1355)] = 16501,
  [SMALL_STATE(1356)] = 16505,
  [SMALL_STATE(1357)] = 16509,
  [SMALL_STATE(1358)] = 16513,
  [SMALL_STATE(1359)] = 16517,
  [SMALL_STATE(1360)] = 16521,
  [SMALL_STATE(1361)] = 16525,
  [SMALL_STATE(1362)] = 16529,
  [SMALL_STATE(1363)] = 16533,
  [SMALL_STATE(1364)] = 16537,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1302),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1364),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1363),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1362),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(454),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(467),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(623),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1302),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(548),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(422),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(432),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1364),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1363),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(426),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(429),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(462),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(425),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1362),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 21),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 21),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1340),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(822),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 45),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 45),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 45),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 17),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1285),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1283),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1280),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(463),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1158),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8, .production_id = 45),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9, .production_id = 45),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(906),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1072),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4, .production_id = 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 38),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(1050),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(985),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 37),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 8),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 28),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 5),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_options_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_options_repeat1, 2), SHIFT_REPEAT(558),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1142),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 39),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 56),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 55),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2, .production_id = 45),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 5),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 17),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1, .production_id = 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 11, .production_id = 71),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6, .production_id = 9),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 60),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(795),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 100),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 99),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 9),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 25),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2), SHIFT_REPEAT(912),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 9),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 37),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2, .production_id = 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 115),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(487),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 114),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3, .production_id = 6),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1287),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6, .production_id = 42),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 55),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 55),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3, .production_id = 45),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8, .production_id = 25),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 55),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 110),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 119),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2, .production_id = 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4, .production_id = 18),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 37),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15, .production_id = 87),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 104),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3, .production_id = 6),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(834),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 25),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 9),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3, .production_id = 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 37),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4, .production_id = 45),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 25),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 10),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3, .production_id = 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3, .production_id = 12),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1222),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3, .production_id = 13),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1214),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3, .production_id = 9),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1233),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3, .production_id = 14),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1197),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 66),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 35),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5, .production_id = 34),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 32),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 29),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 26),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 24),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 51),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 58),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4, .production_id = 18),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 52),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2, .production_id = 22),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 3, .production_id = 45),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 44),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 43),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_name, 1, .production_id = 19),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 8),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 11, .production_id = 70),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 42),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 91),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 90),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 89),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 44),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 88),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 11),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 45),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 25),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 86),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 85),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18, .production_id = 107),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 84),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 25),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 57),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 108),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3, .production_id = 11),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 42),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 109),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 6),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 9),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 83),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 8, .production_id = 59),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 93),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 103),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4, .production_id = 9),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4, .production_id = 6),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 82),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 81),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4, .production_id = 14),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 20),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 55),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 14),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 94),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 78),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 55),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 95),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 114),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3, .production_id = 6),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 104),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 18),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 21, .production_id = 118),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 12, .production_id = 71),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 96),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 4),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 42),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6, .production_id = 36),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 99),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 97),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 64),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 37),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6, .production_id = 25),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 13, .production_id = 77),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 7, .production_id = 54),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 53),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 9),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 92),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 101),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 7, .production_id = 50),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9, .production_id = 64),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 7, .production_id = 49),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 7, .production_id = 48),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 7, .production_id = 47),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 111),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 70),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 80),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 6),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8, .production_id = 46),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 11, .production_id = 73),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 106),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7, .production_id = 46),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 37),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 78),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10, .production_id = 60),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 25),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 112),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 113),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 20, .production_id = 116),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 68),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 23, .production_id = 119),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 76),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 25),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4, .production_id = 6),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 27),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5, .production_id = 28),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 9),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 30),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5, .production_id = 31),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 33),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7, .production_id = 42),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 110),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 105),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 36),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 12, .production_id = 77),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 3),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 67),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 115),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 21, .production_id = 117),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 16, .production_id = 87),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 100),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8, .production_id = 44),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 5),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 102),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7, .production_id = 9),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(846),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1212),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1286),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1175),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1174),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1359),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1357),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1049),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1154),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1355),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1044),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1043),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1042),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1039),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1169),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1168),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1189),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1109),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1184),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1182),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1276),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1352),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1351),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1350),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1349),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(839),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1071] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(440),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1, .production_id = 1),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1343),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1342),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1130),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1126),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1335),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1334),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1335),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1272),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 1),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1292),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(963),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 3),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1148),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(819),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 1),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1275),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1193),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 1),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1165),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(832),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 2),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1347),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1344),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1, .production_id = 72),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(441),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1341),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1, .production_id = 1),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1077),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1331),
  [1303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1329),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1320),
  [1311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1316),
  [1323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1309),
  [1331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1293),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(423),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2, .production_id = 74),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1, .production_id = 75),
  [1372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2), SHIFT_REPEAT(924),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1128),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(58),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(798),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(744),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(776),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1360),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(718),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(829),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(715),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 1),
  [1460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(420),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(591),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(797),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(214),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(1052),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2, .production_id = 79),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2), SHIFT_REPEAT(700),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1076),
  [1530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1216),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1091),
  [1572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(761),
  [1574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1093),
  [1576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1212),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1213),
  [1590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4, .production_id = 1),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1329),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 16),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 15),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 98),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 69),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1000),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1210),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1206),
  [1650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 3, .production_id = 65),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1246),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1244),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1248),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 7),
  [1664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1250),
  [1666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1254),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 1),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1265),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1279),
  [1698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1298),
  [1710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [1712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1299),
  [1714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [1716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1300),
  [1718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1301),
  [1722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1238),
  [1726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1306),
  [1730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1313),
  [1734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [1736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1318),
  [1738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(773),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 41),
  [1746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1322),
  [1748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [1750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1323),
  [1752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1324),
  [1756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [1758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1336),
  [1760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 63),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 62),
  [1790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 61),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [1800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [1934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [2074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1071),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [2150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 1),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [2182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 72),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1116),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1120),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1122),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [2214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 40),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1125),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1127),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1146),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1149),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1152),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1155),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [2282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 23),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1159),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1162),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1164),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1166),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1167),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1170),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1171),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1179),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1180),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [2350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1190),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1191),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1196),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1199),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [2384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1201),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1204),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1205),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1207),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1209),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [2420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [2422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1219),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [2432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1082),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1227),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1228),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1230),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1231),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1232),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [2458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [2460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1234),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1235),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1237),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1239),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1240),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1241),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1243),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1245),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [2490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [2492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [2496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [2498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [2500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [2504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1258),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1259),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1261),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [2514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [2518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1266),
  [2520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [2522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1269),
  [2526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1270),
  [2528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1271),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [2532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1273),
  [2534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1274),
  [2536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [2538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [2540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1277),
  [2544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1278),
  [2546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1223),
  [2548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [2550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1281),
  [2552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1282),
  [2554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [2556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [2558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1284),
  [2562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [2564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1104),
  [2566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1106),
  [2568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [2570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [2572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1111),
  [2574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [2576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [2578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [2580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [2582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1136),
  [2584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [2586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1295),
  [2588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1296),
  [2590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [2592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [2594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [2596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [2598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [2600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1139),
  [2602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1303),
  [2604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1304),
  [2606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1141),
  [2608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1307),
  [2612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1308),
  [2614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [2616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [2618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1310),
  [2620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [2622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [2624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1312),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [2628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [2630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [2632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [2634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1315),
  [2636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [2638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [2640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [2646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [2648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [2650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1173),
  [2652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [2654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [2656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [2658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1317),
  [2660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [2662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [2664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [2666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1203),
  [2668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1211),
  [2670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1215),
  [2672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1221),
  [2674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [2676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1326),
  [2678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1327),
  [2680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1328),
  [2682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1225),
  [2684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [2686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1330),
  [2688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [2690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [2692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1332),
  [2694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [2696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [2698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [2700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [2702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [2704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1337),
  [2706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1247),
  [2708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [2710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1249),
  [2712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [2714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1252),
  [2716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1253),
  [2718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1255),
  [2720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1256),
  [2722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [2724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1345),
  [2726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1346),
  [2728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, .production_id = 5),
  [2730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [2732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1257),
  [2734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1348),
  [2736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [2738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1264),
  [2740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 4),
  [2742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1268),
  [2744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [2746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [2748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [2750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [2752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [2754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [2756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [2758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [2760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [2762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1356),
  [2764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [2766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [2768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [2770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1289),
  [2772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [2774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [2776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [2778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [2780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [2782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [2784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [2786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [2788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [2790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [2792] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [2796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [2798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
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
