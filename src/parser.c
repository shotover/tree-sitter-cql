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
#define STATE_COUNT 1401
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 308
#define ALIAS_COUNT 25
#define TOKEN_COUNT 145
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 23
#define PRODUCTION_ID_COUNT 119

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
  aux_sym_column_list_repeat1 = 291,
  aux_sym_expression_list_repeat1 = 292,
  aux_sym_assignment_map_repeat1 = 293,
  aux_sym_update_repeat1 = 294,
  aux_sym_init_cond_list_nested_repeat1 = 295,
  aux_sym_init_cond_hash_repeat1 = 296,
  aux_sym_materialized_view_where_repeat1 = 297,
  aux_sym_materialized_view_options_repeat1 = 298,
  aux_sym_create_function_repeat1 = 299,
  aux_sym_data_type_definition_repeat1 = 300,
  aux_sym_role_with_repeat1 = 301,
  aux_sym_option_hash_repeat1 = 302,
  aux_sym_column_definition_list_repeat1 = 303,
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
  [aux_sym_column_list_repeat1] = "column_list_repeat1",
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
  [aux_sym_column_list_repeat1] = aux_sym_column_list_repeat1,
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
    [0] = anon_alias_sym_keyspace,
  },
  [7] = {
    [2] = anon_alias_sym_role,
  },
  [8] = {
    [0] = anon_alias_sym_trigger,
  },
  [9] = {
    [0] = anon_alias_sym_user,
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
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_table,
  },
  [16] = {
    [3] = anon_alias_sym_materialized_view,
  },
  [17] = {
    [0] = anon_alias_sym_role,
  },
  [18] = {
    [3] = anon_alias_sym_role,
  },
  [19] = {
    [0] = anon_alias_sym_function_name,
  },
  [20] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_table,
  },
  [21] = {
    [0] = anon_alias_sym_column,
  },
  [22] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_table,
  },
  [23] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_trigger,
  },
  [24] = {
    [4] = anon_alias_sym_table,
  },
  [25] = {
    [4] = anon_alias_sym_index,
  },
  [26] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_index,
  },
  [27] = {
    [4] = anon_alias_sym_keyspace,
  },
  [28] = {
    [4] = anon_alias_sym_function,
  },
  [29] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
  },
  [30] = {
    [4] = anon_alias_sym_role,
  },
  [31] = {
    [4] = anon_alias_sym_aggregate,
  },
  [32] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
  },
  [33] = {
    [2] = anon_alias_sym_trigger,
    [4] = anon_alias_sym_table,
  },
  [34] = {
    [4] = anon_alias_sym_type,
  },
  [35] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
  },
  [36] = {
    [1] = anon_alias_sym_function,
  },
  [37] = {
    [1] = anon_alias_sym_role,
  },
  [38] = {
    [0] = anon_alias_sym_option,
  },
  [39] = {
    [3] = anon_alias_sym_table,
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
    [2] = anon_alias_sym_function,
    [9] = anon_alias_sym_language,
  },
  [76] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_type,
    [9] = anon_alias_sym_column,
    [10] = anon_alias_sym_data_type,
  },
  [77] = {
    [4] = anon_alias_sym_column,
  },
  [78] = {
    [0] = anon_alias_sym_clustering_key,
    [1] = anon_alias_sym_clustering_key,
  },
  [79] = {
    [2] = anon_alias_sym_function,
    [10] = anon_alias_sym_language,
  },
  [80] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [81] = {
    [2] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [82] = {
    [2] = anon_alias_sym_aggregate,
    [7] = anon_alias_sym_sfunc,
    [11] = anon_alias_sym_finalfunc,
  },
  [83] = {
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [84] = {
    [5] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [85] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [86] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_table,
    [13] = anon_alias_sym_primary_key,
  },
  [87] = {
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [88] = {
    [5] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [89] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [90] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [91] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [92] = {
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [93] = {
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [94] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [95] = {
    [5] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [96] = {
    [5] = anon_alias_sym_aggregate,
    [10] = anon_alias_sym_sfunc,
    [14] = anon_alias_sym_finalfunc,
  },
  [97] = {
    [0] = anon_alias_sym_hash_key,
  },
  [98] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
    [10] = anon_alias_sym_table,
    [15] = anon_alias_sym_primary_key,
  },
  [99] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
    [15] = anon_alias_sym_primary_key,
  },
  [100] = {
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [101] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [102] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [103] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_table,
    [16] = anon_alias_sym_primary_key,
  },
  [104] = {
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [105] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [106] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
    [11] = anon_alias_sym_sfunc,
    [15] = anon_alias_sym_finalfunc,
  },
  [107] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [108] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [109] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
    [10] = anon_alias_sym_keyspace,
    [12] = anon_alias_sym_table,
    [17] = anon_alias_sym_primary_key,
  },
  [110] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [111] = {
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [112] = {
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [113] = {
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_materialized_view,
    [13] = anon_alias_sym_table,
    [18] = anon_alias_sym_primary_key,
  },
  [114] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_keyspace,
    [13] = anon_alias_sym_table,
    [18] = anon_alias_sym_primary_key,
  },
  [115] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [17] = anon_alias_sym_language,
  },
  [116] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [18] = anon_alias_sym_language,
  },
  [117] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_aggregate,
    [14] = anon_alias_sym_sfunc,
    [18] = anon_alias_sym_finalfunc,
  },
  [118] = {
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
      if (lookahead == '0') ADVANCE(577);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
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
          lookahead == 's') ADVANCE(700);
      END_STATE();
    case 192:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(610);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(602);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(700);
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
          lookahead == 'h') ADVANCE(701);
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
      ACCEPT_TOKEN(aux_sym_column_not_null_token1);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_materialized_view_options_token1);
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
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 550},
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
  [88] = {.lex_state = 551},
  [89] = {.lex_state = 550},
  [90] = {.lex_state = 550},
  [91] = {.lex_state = 550},
  [92] = {.lex_state = 550},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 550},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 550},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 550},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 550},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 550},
  [123] = {.lex_state = 550},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 550},
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
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 550},
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
  [185] = {.lex_state = 550},
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
  [220] = {.lex_state = 550},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 550},
  [225] = {.lex_state = 550},
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
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 550},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 550},
  [248] = {.lex_state = 550},
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
  [440] = {.lex_state = 1},
  [441] = {.lex_state = 550},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 41},
  [444] = {.lex_state = 1},
  [445] = {.lex_state = 550},
  [446] = {.lex_state = 53},
  [447] = {.lex_state = 550},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 550},
  [450] = {.lex_state = 550},
  [451] = {.lex_state = 41},
  [452] = {.lex_state = 41},
  [453] = {.lex_state = 53},
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
  [466] = {.lex_state = 550},
  [467] = {.lex_state = 18},
  [468] = {.lex_state = 18},
  [469] = {.lex_state = 18},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 18},
  [472] = {.lex_state = 14},
  [473] = {.lex_state = 10},
  [474] = {.lex_state = 11},
  [475] = {.lex_state = 14},
  [476] = {.lex_state = 550},
  [477] = {.lex_state = 14},
  [478] = {.lex_state = 10},
  [479] = {.lex_state = 550},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 12},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 53},
  [484] = {.lex_state = 10},
  [485] = {.lex_state = 13},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 19},
  [492] = {.lex_state = 10},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 15},
  [497] = {.lex_state = 550},
  [498] = {.lex_state = 15},
  [499] = {.lex_state = 24},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 10},
  [502] = {.lex_state = 19},
  [503] = {.lex_state = 15},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
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
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 17},
  [522] = {.lex_state = 17},
  [523] = {.lex_state = 17},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 17},
  [528] = {.lex_state = 17},
  [529] = {.lex_state = 17},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 17},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 17},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 17},
  [537] = {.lex_state = 17},
  [538] = {.lex_state = 21},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 21},
  [542] = {.lex_state = 10},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 17},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 551},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 10},
  [552] = {.lex_state = 17},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 17},
  [556] = {.lex_state = 17},
  [557] = {.lex_state = 26},
  [558] = {.lex_state = 17},
  [559] = {.lex_state = 10},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 17},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 10},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 20},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 10},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 20},
  [591] = {.lex_state = 10},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 20},
  [597] = {.lex_state = 25},
  [598] = {.lex_state = 20},
  [599] = {.lex_state = 0},
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
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 10},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 10},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 10},
  [623] = {.lex_state = 10},
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
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 10},
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
  [659] = {.lex_state = 10},
  [660] = {.lex_state = 10},
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
  [672] = {.lex_state = 551},
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
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 10},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 10},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 10},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 16},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 10},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 10},
  [723] = {.lex_state = 10},
  [724] = {.lex_state = 10},
  [725] = {.lex_state = 10},
  [726] = {.lex_state = 27},
  [727] = {.lex_state = 27},
  [728] = {.lex_state = 10},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 20},
  [731] = {.lex_state = 20},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 10},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 10},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 10},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 10},
  [743] = {.lex_state = 10},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 10},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 10},
  [749] = {.lex_state = 10},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 10},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 10},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 10},
  [757] = {.lex_state = 10},
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
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 10},
  [772] = {.lex_state = 10},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 10},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 10},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 10},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 10},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 10},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 10},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 20},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 10},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 10},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 20},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 550},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 10},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 10},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 10},
  [818] = {.lex_state = 10},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 10},
  [823] = {.lex_state = 10},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 551},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 10},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 10},
  [832] = {.lex_state = 10},
  [833] = {.lex_state = 10},
  [834] = {.lex_state = 10},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 20},
  [837] = {.lex_state = 551},
  [838] = {.lex_state = 20},
  [839] = {.lex_state = 20},
  [840] = {.lex_state = 20},
  [841] = {.lex_state = 20},
  [842] = {.lex_state = 20},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 20},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 20},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 10},
  [853] = {.lex_state = 20},
  [854] = {.lex_state = 20},
  [855] = {.lex_state = 20},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 20},
  [859] = {.lex_state = 10},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 27},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 10},
  [864] = {.lex_state = 10},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 10},
  [868] = {.lex_state = 10},
  [869] = {.lex_state = 22},
  [870] = {.lex_state = 10},
  [871] = {.lex_state = 10},
  [872] = {.lex_state = 10},
  [873] = {.lex_state = 10},
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
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 551},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 10},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 10},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 10},
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
  [913] = {.lex_state = 10},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 10},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 10},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 550},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 10},
  [940] = {.lex_state = 10},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 10},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 10},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 10},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 10},
  [950] = {.lex_state = 10},
  [951] = {.lex_state = 10},
  [952] = {.lex_state = 10},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 10},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 10},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 0},
  [964] = {.lex_state = 0},
  [965] = {.lex_state = 10},
  [966] = {.lex_state = 10},
  [967] = {.lex_state = 0},
  [968] = {.lex_state = 0},
  [969] = {.lex_state = 10},
  [970] = {.lex_state = 10},
  [971] = {.lex_state = 10},
  [972] = {.lex_state = 0},
  [973] = {.lex_state = 0},
  [974] = {.lex_state = 0},
  [975] = {.lex_state = 0},
  [976] = {.lex_state = 550},
  [977] = {.lex_state = 0},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 0},
  [980] = {.lex_state = 10},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 550},
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
  [993] = {.lex_state = 10},
  [994] = {.lex_state = 0},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 0},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 0},
  [999] = {.lex_state = 0},
  [1000] = {.lex_state = 0},
  [1001] = {.lex_state = 0},
  [1002] = {.lex_state = 10},
  [1003] = {.lex_state = 0},
  [1004] = {.lex_state = 0},
  [1005] = {.lex_state = 10},
  [1006] = {.lex_state = 0},
  [1007] = {.lex_state = 10},
  [1008] = {.lex_state = 0},
  [1009] = {.lex_state = 0},
  [1010] = {.lex_state = 0},
  [1011] = {.lex_state = 0},
  [1012] = {.lex_state = 0},
  [1013] = {.lex_state = 10},
  [1014] = {.lex_state = 41},
  [1015] = {.lex_state = 10},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 0},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 10},
  [1020] = {.lex_state = 10},
  [1021] = {.lex_state = 10},
  [1022] = {.lex_state = 10},
  [1023] = {.lex_state = 10},
  [1024] = {.lex_state = 10},
  [1025] = {.lex_state = 10},
  [1026] = {.lex_state = 10},
  [1027] = {.lex_state = 0},
  [1028] = {.lex_state = 0},
  [1029] = {.lex_state = 10},
  [1030] = {.lex_state = 0},
  [1031] = {.lex_state = 10},
  [1032] = {.lex_state = 0},
  [1033] = {.lex_state = 0},
  [1034] = {.lex_state = 10},
  [1035] = {.lex_state = 0},
  [1036] = {.lex_state = 0},
  [1037] = {.lex_state = 0},
  [1038] = {.lex_state = 0},
  [1039] = {.lex_state = 0},
  [1040] = {.lex_state = 0},
  [1041] = {.lex_state = 10},
  [1042] = {.lex_state = 0},
  [1043] = {.lex_state = 0},
  [1044] = {.lex_state = 0},
  [1045] = {.lex_state = 0},
  [1046] = {.lex_state = 10},
  [1047] = {.lex_state = 0},
  [1048] = {.lex_state = 0},
  [1049] = {.lex_state = 0},
  [1050] = {.lex_state = 0},
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
  [1062] = {.lex_state = 550},
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
  [1079] = {.lex_state = 10},
  [1080] = {.lex_state = 0},
  [1081] = {.lex_state = 10},
  [1082] = {.lex_state = 0},
  [1083] = {.lex_state = 10},
  [1084] = {.lex_state = 10},
  [1085] = {.lex_state = 0},
  [1086] = {.lex_state = 0},
  [1087] = {.lex_state = 10},
  [1088] = {.lex_state = 0},
  [1089] = {.lex_state = 0},
  [1090] = {.lex_state = 0},
  [1091] = {.lex_state = 0},
  [1092] = {.lex_state = 0},
  [1093] = {.lex_state = 0},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 0},
  [1096] = {.lex_state = 10},
  [1097] = {.lex_state = 0},
  [1098] = {.lex_state = 10},
  [1099] = {.lex_state = 10},
  [1100] = {.lex_state = 0},
  [1101] = {.lex_state = 10},
  [1102] = {.lex_state = 0},
  [1103] = {.lex_state = 10},
  [1104] = {.lex_state = 0},
  [1105] = {.lex_state = 13},
  [1106] = {.lex_state = 0},
  [1107] = {.lex_state = 0},
  [1108] = {.lex_state = 10},
  [1109] = {.lex_state = 0},
  [1110] = {.lex_state = 0},
  [1111] = {.lex_state = 551},
  [1112] = {.lex_state = 0},
  [1113] = {.lex_state = 0},
  [1114] = {.lex_state = 10},
  [1115] = {.lex_state = 0},
  [1116] = {.lex_state = 0},
  [1117] = {.lex_state = 0},
  [1118] = {.lex_state = 10},
  [1119] = {.lex_state = 10},
  [1120] = {.lex_state = 0},
  [1121] = {.lex_state = 0},
  [1122] = {.lex_state = 0},
  [1123] = {.lex_state = 0},
  [1124] = {.lex_state = 0},
  [1125] = {.lex_state = 10},
  [1126] = {.lex_state = 0},
  [1127] = {.lex_state = 0},
  [1128] = {.lex_state = 0},
  [1129] = {.lex_state = 0},
  [1130] = {.lex_state = 10},
  [1131] = {.lex_state = 0},
  [1132] = {.lex_state = 0},
  [1133] = {.lex_state = 10},
  [1134] = {.lex_state = 0},
  [1135] = {.lex_state = 0},
  [1136] = {.lex_state = 10},
  [1137] = {.lex_state = 0},
  [1138] = {.lex_state = 0},
  [1139] = {.lex_state = 0},
  [1140] = {.lex_state = 0},
  [1141] = {.lex_state = 0},
  [1142] = {.lex_state = 0},
  [1143] = {.lex_state = 0},
  [1144] = {.lex_state = 0},
  [1145] = {.lex_state = 10},
  [1146] = {.lex_state = 10},
  [1147] = {.lex_state = 0},
  [1148] = {.lex_state = 0},
  [1149] = {.lex_state = 10},
  [1150] = {.lex_state = 0},
  [1151] = {.lex_state = 0},
  [1152] = {.lex_state = 10},
  [1153] = {.lex_state = 0},
  [1154] = {.lex_state = 0},
  [1155] = {.lex_state = 0},
  [1156] = {.lex_state = 10},
  [1157] = {.lex_state = 0},
  [1158] = {.lex_state = 0},
  [1159] = {.lex_state = 0},
  [1160] = {.lex_state = 0},
  [1161] = {.lex_state = 10},
  [1162] = {.lex_state = 0},
  [1163] = {.lex_state = 10},
  [1164] = {.lex_state = 10},
  [1165] = {.lex_state = 0},
  [1166] = {.lex_state = 0},
  [1167] = {.lex_state = 550},
  [1168] = {.lex_state = 550},
  [1169] = {.lex_state = 0},
  [1170] = {.lex_state = 0},
  [1171] = {.lex_state = 10},
  [1172] = {.lex_state = 0},
  [1173] = {.lex_state = 0},
  [1174] = {.lex_state = 0},
  [1175] = {.lex_state = 0},
  [1176] = {.lex_state = 0},
  [1177] = {.lex_state = 10},
  [1178] = {.lex_state = 0},
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
  [1192] = {.lex_state = 10},
  [1193] = {.lex_state = 0},
  [1194] = {.lex_state = 10},
  [1195] = {.lex_state = 10},
  [1196] = {.lex_state = 0},
  [1197] = {.lex_state = 0},
  [1198] = {.lex_state = 0},
  [1199] = {.lex_state = 0},
  [1200] = {.lex_state = 10},
  [1201] = {.lex_state = 10},
  [1202] = {.lex_state = 0},
  [1203] = {.lex_state = 0},
  [1204] = {.lex_state = 10},
  [1205] = {.lex_state = 0},
  [1206] = {.lex_state = 10},
  [1207] = {.lex_state = 551},
  [1208] = {.lex_state = 0},
  [1209] = {.lex_state = 10},
  [1210] = {.lex_state = 10},
  [1211] = {.lex_state = 10},
  [1212] = {.lex_state = 10},
  [1213] = {.lex_state = 550},
  [1214] = {.lex_state = 0},
  [1215] = {.lex_state = 0},
  [1216] = {.lex_state = 0},
  [1217] = {.lex_state = 13},
  [1218] = {.lex_state = 10},
  [1219] = {.lex_state = 0},
  [1220] = {.lex_state = 10},
  [1221] = {.lex_state = 0},
  [1222] = {.lex_state = 10},
  [1223] = {.lex_state = 10},
  [1224] = {.lex_state = 0},
  [1225] = {.lex_state = 10},
  [1226] = {.lex_state = 0},
  [1227] = {.lex_state = 10},
  [1228] = {.lex_state = 0},
  [1229] = {.lex_state = 10},
  [1230] = {.lex_state = 0},
  [1231] = {.lex_state = 0},
  [1232] = {.lex_state = 10},
  [1233] = {.lex_state = 0},
  [1234] = {.lex_state = 0},
  [1235] = {.lex_state = 551},
  [1236] = {.lex_state = 0},
  [1237] = {.lex_state = 10},
  [1238] = {.lex_state = 0},
  [1239] = {.lex_state = 10},
  [1240] = {.lex_state = 0},
  [1241] = {.lex_state = 0},
  [1242] = {.lex_state = 10},
  [1243] = {.lex_state = 0},
  [1244] = {.lex_state = 0},
  [1245] = {.lex_state = 551},
  [1246] = {.lex_state = 10},
  [1247] = {.lex_state = 10},
  [1248] = {.lex_state = 0},
  [1249] = {.lex_state = 10},
  [1250] = {.lex_state = 10},
  [1251] = {.lex_state = 10},
  [1252] = {.lex_state = 10},
  [1253] = {.lex_state = 0},
  [1254] = {.lex_state = 0},
  [1255] = {.lex_state = 0},
  [1256] = {.lex_state = 550},
  [1257] = {.lex_state = 10},
  [1258] = {.lex_state = 0},
  [1259] = {.lex_state = 10},
  [1260] = {.lex_state = 0},
  [1261] = {.lex_state = 10},
  [1262] = {.lex_state = 0},
  [1263] = {.lex_state = 0},
  [1264] = {.lex_state = 10},
  [1265] = {.lex_state = 0},
  [1266] = {.lex_state = 0},
  [1267] = {.lex_state = 0},
  [1268] = {.lex_state = 10},
  [1269] = {.lex_state = 0},
  [1270] = {.lex_state = 0},
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
  [1281] = {.lex_state = 10},
  [1282] = {.lex_state = 10},
  [1283] = {.lex_state = 0},
  [1284] = {.lex_state = 0},
  [1285] = {.lex_state = 10},
  [1286] = {.lex_state = 0},
  [1287] = {.lex_state = 0},
  [1288] = {.lex_state = 0},
  [1289] = {.lex_state = 0},
  [1290] = {.lex_state = 0},
  [1291] = {.lex_state = 10},
  [1292] = {.lex_state = 0},
  [1293] = {.lex_state = 10},
  [1294] = {.lex_state = 550},
  [1295] = {.lex_state = 550},
  [1296] = {.lex_state = 0},
  [1297] = {.lex_state = 0},
  [1298] = {.lex_state = 0},
  [1299] = {.lex_state = 0},
  [1300] = {.lex_state = 10},
  [1301] = {.lex_state = 13},
  [1302] = {.lex_state = 10},
  [1303] = {.lex_state = 0},
  [1304] = {.lex_state = 10},
  [1305] = {.lex_state = 0},
  [1306] = {.lex_state = 0},
  [1307] = {.lex_state = 10},
  [1308] = {.lex_state = 0},
  [1309] = {.lex_state = 0},
  [1310] = {.lex_state = 0},
  [1311] = {.lex_state = 10},
  [1312] = {.lex_state = 0},
  [1313] = {.lex_state = 10},
  [1314] = {.lex_state = 551},
  [1315] = {.lex_state = 13},
  [1316] = {.lex_state = 0},
  [1317] = {.lex_state = 0},
  [1318] = {.lex_state = 0},
  [1319] = {.lex_state = 0},
  [1320] = {.lex_state = 551},
  [1321] = {.lex_state = 10},
  [1322] = {.lex_state = 10},
  [1323] = {.lex_state = 0},
  [1324] = {.lex_state = 10},
  [1325] = {.lex_state = 0},
  [1326] = {.lex_state = 0},
  [1327] = {.lex_state = 10},
  [1328] = {.lex_state = 0},
  [1329] = {.lex_state = 0},
  [1330] = {.lex_state = 0},
  [1331] = {.lex_state = 0},
  [1332] = {.lex_state = 0},
  [1333] = {.lex_state = 0},
  [1334] = {.lex_state = 0},
  [1335] = {.lex_state = 0},
  [1336] = {.lex_state = 551},
  [1337] = {.lex_state = 0},
  [1338] = {.lex_state = 0},
  [1339] = {.lex_state = 0},
  [1340] = {.lex_state = 10},
  [1341] = {.lex_state = 0},
  [1342] = {.lex_state = 0},
  [1343] = {.lex_state = 0},
  [1344] = {.lex_state = 0},
  [1345] = {.lex_state = 0},
  [1346] = {.lex_state = 0},
  [1347] = {.lex_state = 0},
  [1348] = {.lex_state = 551},
  [1349] = {.lex_state = 0},
  [1350] = {.lex_state = 0},
  [1351] = {.lex_state = 0},
  [1352] = {.lex_state = 0},
  [1353] = {.lex_state = 550},
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
  [1364] = {.lex_state = 10},
  [1365] = {.lex_state = 0},
  [1366] = {.lex_state = 0},
  [1367] = {.lex_state = 0},
  [1368] = {.lex_state = 10},
  [1369] = {.lex_state = 0},
  [1370] = {.lex_state = 0},
  [1371] = {.lex_state = 0},
  [1372] = {.lex_state = 10},
  [1373] = {.lex_state = 0},
  [1374] = {.lex_state = 0},
  [1375] = {.lex_state = 0},
  [1376] = {.lex_state = 10},
  [1377] = {.lex_state = 0},
  [1378] = {.lex_state = 10},
  [1379] = {.lex_state = 551},
  [1380] = {.lex_state = 10},
  [1381] = {.lex_state = 0},
  [1382] = {.lex_state = 0},
  [1383] = {.lex_state = 0},
  [1384] = {.lex_state = 551},
  [1385] = {.lex_state = 10},
  [1386] = {.lex_state = 10},
  [1387] = {.lex_state = 0},
  [1388] = {.lex_state = 0},
  [1389] = {.lex_state = 0},
  [1390] = {.lex_state = 0},
  [1391] = {.lex_state = 0},
  [1392] = {.lex_state = 0},
  [1393] = {.lex_state = 10},
  [1394] = {.lex_state = 0},
  [1395] = {.lex_state = 10},
  [1396] = {.lex_state = 0},
  [1397] = {.lex_state = 0},
  [1398] = {.lex_state = 0},
  [1399] = {.lex_state = 10},
  [1400] = {.lex_state = 10},
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
    [sym_source_file] = STATE(1397),
    [sym__statement] = STATE(3),
    [sym_select_statement] = STATE(312),
    [sym_delete_statement] = STATE(312),
    [sym_begin_batch] = STATE(571),
    [sym_insert_statement] = STATE(312),
    [sym_truncate] = STATE(312),
    [sym_create_index] = STATE(312),
    [sym_drop_index] = STATE(312),
    [sym_update] = STATE(312),
    [sym_use] = STATE(312),
    [sym_grant] = STATE(312),
    [sym_revoke] = STATE(312),
    [sym_list_roles] = STATE(312),
    [sym_list_permissions] = STATE(312),
    [sym_drop_aggregate] = STATE(312),
    [sym_drop_materialized_view] = STATE(312),
    [sym_drop_function] = STATE(312),
    [sym_drop_keyspace] = STATE(312),
    [sym_drop_role] = STATE(312),
    [sym_drop_table] = STATE(312),
    [sym_drop_trigger] = STATE(312),
    [sym_drop_type] = STATE(312),
    [sym_drop_user] = STATE(312),
    [sym_create_aggregate] = STATE(312),
    [sym_create_materialized_view] = STATE(312),
    [sym_create_function] = STATE(312),
    [sym_create_keyspace] = STATE(312),
    [sym_create_role] = STATE(312),
    [sym_create_table] = STATE(312),
    [sym_create_trigger] = STATE(312),
    [sym_create_type] = STATE(312),
    [sym_create_user] = STATE(312),
    [sym_alter_materialized_view] = STATE(312),
    [sym_alter_keyspace] = STATE(312),
    [sym_alter_role] = STATE(312),
    [sym_alter_table] = STATE(312),
    [sym_alter_type] = STATE(312),
    [sym_alter_user] = STATE(312),
    [sym_apply_batch] = STATE(312),
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
    STATE(571), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(312), 37,
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
    STATE(571), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(312), 37,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(902), 1,
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
    STATE(70), 1,
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
  [324] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1153), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(267), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1272), 1,
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
    STATE(70), 1,
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
  [464] = 3,
    STATE(70), 1,
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
  [499] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(989), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1265), 1,
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
    STATE(70), 1,
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
  [604] = 3,
    STATE(70), 1,
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
  [639] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1260), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(922), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(518), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(945), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(986), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(779), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1148), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(648), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(890), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(957), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(828), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(981), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(206), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1244), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1043), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1100), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1238), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(612), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(208), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1104), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(626), 1,
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
    STATE(70), 1,
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
  [1409] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1138), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1341), 1,
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
    STATE(70), 1,
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
  [1514] = 3,
    STATE(70), 1,
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
  [1549] = 3,
    STATE(70), 1,
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
  [1584] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1303), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(589), 1,
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
    STATE(70), 1,
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
  [1689] = 3,
    STATE(70), 1,
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
  [1724] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1129), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1234), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1228), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1347), 1,
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
    STATE(70), 1,
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
  [1899] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1047), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(975), 1,
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
    STATE(70), 1,
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
  [2004] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1010), 1,
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
    STATE(663), 1,
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
    STATE(791), 1,
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
  [2197] = 3,
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
  [2228] = 1,
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
  [2255] = 1,
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
  [2282] = 1,
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
  [2309] = 3,
    ACTIONS(94), 1,
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
  [2367] = 1,
    ACTIONS(106), 23,
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
    ACTIONS(110), 1,
      aux_sym_select_statement_token4,
    ACTIONS(112), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(116), 1,
      aux_sym_order_spec_token1,
    STATE(90), 1,
      sym_where_spec,
    STATE(114), 1,
      sym_order_spec,
    STATE(248), 1,
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
  [2433] = 3,
    ACTIONS(120), 1,
      anon_sym_LT,
    STATE(94), 1,
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
  [2463] = 3,
    ACTIONS(124), 1,
      aux_sym_relation_elements_token1,
    STATE(71), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(122), 21,
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
  [2493] = 2,
    ACTIONS(129), 1,
      anon_sym_DOT,
    ACTIONS(127), 22,
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
  [2521] = 8,
    ACTIONS(112), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(116), 1,
      aux_sym_order_spec_token1,
    ACTIONS(133), 1,
      aux_sym_select_statement_token4,
    STATE(92), 1,
      sym_where_spec,
    STATE(122), 1,
      sym_order_spec,
    STATE(253), 1,
      sym_limit_spec,
    ACTIONS(131), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2561] = 8,
    ACTIONS(112), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(116), 1,
      aux_sym_order_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(89), 1,
      sym_where_spec,
    STATE(108), 1,
      sym_order_spec,
    STATE(225), 1,
      sym_limit_spec,
    ACTIONS(135), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2601] = 1,
    ACTIONS(139), 22,
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
  [2626] = 1,
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
  [2651] = 8,
    ACTIONS(147), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(149), 1,
      sym_object_name,
    STATE(112), 1,
      sym_table_option_item,
    STATE(193), 1,
      sym_table_options,
    STATE(296), 1,
      sym_clustering_order,
    STATE(1090), 1,
      sym_table_option_name,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(145), 14,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2690] = 1,
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
  [2715] = 1,
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
  [2740] = 1,
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
  [2765] = 3,
    ACTIONS(155), 1,
      aux_sym_relation_elements_token1,
    STATE(71), 1,
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
  [2794] = 1,
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
  [2819] = 1,
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
  [2844] = 1,
    ACTIONS(122), 22,
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
  [2869] = 3,
    ACTIONS(155), 1,
      aux_sym_relation_elements_token1,
    STATE(81), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(161), 20,
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
  [2898] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2923] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2948] = 3,
    STATE(185), 1,
      sym_order_direction,
    ACTIONS(169), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(167), 18,
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
  [2976] = 6,
    ACTIONS(112), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_order_spec_token1,
    ACTIONS(173), 1,
      aux_sym_select_statement_token4,
    STATE(126), 1,
      sym_order_spec,
    STATE(220), 1,
      sym_limit_spec,
    ACTIONS(171), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3010] = 6,
    ACTIONS(112), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_order_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(108), 1,
      sym_order_spec,
    STATE(225), 1,
      sym_limit_spec,
    ACTIONS(135), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3044] = 1,
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
  [3068] = 6,
    ACTIONS(110), 1,
      aux_sym_select_statement_token4,
    ACTIONS(112), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_order_spec_token1,
    STATE(114), 1,
      sym_order_spec,
    STATE(248), 1,
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
  [3102] = 1,
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
  [3126] = 1,
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
  [3150] = 1,
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
  [3174] = 2,
    ACTIONS(185), 1,
      anon_sym_DOT,
    ACTIONS(183), 19,
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
  [3199] = 2,
    ACTIONS(189), 1,
      aux_sym_relation_element_token1,
    ACTIONS(187), 19,
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
  [3224] = 2,
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
  [3249] = 1,
    ACTIONS(195), 20,
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
  [3272] = 3,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(197), 18,
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
  [3299] = 2,
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
  [3324] = 2,
    ACTIONS(208), 1,
      aux_sym_priviledge_token2,
    ACTIONS(206), 18,
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
  [3348] = 3,
    ACTIONS(212), 1,
      aux_sym_relation_elements_token1,
    STATE(103), 1,
      aux_sym_materialized_view_options_repeat1,
    ACTIONS(210), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3396] = 1,
    ACTIONS(187), 19,
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
  [3418] = 4,
    ACTIONS(219), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(221), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(347), 1,
      sym_using_ttl_timestamp,
    ACTIONS(217), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3446] = 1,
    ACTIONS(223), 19,
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
    ACTIONS(112), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(173), 1,
      aux_sym_select_statement_token4,
    STATE(220), 1,
      sym_limit_spec,
    ACTIONS(171), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3496] = 1,
    ACTIONS(225), 19,
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
  [3518] = 3,
    ACTIONS(229), 1,
      aux_sym_relation_elements_token1,
    STATE(103), 1,
      aux_sym_materialized_view_options_repeat1,
    ACTIONS(227), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3544] = 3,
    STATE(321), 1,
      sym_user_super_user,
    ACTIONS(233), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(231), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3570] = 3,
    ACTIONS(229), 1,
      aux_sym_relation_elements_token1,
    STATE(110), 1,
      aux_sym_materialized_view_options_repeat1,
    ACTIONS(235), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3596] = 3,
    STATE(270), 1,
      sym_user_super_user,
    ACTIONS(233), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(237), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3622] = 4,
    ACTIONS(112), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(225), 1,
      sym_limit_spec,
    ACTIONS(135), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3650] = 4,
    ACTIONS(221), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(241), 1,
      aux_sym_delete_statement_token2,
    STATE(337), 1,
      sym_using_ttl_timestamp,
    ACTIONS(239), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(221), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(245), 1,
      aux_sym_delete_statement_token2,
    STATE(257), 1,
      sym_using_ttl_timestamp,
    ACTIONS(243), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3706] = 4,
    ACTIONS(221), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(249), 1,
      aux_sym_delete_statement_token2,
    STATE(259), 1,
      sym_using_ttl_timestamp,
    ACTIONS(247), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3734] = 3,
    STATE(319), 1,
      sym_user_super_user,
    ACTIONS(233), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
  [3760] = 1,
    ACTIONS(253), 19,
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
  [3782] = 1,
    ACTIONS(255), 19,
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
  [3804] = 4,
    ACTIONS(221), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(259), 1,
      aux_sym_delete_statement_token2,
    STATE(416), 1,
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
  [3832] = 4,
    ACTIONS(110), 1,
      aux_sym_select_statement_token4,
    ACTIONS(112), 1,
      aux_sym_limit_spec_token1,
    STATE(248), 1,
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
  [3860] = 1,
    ACTIONS(261), 19,
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
  [3882] = 4,
    ACTIONS(221), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(265), 1,
      aux_sym_delete_statement_token2,
    STATE(263), 1,
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
  [3910] = 1,
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
  [3932] = 4,
    ACTIONS(112), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(271), 1,
      aux_sym_select_statement_token4,
    STATE(239), 1,
      sym_limit_spec,
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
  [3960] = 1,
    ACTIONS(273), 19,
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
  [3982] = 4,
    ACTIONS(221), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(277), 1,
      aux_sym_delete_statement_token2,
    STATE(345), 1,
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
  [4010] = 1,
    ACTIONS(279), 19,
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
  [4032] = 4,
    ACTIONS(221), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(283), 1,
      aux_sym_delete_statement_token2,
    STATE(329), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4060] = 3,
    ACTIONS(287), 1,
      aux_sym_materialized_view_options_token1,
    STATE(303), 1,
      sym_materialized_view_options,
    ACTIONS(285), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4085] = 3,
    ACTIONS(287), 1,
      aux_sym_materialized_view_options_token1,
    STATE(398), 1,
      sym_materialized_view_options,
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
  [4110] = 3,
    ACTIONS(293), 1,
      aux_sym_relation_elements_token1,
    STATE(186), 1,
      aux_sym_role_with_repeat1,
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
  [4135] = 3,
    ACTIONS(287), 1,
      aux_sym_materialized_view_options_token1,
    STATE(397), 1,
      sym_materialized_view_options,
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
  [4160] = 3,
    ACTIONS(287), 1,
      aux_sym_materialized_view_options_token1,
    STATE(401), 1,
      sym_materialized_view_options,
    ACTIONS(297), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4185] = 3,
    ACTIONS(221), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(317), 1,
      sym_using_ttl_timestamp,
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
  [4210] = 3,
    ACTIONS(303), 1,
      aux_sym_delete_statement_token2,
    STATE(425), 1,
      sym_if_spec,
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
  [4235] = 3,
    ACTIONS(307), 1,
      aux_sym_materialized_view_options_token1,
    STATE(386), 1,
      sym_role_with,
    ACTIONS(305), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4260] = 3,
    ACTIONS(311), 1,
      aux_sym_delete_statement_token2,
    STATE(302), 1,
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
  [4285] = 1,
    ACTIONS(313), 18,
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
  [4306] = 1,
    ACTIONS(315), 18,
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
  [4327] = 3,
    ACTIONS(319), 1,
      aux_sym_relation_elements_token1,
    STATE(145), 1,
      aux_sym_materialized_view_options_repeat1,
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
  [4352] = 1,
    ACTIONS(321), 18,
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
  [4373] = 3,
    ACTIONS(325), 1,
      aux_sym_delete_statement_token2,
    STATE(349), 1,
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
  [4398] = 3,
    ACTIONS(329), 1,
      aux_sym_relation_elements_token1,
    STATE(103), 1,
      aux_sym_materialized_view_options_repeat1,
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
  [4423] = 3,
    ACTIONS(333), 1,
      aux_sym_delete_statement_token2,
    STATE(309), 1,
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
  [4448] = 3,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_column_list_repeat1,
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
  [4473] = 1,
    ACTIONS(339), 18,
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
  [4494] = 1,
    ACTIONS(341), 18,
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
  [4515] = 8,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 1,
      sym__decimal_literal,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(627), 1,
      sym_expression,
    STATE(1078), 1,
      sym_expression_list,
    STATE(799), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [4550] = 1,
    ACTIONS(353), 18,
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
  [4571] = 3,
    ACTIONS(357), 1,
      aux_sym_delete_statement_token2,
    STATE(383), 1,
      sym_if_spec,
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
  [4596] = 3,
    ACTIONS(361), 1,
      aux_sym_relation_elements_token1,
    STATE(166), 1,
      aux_sym_if_condition_list_repeat1,
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
  [4621] = 3,
    ACTIONS(307), 1,
      aux_sym_materialized_view_options_token1,
    STATE(283), 1,
      sym_role_with,
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
  [4646] = 1,
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
  [4667] = 3,
    ACTIONS(369), 1,
      aux_sym_delete_statement_token2,
    STATE(417), 1,
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
  [4692] = 3,
    ACTIONS(373), 1,
      aux_sym_relation_elements_token1,
    STATE(211), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4717] = 3,
    ACTIONS(377), 1,
      aux_sym_delete_statement_token2,
    STATE(391), 1,
      sym_if_spec,
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
  [4742] = 3,
    ACTIONS(381), 1,
      aux_sym_delete_statement_token2,
    STATE(411), 1,
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
  [4767] = 3,
    ACTIONS(221), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(352), 1,
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
  [4792] = 3,
    ACTIONS(387), 1,
      aux_sym_relation_elements_token1,
    STATE(161), 1,
      aux_sym_role_with_repeat1,
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
  [4817] = 3,
    ACTIONS(287), 1,
      aux_sym_materialized_view_options_token1,
    STATE(256), 1,
      sym_materialized_view_options,
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
  [4842] = 3,
    ACTIONS(394), 1,
      aux_sym_create_index_token3,
    ACTIONS(396), 1,
      aux_sym_list_roles_token2,
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
  [4867] = 3,
    ACTIONS(400), 1,
      aux_sym_list_roles_token2,
    ACTIONS(402), 1,
      aux_sym_list_roles_token3,
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
  [4892] = 3,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [4917] = 3,
    ACTIONS(361), 1,
      aux_sym_relation_elements_token1,
    STATE(182), 1,
      aux_sym_if_condition_list_repeat1,
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
  [4942] = 3,
    ACTIONS(287), 1,
      aux_sym_materialized_view_options_token1,
    STATE(327), 1,
      sym_materialized_view_options,
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
  [4967] = 1,
    ACTIONS(210), 18,
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
  [4988] = 1,
    ACTIONS(206), 18,
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
  [5009] = 3,
    ACTIONS(221), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(311), 1,
      sym_using_ttl_timestamp,
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
  [5034] = 3,
    ACTIONS(287), 1,
      aux_sym_materialized_view_options_token1,
    STATE(284), 1,
      sym_materialized_view_options,
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
  [5059] = 1,
    ACTIONS(417), 18,
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
  [5080] = 3,
    ACTIONS(221), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(287), 1,
      sym_using_ttl_timestamp,
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
  [5105] = 1,
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
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_clustering_order_token1,
      aux_sym_apply_batch_token1,
  [5126] = 3,
    ACTIONS(425), 1,
      aux_sym_delete_statement_token2,
    STATE(328), 1,
      sym_if_spec,
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
  [5151] = 1,
    ACTIONS(427), 18,
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
  [5172] = 3,
    ACTIONS(431), 1,
      aux_sym_materialized_view_options_token1,
    STATE(368), 1,
      sym_with_element,
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
  [5197] = 1,
    ACTIONS(433), 18,
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
  [5218] = 3,
    ACTIONS(437), 1,
      aux_sym_delete_statement_token2,
    STATE(357), 1,
      sym_if_spec,
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
  [5243] = 3,
    ACTIONS(441), 1,
      anon_sym_DOT,
    ACTIONS(443), 1,
      aux_sym_materialized_view_options_token1,
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
  [5268] = 3,
    ACTIONS(221), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(394), 1,
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
  [5293] = 3,
    ACTIONS(449), 1,
      aux_sym_relation_elements_token1,
    STATE(182), 1,
      aux_sym_if_condition_list_repeat1,
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
  [5318] = 3,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [5343] = 3,
    ACTIONS(307), 1,
      aux_sym_materialized_view_options_token1,
    STATE(405), 1,
      sym_role_with,
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
  [5368] = 1,
    ACTIONS(458), 18,
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
  [5389] = 3,
    ACTIONS(293), 1,
      aux_sym_relation_elements_token1,
    STATE(161), 1,
      aux_sym_role_with_repeat1,
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
  [5414] = 3,
    ACTIONS(431), 1,
      aux_sym_materialized_view_options_token1,
    STATE(418), 1,
      sym_with_element,
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
  [5439] = 3,
    ACTIONS(431), 1,
      aux_sym_materialized_view_options_token1,
    STATE(420), 1,
      sym_with_element,
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
  [5464] = 1,
    ACTIONS(466), 18,
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
  [5485] = 3,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [5510] = 1,
    ACTIONS(470), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [5531] = 3,
    ACTIONS(474), 1,
      aux_sym_delete_statement_token2,
    STATE(316), 1,
      sym_if_spec,
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
  [5556] = 3,
    ACTIONS(478), 1,
      aux_sym_clustering_order_token1,
    STATE(271), 1,
      sym_clustering_order,
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
  [5581] = 2,
    ACTIONS(482), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(480), 17,
      ts_builtin_sym_end,
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
  [5604] = 3,
    ACTIONS(431), 1,
      aux_sym_materialized_view_options_token1,
    STATE(322), 1,
      sym_with_element,
    ACTIONS(484), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5629] = 3,
    ACTIONS(488), 1,
      aux_sym_delete_statement_token2,
    STATE(424), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5654] = 3,
    ACTIONS(221), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(307), 1,
      sym_using_ttl_timestamp,
    ACTIONS(490), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5679] = 3,
    ACTIONS(494), 1,
      aux_sym_delete_statement_token2,
    STATE(297), 1,
      sym_if_spec,
    ACTIONS(492), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5704] = 3,
    ACTIONS(221), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(421), 1,
      sym_using_ttl_timestamp,
    ACTIONS(496), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5729] = 3,
    ACTIONS(221), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(326), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5754] = 3,
    ACTIONS(502), 1,
      aux_sym_delete_statement_token2,
    STATE(342), 1,
      sym_if_spec,
    ACTIONS(500), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5779] = 3,
    ACTIONS(506), 1,
      aux_sym_delete_statement_token2,
    STATE(325), 1,
      sym_if_spec,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5804] = 3,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_column_list_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5829] = 3,
    ACTIONS(287), 1,
      aux_sym_materialized_view_options_token1,
    STATE(265), 1,
      sym_materialized_view_options,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5854] = 1,
    ACTIONS(512), 18,
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
  [5875] = 3,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5900] = 2,
    ACTIONS(516), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(480), 17,
      ts_builtin_sym_end,
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
  [5923] = 3,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(518), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(520), 18,
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
  [5969] = 3,
    ACTIONS(524), 1,
      aux_sym_relation_elements_token1,
    STATE(210), 1,
      aux_sym_alter_type_rename_list_repeat1,
    ACTIONS(522), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5994] = 3,
    ACTIONS(373), 1,
      aux_sym_relation_elements_token1,
    STATE(210), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [6019] = 3,
    ACTIONS(531), 1,
      aux_sym_delete_statement_token2,
    STATE(335), 1,
      sym_if_spec,
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
  [6044] = 1,
    ACTIONS(533), 18,
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
  [6065] = 1,
    ACTIONS(535), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [6085] = 1,
    ACTIONS(522), 17,
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
  [6105] = 2,
    ACTIONS(539), 1,
      aux_sym_materialized_view_options_token1,
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
  [6127] = 1,
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
  [6147] = 2,
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
  [6169] = 2,
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
  [6191] = 2,
    ACTIONS(271), 1,
      aux_sym_select_statement_token4,
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
  [6213] = 2,
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
  [6235] = 1,
    ACTIONS(555), 17,
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
  [6255] = 1,
    ACTIONS(447), 17,
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
  [6275] = 7,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 1,
      sym__decimal_literal,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(752), 1,
      sym_expression,
    STATE(799), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [6307] = 2,
    ACTIONS(173), 1,
      aux_sym_select_statement_token4,
    ACTIONS(171), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6329] = 1,
    ACTIONS(557), 17,
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
  [6349] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6369] = 2,
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
  [6391] = 2,
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
  [6413] = 2,
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
  [6435] = 2,
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
  [6457] = 1,
    ACTIONS(575), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [6477] = 2,
    ACTIONS(579), 1,
      anon_sym_DOT,
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
  [6499] = 2,
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
  [6521] = 2,
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
  [6543] = 2,
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
  [6565] = 2,
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
  [6587] = 1,
    ACTIONS(597), 17,
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
  [6607] = 2,
    ACTIONS(601), 1,
      aux_sym_select_statement_token4,
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
  [6629] = 2,
    ACTIONS(605), 1,
      aux_sym_relation_elements_token1,
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
  [6651] = 2,
    ACTIONS(609), 1,
      anon_sym_DOT,
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
  [6673] = 2,
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
  [6695] = 2,
    ACTIONS(617), 1,
      anon_sym_DOT,
    ACTIONS(615), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6717] = 2,
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
  [6739] = 1,
    ACTIONS(623), 17,
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
  [6759] = 2,
    ACTIONS(627), 1,
      anon_sym_DOT,
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
  [6781] = 1,
    ACTIONS(629), 17,
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
  [6801] = 2,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    ACTIONS(135), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6823] = 2,
    ACTIONS(633), 1,
      anon_sym_DOT,
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
  [6845] = 2,
    ACTIONS(637), 1,
      aux_sym_list_roles_token3,
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
  [6867] = 2,
    ACTIONS(641), 1,
      aux_sym_list_roles_token2,
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
  [6889] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6911] = 2,
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
  [6933] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6955] = 1,
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
  [6974] = 1,
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
  [6993] = 1,
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
  [7012] = 1,
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
  [7031] = 1,
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
  [7050] = 1,
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
  [7069] = 1,
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
  [7088] = 1,
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
  [7107] = 1,
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
  [7126] = 1,
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
  [7145] = 1,
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
  [7164] = 1,
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
  [7183] = 1,
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
  [7202] = 1,
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
  [7221] = 1,
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
  [7240] = 1,
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
  [7259] = 1,
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
  [7278] = 1,
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
  [7297] = 1,
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
  [7316] = 1,
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
  [7335] = 1,
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
  [7354] = 1,
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
  [7373] = 1,
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
  [7392] = 1,
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
  [7411] = 1,
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
  [7430] = 1,
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
  [7449] = 1,
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
  [7468] = 1,
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
  [7487] = 1,
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
  [7506] = 1,
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
  [7525] = 1,
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
  [7544] = 1,
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
  [7563] = 1,
    ACTIONS(490), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7582] = 1,
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
  [7601] = 1,
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
  [7620] = 1,
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
  [7639] = 1,
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
  [7658] = 1,
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
  [7677] = 1,
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
  [7696] = 1,
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
  [7715] = 1,
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
  [7734] = 1,
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
  [7753] = 1,
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
  [7772] = 1,
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
  [7791] = 1,
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
  [7810] = 1,
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
  [7829] = 1,
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
  [7848] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7867] = 1,
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
  [7886] = 1,
    ACTIONS(135), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7905] = 1,
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
  [7924] = 1,
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
  [7943] = 1,
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
  [7962] = 1,
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
  [7981] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8000] = 1,
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
  [8019] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8038] = 2,
    ACTIONS(751), 1,
      anon_sym_SEMI,
    ACTIONS(749), 15,
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
  [8059] = 1,
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
  [8078] = 1,
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
  [8097] = 1,
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
  [8116] = 1,
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
  [8135] = 1,
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
  [8154] = 1,
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
  [8173] = 1,
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
  [8192] = 1,
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
  [8211] = 1,
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
  [8230] = 1,
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
  [8249] = 1,
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
  [8268] = 1,
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
  [8287] = 1,
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
  [8306] = 1,
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
  [8325] = 1,
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
  [8344] = 1,
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
  [8363] = 1,
    ACTIONS(217), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8382] = 1,
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
  [8401] = 1,
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
  [8420] = 1,
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
  [8439] = 1,
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
  [8458] = 1,
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
  [8477] = 1,
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
  [8496] = 1,
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
  [8515] = 1,
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
  [8534] = 1,
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
  [8553] = 1,
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
  [8572] = 1,
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
  [8591] = 1,
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
  [8610] = 1,
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
  [8629] = 1,
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
  [8648] = 1,
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
  [8667] = 1,
    ACTIONS(243), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8686] = 1,
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
  [8705] = 1,
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
  [8724] = 1,
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
  [8743] = 1,
    ACTIONS(500), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8762] = 1,
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
  [8781] = 1,
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
  [8800] = 1,
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
  [8819] = 1,
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
  [8838] = 1,
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
  [8857] = 1,
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
  [8876] = 1,
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
  [8895] = 1,
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
  [8914] = 1,
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
  [8933] = 1,
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
  [8952] = 1,
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
  [8971] = 1,
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
  [8990] = 1,
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
  [9009] = 1,
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
  [9028] = 1,
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
  [9047] = 1,
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
  [9066] = 1,
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
  [9085] = 1,
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
  [9104] = 1,
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
  [9123] = 1,
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
  [9142] = 1,
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
  [9161] = 1,
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
  [9180] = 1,
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
  [9199] = 1,
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
  [9218] = 1,
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
  [9237] = 1,
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
  [9256] = 1,
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
  [9275] = 1,
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
  [9294] = 1,
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
  [9313] = 1,
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
  [9332] = 1,
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
  [9351] = 1,
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
  [9370] = 1,
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
  [9389] = 1,
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
  [9408] = 1,
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
  [9427] = 1,
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
  [9446] = 1,
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
  [9465] = 1,
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
  [9484] = 1,
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
  [9503] = 1,
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
  [9522] = 1,
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
  [9541] = 1,
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
  [9560] = 1,
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
  [9579] = 1,
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
  [9598] = 1,
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
  [9617] = 1,
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
  [9636] = 1,
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
  [9655] = 1,
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
  [9674] = 1,
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
  [9693] = 1,
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
  [9712] = 1,
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
  [9731] = 1,
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
  [9750] = 1,
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
  [9769] = 1,
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
  [9788] = 1,
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
  [9807] = 1,
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
  [9826] = 1,
    ACTIONS(171), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9845] = 1,
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
  [9864] = 1,
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
  [9883] = 1,
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
  [9902] = 1,
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
  [9921] = 1,
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
  [9940] = 1,
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
  [9959] = 1,
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
  [9978] = 1,
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
  [9997] = 1,
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
  [10016] = 1,
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
  [10035] = 1,
    ACTIONS(492), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [10054] = 1,
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
  [10073] = 1,
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
  [10092] = 1,
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
  [10111] = 1,
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
  [10130] = 1,
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
  [10149] = 1,
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
  [10168] = 1,
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
  [10187] = 1,
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
  [10206] = 7,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    ACTIONS(941), 1,
      sym_object_name,
    STATE(856), 1,
      sym_constant,
    ACTIONS(347), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    STATE(535), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(345), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10236] = 1,
    ACTIONS(943), 15,
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
  [10254] = 5,
    ACTIONS(347), 1,
      sym__decimal_literal,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    STATE(410), 1,
      sym_init_cond_definition,
    STATE(189), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10279] = 5,
    ACTIONS(347), 1,
      sym__decimal_literal,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    STATE(277), 1,
      sym_init_cond_definition,
    STATE(189), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10304] = 5,
    ACTIONS(347), 1,
      sym__decimal_literal,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    STATE(409), 1,
      sym_init_cond_definition,
    STATE(189), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10329] = 5,
    ACTIONS(347), 1,
      sym__decimal_literal,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    STATE(269), 1,
      sym_init_cond_definition,
    STATE(189), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10354] = 5,
    ACTIONS(347), 1,
      sym__decimal_literal,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    STATE(776), 1,
      sym_init_cond_definition,
    STATE(189), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10379] = 5,
    ACTIONS(347), 1,
      sym__decimal_literal,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    STATE(408), 1,
      sym_init_cond_definition,
    STATE(189), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10404] = 5,
    ACTIONS(347), 1,
      sym__decimal_literal,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym_init_cond_definition,
    STATE(189), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10429] = 5,
    ACTIONS(347), 1,
      sym__decimal_literal,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    STATE(355), 1,
      sym_init_cond_definition,
    STATE(189), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10454] = 5,
    ACTIONS(347), 1,
      sym__decimal_literal,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym_init_cond_definition,
    STATE(189), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10479] = 7,
    ACTIONS(947), 1,
      anon_sym_LPAREN,
    ACTIONS(949), 1,
      sym_object_name,
    STATE(708), 1,
      sym_init_cond_hash_item,
    STATE(710), 1,
      sym_init_cond_list,
    STATE(713), 1,
      sym_constant,
    ACTIONS(347), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(345), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10507] = 6,
    ACTIONS(951), 1,
      anon_sym_STAR,
    ACTIONS(953), 1,
      sym_object_name,
    STATE(1319), 1,
      sym_function_args,
    STATE(674), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(347), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(345), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10533] = 5,
    ACTIONS(953), 1,
      sym_object_name,
    STATE(996), 1,
      sym_function_args,
    STATE(674), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(347), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(345), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10556] = 4,
    ACTIONS(955), 1,
      sym_object_name,
    STATE(76), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(347), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(345), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10576] = 4,
    ACTIONS(347), 1,
      sym__decimal_literal,
    ACTIONS(947), 1,
      anon_sym_LPAREN,
    STATE(783), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10596] = 7,
    ACTIONS(957), 1,
      anon_sym_DOT,
    ACTIONS(959), 1,
      aux_sym_drop_index_token1,
    ACTIONS(961), 1,
      aux_sym_materialized_view_options_token1,
    ACTIONS(963), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(965), 1,
      aux_sym_alter_table_rename_token1,
    STATE(280), 1,
      sym_alter_table_operation,
    STATE(281), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10622] = 4,
    ACTIONS(969), 1,
      aux_sym_priviledge_token1,
    ACTIONS(971), 1,
      aux_sym_resource_token4,
    STATE(163), 1,
      sym_priviledge,
    ACTIONS(967), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10642] = 4,
    ACTIONS(973), 1,
      sym_object_name,
    STATE(780), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(347), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(345), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10662] = 5,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 1,
      sym__decimal_literal,
    STATE(63), 1,
      sym_assignment_tuple,
    STATE(550), 1,
      sym_constant,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10684] = 11,
    ACTIONS(975), 1,
      aux_sym_truncate_token2,
    ACTIONS(977), 1,
      aux_sym_create_index_token2,
    ACTIONS(979), 1,
      aux_sym_resource_token2,
    ACTIONS(981), 1,
      aux_sym_resource_token5,
    ACTIONS(983), 1,
      aux_sym_resource_token6,
    ACTIONS(985), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(987), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(989), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(991), 1,
      aux_sym_drop_type_token1,
    ACTIONS(993), 1,
      aux_sym_drop_user_token1,
    ACTIONS(995), 1,
      aux_sym_create_aggregate_token1,
  [10718] = 4,
    ACTIONS(347), 1,
      sym__decimal_literal,
    ACTIONS(997), 1,
      aux_sym_relation_contains_key_token2,
    STATE(79), 1,
      sym_constant,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10737] = 6,
    ACTIONS(959), 1,
      aux_sym_drop_index_token1,
    ACTIONS(961), 1,
      aux_sym_materialized_view_options_token1,
    ACTIONS(963), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(965), 1,
      aux_sym_alter_table_rename_token1,
    STATE(279), 1,
      sym_alter_table_operation,
    STATE(281), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10760] = 6,
    ACTIONS(999), 1,
      anon_sym_LPAREN,
    ACTIONS(1005), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1007), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(1009), 1,
      aux_sym_column_not_null_token1,
    ACTIONS(1001), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1003), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10783] = 4,
    ACTIONS(347), 1,
      sym__decimal_literal,
    ACTIONS(1011), 1,
      anon_sym_RBRACE,
    STATE(530), 1,
      sym_constant,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10802] = 3,
    ACTIONS(969), 1,
      aux_sym_priviledge_token1,
    STATE(1387), 1,
      sym_priviledge,
    ACTIONS(967), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10819] = 3,
    ACTIONS(969), 1,
      aux_sym_priviledge_token1,
    STATE(1388), 1,
      sym_priviledge,
    ACTIONS(967), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10836] = 10,
    ACTIONS(1013), 1,
      aux_sym_truncate_token2,
    ACTIONS(1015), 1,
      aux_sym_create_index_token2,
    ACTIONS(1017), 1,
      aux_sym_resource_token2,
    ACTIONS(1019), 1,
      aux_sym_resource_token5,
    ACTIONS(1021), 1,
      aux_sym_resource_token6,
    ACTIONS(1023), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(1025), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1027), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(1029), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1031), 1,
      aux_sym_drop_user_token1,
  [10867] = 3,
    ACTIONS(347), 1,
      sym__decimal_literal,
    STATE(1027), 1,
      sym_constant,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10883] = 3,
    ACTIONS(347), 1,
      sym__decimal_literal,
    STATE(614), 1,
      sym_constant,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10899] = 3,
    ACTIONS(347), 1,
      sym__decimal_literal,
    STATE(740), 1,
      sym_constant,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10915] = 3,
    ACTIONS(347), 1,
      sym__decimal_literal,
    STATE(713), 1,
      sym_constant,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10931] = 3,
    ACTIONS(347), 1,
      sym__decimal_literal,
    STATE(550), 1,
      sym_constant,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10947] = 3,
    ACTIONS(347), 1,
      sym__decimal_literal,
    STATE(222), 1,
      sym_constant,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10963] = 3,
    ACTIONS(347), 1,
      sym__decimal_literal,
    STATE(151), 1,
      sym_constant,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10979] = 3,
    ACTIONS(347), 1,
      sym__decimal_literal,
    STATE(750), 1,
      sym_constant,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10995] = 3,
    ACTIONS(347), 1,
      sym__decimal_literal,
    STATE(580), 1,
      sym_constant,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [11011] = 3,
    ACTIONS(347), 1,
      sym__decimal_literal,
    STATE(76), 1,
      sym_constant,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [11027] = 3,
    ACTIONS(347), 1,
      sym__decimal_literal,
    STATE(83), 1,
      sym_constant,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [11043] = 3,
    ACTIONS(347), 1,
      sym__decimal_literal,
    STATE(487), 1,
      sym_constant,
    ACTIONS(345), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [11059] = 5,
    ACTIONS(999), 1,
      anon_sym_LPAREN,
    ACTIONS(1005), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1007), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(1001), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1003), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11079] = 6,
    ACTIONS(1033), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1035), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1037), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1039), 1,
      sym_object_name,
    STATE(968), 1,
      sym_index_column_spec,
    STATE(1063), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11100] = 6,
    ACTIONS(1033), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1035), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1037), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1039), 1,
      sym_object_name,
    STATE(964), 1,
      sym_index_column_spec,
    STATE(1063), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11121] = 6,
    ACTIONS(1033), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1035), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1037), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1039), 1,
      sym_object_name,
    STATE(880), 1,
      sym_index_column_spec,
    STATE(1063), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11142] = 6,
    ACTIONS(1041), 1,
      anon_sym_DOT,
    ACTIONS(1043), 1,
      aux_sym_priviledge_token3,
    ACTIONS(1045), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1047), 1,
      aux_sym_alter_table_rename_token1,
    STATE(288), 1,
      sym_alter_type_operation,
    STATE(289), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [11163] = 6,
    ACTIONS(1033), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1035), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1037), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1039), 1,
      sym_object_name,
    STATE(1064), 1,
      sym_index_column_spec,
    STATE(1063), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11184] = 7,
    ACTIONS(1049), 1,
      aux_sym_truncate_token2,
    ACTIONS(1051), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1053), 1,
      aux_sym_resource_token2,
    ACTIONS(1055), 1,
      aux_sym_resource_token5,
    ACTIONS(1057), 1,
      aux_sym_resource_token6,
    ACTIONS(1059), 1,
      sym_object_name,
    STATE(1208), 1,
      sym_resource,
  [11206] = 6,
    ACTIONS(1061), 1,
      anon_sym_LPAREN,
    ACTIONS(1063), 1,
      sym_object_name,
    STATE(84), 1,
      sym_relation_element,
    STATE(486), 1,
      sym_function_call,
    STATE(744), 1,
      sym_column_not_null,
    STATE(86), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11226] = 7,
    ACTIONS(1065), 1,
      aux_sym_select_statement_token2,
    ACTIONS(1067), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1069), 1,
      anon_sym_STAR,
    ACTIONS(1071), 1,
      sym_object_name,
    STATE(574), 1,
      sym_select_element,
    STATE(575), 1,
      sym_function_call,
    STATE(866), 1,
      sym_select_elements,
  [11248] = 7,
    ACTIONS(1049), 1,
      aux_sym_truncate_token2,
    ACTIONS(1051), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1053), 1,
      aux_sym_resource_token2,
    ACTIONS(1055), 1,
      aux_sym_resource_token5,
    ACTIONS(1057), 1,
      aux_sym_resource_token6,
    ACTIONS(1059), 1,
      sym_object_name,
    STATE(251), 1,
      sym_resource,
  [11270] = 3,
    ACTIONS(1077), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1073), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1075), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11284] = 7,
    ACTIONS(1049), 1,
      aux_sym_truncate_token2,
    ACTIONS(1051), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1053), 1,
      aux_sym_resource_token2,
    ACTIONS(1055), 1,
      aux_sym_resource_token5,
    ACTIONS(1057), 1,
      aux_sym_resource_token6,
    ACTIONS(1059), 1,
      sym_object_name,
    STATE(1205), 1,
      sym_resource,
  [11306] = 6,
    ACTIONS(1061), 1,
      anon_sym_LPAREN,
    ACTIONS(1079), 1,
      sym_object_name,
    STATE(85), 1,
      sym_relation_element,
    STATE(99), 1,
      sym_relation_elements,
    STATE(486), 1,
      sym_function_call,
    STATE(86), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11326] = 3,
    ACTIONS(1085), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1081), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1083), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11340] = 5,
    ACTIONS(1043), 1,
      aux_sym_priviledge_token3,
    ACTIONS(1045), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1047), 1,
      aux_sym_alter_table_rename_token1,
    STATE(272), 1,
      sym_alter_type_operation,
    STATE(289), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [11358] = 6,
    ACTIONS(1069), 1,
      anon_sym_STAR,
    ACTIONS(1071), 1,
      sym_object_name,
    ACTIONS(1087), 1,
      aux_sym_select_statement_token3,
    STATE(574), 1,
      sym_select_element,
    STATE(575), 1,
      sym_function_call,
    STATE(830), 1,
      sym_select_elements,
  [11377] = 6,
    ACTIONS(1089), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1091), 1,
      anon_sym_DOT,
    ACTIONS(1093), 1,
      anon_sym_LPAREN,
    ACTIONS(1095), 1,
      aux_sym_insert_values_spec_token1,
    STATE(117), 1,
      sym_insert_values_spec,
    STATE(569), 1,
      sym_insert_column_spec,
  [11396] = 6,
    ACTIONS(1097), 1,
      aux_sym_truncate_token2,
    ACTIONS(1099), 1,
      aux_sym_resource_token2,
    ACTIONS(1101), 1,
      aux_sym_resource_token6,
    ACTIONS(1103), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1105), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1107), 1,
      aux_sym_drop_user_token1,
  [11415] = 5,
    ACTIONS(1061), 1,
      anon_sym_LPAREN,
    ACTIONS(1079), 1,
      sym_object_name,
    STATE(84), 1,
      sym_relation_element,
    STATE(486), 1,
      sym_function_call,
    STATE(86), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11432] = 4,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    ACTIONS(1109), 1,
      sym__decimal_literal,
    STATE(824), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [11447] = 2,
    ACTIONS(1111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1113), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11458] = 6,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
    ACTIONS(1117), 1,
      anon_sym_RPAREN,
    STATE(697), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(698), 1,
      aux_sym_relation_element_repeat2,
    STATE(701), 1,
      sym_assignment_tuple,
  [11477] = 6,
    ACTIONS(1089), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1093), 1,
      anon_sym_LPAREN,
    ACTIONS(1095), 1,
      aux_sym_insert_values_spec_token1,
    ACTIONS(1119), 1,
      anon_sym_DOT,
    STATE(130), 1,
      sym_insert_values_spec,
    STATE(682), 1,
      sym_insert_column_spec,
  [11496] = 4,
    ACTIONS(1121), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1125), 1,
      aux_sym_role_with_options_token4,
    STATE(133), 1,
      sym_role_with_options,
    ACTIONS(1123), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11510] = 4,
    ACTIONS(999), 1,
      anon_sym_LPAREN,
    ACTIONS(1129), 1,
      anon_sym_DOT,
    ACTIONS(1131), 1,
      aux_sym_select_element_token1,
    ACTIONS(1127), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11524] = 5,
    ACTIONS(1133), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1135), 1,
      sym_object_name,
    STATE(516), 1,
      sym_from_spec,
    STATE(581), 1,
      sym_delete_column_item,
    STATE(860), 1,
      sym_delete_column_list,
  [11540] = 4,
    ACTIONS(1137), 1,
      anon_sym_LPAREN,
    ACTIONS(1139), 1,
      sym_object_name,
    STATE(961), 1,
      sym_primary_key_definition,
    STATE(962), 2,
      sym_compound_key,
      sym_composite_key,
  [11554] = 5,
    ACTIONS(1089), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1093), 1,
      anon_sym_LPAREN,
    ACTIONS(1095), 1,
      aux_sym_insert_values_spec_token1,
    STATE(128), 1,
      sym_insert_values_spec,
    STATE(716), 1,
      sym_insert_column_spec,
  [11570] = 3,
    ACTIONS(1143), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(680), 1,
      sym_using_timestamp_spec,
    ACTIONS(1141), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11582] = 1,
    ACTIONS(1145), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11590] = 5,
    ACTIONS(147), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(149), 1,
      sym_object_name,
    STATE(142), 1,
      sym_table_option_item,
    STATE(354), 1,
      sym_clustering_order,
    STATE(1090), 1,
      sym_table_option_name,
  [11606] = 3,
    ACTIONS(1149), 1,
      anon_sym_LBRACE,
    ACTIONS(1147), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(174), 2,
      sym_option_hash,
      sym_table_option_value,
  [11618] = 5,
    ACTIONS(147), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(149), 1,
      sym_object_name,
    STATE(168), 1,
      sym_table_option_item,
    STATE(393), 1,
      sym_clustering_order,
    STATE(1090), 1,
      sym_table_option_name,
  [11634] = 5,
    ACTIONS(1151), 1,
      sym__string_literal,
    ACTIONS(1153), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1155), 1,
      aux_sym_create_index_token3,
    ACTIONS(1157), 1,
      sym_object_name,
    STATE(1367), 1,
      sym_index_name,
  [11650] = 1,
    ACTIONS(1159), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11658] = 5,
    ACTIONS(1069), 1,
      anon_sym_STAR,
    ACTIONS(1161), 1,
      sym_object_name,
    STATE(574), 1,
      sym_select_element,
    STATE(575), 1,
      sym_function_call,
    STATE(768), 1,
      sym_select_elements,
  [11674] = 5,
    ACTIONS(1133), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1135), 1,
      sym_object_name,
    STATE(568), 1,
      sym_from_spec,
    STATE(581), 1,
      sym_delete_column_item,
    STATE(770), 1,
      sym_delete_column_list,
  [11690] = 5,
    ACTIONS(147), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(149), 1,
      sym_object_name,
    STATE(168), 1,
      sym_table_option_item,
    STATE(334), 1,
      sym_clustering_order,
    STATE(1090), 1,
      sym_table_option_name,
  [11706] = 1,
    ACTIONS(1163), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11714] = 3,
    ACTIONS(1143), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(608), 1,
      sym_using_timestamp_spec,
    ACTIONS(1165), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11726] = 1,
    ACTIONS(1167), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11734] = 3,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    STATE(507), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(1172), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11746] = 4,
    ACTIONS(1121), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1125), 1,
      aux_sym_role_with_options_token4,
    STATE(227), 1,
      sym_role_with_options,
    ACTIONS(1123), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11760] = 5,
    ACTIONS(1089), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1093), 1,
      anon_sym_LPAREN,
    ACTIONS(1095), 1,
      aux_sym_insert_values_spec_token1,
    STATE(115), 1,
      sym_insert_values_spec,
    STATE(632), 1,
      sym_insert_column_spec,
  [11776] = 1,
    ACTIONS(1174), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11784] = 1,
    ACTIONS(1176), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11792] = 1,
    ACTIONS(1178), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11800] = 5,
    ACTIONS(1069), 1,
      anon_sym_STAR,
    ACTIONS(1161), 1,
      sym_object_name,
    STATE(574), 1,
      sym_select_element,
    STATE(575), 1,
      sym_function_call,
    STATE(830), 1,
      sym_select_elements,
  [11816] = 3,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(1180), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11827] = 4,
    ACTIONS(999), 1,
      anon_sym_LPAREN,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    ACTIONS(1184), 1,
      anon_sym_RPAREN,
    STATE(704), 1,
      aux_sym_function_args_repeat1,
  [11840] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1143), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(158), 1,
      sym_where_spec,
    STATE(825), 1,
      sym_using_timestamp_spec,
  [11853] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      sym_where_spec,
    STATE(573), 1,
      aux_sym_update_repeat1,
  [11866] = 3,
    ACTIONS(1190), 1,
      aux_sym_create_materialized_view_token1,
    STATE(803), 1,
      sym_primary_key_column,
    ACTIONS(1188), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11877] = 3,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    STATE(514), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(1192), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11888] = 4,
    ACTIONS(221), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1194), 1,
      anon_sym_DOT,
    ACTIONS(1196), 1,
      aux_sym_update_token2,
    STATE(1326), 1,
      sym_using_ttl_timestamp,
  [11901] = 4,
    ACTIONS(1198), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(1200), 1,
      sym_object_name,
    STATE(153), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [11914] = 4,
    ACTIONS(1200), 1,
      sym_object_name,
    ACTIONS(1202), 1,
      aux_sym_delete_statement_token3,
    STATE(153), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [11927] = 4,
    ACTIONS(1200), 1,
      sym_object_name,
    ACTIONS(1204), 1,
      aux_sym_delete_statement_token3,
    STATE(153), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [11940] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      sym_where_spec,
    STATE(573), 1,
      aux_sym_update_repeat1,
  [11953] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      sym_where_spec,
    STATE(573), 1,
      aux_sym_update_repeat1,
  [11966] = 4,
    ACTIONS(1206), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1208), 1,
      aux_sym_create_materialized_view_token1,
    STATE(699), 1,
      aux_sym_relation_elements_repeat1,
    STATE(700), 1,
      aux_sym_materialized_view_where_repeat1,
  [11979] = 4,
    ACTIONS(1200), 1,
      sym_object_name,
    ACTIONS(1210), 1,
      aux_sym_delete_statement_token3,
    STATE(153), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [11992] = 4,
    ACTIONS(1200), 1,
      sym_object_name,
    ACTIONS(1212), 1,
      aux_sym_delete_statement_token3,
    STATE(153), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [12005] = 4,
    ACTIONS(1200), 1,
      sym_object_name,
    ACTIONS(1214), 1,
      aux_sym_delete_statement_token3,
    STATE(153), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [12018] = 4,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1218), 1,
      anon_sym_COLON,
    ACTIONS(1220), 1,
      anon_sym_RBRACE,
    STATE(687), 1,
      aux_sym_assignment_tuple_repeat1,
  [12031] = 4,
    ACTIONS(1200), 1,
      sym_object_name,
    ACTIONS(1222), 1,
      aux_sym_delete_statement_token3,
    STATE(153), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [12044] = 4,
    ACTIONS(221), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1224), 1,
      anon_sym_DOT,
    ACTIONS(1226), 1,
      aux_sym_update_token2,
    STATE(1180), 1,
      sym_using_ttl_timestamp,
  [12057] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      sym_where_spec,
    STATE(539), 1,
      aux_sym_update_repeat1,
  [12070] = 4,
    ACTIONS(1200), 1,
      sym_object_name,
    ACTIONS(1228), 1,
      aux_sym_delete_statement_token3,
    STATE(153), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [12083] = 2,
    ACTIONS(1230), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1232), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12092] = 4,
    ACTIONS(1200), 1,
      sym_object_name,
    ACTIONS(1234), 1,
      aux_sym_delete_statement_token3,
    STATE(153), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [12105] = 4,
    ACTIONS(1200), 1,
      sym_object_name,
    ACTIONS(1236), 1,
      aux_sym_delete_statement_token3,
    STATE(153), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [12118] = 4,
    ACTIONS(1238), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1240), 1,
      sym_object_name,
    STATE(797), 1,
      sym_column_definition,
    STATE(926), 1,
      sym_primary_key_element,
  [12131] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      sym_where_spec,
    STATE(573), 1,
      aux_sym_update_repeat1,
  [12144] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      sym_where_spec,
    STATE(573), 1,
      aux_sym_update_repeat1,
  [12157] = 4,
    ACTIONS(1238), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1240), 1,
      sym_object_name,
    STATE(797), 1,
      sym_column_definition,
    STATE(974), 1,
      sym_primary_key_element,
  [12170] = 4,
    ACTIONS(1242), 1,
      sym_object_name,
    STATE(112), 1,
      sym_table_option_item,
    STATE(273), 1,
      sym_table_options,
    STATE(1090), 1,
      sym_table_option_name,
  [12183] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      sym_where_spec,
    STATE(573), 1,
      aux_sym_update_repeat1,
  [12196] = 4,
    ACTIONS(1200), 1,
      sym_object_name,
    ACTIONS(1244), 1,
      aux_sym_delete_statement_token3,
    STATE(153), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [12209] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1143), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(152), 1,
      sym_where_spec,
    STATE(775), 1,
      sym_using_timestamp_spec,
  [12222] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      sym_where_spec,
    STATE(540), 1,
      aux_sym_update_repeat1,
  [12235] = 4,
    ACTIONS(1246), 1,
      aux_sym_timestamp_token1,
    ACTIONS(1248), 1,
      aux_sym_ttl_token1,
    STATE(194), 1,
      sym_ttl,
    STATE(207), 1,
      sym_timestamp,
  [12248] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      sym_where_spec,
    STATE(566), 1,
      aux_sym_update_repeat1,
  [12261] = 3,
    ACTIONS(1250), 1,
      anon_sym_RPAREN,
    STATE(1143), 1,
      sym_order_direction,
    ACTIONS(169), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [12272] = 1,
    ACTIONS(1172), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [12279] = 4,
    ACTIONS(1242), 1,
      sym_object_name,
    STATE(112), 1,
      sym_table_option_item,
    STATE(415), 1,
      sym_table_options,
    STATE(1090), 1,
      sym_table_option_name,
  [12292] = 4,
    ACTIONS(1200), 1,
      sym_object_name,
    ACTIONS(1252), 1,
      aux_sym_delete_statement_token3,
    STATE(153), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [12305] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      sym_where_spec,
    STATE(525), 1,
      aux_sym_update_repeat1,
  [12318] = 1,
    ACTIONS(1254), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12325] = 4,
    ACTIONS(1200), 1,
      sym_object_name,
    ACTIONS(1256), 1,
      aux_sym_delete_statement_token3,
    STATE(153), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [12338] = 4,
    ACTIONS(1200), 1,
      sym_object_name,
    ACTIONS(1258), 1,
      aux_sym_delete_statement_token3,
    STATE(153), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [12351] = 4,
    ACTIONS(1151), 1,
      sym__string_literal,
    ACTIONS(1157), 1,
      sym_object_name,
    ACTIONS(1260), 1,
      aux_sym_create_index_token3,
    STATE(1071), 1,
      sym_index_name,
  [12364] = 4,
    ACTIONS(1200), 1,
      sym_object_name,
    ACTIONS(1262), 1,
      aux_sym_delete_statement_token3,
    STATE(153), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [12377] = 4,
    ACTIONS(1242), 1,
      sym_object_name,
    STATE(112), 1,
      sym_table_option_item,
    STATE(367), 1,
      sym_table_options,
    STATE(1090), 1,
      sym_table_option_name,
  [12390] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      sym_where_spec,
    STATE(543), 1,
      aux_sym_update_repeat1,
  [12403] = 4,
    ACTIONS(1206), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1264), 1,
      aux_sym_create_materialized_view_token1,
    STATE(526), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(681), 1,
      aux_sym_relation_elements_repeat1,
  [12416] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      sym_where_spec,
    STATE(517), 1,
      aux_sym_update_repeat1,
  [12429] = 4,
    ACTIONS(1200), 1,
      sym_object_name,
    ACTIONS(1266), 1,
      aux_sym_delete_statement_token3,
    STATE(153), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [12442] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      sym_where_spec,
    STATE(573), 1,
      aux_sym_update_repeat1,
  [12455] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      sym_where_spec,
    STATE(564), 1,
      aux_sym_update_repeat1,
  [12468] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      sym_where_spec,
    STATE(573), 1,
      aux_sym_update_repeat1,
  [12481] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      sym_where_spec,
    STATE(524), 1,
      aux_sym_update_repeat1,
  [12494] = 4,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1143), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(192), 1,
      sym_where_spec,
    STATE(762), 1,
      sym_using_timestamp_spec,
  [12507] = 3,
    ACTIONS(1089), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1095), 1,
      aux_sym_insert_values_spec_token1,
    STATE(124), 1,
      sym_insert_values_spec,
  [12517] = 3,
    ACTIONS(1268), 1,
      anon_sym_COMMA,
    ACTIONS(1270), 1,
      anon_sym_GT,
    STATE(639), 1,
      aux_sym_data_type_definition_repeat1,
  [12527] = 3,
    ACTIONS(1272), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1274), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1276), 1,
      aux_sym_update_token1,
  [12537] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1278), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [12547] = 3,
    ACTIONS(1280), 1,
      anon_sym_COMMA,
    ACTIONS(1283), 1,
      aux_sym_where_spec_token1,
    STATE(573), 1,
      aux_sym_update_repeat1,
  [12557] = 3,
    ACTIONS(1285), 1,
      anon_sym_COMMA,
    ACTIONS(1287), 1,
      aux_sym_from_spec_token1,
    STATE(605), 1,
      aux_sym_select_elements_repeat1,
  [12567] = 2,
    ACTIONS(1131), 1,
      aux_sym_select_element_token1,
    ACTIONS(1127), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12575] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(1066), 1,
      sym_return_mode,
  [12585] = 3,
    ACTIONS(1293), 1,
      sym_object_name,
    STATE(696), 1,
      sym_column_definition,
    STATE(956), 1,
      sym_column_definition_list,
  [12595] = 2,
    ACTIONS(1297), 1,
      anon_sym_LBRACK,
    ACTIONS(1295), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12603] = 3,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1301), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_create_function_repeat1,
  [12613] = 3,
    ACTIONS(1303), 1,
      anon_sym_COMMA,
    ACTIONS(1305), 1,
      anon_sym_RBRACE,
    STATE(661), 1,
      aux_sym_assignment_map_repeat1,
  [12623] = 3,
    ACTIONS(1307), 1,
      anon_sym_COMMA,
    ACTIONS(1309), 1,
      aux_sym_from_spec_token1,
    STATE(606), 1,
      aux_sym_delete_column_list_repeat1,
  [12633] = 3,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
    STATE(662), 1,
      aux_sym_relation_element_repeat1,
  [12643] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1315), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [12653] = 3,
    ACTIONS(1317), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1319), 1,
      sym_object_name,
    STATE(1360), 1,
      sym_keyspace_name,
  [12663] = 3,
    ACTIONS(1321), 1,
      anon_sym_COMMA,
    ACTIONS(1324), 1,
      anon_sym_RBRACE,
    STATE(585), 1,
      aux_sym_assignment_map_repeat1,
  [12673] = 3,
    ACTIONS(1326), 1,
      anon_sym_COMMA,
    ACTIONS(1328), 1,
      anon_sym_RBRACE,
    STATE(638), 1,
      aux_sym_replication_list_repeat1,
  [12683] = 3,
    ACTIONS(1330), 1,
      anon_sym_COMMA,
    ACTIONS(1332), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_create_type_repeat1,
  [12693] = 3,
    ACTIONS(1242), 1,
      sym_object_name,
    STATE(168), 1,
      sym_table_option_item,
    STATE(1090), 1,
      sym_table_option_name,
  [12703] = 3,
    ACTIONS(1330), 1,
      anon_sym_COMMA,
    ACTIONS(1334), 1,
      anon_sym_RPAREN,
    STATE(673), 1,
      aux_sym_create_type_repeat1,
  [12713] = 3,
    ACTIONS(1336), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1338), 1,
      sym_object_name,
    STATE(1354), 1,
      sym_trigger_name,
  [12723] = 3,
    ACTIONS(1340), 1,
      anon_sym_RPAREN,
    ACTIONS(1342), 1,
      sym_object_name,
    STATE(678), 1,
      sym_param,
  [12733] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(1070), 1,
      sym_return_mode,
  [12743] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(1127), 1,
      sym_return_mode,
  [12753] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(1097), 1,
      sym_return_mode,
  [12763] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
    STATE(676), 1,
      aux_sym_relation_element_repeat2,
  [12773] = 3,
    ACTIONS(1346), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1348), 1,
      sym_object_name,
    STATE(1349), 1,
      sym_user_name,
  [12783] = 3,
    ACTIONS(1350), 1,
      sym__string_literal,
    ACTIONS(1352), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1354), 1,
      sym_object_name,
  [12793] = 3,
    ACTIONS(1348), 1,
      sym_object_name,
    ACTIONS(1356), 1,
      aux_sym_delete_statement_token2,
    STATE(340), 1,
      sym_user_name,
  [12803] = 3,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1358), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_create_function_repeat1,
  [12813] = 3,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1360), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_create_function_repeat1,
  [12823] = 3,
    ACTIONS(1362), 1,
      anon_sym_COMMA,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
    STATE(601), 1,
      aux_sym_relation_element_repeat1,
  [12833] = 3,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1367), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_create_function_repeat1,
  [12843] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(960), 1,
      sym_return_mode,
  [12853] = 3,
    ACTIONS(1161), 1,
      sym_object_name,
    STATE(575), 1,
      sym_function_call,
    STATE(767), 1,
      sym_select_element,
  [12863] = 3,
    ACTIONS(1285), 1,
      anon_sym_COMMA,
    ACTIONS(1369), 1,
      aux_sym_from_spec_token1,
    STATE(670), 1,
      aux_sym_select_elements_repeat1,
  [12873] = 3,
    ACTIONS(1307), 1,
      anon_sym_COMMA,
    ACTIONS(1371), 1,
      aux_sym_from_spec_token1,
    STATE(675), 1,
      aux_sym_delete_column_list_repeat1,
  [12883] = 3,
    ACTIONS(1342), 1,
      sym_object_name,
    ACTIONS(1373), 1,
      anon_sym_RPAREN,
    STATE(646), 1,
      sym_param,
  [12893] = 1,
    ACTIONS(1141), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12899] = 3,
    ACTIONS(1375), 1,
      anon_sym_COMMA,
    ACTIONS(1378), 1,
      anon_sym_RBRACE,
    STATE(609), 1,
      aux_sym_option_hash_repeat1,
  [12909] = 3,
    ACTIONS(1380), 1,
      anon_sym_DOT,
    ACTIONS(1382), 1,
      aux_sym_where_spec_token1,
    STATE(1115), 1,
      sym_materialized_view_where,
  [12919] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(973), 1,
      sym_return_mode,
  [12929] = 3,
    ACTIONS(1330), 1,
      anon_sym_COMMA,
    ACTIONS(1384), 1,
      anon_sym_RPAREN,
    STATE(684), 1,
      aux_sym_create_type_repeat1,
  [12939] = 3,
    ACTIONS(1342), 1,
      sym_object_name,
    ACTIONS(1386), 1,
      anon_sym_RPAREN,
    STATE(686), 1,
      sym_param,
  [12949] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1388), 1,
      anon_sym_RBRACK,
    STATE(690), 1,
      aux_sym_assignment_tuple_repeat1,
  [12959] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(977), 1,
      sym_return_mode,
  [12969] = 3,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1390), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_create_function_repeat1,
  [12979] = 3,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1392), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_create_function_repeat1,
  [12989] = 3,
    ACTIONS(1394), 1,
      anon_sym_COMMA,
    ACTIONS(1396), 1,
      anon_sym_RPAREN,
    STATE(633), 1,
      aux_sym_column_definition_list_repeat1,
  [12999] = 3,
    ACTIONS(1398), 1,
      anon_sym_COMMA,
    ACTIONS(1400), 1,
      anon_sym_RPAREN,
    STATE(683), 1,
      aux_sym_expression_list_repeat1,
  [13009] = 3,
    ACTIONS(1293), 1,
      sym_object_name,
    STATE(696), 1,
      sym_column_definition,
    STATE(983), 1,
      sym_column_definition_list,
  [13019] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(918), 1,
      sym_return_mode,
  [13029] = 3,
    ACTIONS(1342), 1,
      sym_object_name,
    ACTIONS(1402), 1,
      anon_sym_RPAREN,
    STATE(668), 1,
      sym_param,
  [13039] = 3,
    ACTIONS(1293), 1,
      sym_object_name,
    STATE(696), 1,
      sym_column_definition,
    STATE(929), 1,
      sym_column_definition_list,
  [13049] = 3,
    ACTIONS(1404), 1,
      anon_sym_COMMA,
    ACTIONS(1407), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_create_type_repeat1,
  [13059] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(1131), 1,
      sym_return_mode,
  [13069] = 3,
    ACTIONS(1330), 1,
      anon_sym_COMMA,
    ACTIONS(1409), 1,
      anon_sym_RPAREN,
    STATE(650), 1,
      aux_sym_create_type_repeat1,
  [13079] = 3,
    ACTIONS(1398), 1,
      anon_sym_COMMA,
    ACTIONS(1411), 1,
      anon_sym_RPAREN,
    STATE(619), 1,
      aux_sym_expression_list_repeat1,
  [13089] = 2,
    ACTIONS(1415), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1413), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [13097] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(1045), 1,
      sym_return_mode,
  [13107] = 3,
    ACTIONS(1417), 1,
      anon_sym_COMMA,
    ACTIONS(1419), 1,
      anon_sym_RBRACE,
    STATE(609), 1,
      aux_sym_option_hash_repeat1,
  [13117] = 3,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1421), 1,
      anon_sym_RPAREN,
    STATE(616), 1,
      aux_sym_create_function_repeat1,
  [13127] = 3,
    ACTIONS(1089), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1095), 1,
      aux_sym_insert_values_spec_token1,
    STATE(121), 1,
      sym_insert_values_spec,
  [13137] = 3,
    ACTIONS(1423), 1,
      anon_sym_COMMA,
    ACTIONS(1426), 1,
      anon_sym_RPAREN,
    STATE(633), 1,
      aux_sym_column_definition_list_repeat1,
  [13147] = 3,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1428), 1,
      anon_sym_RPAREN,
    STATE(599), 1,
      aux_sym_create_function_repeat1,
  [13157] = 3,
    ACTIONS(1430), 1,
      anon_sym_COMMA,
    ACTIONS(1433), 1,
      anon_sym_RPAREN,
    STATE(635), 1,
      aux_sym_init_cond_hash_repeat1,
  [13167] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(1040), 1,
      sym_return_mode,
  [13177] = 3,
    ACTIONS(1435), 1,
      anon_sym_COMMA,
    ACTIONS(1438), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13187] = 3,
    ACTIONS(1440), 1,
      anon_sym_COMMA,
    ACTIONS(1443), 1,
      anon_sym_RBRACE,
    STATE(638), 1,
      aux_sym_replication_list_repeat1,
  [13197] = 3,
    ACTIONS(1445), 1,
      anon_sym_COMMA,
    ACTIONS(1448), 1,
      anon_sym_GT,
    STATE(639), 1,
      aux_sym_data_type_definition_repeat1,
  [13207] = 3,
    ACTIONS(1417), 1,
      anon_sym_COMMA,
    ACTIONS(1450), 1,
      anon_sym_RBRACE,
    STATE(630), 1,
      aux_sym_option_hash_repeat1,
  [13217] = 3,
    ACTIONS(1382), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1452), 1,
      anon_sym_DOT,
    STATE(995), 1,
      sym_materialized_view_where,
  [13227] = 3,
    ACTIONS(1454), 1,
      sym__string_literal,
    STATE(664), 1,
      sym_replication_list_item,
    STATE(915), 1,
      sym_replication_list,
  [13237] = 3,
    ACTIONS(1454), 1,
      sym__string_literal,
    STATE(664), 1,
      sym_replication_list_item,
    STATE(1037), 1,
      sym_replication_list,
  [13247] = 3,
    ACTIONS(1342), 1,
      sym_object_name,
    ACTIONS(1456), 1,
      anon_sym_RPAREN,
    STATE(656), 1,
      sym_param,
  [13257] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(912), 1,
      sym_return_mode,
  [13267] = 3,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1458), 1,
      anon_sym_RPAREN,
    STATE(651), 1,
      aux_sym_create_function_repeat1,
  [13277] = 3,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    ACTIONS(1460), 1,
      anon_sym_RPAREN,
    STATE(601), 1,
      aux_sym_relation_element_repeat1,
  [13287] = 3,
    ACTIONS(1330), 1,
      anon_sym_COMMA,
    ACTIONS(1462), 1,
      anon_sym_RPAREN,
    STATE(587), 1,
      aux_sym_create_type_repeat1,
  [13297] = 3,
    ACTIONS(1464), 1,
      anon_sym_COMMA,
    ACTIONS(1467), 1,
      anon_sym_RPAREN,
    STATE(649), 1,
      aux_sym_function_args_repeat1,
  [13307] = 3,
    ACTIONS(1330), 1,
      anon_sym_COMMA,
    ACTIONS(1469), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_create_type_repeat1,
  [13317] = 3,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1471), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_create_function_repeat1,
  [13327] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(908), 1,
      sym_return_mode,
  [13337] = 3,
    ACTIONS(1473), 1,
      anon_sym_COMMA,
    ACTIONS(1476), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_create_function_repeat1,
  [13347] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(886), 1,
      sym_return_mode,
  [13357] = 2,
    ACTIONS(999), 1,
      anon_sym_LPAREN,
    ACTIONS(1467), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13365] = 3,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1478), 1,
      anon_sym_RPAREN,
    STATE(602), 1,
      aux_sym_create_function_repeat1,
  [13375] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(885), 1,
      sym_return_mode,
  [13385] = 3,
    ACTIONS(221), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1480), 1,
      aux_sym_update_token2,
    STATE(999), 1,
      sym_using_ttl_timestamp,
  [13395] = 3,
    ACTIONS(1342), 1,
      sym_object_name,
    ACTIONS(1482), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      sym_param,
  [13405] = 3,
    ACTIONS(1342), 1,
      sym_object_name,
    ACTIONS(1484), 1,
      anon_sym_RPAREN,
    STATE(631), 1,
      sym_param,
  [13415] = 3,
    ACTIONS(1303), 1,
      anon_sym_COMMA,
    ACTIONS(1486), 1,
      anon_sym_RBRACE,
    STATE(585), 1,
      aux_sym_assignment_map_repeat1,
  [13425] = 3,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    ACTIONS(1488), 1,
      anon_sym_RPAREN,
    STATE(601), 1,
      aux_sym_relation_element_repeat1,
  [13435] = 3,
    ACTIONS(1268), 1,
      anon_sym_COMMA,
    ACTIONS(1490), 1,
      anon_sym_GT,
    STATE(570), 1,
      aux_sym_data_type_definition_repeat1,
  [13445] = 3,
    ACTIONS(1326), 1,
      anon_sym_COMMA,
    ACTIONS(1492), 1,
      anon_sym_RBRACE,
    STATE(586), 1,
      aux_sym_replication_list_repeat1,
  [13455] = 3,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    ACTIONS(1494), 1,
      anon_sym_RPAREN,
    STATE(691), 1,
      aux_sym_relation_element_repeat1,
  [13465] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(1150), 1,
      sym_return_mode,
  [13475] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(1003), 1,
      sym_return_mode,
  [13485] = 3,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1496), 1,
      anon_sym_RPAREN,
    STATE(579), 1,
      aux_sym_create_function_repeat1,
  [13495] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(1008), 1,
      sym_return_mode,
  [13505] = 3,
    ACTIONS(1498), 1,
      anon_sym_COMMA,
    ACTIONS(1501), 1,
      aux_sym_from_spec_token1,
    STATE(670), 1,
      aux_sym_select_elements_repeat1,
  [13515] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1503), 1,
      anon_sym_RPAREN,
    STATE(572), 1,
      aux_sym_relation_element_repeat2,
  [13525] = 2,
    ACTIONS(1505), 1,
      aux_sym_resource_token1,
    ACTIONS(1507), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [13533] = 3,
    ACTIONS(1330), 1,
      anon_sym_COMMA,
    ACTIONS(1509), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_create_type_repeat1,
  [13543] = 3,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    ACTIONS(1184), 1,
      anon_sym_RPAREN,
    STATE(704), 1,
      aux_sym_function_args_repeat1,
  [13553] = 3,
    ACTIONS(1511), 1,
      anon_sym_COMMA,
    ACTIONS(1514), 1,
      aux_sym_from_spec_token1,
    STATE(675), 1,
      aux_sym_delete_column_list_repeat1,
  [13563] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1503), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [13573] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(893), 1,
      sym_return_mode,
  [13583] = 3,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1516), 1,
      anon_sym_RPAREN,
    STATE(617), 1,
      aux_sym_create_function_repeat1,
  [13593] = 3,
    ACTIONS(1382), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1518), 1,
      anon_sym_DOT,
    STATE(1165), 1,
      sym_materialized_view_where,
  [13603] = 1,
    ACTIONS(1520), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13609] = 3,
    ACTIONS(155), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1208), 1,
      aux_sym_create_materialized_view_token1,
    STATE(71), 1,
      aux_sym_relation_elements_repeat1,
  [13619] = 3,
    ACTIONS(1089), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1095), 1,
      aux_sym_insert_values_spec_token1,
    STATE(106), 1,
      sym_insert_values_spec,
  [13629] = 3,
    ACTIONS(1522), 1,
      anon_sym_COMMA,
    ACTIONS(1525), 1,
      anon_sym_RPAREN,
    STATE(683), 1,
      aux_sym_expression_list_repeat1,
  [13639] = 3,
    ACTIONS(1330), 1,
      anon_sym_COMMA,
    ACTIONS(1527), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_create_type_repeat1,
  [13649] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(1176), 1,
      sym_return_mode,
  [13659] = 3,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1529), 1,
      anon_sym_RPAREN,
    STATE(706), 1,
      aux_sym_create_function_repeat1,
  [13669] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1531), 1,
      anon_sym_RBRACE,
    STATE(507), 1,
      aux_sym_assignment_tuple_repeat1,
  [13679] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(1181), 1,
      sym_return_mode,
  [13689] = 3,
    ACTIONS(1533), 1,
      anon_sym_COMMA,
    ACTIONS(1535), 1,
      anon_sym_RPAREN,
    STATE(635), 1,
      aux_sym_init_cond_hash_repeat1,
  [13699] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1537), 1,
      anon_sym_RBRACK,
    STATE(507), 1,
      aux_sym_assignment_tuple_repeat1,
  [13709] = 3,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    ACTIONS(1539), 1,
      anon_sym_RPAREN,
    STATE(601), 1,
      aux_sym_relation_element_repeat1,
  [13719] = 3,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1541), 1,
      anon_sym_RPAREN,
    STATE(600), 1,
      aux_sym_create_function_repeat1,
  [13729] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(1054), 1,
      sym_return_mode,
  [13739] = 3,
    ACTIONS(1293), 1,
      sym_object_name,
    STATE(696), 1,
      sym_column_definition,
    STATE(1166), 1,
      sym_column_definition_list,
  [13749] = 3,
    ACTIONS(1543), 1,
      anon_sym_COMMA,
    ACTIONS(1545), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13759] = 3,
    ACTIONS(1547), 1,
      anon_sym_COMMA,
    ACTIONS(1549), 1,
      anon_sym_RPAREN,
    STATE(618), 1,
      aux_sym_column_definition_list_repeat1,
  [13769] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1551), 1,
      anon_sym_RPAREN,
    STATE(507), 1,
      aux_sym_assignment_tuple_repeat1,
  [13779] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1551), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [13789] = 3,
    ACTIONS(155), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1553), 1,
      aux_sym_create_materialized_view_token1,
    STATE(71), 1,
      aux_sym_relation_elements_repeat1,
  [13799] = 3,
    ACTIONS(1555), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1558), 1,
      aux_sym_create_materialized_view_token1,
    STATE(700), 1,
      aux_sym_materialized_view_where_repeat1,
  [13809] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1551), 1,
      anon_sym_RPAREN,
    STATE(583), 1,
      aux_sym_relation_element_repeat2,
  [13819] = 3,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    ACTIONS(1560), 1,
      anon_sym_RPAREN,
    STATE(647), 1,
      aux_sym_relation_element_repeat1,
  [13829] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1562), 1,
      anon_sym_RPAREN,
    STATE(507), 1,
      aux_sym_assignment_tuple_repeat1,
  [13839] = 3,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    ACTIONS(1564), 1,
      anon_sym_RPAREN,
    STATE(649), 1,
      aux_sym_function_args_repeat1,
  [13849] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(1221), 1,
      sym_return_mode,
  [13859] = 3,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1566), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_create_function_repeat1,
  [13869] = 3,
    ACTIONS(1342), 1,
      sym_object_name,
    ACTIONS(1568), 1,
      anon_sym_RPAREN,
    STATE(692), 1,
      sym_param,
  [13879] = 3,
    ACTIONS(1533), 1,
      anon_sym_COMMA,
    ACTIONS(1570), 1,
      anon_sym_RPAREN,
    STATE(689), 1,
      aux_sym_init_cond_hash_repeat1,
  [13889] = 3,
    ACTIONS(1572), 1,
      sym_object_name,
    STATE(157), 1,
      sym_alter_type_rename_item,
    STATE(423), 1,
      sym_alter_type_rename_list,
  [13899] = 3,
    ACTIONS(1543), 1,
      anon_sym_COMMA,
    ACTIONS(1574), 1,
      anon_sym_RPAREN,
    STATE(695), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13909] = 3,
    ACTIONS(1454), 1,
      sym__string_literal,
    STATE(664), 1,
      sym_replication_list_item,
    STATE(874), 1,
      sym_replication_list,
  [13919] = 3,
    ACTIONS(1576), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    ACTIONS(1578), 1,
      sym_object_name,
    STATE(400), 1,
      sym_alter_table_drop_column_list,
  [13929] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1580), 1,
      anon_sym_RPAREN,
    STATE(703), 1,
      aux_sym_assignment_tuple_repeat1,
  [13939] = 3,
    ACTIONS(1382), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1582), 1,
      anon_sym_DOT,
    STATE(1253), 1,
      sym_materialized_view_where,
  [13949] = 3,
    ACTIONS(1289), 1,
      aux_sym_create_function_token1,
    ACTIONS(1291), 1,
      aux_sym_return_mode_token1,
    STATE(1262), 1,
      sym_return_mode,
  [13959] = 3,
    ACTIONS(1089), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1095), 1,
      aux_sym_insert_values_spec_token1,
    STATE(116), 1,
      sym_insert_values_spec,
  [13969] = 3,
    ACTIONS(221), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1584), 1,
      aux_sym_update_token2,
    STATE(1036), 1,
      sym_using_ttl_timestamp,
  [13979] = 2,
    ACTIONS(1382), 1,
      aux_sym_where_spec_token1,
    STATE(1254), 1,
      sym_materialized_view_where,
  [13986] = 2,
    ACTIONS(1586), 1,
      anon_sym_EQ,
    ACTIONS(1588), 1,
      anon_sym_LBRACK,
  [13993] = 2,
    ACTIONS(1590), 1,
      sym_object_name,
    STATE(389), 1,
      sym_user_name,
  [14000] = 1,
    ACTIONS(1592), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [14005] = 2,
    ACTIONS(1594), 1,
      sym_object_name,
    STATE(744), 1,
      sym_column_not_null,
  [14012] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(546), 1,
      sym_assignment_element,
  [14019] = 2,
    ACTIONS(1598), 1,
      sym_object_name,
    STATE(1162), 1,
      sym_table_name,
  [14026] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(553), 1,
      sym_assignment_element,
  [14033] = 2,
    ACTIONS(1600), 1,
      sym__string_literal,
    ACTIONS(1602), 1,
      sym_object_name,
  [14040] = 2,
    ACTIONS(1604), 1,
      sym__string_literal,
    ACTIONS(1606), 1,
      sym_object_name,
  [14047] = 2,
    ACTIONS(1608), 1,
      sym_object_name,
    STATE(419), 1,
      sym_alter_table_column_definition,
  [14054] = 2,
    ACTIONS(1610), 1,
      aux_sym_role_with_options_token1,
    STATE(113), 1,
      sym_user_password,
  [14061] = 2,
    ACTIONS(1612), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1614), 1,
      sym_object_name,
  [14068] = 2,
    ACTIONS(1616), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1618), 1,
      sym_object_name,
  [14075] = 2,
    ACTIONS(1610), 1,
      aux_sym_role_with_options_token1,
    STATE(118), 1,
      sym_user_password,
  [14082] = 2,
    ACTIONS(1620), 1,
      sym_object_name,
    STATE(1298), 1,
      sym_column_list,
  [14089] = 2,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    STATE(595), 1,
      sym_assignment_tuple,
  [14096] = 2,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_assignment_tuple,
  [14103] = 2,
    ACTIONS(1620), 1,
      sym_object_name,
    STATE(1299), 1,
      sym_column_list,
  [14110] = 2,
    ACTIONS(1622), 1,
      sym__string_literal,
    STATE(360), 1,
      sym_trigger_class,
  [14117] = 2,
    ACTIONS(1624), 1,
      anon_sym_DOT,
    ACTIONS(1626), 1,
      aux_sym_select_element_token1,
  [14124] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(548), 1,
      sym_assignment_element,
  [14131] = 1,
    ACTIONS(1628), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14136] = 1,
    ACTIONS(1630), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14141] = 2,
    ACTIONS(1620), 1,
      sym_object_name,
    STATE(1357), 1,
      sym_column_list,
  [14148] = 2,
    ACTIONS(1620), 1,
      sym_object_name,
    STATE(1219), 1,
      sym_column_list,
  [14155] = 1,
    ACTIONS(1558), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [14160] = 2,
    ACTIONS(1382), 1,
      aux_sym_where_spec_token1,
    STATE(1214), 1,
      sym_materialized_view_where,
  [14167] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1061), 1,
      sym_keyspace_name,
  [14174] = 2,
    ACTIONS(1634), 1,
      aux_sym_durable_writes_token1,
    STATE(282), 1,
      sym_durable_writes,
  [14181] = 2,
    ACTIONS(1636), 1,
      sym_object_name,
    STATE(1193), 1,
      sym_clustering_key_list,
  [14188] = 2,
    ACTIONS(1638), 1,
      sym_object_name,
    STATE(792), 1,
      sym_init_cond_hash_item,
  [14195] = 1,
    ACTIONS(1640), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14200] = 2,
    ACTIONS(1642), 1,
      sym_object_name,
    STATE(1018), 1,
      sym_trigger_name,
  [14207] = 1,
    ACTIONS(1525), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14212] = 2,
    ACTIONS(1590), 1,
      sym_object_name,
    STATE(1032), 1,
      sym_user_name,
  [14219] = 2,
    ACTIONS(1644), 1,
      anon_sym_DOT,
    ACTIONS(1646), 1,
      anon_sym_LPAREN,
  [14226] = 2,
    ACTIONS(1382), 1,
      aux_sym_where_spec_token1,
    STATE(1330), 1,
      sym_materialized_view_where,
  [14233] = 2,
    ACTIONS(1620), 1,
      sym_object_name,
    STATE(1173), 1,
      sym_column_list,
  [14240] = 2,
    ACTIONS(1620), 1,
      sym_object_name,
    STATE(1333), 1,
      sym_column_list,
  [14247] = 2,
    ACTIONS(1648), 1,
      anon_sym_DOT,
    ACTIONS(1650), 1,
      anon_sym_LPAREN,
  [14254] = 1,
    ACTIONS(1652), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14259] = 2,
    ACTIONS(1654), 1,
      anon_sym_DOT,
    ACTIONS(1656), 1,
      aux_sym_create_index_token3,
  [14266] = 1,
    ACTIONS(1514), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14271] = 2,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    STATE(152), 1,
      sym_where_spec,
  [14278] = 2,
    ACTIONS(1610), 1,
      aux_sym_role_with_options_token1,
    STATE(111), 1,
      sym_user_password,
  [14285] = 1,
    ACTIONS(1658), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14290] = 2,
    ACTIONS(1293), 1,
      sym_object_name,
    STATE(797), 1,
      sym_column_definition,
  [14297] = 2,
    ACTIONS(1248), 1,
      aux_sym_ttl_token1,
    STATE(217), 1,
      sym_ttl,
  [14304] = 1,
    ACTIONS(1501), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14309] = 2,
    ACTIONS(1660), 1,
      aux_sym_from_spec_token1,
    STATE(74), 1,
      sym_from_spec,
  [14316] = 2,
    ACTIONS(1246), 1,
      aux_sym_timestamp_token1,
    STATE(217), 1,
      sym_timestamp,
  [14323] = 2,
    ACTIONS(1660), 1,
      aux_sym_from_spec_token1,
    STATE(545), 1,
      sym_from_spec,
  [14330] = 2,
    ACTIONS(1662), 1,
      sym_object_name,
    STATE(250), 1,
      sym_role_name,
  [14337] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(850), 1,
      sym_assignment_element,
  [14344] = 2,
    ACTIONS(1622), 1,
      sym__string_literal,
    STATE(390), 1,
      sym_trigger_class,
  [14351] = 2,
    ACTIONS(1664), 1,
      anon_sym_DOT,
    ACTIONS(1666), 1,
      aux_sym_select_element_token1,
  [14358] = 2,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    STATE(212), 1,
      sym_where_spec,
  [14365] = 1,
    ACTIONS(1668), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14370] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(567), 1,
      sym_assignment_element,
  [14377] = 2,
    ACTIONS(1670), 1,
      sym__string_literal,
    STATE(640), 1,
      sym_option_hash_item,
  [14384] = 1,
    ACTIONS(1672), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14389] = 1,
    ACTIONS(1467), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14394] = 2,
    ACTIONS(1674), 1,
      sym_object_name,
    STATE(1033), 1,
      sym_partition_key_list,
  [14401] = 1,
    ACTIONS(1476), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14406] = 1,
    ACTIONS(1438), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14411] = 2,
    ACTIONS(1676), 1,
      anon_sym_COMMA,
    ACTIONS(1678), 1,
      anon_sym_RPAREN,
  [14418] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(560), 1,
      sym_assignment_element,
  [14425] = 1,
    ACTIONS(1680), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14430] = 2,
    ACTIONS(1620), 1,
      sym_object_name,
    STATE(991), 1,
      sym_column_list,
  [14437] = 1,
    ACTIONS(1443), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14442] = 2,
    ACTIONS(1682), 1,
      sym_object_name,
    STATE(223), 1,
      sym_if_condition,
  [14449] = 2,
    ACTIONS(1634), 1,
      aux_sym_durable_writes_token1,
    STATE(324), 1,
      sym_durable_writes,
  [14456] = 1,
    ACTIONS(1448), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14461] = 1,
    ACTIONS(1433), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14466] = 2,
    ACTIONS(1684), 1,
      anon_sym_DOT,
    ACTIONS(1686), 1,
      aux_sym_create_index_token3,
  [14473] = 2,
    ACTIONS(1598), 1,
      sym_object_name,
    STATE(925), 1,
      sym_table_name,
  [14480] = 1,
    ACTIONS(1688), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [14485] = 2,
    ACTIONS(1690), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1692), 1,
      sym_object_name,
  [14492] = 1,
    ACTIONS(1426), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14497] = 2,
    ACTIONS(1620), 1,
      sym_object_name,
    STATE(905), 1,
      sym_column_list,
  [14504] = 1,
    ACTIONS(1694), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14509] = 2,
    ACTIONS(1696), 1,
      aux_sym_resource_token5,
    ACTIONS(1698), 1,
      aux_sym_drop_aggregate_token1,
  [14516] = 2,
    ACTIONS(1670), 1,
      sym__string_literal,
    STATE(809), 1,
      sym_option_hash_item,
  [14523] = 2,
    ACTIONS(1700), 1,
      anon_sym_DOT,
    ACTIONS(1702), 1,
      anon_sym_LPAREN,
  [14530] = 1,
    ACTIONS(1704), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14535] = 2,
    ACTIONS(1706), 1,
      anon_sym_DOT,
    ACTIONS(1708), 1,
      aux_sym_using_timestamp_spec_token1,
  [14542] = 2,
    ACTIONS(1620), 1,
      sym_object_name,
    STATE(1374), 1,
      sym_column_list,
  [14549] = 1,
    ACTIONS(1710), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14554] = 2,
    ACTIONS(1712), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1714), 1,
      sym_object_name,
  [14561] = 2,
    ACTIONS(1716), 1,
      anon_sym_DOT,
    ACTIONS(1718), 1,
      anon_sym_LPAREN,
  [14568] = 1,
    ACTIONS(1378), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14573] = 1,
    ACTIONS(1720), 2,
      sym__string_literal,
      sym__float_literal,
  [14578] = 2,
    ACTIONS(1722), 1,
      anon_sym_DOT,
    ACTIONS(1724), 1,
      anon_sym_LPAREN,
  [14585] = 2,
    ACTIONS(1598), 1,
      sym_object_name,
    STATE(972), 1,
      sym_table_name,
  [14592] = 2,
    ACTIONS(1726), 1,
      anon_sym_DOT,
    ACTIONS(1728), 1,
      anon_sym_LPAREN,
  [14599] = 2,
    ACTIONS(1730), 1,
      anon_sym_DOT,
    ACTIONS(1732), 1,
      anon_sym_LPAREN,
  [14606] = 2,
    ACTIONS(1620), 1,
      sym_object_name,
    STATE(1375), 1,
      sym_column_list,
  [14613] = 2,
    ACTIONS(1734), 1,
      anon_sym_DOT,
    ACTIONS(1736), 1,
      anon_sym_LPAREN,
  [14620] = 2,
    ACTIONS(1598), 1,
      sym_object_name,
    STATE(1289), 1,
      sym_table_name,
  [14627] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(533), 1,
      sym_assignment_element,
  [14634] = 2,
    ACTIONS(1382), 1,
      aux_sym_where_spec_token1,
    STATE(1116), 1,
      sym_materialized_view_where,
  [14641] = 2,
    ACTIONS(1738), 1,
      anon_sym_DOT,
    ACTIONS(1740), 1,
      anon_sym_LPAREN,
  [14648] = 2,
    ACTIONS(1742), 1,
      anon_sym_DOT,
    ACTIONS(1744), 1,
      anon_sym_LPAREN,
  [14655] = 2,
    ACTIONS(1620), 1,
      sym_object_name,
    STATE(1112), 1,
      sym_column_list,
  [14662] = 2,
    ACTIONS(1746), 1,
      sym_object_name,
    STATE(761), 1,
      sym_delete_column_item,
  [14669] = 1,
    ACTIONS(1748), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14674] = 2,
    ACTIONS(114), 1,
      aux_sym_where_spec_token1,
    STATE(192), 1,
      sym_where_spec,
  [14681] = 2,
    ACTIONS(1246), 1,
      aux_sym_timestamp_token1,
    STATE(554), 1,
      sym_timestamp,
  [14688] = 1,
    ACTIONS(1750), 2,
      sym__string_literal,
      sym__decimal_literal,
  [14693] = 1,
    ACTIONS(1752), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14698] = 2,
    ACTIONS(1342), 1,
      sym_object_name,
    STATE(782), 1,
      sym_param,
  [14705] = 2,
    ACTIONS(1660), 1,
      aux_sym_from_spec_token1,
    STATE(69), 1,
      sym_from_spec,
  [14712] = 2,
    ACTIONS(1594), 1,
      sym_object_name,
    STATE(561), 1,
      sym_column_not_null,
  [14719] = 2,
    ACTIONS(1590), 1,
      sym_object_name,
    STATE(1323), 1,
      sym_user_name,
  [14726] = 2,
    ACTIONS(1632), 1,
      sym_object_name,
    STATE(1325), 1,
      sym_keyspace_name,
  [14733] = 2,
    ACTIONS(1620), 1,
      sym_object_name,
    STATE(1394), 1,
      sym_column_list,
  [14740] = 2,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_assignment_tuple,
  [14747] = 2,
    ACTIONS(1754), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1756), 1,
      sym_object_name,
  [14754] = 1,
    ACTIONS(1758), 2,
      sym__string_literal,
      sym__decimal_literal,
  [14759] = 2,
    ACTIONS(1760), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1762), 1,
      sym_object_name,
  [14766] = 2,
    ACTIONS(1764), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1766), 1,
      sym_object_name,
  [14773] = 2,
    ACTIONS(1768), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1770), 1,
      sym_object_name,
  [14780] = 2,
    ACTIONS(1772), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1774), 1,
      sym_object_name,
  [14787] = 2,
    ACTIONS(1776), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1778), 1,
      sym_object_name,
  [14794] = 1,
    ACTIONS(1365), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14799] = 2,
    ACTIONS(1780), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1782), 1,
      sym_object_name,
  [14806] = 2,
    ACTIONS(1149), 1,
      anon_sym_LBRACE,
    STATE(226), 1,
      sym_option_hash,
  [14813] = 2,
    ACTIONS(1454), 1,
      sym__string_literal,
    STATE(788), 1,
      sym_replication_list_item,
  [14820] = 2,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_assignment_tuple,
  [14827] = 2,
    ACTIONS(1784), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1786), 1,
      sym_object_name,
  [14834] = 2,
    ACTIONS(1788), 1,
      anon_sym_DOT,
    ACTIONS(1790), 1,
      anon_sym_LPAREN,
  [14841] = 1,
    ACTIONS(1283), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14846] = 2,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    STATE(671), 1,
      sym_assignment_tuple,
  [14853] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(562), 1,
      sym_assignment_element,
  [14860] = 2,
    ACTIONS(1792), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1794), 1,
      sym_object_name,
  [14867] = 2,
    ACTIONS(1796), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1798), 1,
      sym_object_name,
  [14874] = 2,
    ACTIONS(1800), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1802), 1,
      sym_object_name,
  [14881] = 1,
    ACTIONS(1230), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14886] = 1,
    ACTIONS(1804), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [14891] = 2,
    ACTIONS(1806), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1808), 1,
      sym_object_name,
  [14898] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(565), 1,
      sym_assignment_element,
  [14905] = 2,
    ACTIONS(1660), 1,
      aux_sym_from_spec_token1,
    STATE(568), 1,
      sym_from_spec,
  [14912] = 2,
    ACTIONS(1810), 1,
      sym__string_literal,
    ACTIONS(1812), 1,
      sym_object_name,
  [14919] = 2,
    ACTIONS(1634), 1,
      aux_sym_durable_writes_token1,
    STATE(412), 1,
      sym_durable_writes,
  [14926] = 2,
    ACTIONS(1598), 1,
      sym_object_name,
    STATE(91), 1,
      sym_table_name,
  [14933] = 2,
    ACTIONS(1572), 1,
      sym_object_name,
    STATE(215), 1,
      sym_alter_type_rename_item,
  [14940] = 2,
    ACTIONS(1814), 1,
      anon_sym_DOT,
    ACTIONS(1816), 1,
      anon_sym_LPAREN,
  [14947] = 2,
    ACTIONS(1660), 1,
      aux_sym_from_spec_token1,
    STATE(73), 1,
      sym_from_spec,
  [14954] = 2,
    ACTIONS(1636), 1,
      sym_object_name,
    STATE(1093), 1,
      sym_clustering_key_list,
  [14961] = 2,
    ACTIONS(1620), 1,
      sym_object_name,
    STATE(953), 1,
      sym_column_list,
  [14968] = 2,
    ACTIONS(1818), 1,
      aux_sym_truncate_token2,
    ACTIONS(1820), 1,
      sym_object_name,
  [14975] = 1,
    ACTIONS(1822), 1,
      sym_object_name,
  [14979] = 1,
    ACTIONS(1824), 1,
      sym_object_name,
  [14983] = 1,
    ACTIONS(1826), 1,
      sym_object_name,
  [14987] = 1,
    ACTIONS(1828), 1,
      sym_object_name,
  [14991] = 1,
    ACTIONS(1830), 1,
      anon_sym_RBRACE,
  [14995] = 1,
    ACTIONS(1832), 1,
      aux_sym_insert_statement_token3,
  [14999] = 1,
    ACTIONS(1834), 1,
      aux_sym_delete_statement_token3,
  [15003] = 1,
    ACTIONS(1836), 1,
      aux_sym_select_statement_token5,
  [15007] = 1,
    ACTIONS(1838), 1,
      aux_sym_delete_statement_token3,
  [15011] = 1,
    ACTIONS(1840), 1,
      aux_sym_order_spec_token2,
  [15015] = 1,
    ACTIONS(1842), 1,
      anon_sym_RPAREN,
  [15019] = 1,
    ACTIONS(1844), 1,
      anon_sym_RPAREN,
  [15023] = 1,
    ACTIONS(1846), 1,
      anon_sym_RPAREN,
  [15027] = 1,
    ACTIONS(1848), 1,
      anon_sym_RPAREN,
  [15031] = 1,
    ACTIONS(1850), 1,
      anon_sym_LBRACE,
  [15035] = 1,
    ACTIONS(1852), 1,
      aux_sym_create_function_token1,
  [15039] = 1,
    ACTIONS(1854), 1,
      aux_sym_create_function_token1,
  [15043] = 1,
    ACTIONS(1856), 1,
      aux_sym_return_mode_token2,
  [15047] = 1,
    ACTIONS(1858), 1,
      aux_sym_create_function_token1,
  [15051] = 1,
    ACTIONS(1860), 1,
      sym_object_name,
  [15055] = 1,
    ACTIONS(1862), 1,
      aux_sym_create_function_token2,
  [15059] = 1,
    ACTIONS(1864), 1,
      anon_sym_COLON,
  [15063] = 1,
    ACTIONS(1866), 1,
      aux_sym_create_aggregate_token3,
  [15067] = 1,
    ACTIONS(1868), 1,
      aux_sym_create_function_token1,
  [15071] = 1,
    ACTIONS(1870), 1,
      anon_sym_LPAREN,
  [15075] = 1,
    ACTIONS(1872), 1,
      sym_object_name,
  [15079] = 1,
    ACTIONS(1874), 1,
      aux_sym_select_statement_token1,
  [15083] = 1,
    ACTIONS(1876), 1,
      aux_sym_create_aggregate_token3,
  [15087] = 1,
    ACTIONS(1878), 1,
      sym_object_name,
  [15091] = 1,
    ACTIONS(1880), 1,
      sym_object_name,
  [15095] = 1,
    ACTIONS(1882), 1,
      aux_sym_create_aggregate_token4,
  [15099] = 1,
    ACTIONS(1884), 1,
      aux_sym_create_aggregate_token3,
  [15103] = 1,
    ACTIONS(1886), 1,
      anon_sym_RPAREN,
  [15107] = 1,
    ACTIONS(1888), 1,
      aux_sym_select_element_token1,
  [15111] = 1,
    ACTIONS(1890), 1,
      anon_sym_LPAREN,
  [15115] = 1,
    ACTIONS(1892), 1,
      aux_sym_from_spec_token1,
  [15119] = 1,
    ACTIONS(1894), 1,
      anon_sym_COLON,
  [15123] = 1,
    ACTIONS(1896), 1,
      sym_object_name,
  [15127] = 1,
    ACTIONS(1898), 1,
      aux_sym_create_function_token1,
  [15131] = 1,
    ACTIONS(1900), 1,
      aux_sym_create_function_token2,
  [15135] = 1,
    ACTIONS(1902), 1,
      aux_sym_return_mode_token2,
  [15139] = 1,
    ACTIONS(1904), 1,
      aux_sym_constant_token2,
  [15143] = 1,
    ACTIONS(1906), 1,
      aux_sym_create_function_token1,
  [15147] = 1,
    ACTIONS(1908), 1,
      sym_object_name,
  [15151] = 1,
    ACTIONS(1910), 1,
      anon_sym_LPAREN,
  [15155] = 1,
    ACTIONS(1912), 1,
      anon_sym_RBRACE,
  [15159] = 1,
    ACTIONS(1914), 1,
      aux_sym_create_index_token3,
  [15163] = 1,
    ACTIONS(1916), 1,
      anon_sym_EQ,
  [15167] = 1,
    ACTIONS(1918), 1,
      aux_sym_create_function_token1,
  [15171] = 1,
    ACTIONS(1920), 1,
      anon_sym_RPAREN,
  [15175] = 1,
    ACTIONS(1922), 1,
      sym_object_name,
  [15179] = 1,
    ACTIONS(1924), 1,
      anon_sym_RPAREN,
  [15183] = 1,
    ACTIONS(1926), 1,
      anon_sym_RPAREN,
  [15187] = 1,
    ACTIONS(1928), 1,
      sym_object_name,
  [15191] = 1,
    ACTIONS(1930), 1,
      anon_sym_RPAREN,
  [15195] = 1,
    ACTIONS(1932), 1,
      anon_sym_LPAREN,
  [15199] = 1,
    ACTIONS(1934), 1,
      anon_sym_RPAREN,
  [15203] = 1,
    ACTIONS(1936), 1,
      anon_sym_LPAREN,
  [15207] = 1,
    ACTIONS(1938), 1,
      aux_sym_order_spec_token1,
  [15211] = 1,
    ACTIONS(1940), 1,
      anon_sym_RPAREN,
  [15215] = 1,
    ACTIONS(1942), 1,
      anon_sym_LPAREN,
  [15219] = 1,
    ACTIONS(1944), 1,
      aux_sym_delete_statement_token3,
  [15223] = 1,
    ACTIONS(1946), 1,
      aux_sym_insert_statement_token3,
  [15227] = 1,
    ACTIONS(1948), 1,
      anon_sym_LPAREN,
  [15231] = 1,
    ACTIONS(1950), 1,
      aux_sym_insert_statement_token3,
  [15235] = 1,
    ACTIONS(1952), 1,
      aux_sym_select_statement_token5,
  [15239] = 1,
    ACTIONS(1954), 1,
      aux_sym_delete_statement_token3,
  [15243] = 1,
    ACTIONS(1956), 1,
      aux_sym_delete_statement_token3,
  [15247] = 1,
    ACTIONS(1958), 1,
      aux_sym_insert_statement_token3,
  [15251] = 1,
    ACTIONS(1960), 1,
      sym_object_name,
  [15255] = 1,
    ACTIONS(1962), 1,
      sym_object_name,
  [15259] = 1,
    ACTIONS(1964), 1,
      anon_sym_EQ,
  [15263] = 1,
    ACTIONS(1109), 1,
      sym_object_name,
  [15267] = 1,
    ACTIONS(1966), 1,
      aux_sym_create_index_token3,
  [15271] = 1,
    ACTIONS(1968), 1,
      sym_object_name,
  [15275] = 1,
    ACTIONS(1970), 1,
      anon_sym_RPAREN,
  [15279] = 1,
    ACTIONS(1972), 1,
      anon_sym_LPAREN,
  [15283] = 1,
    ACTIONS(1974), 1,
      sym_object_name,
  [15287] = 1,
    ACTIONS(1976), 1,
      anon_sym_LPAREN,
  [15291] = 1,
    ACTIONS(1978), 1,
      sym_object_name,
  [15295] = 1,
    ACTIONS(1980), 1,
      sym_object_name,
  [15299] = 1,
    ACTIONS(1982), 1,
      sym_object_name,
  [15303] = 1,
    ACTIONS(1984), 1,
      sym_object_name,
  [15307] = 1,
    ACTIONS(1986), 1,
      aux_sym_from_spec_token1,
  [15311] = 1,
    ACTIONS(1988), 1,
      aux_sym_select_statement_token1,
  [15315] = 1,
    ACTIONS(1990), 1,
      sym_object_name,
  [15319] = 1,
    ACTIONS(1992), 1,
      anon_sym_RPAREN,
  [15323] = 1,
    ACTIONS(1994), 1,
      anon_sym_RPAREN,
  [15327] = 1,
    ACTIONS(1996), 1,
      anon_sym_LPAREN,
  [15331] = 1,
    ACTIONS(1998), 1,
      sym_object_name,
  [15335] = 1,
    ACTIONS(2000), 1,
      aux_sym_create_function_token1,
  [15339] = 1,
    ACTIONS(2002), 1,
      anon_sym_RPAREN,
  [15343] = 1,
    ACTIONS(2004), 1,
      anon_sym_RPAREN,
  [15347] = 1,
    ACTIONS(2006), 1,
      aux_sym_constant_token2,
  [15351] = 1,
    ACTIONS(2008), 1,
      anon_sym_RPAREN,
  [15355] = 1,
    ACTIONS(2010), 1,
      sym_object_name,
  [15359] = 1,
    ACTIONS(2012), 1,
      sym_object_name,
  [15363] = 1,
    ACTIONS(2014), 1,
      aux_sym_create_keyspace_token1,
  [15367] = 1,
    ACTIONS(2016), 1,
      anon_sym_RPAREN,
  [15371] = 1,
    ACTIONS(2018), 1,
      sym_object_name,
  [15375] = 1,
    ACTIONS(2020), 1,
      sym_object_name,
  [15379] = 1,
    ACTIONS(2022), 1,
      sym_object_name,
  [15383] = 1,
    ACTIONS(2024), 1,
      anon_sym_LPAREN,
  [15387] = 1,
    ACTIONS(2026), 1,
      aux_sym_create_function_token1,
  [15391] = 1,
    ACTIONS(2028), 1,
      anon_sym_RPAREN,
  [15395] = 1,
    ACTIONS(2030), 1,
      aux_sym_create_function_token2,
  [15399] = 1,
    ACTIONS(2032), 1,
      aux_sym_relation_contains_key_token2,
  [15403] = 1,
    ACTIONS(2034), 1,
      aux_sym_create_function_token1,
  [15407] = 1,
    ACTIONS(2036), 1,
      aux_sym_create_function_token1,
  [15411] = 1,
    ACTIONS(2038), 1,
      aux_sym_select_element_token1,
  [15415] = 1,
    ACTIONS(2040), 1,
      sym_object_name,
  [15419] = 1,
    ACTIONS(2042), 1,
      aux_sym_create_function_token2,
  [15423] = 1,
    ACTIONS(2044), 1,
      aux_sym_relation_contains_key_token2,
  [15427] = 1,
    ACTIONS(2046), 1,
      anon_sym_RPAREN,
  [15431] = 1,
    ACTIONS(2048), 1,
      sym_object_name,
  [15435] = 1,
    ACTIONS(2050), 1,
      aux_sym_delete_statement_token3,
  [15439] = 1,
    ACTIONS(2052), 1,
      anon_sym_RPAREN,
  [15443] = 1,
    ACTIONS(2054), 1,
      sym_object_name,
  [15447] = 1,
    ACTIONS(2056), 1,
      aux_sym_create_aggregate_token4,
  [15451] = 1,
    ACTIONS(2058), 1,
      aux_sym_create_aggregate_token5,
  [15455] = 1,
    ACTIONS(2060), 1,
      aux_sym_select_statement_token1,
  [15459] = 1,
    ACTIONS(2062), 1,
      aux_sym_from_spec_token1,
  [15463] = 1,
    ACTIONS(2064), 1,
      sym_object_name,
  [15467] = 1,
    ACTIONS(2066), 1,
      sym_object_name,
  [15471] = 1,
    ACTIONS(2068), 1,
      aux_sym_insert_statement_token3,
  [15475] = 1,
    ACTIONS(2070), 1,
      aux_sym_create_materialized_view_token1,
  [15479] = 1,
    ACTIONS(2072), 1,
      anon_sym_RPAREN,
  [15483] = 1,
    ACTIONS(2074), 1,
      anon_sym_LPAREN,
  [15487] = 1,
    ACTIONS(2076), 1,
      aux_sym_select_statement_token5,
  [15491] = 1,
    ACTIONS(2078), 1,
      aux_sym_update_token2,
  [15495] = 1,
    ACTIONS(2080), 1,
      anon_sym_LPAREN,
  [15499] = 1,
    ACTIONS(2082), 1,
      aux_sym_insert_statement_token3,
  [15503] = 1,
    ACTIONS(2084), 1,
      sym_object_name,
  [15507] = 1,
    ACTIONS(2086), 1,
      aux_sym_create_function_token1,
  [15511] = 1,
    ACTIONS(2088), 1,
      anon_sym_LBRACE,
  [15515] = 1,
    ACTIONS(2090), 1,
      sym_object_name,
  [15519] = 1,
    ACTIONS(2092), 1,
      aux_sym_create_function_token2,
  [15523] = 1,
    ACTIONS(2094), 1,
      sym_object_name,
  [15527] = 1,
    ACTIONS(2096), 1,
      aux_sym_create_function_token1,
  [15531] = 1,
    ACTIONS(2098), 1,
      anon_sym_LPAREN,
  [15535] = 1,
    ACTIONS(2100), 1,
      anon_sym_RPAREN,
  [15539] = 1,
    ACTIONS(2102), 1,
      aux_sym_create_aggregate_token3,
  [15543] = 1,
    ACTIONS(2104), 1,
      aux_sym_create_aggregate_token4,
  [15547] = 1,
    ACTIONS(2106), 1,
      sym_object_name,
  [15551] = 1,
    ACTIONS(2108), 1,
      aux_sym_resource_token2,
  [15555] = 1,
    ACTIONS(2110), 1,
      sym_object_name,
  [15559] = 1,
    ACTIONS(2112), 1,
      anon_sym_RBRACK,
  [15563] = 1,
    ACTIONS(2114), 1,
      aux_sym_delete_statement_token3,
  [15567] = 1,
    ACTIONS(2116), 1,
      aux_sym_using_timestamp_spec_token1,
  [15571] = 1,
    ACTIONS(2118), 1,
      sym_object_name,
  [15575] = 1,
    ACTIONS(2120), 1,
      sym_object_name,
  [15579] = 1,
    ACTIONS(2122), 1,
      sym_object_name,
  [15583] = 1,
    ACTIONS(2124), 1,
      sym_object_name,
  [15587] = 1,
    ACTIONS(2126), 1,
      sym_object_name,
  [15591] = 1,
    ACTIONS(2128), 1,
      sym_object_name,
  [15595] = 1,
    ACTIONS(2130), 1,
      sym_object_name,
  [15599] = 1,
    ACTIONS(2132), 1,
      sym_object_name,
  [15603] = 1,
    ACTIONS(2134), 1,
      anon_sym_COLON,
  [15607] = 1,
    ACTIONS(2136), 1,
      aux_sym_delete_statement_token3,
  [15611] = 1,
    ACTIONS(2138), 1,
      sym_object_name,
  [15615] = 1,
    ACTIONS(2140), 1,
      aux_sym_delete_statement_token3,
  [15619] = 1,
    ACTIONS(2142), 1,
      sym_object_name,
  [15623] = 1,
    ACTIONS(2144), 1,
      aux_sym_materialized_view_options_token1,
  [15627] = 1,
    ACTIONS(2146), 1,
      anon_sym_RPAREN,
  [15631] = 1,
    ACTIONS(2148), 1,
      sym_object_name,
  [15635] = 1,
    ACTIONS(2150), 1,
      anon_sym_RPAREN,
  [15639] = 1,
    ACTIONS(2152), 1,
      aux_sym_update_token2,
  [15643] = 1,
    ACTIONS(2154), 1,
      anon_sym_RBRACE,
  [15647] = 1,
    ACTIONS(2156), 1,
      anon_sym_EQ,
  [15651] = 1,
    ACTIONS(2158), 1,
      aux_sym_select_element_token1,
  [15655] = 1,
    ACTIONS(2160), 1,
      aux_sym_create_function_token1,
  [15659] = 1,
    ACTIONS(2162), 1,
      sym_object_name,
  [15663] = 1,
    ACTIONS(2164), 1,
      aux_sym_create_aggregate_token3,
  [15667] = 1,
    ACTIONS(2166), 1,
      aux_sym_create_function_token2,
  [15671] = 1,
    ACTIONS(2168), 1,
      sym__boolean_literal,
  [15675] = 1,
    ACTIONS(2170), 1,
      aux_sym_create_function_token1,
  [15679] = 1,
    ACTIONS(2172), 1,
      sym_object_name,
  [15683] = 1,
    ACTIONS(2174), 1,
      aux_sym_create_function_token2,
  [15687] = 1,
    ACTIONS(2168), 1,
      sym__string_literal,
  [15691] = 1,
    ACTIONS(2176), 1,
      sym__code_block,
  [15695] = 1,
    ACTIONS(2178), 1,
      aux_sym_select_element_token1,
  [15699] = 1,
    ACTIONS(2180), 1,
      sym_object_name,
  [15703] = 1,
    ACTIONS(2182), 1,
      aux_sym_create_aggregate_token3,
  [15707] = 1,
    ACTIONS(2184), 1,
      aux_sym_create_aggregate_token4,
  [15711] = 1,
    ACTIONS(2186), 1,
      aux_sym_create_function_token1,
  [15715] = 1,
    ACTIONS(2188), 1,
      sym_object_name,
  [15719] = 1,
    ACTIONS(2190), 1,
      aux_sym_create_index_token3,
  [15723] = 1,
    ACTIONS(2192), 1,
      sym_object_name,
  [15727] = 1,
    ACTIONS(2194), 1,
      aux_sym_constant_token2,
  [15731] = 1,
    ACTIONS(2196), 1,
      anon_sym_LBRACE,
  [15735] = 1,
    ACTIONS(1009), 1,
      aux_sym_column_not_null_token1,
  [15739] = 1,
    ACTIONS(2198), 1,
      aux_sym_materialized_view_options_token1,
  [15743] = 1,
    ACTIONS(2200), 1,
      aux_sym_relation_contains_key_token2,
  [15747] = 1,
    ACTIONS(2202), 1,
      anon_sym_RPAREN,
  [15751] = 1,
    ACTIONS(2204), 1,
      anon_sym_RPAREN,
  [15755] = 1,
    ACTIONS(2206), 1,
      anon_sym_RPAREN,
  [15759] = 1,
    ACTIONS(2208), 1,
      aux_sym_create_function_token1,
  [15763] = 1,
    ACTIONS(2210), 1,
      anon_sym_LPAREN,
  [15767] = 1,
    ACTIONS(2212), 1,
      anon_sym_LPAREN,
  [15771] = 1,
    ACTIONS(2214), 1,
      anon_sym_LPAREN,
  [15775] = 1,
    ACTIONS(2216), 1,
      aux_sym_create_function_token1,
  [15779] = 1,
    ACTIONS(2218), 1,
      aux_sym_create_index_token3,
  [15783] = 1,
    ACTIONS(2220), 1,
      sym_object_name,
  [15787] = 1,
    ACTIONS(2222), 1,
      aux_sym_create_function_token2,
  [15791] = 1,
    ACTIONS(2224), 1,
      aux_sym_delete_statement_token3,
  [15795] = 1,
    ACTIONS(2226), 1,
      aux_sym_insert_statement_token3,
  [15799] = 1,
    ACTIONS(2228), 1,
      aux_sym_create_aggregate_token3,
  [15803] = 1,
    ACTIONS(2230), 1,
      sym_object_name,
  [15807] = 1,
    ACTIONS(2232), 1,
      anon_sym_RPAREN,
  [15811] = 1,
    ACTIONS(2234), 1,
      sym_object_name,
  [15815] = 1,
    ACTIONS(999), 1,
      anon_sym_LPAREN,
  [15819] = 1,
    ACTIONS(2236), 1,
      sym_object_name,
  [15823] = 1,
    ACTIONS(2238), 1,
      aux_sym_select_statement_token5,
  [15827] = 1,
    ACTIONS(2240), 1,
      sym_object_name,
  [15831] = 1,
    ACTIONS(2242), 1,
      sym_object_name,
  [15835] = 1,
    ACTIONS(2244), 1,
      aux_sym_grant_token2,
  [15839] = 1,
    ACTIONS(2246), 1,
      aux_sym_drop_type_token1,
  [15843] = 1,
    ACTIONS(2248), 1,
      sym_object_name,
  [15847] = 1,
    ACTIONS(2250), 1,
      anon_sym_EQ,
  [15851] = 1,
    ACTIONS(2252), 1,
      aux_sym_grant_token2,
  [15855] = 1,
    ACTIONS(2254), 1,
      anon_sym_EQ,
  [15859] = 1,
    ACTIONS(2256), 1,
      anon_sym_COMMA,
  [15863] = 1,
    ACTIONS(2258), 1,
      anon_sym_EQ,
  [15867] = 1,
    ACTIONS(2260), 1,
      anon_sym_RPAREN,
  [15871] = 1,
    ACTIONS(2262), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [15875] = 1,
    ACTIONS(2264), 1,
      sym__boolean_literal,
  [15879] = 1,
    ACTIONS(2266), 1,
      sym_object_name,
  [15883] = 1,
    ACTIONS(2268), 1,
      aux_sym_create_function_token1,
  [15887] = 1,
    ACTIONS(2270), 1,
      sym_object_name,
  [15891] = 1,
    ACTIONS(2272), 1,
      sym_object_name,
  [15895] = 1,
    ACTIONS(2274), 1,
      aux_sym_create_function_token2,
  [15899] = 1,
    ACTIONS(2276), 1,
      sym_object_name,
  [15903] = 1,
    ACTIONS(2278), 1,
      aux_sym_select_element_token1,
  [15907] = 1,
    ACTIONS(2280), 1,
      sym_object_name,
  [15911] = 1,
    ACTIONS(2282), 1,
      aux_sym_create_function_token2,
  [15915] = 1,
    ACTIONS(2284), 1,
      sym__decimal_literal,
  [15919] = 1,
    ACTIONS(2286), 1,
      sym__code_block,
  [15923] = 1,
    ACTIONS(2288), 1,
      aux_sym_select_element_token1,
  [15927] = 1,
    ACTIONS(2290), 1,
      sym_object_name,
  [15931] = 1,
    ACTIONS(2292), 1,
      anon_sym_EQ,
  [15935] = 1,
    ACTIONS(2294), 1,
      aux_sym_create_aggregate_token5,
  [15939] = 1,
    ACTIONS(2296), 1,
      aux_sym_create_aggregate_token6,
  [15943] = 1,
    ACTIONS(2298), 1,
      aux_sym_from_spec_token1,
  [15947] = 1,
    ACTIONS(2300), 1,
      aux_sym_create_index_token3,
  [15951] = 1,
    ACTIONS(2302), 1,
      sym_object_name,
  [15955] = 1,
    ACTIONS(2304), 1,
      aux_sym_create_materialized_view_token1,
  [15959] = 1,
    ACTIONS(2306), 1,
      aux_sym_create_materialized_view_token1,
  [15963] = 1,
    ACTIONS(2308), 1,
      aux_sym_insert_statement_token3,
  [15967] = 1,
    ACTIONS(2310), 1,
      sym_object_name,
  [15971] = 1,
    ACTIONS(2312), 1,
      sym_object_name,
  [15975] = 1,
    ACTIONS(2314), 1,
      aux_sym_insert_statement_token3,
  [15979] = 1,
    ACTIONS(2316), 1,
      anon_sym_LPAREN,
  [15983] = 1,
    ACTIONS(2318), 1,
      aux_sym_insert_statement_token3,
  [15987] = 1,
    ACTIONS(2320), 1,
      sym__string_literal,
  [15991] = 1,
    ACTIONS(2322), 1,
      anon_sym_LPAREN,
  [15995] = 1,
    ACTIONS(2324), 1,
      sym_object_name,
  [15999] = 1,
    ACTIONS(2326), 1,
      aux_sym_using_timestamp_spec_token1,
  [16003] = 1,
    ACTIONS(2328), 1,
      aux_sym_create_function_token1,
  [16007] = 1,
    ACTIONS(2330), 1,
      aux_sym_select_statement_token1,
  [16011] = 1,
    ACTIONS(2332), 1,
      aux_sym_create_function_token2,
  [16015] = 1,
    ACTIONS(2334), 1,
      sym_object_name,
  [16019] = 1,
    ACTIONS(2336), 1,
      aux_sym_create_function_token1,
  [16023] = 1,
    ACTIONS(2338), 1,
      aux_sym_select_element_token1,
  [16027] = 1,
    ACTIONS(2340), 1,
      sym_object_name,
  [16031] = 1,
    ACTIONS(2342), 1,
      aux_sym_create_function_token2,
  [16035] = 1,
    ACTIONS(2344), 1,
      anon_sym_RPAREN,
  [16039] = 1,
    ACTIONS(2346), 1,
      sym_object_name,
  [16043] = 1,
    ACTIONS(2348), 1,
      aux_sym_create_aggregate_token4,
  [16047] = 1,
    ACTIONS(2350), 1,
      aux_sym_create_aggregate_token5,
  [16051] = 1,
    ACTIONS(2352), 1,
      aux_sym_delete_statement_token3,
  [16055] = 1,
    ACTIONS(2354), 1,
      anon_sym_RPAREN,
  [16059] = 1,
    ACTIONS(2356), 1,
      anon_sym_LPAREN,
  [16063] = 1,
    ACTIONS(2358), 1,
      anon_sym_EQ,
  [16067] = 1,
    ACTIONS(2360), 1,
      anon_sym_RPAREN,
  [16071] = 1,
    ACTIONS(2362), 1,
      anon_sym_EQ,
  [16075] = 1,
    ACTIONS(2364), 1,
      sym_object_name,
  [16079] = 1,
    ACTIONS(2366), 1,
      sym_object_name,
  [16083] = 1,
    ACTIONS(2368), 1,
      anon_sym_LPAREN,
  [16087] = 1,
    ACTIONS(2370), 1,
      aux_sym_create_function_token2,
  [16091] = 1,
    ACTIONS(2372), 1,
      sym_object_name,
  [16095] = 1,
    ACTIONS(2374), 1,
      aux_sym_create_function_token1,
  [16099] = 1,
    ACTIONS(2376), 1,
      aux_sym_select_element_token1,
  [16103] = 1,
    ACTIONS(2378), 1,
      sym_object_name,
  [16107] = 1,
    ACTIONS(2380), 1,
      aux_sym_create_function_token2,
  [16111] = 1,
    ACTIONS(2382), 1,
      sym__code_block,
  [16115] = 1,
    ACTIONS(2384), 1,
      aux_sym_select_element_token1,
  [16119] = 1,
    ACTIONS(2386), 1,
      sym_object_name,
  [16123] = 1,
    ACTIONS(2388), 1,
      anon_sym_EQ,
  [16127] = 1,
    ACTIONS(2390), 1,
      sym__code_block,
  [16131] = 1,
    ACTIONS(2392), 1,
      aux_sym_create_aggregate_token4,
  [16135] = 1,
    ACTIONS(2394), 1,
      aux_sym_create_aggregate_token5,
  [16139] = 1,
    ACTIONS(2396), 1,
      sym_object_name,
  [16143] = 1,
    ACTIONS(2398), 1,
      anon_sym_LPAREN,
  [16147] = 1,
    ACTIONS(2400), 1,
      sym_object_name,
  [16151] = 1,
    ACTIONS(2402), 1,
      sym_object_name,
  [16155] = 1,
    ACTIONS(2404), 1,
      aux_sym_create_materialized_view_token1,
  [16159] = 1,
    ACTIONS(2406), 1,
      anon_sym_RPAREN,
  [16163] = 1,
    ACTIONS(2408), 1,
      aux_sym_relation_contains_key_token2,
  [16167] = 1,
    ACTIONS(2410), 1,
      aux_sym_relation_contains_key_token2,
  [16171] = 1,
    ACTIONS(2412), 1,
      aux_sym_constant_token2,
  [16175] = 1,
    ACTIONS(2414), 1,
      anon_sym_LPAREN,
  [16179] = 1,
    ACTIONS(2416), 1,
      sym_object_name,
  [16183] = 1,
    ACTIONS(2418), 1,
      aux_sym_insert_statement_token3,
  [16187] = 1,
    ACTIONS(2420), 1,
      anon_sym_RPAREN,
  [16191] = 1,
    ACTIONS(2422), 1,
      anon_sym_EQ,
  [16195] = 1,
    ACTIONS(2424), 1,
      anon_sym_LPAREN,
  [16199] = 1,
    ACTIONS(2426), 1,
      aux_sym_create_function_token1,
  [16203] = 1,
    ACTIONS(2428), 1,
      sym_object_name,
  [16207] = 1,
    ACTIONS(2430), 1,
      aux_sym_select_statement_token5,
  [16211] = 1,
    ACTIONS(2432), 1,
      aux_sym_create_function_token2,
  [16215] = 1,
    ACTIONS(2434), 1,
      aux_sym_update_token2,
  [16219] = 1,
    ACTIONS(2436), 1,
      aux_sym_create_function_token1,
  [16223] = 1,
    ACTIONS(2438), 1,
      sym_object_name,
  [16227] = 1,
    ACTIONS(2440), 1,
      aux_sym_create_function_token2,
  [16231] = 1,
    ACTIONS(2442), 1,
      sym_object_name,
  [16235] = 1,
    ACTIONS(2444), 1,
      sym__code_block,
  [16239] = 1,
    ACTIONS(2446), 1,
      aux_sym_select_element_token1,
  [16243] = 1,
    ACTIONS(2448), 1,
      sym_object_name,
  [16247] = 1,
    ACTIONS(2450), 1,
      aux_sym_create_aggregate_token3,
  [16251] = 1,
    ACTIONS(2452), 1,
      aux_sym_create_aggregate_token4,
  [16255] = 1,
    ACTIONS(2454), 1,
      sym_object_name,
  [16259] = 1,
    ACTIONS(2456), 1,
      sym_object_name,
  [16263] = 1,
    ACTIONS(2458), 1,
      sym_object_name,
  [16267] = 1,
    ACTIONS(2460), 1,
      anon_sym_RPAREN,
  [16271] = 1,
    ACTIONS(2462), 1,
      sym_object_name,
  [16275] = 1,
    ACTIONS(2464), 1,
      sym_object_name,
  [16279] = 1,
    ACTIONS(2466), 1,
      aux_sym_create_function_token2,
  [16283] = 1,
    ACTIONS(2468), 1,
      aux_sym_create_keyspace_token1,
  [16287] = 1,
    ACTIONS(2470), 1,
      sym__code_block,
  [16291] = 1,
    ACTIONS(2472), 1,
      aux_sym_select_element_token1,
  [16295] = 1,
    ACTIONS(2474), 1,
      sym_object_name,
  [16299] = 1,
    ACTIONS(2476), 1,
      sym_object_name,
  [16303] = 1,
    ACTIONS(2478), 1,
      sym__code_block,
  [16307] = 1,
    ACTIONS(2480), 1,
      aux_sym_select_element_token1,
  [16311] = 1,
    ACTIONS(2482), 1,
      sym_object_name,
  [16315] = 1,
    ACTIONS(2484), 1,
      aux_sym_from_spec_token1,
  [16319] = 1,
    ACTIONS(2486), 1,
      sym_object_name,
  [16323] = 1,
    ACTIONS(2488), 1,
      aux_sym_create_aggregate_token6,
  [16327] = 1,
    ACTIONS(2490), 1,
      aux_sym_grant_token2,
  [16331] = 1,
    ACTIONS(2492), 1,
      sym_object_name,
  [16335] = 1,
    ACTIONS(2494), 1,
      sym_object_name,
  [16339] = 1,
    ACTIONS(2496), 1,
      sym_object_name,
  [16343] = 1,
    ACTIONS(2498), 1,
      sym_object_name,
  [16347] = 1,
    ACTIONS(2500), 1,
      aux_sym_relation_contains_key_token2,
  [16351] = 1,
    ACTIONS(2502), 1,
      aux_sym_create_materialized_view_token1,
  [16355] = 1,
    ACTIONS(2504), 1,
      anon_sym_LPAREN,
  [16359] = 1,
    ACTIONS(2506), 1,
      anon_sym_LPAREN,
  [16363] = 1,
    ACTIONS(2508), 1,
      sym__decimal_literal,
  [16367] = 1,
    ACTIONS(2510), 1,
      sym_object_name,
  [16371] = 1,
    ACTIONS(2512), 1,
      anon_sym_RPAREN,
  [16375] = 1,
    ACTIONS(2514), 1,
      sym_object_name,
  [16379] = 1,
    ACTIONS(2516), 1,
      aux_sym_create_function_token1,
  [16383] = 1,
    ACTIONS(2518), 1,
      sym_object_name,
  [16387] = 1,
    ACTIONS(2520), 1,
      sym_object_name,
  [16391] = 1,
    ACTIONS(2522), 1,
      aux_sym_create_function_token2,
  [16395] = 1,
    ACTIONS(2524), 1,
      sym_object_name,
  [16399] = 1,
    ACTIONS(2526), 1,
      aux_sym_select_element_token1,
  [16403] = 1,
    ACTIONS(2528), 1,
      sym_object_name,
  [16407] = 1,
    ACTIONS(2530), 1,
      aux_sym_create_function_token2,
  [16411] = 1,
    ACTIONS(2532), 1,
      sym_object_name,
  [16415] = 1,
    ACTIONS(2534), 1,
      sym__code_block,
  [16419] = 1,
    ACTIONS(2536), 1,
      aux_sym_select_element_token1,
  [16423] = 1,
    ACTIONS(2538), 1,
      sym_object_name,
  [16427] = 1,
    ACTIONS(2540), 1,
      aux_sym_delete_statement_token3,
  [16431] = 1,
    ACTIONS(2542), 1,
      aux_sym_create_aggregate_token5,
  [16435] = 1,
    ACTIONS(2544), 1,
      aux_sym_create_aggregate_token6,
  [16439] = 1,
    ACTIONS(2546), 1,
      aux_sym_select_element_token1,
  [16443] = 1,
    ACTIONS(2548), 1,
      sym_object_name,
  [16447] = 1,
    ACTIONS(2550), 1,
      aux_sym_create_function_token2,
  [16451] = 1,
    ACTIONS(2552), 1,
      sym_object_name,
  [16455] = 1,
    ACTIONS(2554), 1,
      sym__code_block,
  [16459] = 1,
    ACTIONS(2556), 1,
      aux_sym_select_element_token1,
  [16463] = 1,
    ACTIONS(2558), 1,
      sym_object_name,
  [16467] = 1,
    ACTIONS(2560), 1,
      sym__code_block,
  [16471] = 1,
    ACTIONS(2562), 1,
      aux_sym_create_aggregate_token5,
  [16475] = 1,
    ACTIONS(2564), 1,
      aux_sym_create_aggregate_token6,
  [16479] = 1,
    ACTIONS(2566), 1,
      sym_object_name,
  [16483] = 1,
    ACTIONS(2568), 1,
      sym_object_name,
  [16487] = 1,
    ACTIONS(2570), 1,
      anon_sym_COLON,
  [16491] = 1,
    ACTIONS(2572), 1,
      sym_object_name,
  [16495] = 1,
    ACTIONS(2574), 1,
      sym_object_name,
  [16499] = 1,
    ACTIONS(2576), 1,
      sym_object_name,
  [16503] = 1,
    ACTIONS(2578), 1,
      sym_object_name,
  [16507] = 1,
    ACTIONS(2580), 1,
      aux_sym_create_materialized_view_token1,
  [16511] = 1,
    ACTIONS(2582), 1,
      aux_sym_create_materialized_view_token1,
  [16515] = 1,
    ACTIONS(2584), 1,
      anon_sym_LPAREN,
  [16519] = 1,
    ACTIONS(2586), 1,
      aux_sym_relation_contains_key_token2,
  [16523] = 1,
    ACTIONS(2588), 1,
      sym_object_name,
  [16527] = 1,
    ACTIONS(2590), 1,
      aux_sym_delete_statement_token3,
  [16531] = 1,
    ACTIONS(2592), 1,
      sym_object_name,
  [16535] = 1,
    ACTIONS(2594), 1,
      aux_sym_create_function_token2,
  [16539] = 1,
    ACTIONS(2596), 1,
      sym_object_name,
  [16543] = 1,
    ACTIONS(2598), 1,
      aux_sym_create_function_token1,
  [16547] = 1,
    ACTIONS(2600), 1,
      aux_sym_select_element_token1,
  [16551] = 1,
    ACTIONS(2602), 1,
      sym_object_name,
  [16555] = 1,
    ACTIONS(2604), 1,
      aux_sym_create_function_token2,
  [16559] = 1,
    ACTIONS(2606), 1,
      sym__code_block,
  [16563] = 1,
    ACTIONS(2608), 1,
      aux_sym_select_element_token1,
  [16567] = 1,
    ACTIONS(2610), 1,
      sym_object_name,
  [16571] = 1,
    ACTIONS(2612), 1,
      aux_sym_delete_statement_token3,
  [16575] = 1,
    ACTIONS(2614), 1,
      sym__code_block,
  [16579] = 1,
    ACTIONS(2616), 1,
      aux_sym_create_aggregate_token4,
  [16583] = 1,
    ACTIONS(2618), 1,
      aux_sym_create_aggregate_token5,
  [16587] = 1,
    ACTIONS(2620), 1,
      sym_object_name,
  [16591] = 1,
    ACTIONS(2622), 1,
      aux_sym_delete_statement_token3,
  [16595] = 1,
    ACTIONS(2624), 1,
      sym__code_block,
  [16599] = 1,
    ACTIONS(2626), 1,
      aux_sym_select_element_token1,
  [16603] = 1,
    ACTIONS(2628), 1,
      sym_object_name,
  [16607] = 1,
    ACTIONS(2630), 1,
      aux_sym_delete_statement_token3,
  [16611] = 1,
    ACTIONS(2632), 1,
      sym__code_block,
  [16615] = 1,
    ACTIONS(2634), 1,
      aux_sym_insert_statement_token3,
  [16619] = 1,
    ACTIONS(2636), 1,
      sym_object_name,
  [16623] = 1,
    ACTIONS(2638), 1,
      sym_object_name,
  [16627] = 1,
    ACTIONS(2640), 1,
      aux_sym_delete_statement_token3,
  [16631] = 1,
    ACTIONS(2642), 1,
      aux_sym_delete_statement_token3,
  [16635] = 1,
    ACTIONS(2644), 1,
      sym_object_name,
  [16639] = 1,
    ACTIONS(2646), 1,
      aux_sym_delete_statement_token3,
  [16643] = 1,
    ACTIONS(2648), 1,
      aux_sym_create_keyspace_token1,
  [16647] = 1,
    ACTIONS(2650), 1,
      aux_sym_delete_statement_token3,
  [16651] = 1,
    ACTIONS(2652), 1,
      anon_sym_LPAREN,
  [16655] = 1,
    ACTIONS(2654), 1,
      aux_sym_delete_statement_token3,
  [16659] = 1,
    ACTIONS(2656), 1,
      sym_object_name,
  [16663] = 1,
    ACTIONS(2658), 1,
      aux_sym_delete_statement_token3,
  [16667] = 1,
    ACTIONS(2660), 1,
      sym_object_name,
  [16671] = 1,
    ACTIONS(2662), 1,
      aux_sym_relation_contains_key_token2,
  [16675] = 1,
    ACTIONS(2664), 1,
      aux_sym_relation_contains_key_token2,
  [16679] = 1,
    ACTIONS(2666), 1,
      anon_sym_LPAREN,
  [16683] = 1,
    ACTIONS(2668), 1,
      anon_sym_LPAREN,
  [16687] = 1,
    ACTIONS(2670), 1,
      anon_sym_RPAREN,
  [16691] = 1,
    ACTIONS(2672), 1,
      anon_sym_RPAREN,
  [16695] = 1,
    ACTIONS(2674), 1,
      sym_object_name,
  [16699] = 1,
    ACTIONS(2676), 1,
      sym__decimal_literal,
  [16703] = 1,
    ACTIONS(2678), 1,
      sym_object_name,
  [16707] = 1,
    ACTIONS(2680), 1,
      aux_sym_create_function_token2,
  [16711] = 1,
    ACTIONS(2682), 1,
      sym_object_name,
  [16715] = 1,
    ACTIONS(2684), 1,
      sym__code_block,
  [16719] = 1,
    ACTIONS(2686), 1,
      aux_sym_select_element_token1,
  [16723] = 1,
    ACTIONS(2688), 1,
      sym_object_name,
  [16727] = 1,
    ACTIONS(2690), 1,
      anon_sym_RBRACK,
  [16731] = 1,
    ACTIONS(2692), 1,
      sym__code_block,
  [16735] = 1,
    ACTIONS(2694), 1,
      aux_sym_select_element_token1,
  [16739] = 1,
    ACTIONS(2696), 1,
      sym_object_name,
  [16743] = 1,
    ACTIONS(2698), 1,
      aux_sym_order_spec_token2,
  [16747] = 1,
    ACTIONS(2700), 1,
      sym_object_name,
  [16751] = 1,
    ACTIONS(2702), 1,
      aux_sym_create_aggregate_token6,
  [16755] = 1,
    ACTIONS(2704), 1,
      sym__decimal_literal,
  [16759] = 1,
    ACTIONS(2706), 1,
      aux_sym_select_statement_token5,
  [16763] = 1,
    ACTIONS(2708), 1,
      sym__code_block,
  [16767] = 1,
    ACTIONS(2710), 1,
      aux_sym_select_element_token1,
  [16771] = 1,
    ACTIONS(2712), 1,
      anon_sym_RPAREN,
  [16775] = 1,
    ACTIONS(2714), 1,
      aux_sym_create_aggregate_token6,
  [16779] = 1,
    ACTIONS(2716), 1,
      sym_object_name,
  [16783] = 1,
    ACTIONS(2718), 1,
      sym_object_name,
  [16787] = 1,
    ACTIONS(2720), 1,
      aux_sym_materialized_view_options_token1,
  [16791] = 1,
    ACTIONS(2722), 1,
      sym_object_name,
  [16795] = 1,
    ACTIONS(2724), 1,
      aux_sym_materialized_view_options_token1,
  [16799] = 1,
    ACTIONS(2726), 1,
      aux_sym_update_token2,
  [16803] = 1,
    ACTIONS(2728), 1,
      sym_object_name,
  [16807] = 1,
    ACTIONS(2730), 1,
      aux_sym_delete_statement_token3,
  [16811] = 1,
    ACTIONS(2732), 1,
      aux_sym_delete_statement_token3,
  [16815] = 1,
    ACTIONS(2734), 1,
      aux_sym_create_materialized_view_token1,
  [16819] = 1,
    ACTIONS(2736), 1,
      anon_sym_LPAREN,
  [16823] = 1,
    ACTIONS(2738), 1,
      anon_sym_LPAREN,
  [16827] = 1,
    ACTIONS(2740), 1,
      anon_sym_RPAREN,
  [16831] = 1,
    ACTIONS(2742), 1,
      aux_sym_delete_statement_token3,
  [16835] = 1,
    ACTIONS(2744), 1,
      aux_sym_delete_statement_token3,
  [16839] = 1,
    ACTIONS(2746), 1,
      aux_sym_insert_statement_token2,
  [16843] = 1,
    ACTIONS(2748), 1,
      aux_sym_delete_statement_token3,
  [16847] = 1,
    ACTIONS(2750), 1,
      aux_sym_delete_statement_token3,
  [16851] = 1,
    ACTIONS(2752), 1,
      aux_sym_select_element_token1,
  [16855] = 1,
    ACTIONS(2754), 1,
      sym_object_name,
  [16859] = 1,
    ACTIONS(2756), 1,
      aux_sym_create_function_token2,
  [16863] = 1,
    ACTIONS(2758), 1,
      aux_sym_delete_statement_token3,
  [16867] = 1,
    ACTIONS(2760), 1,
      sym__code_block,
  [16871] = 1,
    ACTIONS(2762), 1,
      aux_sym_select_element_token1,
  [16875] = 1,
    ACTIONS(2764), 1,
      aux_sym_delete_statement_token3,
  [16879] = 1,
    ACTIONS(2766), 1,
      sym__code_block,
  [16883] = 1,
    ACTIONS(2768), 1,
      aux_sym_create_aggregate_token5,
  [16887] = 1,
    ACTIONS(2770), 1,
      aux_sym_create_aggregate_token6,
  [16891] = 1,
    ACTIONS(2772), 1,
      aux_sym_materialized_view_options_token1,
  [16895] = 1,
    ACTIONS(2774), 1,
      aux_sym_insert_statement_token3,
  [16899] = 1,
    ACTIONS(2776), 1,
      sym__code_block,
  [16903] = 1,
    ACTIONS(2778), 1,
      aux_sym_insert_statement_token3,
  [16907] = 1,
    ACTIONS(2780), 1,
      aux_sym_relation_contains_key_token2,
  [16911] = 1,
    ACTIONS(2782), 1,
      aux_sym_using_timestamp_spec_token1,
  [16915] = 1,
    ACTIONS(2784), 1,
      aux_sym_insert_statement_token3,
  [16919] = 1,
    ACTIONS(2786), 1,
      aux_sym_insert_statement_token3,
  [16923] = 1,
    ACTIONS(2788), 1,
      anon_sym_RPAREN,
  [16927] = 1,
    ACTIONS(2790), 1,
      aux_sym_insert_statement_token3,
  [16931] = 1,
    ACTIONS(2792), 1,
      aux_sym_insert_statement_token3,
  [16935] = 1,
    ACTIONS(2794), 1,
      aux_sym_materialized_view_options_token1,
  [16939] = 1,
    ACTIONS(2796), 1,
      aux_sym_materialized_view_options_token1,
  [16943] = 1,
    ACTIONS(2798), 1,
      sym__code_block,
  [16947] = 1,
    ACTIONS(2800), 1,
      aux_sym_select_element_token1,
  [16951] = 1,
    ACTIONS(2802), 1,
      sym_object_name,
  [16955] = 1,
    ACTIONS(2804), 1,
      aux_sym_insert_statement_token3,
  [16959] = 1,
    ACTIONS(2806), 1,
      sym__code_block,
  [16963] = 1,
    ACTIONS(2808), 1,
      aux_sym_create_index_token3,
  [16967] = 1,
    ACTIONS(2810), 1,
      sym_object_name,
  [16971] = 1,
    ACTIONS(2812), 1,
      aux_sym_insert_statement_token3,
  [16975] = 1,
    ACTIONS(2814), 1,
      aux_sym_create_index_token3,
  [16979] = 1,
    ACTIONS(2816), 1,
      aux_sym_insert_statement_token3,
  [16983] = 1,
    ACTIONS(2818), 1,
      sym_object_name,
  [16987] = 1,
    ACTIONS(2820), 1,
      anon_sym_LPAREN,
  [16991] = 1,
    ACTIONS(2822), 1,
      anon_sym_RPAREN,
  [16995] = 1,
    ACTIONS(2824), 1,
      anon_sym_RPAREN,
  [16999] = 1,
    ACTIONS(2826), 1,
      sym_object_name,
  [17003] = 1,
    ACTIONS(2826), 1,
      anon_sym_STAR,
  [17007] = 1,
    ACTIONS(2828), 1,
      sym_object_name,
  [17011] = 1,
    ACTIONS(2830), 1,
      aux_sym_insert_statement_token2,
  [17015] = 1,
    ACTIONS(2832), 1,
      sym_object_name,
  [17019] = 1,
    ACTIONS(2834), 1,
      sym__code_block,
  [17023] = 1,
    ACTIONS(2836), 1,
      aux_sym_select_element_token1,
  [17027] = 1,
    ACTIONS(2838), 1,
      aux_sym_drop_materialized_view_token2,
  [17031] = 1,
    ACTIONS(2840), 1,
      aux_sym_create_aggregate_token6,
  [17035] = 1,
    ACTIONS(2842), 1,
      sym_object_name,
  [17039] = 1,
    ACTIONS(2844), 1,
      sym_object_name,
  [17043] = 1,
    ACTIONS(2846), 1,
      aux_sym_create_index_token3,
  [17047] = 1,
    ACTIONS(2848), 1,
      aux_sym_create_index_token3,
  [17051] = 1,
    ACTIONS(2850), 1,
      aux_sym_drop_materialized_view_token2,
  [17055] = 1,
    ACTIONS(2852), 1,
      aux_sym_create_aggregate_token2,
  [17059] = 1,
    ACTIONS(2854), 1,
      aux_sym_drop_materialized_view_token2,
  [17063] = 1,
    ACTIONS(2856), 1,
      sym__code_block,
  [17067] = 1,
    ACTIONS(2858), 1,
      sym_object_name,
  [17071] = 1,
    ACTIONS(2860), 1,
      anon_sym_RPAREN,
  [17075] = 1,
    ACTIONS(2862), 1,
      sym_object_name,
  [17079] = 1,
    ACTIONS(2864), 1,
      aux_sym_begin_batch_token4,
  [17083] = 1,
    ACTIONS(2866), 1,
      ts_builtin_sym_end,
  [17087] = 1,
    ACTIONS(2868), 1,
      aux_sym_begin_batch_token4,
  [17091] = 1,
    ACTIONS(2870), 1,
      sym_object_name,
  [17095] = 1,
    ACTIONS(2872), 1,
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
  [SMALL_STATE(63)] = 2228,
  [SMALL_STATE(64)] = 2255,
  [SMALL_STATE(65)] = 2282,
  [SMALL_STATE(66)] = 2309,
  [SMALL_STATE(67)] = 2340,
  [SMALL_STATE(68)] = 2367,
  [SMALL_STATE(69)] = 2393,
  [SMALL_STATE(70)] = 2433,
  [SMALL_STATE(71)] = 2463,
  [SMALL_STATE(72)] = 2493,
  [SMALL_STATE(73)] = 2521,
  [SMALL_STATE(74)] = 2561,
  [SMALL_STATE(75)] = 2601,
  [SMALL_STATE(76)] = 2626,
  [SMALL_STATE(77)] = 2651,
  [SMALL_STATE(78)] = 2690,
  [SMALL_STATE(79)] = 2715,
  [SMALL_STATE(80)] = 2740,
  [SMALL_STATE(81)] = 2765,
  [SMALL_STATE(82)] = 2794,
  [SMALL_STATE(83)] = 2819,
  [SMALL_STATE(84)] = 2844,
  [SMALL_STATE(85)] = 2869,
  [SMALL_STATE(86)] = 2898,
  [SMALL_STATE(87)] = 2923,
  [SMALL_STATE(88)] = 2948,
  [SMALL_STATE(89)] = 2976,
  [SMALL_STATE(90)] = 3010,
  [SMALL_STATE(91)] = 3044,
  [SMALL_STATE(92)] = 3068,
  [SMALL_STATE(93)] = 3102,
  [SMALL_STATE(94)] = 3126,
  [SMALL_STATE(95)] = 3150,
  [SMALL_STATE(96)] = 3174,
  [SMALL_STATE(97)] = 3199,
  [SMALL_STATE(98)] = 3224,
  [SMALL_STATE(99)] = 3249,
  [SMALL_STATE(100)] = 3272,
  [SMALL_STATE(101)] = 3299,
  [SMALL_STATE(102)] = 3324,
  [SMALL_STATE(103)] = 3348,
  [SMALL_STATE(104)] = 3374,
  [SMALL_STATE(105)] = 3396,
  [SMALL_STATE(106)] = 3418,
  [SMALL_STATE(107)] = 3446,
  [SMALL_STATE(108)] = 3468,
  [SMALL_STATE(109)] = 3496,
  [SMALL_STATE(110)] = 3518,
  [SMALL_STATE(111)] = 3544,
  [SMALL_STATE(112)] = 3570,
  [SMALL_STATE(113)] = 3596,
  [SMALL_STATE(114)] = 3622,
  [SMALL_STATE(115)] = 3650,
  [SMALL_STATE(116)] = 3678,
  [SMALL_STATE(117)] = 3706,
  [SMALL_STATE(118)] = 3734,
  [SMALL_STATE(119)] = 3760,
  [SMALL_STATE(120)] = 3782,
  [SMALL_STATE(121)] = 3804,
  [SMALL_STATE(122)] = 3832,
  [SMALL_STATE(123)] = 3860,
  [SMALL_STATE(124)] = 3882,
  [SMALL_STATE(125)] = 3910,
  [SMALL_STATE(126)] = 3932,
  [SMALL_STATE(127)] = 3960,
  [SMALL_STATE(128)] = 3982,
  [SMALL_STATE(129)] = 4010,
  [SMALL_STATE(130)] = 4032,
  [SMALL_STATE(131)] = 4060,
  [SMALL_STATE(132)] = 4085,
  [SMALL_STATE(133)] = 4110,
  [SMALL_STATE(134)] = 4135,
  [SMALL_STATE(135)] = 4160,
  [SMALL_STATE(136)] = 4185,
  [SMALL_STATE(137)] = 4210,
  [SMALL_STATE(138)] = 4235,
  [SMALL_STATE(139)] = 4260,
  [SMALL_STATE(140)] = 4285,
  [SMALL_STATE(141)] = 4306,
  [SMALL_STATE(142)] = 4327,
  [SMALL_STATE(143)] = 4352,
  [SMALL_STATE(144)] = 4373,
  [SMALL_STATE(145)] = 4398,
  [SMALL_STATE(146)] = 4423,
  [SMALL_STATE(147)] = 4448,
  [SMALL_STATE(148)] = 4473,
  [SMALL_STATE(149)] = 4494,
  [SMALL_STATE(150)] = 4515,
  [SMALL_STATE(151)] = 4550,
  [SMALL_STATE(152)] = 4571,
  [SMALL_STATE(153)] = 4596,
  [SMALL_STATE(154)] = 4621,
  [SMALL_STATE(155)] = 4646,
  [SMALL_STATE(156)] = 4667,
  [SMALL_STATE(157)] = 4692,
  [SMALL_STATE(158)] = 4717,
  [SMALL_STATE(159)] = 4742,
  [SMALL_STATE(160)] = 4767,
  [SMALL_STATE(161)] = 4792,
  [SMALL_STATE(162)] = 4817,
  [SMALL_STATE(163)] = 4842,
  [SMALL_STATE(164)] = 4867,
  [SMALL_STATE(165)] = 4892,
  [SMALL_STATE(166)] = 4917,
  [SMALL_STATE(167)] = 4942,
  [SMALL_STATE(168)] = 4967,
  [SMALL_STATE(169)] = 4988,
  [SMALL_STATE(170)] = 5009,
  [SMALL_STATE(171)] = 5034,
  [SMALL_STATE(172)] = 5059,
  [SMALL_STATE(173)] = 5080,
  [SMALL_STATE(174)] = 5105,
  [SMALL_STATE(175)] = 5126,
  [SMALL_STATE(176)] = 5151,
  [SMALL_STATE(177)] = 5172,
  [SMALL_STATE(178)] = 5197,
  [SMALL_STATE(179)] = 5218,
  [SMALL_STATE(180)] = 5243,
  [SMALL_STATE(181)] = 5268,
  [SMALL_STATE(182)] = 5293,
  [SMALL_STATE(183)] = 5318,
  [SMALL_STATE(184)] = 5343,
  [SMALL_STATE(185)] = 5368,
  [SMALL_STATE(186)] = 5389,
  [SMALL_STATE(187)] = 5414,
  [SMALL_STATE(188)] = 5439,
  [SMALL_STATE(189)] = 5464,
  [SMALL_STATE(190)] = 5485,
  [SMALL_STATE(191)] = 5510,
  [SMALL_STATE(192)] = 5531,
  [SMALL_STATE(193)] = 5556,
  [SMALL_STATE(194)] = 5581,
  [SMALL_STATE(195)] = 5604,
  [SMALL_STATE(196)] = 5629,
  [SMALL_STATE(197)] = 5654,
  [SMALL_STATE(198)] = 5679,
  [SMALL_STATE(199)] = 5704,
  [SMALL_STATE(200)] = 5729,
  [SMALL_STATE(201)] = 5754,
  [SMALL_STATE(202)] = 5779,
  [SMALL_STATE(203)] = 5804,
  [SMALL_STATE(204)] = 5829,
  [SMALL_STATE(205)] = 5854,
  [SMALL_STATE(206)] = 5875,
  [SMALL_STATE(207)] = 5900,
  [SMALL_STATE(208)] = 5923,
  [SMALL_STATE(209)] = 5948,
  [SMALL_STATE(210)] = 5969,
  [SMALL_STATE(211)] = 5994,
  [SMALL_STATE(212)] = 6019,
  [SMALL_STATE(213)] = 6044,
  [SMALL_STATE(214)] = 6065,
  [SMALL_STATE(215)] = 6085,
  [SMALL_STATE(216)] = 6105,
  [SMALL_STATE(217)] = 6127,
  [SMALL_STATE(218)] = 6147,
  [SMALL_STATE(219)] = 6169,
  [SMALL_STATE(220)] = 6191,
  [SMALL_STATE(221)] = 6213,
  [SMALL_STATE(222)] = 6235,
  [SMALL_STATE(223)] = 6255,
  [SMALL_STATE(224)] = 6275,
  [SMALL_STATE(225)] = 6307,
  [SMALL_STATE(226)] = 6329,
  [SMALL_STATE(227)] = 6349,
  [SMALL_STATE(228)] = 6369,
  [SMALL_STATE(229)] = 6391,
  [SMALL_STATE(230)] = 6413,
  [SMALL_STATE(231)] = 6435,
  [SMALL_STATE(232)] = 6457,
  [SMALL_STATE(233)] = 6477,
  [SMALL_STATE(234)] = 6499,
  [SMALL_STATE(235)] = 6521,
  [SMALL_STATE(236)] = 6543,
  [SMALL_STATE(237)] = 6565,
  [SMALL_STATE(238)] = 6587,
  [SMALL_STATE(239)] = 6607,
  [SMALL_STATE(240)] = 6629,
  [SMALL_STATE(241)] = 6651,
  [SMALL_STATE(242)] = 6673,
  [SMALL_STATE(243)] = 6695,
  [SMALL_STATE(244)] = 6717,
  [SMALL_STATE(245)] = 6739,
  [SMALL_STATE(246)] = 6759,
  [SMALL_STATE(247)] = 6781,
  [SMALL_STATE(248)] = 6801,
  [SMALL_STATE(249)] = 6823,
  [SMALL_STATE(250)] = 6845,
  [SMALL_STATE(251)] = 6867,
  [SMALL_STATE(252)] = 6889,
  [SMALL_STATE(253)] = 6911,
  [SMALL_STATE(254)] = 6933,
  [SMALL_STATE(255)] = 6955,
  [SMALL_STATE(256)] = 6974,
  [SMALL_STATE(257)] = 6993,
  [SMALL_STATE(258)] = 7012,
  [SMALL_STATE(259)] = 7031,
  [SMALL_STATE(260)] = 7050,
  [SMALL_STATE(261)] = 7069,
  [SMALL_STATE(262)] = 7088,
  [SMALL_STATE(263)] = 7107,
  [SMALL_STATE(264)] = 7126,
  [SMALL_STATE(265)] = 7145,
  [SMALL_STATE(266)] = 7164,
  [SMALL_STATE(267)] = 7183,
  [SMALL_STATE(268)] = 7202,
  [SMALL_STATE(269)] = 7221,
  [SMALL_STATE(270)] = 7240,
  [SMALL_STATE(271)] = 7259,
  [SMALL_STATE(272)] = 7278,
  [SMALL_STATE(273)] = 7297,
  [SMALL_STATE(274)] = 7316,
  [SMALL_STATE(275)] = 7335,
  [SMALL_STATE(276)] = 7354,
  [SMALL_STATE(277)] = 7373,
  [SMALL_STATE(278)] = 7392,
  [SMALL_STATE(279)] = 7411,
  [SMALL_STATE(280)] = 7430,
  [SMALL_STATE(281)] = 7449,
  [SMALL_STATE(282)] = 7468,
  [SMALL_STATE(283)] = 7487,
  [SMALL_STATE(284)] = 7506,
  [SMALL_STATE(285)] = 7525,
  [SMALL_STATE(286)] = 7544,
  [SMALL_STATE(287)] = 7563,
  [SMALL_STATE(288)] = 7582,
  [SMALL_STATE(289)] = 7601,
  [SMALL_STATE(290)] = 7620,
  [SMALL_STATE(291)] = 7639,
  [SMALL_STATE(292)] = 7658,
  [SMALL_STATE(293)] = 7677,
  [SMALL_STATE(294)] = 7696,
  [SMALL_STATE(295)] = 7715,
  [SMALL_STATE(296)] = 7734,
  [SMALL_STATE(297)] = 7753,
  [SMALL_STATE(298)] = 7772,
  [SMALL_STATE(299)] = 7791,
  [SMALL_STATE(300)] = 7810,
  [SMALL_STATE(301)] = 7829,
  [SMALL_STATE(302)] = 7848,
  [SMALL_STATE(303)] = 7867,
  [SMALL_STATE(304)] = 7886,
  [SMALL_STATE(305)] = 7905,
  [SMALL_STATE(306)] = 7924,
  [SMALL_STATE(307)] = 7943,
  [SMALL_STATE(308)] = 7962,
  [SMALL_STATE(309)] = 7981,
  [SMALL_STATE(310)] = 8000,
  [SMALL_STATE(311)] = 8019,
  [SMALL_STATE(312)] = 8038,
  [SMALL_STATE(313)] = 8059,
  [SMALL_STATE(314)] = 8078,
  [SMALL_STATE(315)] = 8097,
  [SMALL_STATE(316)] = 8116,
  [SMALL_STATE(317)] = 8135,
  [SMALL_STATE(318)] = 8154,
  [SMALL_STATE(319)] = 8173,
  [SMALL_STATE(320)] = 8192,
  [SMALL_STATE(321)] = 8211,
  [SMALL_STATE(322)] = 8230,
  [SMALL_STATE(323)] = 8249,
  [SMALL_STATE(324)] = 8268,
  [SMALL_STATE(325)] = 8287,
  [SMALL_STATE(326)] = 8306,
  [SMALL_STATE(327)] = 8325,
  [SMALL_STATE(328)] = 8344,
  [SMALL_STATE(329)] = 8363,
  [SMALL_STATE(330)] = 8382,
  [SMALL_STATE(331)] = 8401,
  [SMALL_STATE(332)] = 8420,
  [SMALL_STATE(333)] = 8439,
  [SMALL_STATE(334)] = 8458,
  [SMALL_STATE(335)] = 8477,
  [SMALL_STATE(336)] = 8496,
  [SMALL_STATE(337)] = 8515,
  [SMALL_STATE(338)] = 8534,
  [SMALL_STATE(339)] = 8553,
  [SMALL_STATE(340)] = 8572,
  [SMALL_STATE(341)] = 8591,
  [SMALL_STATE(342)] = 8610,
  [SMALL_STATE(343)] = 8629,
  [SMALL_STATE(344)] = 8648,
  [SMALL_STATE(345)] = 8667,
  [SMALL_STATE(346)] = 8686,
  [SMALL_STATE(347)] = 8705,
  [SMALL_STATE(348)] = 8724,
  [SMALL_STATE(349)] = 8743,
  [SMALL_STATE(350)] = 8762,
  [SMALL_STATE(351)] = 8781,
  [SMALL_STATE(352)] = 8800,
  [SMALL_STATE(353)] = 8819,
  [SMALL_STATE(354)] = 8838,
  [SMALL_STATE(355)] = 8857,
  [SMALL_STATE(356)] = 8876,
  [SMALL_STATE(357)] = 8895,
  [SMALL_STATE(358)] = 8914,
  [SMALL_STATE(359)] = 8933,
  [SMALL_STATE(360)] = 8952,
  [SMALL_STATE(361)] = 8971,
  [SMALL_STATE(362)] = 8990,
  [SMALL_STATE(363)] = 9009,
  [SMALL_STATE(364)] = 9028,
  [SMALL_STATE(365)] = 9047,
  [SMALL_STATE(366)] = 9066,
  [SMALL_STATE(367)] = 9085,
  [SMALL_STATE(368)] = 9104,
  [SMALL_STATE(369)] = 9123,
  [SMALL_STATE(370)] = 9142,
  [SMALL_STATE(371)] = 9161,
  [SMALL_STATE(372)] = 9180,
  [SMALL_STATE(373)] = 9199,
  [SMALL_STATE(374)] = 9218,
  [SMALL_STATE(375)] = 9237,
  [SMALL_STATE(376)] = 9256,
  [SMALL_STATE(377)] = 9275,
  [SMALL_STATE(378)] = 9294,
  [SMALL_STATE(379)] = 9313,
  [SMALL_STATE(380)] = 9332,
  [SMALL_STATE(381)] = 9351,
  [SMALL_STATE(382)] = 9370,
  [SMALL_STATE(383)] = 9389,
  [SMALL_STATE(384)] = 9408,
  [SMALL_STATE(385)] = 9427,
  [SMALL_STATE(386)] = 9446,
  [SMALL_STATE(387)] = 9465,
  [SMALL_STATE(388)] = 9484,
  [SMALL_STATE(389)] = 9503,
  [SMALL_STATE(390)] = 9522,
  [SMALL_STATE(391)] = 9541,
  [SMALL_STATE(392)] = 9560,
  [SMALL_STATE(393)] = 9579,
  [SMALL_STATE(394)] = 9598,
  [SMALL_STATE(395)] = 9617,
  [SMALL_STATE(396)] = 9636,
  [SMALL_STATE(397)] = 9655,
  [SMALL_STATE(398)] = 9674,
  [SMALL_STATE(399)] = 9693,
  [SMALL_STATE(400)] = 9712,
  [SMALL_STATE(401)] = 9731,
  [SMALL_STATE(402)] = 9750,
  [SMALL_STATE(403)] = 9769,
  [SMALL_STATE(404)] = 9788,
  [SMALL_STATE(405)] = 9807,
  [SMALL_STATE(406)] = 9826,
  [SMALL_STATE(407)] = 9845,
  [SMALL_STATE(408)] = 9864,
  [SMALL_STATE(409)] = 9883,
  [SMALL_STATE(410)] = 9902,
  [SMALL_STATE(411)] = 9921,
  [SMALL_STATE(412)] = 9940,
  [SMALL_STATE(413)] = 9959,
  [SMALL_STATE(414)] = 9978,
  [SMALL_STATE(415)] = 9997,
  [SMALL_STATE(416)] = 10016,
  [SMALL_STATE(417)] = 10035,
  [SMALL_STATE(418)] = 10054,
  [SMALL_STATE(419)] = 10073,
  [SMALL_STATE(420)] = 10092,
  [SMALL_STATE(421)] = 10111,
  [SMALL_STATE(422)] = 10130,
  [SMALL_STATE(423)] = 10149,
  [SMALL_STATE(424)] = 10168,
  [SMALL_STATE(425)] = 10187,
  [SMALL_STATE(426)] = 10206,
  [SMALL_STATE(427)] = 10236,
  [SMALL_STATE(428)] = 10254,
  [SMALL_STATE(429)] = 10279,
  [SMALL_STATE(430)] = 10304,
  [SMALL_STATE(431)] = 10329,
  [SMALL_STATE(432)] = 10354,
  [SMALL_STATE(433)] = 10379,
  [SMALL_STATE(434)] = 10404,
  [SMALL_STATE(435)] = 10429,
  [SMALL_STATE(436)] = 10454,
  [SMALL_STATE(437)] = 10479,
  [SMALL_STATE(438)] = 10507,
  [SMALL_STATE(439)] = 10533,
  [SMALL_STATE(440)] = 10556,
  [SMALL_STATE(441)] = 10576,
  [SMALL_STATE(442)] = 10596,
  [SMALL_STATE(443)] = 10622,
  [SMALL_STATE(444)] = 10642,
  [SMALL_STATE(445)] = 10662,
  [SMALL_STATE(446)] = 10684,
  [SMALL_STATE(447)] = 10718,
  [SMALL_STATE(448)] = 10737,
  [SMALL_STATE(449)] = 10760,
  [SMALL_STATE(450)] = 10783,
  [SMALL_STATE(451)] = 10802,
  [SMALL_STATE(452)] = 10819,
  [SMALL_STATE(453)] = 10836,
  [SMALL_STATE(454)] = 10867,
  [SMALL_STATE(455)] = 10883,
  [SMALL_STATE(456)] = 10899,
  [SMALL_STATE(457)] = 10915,
  [SMALL_STATE(458)] = 10931,
  [SMALL_STATE(459)] = 10947,
  [SMALL_STATE(460)] = 10963,
  [SMALL_STATE(461)] = 10979,
  [SMALL_STATE(462)] = 10995,
  [SMALL_STATE(463)] = 11011,
  [SMALL_STATE(464)] = 11027,
  [SMALL_STATE(465)] = 11043,
  [SMALL_STATE(466)] = 11059,
  [SMALL_STATE(467)] = 11079,
  [SMALL_STATE(468)] = 11100,
  [SMALL_STATE(469)] = 11121,
  [SMALL_STATE(470)] = 11142,
  [SMALL_STATE(471)] = 11163,
  [SMALL_STATE(472)] = 11184,
  [SMALL_STATE(473)] = 11206,
  [SMALL_STATE(474)] = 11226,
  [SMALL_STATE(475)] = 11248,
  [SMALL_STATE(476)] = 11270,
  [SMALL_STATE(477)] = 11284,
  [SMALL_STATE(478)] = 11306,
  [SMALL_STATE(479)] = 11326,
  [SMALL_STATE(480)] = 11340,
  [SMALL_STATE(481)] = 11358,
  [SMALL_STATE(482)] = 11377,
  [SMALL_STATE(483)] = 11396,
  [SMALL_STATE(484)] = 11415,
  [SMALL_STATE(485)] = 11432,
  [SMALL_STATE(486)] = 11447,
  [SMALL_STATE(487)] = 11458,
  [SMALL_STATE(488)] = 11477,
  [SMALL_STATE(489)] = 11496,
  [SMALL_STATE(490)] = 11510,
  [SMALL_STATE(491)] = 11524,
  [SMALL_STATE(492)] = 11540,
  [SMALL_STATE(493)] = 11554,
  [SMALL_STATE(494)] = 11570,
  [SMALL_STATE(495)] = 11582,
  [SMALL_STATE(496)] = 11590,
  [SMALL_STATE(497)] = 11606,
  [SMALL_STATE(498)] = 11618,
  [SMALL_STATE(499)] = 11634,
  [SMALL_STATE(500)] = 11650,
  [SMALL_STATE(501)] = 11658,
  [SMALL_STATE(502)] = 11674,
  [SMALL_STATE(503)] = 11690,
  [SMALL_STATE(504)] = 11706,
  [SMALL_STATE(505)] = 11714,
  [SMALL_STATE(506)] = 11726,
  [SMALL_STATE(507)] = 11734,
  [SMALL_STATE(508)] = 11746,
  [SMALL_STATE(509)] = 11760,
  [SMALL_STATE(510)] = 11776,
  [SMALL_STATE(511)] = 11784,
  [SMALL_STATE(512)] = 11792,
  [SMALL_STATE(513)] = 11800,
  [SMALL_STATE(514)] = 11816,
  [SMALL_STATE(515)] = 11827,
  [SMALL_STATE(516)] = 11840,
  [SMALL_STATE(517)] = 11853,
  [SMALL_STATE(518)] = 11866,
  [SMALL_STATE(519)] = 11877,
  [SMALL_STATE(520)] = 11888,
  [SMALL_STATE(521)] = 11901,
  [SMALL_STATE(522)] = 11914,
  [SMALL_STATE(523)] = 11927,
  [SMALL_STATE(524)] = 11940,
  [SMALL_STATE(525)] = 11953,
  [SMALL_STATE(526)] = 11966,
  [SMALL_STATE(527)] = 11979,
  [SMALL_STATE(528)] = 11992,
  [SMALL_STATE(529)] = 12005,
  [SMALL_STATE(530)] = 12018,
  [SMALL_STATE(531)] = 12031,
  [SMALL_STATE(532)] = 12044,
  [SMALL_STATE(533)] = 12057,
  [SMALL_STATE(534)] = 12070,
  [SMALL_STATE(535)] = 12083,
  [SMALL_STATE(536)] = 12092,
  [SMALL_STATE(537)] = 12105,
  [SMALL_STATE(538)] = 12118,
  [SMALL_STATE(539)] = 12131,
  [SMALL_STATE(540)] = 12144,
  [SMALL_STATE(541)] = 12157,
  [SMALL_STATE(542)] = 12170,
  [SMALL_STATE(543)] = 12183,
  [SMALL_STATE(544)] = 12196,
  [SMALL_STATE(545)] = 12209,
  [SMALL_STATE(546)] = 12222,
  [SMALL_STATE(547)] = 12235,
  [SMALL_STATE(548)] = 12248,
  [SMALL_STATE(549)] = 12261,
  [SMALL_STATE(550)] = 12272,
  [SMALL_STATE(551)] = 12279,
  [SMALL_STATE(552)] = 12292,
  [SMALL_STATE(553)] = 12305,
  [SMALL_STATE(554)] = 12318,
  [SMALL_STATE(555)] = 12325,
  [SMALL_STATE(556)] = 12338,
  [SMALL_STATE(557)] = 12351,
  [SMALL_STATE(558)] = 12364,
  [SMALL_STATE(559)] = 12377,
  [SMALL_STATE(560)] = 12390,
  [SMALL_STATE(561)] = 12403,
  [SMALL_STATE(562)] = 12416,
  [SMALL_STATE(563)] = 12429,
  [SMALL_STATE(564)] = 12442,
  [SMALL_STATE(565)] = 12455,
  [SMALL_STATE(566)] = 12468,
  [SMALL_STATE(567)] = 12481,
  [SMALL_STATE(568)] = 12494,
  [SMALL_STATE(569)] = 12507,
  [SMALL_STATE(570)] = 12517,
  [SMALL_STATE(571)] = 12527,
  [SMALL_STATE(572)] = 12537,
  [SMALL_STATE(573)] = 12547,
  [SMALL_STATE(574)] = 12557,
  [SMALL_STATE(575)] = 12567,
  [SMALL_STATE(576)] = 12575,
  [SMALL_STATE(577)] = 12585,
  [SMALL_STATE(578)] = 12595,
  [SMALL_STATE(579)] = 12603,
  [SMALL_STATE(580)] = 12613,
  [SMALL_STATE(581)] = 12623,
  [SMALL_STATE(582)] = 12633,
  [SMALL_STATE(583)] = 12643,
  [SMALL_STATE(584)] = 12653,
  [SMALL_STATE(585)] = 12663,
  [SMALL_STATE(586)] = 12673,
  [SMALL_STATE(587)] = 12683,
  [SMALL_STATE(588)] = 12693,
  [SMALL_STATE(589)] = 12703,
  [SMALL_STATE(590)] = 12713,
  [SMALL_STATE(591)] = 12723,
  [SMALL_STATE(592)] = 12733,
  [SMALL_STATE(593)] = 12743,
  [SMALL_STATE(594)] = 12753,
  [SMALL_STATE(595)] = 12763,
  [SMALL_STATE(596)] = 12773,
  [SMALL_STATE(597)] = 12783,
  [SMALL_STATE(598)] = 12793,
  [SMALL_STATE(599)] = 12803,
  [SMALL_STATE(600)] = 12813,
  [SMALL_STATE(601)] = 12823,
  [SMALL_STATE(602)] = 12833,
  [SMALL_STATE(603)] = 12843,
  [SMALL_STATE(604)] = 12853,
  [SMALL_STATE(605)] = 12863,
  [SMALL_STATE(606)] = 12873,
  [SMALL_STATE(607)] = 12883,
  [SMALL_STATE(608)] = 12893,
  [SMALL_STATE(609)] = 12899,
  [SMALL_STATE(610)] = 12909,
  [SMALL_STATE(611)] = 12919,
  [SMALL_STATE(612)] = 12929,
  [SMALL_STATE(613)] = 12939,
  [SMALL_STATE(614)] = 12949,
  [SMALL_STATE(615)] = 12959,
  [SMALL_STATE(616)] = 12969,
  [SMALL_STATE(617)] = 12979,
  [SMALL_STATE(618)] = 12989,
  [SMALL_STATE(619)] = 12999,
  [SMALL_STATE(620)] = 13009,
  [SMALL_STATE(621)] = 13019,
  [SMALL_STATE(622)] = 13029,
  [SMALL_STATE(623)] = 13039,
  [SMALL_STATE(624)] = 13049,
  [SMALL_STATE(625)] = 13059,
  [SMALL_STATE(626)] = 13069,
  [SMALL_STATE(627)] = 13079,
  [SMALL_STATE(628)] = 13089,
  [SMALL_STATE(629)] = 13097,
  [SMALL_STATE(630)] = 13107,
  [SMALL_STATE(631)] = 13117,
  [SMALL_STATE(632)] = 13127,
  [SMALL_STATE(633)] = 13137,
  [SMALL_STATE(634)] = 13147,
  [SMALL_STATE(635)] = 13157,
  [SMALL_STATE(636)] = 13167,
  [SMALL_STATE(637)] = 13177,
  [SMALL_STATE(638)] = 13187,
  [SMALL_STATE(639)] = 13197,
  [SMALL_STATE(640)] = 13207,
  [SMALL_STATE(641)] = 13217,
  [SMALL_STATE(642)] = 13227,
  [SMALL_STATE(643)] = 13237,
  [SMALL_STATE(644)] = 13247,
  [SMALL_STATE(645)] = 13257,
  [SMALL_STATE(646)] = 13267,
  [SMALL_STATE(647)] = 13277,
  [SMALL_STATE(648)] = 13287,
  [SMALL_STATE(649)] = 13297,
  [SMALL_STATE(650)] = 13307,
  [SMALL_STATE(651)] = 13317,
  [SMALL_STATE(652)] = 13327,
  [SMALL_STATE(653)] = 13337,
  [SMALL_STATE(654)] = 13347,
  [SMALL_STATE(655)] = 13357,
  [SMALL_STATE(656)] = 13365,
  [SMALL_STATE(657)] = 13375,
  [SMALL_STATE(658)] = 13385,
  [SMALL_STATE(659)] = 13395,
  [SMALL_STATE(660)] = 13405,
  [SMALL_STATE(661)] = 13415,
  [SMALL_STATE(662)] = 13425,
  [SMALL_STATE(663)] = 13435,
  [SMALL_STATE(664)] = 13445,
  [SMALL_STATE(665)] = 13455,
  [SMALL_STATE(666)] = 13465,
  [SMALL_STATE(667)] = 13475,
  [SMALL_STATE(668)] = 13485,
  [SMALL_STATE(669)] = 13495,
  [SMALL_STATE(670)] = 13505,
  [SMALL_STATE(671)] = 13515,
  [SMALL_STATE(672)] = 13525,
  [SMALL_STATE(673)] = 13533,
  [SMALL_STATE(674)] = 13543,
  [SMALL_STATE(675)] = 13553,
  [SMALL_STATE(676)] = 13563,
  [SMALL_STATE(677)] = 13573,
  [SMALL_STATE(678)] = 13583,
  [SMALL_STATE(679)] = 13593,
  [SMALL_STATE(680)] = 13603,
  [SMALL_STATE(681)] = 13609,
  [SMALL_STATE(682)] = 13619,
  [SMALL_STATE(683)] = 13629,
  [SMALL_STATE(684)] = 13639,
  [SMALL_STATE(685)] = 13649,
  [SMALL_STATE(686)] = 13659,
  [SMALL_STATE(687)] = 13669,
  [SMALL_STATE(688)] = 13679,
  [SMALL_STATE(689)] = 13689,
  [SMALL_STATE(690)] = 13699,
  [SMALL_STATE(691)] = 13709,
  [SMALL_STATE(692)] = 13719,
  [SMALL_STATE(693)] = 13729,
  [SMALL_STATE(694)] = 13739,
  [SMALL_STATE(695)] = 13749,
  [SMALL_STATE(696)] = 13759,
  [SMALL_STATE(697)] = 13769,
  [SMALL_STATE(698)] = 13779,
  [SMALL_STATE(699)] = 13789,
  [SMALL_STATE(700)] = 13799,
  [SMALL_STATE(701)] = 13809,
  [SMALL_STATE(702)] = 13819,
  [SMALL_STATE(703)] = 13829,
  [SMALL_STATE(704)] = 13839,
  [SMALL_STATE(705)] = 13849,
  [SMALL_STATE(706)] = 13859,
  [SMALL_STATE(707)] = 13869,
  [SMALL_STATE(708)] = 13879,
  [SMALL_STATE(709)] = 13889,
  [SMALL_STATE(710)] = 13899,
  [SMALL_STATE(711)] = 13909,
  [SMALL_STATE(712)] = 13919,
  [SMALL_STATE(713)] = 13929,
  [SMALL_STATE(714)] = 13939,
  [SMALL_STATE(715)] = 13949,
  [SMALL_STATE(716)] = 13959,
  [SMALL_STATE(717)] = 13969,
  [SMALL_STATE(718)] = 13979,
  [SMALL_STATE(719)] = 13986,
  [SMALL_STATE(720)] = 13993,
  [SMALL_STATE(721)] = 14000,
  [SMALL_STATE(722)] = 14005,
  [SMALL_STATE(723)] = 14012,
  [SMALL_STATE(724)] = 14019,
  [SMALL_STATE(725)] = 14026,
  [SMALL_STATE(726)] = 14033,
  [SMALL_STATE(727)] = 14040,
  [SMALL_STATE(728)] = 14047,
  [SMALL_STATE(729)] = 14054,
  [SMALL_STATE(730)] = 14061,
  [SMALL_STATE(731)] = 14068,
  [SMALL_STATE(732)] = 14075,
  [SMALL_STATE(733)] = 14082,
  [SMALL_STATE(734)] = 14089,
  [SMALL_STATE(735)] = 14096,
  [SMALL_STATE(736)] = 14103,
  [SMALL_STATE(737)] = 14110,
  [SMALL_STATE(738)] = 14117,
  [SMALL_STATE(739)] = 14124,
  [SMALL_STATE(740)] = 14131,
  [SMALL_STATE(741)] = 14136,
  [SMALL_STATE(742)] = 14141,
  [SMALL_STATE(743)] = 14148,
  [SMALL_STATE(744)] = 14155,
  [SMALL_STATE(745)] = 14160,
  [SMALL_STATE(746)] = 14167,
  [SMALL_STATE(747)] = 14174,
  [SMALL_STATE(748)] = 14181,
  [SMALL_STATE(749)] = 14188,
  [SMALL_STATE(750)] = 14195,
  [SMALL_STATE(751)] = 14200,
  [SMALL_STATE(752)] = 14207,
  [SMALL_STATE(753)] = 14212,
  [SMALL_STATE(754)] = 14219,
  [SMALL_STATE(755)] = 14226,
  [SMALL_STATE(756)] = 14233,
  [SMALL_STATE(757)] = 14240,
  [SMALL_STATE(758)] = 14247,
  [SMALL_STATE(759)] = 14254,
  [SMALL_STATE(760)] = 14259,
  [SMALL_STATE(761)] = 14266,
  [SMALL_STATE(762)] = 14271,
  [SMALL_STATE(763)] = 14278,
  [SMALL_STATE(764)] = 14285,
  [SMALL_STATE(765)] = 14290,
  [SMALL_STATE(766)] = 14297,
  [SMALL_STATE(767)] = 14304,
  [SMALL_STATE(768)] = 14309,
  [SMALL_STATE(769)] = 14316,
  [SMALL_STATE(770)] = 14323,
  [SMALL_STATE(771)] = 14330,
  [SMALL_STATE(772)] = 14337,
  [SMALL_STATE(773)] = 14344,
  [SMALL_STATE(774)] = 14351,
  [SMALL_STATE(775)] = 14358,
  [SMALL_STATE(776)] = 14365,
  [SMALL_STATE(777)] = 14370,
  [SMALL_STATE(778)] = 14377,
  [SMALL_STATE(779)] = 14384,
  [SMALL_STATE(780)] = 14389,
  [SMALL_STATE(781)] = 14394,
  [SMALL_STATE(782)] = 14401,
  [SMALL_STATE(783)] = 14406,
  [SMALL_STATE(784)] = 14411,
  [SMALL_STATE(785)] = 14418,
  [SMALL_STATE(786)] = 14425,
  [SMALL_STATE(787)] = 14430,
  [SMALL_STATE(788)] = 14437,
  [SMALL_STATE(789)] = 14442,
  [SMALL_STATE(790)] = 14449,
  [SMALL_STATE(791)] = 14456,
  [SMALL_STATE(792)] = 14461,
  [SMALL_STATE(793)] = 14466,
  [SMALL_STATE(794)] = 14473,
  [SMALL_STATE(795)] = 14480,
  [SMALL_STATE(796)] = 14485,
  [SMALL_STATE(797)] = 14492,
  [SMALL_STATE(798)] = 14497,
  [SMALL_STATE(799)] = 14504,
  [SMALL_STATE(800)] = 14509,
  [SMALL_STATE(801)] = 14516,
  [SMALL_STATE(802)] = 14523,
  [SMALL_STATE(803)] = 14530,
  [SMALL_STATE(804)] = 14535,
  [SMALL_STATE(805)] = 14542,
  [SMALL_STATE(806)] = 14549,
  [SMALL_STATE(807)] = 14554,
  [SMALL_STATE(808)] = 14561,
  [SMALL_STATE(809)] = 14568,
  [SMALL_STATE(810)] = 14573,
  [SMALL_STATE(811)] = 14578,
  [SMALL_STATE(812)] = 14585,
  [SMALL_STATE(813)] = 14592,
  [SMALL_STATE(814)] = 14599,
  [SMALL_STATE(815)] = 14606,
  [SMALL_STATE(816)] = 14613,
  [SMALL_STATE(817)] = 14620,
  [SMALL_STATE(818)] = 14627,
  [SMALL_STATE(819)] = 14634,
  [SMALL_STATE(820)] = 14641,
  [SMALL_STATE(821)] = 14648,
  [SMALL_STATE(822)] = 14655,
  [SMALL_STATE(823)] = 14662,
  [SMALL_STATE(824)] = 14669,
  [SMALL_STATE(825)] = 14674,
  [SMALL_STATE(826)] = 14681,
  [SMALL_STATE(827)] = 14688,
  [SMALL_STATE(828)] = 14693,
  [SMALL_STATE(829)] = 14698,
  [SMALL_STATE(830)] = 14705,
  [SMALL_STATE(831)] = 14712,
  [SMALL_STATE(832)] = 14719,
  [SMALL_STATE(833)] = 14726,
  [SMALL_STATE(834)] = 14733,
  [SMALL_STATE(835)] = 14740,
  [SMALL_STATE(836)] = 14747,
  [SMALL_STATE(837)] = 14754,
  [SMALL_STATE(838)] = 14759,
  [SMALL_STATE(839)] = 14766,
  [SMALL_STATE(840)] = 14773,
  [SMALL_STATE(841)] = 14780,
  [SMALL_STATE(842)] = 14787,
  [SMALL_STATE(843)] = 14794,
  [SMALL_STATE(844)] = 14799,
  [SMALL_STATE(845)] = 14806,
  [SMALL_STATE(846)] = 14813,
  [SMALL_STATE(847)] = 14820,
  [SMALL_STATE(848)] = 14827,
  [SMALL_STATE(849)] = 14834,
  [SMALL_STATE(850)] = 14841,
  [SMALL_STATE(851)] = 14846,
  [SMALL_STATE(852)] = 14853,
  [SMALL_STATE(853)] = 14860,
  [SMALL_STATE(854)] = 14867,
  [SMALL_STATE(855)] = 14874,
  [SMALL_STATE(856)] = 14881,
  [SMALL_STATE(857)] = 14886,
  [SMALL_STATE(858)] = 14891,
  [SMALL_STATE(859)] = 14898,
  [SMALL_STATE(860)] = 14905,
  [SMALL_STATE(861)] = 14912,
  [SMALL_STATE(862)] = 14919,
  [SMALL_STATE(863)] = 14926,
  [SMALL_STATE(864)] = 14933,
  [SMALL_STATE(865)] = 14940,
  [SMALL_STATE(866)] = 14947,
  [SMALL_STATE(867)] = 14954,
  [SMALL_STATE(868)] = 14961,
  [SMALL_STATE(869)] = 14968,
  [SMALL_STATE(870)] = 14975,
  [SMALL_STATE(871)] = 14979,
  [SMALL_STATE(872)] = 14983,
  [SMALL_STATE(873)] = 14987,
  [SMALL_STATE(874)] = 14991,
  [SMALL_STATE(875)] = 14995,
  [SMALL_STATE(876)] = 14999,
  [SMALL_STATE(877)] = 15003,
  [SMALL_STATE(878)] = 15007,
  [SMALL_STATE(879)] = 15011,
  [SMALL_STATE(880)] = 15015,
  [SMALL_STATE(881)] = 15019,
  [SMALL_STATE(882)] = 15023,
  [SMALL_STATE(883)] = 15027,
  [SMALL_STATE(884)] = 15031,
  [SMALL_STATE(885)] = 15035,
  [SMALL_STATE(886)] = 15039,
  [SMALL_STATE(887)] = 15043,
  [SMALL_STATE(888)] = 15047,
  [SMALL_STATE(889)] = 15051,
  [SMALL_STATE(890)] = 15055,
  [SMALL_STATE(891)] = 15059,
  [SMALL_STATE(892)] = 15063,
  [SMALL_STATE(893)] = 15067,
  [SMALL_STATE(894)] = 15071,
  [SMALL_STATE(895)] = 15075,
  [SMALL_STATE(896)] = 15079,
  [SMALL_STATE(897)] = 15083,
  [SMALL_STATE(898)] = 15087,
  [SMALL_STATE(899)] = 15091,
  [SMALL_STATE(900)] = 15095,
  [SMALL_STATE(901)] = 15099,
  [SMALL_STATE(902)] = 15103,
  [SMALL_STATE(903)] = 15107,
  [SMALL_STATE(904)] = 15111,
  [SMALL_STATE(905)] = 15115,
  [SMALL_STATE(906)] = 15119,
  [SMALL_STATE(907)] = 15123,
  [SMALL_STATE(908)] = 15127,
  [SMALL_STATE(909)] = 15131,
  [SMALL_STATE(910)] = 15135,
  [SMALL_STATE(911)] = 15139,
  [SMALL_STATE(912)] = 15143,
  [SMALL_STATE(913)] = 15147,
  [SMALL_STATE(914)] = 15151,
  [SMALL_STATE(915)] = 15155,
  [SMALL_STATE(916)] = 15159,
  [SMALL_STATE(917)] = 15163,
  [SMALL_STATE(918)] = 15167,
  [SMALL_STATE(919)] = 15171,
  [SMALL_STATE(920)] = 15175,
  [SMALL_STATE(921)] = 15179,
  [SMALL_STATE(922)] = 15183,
  [SMALL_STATE(923)] = 15187,
  [SMALL_STATE(924)] = 15191,
  [SMALL_STATE(925)] = 15195,
  [SMALL_STATE(926)] = 15199,
  [SMALL_STATE(927)] = 15203,
  [SMALL_STATE(928)] = 15207,
  [SMALL_STATE(929)] = 15211,
  [SMALL_STATE(930)] = 15215,
  [SMALL_STATE(931)] = 15219,
  [SMALL_STATE(932)] = 15223,
  [SMALL_STATE(933)] = 15227,
  [SMALL_STATE(934)] = 15231,
  [SMALL_STATE(935)] = 15235,
  [SMALL_STATE(936)] = 15239,
  [SMALL_STATE(937)] = 15243,
  [SMALL_STATE(938)] = 15247,
  [SMALL_STATE(939)] = 15251,
  [SMALL_STATE(940)] = 15255,
  [SMALL_STATE(941)] = 15259,
  [SMALL_STATE(942)] = 15263,
  [SMALL_STATE(943)] = 15267,
  [SMALL_STATE(944)] = 15271,
  [SMALL_STATE(945)] = 15275,
  [SMALL_STATE(946)] = 15279,
  [SMALL_STATE(947)] = 15283,
  [SMALL_STATE(948)] = 15287,
  [SMALL_STATE(949)] = 15291,
  [SMALL_STATE(950)] = 15295,
  [SMALL_STATE(951)] = 15299,
  [SMALL_STATE(952)] = 15303,
  [SMALL_STATE(953)] = 15307,
  [SMALL_STATE(954)] = 15311,
  [SMALL_STATE(955)] = 15315,
  [SMALL_STATE(956)] = 15319,
  [SMALL_STATE(957)] = 15323,
  [SMALL_STATE(958)] = 15327,
  [SMALL_STATE(959)] = 15331,
  [SMALL_STATE(960)] = 15335,
  [SMALL_STATE(961)] = 15339,
  [SMALL_STATE(962)] = 15343,
  [SMALL_STATE(963)] = 15347,
  [SMALL_STATE(964)] = 15351,
  [SMALL_STATE(965)] = 15355,
  [SMALL_STATE(966)] = 15359,
  [SMALL_STATE(967)] = 15363,
  [SMALL_STATE(968)] = 15367,
  [SMALL_STATE(969)] = 15371,
  [SMALL_STATE(970)] = 15375,
  [SMALL_STATE(971)] = 15379,
  [SMALL_STATE(972)] = 15383,
  [SMALL_STATE(973)] = 15387,
  [SMALL_STATE(974)] = 15391,
  [SMALL_STATE(975)] = 15395,
  [SMALL_STATE(976)] = 15399,
  [SMALL_STATE(977)] = 15403,
  [SMALL_STATE(978)] = 15407,
  [SMALL_STATE(979)] = 15411,
  [SMALL_STATE(980)] = 15415,
  [SMALL_STATE(981)] = 15419,
  [SMALL_STATE(982)] = 15423,
  [SMALL_STATE(983)] = 15427,
  [SMALL_STATE(984)] = 15431,
  [SMALL_STATE(985)] = 15435,
  [SMALL_STATE(986)] = 15439,
  [SMALL_STATE(987)] = 15443,
  [SMALL_STATE(988)] = 15447,
  [SMALL_STATE(989)] = 15451,
  [SMALL_STATE(990)] = 15455,
  [SMALL_STATE(991)] = 15459,
  [SMALL_STATE(992)] = 15463,
  [SMALL_STATE(993)] = 15467,
  [SMALL_STATE(994)] = 15471,
  [SMALL_STATE(995)] = 15475,
  [SMALL_STATE(996)] = 15479,
  [SMALL_STATE(997)] = 15483,
  [SMALL_STATE(998)] = 15487,
  [SMALL_STATE(999)] = 15491,
  [SMALL_STATE(1000)] = 15495,
  [SMALL_STATE(1001)] = 15499,
  [SMALL_STATE(1002)] = 15503,
  [SMALL_STATE(1003)] = 15507,
  [SMALL_STATE(1004)] = 15511,
  [SMALL_STATE(1005)] = 15515,
  [SMALL_STATE(1006)] = 15519,
  [SMALL_STATE(1007)] = 15523,
  [SMALL_STATE(1008)] = 15527,
  [SMALL_STATE(1009)] = 15531,
  [SMALL_STATE(1010)] = 15535,
  [SMALL_STATE(1011)] = 15539,
  [SMALL_STATE(1012)] = 15543,
  [SMALL_STATE(1013)] = 15547,
  [SMALL_STATE(1014)] = 15551,
  [SMALL_STATE(1015)] = 15555,
  [SMALL_STATE(1016)] = 15559,
  [SMALL_STATE(1017)] = 15563,
  [SMALL_STATE(1018)] = 15567,
  [SMALL_STATE(1019)] = 15571,
  [SMALL_STATE(1020)] = 15575,
  [SMALL_STATE(1021)] = 15579,
  [SMALL_STATE(1022)] = 15583,
  [SMALL_STATE(1023)] = 15587,
  [SMALL_STATE(1024)] = 15591,
  [SMALL_STATE(1025)] = 15595,
  [SMALL_STATE(1026)] = 15599,
  [SMALL_STATE(1027)] = 15603,
  [SMALL_STATE(1028)] = 15607,
  [SMALL_STATE(1029)] = 15611,
  [SMALL_STATE(1030)] = 15615,
  [SMALL_STATE(1031)] = 15619,
  [SMALL_STATE(1032)] = 15623,
  [SMALL_STATE(1033)] = 15627,
  [SMALL_STATE(1034)] = 15631,
  [SMALL_STATE(1035)] = 15635,
  [SMALL_STATE(1036)] = 15639,
  [SMALL_STATE(1037)] = 15643,
  [SMALL_STATE(1038)] = 15647,
  [SMALL_STATE(1039)] = 15651,
  [SMALL_STATE(1040)] = 15655,
  [SMALL_STATE(1041)] = 15659,
  [SMALL_STATE(1042)] = 15663,
  [SMALL_STATE(1043)] = 15667,
  [SMALL_STATE(1044)] = 15671,
  [SMALL_STATE(1045)] = 15675,
  [SMALL_STATE(1046)] = 15679,
  [SMALL_STATE(1047)] = 15683,
  [SMALL_STATE(1048)] = 15687,
  [SMALL_STATE(1049)] = 15691,
  [SMALL_STATE(1050)] = 15695,
  [SMALL_STATE(1051)] = 15699,
  [SMALL_STATE(1052)] = 15703,
  [SMALL_STATE(1053)] = 15707,
  [SMALL_STATE(1054)] = 15711,
  [SMALL_STATE(1055)] = 15715,
  [SMALL_STATE(1056)] = 15719,
  [SMALL_STATE(1057)] = 15723,
  [SMALL_STATE(1058)] = 15727,
  [SMALL_STATE(1059)] = 15731,
  [SMALL_STATE(1060)] = 15735,
  [SMALL_STATE(1061)] = 15739,
  [SMALL_STATE(1062)] = 15743,
  [SMALL_STATE(1063)] = 15747,
  [SMALL_STATE(1064)] = 15751,
  [SMALL_STATE(1065)] = 15755,
  [SMALL_STATE(1066)] = 15759,
  [SMALL_STATE(1067)] = 15763,
  [SMALL_STATE(1068)] = 15767,
  [SMALL_STATE(1069)] = 15771,
  [SMALL_STATE(1070)] = 15775,
  [SMALL_STATE(1071)] = 15779,
  [SMALL_STATE(1072)] = 15783,
  [SMALL_STATE(1073)] = 15787,
  [SMALL_STATE(1074)] = 15791,
  [SMALL_STATE(1075)] = 15795,
  [SMALL_STATE(1076)] = 15799,
  [SMALL_STATE(1077)] = 15803,
  [SMALL_STATE(1078)] = 15807,
  [SMALL_STATE(1079)] = 15811,
  [SMALL_STATE(1080)] = 15815,
  [SMALL_STATE(1081)] = 15819,
  [SMALL_STATE(1082)] = 15823,
  [SMALL_STATE(1083)] = 15827,
  [SMALL_STATE(1084)] = 15831,
  [SMALL_STATE(1085)] = 15835,
  [SMALL_STATE(1086)] = 15839,
  [SMALL_STATE(1087)] = 15843,
  [SMALL_STATE(1088)] = 15847,
  [SMALL_STATE(1089)] = 15851,
  [SMALL_STATE(1090)] = 15855,
  [SMALL_STATE(1091)] = 15859,
  [SMALL_STATE(1092)] = 15863,
  [SMALL_STATE(1093)] = 15867,
  [SMALL_STATE(1094)] = 15871,
  [SMALL_STATE(1095)] = 15875,
  [SMALL_STATE(1096)] = 15879,
  [SMALL_STATE(1097)] = 15883,
  [SMALL_STATE(1098)] = 15887,
  [SMALL_STATE(1099)] = 15891,
  [SMALL_STATE(1100)] = 15895,
  [SMALL_STATE(1101)] = 15899,
  [SMALL_STATE(1102)] = 15903,
  [SMALL_STATE(1103)] = 15907,
  [SMALL_STATE(1104)] = 15911,
  [SMALL_STATE(1105)] = 15915,
  [SMALL_STATE(1106)] = 15919,
  [SMALL_STATE(1107)] = 15923,
  [SMALL_STATE(1108)] = 15927,
  [SMALL_STATE(1109)] = 15931,
  [SMALL_STATE(1110)] = 15935,
  [SMALL_STATE(1111)] = 15939,
  [SMALL_STATE(1112)] = 15943,
  [SMALL_STATE(1113)] = 15947,
  [SMALL_STATE(1114)] = 15951,
  [SMALL_STATE(1115)] = 15955,
  [SMALL_STATE(1116)] = 15959,
  [SMALL_STATE(1117)] = 15963,
  [SMALL_STATE(1118)] = 15967,
  [SMALL_STATE(1119)] = 15971,
  [SMALL_STATE(1120)] = 15975,
  [SMALL_STATE(1121)] = 15979,
  [SMALL_STATE(1122)] = 15983,
  [SMALL_STATE(1123)] = 15987,
  [SMALL_STATE(1124)] = 15991,
  [SMALL_STATE(1125)] = 15995,
  [SMALL_STATE(1126)] = 15999,
  [SMALL_STATE(1127)] = 16003,
  [SMALL_STATE(1128)] = 16007,
  [SMALL_STATE(1129)] = 16011,
  [SMALL_STATE(1130)] = 16015,
  [SMALL_STATE(1131)] = 16019,
  [SMALL_STATE(1132)] = 16023,
  [SMALL_STATE(1133)] = 16027,
  [SMALL_STATE(1134)] = 16031,
  [SMALL_STATE(1135)] = 16035,
  [SMALL_STATE(1136)] = 16039,
  [SMALL_STATE(1137)] = 16043,
  [SMALL_STATE(1138)] = 16047,
  [SMALL_STATE(1139)] = 16051,
  [SMALL_STATE(1140)] = 16055,
  [SMALL_STATE(1141)] = 16059,
  [SMALL_STATE(1142)] = 16063,
  [SMALL_STATE(1143)] = 16067,
  [SMALL_STATE(1144)] = 16071,
  [SMALL_STATE(1145)] = 16075,
  [SMALL_STATE(1146)] = 16079,
  [SMALL_STATE(1147)] = 16083,
  [SMALL_STATE(1148)] = 16087,
  [SMALL_STATE(1149)] = 16091,
  [SMALL_STATE(1150)] = 16095,
  [SMALL_STATE(1151)] = 16099,
  [SMALL_STATE(1152)] = 16103,
  [SMALL_STATE(1153)] = 16107,
  [SMALL_STATE(1154)] = 16111,
  [SMALL_STATE(1155)] = 16115,
  [SMALL_STATE(1156)] = 16119,
  [SMALL_STATE(1157)] = 16123,
  [SMALL_STATE(1158)] = 16127,
  [SMALL_STATE(1159)] = 16131,
  [SMALL_STATE(1160)] = 16135,
  [SMALL_STATE(1161)] = 16139,
  [SMALL_STATE(1162)] = 16143,
  [SMALL_STATE(1163)] = 16147,
  [SMALL_STATE(1164)] = 16151,
  [SMALL_STATE(1165)] = 16155,
  [SMALL_STATE(1166)] = 16159,
  [SMALL_STATE(1167)] = 16163,
  [SMALL_STATE(1168)] = 16167,
  [SMALL_STATE(1169)] = 16171,
  [SMALL_STATE(1170)] = 16175,
  [SMALL_STATE(1171)] = 16179,
  [SMALL_STATE(1172)] = 16183,
  [SMALL_STATE(1173)] = 16187,
  [SMALL_STATE(1174)] = 16191,
  [SMALL_STATE(1175)] = 16195,
  [SMALL_STATE(1176)] = 16199,
  [SMALL_STATE(1177)] = 16203,
  [SMALL_STATE(1178)] = 16207,
  [SMALL_STATE(1179)] = 16211,
  [SMALL_STATE(1180)] = 16215,
  [SMALL_STATE(1181)] = 16219,
  [SMALL_STATE(1182)] = 16223,
  [SMALL_STATE(1183)] = 16227,
  [SMALL_STATE(1184)] = 16231,
  [SMALL_STATE(1185)] = 16235,
  [SMALL_STATE(1186)] = 16239,
  [SMALL_STATE(1187)] = 16243,
  [SMALL_STATE(1188)] = 16247,
  [SMALL_STATE(1189)] = 16251,
  [SMALL_STATE(1190)] = 16255,
  [SMALL_STATE(1191)] = 16259,
  [SMALL_STATE(1192)] = 16263,
  [SMALL_STATE(1193)] = 16267,
  [SMALL_STATE(1194)] = 16271,
  [SMALL_STATE(1195)] = 16275,
  [SMALL_STATE(1196)] = 16279,
  [SMALL_STATE(1197)] = 16283,
  [SMALL_STATE(1198)] = 16287,
  [SMALL_STATE(1199)] = 16291,
  [SMALL_STATE(1200)] = 16295,
  [SMALL_STATE(1201)] = 16299,
  [SMALL_STATE(1202)] = 16303,
  [SMALL_STATE(1203)] = 16307,
  [SMALL_STATE(1204)] = 16311,
  [SMALL_STATE(1205)] = 16315,
  [SMALL_STATE(1206)] = 16319,
  [SMALL_STATE(1207)] = 16323,
  [SMALL_STATE(1208)] = 16327,
  [SMALL_STATE(1209)] = 16331,
  [SMALL_STATE(1210)] = 16335,
  [SMALL_STATE(1211)] = 16339,
  [SMALL_STATE(1212)] = 16343,
  [SMALL_STATE(1213)] = 16347,
  [SMALL_STATE(1214)] = 16351,
  [SMALL_STATE(1215)] = 16355,
  [SMALL_STATE(1216)] = 16359,
  [SMALL_STATE(1217)] = 16363,
  [SMALL_STATE(1218)] = 16367,
  [SMALL_STATE(1219)] = 16371,
  [SMALL_STATE(1220)] = 16375,
  [SMALL_STATE(1221)] = 16379,
  [SMALL_STATE(1222)] = 16383,
  [SMALL_STATE(1223)] = 16387,
  [SMALL_STATE(1224)] = 16391,
  [SMALL_STATE(1225)] = 16395,
  [SMALL_STATE(1226)] = 16399,
  [SMALL_STATE(1227)] = 16403,
  [SMALL_STATE(1228)] = 16407,
  [SMALL_STATE(1229)] = 16411,
  [SMALL_STATE(1230)] = 16415,
  [SMALL_STATE(1231)] = 16419,
  [SMALL_STATE(1232)] = 16423,
  [SMALL_STATE(1233)] = 16427,
  [SMALL_STATE(1234)] = 16431,
  [SMALL_STATE(1235)] = 16435,
  [SMALL_STATE(1236)] = 16439,
  [SMALL_STATE(1237)] = 16443,
  [SMALL_STATE(1238)] = 16447,
  [SMALL_STATE(1239)] = 16451,
  [SMALL_STATE(1240)] = 16455,
  [SMALL_STATE(1241)] = 16459,
  [SMALL_STATE(1242)] = 16463,
  [SMALL_STATE(1243)] = 16467,
  [SMALL_STATE(1244)] = 16471,
  [SMALL_STATE(1245)] = 16475,
  [SMALL_STATE(1246)] = 16479,
  [SMALL_STATE(1247)] = 16483,
  [SMALL_STATE(1248)] = 16487,
  [SMALL_STATE(1249)] = 16491,
  [SMALL_STATE(1250)] = 16495,
  [SMALL_STATE(1251)] = 16499,
  [SMALL_STATE(1252)] = 16503,
  [SMALL_STATE(1253)] = 16507,
  [SMALL_STATE(1254)] = 16511,
  [SMALL_STATE(1255)] = 16515,
  [SMALL_STATE(1256)] = 16519,
  [SMALL_STATE(1257)] = 16523,
  [SMALL_STATE(1258)] = 16527,
  [SMALL_STATE(1259)] = 16531,
  [SMALL_STATE(1260)] = 16535,
  [SMALL_STATE(1261)] = 16539,
  [SMALL_STATE(1262)] = 16543,
  [SMALL_STATE(1263)] = 16547,
  [SMALL_STATE(1264)] = 16551,
  [SMALL_STATE(1265)] = 16555,
  [SMALL_STATE(1266)] = 16559,
  [SMALL_STATE(1267)] = 16563,
  [SMALL_STATE(1268)] = 16567,
  [SMALL_STATE(1269)] = 16571,
  [SMALL_STATE(1270)] = 16575,
  [SMALL_STATE(1271)] = 16579,
  [SMALL_STATE(1272)] = 16583,
  [SMALL_STATE(1273)] = 16587,
  [SMALL_STATE(1274)] = 16591,
  [SMALL_STATE(1275)] = 16595,
  [SMALL_STATE(1276)] = 16599,
  [SMALL_STATE(1277)] = 16603,
  [SMALL_STATE(1278)] = 16607,
  [SMALL_STATE(1279)] = 16611,
  [SMALL_STATE(1280)] = 16615,
  [SMALL_STATE(1281)] = 16619,
  [SMALL_STATE(1282)] = 16623,
  [SMALL_STATE(1283)] = 16627,
  [SMALL_STATE(1284)] = 16631,
  [SMALL_STATE(1285)] = 16635,
  [SMALL_STATE(1286)] = 16639,
  [SMALL_STATE(1287)] = 16643,
  [SMALL_STATE(1288)] = 16647,
  [SMALL_STATE(1289)] = 16651,
  [SMALL_STATE(1290)] = 16655,
  [SMALL_STATE(1291)] = 16659,
  [SMALL_STATE(1292)] = 16663,
  [SMALL_STATE(1293)] = 16667,
  [SMALL_STATE(1294)] = 16671,
  [SMALL_STATE(1295)] = 16675,
  [SMALL_STATE(1296)] = 16679,
  [SMALL_STATE(1297)] = 16683,
  [SMALL_STATE(1298)] = 16687,
  [SMALL_STATE(1299)] = 16691,
  [SMALL_STATE(1300)] = 16695,
  [SMALL_STATE(1301)] = 16699,
  [SMALL_STATE(1302)] = 16703,
  [SMALL_STATE(1303)] = 16707,
  [SMALL_STATE(1304)] = 16711,
  [SMALL_STATE(1305)] = 16715,
  [SMALL_STATE(1306)] = 16719,
  [SMALL_STATE(1307)] = 16723,
  [SMALL_STATE(1308)] = 16727,
  [SMALL_STATE(1309)] = 16731,
  [SMALL_STATE(1310)] = 16735,
  [SMALL_STATE(1311)] = 16739,
  [SMALL_STATE(1312)] = 16743,
  [SMALL_STATE(1313)] = 16747,
  [SMALL_STATE(1314)] = 16751,
  [SMALL_STATE(1315)] = 16755,
  [SMALL_STATE(1316)] = 16759,
  [SMALL_STATE(1317)] = 16763,
  [SMALL_STATE(1318)] = 16767,
  [SMALL_STATE(1319)] = 16771,
  [SMALL_STATE(1320)] = 16775,
  [SMALL_STATE(1321)] = 16779,
  [SMALL_STATE(1322)] = 16783,
  [SMALL_STATE(1323)] = 16787,
  [SMALL_STATE(1324)] = 16791,
  [SMALL_STATE(1325)] = 16795,
  [SMALL_STATE(1326)] = 16799,
  [SMALL_STATE(1327)] = 16803,
  [SMALL_STATE(1328)] = 16807,
  [SMALL_STATE(1329)] = 16811,
  [SMALL_STATE(1330)] = 16815,
  [SMALL_STATE(1331)] = 16819,
  [SMALL_STATE(1332)] = 16823,
  [SMALL_STATE(1333)] = 16827,
  [SMALL_STATE(1334)] = 16831,
  [SMALL_STATE(1335)] = 16835,
  [SMALL_STATE(1336)] = 16839,
  [SMALL_STATE(1337)] = 16843,
  [SMALL_STATE(1338)] = 16847,
  [SMALL_STATE(1339)] = 16851,
  [SMALL_STATE(1340)] = 16855,
  [SMALL_STATE(1341)] = 16859,
  [SMALL_STATE(1342)] = 16863,
  [SMALL_STATE(1343)] = 16867,
  [SMALL_STATE(1344)] = 16871,
  [SMALL_STATE(1345)] = 16875,
  [SMALL_STATE(1346)] = 16879,
  [SMALL_STATE(1347)] = 16883,
  [SMALL_STATE(1348)] = 16887,
  [SMALL_STATE(1349)] = 16891,
  [SMALL_STATE(1350)] = 16895,
  [SMALL_STATE(1351)] = 16899,
  [SMALL_STATE(1352)] = 16903,
  [SMALL_STATE(1353)] = 16907,
  [SMALL_STATE(1354)] = 16911,
  [SMALL_STATE(1355)] = 16915,
  [SMALL_STATE(1356)] = 16919,
  [SMALL_STATE(1357)] = 16923,
  [SMALL_STATE(1358)] = 16927,
  [SMALL_STATE(1359)] = 16931,
  [SMALL_STATE(1360)] = 16935,
  [SMALL_STATE(1361)] = 16939,
  [SMALL_STATE(1362)] = 16943,
  [SMALL_STATE(1363)] = 16947,
  [SMALL_STATE(1364)] = 16951,
  [SMALL_STATE(1365)] = 16955,
  [SMALL_STATE(1366)] = 16959,
  [SMALL_STATE(1367)] = 16963,
  [SMALL_STATE(1368)] = 16967,
  [SMALL_STATE(1369)] = 16971,
  [SMALL_STATE(1370)] = 16975,
  [SMALL_STATE(1371)] = 16979,
  [SMALL_STATE(1372)] = 16983,
  [SMALL_STATE(1373)] = 16987,
  [SMALL_STATE(1374)] = 16991,
  [SMALL_STATE(1375)] = 16995,
  [SMALL_STATE(1376)] = 16999,
  [SMALL_STATE(1377)] = 17003,
  [SMALL_STATE(1378)] = 17007,
  [SMALL_STATE(1379)] = 17011,
  [SMALL_STATE(1380)] = 17015,
  [SMALL_STATE(1381)] = 17019,
  [SMALL_STATE(1382)] = 17023,
  [SMALL_STATE(1383)] = 17027,
  [SMALL_STATE(1384)] = 17031,
  [SMALL_STATE(1385)] = 17035,
  [SMALL_STATE(1386)] = 17039,
  [SMALL_STATE(1387)] = 17043,
  [SMALL_STATE(1388)] = 17047,
  [SMALL_STATE(1389)] = 17051,
  [SMALL_STATE(1390)] = 17055,
  [SMALL_STATE(1391)] = 17059,
  [SMALL_STATE(1392)] = 17063,
  [SMALL_STATE(1393)] = 17067,
  [SMALL_STATE(1394)] = 17071,
  [SMALL_STATE(1395)] = 17075,
  [SMALL_STATE(1396)] = 17079,
  [SMALL_STATE(1397)] = 17083,
  [SMALL_STATE(1398)] = 17087,
  [SMALL_STATE(1399)] = 17091,
  [SMALL_STATE(1400)] = 17095,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1336),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1400),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1399),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1398),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(474),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(491),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(628),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1336),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(869),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(446),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(453),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1400),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1399),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(452),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(451),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(483),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(443),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1398),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 19),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 19),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(847),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1178),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1315),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1312),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(484),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1311),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1316),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1082),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 20),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(928),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1092),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 36),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1014),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(1079),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_options_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_options_repeat1, 2), SHIFT_REPEAT(588),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5, .production_id = 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1075),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 15),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 54),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 8),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 5),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 22),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 57),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5, .production_id = 39),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 27),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2, .production_id = 44),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 22),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 39),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 37),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 57),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 20),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4, .production_id = 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 114),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 99),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 98),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 103),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 22),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 15),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3, .production_id = 7),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 22),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1, .production_id = 21),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1079),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3, .production_id = 7),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 15),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 11, .production_id = 57),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(508),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 109),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1322),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2), SHIFT_REPEAT(939),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 113),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15, .production_id = 86),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 39),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 22),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6, .production_id = 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 4),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4, .production_id = 16),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 22),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(789),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3, .production_id = 21),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6, .production_id = 41),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 59),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 11, .production_id = 70),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4, .production_id = 44),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8, .production_id = 22),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 22),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 39),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 15),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 57),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 4),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 4),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2, .production_id = 21),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 118),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2, .production_id = 21),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3, .production_id = 44),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(864),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_name, 1, .production_id = 17),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 43),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 42),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2, .production_id = 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1372),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3, .production_id = 4),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1293),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 34),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5, .production_id = 33),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 9),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 31),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 28),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 25),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 24),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3, .production_id = 4),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 3, .production_id = 44),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 10),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3, .production_id = 12),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1247),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 50),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 51),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 56),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 65),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3, .production_id = 14),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1218),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4, .production_id = 16),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3, .production_id = 13),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1239),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 75),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 109),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 57),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 85),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 84),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 83),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 39),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 63),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 23, .production_id = 118),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 44),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 41),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 82),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 6),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6, .production_id = 35),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 16),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 81),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 80),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 55),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 21, .production_id = 117),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6, .production_id = 22),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4, .production_id = 4),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 14),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4, .production_id = 7),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 16, .production_id = 86),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 77),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 91),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4, .production_id = 14),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 92),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 69),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 18),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 41),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 41),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 93),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 15),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 94),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 67),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 66),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 21, .production_id = 116),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 114),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 13, .production_id = 76),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 95),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 39),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 96),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 43),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 4),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3, .production_id = 11),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 11, .production_id = 22),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 6),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 9),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 22),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 4),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 113),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5, .production_id = 22),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 20, .production_id = 115),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9, .production_id = 63),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4, .production_id = 15),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 5),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 79),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 11, .production_id = 69),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 7, .production_id = 53),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 52),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 77),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 4),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3, .production_id = 7),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 22),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 2),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 12, .production_id = 57),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 112),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 4),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 7, .production_id = 49),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 7, .production_id = 48),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 7, .production_id = 47),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 7, .production_id = 46),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 12, .production_id = 76),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 100),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8, .production_id = 43),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7, .production_id = 4),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 101),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 87),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 22),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 111),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 26),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5, .production_id = 27),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 88),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 29),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5, .production_id = 30),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 89),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 32),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 110),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7, .production_id = 45),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4, .production_id = 7),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 11, .production_id = 72),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 35),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 102),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 4),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8, .production_id = 45),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 98),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 99),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 15),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 103),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 104),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 8, .production_id = 58),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 105),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7, .production_id = 41),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 107),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18, .production_id = 106),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 90),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 108),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 1),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 11),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 1),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 22),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10, .production_id = 59),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 12, .production_id = 70),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 22),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(857),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1248),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1319),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1080),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1204),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1201),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1391),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1390),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1175),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1389),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1069),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1068),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1067),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1065),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1192),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1190),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1212),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(672),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1145),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1210),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1209),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1304),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(835),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1296),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1386),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1385),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1383),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1380),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1300),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1142),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1377),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1376),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(863),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1370),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1369),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1370),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(458),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 21),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 21),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 21),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1327),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1174),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 3),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1184),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(976),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [1244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1301),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1217),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [1256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [1258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [1262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1379),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1378),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(772),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1056),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1, .production_id = 71),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1365),
  [1319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1361),
  [1321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(454),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 2),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1355),
  [1338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(804),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1350),
  [1348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1342),
  [1354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1328),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(1081),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(801),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2), SHIFT_REPEAT(950),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1396),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(765),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(749),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(441),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(846),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(58),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(444),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(829),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2, .production_id = 73),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 1),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1, .production_id = 74),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(604),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(823),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1164),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(224),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2, .production_id = 78),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2), SHIFT_REPEAT(722),
  [1558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1094),
  [1578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1252),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1105),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [1612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1120),
  [1614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [1616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1122),
  [1618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(754),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1130),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1128),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1361),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1248),
  [1640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [1658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 97),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 3, .production_id = 64),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 68),
  [1680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1174),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1225),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1222),
  [1688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1233),
  [1692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1261),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1259),
  [1704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 21),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1211),
  [1708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 8),
  [1710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3),
  [1712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1280),
  [1714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(738),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1282),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1285),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1291),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1308),
  [1752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 40),
  [1754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1329),
  [1756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1334),
  [1762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [1764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1335),
  [1766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1274),
  [1770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [1772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1337),
  [1774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [1776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1338),
  [1778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1345),
  [1782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1352),
  [1786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(802),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1356),
  [1794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(814),
  [1796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1358),
  [1798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [1800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1359),
  [1802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1371),
  [1808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(820),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [1818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1393),
  [1820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 60),
  [1846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 61),
  [1848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 62),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [1858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1000),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [2004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [2028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1076),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1077),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1106),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1111),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [2202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [2206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 21),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1136),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1137),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [2258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 38),
  [2260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 71),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1152),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1154),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1155),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1158),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1159),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1161),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1167),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1168),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1169),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [2326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 23),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1182),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1185),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1188),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1189),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1191),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1199),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1202),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1203),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1206),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1207),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1213),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1215),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1216),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [2420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [2422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [2432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1223),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1227),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1230),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1231),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1232),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1235),
  [2458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1086),
  [2460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1236),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1237),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1240),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1241),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1243),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1245),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [2490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1098),
  [2492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [2496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1126),
  [2498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [2500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1255),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1256),
  [2504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [2514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [2520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1263),
  [2522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1264),
  [2524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [2526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1266),
  [2528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1267),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1268),
  [2532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [2534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [2536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1270),
  [2538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1271),
  [2540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [2542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1273),
  [2544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [2546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1275),
  [2548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1276),
  [2550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1277),
  [2552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [2554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [2556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1279),
  [2558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [2560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [2562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1281),
  [2564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [2566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [2568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [2570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [2572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [2574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [2576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [2578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [2580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1294),
  [2582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1295),
  [2584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [2586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1297),
  [2588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [2590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [2592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1302),
  [2596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [2598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [2600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1305),
  [2602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1306),
  [2604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1307),
  [2606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [2608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1309),
  [2610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1310),
  [2612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1125),
  [2614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [2616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1313),
  [2620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1314),
  [2622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1246),
  [2624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1317),
  [2628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1318),
  [2630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [2632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [2634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1139),
  [2636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1320),
  [2638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1141),
  [2640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1146),
  [2644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1147),
  [2646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1149),
  [2648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1157),
  [2650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [2652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [2654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [2656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1170),
  [2658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1171),
  [2660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1331),
  [2664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1332),
  [2666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [2668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [2670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [2672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [2674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [2676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [2678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1339),
  [2680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1340),
  [2682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [2684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1343),
  [2688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1344),
  [2690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [2692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [2694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1346),
  [2696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [2698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [2700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1348),
  [2702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [2704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [2706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [2708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [2710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1351),
  [2712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [2716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [2718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [2720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [2722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [2724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1197),
  [2726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [2728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [2730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [2732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [2734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1353),
  [2736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [2738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [2740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [2742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1229),
  [2744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [2746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1395),
  [2748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1249),
  [2750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1250),
  [2752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1362),
  [2754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1363),
  [2756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1364),
  [2758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [2760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [2762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1366),
  [2764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1257),
  [2766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [2768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1368),
  [2770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [2772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [2774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1258),
  [2776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [2778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1269),
  [2780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1373),
  [2782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [2784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1278),
  [2786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1283),
  [2788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [2790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1284),
  [2792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1286),
  [2794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1287),
  [2796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, .production_id = 6),
  [2798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [2800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1381),
  [2802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1382),
  [2804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1288),
  [2806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [2808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [2810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1384),
  [2812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1290),
  [2814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 5),
  [2816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1292),
  [2818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [2820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [2822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [2824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [2826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [2828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [2830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1321),
  [2832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [2834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [2836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1392),
  [2838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1324),
  [2840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [2842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [2844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [2846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [2848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [2850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [2852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [2854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [2856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [2858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [2860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [2862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [2864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [2866] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [2870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [2872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
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
