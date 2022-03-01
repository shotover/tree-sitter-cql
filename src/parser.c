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
#define ALIAS_COUNT 25
#define TOKEN_COUNT 145
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 23
#define PRODUCTION_ID_COUNT 117

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
    [1] = anon_alias_sym_column,
  },
  [44] = {
    [2] = anon_alias_sym_type,
    [4] = anon_alias_sym_column,
    [5] = anon_alias_sym_data_type,
  },
  [45] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_table,
  },
  [46] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_index,
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
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_function,
  },
  [54] = {
    [1] = anon_alias_sym_column,
    [3] = anon_alias_sym_column,
  },
  [55] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_column,
  },
  [56] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_materialized_view,
  },
  [57] = {
    [5] = anon_alias_sym_table,
  },
  [58] = {
    [2] = anon_alias_sym_keys,
  },
  [59] = {
    [2] = anon_alias_sym_entries,
  },
  [60] = {
    [2] = anon_alias_sym_full,
  },
  [61] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
    [6] = anon_alias_sym_column,
    [7] = anon_alias_sym_data_type,
  },
  [62] = {
    [1] = anon_alias_sym_column,
    [2] = anon_alias_sym_data_type,
  },
  [63] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_trigger,
    [8] = anon_alias_sym_table,
  },
  [64] = {
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [65] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [66] = {
    [0] = anon_alias_sym_primary_key,
  },
  [67] = {
    [5] = anon_alias_sym_type,
    [7] = anon_alias_sym_column,
    [8] = anon_alias_sym_data_type,
  },
  [68] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_table,
  },
  [69] = {
    [0] = anon_alias_sym_partition_key,
  },
  [70] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_trigger,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
  },
  [71] = {
    [0] = anon_alias_sym_partition_key,
    [1] = anon_alias_sym_partition_key,
  },
  [72] = {
    [0] = anon_alias_sym_clustering_key,
  },
  [73] = {
    [2] = anon_alias_sym_function,
    [9] = anon_alias_sym_language,
  },
  [74] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_type,
    [9] = anon_alias_sym_column,
    [10] = anon_alias_sym_data_type,
  },
  [75] = {
    [4] = anon_alias_sym_column,
  },
  [76] = {
    [0] = anon_alias_sym_clustering_key,
    [1] = anon_alias_sym_clustering_key,
  },
  [77] = {
    [2] = anon_alias_sym_function,
    [10] = anon_alias_sym_language,
  },
  [78] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [79] = {
    [2] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [80] = {
    [2] = anon_alias_sym_aggregate,
    [7] = anon_alias_sym_sfunc,
    [11] = anon_alias_sym_finalfunc,
  },
  [81] = {
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [82] = {
    [5] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [83] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [84] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_table,
    [13] = anon_alias_sym_primary_key,
  },
  [85] = {
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [86] = {
    [5] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [87] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [88] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [89] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [90] = {
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [91] = {
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [92] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [93] = {
    [5] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [94] = {
    [5] = anon_alias_sym_aggregate,
    [10] = anon_alias_sym_sfunc,
    [14] = anon_alias_sym_finalfunc,
  },
  [95] = {
    [0] = anon_alias_sym_hash_key,
  },
  [96] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
    [10] = anon_alias_sym_table,
    [15] = anon_alias_sym_primary_key,
  },
  [97] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
    [15] = anon_alias_sym_primary_key,
  },
  [98] = {
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [99] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [100] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [101] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_table,
    [16] = anon_alias_sym_primary_key,
  },
  [102] = {
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [103] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [104] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
    [11] = anon_alias_sym_sfunc,
    [15] = anon_alias_sym_finalfunc,
  },
  [105] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [106] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [107] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
    [10] = anon_alias_sym_keyspace,
    [12] = anon_alias_sym_table,
    [17] = anon_alias_sym_primary_key,
  },
  [108] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [109] = {
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [110] = {
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [111] = {
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_materialized_view,
    [13] = anon_alias_sym_table,
    [18] = anon_alias_sym_primary_key,
  },
  [112] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_keyspace,
    [13] = anon_alias_sym_table,
    [18] = anon_alias_sym_primary_key,
  },
  [113] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [17] = anon_alias_sym_language,
  },
  [114] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [18] = anon_alias_sym_language,
  },
  [115] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_aggregate,
    [14] = anon_alias_sym_sfunc,
    [18] = anon_alias_sym_finalfunc,
  },
  [116] = {
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
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 552},
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
  [85] = {.lex_state = 552},
  [86] = {.lex_state = 554},
  [87] = {.lex_state = 552},
  [88] = {.lex_state = 552},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 552},
  [91] = {.lex_state = 553},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 552},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 552},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 552},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 552},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 552},
  [112] = {.lex_state = 552},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 552},
  [115] = {.lex_state = 552},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 552},
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
  [162] = {.lex_state = 552},
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
  [174] = {.lex_state = 552},
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
  [213] = {.lex_state = 552},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 552},
  [217] = {.lex_state = 552},
  [218] = {.lex_state = 552},
  [219] = {.lex_state = 552},
  [220] = {.lex_state = 552},
  [221] = {.lex_state = 552},
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
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 1},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 552},
  [409] = {.lex_state = 552},
  [410] = {.lex_state = 552},
  [411] = {.lex_state = 552},
  [412] = {.lex_state = 552},
  [413] = {.lex_state = 552},
  [414] = {.lex_state = 552},
  [415] = {.lex_state = 552},
  [416] = {.lex_state = 552},
  [417] = {.lex_state = 1},
  [418] = {.lex_state = 1},
  [419] = {.lex_state = 1},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 552},
  [422] = {.lex_state = 41},
  [423] = {.lex_state = 1},
  [424] = {.lex_state = 1},
  [425] = {.lex_state = 42},
  [426] = {.lex_state = 552},
  [427] = {.lex_state = 552},
  [428] = {.lex_state = 552},
  [429] = {.lex_state = 552},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 41},
  [432] = {.lex_state = 41},
  [433] = {.lex_state = 41},
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
  [446] = {.lex_state = 552},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 18},
  [449] = {.lex_state = 18},
  [450] = {.lex_state = 18},
  [451] = {.lex_state = 18},
  [452] = {.lex_state = 552},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 14},
  [455] = {.lex_state = 552},
  [456] = {.lex_state = 10},
  [457] = {.lex_state = 11},
  [458] = {.lex_state = 14},
  [459] = {.lex_state = 10},
  [460] = {.lex_state = 14},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 12},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 10},
  [465] = {.lex_state = 13},
  [466] = {.lex_state = 41},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 10},
  [469] = {.lex_state = 19},
  [470] = {.lex_state = 10},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 552},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 15},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 10},
  [483] = {.lex_state = 15},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 24},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 15},
  [490] = {.lex_state = 19},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 17},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 21},
  [495] = {.lex_state = 17},
  [496] = {.lex_state = 17},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 26},
  [500] = {.lex_state = 17},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 17},
  [509] = {.lex_state = 17},
  [510] = {.lex_state = 553},
  [511] = {.lex_state = 10},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 21},
  [521] = {.lex_state = 17},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 17},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 17},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 17},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 17},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 10},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 17},
  [540] = {.lex_state = 17},
  [541] = {.lex_state = 10},
  [542] = {.lex_state = 17},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 17},
  [545] = {.lex_state = 17},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 10},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 10},
  [560] = {.lex_state = 16},
  [561] = {.lex_state = 10},
  [562] = {.lex_state = 10},
  [563] = {.lex_state = 20},
  [564] = {.lex_state = 553},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 10},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 20},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 20},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 25},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 10},
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
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 20},
  [594] = {.lex_state = 10},
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
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 10},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 10},
  [616] = {.lex_state = 10},
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
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 10},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 10},
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
  [660] = {.lex_state = 10},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 10},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
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
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 10},
  [695] = {.lex_state = 10},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 10},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 10},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 10},
  [704] = {.lex_state = 20},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 10},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 10},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 10},
  [711] = {.lex_state = 10},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 22},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 10},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 20},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 10},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 10},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 10},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 10},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 10},
  [747] = {.lex_state = 10},
  [748] = {.lex_state = 10},
  [749] = {.lex_state = 10},
  [750] = {.lex_state = 10},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 10},
  [753] = {.lex_state = 10},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 10},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 10},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 10},
  [763] = {.lex_state = 553},
  [764] = {.lex_state = 553},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 10},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 10},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 10},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 10},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 10},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 10},
  [786] = {.lex_state = 10},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 10},
  [789] = {.lex_state = 10},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 20},
  [794] = {.lex_state = 20},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 20},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 20},
  [802] = {.lex_state = 20},
  [803] = {.lex_state = 27},
  [804] = {.lex_state = 27},
  [805] = {.lex_state = 10},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 20},
  [809] = {.lex_state = 10},
  [810] = {.lex_state = 20},
  [811] = {.lex_state = 10},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 10},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 10},
  [816] = {.lex_state = 20},
  [817] = {.lex_state = 10},
  [818] = {.lex_state = 27},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 20},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 10},
  [823] = {.lex_state = 20},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 10},
  [827] = {.lex_state = 10},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 20},
  [832] = {.lex_state = 10},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 552},
  [837] = {.lex_state = 20},
  [838] = {.lex_state = 10},
  [839] = {.lex_state = 10},
  [840] = {.lex_state = 20},
  [841] = {.lex_state = 20},
  [842] = {.lex_state = 10},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 10},
  [845] = {.lex_state = 10},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 10},
  [855] = {.lex_state = 10},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 553},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 10},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 10},
  [868] = {.lex_state = 10},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 10},
  [871] = {.lex_state = 10},
  [872] = {.lex_state = 10},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 10},
  [875] = {.lex_state = 10},
  [876] = {.lex_state = 10},
  [877] = {.lex_state = 13},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 10},
  [884] = {.lex_state = 10},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 10},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 10},
  [893] = {.lex_state = 10},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 10},
  [897] = {.lex_state = 10},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 10},
  [900] = {.lex_state = 10},
  [901] = {.lex_state = 10},
  [902] = {.lex_state = 10},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 10},
  [905] = {.lex_state = 10},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 10},
  [908] = {.lex_state = 10},
  [909] = {.lex_state = 10},
  [910] = {.lex_state = 10},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 10},
  [914] = {.lex_state = 10},
  [915] = {.lex_state = 10},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 10},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 10},
  [920] = {.lex_state = 10},
  [921] = {.lex_state = 10},
  [922] = {.lex_state = 10},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 10},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 10},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 10},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 10},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 10},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 10},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 10},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 10},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 10},
  [963] = {.lex_state = 10},
  [964] = {.lex_state = 0},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 0},
  [967] = {.lex_state = 0},
  [968] = {.lex_state = 0},
  [969] = {.lex_state = 0},
  [970] = {.lex_state = 0},
  [971] = {.lex_state = 10},
  [972] = {.lex_state = 0},
  [973] = {.lex_state = 0},
  [974] = {.lex_state = 553},
  [975] = {.lex_state = 0},
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 10},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 0},
  [980] = {.lex_state = 0},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 10},
  [984] = {.lex_state = 10},
  [985] = {.lex_state = 0},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 0},
  [988] = {.lex_state = 0},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 10},
  [993] = {.lex_state = 0},
  [994] = {.lex_state = 0},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 0},
  [997] = {.lex_state = 10},
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
  [1012] = {.lex_state = 0},
  [1013] = {.lex_state = 10},
  [1014] = {.lex_state = 0},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 0},
  [1018] = {.lex_state = 10},
  [1019] = {.lex_state = 0},
  [1020] = {.lex_state = 0},
  [1021] = {.lex_state = 10},
  [1022] = {.lex_state = 10},
  [1023] = {.lex_state = 552},
  [1024] = {.lex_state = 10},
  [1025] = {.lex_state = 0},
  [1026] = {.lex_state = 0},
  [1027] = {.lex_state = 0},
  [1028] = {.lex_state = 0},
  [1029] = {.lex_state = 552},
  [1030] = {.lex_state = 0},
  [1031] = {.lex_state = 0},
  [1032] = {.lex_state = 0},
  [1033] = {.lex_state = 0},
  [1034] = {.lex_state = 10},
  [1035] = {.lex_state = 10},
  [1036] = {.lex_state = 13},
  [1037] = {.lex_state = 0},
  [1038] = {.lex_state = 10},
  [1039] = {.lex_state = 10},
  [1040] = {.lex_state = 0},
  [1041] = {.lex_state = 10},
  [1042] = {.lex_state = 0},
  [1043] = {.lex_state = 0},
  [1044] = {.lex_state = 10},
  [1045] = {.lex_state = 10},
  [1046] = {.lex_state = 0},
  [1047] = {.lex_state = 13},
  [1048] = {.lex_state = 0},
  [1049] = {.lex_state = 0},
  [1050] = {.lex_state = 0},
  [1051] = {.lex_state = 0},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 0},
  [1054] = {.lex_state = 13},
  [1055] = {.lex_state = 10},
  [1056] = {.lex_state = 0},
  [1057] = {.lex_state = 10},
  [1058] = {.lex_state = 0},
  [1059] = {.lex_state = 0},
  [1060] = {.lex_state = 0},
  [1061] = {.lex_state = 10},
  [1062] = {.lex_state = 0},
  [1063] = {.lex_state = 0},
  [1064] = {.lex_state = 10},
  [1065] = {.lex_state = 0},
  [1066] = {.lex_state = 10},
  [1067] = {.lex_state = 0},
  [1068] = {.lex_state = 10},
  [1069] = {.lex_state = 0},
  [1070] = {.lex_state = 0},
  [1071] = {.lex_state = 0},
  [1072] = {.lex_state = 0},
  [1073] = {.lex_state = 10},
  [1074] = {.lex_state = 0},
  [1075] = {.lex_state = 0},
  [1076] = {.lex_state = 553},
  [1077] = {.lex_state = 0},
  [1078] = {.lex_state = 0},
  [1079] = {.lex_state = 10},
  [1080] = {.lex_state = 0},
  [1081] = {.lex_state = 0},
  [1082] = {.lex_state = 0},
  [1083] = {.lex_state = 10},
  [1084] = {.lex_state = 0},
  [1085] = {.lex_state = 0},
  [1086] = {.lex_state = 0},
  [1087] = {.lex_state = 0},
  [1088] = {.lex_state = 0},
  [1089] = {.lex_state = 10},
  [1090] = {.lex_state = 0},
  [1091] = {.lex_state = 0},
  [1092] = {.lex_state = 0},
  [1093] = {.lex_state = 10},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 10},
  [1096] = {.lex_state = 0},
  [1097] = {.lex_state = 0},
  [1098] = {.lex_state = 10},
  [1099] = {.lex_state = 0},
  [1100] = {.lex_state = 0},
  [1101] = {.lex_state = 10},
  [1102] = {.lex_state = 0},
  [1103] = {.lex_state = 0},
  [1104] = {.lex_state = 0},
  [1105] = {.lex_state = 10},
  [1106] = {.lex_state = 0},
  [1107] = {.lex_state = 0},
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
  [1120] = {.lex_state = 10},
  [1121] = {.lex_state = 10},
  [1122] = {.lex_state = 0},
  [1123] = {.lex_state = 0},
  [1124] = {.lex_state = 0},
  [1125] = {.lex_state = 10},
  [1126] = {.lex_state = 0},
  [1127] = {.lex_state = 10},
  [1128] = {.lex_state = 10},
  [1129] = {.lex_state = 0},
  [1130] = {.lex_state = 10},
  [1131] = {.lex_state = 552},
  [1132] = {.lex_state = 552},
  [1133] = {.lex_state = 0},
  [1134] = {.lex_state = 0},
  [1135] = {.lex_state = 0},
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
  [1156] = {.lex_state = 0},
  [1157] = {.lex_state = 0},
  [1158] = {.lex_state = 0},
  [1159] = {.lex_state = 10},
  [1160] = {.lex_state = 0},
  [1161] = {.lex_state = 0},
  [1162] = {.lex_state = 0},
  [1163] = {.lex_state = 0},
  [1164] = {.lex_state = 10},
  [1165] = {.lex_state = 0},
  [1166] = {.lex_state = 0},
  [1167] = {.lex_state = 0},
  [1168] = {.lex_state = 0},
  [1169] = {.lex_state = 0},
  [1170] = {.lex_state = 10},
  [1171] = {.lex_state = 553},
  [1172] = {.lex_state = 0},
  [1173] = {.lex_state = 0},
  [1174] = {.lex_state = 10},
  [1175] = {.lex_state = 0},
  [1176] = {.lex_state = 10},
  [1177] = {.lex_state = 552},
  [1178] = {.lex_state = 0},
  [1179] = {.lex_state = 0},
  [1180] = {.lex_state = 0},
  [1181] = {.lex_state = 10},
  [1182] = {.lex_state = 10},
  [1183] = {.lex_state = 0},
  [1184] = {.lex_state = 10},
  [1185] = {.lex_state = 0},
  [1186] = {.lex_state = 0},
  [1187] = {.lex_state = 10},
  [1188] = {.lex_state = 0},
  [1189] = {.lex_state = 0},
  [1190] = {.lex_state = 0},
  [1191] = {.lex_state = 10},
  [1192] = {.lex_state = 0},
  [1193] = {.lex_state = 0},
  [1194] = {.lex_state = 0},
  [1195] = {.lex_state = 0},
  [1196] = {.lex_state = 10},
  [1197] = {.lex_state = 0},
  [1198] = {.lex_state = 0},
  [1199] = {.lex_state = 553},
  [1200] = {.lex_state = 0},
  [1201] = {.lex_state = 10},
  [1202] = {.lex_state = 0},
  [1203] = {.lex_state = 0},
  [1204] = {.lex_state = 0},
  [1205] = {.lex_state = 0},
  [1206] = {.lex_state = 0},
  [1207] = {.lex_state = 0},
  [1208] = {.lex_state = 0},
  [1209] = {.lex_state = 553},
  [1210] = {.lex_state = 0},
  [1211] = {.lex_state = 0},
  [1212] = {.lex_state = 0},
  [1213] = {.lex_state = 10},
  [1214] = {.lex_state = 0},
  [1215] = {.lex_state = 10},
  [1216] = {.lex_state = 10},
  [1217] = {.lex_state = 0},
  [1218] = {.lex_state = 0},
  [1219] = {.lex_state = 0},
  [1220] = {.lex_state = 552},
  [1221] = {.lex_state = 0},
  [1222] = {.lex_state = 0},
  [1223] = {.lex_state = 0},
  [1224] = {.lex_state = 0},
  [1225] = {.lex_state = 0},
  [1226] = {.lex_state = 0},
  [1227] = {.lex_state = 0},
  [1228] = {.lex_state = 10},
  [1229] = {.lex_state = 0},
  [1230] = {.lex_state = 0},
  [1231] = {.lex_state = 0},
  [1232] = {.lex_state = 10},
  [1233] = {.lex_state = 0},
  [1234] = {.lex_state = 0},
  [1235] = {.lex_state = 0},
  [1236] = {.lex_state = 0},
  [1237] = {.lex_state = 10},
  [1238] = {.lex_state = 10},
  [1239] = {.lex_state = 0},
  [1240] = {.lex_state = 0},
  [1241] = {.lex_state = 10},
  [1242] = {.lex_state = 0},
  [1243] = {.lex_state = 0},
  [1244] = {.lex_state = 0},
  [1245] = {.lex_state = 10},
  [1246] = {.lex_state = 10},
  [1247] = {.lex_state = 0},
  [1248] = {.lex_state = 0},
  [1249] = {.lex_state = 0},
  [1250] = {.lex_state = 10},
  [1251] = {.lex_state = 0},
  [1252] = {.lex_state = 0},
  [1253] = {.lex_state = 0},
  [1254] = {.lex_state = 10},
  [1255] = {.lex_state = 10},
  [1256] = {.lex_state = 10},
  [1257] = {.lex_state = 0},
  [1258] = {.lex_state = 552},
  [1259] = {.lex_state = 552},
  [1260] = {.lex_state = 0},
  [1261] = {.lex_state = 0},
  [1262] = {.lex_state = 0},
  [1263] = {.lex_state = 0},
  [1264] = {.lex_state = 10},
  [1265] = {.lex_state = 0},
  [1266] = {.lex_state = 10},
  [1267] = {.lex_state = 0},
  [1268] = {.lex_state = 0},
  [1269] = {.lex_state = 0},
  [1270] = {.lex_state = 0},
  [1271] = {.lex_state = 10},
  [1272] = {.lex_state = 552},
  [1273] = {.lex_state = 0},
  [1274] = {.lex_state = 0},
  [1275] = {.lex_state = 0},
  [1276] = {.lex_state = 10},
  [1277] = {.lex_state = 10},
  [1278] = {.lex_state = 553},
  [1279] = {.lex_state = 553},
  [1280] = {.lex_state = 0},
  [1281] = {.lex_state = 0},
  [1282] = {.lex_state = 0},
  [1283] = {.lex_state = 10},
  [1284] = {.lex_state = 553},
  [1285] = {.lex_state = 0},
  [1286] = {.lex_state = 552},
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
  [1302] = {.lex_state = 0},
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
  [1314] = {.lex_state = 10},
  [1315] = {.lex_state = 0},
  [1316] = {.lex_state = 0},
  [1317] = {.lex_state = 552},
  [1318] = {.lex_state = 0},
  [1319] = {.lex_state = 0},
  [1320] = {.lex_state = 10},
  [1321] = {.lex_state = 0},
  [1322] = {.lex_state = 0},
  [1323] = {.lex_state = 0},
  [1324] = {.lex_state = 0},
  [1325] = {.lex_state = 10},
  [1326] = {.lex_state = 0},
  [1327] = {.lex_state = 0},
  [1328] = {.lex_state = 10},
  [1329] = {.lex_state = 0},
  [1330] = {.lex_state = 0},
  [1331] = {.lex_state = 0},
  [1332] = {.lex_state = 10},
  [1333] = {.lex_state = 0},
  [1334] = {.lex_state = 10},
  [1335] = {.lex_state = 10},
  [1336] = {.lex_state = 0},
  [1337] = {.lex_state = 0},
  [1338] = {.lex_state = 0},
  [1339] = {.lex_state = 0},
  [1340] = {.lex_state = 0},
  [1341] = {.lex_state = 10},
  [1342] = {.lex_state = 10},
  [1343] = {.lex_state = 10},
  [1344] = {.lex_state = 0},
  [1345] = {.lex_state = 0},
  [1346] = {.lex_state = 0},
  [1347] = {.lex_state = 10},
  [1348] = {.lex_state = 553},
  [1349] = {.lex_state = 10},
  [1350] = {.lex_state = 10},
  [1351] = {.lex_state = 10},
  [1352] = {.lex_state = 10},
  [1353] = {.lex_state = 0},
  [1354] = {.lex_state = 10},
  [1355] = {.lex_state = 10},
  [1356] = {.lex_state = 0},
  [1357] = {.lex_state = 41},
  [1358] = {.lex_state = 0},
  [1359] = {.lex_state = 0},
  [1360] = {.lex_state = 0},
  [1361] = {.lex_state = 10},
  [1362] = {.lex_state = 10},
  [1363] = {.lex_state = 10},
  [1364] = {.lex_state = 553},
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
    [sym_source_file] = STATE(1359),
    [sym__statement] = STATE(2),
    [sym_select_statement] = STATE(304),
    [sym_delete_statement] = STATE(304),
    [sym_begin_batch] = STATE(550),
    [sym_insert_statement] = STATE(304),
    [sym_truncate] = STATE(304),
    [sym_create_index] = STATE(304),
    [sym_drop_index] = STATE(304),
    [sym_update] = STATE(304),
    [sym_use] = STATE(304),
    [sym_grant] = STATE(304),
    [sym_revoke] = STATE(304),
    [sym_list_roles] = STATE(304),
    [sym_list_permissions] = STATE(304),
    [sym_drop_aggregate] = STATE(304),
    [sym_drop_materialized_view] = STATE(304),
    [sym_drop_function] = STATE(304),
    [sym_drop_keyspace] = STATE(304),
    [sym_drop_role] = STATE(304),
    [sym_drop_table] = STATE(304),
    [sym_drop_trigger] = STATE(304),
    [sym_drop_type] = STATE(304),
    [sym_drop_user] = STATE(304),
    [sym_create_aggregate] = STATE(304),
    [sym_create_materialized_view] = STATE(304),
    [sym_create_function] = STATE(304),
    [sym_create_keyspace] = STATE(304),
    [sym_create_role] = STATE(304),
    [sym_create_table] = STATE(304),
    [sym_create_trigger] = STATE(304),
    [sym_create_type] = STATE(304),
    [sym_create_user] = STATE(304),
    [sym_alter_materialized_view] = STATE(304),
    [sym_alter_keyspace] = STATE(304),
    [sym_alter_role] = STATE(304),
    [sym_alter_table] = STATE(304),
    [sym_alter_type] = STATE(304),
    [sym_alter_user] = STATE(304),
    [sym_apply_batch] = STATE(304),
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
    STATE(550), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(304), 37,
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
    STATE(550), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(304), 37,
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
    STATE(1040), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(898), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [359] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(951), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [429] = 3,
    STATE(71), 1,
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
  [464] = 3,
    STATE(71), 1,
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
  [499] = 3,
    STATE(71), 1,
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
  [534] = 3,
    STATE(71), 1,
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
  [569] = 3,
    STATE(71), 1,
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
  [674] = 3,
    STATE(71), 1,
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
  [709] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(944), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(580), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [814] = 3,
    STATE(71), 1,
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
  [849] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1014), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [919] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1214), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(657), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [1024] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(866), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [1094] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1103), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [1164] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(576), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(349), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(1099), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(137), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [1339] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(130), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(814), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [1444] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(976), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(972), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(848), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [1584] = 3,
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
  [1619] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(1075), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [1689] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(782), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [1759] = 3,
    STATE(71), 1,
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
    STATE(71), 1,
      sym_data_type_name,
    STATE(597), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [1864] = 3,
    STATE(71), 1,
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
  [1899] = 3,
    STATE(71), 1,
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
  [1934] = 3,
    STATE(71), 1,
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
  [1969] = 3,
    STATE(71), 1,
      sym_data_type_name,
    STATE(526), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(1094), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(824), 1,
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
    STATE(651), 1,
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
  [2165] = 1,
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
  [2192] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(68), 1,
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
  [2223] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(60), 1,
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
  [2254] = 1,
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
    STATE(63), 1,
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
  [2366] = 3,
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
  [2397] = 1,
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
  [2424] = 3,
    ACTIONS(114), 1,
      aux_sym_relation_elements_token1,
    STATE(70), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(112), 21,
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
  [2454] = 3,
    ACTIONS(119), 1,
      anon_sym_LT,
    STATE(92), 1,
      sym_data_type_definition,
    ACTIONS(117), 21,
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
  [2484] = 8,
    ACTIONS(123), 1,
      aux_sym_select_statement_token4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    STATE(88), 1,
      sym_where_spec,
    STATE(112), 1,
      sym_order_spec,
    STATE(220), 1,
      sym_limit_spec,
    ACTIONS(121), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2524] = 1,
    ACTIONS(131), 23,
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
  [2550] = 8,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    ACTIONS(135), 1,
      aux_sym_select_statement_token4,
    STATE(93), 1,
      sym_where_spec,
    STATE(118), 1,
      sym_order_spec,
    STATE(216), 1,
      sym_limit_spec,
    ACTIONS(133), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2590] = 8,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    ACTIONS(139), 1,
      aux_sym_select_statement_token4,
    STATE(95), 1,
      sym_where_spec,
    STATE(111), 1,
      sym_order_spec,
    STATE(219), 1,
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
    STATE(70), 1,
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
  [2709] = 1,
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
  [2734] = 1,
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
    STATE(77), 1,
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
  [2838] = 1,
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
  [2863] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2888] = 8,
    ACTIONS(161), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(163), 1,
      sym_object_name,
    STATE(110), 1,
      sym_table_option_item,
    STATE(147), 1,
      sym_table_options,
    STATE(355), 1,
      sym_clustering_order,
    STATE(1078), 1,
      sym_table_option_name,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(159), 14,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2927] = 1,
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
  [2952] = 6,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    ACTIONS(169), 1,
      aux_sym_select_statement_token4,
    STATE(115), 1,
      sym_order_spec,
    STATE(221), 1,
      sym_limit_spec,
    ACTIONS(167), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2986] = 1,
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
  [3010] = 1,
    ACTIONS(173), 21,
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
  [3034] = 3,
    STATE(162), 1,
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
  [3062] = 1,
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
  [3086] = 6,
    ACTIONS(123), 1,
      aux_sym_select_statement_token4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    STATE(112), 1,
      sym_order_spec,
    STATE(220), 1,
      sym_limit_spec,
    ACTIONS(121), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3120] = 1,
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
  [3144] = 6,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(129), 1,
      aux_sym_order_spec_token1,
    ACTIONS(135), 1,
      aux_sym_select_statement_token4,
    STATE(118), 1,
      sym_order_spec,
    STATE(216), 1,
      sym_limit_spec,
    ACTIONS(133), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3178] = 2,
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
  [3203] = 3,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(187), 18,
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
  [3230] = 2,
    ACTIONS(194), 1,
      anon_sym_DOT,
    ACTIONS(192), 19,
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
  [3255] = 2,
    ACTIONS(198), 1,
      aux_sym_relation_element_token1,
    ACTIONS(196), 19,
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
  [3280] = 2,
    ACTIONS(202), 1,
      anon_sym_DOT,
    ACTIONS(200), 19,
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
  [3305] = 1,
    ACTIONS(204), 20,
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
  [3328] = 1,
    ACTIONS(196), 19,
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
  [3350] = 1,
    ACTIONS(206), 19,
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
  [3372] = 2,
    ACTIONS(210), 1,
      aux_sym_priviledge_token2,
    ACTIONS(208), 18,
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
  [3396] = 3,
    STATE(255), 1,
      sym_user_super_user,
    ACTIONS(214), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3422] = 1,
    ACTIONS(216), 19,
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
  [3444] = 1,
    ACTIONS(218), 19,
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
  [3466] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3488] = 3,
    STATE(249), 1,
      sym_user_super_user,
    ACTIONS(214), 2,
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
  [3514] = 3,
    ACTIONS(226), 1,
      aux_sym_relation_elements_token1,
    STATE(125), 1,
      aux_sym_materialized_view_options_repeat1,
    ACTIONS(224), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3540] = 4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(135), 1,
      aux_sym_select_statement_token4,
    STATE(216), 1,
      sym_limit_spec,
    ACTIONS(133), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3568] = 4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(169), 1,
      aux_sym_select_statement_token4,
    STATE(221), 1,
      sym_limit_spec,
    ACTIONS(167), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3596] = 1,
    ACTIONS(228), 19,
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
  [3618] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3640] = 4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(234), 1,
      aux_sym_select_statement_token4,
    STATE(218), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3668] = 3,
    STATE(302), 1,
      sym_user_super_user,
    ACTIONS(214), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(236), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3694] = 4,
    ACTIONS(240), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(242), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(325), 1,
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
  [3722] = 4,
    ACTIONS(123), 1,
      aux_sym_select_statement_token4,
    ACTIONS(125), 1,
      aux_sym_limit_spec_token1,
    STATE(220), 1,
      sym_limit_spec,
    ACTIONS(121), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3750] = 3,
    ACTIONS(246), 1,
      aux_sym_relation_elements_token1,
    STATE(119), 1,
      aux_sym_materialized_view_options_repeat1,
    ACTIONS(244), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3776] = 1,
    ACTIONS(249), 19,
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
  [3798] = 4,
    ACTIONS(242), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(253), 1,
      aux_sym_delete_statement_token2,
    STATE(405), 1,
      sym_using_ttl_timestamp,
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
  [3826] = 1,
    ACTIONS(255), 19,
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
  [3848] = 1,
    ACTIONS(257), 19,
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
  [3870] = 4,
    ACTIONS(242), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(261), 1,
      aux_sym_delete_statement_token2,
    STATE(361), 1,
      sym_using_ttl_timestamp,
    ACTIONS(259), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3898] = 3,
    ACTIONS(226), 1,
      aux_sym_relation_elements_token1,
    STATE(119), 1,
      aux_sym_materialized_view_options_repeat1,
    ACTIONS(263), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3924] = 1,
    ACTIONS(265), 18,
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
  [3945] = 1,
    ACTIONS(267), 18,
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
  [3966] = 2,
    ACTIONS(271), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(269), 17,
      ts_builtin_sym_end,
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
  [3989] = 3,
    ACTIONS(275), 1,
      aux_sym_relation_elements_token1,
    STATE(151), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [4014] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(277), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4039] = 3,
    ACTIONS(283), 1,
      aux_sym_delete_statement_token2,
    STATE(284), 1,
      sym_if_spec,
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
  [4064] = 1,
    ACTIONS(285), 18,
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
  [4085] = 3,
    ACTIONS(242), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(289), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4110] = 3,
    ACTIONS(291), 1,
      aux_sym_materialized_view_options_token1,
    STATE(251), 1,
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
  [4135] = 3,
    ACTIONS(295), 1,
      aux_sym_delete_statement_token2,
    STATE(328), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4160] = 3,
    ACTIONS(299), 1,
      aux_sym_delete_statement_token2,
    STATE(258), 1,
      sym_if_spec,
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
    ACTIONS(279), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [4210] = 3,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_column_list_repeat1,
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
  [4235] = 3,
    ACTIONS(309), 1,
      aux_sym_delete_statement_token2,
    STATE(269), 1,
      sym_if_spec,
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
  [4260] = 1,
    ACTIONS(311), 18,
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
  [4281] = 3,
    ACTIONS(242), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(267), 1,
      sym_using_ttl_timestamp,
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
  [4306] = 1,
    ACTIONS(315), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4327] = 3,
    ACTIONS(319), 1,
      aux_sym_delete_statement_token2,
    STATE(299), 1,
      sym_if_spec,
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
  [4373] = 3,
    ACTIONS(325), 1,
      aux_sym_delete_statement_token2,
    STATE(287), 1,
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
      aux_sym_materialized_view_options_token1,
    STATE(265), 1,
      sym_with_element,
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
      aux_sym_clustering_order_token1,
    STATE(264), 1,
      sym_clustering_order,
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
      aux_sym_materialized_view_options_token1,
    STATE(277), 1,
      sym_role_with,
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
  [4494] = 3,
    ACTIONS(291), 1,
      aux_sym_materialized_view_options_token1,
    STATE(308), 1,
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
  [4519] = 3,
    ACTIONS(345), 1,
      aux_sym_relation_elements_token1,
    STATE(151), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [4544] = 3,
    ACTIONS(350), 1,
      aux_sym_delete_statement_token2,
    STATE(392), 1,
      sym_if_spec,
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
  [4569] = 3,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_column_list_repeat1,
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
  [4594] = 3,
    ACTIONS(337), 1,
      aux_sym_materialized_view_options_token1,
    STATE(274), 1,
      sym_role_with,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4619] = 3,
    ACTIONS(329), 1,
      aux_sym_materialized_view_options_token1,
    STATE(275), 1,
      sym_with_element,
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
  [4644] = 3,
    ACTIONS(360), 1,
      aux_sym_relation_elements_token1,
    STATE(203), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4669] = 3,
    ACTIONS(364), 1,
      anon_sym_DOT,
    ACTIONS(366), 1,
      aux_sym_materialized_view_options_token1,
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
  [4694] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [4719] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(370), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4744] = 1,
    ACTIONS(372), 18,
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
  [4765] = 3,
    ACTIONS(376), 1,
      aux_sym_delete_statement_token2,
    STATE(311), 1,
      sym_if_spec,
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
  [4790] = 1,
    ACTIONS(378), 18,
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
  [4811] = 1,
    ACTIONS(380), 18,
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
  [4832] = 3,
    ACTIONS(275), 1,
      aux_sym_relation_elements_token1,
    STATE(129), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [4857] = 3,
    ACTIONS(291), 1,
      aux_sym_materialized_view_options_token1,
    STATE(293), 1,
      sym_materialized_view_options,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4882] = 1,
    ACTIONS(386), 18,
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
  [4903] = 3,
    ACTIONS(390), 1,
      aux_sym_delete_statement_token2,
    STATE(252), 1,
      sym_if_spec,
    ACTIONS(388), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4928] = 1,
    ACTIONS(392), 18,
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
  [4949] = 1,
    ACTIONS(244), 18,
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
  [4970] = 3,
    ACTIONS(396), 1,
      aux_sym_delete_statement_token2,
    STATE(330), 1,
      sym_if_spec,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4995] = 3,
    ACTIONS(291), 1,
      aux_sym_materialized_view_options_token1,
    STATE(268), 1,
      sym_materialized_view_options,
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
  [5020] = 3,
    ACTIONS(402), 1,
      aux_sym_create_index_token3,
    ACTIONS(404), 1,
      aux_sym_list_roles_token2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5045] = 3,
    ACTIONS(408), 1,
      aux_sym_list_roles_token2,
    ACTIONS(410), 1,
      aux_sym_list_roles_token3,
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
  [5070] = 8,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym__decimal_literal,
    ACTIONS(418), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    STATE(673), 1,
      sym_expression,
    STATE(1137), 1,
      sym_expression_list,
    STATE(698), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [5105] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [5130] = 1,
    ACTIONS(427), 18,
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
  [5151] = 1,
    ACTIONS(429), 18,
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
  [5172] = 1,
    ACTIONS(431), 18,
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
  [5193] = 1,
    ACTIONS(433), 18,
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
  [5214] = 3,
    ACTIONS(291), 1,
      aux_sym_materialized_view_options_token1,
    STATE(348), 1,
      sym_materialized_view_options,
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
  [5239] = 1,
    ACTIONS(208), 18,
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
  [5260] = 3,
    ACTIONS(439), 1,
      aux_sym_delete_statement_token2,
    STATE(336), 1,
      sym_if_spec,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5285] = 2,
    ACTIONS(441), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(269), 17,
      ts_builtin_sym_end,
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
  [5308] = 3,
    ACTIONS(445), 1,
      aux_sym_delete_statement_token2,
    STATE(397), 1,
      sym_if_spec,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5333] = 3,
    ACTIONS(291), 1,
      aux_sym_materialized_view_options_token1,
    STATE(344), 1,
      sym_materialized_view_options,
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
  [5358] = 3,
    ACTIONS(451), 1,
      aux_sym_relation_elements_token1,
    STATE(194), 1,
      aux_sym_materialized_view_options_repeat1,
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
  [5383] = 3,
    ACTIONS(455), 1,
      aux_sym_relation_elements_token1,
    STATE(201), 1,
      aux_sym_if_condition_list_repeat1,
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
  [5408] = 3,
    ACTIONS(455), 1,
      aux_sym_relation_elements_token1,
    STATE(187), 1,
      aux_sym_if_condition_list_repeat1,
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
  [5433] = 3,
    ACTIONS(461), 1,
      aux_sym_delete_statement_token2,
    STATE(248), 1,
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
  [5458] = 3,
    ACTIONS(465), 1,
      aux_sym_delete_statement_token2,
    STATE(313), 1,
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
  [5483] = 3,
    ACTIONS(329), 1,
      aux_sym_materialized_view_options_token1,
    STATE(337), 1,
      sym_with_element,
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
  [5508] = 3,
    ACTIONS(291), 1,
      aux_sym_materialized_view_options_token1,
    STATE(327), 1,
      sym_materialized_view_options,
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
  [5533] = 3,
    ACTIONS(473), 1,
      aux_sym_relation_elements_token1,
    STATE(193), 1,
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
  [5558] = 3,
    ACTIONS(478), 1,
      aux_sym_relation_elements_token1,
    STATE(119), 1,
      aux_sym_materialized_view_options_repeat1,
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
  [5583] = 3,
    ACTIONS(329), 1,
      aux_sym_materialized_view_options_token1,
    STATE(246), 1,
      sym_with_element,
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
  [5608] = 3,
    ACTIONS(242), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(360), 1,
      sym_using_ttl_timestamp,
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
  [5633] = 1,
    ACTIONS(484), 18,
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
  [5654] = 3,
    ACTIONS(488), 1,
      aux_sym_delete_statement_token2,
    STATE(329), 1,
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
  [5679] = 3,
    ACTIONS(492), 1,
      aux_sym_delete_statement_token2,
    STATE(321), 1,
      sym_if_spec,
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
  [5704] = 3,
    ACTIONS(291), 1,
      aux_sym_materialized_view_options_token1,
    STATE(312), 1,
      sym_materialized_view_options,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5729] = 3,
    ACTIONS(498), 1,
      aux_sym_relation_elements_token1,
    STATE(201), 1,
      aux_sym_if_condition_list_repeat1,
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
  [5754] = 3,
    ACTIONS(337), 1,
      aux_sym_materialized_view_options_token1,
    STATE(342), 1,
      sym_role_with,
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
  [5779] = 3,
    ACTIONS(360), 1,
      aux_sym_relation_elements_token1,
    STATE(193), 1,
      aux_sym_role_with_repeat1,
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
  [5804] = 2,
    ACTIONS(507), 1,
      anon_sym_DOT,
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
  [5826] = 2,
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
  [5848] = 2,
    ACTIONS(515), 1,
      anon_sym_DOT,
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
  [5870] = 1,
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
  [5890] = 2,
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
  [5912] = 2,
    ACTIONS(525), 1,
      aux_sym_list_roles_token2,
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
  [5934] = 2,
    ACTIONS(529), 1,
      aux_sym_list_roles_token3,
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
  [5956] = 1,
    ACTIONS(531), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [5976] = 1,
    ACTIONS(471), 17,
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
  [5996] = 7,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym__decimal_literal,
    ACTIONS(418), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    STATE(734), 1,
      sym_expression,
    STATE(698), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [6028] = 1,
    ACTIONS(496), 17,
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
  [6048] = 1,
    ACTIONS(533), 17,
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
  [6068] = 2,
    ACTIONS(123), 1,
      aux_sym_select_statement_token4,
    ACTIONS(121), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6090] = 1,
    ACTIONS(535), 17,
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
  [6110] = 2,
    ACTIONS(539), 1,
      aux_sym_select_statement_token4,
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
  [6132] = 2,
    ACTIONS(135), 1,
      aux_sym_select_statement_token4,
    ACTIONS(133), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6154] = 2,
    ACTIONS(169), 1,
      aux_sym_select_statement_token4,
    ACTIONS(167), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6176] = 2,
    ACTIONS(234), 1,
      aux_sym_select_statement_token4,
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
  [6198] = 2,
    ACTIONS(543), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6220] = 1,
    ACTIONS(545), 17,
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
  [6240] = 1,
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
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_materialized_view_options_token1,
      aux_sym_apply_batch_token1,
  [6260] = 2,
    ACTIONS(551), 1,
      aux_sym_relation_elements_token1,
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
  [6282] = 1,
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
  [6302] = 2,
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
  [6324] = 1,
    ACTIONS(557), 17,
      ts_builtin_sym_end,
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
  [6344] = 2,
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
  [6366] = 2,
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
  [6388] = 2,
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
  [6410] = 2,
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
  [6432] = 2,
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
  [6454] = 2,
    ACTIONS(581), 1,
      aux_sym_materialized_view_options_token1,
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
  [6476] = 2,
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
  [6498] = 2,
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
  [6520] = 2,
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
  [6542] = 1,
    ACTIONS(595), 17,
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
  [6562] = 2,
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
  [6584] = 2,
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
  [6606] = 2,
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
  [6628] = 2,
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
  [6650] = 2,
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
  [6672] = 2,
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
  [6694] = 1,
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
  [6713] = 1,
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
  [6732] = 1,
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
  [6751] = 1,
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
  [6770] = 1,
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
  [6789] = 1,
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
  [6808] = 1,
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
  [6827] = 1,
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
  [6846] = 1,
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
  [6865] = 1,
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
  [6884] = 1,
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
  [6903] = 1,
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
  [6922] = 1,
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
  [6941] = 1,
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
  [6960] = 1,
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
  [6979] = 1,
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
  [6998] = 1,
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
  [7017] = 1,
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
  [7036] = 1,
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
  [7055] = 1,
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
  [7074] = 1,
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
  [7093] = 1,
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
  [7112] = 1,
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
  [7131] = 1,
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
  [7150] = 1,
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
  [7245] = 1,
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
  [7264] = 1,
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
  [7283] = 1,
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
  [7302] = 1,
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
  [7321] = 1,
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
  [7340] = 1,
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
  [7359] = 1,
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
  [7378] = 1,
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
  [7397] = 1,
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
  [7416] = 1,
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
  [7435] = 1,
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
  [7454] = 1,
    ACTIONS(167), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7492] = 1,
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
  [7511] = 1,
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
  [7530] = 1,
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
  [7549] = 1,
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
  [7568] = 1,
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
  [7587] = 1,
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
  [7606] = 1,
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
  [7625] = 1,
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
  [7644] = 1,
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
  [7663] = 1,
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
  [7682] = 1,
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
  [7701] = 1,
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
  [7720] = 1,
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
  [7739] = 1,
    ACTIONS(121), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7777] = 1,
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
  [7796] = 1,
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
  [7815] = 2,
    ACTIONS(723), 1,
      anon_sym_SEMI,
    ACTIONS(721), 15,
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
  [7836] = 1,
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
  [7855] = 1,
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
  [7874] = 1,
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
  [7893] = 1,
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
  [7912] = 1,
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
  [7931] = 1,
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
  [7950] = 1,
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
  [7969] = 1,
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
  [7988] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8007] = 1,
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
  [8026] = 1,
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
  [8045] = 1,
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
  [8064] = 1,
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
  [8083] = 1,
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
  [8102] = 1,
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
  [8121] = 1,
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
  [8140] = 1,
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
  [8159] = 1,
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
  [8178] = 1,
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
  [8197] = 1,
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
  [8216] = 1,
    ACTIONS(259), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8235] = 1,
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
  [8254] = 1,
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
  [8273] = 1,
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
  [8292] = 1,
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
  [8311] = 1,
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
  [8330] = 1,
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
  [8349] = 1,
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
  [8368] = 1,
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
  [8387] = 1,
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
  [8406] = 1,
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
  [8425] = 1,
    ACTIONS(388), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8444] = 1,
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
  [8463] = 1,
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
  [8482] = 1,
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
  [8501] = 1,
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
  [8520] = 1,
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
  [8539] = 1,
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
  [8558] = 1,
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
  [8577] = 1,
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
  [8596] = 1,
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
  [8615] = 1,
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
  [8634] = 1,
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
  [8653] = 1,
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
  [8672] = 1,
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
  [8691] = 1,
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
  [8710] = 1,
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
  [8729] = 1,
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
  [8748] = 1,
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
  [8767] = 1,
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
  [8786] = 1,
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
  [8805] = 1,
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
  [8824] = 1,
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
  [8843] = 1,
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
  [8862] = 1,
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
  [8881] = 1,
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
  [8900] = 1,
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
  [8919] = 1,
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
  [8938] = 1,
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
  [8957] = 1,
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
  [8976] = 1,
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
  [8995] = 1,
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
  [9014] = 1,
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
  [9033] = 1,
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
  [9052] = 1,
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
  [9071] = 1,
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
  [9090] = 1,
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
  [9109] = 1,
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
  [9128] = 1,
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
  [9147] = 1,
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
  [9166] = 1,
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
  [9185] = 1,
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
  [9204] = 1,
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
  [9223] = 1,
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
  [9242] = 1,
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
  [9261] = 1,
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
  [9280] = 1,
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
  [9299] = 1,
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
  [9318] = 1,
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
  [9337] = 1,
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
  [9356] = 1,
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
  [9375] = 1,
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
  [9394] = 1,
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
  [9413] = 1,
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
  [9432] = 1,
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
  [9451] = 1,
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
  [9470] = 1,
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
  [9489] = 1,
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
  [9508] = 1,
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
  [9527] = 1,
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
  [9546] = 1,
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
  [9565] = 1,
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
  [9584] = 1,
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
  [9603] = 1,
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
  [9622] = 1,
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
  [9641] = 1,
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
  [9660] = 1,
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
  [9679] = 1,
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
  [9698] = 1,
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
  [9717] = 1,
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
  [9736] = 1,
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
  [9755] = 7,
    ACTIONS(418), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    ACTIONS(897), 1,
      sym_object_name,
    STATE(833), 1,
      sym_constant,
    ACTIONS(416), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    STATE(524), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(414), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9785] = 1,
    ACTIONS(899), 15,
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
  [9803] = 5,
    ACTIONS(416), 1,
      sym__decimal_literal,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    STATE(257), 1,
      sym_init_cond_definition,
    STATE(144), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9828] = 5,
    ACTIONS(416), 1,
      sym__decimal_literal,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    STATE(382), 1,
      sym_init_cond_definition,
    STATE(144), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9853] = 5,
    ACTIONS(416), 1,
      sym__decimal_literal,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    STATE(772), 1,
      sym_init_cond_definition,
    STATE(144), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9878] = 5,
    ACTIONS(416), 1,
      sym__decimal_literal,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    STATE(316), 1,
      sym_init_cond_definition,
    STATE(144), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9903] = 5,
    ACTIONS(416), 1,
      sym__decimal_literal,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    STATE(263), 1,
      sym_init_cond_definition,
    STATE(144), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9928] = 5,
    ACTIONS(416), 1,
      sym__decimal_literal,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym_init_cond_definition,
    STATE(144), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9953] = 5,
    ACTIONS(416), 1,
      sym__decimal_literal,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    STATE(399), 1,
      sym_init_cond_definition,
    STATE(144), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9978] = 5,
    ACTIONS(416), 1,
      sym__decimal_literal,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    STATE(375), 1,
      sym_init_cond_definition,
    STATE(144), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10003] = 5,
    ACTIONS(416), 1,
      sym__decimal_literal,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    STATE(333), 1,
      sym_init_cond_definition,
    STATE(144), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10028] = 6,
    ACTIONS(903), 1,
      anon_sym_STAR,
    ACTIONS(905), 1,
      sym_object_name,
    STATE(1050), 1,
      sym_function_args,
    STATE(677), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(416), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(414), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10054] = 7,
    ACTIONS(907), 1,
      anon_sym_LPAREN,
    ACTIONS(909), 1,
      sym_object_name,
    STATE(646), 1,
      sym_init_cond_hash_item,
    STATE(647), 1,
      sym_init_cond_list,
    STATE(649), 1,
      sym_constant,
    ACTIONS(416), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(414), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10082] = 5,
    ACTIONS(905), 1,
      sym_object_name,
    STATE(1302), 1,
      sym_function_args,
    STATE(677), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(416), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(414), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10105] = 7,
    ACTIONS(911), 1,
      anon_sym_DOT,
    ACTIONS(913), 1,
      aux_sym_drop_index_token1,
    ACTIONS(915), 1,
      aux_sym_materialized_view_options_token1,
    ACTIONS(917), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(919), 1,
      aux_sym_alter_table_rename_token1,
    STATE(271), 1,
      sym_alter_table_operation,
    STATE(272), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10131] = 5,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym__decimal_literal,
    STATE(61), 1,
      sym_assignment_tuple,
    STATE(531), 1,
      sym_constant,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10153] = 11,
    ACTIONS(921), 1,
      aux_sym_truncate_token2,
    ACTIONS(923), 1,
      aux_sym_create_index_token2,
    ACTIONS(925), 1,
      aux_sym_resource_token2,
    ACTIONS(927), 1,
      aux_sym_resource_token5,
    ACTIONS(929), 1,
      aux_sym_resource_token6,
    ACTIONS(931), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(933), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(935), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(937), 1,
      aux_sym_drop_type_token1,
    ACTIONS(939), 1,
      aux_sym_drop_user_token1,
    ACTIONS(941), 1,
      aux_sym_create_aggregate_token1,
  [10187] = 4,
    ACTIONS(943), 1,
      sym_object_name,
    STATE(80), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(416), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(414), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10207] = 4,
    ACTIONS(945), 1,
      sym_object_name,
    STATE(701), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(416), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(414), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10227] = 4,
    ACTIONS(949), 1,
      aux_sym_priviledge_token1,
    ACTIONS(951), 1,
      aux_sym_resource_token4,
    STATE(172), 1,
      sym_priviledge,
    ACTIONS(947), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10247] = 4,
    ACTIONS(416), 1,
      sym__decimal_literal,
    ACTIONS(907), 1,
      anon_sym_LPAREN,
    STATE(775), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10267] = 6,
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
  [10290] = 4,
    ACTIONS(416), 1,
      sym__decimal_literal,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
    STATE(498), 1,
      sym_constant,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10309] = 4,
    ACTIONS(416), 1,
      sym__decimal_literal,
    ACTIONS(967), 1,
      aux_sym_relation_contains_key_token2,
    STATE(79), 1,
      sym_constant,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10328] = 6,
    ACTIONS(913), 1,
      aux_sym_drop_index_token1,
    ACTIONS(915), 1,
      aux_sym_materialized_view_options_token1,
    ACTIONS(917), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(919), 1,
      aux_sym_alter_table_rename_token1,
    STATE(273), 1,
      sym_alter_table_operation,
    STATE(272), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10351] = 3,
    ACTIONS(949), 1,
      aux_sym_priviledge_token1,
    STATE(1299), 1,
      sym_priviledge,
    ACTIONS(947), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10368] = 3,
    ACTIONS(949), 1,
      aux_sym_priviledge_token1,
    STATE(1300), 1,
      sym_priviledge,
    ACTIONS(947), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10385] = 10,
    ACTIONS(969), 1,
      aux_sym_truncate_token2,
    ACTIONS(971), 1,
      aux_sym_create_index_token2,
    ACTIONS(973), 1,
      aux_sym_resource_token2,
    ACTIONS(975), 1,
      aux_sym_resource_token5,
    ACTIONS(977), 1,
      aux_sym_resource_token6,
    ACTIONS(979), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(981), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(983), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(985), 1,
      aux_sym_drop_type_token1,
    ACTIONS(987), 1,
      aux_sym_drop_user_token1,
  [10416] = 5,
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
  [10436] = 3,
    ACTIONS(416), 1,
      sym__decimal_literal,
    STATE(76), 1,
      sym_constant,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10452] = 3,
    ACTIONS(416), 1,
      sym__decimal_literal,
    STATE(602), 1,
      sym_constant,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10468] = 3,
    ACTIONS(416), 1,
      sym__decimal_literal,
    STATE(463), 1,
      sym_constant,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10484] = 3,
    ACTIONS(416), 1,
      sym__decimal_literal,
    STATE(699), 1,
      sym_constant,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10500] = 3,
    ACTIONS(416), 1,
      sym__decimal_literal,
    STATE(531), 1,
      sym_constant,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10516] = 3,
    ACTIONS(416), 1,
      sym__decimal_literal,
    STATE(994), 1,
      sym_constant,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10532] = 3,
    ACTIONS(416), 1,
      sym__decimal_literal,
    STATE(649), 1,
      sym_constant,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10548] = 3,
    ACTIONS(416), 1,
      sym__decimal_literal,
    STATE(126), 1,
      sym_constant,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10564] = 3,
    ACTIONS(416), 1,
      sym__decimal_literal,
    STATE(565), 1,
      sym_constant,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10580] = 3,
    ACTIONS(416), 1,
      sym__decimal_literal,
    STATE(80), 1,
      sym_constant,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10596] = 3,
    ACTIONS(416), 1,
      sym__decimal_literal,
    STATE(215), 1,
      sym_constant,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10612] = 3,
    ACTIONS(416), 1,
      sym__decimal_literal,
    STATE(807), 1,
      sym_constant,
    ACTIONS(414), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10628] = 6,
    ACTIONS(989), 1,
      anon_sym_DOT,
    ACTIONS(991), 1,
      aux_sym_priviledge_token3,
    ACTIONS(993), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(995), 1,
      aux_sym_alter_table_rename_token1,
    STATE(280), 1,
      sym_alter_type_operation,
    STATE(281), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10649] = 6,
    ACTIONS(997), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(999), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1001), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1003), 1,
      sym_object_name,
    STATE(1253), 1,
      sym_index_column_spec,
    STATE(1260), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10670] = 6,
    ACTIONS(997), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(999), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1001), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1003), 1,
      sym_object_name,
    STATE(856), 1,
      sym_index_column_spec,
    STATE(1260), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10691] = 6,
    ACTIONS(997), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(999), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1001), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1003), 1,
      sym_object_name,
    STATE(934), 1,
      sym_index_column_spec,
    STATE(1260), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10712] = 6,
    ACTIONS(997), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(999), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1001), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1003), 1,
      sym_object_name,
    STATE(1252), 1,
      sym_index_column_spec,
    STATE(1260), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10733] = 3,
    ACTIONS(1009), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1005), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1007), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10747] = 5,
    ACTIONS(991), 1,
      aux_sym_priviledge_token3,
    ACTIONS(993), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(995), 1,
      aux_sym_alter_table_rename_token1,
    STATE(261), 1,
      sym_alter_type_operation,
    STATE(281), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10765] = 7,
    ACTIONS(1011), 1,
      aux_sym_truncate_token2,
    ACTIONS(1013), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1015), 1,
      aux_sym_resource_token2,
    ACTIONS(1017), 1,
      aux_sym_resource_token5,
    ACTIONS(1019), 1,
      aux_sym_resource_token6,
    ACTIONS(1021), 1,
      sym_object_name,
    STATE(859), 1,
      sym_resource,
  [10787] = 3,
    ACTIONS(1027), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1023), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1025), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10801] = 6,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
    ACTIONS(1031), 1,
      sym_object_name,
    STATE(85), 1,
      sym_relation_element,
    STATE(461), 1,
      sym_function_call,
    STATE(715), 1,
      sym_column_not_null,
    STATE(84), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10821] = 7,
    ACTIONS(1033), 1,
      aux_sym_select_statement_token2,
    ACTIONS(1035), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1037), 1,
      anon_sym_STAR,
    ACTIONS(1039), 1,
      sym_object_name,
    STATE(551), 1,
      sym_select_element,
    STATE(553), 1,
      sym_function_call,
    STATE(846), 1,
      sym_select_elements,
  [10843] = 7,
    ACTIONS(1011), 1,
      aux_sym_truncate_token2,
    ACTIONS(1013), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1015), 1,
      aux_sym_resource_token2,
    ACTIONS(1017), 1,
      aux_sym_resource_token5,
    ACTIONS(1019), 1,
      aux_sym_resource_token6,
    ACTIONS(1021), 1,
      sym_object_name,
    STATE(209), 1,
      sym_resource,
  [10865] = 6,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
    ACTIONS(1041), 1,
      sym_object_name,
    STATE(82), 1,
      sym_relation_element,
    STATE(101), 1,
      sym_relation_elements,
    STATE(461), 1,
      sym_function_call,
    STATE(84), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10885] = 7,
    ACTIONS(1011), 1,
      aux_sym_truncate_token2,
    ACTIONS(1013), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1015), 1,
      aux_sym_resource_token2,
    ACTIONS(1017), 1,
      aux_sym_resource_token5,
    ACTIONS(1019), 1,
      aux_sym_resource_token6,
    ACTIONS(1021), 1,
      sym_object_name,
    STATE(858), 1,
      sym_resource,
  [10907] = 2,
    ACTIONS(1043), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1045), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10918] = 6,
    ACTIONS(1037), 1,
      anon_sym_STAR,
    ACTIONS(1039), 1,
      sym_object_name,
    ACTIONS(1047), 1,
      aux_sym_select_statement_token3,
    STATE(551), 1,
      sym_select_element,
    STATE(553), 1,
      sym_function_call,
    STATE(768), 1,
      sym_select_elements,
  [10937] = 6,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
    STATE(664), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(667), 1,
      aux_sym_relation_element_repeat2,
    STATE(668), 1,
      sym_assignment_tuple,
  [10956] = 5,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
    ACTIONS(1041), 1,
      sym_object_name,
    STATE(85), 1,
      sym_relation_element,
    STATE(461), 1,
      sym_function_call,
    STATE(84), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10973] = 4,
    ACTIONS(418), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    ACTIONS(1053), 1,
      sym__decimal_literal,
    STATE(806), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [10988] = 6,
    ACTIONS(1055), 1,
      aux_sym_truncate_token2,
    ACTIONS(1057), 1,
      aux_sym_resource_token2,
    ACTIONS(1059), 1,
      aux_sym_resource_token6,
    ACTIONS(1061), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1063), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1065), 1,
      aux_sym_drop_user_token1,
  [11007] = 1,
    ACTIONS(1067), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11015] = 5,
    ACTIONS(1037), 1,
      anon_sym_STAR,
    ACTIONS(1069), 1,
      sym_object_name,
    STATE(551), 1,
      sym_select_element,
    STATE(553), 1,
      sym_function_call,
    STATE(709), 1,
      sym_select_elements,
  [11031] = 5,
    ACTIONS(1071), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1073), 1,
      sym_object_name,
    STATE(505), 1,
      sym_from_spec,
    STATE(558), 1,
      sym_delete_column_item,
    STATE(843), 1,
      sym_delete_column_list,
  [11047] = 4,
    ACTIONS(1075), 1,
      anon_sym_LPAREN,
    ACTIONS(1077), 1,
      sym_object_name,
    STATE(931), 1,
      sym_primary_key_definition,
    STATE(932), 2,
      sym_compound_key,
      sym_composite_key,
  [11061] = 1,
    ACTIONS(1079), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11069] = 3,
    ACTIONS(1083), 1,
      anon_sym_LBRACE,
    ACTIONS(1081), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(163), 2,
      sym_option_hash,
      sym_table_option_value,
  [11081] = 1,
    ACTIONS(1085), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11089] = 1,
    ACTIONS(1087), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11097] = 3,
    ACTIONS(1089), 1,
      anon_sym_COMMA,
    STATE(475), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(1092), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11109] = 4,
    ACTIONS(1094), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1098), 1,
      aux_sym_role_with_options_token4,
    STATE(156), 1,
      sym_role_with_options,
    ACTIONS(1096), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11123] = 1,
    ACTIONS(1100), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11131] = 1,
    ACTIONS(1102), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11139] = 5,
    ACTIONS(161), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(163), 1,
      sym_object_name,
    STATE(186), 1,
      sym_table_option_item,
    STATE(398), 1,
      sym_clustering_order,
    STATE(1078), 1,
      sym_table_option_name,
  [11155] = 5,
    ACTIONS(1104), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1106), 1,
      anon_sym_LPAREN,
    ACTIONS(1108), 1,
      aux_sym_insert_values_spec_token1,
    STATE(124), 1,
      sym_insert_values_spec,
    STATE(693), 1,
      sym_insert_column_spec,
  [11171] = 1,
    ACTIONS(1110), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11179] = 5,
    ACTIONS(1037), 1,
      anon_sym_STAR,
    ACTIONS(1069), 1,
      sym_object_name,
    STATE(551), 1,
      sym_select_element,
    STATE(553), 1,
      sym_function_call,
    STATE(768), 1,
      sym_select_elements,
  [11195] = 5,
    ACTIONS(161), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(163), 1,
      sym_object_name,
    STATE(169), 1,
      sym_table_option_item,
    STATE(320), 1,
      sym_clustering_order,
    STATE(1078), 1,
      sym_table_option_name,
  [11211] = 4,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    ACTIONS(1114), 1,
      anon_sym_DOT,
    ACTIONS(1116), 1,
      aux_sym_select_element_token1,
    ACTIONS(1112), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11225] = 5,
    ACTIONS(1104), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1106), 1,
      anon_sym_LPAREN,
    ACTIONS(1108), 1,
      aux_sym_insert_values_spec_token1,
    STATE(117), 1,
      sym_insert_values_spec,
    STATE(644), 1,
      sym_insert_column_spec,
  [11241] = 3,
    ACTIONS(1120), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(636), 1,
      sym_using_timestamp_spec,
    ACTIONS(1118), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11253] = 5,
    ACTIONS(1122), 1,
      sym__string_literal,
    ACTIONS(1124), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1126), 1,
      aux_sym_create_index_token3,
    ACTIONS(1128), 1,
      sym_object_name,
    STATE(1223), 1,
      sym_index_name,
  [11269] = 3,
    ACTIONS(1120), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(650), 1,
      sym_using_timestamp_spec,
    ACTIONS(1130), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11281] = 5,
    ACTIONS(161), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(163), 1,
      sym_object_name,
    STATE(169), 1,
      sym_table_option_item,
    STATE(310), 1,
      sym_clustering_order,
    STATE(1078), 1,
      sym_table_option_name,
  [11297] = 5,
    ACTIONS(1071), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1073), 1,
      sym_object_name,
    STATE(518), 1,
      sym_from_spec,
    STATE(558), 1,
      sym_delete_column_item,
    STATE(705), 1,
      sym_delete_column_list,
  [11313] = 4,
    ACTIONS(1094), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1098), 1,
      aux_sym_role_with_options_token4,
    STATE(212), 1,
      sym_role_with_options,
    ACTIONS(1096), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11327] = 4,
    ACTIONS(1132), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(1134), 1,
      sym_object_name,
    STATE(188), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11340] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      sym_where_spec,
    STATE(533), 1,
      aux_sym_update_repeat1,
  [11353] = 4,
    ACTIONS(1138), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1140), 1,
      sym_object_name,
    STATE(767), 1,
      sym_column_definition,
    STATE(1009), 1,
      sym_primary_key_element,
  [11366] = 4,
    ACTIONS(1134), 1,
      sym_object_name,
    ACTIONS(1142), 1,
      aux_sym_delete_statement_token3,
    STATE(188), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11379] = 4,
    ACTIONS(1134), 1,
      sym_object_name,
    ACTIONS(1144), 1,
      aux_sym_delete_statement_token3,
    STATE(188), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11392] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      sym_where_spec,
    STATE(612), 1,
      aux_sym_update_repeat1,
  [11405] = 4,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    ACTIONS(1148), 1,
      anon_sym_COLON,
    ACTIONS(1150), 1,
      anon_sym_RBRACE,
    STATE(656), 1,
      aux_sym_assignment_tuple_repeat1,
  [11418] = 4,
    ACTIONS(1122), 1,
      sym__string_literal,
    ACTIONS(1128), 1,
      sym_object_name,
    ACTIONS(1152), 1,
      aux_sym_create_index_token3,
    STATE(1221), 1,
      sym_index_name,
  [11431] = 4,
    ACTIONS(1134), 1,
      sym_object_name,
    ACTIONS(1154), 1,
      aux_sym_delete_statement_token3,
    STATE(188), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11444] = 4,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    ACTIONS(1156), 1,
      anon_sym_COMMA,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
    STATE(572), 1,
      aux_sym_function_args_repeat1,
  [11457] = 3,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(536), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(1160), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11468] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      sym_where_spec,
    STATE(612), 1,
      aux_sym_update_repeat1,
  [11481] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      sym_where_spec,
    STATE(514), 1,
      aux_sym_update_repeat1,
  [11494] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1120), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(161), 1,
      sym_where_spec,
    STATE(760), 1,
      sym_using_timestamp_spec,
  [11507] = 4,
    ACTIONS(242), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1162), 1,
      anon_sym_DOT,
    ACTIONS(1164), 1,
      aux_sym_update_token2,
    STATE(1087), 1,
      sym_using_ttl_timestamp,
  [11520] = 1,
    ACTIONS(1166), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11527] = 4,
    ACTIONS(1134), 1,
      sym_object_name,
    ACTIONS(1168), 1,
      aux_sym_delete_statement_token3,
    STATE(188), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11540] = 4,
    ACTIONS(1134), 1,
      sym_object_name,
    ACTIONS(1170), 1,
      aux_sym_delete_statement_token3,
    STATE(188), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11553] = 3,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    STATE(849), 1,
      sym_order_direction,
    ACTIONS(177), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [11564] = 4,
    ACTIONS(1174), 1,
      sym_object_name,
    STATE(110), 1,
      sym_table_option_item,
    STATE(262), 1,
      sym_table_options,
    STATE(1078), 1,
      sym_table_option_name,
  [11577] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      sym_where_spec,
    STATE(612), 1,
      aux_sym_update_repeat1,
  [11590] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      sym_where_spec,
    STATE(503), 1,
      aux_sym_update_repeat1,
  [11603] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      sym_where_spec,
    STATE(612), 1,
      aux_sym_update_repeat1,
  [11616] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      sym_where_spec,
    STATE(497), 1,
      aux_sym_update_repeat1,
  [11629] = 4,
    ACTIONS(1176), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1178), 1,
      aux_sym_create_materialized_view_token1,
    STATE(527), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(684), 1,
      aux_sym_relation_elements_repeat1,
  [11642] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      sym_where_spec,
    STATE(612), 1,
      aux_sym_update_repeat1,
  [11655] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1120), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(190), 1,
      sym_where_spec,
    STATE(729), 1,
      sym_using_timestamp_spec,
  [11668] = 4,
    ACTIONS(242), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1180), 1,
      anon_sym_DOT,
    ACTIONS(1182), 1,
      aux_sym_update_token2,
    STATE(880), 1,
      sym_using_ttl_timestamp,
  [11681] = 4,
    ACTIONS(1138), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1140), 1,
      sym_object_name,
    STATE(767), 1,
      sym_column_definition,
    STATE(1268), 1,
      sym_primary_key_element,
  [11694] = 4,
    ACTIONS(1134), 1,
      sym_object_name,
    ACTIONS(1184), 1,
      aux_sym_delete_statement_token3,
    STATE(188), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11707] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      sym_where_spec,
    STATE(512), 1,
      aux_sym_update_repeat1,
  [11720] = 4,
    ACTIONS(1134), 1,
      sym_object_name,
    ACTIONS(1186), 1,
      aux_sym_delete_statement_token3,
    STATE(188), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11733] = 2,
    ACTIONS(1188), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1190), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11742] = 4,
    ACTIONS(1134), 1,
      sym_object_name,
    ACTIONS(1192), 1,
      aux_sym_delete_statement_token3,
    STATE(188), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11755] = 3,
    ACTIONS(1196), 1,
      aux_sym_create_materialized_view_token1,
    STATE(770), 1,
      sym_primary_key_column,
    ACTIONS(1194), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11766] = 4,
    ACTIONS(1176), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1198), 1,
      aux_sym_create_materialized_view_token1,
    STATE(675), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(676), 1,
      aux_sym_relation_elements_repeat1,
  [11779] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      sym_where_spec,
    STATE(612), 1,
      aux_sym_update_repeat1,
  [11792] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1120), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(184), 1,
      sym_where_spec,
    STATE(696), 1,
      sym_using_timestamp_spec,
  [11805] = 4,
    ACTIONS(1134), 1,
      sym_object_name,
    ACTIONS(1200), 1,
      aux_sym_delete_statement_token3,
    STATE(188), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11818] = 1,
    ACTIONS(1092), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11825] = 4,
    ACTIONS(1202), 1,
      aux_sym_timestamp_token1,
    ACTIONS(1204), 1,
      aux_sym_ttl_token1,
    STATE(128), 1,
      sym_timestamp,
    STATE(183), 1,
      sym_ttl,
  [11838] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      sym_where_spec,
    STATE(612), 1,
      aux_sym_update_repeat1,
  [11851] = 4,
    ACTIONS(1134), 1,
      sym_object_name,
    ACTIONS(1206), 1,
      aux_sym_delete_statement_token3,
    STATE(188), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11864] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      sym_where_spec,
    STATE(517), 1,
      aux_sym_update_repeat1,
  [11877] = 3,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(1208), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11888] = 4,
    ACTIONS(1174), 1,
      sym_object_name,
    STATE(110), 1,
      sym_table_option_item,
    STATE(378), 1,
      sym_table_options,
    STATE(1078), 1,
      sym_table_option_name,
  [11901] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      sym_where_spec,
    STATE(612), 1,
      aux_sym_update_repeat1,
  [11914] = 4,
    ACTIONS(1134), 1,
      sym_object_name,
    ACTIONS(1210), 1,
      aux_sym_delete_statement_token3,
    STATE(188), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11927] = 4,
    ACTIONS(1134), 1,
      sym_object_name,
    ACTIONS(1212), 1,
      aux_sym_delete_statement_token3,
    STATE(188), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11940] = 4,
    ACTIONS(1174), 1,
      sym_object_name,
    STATE(110), 1,
      sym_table_option_item,
    STATE(314), 1,
      sym_table_options,
    STATE(1078), 1,
      sym_table_option_name,
  [11953] = 4,
    ACTIONS(1134), 1,
      sym_object_name,
    ACTIONS(1214), 1,
      aux_sym_delete_statement_token3,
    STATE(188), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11966] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      sym_where_spec,
    STATE(538), 1,
      aux_sym_update_repeat1,
  [11979] = 4,
    ACTIONS(1134), 1,
      sym_object_name,
    ACTIONS(1216), 1,
      aux_sym_delete_statement_token3,
    STATE(188), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11992] = 4,
    ACTIONS(1134), 1,
      sym_object_name,
    ACTIONS(1218), 1,
      aux_sym_delete_statement_token3,
    STATE(188), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [12005] = 4,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      sym_where_spec,
    STATE(528), 1,
      aux_sym_update_repeat1,
  [12018] = 3,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(1222), 1,
      anon_sym_RPAREN,
    STATE(598), 1,
      aux_sym_create_function_repeat1,
  [12028] = 3,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(1224), 1,
      anon_sym_RPAREN,
    STATE(671), 1,
      aux_sym_create_function_repeat1,
  [12038] = 3,
    ACTIONS(1226), 1,
      anon_sym_COMMA,
    ACTIONS(1228), 1,
      anon_sym_RBRACE,
    STATE(600), 1,
      aux_sym_replication_list_repeat1,
  [12048] = 3,
    ACTIONS(1230), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1232), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1234), 1,
      aux_sym_update_token1,
  [12058] = 3,
    ACTIONS(1236), 1,
      anon_sym_COMMA,
    ACTIONS(1238), 1,
      aux_sym_from_spec_token1,
    STATE(617), 1,
      aux_sym_select_elements_repeat1,
  [12068] = 3,
    ACTIONS(1240), 1,
      anon_sym_RPAREN,
    ACTIONS(1242), 1,
      sym_object_name,
    STATE(604), 1,
      sym_param,
  [12078] = 2,
    ACTIONS(1116), 1,
      aux_sym_select_element_token1,
    ACTIONS(1112), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12086] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(943), 1,
      sym_return_mode,
  [12096] = 2,
    ACTIONS(1250), 1,
      anon_sym_LBRACK,
    ACTIONS(1248), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12104] = 3,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(1252), 1,
      anon_sym_RPAREN,
    STATE(641), 1,
      aux_sym_create_function_repeat1,
  [12114] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(947), 1,
      sym_return_mode,
  [12124] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1256), 1,
      aux_sym_from_spec_token1,
    STATE(635), 1,
      aux_sym_delete_column_list_repeat1,
  [12134] = 3,
    ACTIONS(1174), 1,
      sym_object_name,
    STATE(169), 1,
      sym_table_option_item,
    STATE(1078), 1,
      sym_table_option_name,
  [12144] = 3,
    ACTIONS(1258), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    ACTIONS(1260), 1,
      sym_object_name,
    STATE(389), 1,
      sym_alter_table_drop_column_list,
  [12154] = 3,
    ACTIONS(1262), 1,
      sym_object_name,
    STATE(585), 1,
      sym_column_definition,
    STATE(926), 1,
      sym_column_definition_list,
  [12164] = 3,
    ACTIONS(1242), 1,
      sym_object_name,
    ACTIONS(1264), 1,
      anon_sym_RPAREN,
    STATE(666), 1,
      sym_param,
  [12174] = 3,
    ACTIONS(1266), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1268), 1,
      sym_object_name,
    STATE(1206), 1,
      sym_keyspace_name,
  [12184] = 2,
    ACTIONS(1270), 1,
      aux_sym_resource_token1,
    ACTIONS(1272), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [12192] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1276), 1,
      anon_sym_RBRACE,
    STATE(591), 1,
      aux_sym_assignment_map_repeat1,
  [12202] = 3,
    ACTIONS(1278), 1,
      anon_sym_COMMA,
    ACTIONS(1280), 1,
      anon_sym_RBRACE,
    STATE(610), 1,
      aux_sym_option_hash_repeat1,
  [12212] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1282), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
  [12222] = 3,
    ACTIONS(1284), 1,
      sym_object_name,
    STATE(164), 1,
      sym_alter_type_rename_item,
    STATE(334), 1,
      sym_alter_type_rename_list,
  [12232] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1286), 1,
      anon_sym_RPAREN,
    STATE(586), 1,
      aux_sym_relation_element_repeat2,
  [12242] = 3,
    ACTIONS(1288), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1290), 1,
      sym_object_name,
    STATE(1169), 1,
      sym_trigger_name,
  [12252] = 3,
    ACTIONS(1292), 1,
      anon_sym_COMMA,
    ACTIONS(1295), 1,
      anon_sym_GT,
    STATE(571), 1,
      aux_sym_data_type_definition_repeat1,
  [12262] = 3,
    ACTIONS(1156), 1,
      anon_sym_COMMA,
    ACTIONS(1297), 1,
      anon_sym_RPAREN,
    STATE(686), 1,
      aux_sym_function_args_repeat1,
  [12272] = 3,
    ACTIONS(1299), 1,
      anon_sym_DOT,
    ACTIONS(1301), 1,
      aux_sym_where_spec_token1,
    STATE(965), 1,
      sym_materialized_view_where,
  [12282] = 3,
    ACTIONS(1303), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1305), 1,
      sym_object_name,
    STATE(1158), 1,
      sym_user_name,
  [12292] = 3,
    ACTIONS(1307), 1,
      anon_sym_COMMA,
    ACTIONS(1309), 1,
      anon_sym_RPAREN,
    STATE(682), 1,
      aux_sym_relation_element_repeat1,
  [12302] = 3,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
    STATE(614), 1,
      aux_sym_create_type_repeat1,
  [12312] = 3,
    ACTIONS(242), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1315), 1,
      aux_sym_update_token2,
    STATE(1053), 1,
      sym_using_ttl_timestamp,
  [12322] = 3,
    ACTIONS(1317), 1,
      sym__string_literal,
    ACTIONS(1319), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1321), 1,
      sym_object_name,
  [12332] = 3,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    ACTIONS(1323), 1,
      anon_sym_RPAREN,
    STATE(595), 1,
      aux_sym_create_type_repeat1,
  [12342] = 3,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_create_type_repeat1,
  [12352] = 3,
    ACTIONS(1242), 1,
      sym_object_name,
    ACTIONS(1327), 1,
      anon_sym_RPAREN,
    STATE(619), 1,
      sym_param,
  [12362] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(973), 1,
      sym_return_mode,
  [12372] = 3,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
    STATE(625), 1,
      aux_sym_create_function_repeat1,
  [12382] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(978), 1,
      sym_return_mode,
  [12392] = 3,
    ACTIONS(1331), 1,
      anon_sym_COMMA,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
    STATE(658), 1,
      aux_sym_column_definition_list_repeat1,
  [12402] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
  [12412] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(1298), 1,
      sym_return_mode,
  [12422] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_relation_element_repeat2,
  [12432] = 3,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
    STATE(641), 1,
      aux_sym_create_function_repeat1,
  [12442] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(894), 1,
      sym_return_mode,
  [12452] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1339), 1,
      anon_sym_RBRACE,
    STATE(642), 1,
      aux_sym_assignment_map_repeat1,
  [12462] = 3,
    ACTIONS(1341), 1,
      anon_sym_COMMA,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
    STATE(592), 1,
      aux_sym_relation_element_repeat1,
  [12472] = 3,
    ACTIONS(1305), 1,
      sym_object_name,
    ACTIONS(1346), 1,
      aux_sym_delete_statement_token2,
    STATE(362), 1,
      sym_user_name,
  [12482] = 3,
    ACTIONS(1242), 1,
      sym_object_name,
    ACTIONS(1348), 1,
      anon_sym_RPAREN,
    STATE(583), 1,
      sym_param,
  [12492] = 3,
    ACTIONS(1350), 1,
      anon_sym_COMMA,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
    STATE(595), 1,
      aux_sym_create_type_repeat1,
  [12502] = 3,
    ACTIONS(1355), 1,
      sym__string_literal,
    STATE(631), 1,
      sym_replication_list_item,
    STATE(1004), 1,
      sym_replication_list,
  [12512] = 3,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
    STATE(579), 1,
      aux_sym_create_type_repeat1,
  [12522] = 3,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(1359), 1,
      anon_sym_RPAREN,
    STATE(641), 1,
      aux_sym_create_function_repeat1,
  [12532] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(1242), 1,
      sym_return_mode,
  [12542] = 3,
    ACTIONS(1361), 1,
      anon_sym_COMMA,
    ACTIONS(1364), 1,
      anon_sym_RBRACE,
    STATE(600), 1,
      aux_sym_replication_list_repeat1,
  [12552] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(1007), 1,
      sym_return_mode,
  [12562] = 3,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    ACTIONS(1366), 1,
      anon_sym_RBRACK,
    STATE(659), 1,
      aux_sym_assignment_tuple_repeat1,
  [12572] = 3,
    ACTIONS(1368), 1,
      anon_sym_COMMA,
    ACTIONS(1371), 1,
      anon_sym_RPAREN,
    STATE(603), 1,
      aux_sym_init_cond_hash_repeat1,
  [12582] = 3,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(1373), 1,
      anon_sym_RPAREN,
    STATE(648), 1,
      aux_sym_create_function_repeat1,
  [12592] = 3,
    ACTIONS(1375), 1,
      anon_sym_COMMA,
    ACTIONS(1378), 1,
      anon_sym_RPAREN,
    STATE(605), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12602] = 3,
    ACTIONS(1242), 1,
      sym_object_name,
    ACTIONS(1380), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      sym_param,
  [12612] = 3,
    ACTIONS(1382), 1,
      anon_sym_COMMA,
    ACTIONS(1384), 1,
      anon_sym_RPAREN,
    STATE(655), 1,
      aux_sym_expression_list_repeat1,
  [12622] = 3,
    ACTIONS(1386), 1,
      anon_sym_COMMA,
    ACTIONS(1388), 1,
      anon_sym_GT,
    STATE(571), 1,
      aux_sym_data_type_definition_repeat1,
  [12632] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(1012), 1,
      sym_return_mode,
  [12642] = 3,
    ACTIONS(1390), 1,
      anon_sym_COMMA,
    ACTIONS(1393), 1,
      anon_sym_RBRACE,
    STATE(610), 1,
      aux_sym_option_hash_repeat1,
  [12652] = 3,
    ACTIONS(1262), 1,
      sym_object_name,
    STATE(585), 1,
      sym_column_definition,
    STATE(1026), 1,
      sym_column_definition_list,
  [12662] = 3,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    ACTIONS(1398), 1,
      aux_sym_where_spec_token1,
    STATE(612), 1,
      aux_sym_update_repeat1,
  [12672] = 3,
    ACTIONS(1278), 1,
      anon_sym_COMMA,
    ACTIONS(1400), 1,
      anon_sym_RBRACE,
    STATE(566), 1,
      aux_sym_option_hash_repeat1,
  [12682] = 3,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    ACTIONS(1402), 1,
      anon_sym_RPAREN,
    STATE(595), 1,
      aux_sym_create_type_repeat1,
  [12692] = 3,
    ACTIONS(1242), 1,
      sym_object_name,
    ACTIONS(1404), 1,
      anon_sym_RPAREN,
    STATE(547), 1,
      sym_param,
  [12702] = 3,
    ACTIONS(1069), 1,
      sym_object_name,
    STATE(553), 1,
      sym_function_call,
    STATE(712), 1,
      sym_select_element,
  [12712] = 3,
    ACTIONS(1236), 1,
      anon_sym_COMMA,
    ACTIONS(1406), 1,
      aux_sym_from_spec_token1,
    STATE(678), 1,
      aux_sym_select_elements_repeat1,
  [12722] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(1033), 1,
      sym_return_mode,
  [12732] = 3,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(1408), 1,
      anon_sym_RPAREN,
    STATE(670), 1,
      aux_sym_create_function_repeat1,
  [12742] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(1037), 1,
      sym_return_mode,
  [12752] = 3,
    ACTIONS(1410), 1,
      anon_sym_COMMA,
    ACTIONS(1413), 1,
      anon_sym_RPAREN,
    STATE(621), 1,
      aux_sym_column_definition_list_repeat1,
  [12762] = 3,
    ACTIONS(1415), 1,
      anon_sym_COMMA,
    ACTIONS(1417), 1,
      anon_sym_RPAREN,
    STATE(603), 1,
      aux_sym_init_cond_hash_repeat1,
  [12772] = 3,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(1419), 1,
      anon_sym_RPAREN,
    STATE(641), 1,
      aux_sym_create_function_repeat1,
  [12782] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(861), 1,
      sym_return_mode,
  [12792] = 3,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(1421), 1,
      anon_sym_RPAREN,
    STATE(641), 1,
      aux_sym_create_function_repeat1,
  [12802] = 3,
    ACTIONS(1423), 1,
      anon_sym_COMMA,
    ACTIONS(1425), 1,
      anon_sym_RPAREN,
    STATE(605), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12812] = 3,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(1427), 1,
      anon_sym_RPAREN,
    STATE(556), 1,
      aux_sym_create_function_repeat1,
  [12822] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(857), 1,
      sym_return_mode,
  [12832] = 3,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    ACTIONS(1429), 1,
      anon_sym_RPAREN,
    STATE(475), 1,
      aux_sym_assignment_tuple_repeat1,
  [12842] = 3,
    ACTIONS(1355), 1,
      sym__string_literal,
    STATE(631), 1,
      sym_replication_list_item,
    STATE(988), 1,
      sym_replication_list,
  [12852] = 3,
    ACTIONS(1226), 1,
      anon_sym_COMMA,
    ACTIONS(1431), 1,
      anon_sym_RBRACE,
    STATE(549), 1,
      aux_sym_replication_list_repeat1,
  [12862] = 3,
    ACTIONS(1242), 1,
      sym_object_name,
    ACTIONS(1433), 1,
      anon_sym_RPAREN,
    STATE(627), 1,
      sym_param,
  [12872] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(911), 1,
      sym_return_mode,
  [12882] = 3,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(1435), 1,
      anon_sym_RPAREN,
    STATE(623), 1,
      aux_sym_create_function_repeat1,
  [12892] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(1437), 1,
      aux_sym_from_spec_token1,
    STATE(652), 1,
      aux_sym_delete_column_list_repeat1,
  [12902] = 1,
    ACTIONS(1130), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12908] = 3,
    ACTIONS(1262), 1,
      sym_object_name,
    STATE(585), 1,
      sym_column_definition,
    STATE(906), 1,
      sym_column_definition_list,
  [12918] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1439), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
  [12928] = 2,
    ACTIONS(1443), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1441), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [12936] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(969), 1,
      sym_return_mode,
  [12946] = 3,
    ACTIONS(1445), 1,
      anon_sym_COMMA,
    ACTIONS(1448), 1,
      anon_sym_RPAREN,
    STATE(641), 1,
      aux_sym_create_function_repeat1,
  [12956] = 3,
    ACTIONS(1450), 1,
      anon_sym_COMMA,
    ACTIONS(1453), 1,
      anon_sym_RBRACE,
    STATE(642), 1,
      aux_sym_assignment_map_repeat1,
  [12966] = 3,
    ACTIONS(1307), 1,
      anon_sym_COMMA,
    ACTIONS(1455), 1,
      anon_sym_RPAREN,
    STATE(679), 1,
      aux_sym_relation_element_repeat1,
  [12976] = 3,
    ACTIONS(1104), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1108), 1,
      aux_sym_insert_values_spec_token1,
    STATE(124), 1,
      sym_insert_values_spec,
  [12986] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(1062), 1,
      sym_return_mode,
  [12996] = 3,
    ACTIONS(1415), 1,
      anon_sym_COMMA,
    ACTIONS(1457), 1,
      anon_sym_RPAREN,
    STATE(622), 1,
      aux_sym_init_cond_hash_repeat1,
  [13006] = 3,
    ACTIONS(1423), 1,
      anon_sym_COMMA,
    ACTIONS(1459), 1,
      anon_sym_RPAREN,
    STATE(626), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13016] = 3,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(1461), 1,
      anon_sym_RPAREN,
    STATE(641), 1,
      aux_sym_create_function_repeat1,
  [13026] = 3,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    ACTIONS(1463), 1,
      anon_sym_RPAREN,
    STATE(629), 1,
      aux_sym_assignment_tuple_repeat1,
  [13036] = 1,
    ACTIONS(1465), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13042] = 3,
    ACTIONS(1386), 1,
      anon_sym_COMMA,
    ACTIONS(1467), 1,
      anon_sym_GT,
    STATE(608), 1,
      aux_sym_data_type_definition_repeat1,
  [13052] = 3,
    ACTIONS(1469), 1,
      anon_sym_COMMA,
    ACTIONS(1472), 1,
      aux_sym_from_spec_token1,
    STATE(652), 1,
      aux_sym_delete_column_list_repeat1,
  [13062] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(1226), 1,
      sym_return_mode,
  [13072] = 3,
    ACTIONS(1301), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1474), 1,
      anon_sym_DOT,
    STATE(1080), 1,
      sym_materialized_view_where,
  [13082] = 3,
    ACTIONS(1476), 1,
      anon_sym_COMMA,
    ACTIONS(1479), 1,
      anon_sym_RPAREN,
    STATE(655), 1,
      aux_sym_expression_list_repeat1,
  [13092] = 3,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    ACTIONS(1481), 1,
      anon_sym_RBRACE,
    STATE(475), 1,
      aux_sym_assignment_tuple_repeat1,
  [13102] = 3,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    ACTIONS(1483), 1,
      anon_sym_RPAREN,
    STATE(687), 1,
      aux_sym_create_type_repeat1,
  [13112] = 3,
    ACTIONS(1485), 1,
      anon_sym_COMMA,
    ACTIONS(1487), 1,
      anon_sym_RPAREN,
    STATE(621), 1,
      aux_sym_column_definition_list_repeat1,
  [13122] = 3,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    ACTIONS(1489), 1,
      anon_sym_RBRACK,
    STATE(475), 1,
      aux_sym_assignment_tuple_repeat1,
  [13132] = 3,
    ACTIONS(1262), 1,
      sym_object_name,
    STATE(585), 1,
      sym_column_definition,
    STATE(1288), 1,
      sym_column_definition_list,
  [13142] = 3,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    ACTIONS(1491), 1,
      anon_sym_RPAREN,
    STATE(595), 1,
      aux_sym_create_type_repeat1,
  [13152] = 3,
    ACTIONS(1242), 1,
      sym_object_name,
    ACTIONS(1493), 1,
      anon_sym_RPAREN,
    STATE(548), 1,
      sym_param,
  [13162] = 3,
    ACTIONS(1301), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1495), 1,
      anon_sym_DOT,
    STATE(1217), 1,
      sym_materialized_view_where,
  [13172] = 3,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    ACTIONS(1497), 1,
      anon_sym_RPAREN,
    STATE(475), 1,
      aux_sym_assignment_tuple_repeat1,
  [13182] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(929), 1,
      sym_return_mode,
  [13192] = 3,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(1499), 1,
      anon_sym_RPAREN,
    STATE(589), 1,
      aux_sym_create_function_repeat1,
  [13202] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1497), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
  [13212] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1497), 1,
      anon_sym_RPAREN,
    STATE(567), 1,
      aux_sym_relation_element_repeat2,
  [13222] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(1092), 1,
      sym_return_mode,
  [13232] = 3,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(1501), 1,
      anon_sym_RPAREN,
    STATE(641), 1,
      aux_sym_create_function_repeat1,
  [13242] = 3,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(1503), 1,
      anon_sym_RPAREN,
    STATE(641), 1,
      aux_sym_create_function_repeat1,
  [13252] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(1185), 1,
      sym_return_mode,
  [13262] = 3,
    ACTIONS(1382), 1,
      anon_sym_COMMA,
    ACTIONS(1505), 1,
      anon_sym_RPAREN,
    STATE(607), 1,
      aux_sym_expression_list_repeat1,
  [13272] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(1096), 1,
      sym_return_mode,
  [13282] = 3,
    ACTIONS(1507), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1510), 1,
      aux_sym_create_materialized_view_token1,
    STATE(675), 1,
      aux_sym_materialized_view_where_repeat1,
  [13292] = 3,
    ACTIONS(145), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1512), 1,
      aux_sym_create_materialized_view_token1,
    STATE(70), 1,
      aux_sym_relation_elements_repeat1,
  [13302] = 3,
    ACTIONS(1156), 1,
      anon_sym_COMMA,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
    STATE(572), 1,
      aux_sym_function_args_repeat1,
  [13312] = 3,
    ACTIONS(1514), 1,
      anon_sym_COMMA,
    ACTIONS(1517), 1,
      aux_sym_from_spec_token1,
    STATE(678), 1,
      aux_sym_select_elements_repeat1,
  [13322] = 3,
    ACTIONS(1307), 1,
      anon_sym_COMMA,
    ACTIONS(1519), 1,
      anon_sym_RPAREN,
    STATE(592), 1,
      aux_sym_relation_element_repeat1,
  [13332] = 3,
    ACTIONS(1307), 1,
      anon_sym_COMMA,
    ACTIONS(1521), 1,
      anon_sym_RPAREN,
    STATE(685), 1,
      aux_sym_relation_element_repeat1,
  [13342] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(1114), 1,
      sym_return_mode,
  [13352] = 3,
    ACTIONS(1307), 1,
      anon_sym_COMMA,
    ACTIONS(1523), 1,
      anon_sym_RPAREN,
    STATE(592), 1,
      aux_sym_relation_element_repeat1,
  [13362] = 3,
    ACTIONS(1301), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1525), 1,
      anon_sym_DOT,
    STATE(1129), 1,
      sym_materialized_view_where,
  [13372] = 3,
    ACTIONS(145), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1198), 1,
      aux_sym_create_materialized_view_token1,
    STATE(70), 1,
      aux_sym_relation_elements_repeat1,
  [13382] = 3,
    ACTIONS(1307), 1,
      anon_sym_COMMA,
    ACTIONS(1527), 1,
      anon_sym_RPAREN,
    STATE(592), 1,
      aux_sym_relation_element_repeat1,
  [13392] = 3,
    ACTIONS(1529), 1,
      anon_sym_COMMA,
    ACTIONS(1532), 1,
      anon_sym_RPAREN,
    STATE(686), 1,
      aux_sym_function_args_repeat1,
  [13402] = 3,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    ACTIONS(1534), 1,
      anon_sym_RPAREN,
    STATE(595), 1,
      aux_sym_create_type_repeat1,
  [13412] = 2,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    ACTIONS(1532), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13420] = 3,
    ACTIONS(1355), 1,
      sym__string_literal,
    STATE(631), 1,
      sym_replication_list_item,
    STATE(890), 1,
      sym_replication_list,
  [13430] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(1140), 1,
      sym_return_mode,
  [13440] = 3,
    ACTIONS(1244), 1,
      aux_sym_create_function_token1,
    ACTIONS(1246), 1,
      aux_sym_return_mode_token1,
    STATE(1145), 1,
      sym_return_mode,
  [13450] = 3,
    ACTIONS(242), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1536), 1,
      aux_sym_update_token2,
    STATE(1323), 1,
      sym_using_ttl_timestamp,
  [13460] = 3,
    ACTIONS(1104), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1108), 1,
      aux_sym_insert_values_spec_token1,
    STATE(121), 1,
      sym_insert_values_spec,
  [13470] = 2,
    ACTIONS(1538), 1,
      sym_object_name,
    STATE(1008), 1,
      sym_table_name,
  [13477] = 2,
    ACTIONS(1540), 1,
      sym_object_name,
    STATE(1074), 1,
      sym_user_name,
  [13484] = 2,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    STATE(135), 1,
      sym_where_spec,
  [13491] = 2,
    ACTIONS(1542), 1,
      sym_object_name,
    STATE(543), 1,
      sym_assignment_element,
  [13498] = 1,
    ACTIONS(1544), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13503] = 1,
    ACTIONS(1546), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13508] = 2,
    ACTIONS(1548), 1,
      sym_object_name,
    STATE(1157), 1,
      sym_clustering_key_list,
  [13515] = 1,
    ACTIONS(1532), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13520] = 2,
    ACTIONS(1550), 1,
      aux_sym_durable_writes_token1,
    STATE(385), 1,
      sym_durable_writes,
  [13527] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(210), 1,
      sym_role_name,
  [13534] = 2,
    ACTIONS(1554), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1556), 1,
      sym_object_name,
  [13541] = 2,
    ACTIONS(1558), 1,
      aux_sym_from_spec_token1,
    STATE(529), 1,
      sym_from_spec,
  [13548] = 2,
    ACTIONS(1538), 1,
      sym_object_name,
    STATE(480), 1,
      sym_table_name,
  [13555] = 2,
    ACTIONS(1301), 1,
      aux_sym_where_spec_token1,
    STATE(1178), 1,
      sym_materialized_view_where,
  [13562] = 2,
    ACTIONS(1560), 1,
      sym_object_name,
    STATE(214), 1,
      sym_if_condition,
  [13569] = 2,
    ACTIONS(1558), 1,
      aux_sym_from_spec_token1,
    STATE(72), 1,
      sym_from_spec,
  [13576] = 2,
    ACTIONS(1542), 1,
      sym_object_name,
    STATE(493), 1,
      sym_assignment_element,
  [13583] = 2,
    ACTIONS(1542), 1,
      sym_object_name,
    STATE(821), 1,
      sym_assignment_element,
  [13590] = 1,
    ACTIONS(1517), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13595] = 2,
    ACTIONS(1202), 1,
      aux_sym_timestamp_token1,
    STATE(228), 1,
      sym_timestamp,
  [13602] = 2,
    ACTIONS(1204), 1,
      aux_sym_ttl_token1,
    STATE(228), 1,
      sym_ttl,
  [13609] = 1,
    ACTIONS(1510), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13614] = 1,
    ACTIONS(1562), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13619] = 2,
    ACTIONS(1564), 1,
      anon_sym_DOT,
    ACTIONS(1566), 1,
      anon_sym_LPAREN,
  [13626] = 1,
    ACTIONS(1568), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [13631] = 2,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    STATE(569), 1,
      sym_assignment_tuple,
  [13638] = 2,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_assignment_tuple,
  [13645] = 2,
    ACTIONS(1570), 1,
      aux_sym_truncate_token2,
    ACTIONS(1572), 1,
      sym_object_name,
  [13652] = 2,
    ACTIONS(1574), 1,
      anon_sym_DOT,
    ACTIONS(1576), 1,
      aux_sym_create_index_token3,
  [13659] = 2,
    ACTIONS(1578), 1,
      sym_object_name,
    STATE(1183), 1,
      sym_column_list,
  [13666] = 2,
    ACTIONS(1580), 1,
      anon_sym_DOT,
    ACTIONS(1582), 1,
      anon_sym_LPAREN,
  [13673] = 2,
    ACTIONS(1584), 1,
      aux_sym_resource_token5,
    ACTIONS(1586), 1,
      aux_sym_drop_aggregate_token1,
  [13680] = 2,
    ACTIONS(1588), 1,
      anon_sym_DOT,
    ACTIONS(1590), 1,
      anon_sym_LPAREN,
  [13687] = 2,
    ACTIONS(1592), 1,
      anon_sym_DOT,
    ACTIONS(1594), 1,
      aux_sym_using_timestamp_spec_token1,
  [13694] = 2,
    ACTIONS(1596), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1598), 1,
      sym_object_name,
  [13701] = 2,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    STATE(184), 1,
      sym_where_spec,
  [13708] = 2,
    ACTIONS(1600), 1,
      aux_sym_role_with_options_token1,
    STATE(105), 1,
      sym_user_password,
  [13715] = 2,
    ACTIONS(1602), 1,
      anon_sym_DOT,
    ACTIONS(1604), 1,
      anon_sym_LPAREN,
  [13722] = 2,
    ACTIONS(1301), 1,
      aux_sym_where_spec_token1,
    STATE(1218), 1,
      sym_materialized_view_where,
  [13729] = 1,
    ACTIONS(1606), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13734] = 1,
    ACTIONS(1479), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13739] = 2,
    ACTIONS(1608), 1,
      sym_object_name,
    STATE(715), 1,
      sym_column_not_null,
  [13746] = 1,
    ACTIONS(1472), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13751] = 2,
    ACTIONS(1540), 1,
      sym_object_name,
    STATE(1329), 1,
      sym_user_name,
  [13758] = 2,
    ACTIONS(1301), 1,
      aux_sym_where_spec_token1,
    STATE(1081), 1,
      sym_materialized_view_where,
  [13765] = 2,
    ACTIONS(1610), 1,
      sym__string_literal,
    STATE(347), 1,
      sym_trigger_class,
  [13772] = 2,
    ACTIONS(1578), 1,
      sym_object_name,
    STATE(1077), 1,
      sym_column_list,
  [13779] = 1,
    ACTIONS(1612), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13784] = 2,
    ACTIONS(1614), 1,
      anon_sym_DOT,
    ACTIONS(1616), 1,
      anon_sym_LPAREN,
  [13791] = 2,
    ACTIONS(1618), 1,
      anon_sym_DOT,
    ACTIONS(1620), 1,
      aux_sym_select_element_token1,
  [13798] = 2,
    ACTIONS(1578), 1,
      sym_object_name,
    STATE(888), 1,
      sym_column_list,
  [13805] = 2,
    ACTIONS(1622), 1,
      anon_sym_DOT,
    ACTIONS(1624), 1,
      anon_sym_LPAREN,
  [13812] = 2,
    ACTIONS(1538), 1,
      sym_object_name,
    STATE(1257), 1,
      sym_table_name,
  [13819] = 2,
    ACTIONS(1262), 1,
      sym_object_name,
    STATE(767), 1,
      sym_column_definition,
  [13826] = 2,
    ACTIONS(1626), 1,
      sym_object_name,
    STATE(1318), 1,
      sym_trigger_name,
  [13833] = 2,
    ACTIONS(1578), 1,
      sym_object_name,
    STATE(1262), 1,
      sym_column_list,
  [13840] = 2,
    ACTIONS(1548), 1,
      sym_object_name,
    STATE(1058), 1,
      sym_clustering_key_list,
  [13847] = 2,
    ACTIONS(1628), 1,
      sym__string_literal,
    STATE(613), 1,
      sym_option_hash_item,
  [13854] = 2,
    ACTIONS(1578), 1,
      sym_object_name,
    STATE(1263), 1,
      sym_column_list,
  [13861] = 2,
    ACTIONS(1538), 1,
      sym_object_name,
    STATE(989), 1,
      sym_table_name,
  [13868] = 1,
    ACTIONS(1448), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13873] = 2,
    ACTIONS(1538), 1,
      sym_object_name,
    STATE(852), 1,
      sym_table_name,
  [13880] = 2,
    ACTIONS(1630), 1,
      anon_sym_DOT,
    ACTIONS(1632), 1,
      anon_sym_LPAREN,
  [13887] = 2,
    ACTIONS(1550), 1,
      aux_sym_durable_writes_token1,
    STATE(324), 1,
      sym_durable_writes,
  [13894] = 2,
    ACTIONS(1634), 1,
      anon_sym_DOT,
    ACTIONS(1636), 1,
      aux_sym_create_index_token3,
  [13901] = 2,
    ACTIONS(1638), 1,
      sym_object_name,
    STATE(736), 1,
      sym_delete_column_item,
  [13908] = 2,
    ACTIONS(127), 1,
      aux_sym_where_spec_token1,
    STATE(190), 1,
      sym_where_spec,
  [13915] = 2,
    ACTIONS(1202), 1,
      aux_sym_timestamp_token1,
    STATE(507), 1,
      sym_timestamp,
  [13922] = 2,
    ACTIONS(1640), 1,
      sym_object_name,
    STATE(779), 1,
      sym_init_cond_hash_item,
  [13929] = 1,
    ACTIONS(1642), 2,
      sym__string_literal,
      sym__decimal_literal,
  [13934] = 1,
    ACTIONS(1644), 2,
      sym__string_literal,
      sym__decimal_literal,
  [13939] = 2,
    ACTIONS(1301), 1,
      aux_sym_where_spec_token1,
    STATE(1294), 1,
      sym_materialized_view_where,
  [13946] = 2,
    ACTIONS(1578), 1,
      sym_object_name,
    STATE(1297), 1,
      sym_column_list,
  [13953] = 1,
    ACTIONS(1413), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13958] = 2,
    ACTIONS(1558), 1,
      aux_sym_from_spec_token1,
    STATE(74), 1,
      sym_from_spec,
  [13965] = 2,
    ACTIONS(1608), 1,
      sym_object_name,
    STATE(516), 1,
      sym_column_not_null,
  [13972] = 1,
    ACTIONS(1646), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13977] = 2,
    ACTIONS(1542), 1,
      sym_object_name,
    STATE(513), 1,
      sym_assignment_element,
  [13984] = 1,
    ACTIONS(1648), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13989] = 1,
    ACTIONS(1393), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13994] = 1,
    ACTIONS(1650), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13999] = 1,
    ACTIONS(1378), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14004] = 2,
    ACTIONS(1652), 1,
      anon_sym_DOT,
    ACTIONS(1654), 1,
      aux_sym_select_element_token1,
  [14011] = 2,
    ACTIONS(1656), 1,
      anon_sym_DOT,
    ACTIONS(1658), 1,
      anon_sym_LPAREN,
  [14018] = 2,
    ACTIONS(1660), 1,
      sym_object_name,
    STATE(1085), 1,
      sym_keyspace_name,
  [14025] = 1,
    ACTIONS(1371), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14030] = 2,
    ACTIONS(1578), 1,
      sym_object_name,
    STATE(881), 1,
      sym_column_list,
  [14037] = 2,
    ACTIONS(1550), 1,
      aux_sym_durable_writes_token1,
    STATE(301), 1,
      sym_durable_writes,
  [14044] = 1,
    ACTIONS(1662), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14049] = 1,
    ACTIONS(1364), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14054] = 1,
    ACTIONS(1664), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14059] = 2,
    ACTIONS(1242), 1,
      sym_object_name,
    STATE(754), 1,
      sym_param,
  [14066] = 2,
    ACTIONS(1542), 1,
      sym_object_name,
    STATE(522), 1,
      sym_assignment_element,
  [14073] = 2,
    ACTIONS(1666), 1,
      anon_sym_COMMA,
    ACTIONS(1668), 1,
      anon_sym_RPAREN,
  [14080] = 2,
    ACTIONS(1578), 1,
      sym_object_name,
    STATE(1321), 1,
      sym_column_list,
  [14087] = 2,
    ACTIONS(1670), 1,
      sym_object_name,
    STATE(1000), 1,
      sym_partition_key_list,
  [14094] = 2,
    ACTIONS(1672), 1,
      anon_sym_DOT,
    ACTIONS(1674), 1,
      anon_sym_LPAREN,
  [14101] = 2,
    ACTIONS(1083), 1,
      anon_sym_LBRACE,
    STATE(207), 1,
      sym_option_hash,
  [14108] = 2,
    ACTIONS(1676), 1,
      anon_sym_DOT,
    ACTIONS(1678), 1,
      anon_sym_LPAREN,
  [14115] = 2,
    ACTIONS(1680), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1682), 1,
      sym_object_name,
  [14122] = 2,
    ACTIONS(1684), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1686), 1,
      sym_object_name,
  [14129] = 2,
    ACTIONS(1688), 1,
      anon_sym_DOT,
    ACTIONS(1690), 1,
      anon_sym_LPAREN,
  [14136] = 2,
    ACTIONS(1610), 1,
      sym__string_literal,
    STATE(358), 1,
      sym_trigger_class,
  [14143] = 2,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_assignment_tuple,
  [14150] = 1,
    ACTIONS(1344), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14155] = 2,
    ACTIONS(1692), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1694), 1,
      sym_object_name,
  [14162] = 2,
    ACTIONS(1600), 1,
      aux_sym_role_with_options_token1,
    STATE(116), 1,
      sym_user_password,
  [14169] = 2,
    ACTIONS(1696), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1698), 1,
      sym_object_name,
  [14176] = 2,
    ACTIONS(1700), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1702), 1,
      sym_object_name,
  [14183] = 2,
    ACTIONS(1704), 1,
      sym__string_literal,
    ACTIONS(1706), 1,
      sym_object_name,
  [14190] = 2,
    ACTIONS(1708), 1,
      sym__string_literal,
    ACTIONS(1710), 1,
      sym_object_name,
  [14197] = 2,
    ACTIONS(1660), 1,
      sym_object_name,
    STATE(1275), 1,
      sym_keyspace_name,
  [14204] = 1,
    ACTIONS(1712), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14209] = 1,
    ACTIONS(1714), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14214] = 2,
    ACTIONS(1716), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1718), 1,
      sym_object_name,
  [14221] = 2,
    ACTIONS(1578), 1,
      sym_object_name,
    STATE(1186), 1,
      sym_column_list,
  [14228] = 2,
    ACTIONS(1720), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1722), 1,
      sym_object_name,
  [14235] = 2,
    ACTIONS(1578), 1,
      sym_object_name,
    STATE(1338), 1,
      sym_column_list,
  [14242] = 2,
    ACTIONS(1724), 1,
      anon_sym_DOT,
    ACTIONS(1726), 1,
      anon_sym_LPAREN,
  [14249] = 2,
    ACTIONS(1540), 1,
      sym_object_name,
    STATE(387), 1,
      sym_user_name,
  [14256] = 1,
    ACTIONS(1728), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14261] = 2,
    ACTIONS(1578), 1,
      sym_object_name,
    STATE(1339), 1,
      sym_column_list,
  [14268] = 2,
    ACTIONS(1730), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1732), 1,
      sym_object_name,
  [14275] = 2,
    ACTIONS(1542), 1,
      sym_object_name,
    STATE(535), 1,
      sym_assignment_element,
  [14282] = 2,
    ACTIONS(1734), 1,
      sym__string_literal,
    ACTIONS(1736), 1,
      sym_object_name,
  [14289] = 1,
    ACTIONS(1738), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14294] = 2,
    ACTIONS(1740), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1742), 1,
      sym_object_name,
  [14301] = 1,
    ACTIONS(1398), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14306] = 2,
    ACTIONS(1578), 1,
      sym_object_name,
    STATE(961), 1,
      sym_column_list,
  [14313] = 2,
    ACTIONS(1744), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1746), 1,
      sym_object_name,
  [14320] = 1,
    ACTIONS(1295), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14325] = 2,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym_assignment_tuple,
  [14332] = 2,
    ACTIONS(1542), 1,
      sym_object_name,
    STATE(504), 1,
      sym_assignment_element,
  [14339] = 2,
    ACTIONS(1284), 1,
      sym_object_name,
    STATE(226), 1,
      sym_alter_type_rename_item,
  [14346] = 2,
    ACTIONS(1748), 1,
      anon_sym_EQ,
    ACTIONS(1750), 1,
      anon_sym_LBRACK,
  [14353] = 2,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    STATE(588), 1,
      sym_assignment_tuple,
  [14360] = 2,
    ACTIONS(1600), 1,
      aux_sym_role_with_options_token1,
    STATE(109), 1,
      sym_user_password,
  [14367] = 2,
    ACTIONS(1752), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1754), 1,
      sym_object_name,
  [14374] = 2,
    ACTIONS(1542), 1,
      sym_object_name,
    STATE(546), 1,
      sym_assignment_element,
  [14381] = 1,
    ACTIONS(1188), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14386] = 1,
    ACTIONS(1756), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [14391] = 2,
    ACTIONS(1628), 1,
      sym__string_literal,
    STATE(773), 1,
      sym_option_hash_item,
  [14398] = 1,
    ACTIONS(1758), 2,
      sym__string_literal,
      sym__float_literal,
  [14403] = 2,
    ACTIONS(1760), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1762), 1,
      sym_object_name,
  [14410] = 2,
    ACTIONS(1542), 1,
      sym_object_name,
    STATE(515), 1,
      sym_assignment_element,
  [14417] = 2,
    ACTIONS(1764), 1,
      sym_object_name,
    STATE(350), 1,
      sym_alter_table_column_definition,
  [14424] = 2,
    ACTIONS(1766), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1768), 1,
      sym_object_name,
  [14431] = 2,
    ACTIONS(1770), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1772), 1,
      sym_object_name,
  [14438] = 2,
    ACTIONS(1538), 1,
      sym_object_name,
    STATE(485), 1,
      sym_table_name,
  [14445] = 2,
    ACTIONS(1558), 1,
      aux_sym_from_spec_token1,
    STATE(518), 1,
      sym_from_spec,
  [14452] = 2,
    ACTIONS(1578), 1,
      sym_object_name,
    STATE(1358), 1,
      sym_column_list,
  [14459] = 2,
    ACTIONS(1538), 1,
      sym_object_name,
    STATE(90), 1,
      sym_table_name,
  [14466] = 2,
    ACTIONS(1558), 1,
      aux_sym_from_spec_token1,
    STATE(75), 1,
      sym_from_spec,
  [14473] = 2,
    ACTIONS(1355), 1,
      sym__string_literal,
    STATE(783), 1,
      sym_replication_list_item,
  [14480] = 1,
    ACTIONS(1774), 1,
      anon_sym_RPAREN,
  [14484] = 1,
    ACTIONS(1776), 1,
      anon_sym_RPAREN,
  [14488] = 1,
    ACTIONS(1778), 1,
      anon_sym_RPAREN,
  [14492] = 1,
    ACTIONS(1780), 1,
      anon_sym_LBRACE,
  [14496] = 1,
    ACTIONS(1782), 1,
      anon_sym_LPAREN,
  [14500] = 1,
    ACTIONS(1784), 1,
      anon_sym_RPAREN,
  [14504] = 1,
    ACTIONS(1786), 1,
      sym_object_name,
  [14508] = 1,
    ACTIONS(1788), 1,
      sym_object_name,
  [14512] = 1,
    ACTIONS(1790), 1,
      anon_sym_RPAREN,
  [14516] = 1,
    ACTIONS(1792), 1,
      aux_sym_create_function_token1,
  [14520] = 1,
    ACTIONS(1794), 1,
      aux_sym_grant_token2,
  [14524] = 1,
    ACTIONS(1796), 1,
      aux_sym_from_spec_token1,
  [14528] = 1,
    ACTIONS(1798), 1,
      aux_sym_delete_statement_token3,
  [14532] = 1,
    ACTIONS(1800), 1,
      aux_sym_create_function_token1,
  [14536] = 1,
    ACTIONS(1802), 1,
      aux_sym_order_spec_token2,
  [14540] = 1,
    ACTIONS(1804), 1,
      aux_sym_return_mode_token2,
  [14544] = 1,
    ACTIONS(1806), 1,
      aux_sym_create_function_token1,
  [14548] = 1,
    ACTIONS(1808), 1,
      sym_object_name,
  [14552] = 1,
    ACTIONS(1810), 1,
      aux_sym_create_function_token2,
  [14556] = 1,
    ACTIONS(1812), 1,
      sym_object_name,
  [14560] = 1,
    ACTIONS(1814), 1,
      sym_object_name,
  [14564] = 1,
    ACTIONS(1816), 1,
      aux_sym_create_keyspace_token1,
  [14568] = 1,
    ACTIONS(1818), 1,
      sym_object_name,
  [14572] = 1,
    ACTIONS(1820), 1,
      sym_object_name,
  [14576] = 1,
    ACTIONS(1822), 1,
      sym_object_name,
  [14580] = 1,
    ACTIONS(1824), 1,
      aux_sym_create_aggregate_token3,
  [14584] = 1,
    ACTIONS(1826), 1,
      sym_object_name,
  [14588] = 1,
    ACTIONS(1828), 1,
      sym_object_name,
  [14592] = 1,
    ACTIONS(1830), 1,
      sym_object_name,
  [14596] = 1,
    ACTIONS(1832), 1,
      sym__decimal_literal,
  [14600] = 1,
    ACTIONS(1834), 1,
      aux_sym_select_statement_token5,
  [14604] = 1,
    ACTIONS(1836), 1,
      aux_sym_select_element_token1,
  [14608] = 1,
    ACTIONS(1838), 1,
      aux_sym_update_token2,
  [14612] = 1,
    ACTIONS(1840), 1,
      aux_sym_from_spec_token1,
  [14616] = 1,
    ACTIONS(1842), 1,
      aux_sym_select_statement_token5,
  [14620] = 1,
    ACTIONS(1844), 1,
      sym_object_name,
  [14624] = 1,
    ACTIONS(1846), 1,
      sym_object_name,
  [14628] = 1,
    ACTIONS(1848), 1,
      anon_sym_LPAREN,
  [14632] = 1,
    ACTIONS(1850), 1,
      aux_sym_delete_statement_token3,
  [14636] = 1,
    ACTIONS(1852), 1,
      anon_sym_EQ,
  [14640] = 1,
    ACTIONS(1854), 1,
      anon_sym_RPAREN,
  [14644] = 1,
    ACTIONS(1856), 1,
      sym_object_name,
  [14648] = 1,
    ACTIONS(1858), 1,
      anon_sym_RBRACE,
  [14652] = 1,
    ACTIONS(1860), 1,
      aux_sym_insert_statement_token3,
  [14656] = 1,
    ACTIONS(1862), 1,
      sym_object_name,
  [14660] = 1,
    ACTIONS(1864), 1,
      sym_object_name,
  [14664] = 1,
    ACTIONS(1866), 1,
      aux_sym_create_function_token1,
  [14668] = 1,
    ACTIONS(1868), 1,
      anon_sym_LPAREN,
  [14672] = 1,
    ACTIONS(1870), 1,
      sym_object_name,
  [14676] = 1,
    ACTIONS(1872), 1,
      sym_object_name,
  [14680] = 1,
    ACTIONS(1874), 1,
      anon_sym_RPAREN,
  [14684] = 1,
    ACTIONS(1876), 1,
      sym_object_name,
  [14688] = 1,
    ACTIONS(1878), 1,
      sym_object_name,
  [14692] = 1,
    ACTIONS(1880), 1,
      sym_object_name,
  [14696] = 1,
    ACTIONS(1882), 1,
      sym_object_name,
  [14700] = 1,
    ACTIONS(1884), 1,
      aux_sym_delete_statement_token3,
  [14704] = 1,
    ACTIONS(1886), 1,
      sym_object_name,
  [14708] = 1,
    ACTIONS(1888), 1,
      sym_object_name,
  [14712] = 1,
    ACTIONS(1890), 1,
      anon_sym_RPAREN,
  [14716] = 1,
    ACTIONS(1892), 1,
      sym_object_name,
  [14720] = 1,
    ACTIONS(1894), 1,
      sym_object_name,
  [14724] = 1,
    ACTIONS(1896), 1,
      sym_object_name,
  [14728] = 1,
    ACTIONS(1898), 1,
      sym_object_name,
  [14732] = 1,
    ACTIONS(1900), 1,
      aux_sym_create_function_token1,
  [14736] = 1,
    ACTIONS(1902), 1,
      anon_sym_EQ,
  [14740] = 1,
    ACTIONS(1904), 1,
      sym_object_name,
  [14744] = 1,
    ACTIONS(1906), 1,
      sym_object_name,
  [14748] = 1,
    ACTIONS(1908), 1,
      sym_object_name,
  [14752] = 1,
    ACTIONS(1910), 1,
      anon_sym_LPAREN,
  [14756] = 1,
    ACTIONS(1912), 1,
      sym_object_name,
  [14760] = 1,
    ACTIONS(1914), 1,
      aux_sym_delete_statement_token3,
  [14764] = 1,
    ACTIONS(1916), 1,
      sym_object_name,
  [14768] = 1,
    ACTIONS(1918), 1,
      sym_object_name,
  [14772] = 1,
    ACTIONS(1920), 1,
      sym_object_name,
  [14776] = 1,
    ACTIONS(1922), 1,
      sym_object_name,
  [14780] = 1,
    ACTIONS(1924), 1,
      aux_sym_delete_statement_token3,
  [14784] = 1,
    ACTIONS(1926), 1,
      aux_sym_create_aggregate_token3,
  [14788] = 1,
    ACTIONS(1928), 1,
      sym_object_name,
  [14792] = 1,
    ACTIONS(1930), 1,
      anon_sym_RPAREN,
  [14796] = 1,
    ACTIONS(1932), 1,
      sym_object_name,
  [14800] = 1,
    ACTIONS(1934), 1,
      anon_sym_LPAREN,
  [14804] = 1,
    ACTIONS(1936), 1,
      aux_sym_create_function_token1,
  [14808] = 1,
    ACTIONS(1938), 1,
      anon_sym_EQ,
  [14812] = 1,
    ACTIONS(1940), 1,
      anon_sym_RPAREN,
  [14816] = 1,
    ACTIONS(1942), 1,
      anon_sym_RPAREN,
  [14820] = 1,
    ACTIONS(1944), 1,
      aux_sym_delete_statement_token3,
  [14824] = 1,
    ACTIONS(1946), 1,
      anon_sym_RPAREN,
  [14828] = 1,
    ACTIONS(1948), 1,
      anon_sym_EQ,
  [14832] = 1,
    ACTIONS(1950), 1,
      anon_sym_EQ,
  [14836] = 1,
    ACTIONS(1952), 1,
      sym_object_name,
  [14840] = 1,
    ACTIONS(1954), 1,
      anon_sym_LPAREN,
  [14844] = 1,
    ACTIONS(1956), 1,
      anon_sym_LPAREN,
  [14848] = 1,
    ACTIONS(1958), 1,
      sym_object_name,
  [14852] = 1,
    ACTIONS(1960), 1,
      aux_sym_select_statement_token1,
  [14856] = 1,
    ACTIONS(1962), 1,
      sym_object_name,
  [14860] = 1,
    ACTIONS(1964), 1,
      aux_sym_create_function_token1,
  [14864] = 1,
    ACTIONS(1966), 1,
      anon_sym_RPAREN,
  [14868] = 1,
    ACTIONS(1968), 1,
      aux_sym_create_function_token2,
  [14872] = 1,
    ACTIONS(1970), 1,
      aux_sym_insert_statement_token3,
  [14876] = 1,
    ACTIONS(1972), 1,
      aux_sym_create_function_token1,
  [14880] = 1,
    ACTIONS(1974), 1,
      aux_sym_create_function_token1,
  [14884] = 1,
    ACTIONS(1976), 1,
      aux_sym_select_element_token1,
  [14888] = 1,
    ACTIONS(1978), 1,
      sym_object_name,
  [14892] = 1,
    ACTIONS(1980), 1,
      aux_sym_create_function_token2,
  [14896] = 1,
    ACTIONS(1982), 1,
      aux_sym_delete_statement_token3,
  [14900] = 1,
    ACTIONS(1984), 1,
      aux_sym_create_aggregate_token4,
  [14904] = 1,
    ACTIONS(1986), 1,
      sym_object_name,
  [14908] = 1,
    ACTIONS(1988), 1,
      aux_sym_create_aggregate_token3,
  [14912] = 1,
    ACTIONS(1990), 1,
      anon_sym_RPAREN,
  [14916] = 1,
    ACTIONS(1992), 1,
      sym_object_name,
  [14920] = 1,
    ACTIONS(1994), 1,
      aux_sym_create_aggregate_token4,
  [14924] = 1,
    ACTIONS(1996), 1,
      aux_sym_create_aggregate_token5,
  [14928] = 1,
    ACTIONS(1998), 1,
      aux_sym_select_statement_token1,
  [14932] = 1,
    ACTIONS(2000), 1,
      aux_sym_from_spec_token1,
  [14936] = 1,
    ACTIONS(2002), 1,
      sym_object_name,
  [14940] = 1,
    ACTIONS(2004), 1,
      sym_object_name,
  [14944] = 1,
    ACTIONS(2006), 1,
      anon_sym_LPAREN,
  [14948] = 1,
    ACTIONS(2008), 1,
      aux_sym_create_materialized_view_token1,
  [14952] = 1,
    ACTIONS(2010), 1,
      aux_sym_delete_statement_token3,
  [14956] = 1,
    ACTIONS(2012), 1,
      aux_sym_delete_statement_token3,
  [14960] = 1,
    ACTIONS(2014), 1,
      anon_sym_COLON,
  [14964] = 1,
    ACTIONS(2016), 1,
      aux_sym_create_function_token1,
  [14968] = 1,
    ACTIONS(2018), 1,
      anon_sym_LPAREN,
  [14972] = 1,
    ACTIONS(2020), 1,
      sym_object_name,
  [14976] = 1,
    ACTIONS(2022), 1,
      aux_sym_create_function_token2,
  [14980] = 1,
    ACTIONS(2024), 1,
      aux_sym_create_function_token1,
  [14984] = 1,
    ACTIONS(2026), 1,
      aux_sym_return_mode_token2,
  [14988] = 1,
    ACTIONS(2028), 1,
      aux_sym_constant_token2,
  [14992] = 1,
    ACTIONS(2030), 1,
      aux_sym_create_function_token2,
  [14996] = 1,
    ACTIONS(2032), 1,
      sym_object_name,
  [15000] = 1,
    ACTIONS(2034), 1,
      aux_sym_create_function_token1,
  [15004] = 1,
    ACTIONS(2036), 1,
      anon_sym_LPAREN,
  [15008] = 1,
    ACTIONS(2038), 1,
      anon_sym_RPAREN,
  [15012] = 1,
    ACTIONS(2040), 1,
      aux_sym_create_aggregate_token3,
  [15016] = 1,
    ACTIONS(2042), 1,
      aux_sym_create_aggregate_token4,
  [15020] = 1,
    ACTIONS(2044), 1,
      sym_object_name,
  [15024] = 1,
    ACTIONS(2046), 1,
      sym_object_name,
  [15028] = 1,
    ACTIONS(2048), 1,
      aux_sym_create_keyspace_token1,
  [15032] = 1,
    ACTIONS(2050), 1,
      anon_sym_LPAREN,
  [15036] = 1,
    ACTIONS(2052), 1,
      aux_sym_delete_statement_token3,
  [15040] = 1,
    ACTIONS(2054), 1,
      anon_sym_RBRACE,
  [15044] = 1,
    ACTIONS(2056), 1,
      anon_sym_LPAREN,
  [15048] = 1,
    ACTIONS(2058), 1,
      aux_sym_delete_statement_token3,
  [15052] = 1,
    ACTIONS(2060), 1,
      anon_sym_COLON,
  [15056] = 1,
    ACTIONS(2062), 1,
      sym_object_name,
  [15060] = 1,
    ACTIONS(2064), 1,
      anon_sym_EQ,
  [15064] = 1,
    ACTIONS(2066), 1,
      anon_sym_COLON,
  [15068] = 1,
    ACTIONS(2068), 1,
      aux_sym_delete_statement_token3,
  [15072] = 1,
    ACTIONS(2070), 1,
      aux_sym_select_statement_token1,
  [15076] = 1,
    ACTIONS(2072), 1,
      sym_object_name,
  [15080] = 1,
    ACTIONS(2074), 1,
      sym_object_name,
  [15084] = 1,
    ACTIONS(2076), 1,
      anon_sym_RPAREN,
  [15088] = 1,
    ACTIONS(2078), 1,
      anon_sym_RPAREN,
  [15092] = 1,
    ACTIONS(2080), 1,
      anon_sym_RPAREN,
  [15096] = 1,
    ACTIONS(2082), 1,
      anon_sym_RPAREN,
  [15100] = 1,
    ACTIONS(2084), 1,
      anon_sym_RPAREN,
  [15104] = 1,
    ACTIONS(2086), 1,
      anon_sym_RBRACE,
  [15108] = 1,
    ACTIONS(2088), 1,
      anon_sym_EQ,
  [15112] = 1,
    ACTIONS(2090), 1,
      anon_sym_LPAREN,
  [15116] = 1,
    ACTIONS(2092), 1,
      aux_sym_create_function_token1,
  [15120] = 1,
    ACTIONS(2094), 1,
      anon_sym_LPAREN,
  [15124] = 1,
    ACTIONS(2096), 1,
      anon_sym_RPAREN,
  [15128] = 1,
    ACTIONS(2098), 1,
      aux_sym_create_function_token2,
  [15132] = 1,
    ACTIONS(2100), 1,
      anon_sym_LPAREN,
  [15136] = 1,
    ACTIONS(2102), 1,
      aux_sym_create_function_token1,
  [15140] = 1,
    ACTIONS(2104), 1,
      sym_object_name,
  [15144] = 1,
    ACTIONS(2106), 1,
      aux_sym_create_function_token2,
  [15148] = 1,
    ACTIONS(2108), 1,
      aux_sym_using_timestamp_spec_token1,
  [15152] = 1,
    ACTIONS(2110), 1,
      sym__code_block,
  [15156] = 1,
    ACTIONS(2112), 1,
      aux_sym_select_element_token1,
  [15160] = 1,
    ACTIONS(2114), 1,
      sym_object_name,
  [15164] = 1,
    ACTIONS(2116), 1,
      aux_sym_create_aggregate_token3,
  [15168] = 1,
    ACTIONS(2118), 1,
      aux_sym_create_aggregate_token4,
  [15172] = 1,
    ACTIONS(2120), 1,
      sym_object_name,
  [15176] = 1,
    ACTIONS(2122), 1,
      sym_object_name,
  [15180] = 1,
    ACTIONS(2124), 1,
      aux_sym_order_spec_token1,
  [15184] = 1,
    ACTIONS(2126), 1,
      sym_object_name,
  [15188] = 1,
    ACTIONS(2128), 1,
      anon_sym_LPAREN,
  [15192] = 1,
    ACTIONS(2130), 1,
      anon_sym_RPAREN,
  [15196] = 1,
    ACTIONS(963), 1,
      aux_sym_column_not_null_token1,
  [15200] = 1,
    ACTIONS(2132), 1,
      anon_sym_LPAREN,
  [15204] = 1,
    ACTIONS(2134), 1,
      aux_sym_relation_contains_key_token2,
  [15208] = 1,
    ACTIONS(2136), 1,
      sym__string_literal,
  [15212] = 1,
    ACTIONS(2138), 1,
      aux_sym_insert_statement_token3,
  [15216] = 1,
    ACTIONS(2140), 1,
      aux_sym_insert_statement_token3,
  [15220] = 1,
    ACTIONS(2142), 1,
      aux_sym_create_function_token1,
  [15224] = 1,
    ACTIONS(2144), 1,
      sym_object_name,
  [15228] = 1,
    ACTIONS(2146), 1,
      sym_object_name,
  [15232] = 1,
    ACTIONS(2148), 1,
      sym__decimal_literal,
  [15236] = 1,
    ACTIONS(2150), 1,
      aux_sym_create_function_token1,
  [15240] = 1,
    ACTIONS(2152), 1,
      sym_object_name,
  [15244] = 1,
    ACTIONS(2154), 1,
      sym_object_name,
  [15248] = 1,
    ACTIONS(2156), 1,
      aux_sym_create_function_token2,
  [15252] = 1,
    ACTIONS(2158), 1,
      sym_object_name,
  [15256] = 1,
    ACTIONS(2160), 1,
      anon_sym_RBRACK,
  [15260] = 1,
    ACTIONS(2162), 1,
      aux_sym_create_aggregate_token3,
  [15264] = 1,
    ACTIONS(2164), 1,
      sym_object_name,
  [15268] = 1,
    ACTIONS(2166), 1,
      sym_object_name,
  [15272] = 1,
    ACTIONS(2168), 1,
      aux_sym_order_spec_token2,
  [15276] = 1,
    ACTIONS(2170), 1,
      sym__decimal_literal,
  [15280] = 1,
    ACTIONS(2172), 1,
      aux_sym_select_statement_token5,
  [15284] = 1,
    ACTIONS(2174), 1,
      anon_sym_LPAREN,
  [15288] = 1,
    ACTIONS(2176), 1,
      anon_sym_RPAREN,
  [15292] = 1,
    ACTIONS(2178), 1,
      aux_sym_create_index_token3,
  [15296] = 1,
    ACTIONS(2180), 1,
      aux_sym_select_statement_token5,
  [15300] = 1,
    ACTIONS(2182), 1,
      aux_sym_update_token2,
  [15304] = 1,
    ACTIONS(2184), 1,
      sym__decimal_literal,
  [15308] = 1,
    ACTIONS(2186), 1,
      sym_object_name,
  [15312] = 1,
    ACTIONS(2188), 1,
      anon_sym_COMMA,
  [15316] = 1,
    ACTIONS(2190), 1,
      sym_object_name,
  [15320] = 1,
    ACTIONS(2192), 1,
      anon_sym_RPAREN,
  [15324] = 1,
    ACTIONS(2194), 1,
      aux_sym_insert_statement_token3,
  [15328] = 1,
    ACTIONS(2196), 1,
      sym__boolean_literal,
  [15332] = 1,
    ACTIONS(2198), 1,
      sym_object_name,
  [15336] = 1,
    ACTIONS(2200), 1,
      aux_sym_create_function_token1,
  [15340] = 1,
    ACTIONS(2202), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [15344] = 1,
    ACTIONS(2204), 1,
      sym_object_name,
  [15348] = 1,
    ACTIONS(2206), 1,
      aux_sym_create_function_token2,
  [15352] = 1,
    ACTIONS(2208), 1,
      sym_object_name,
  [15356] = 1,
    ACTIONS(2210), 1,
      aux_sym_select_element_token1,
  [15360] = 1,
    ACTIONS(2212), 1,
      sym_object_name,
  [15364] = 1,
    ACTIONS(2214), 1,
      aux_sym_create_function_token2,
  [15368] = 1,
    ACTIONS(2216), 1,
      anon_sym_EQ,
  [15372] = 1,
    ACTIONS(2218), 1,
      sym__code_block,
  [15376] = 1,
    ACTIONS(2220), 1,
      aux_sym_select_element_token1,
  [15380] = 1,
    ACTIONS(2222), 1,
      sym_object_name,
  [15384] = 1,
    ACTIONS(2224), 1,
      aux_sym_materialized_view_options_token1,
  [15388] = 1,
    ACTIONS(2226), 1,
      aux_sym_create_aggregate_token5,
  [15392] = 1,
    ACTIONS(2228), 1,
      aux_sym_create_aggregate_token6,
  [15396] = 1,
    ACTIONS(2230), 1,
      aux_sym_from_spec_token1,
  [15400] = 1,
    ACTIONS(2232), 1,
      anon_sym_EQ,
  [15404] = 1,
    ACTIONS(2234), 1,
      sym_object_name,
  [15408] = 1,
    ACTIONS(2236), 1,
      aux_sym_create_materialized_view_token1,
  [15412] = 1,
    ACTIONS(2238), 1,
      aux_sym_create_materialized_view_token1,
  [15416] = 1,
    ACTIONS(2240), 1,
      aux_sym_insert_statement_token3,
  [15420] = 1,
    ACTIONS(2242), 1,
      sym_object_name,
  [15424] = 1,
    ACTIONS(2244), 1,
      aux_sym_grant_token2,
  [15428] = 1,
    ACTIONS(2246), 1,
      aux_sym_materialized_view_options_token1,
  [15432] = 1,
    ACTIONS(2248), 1,
      anon_sym_LPAREN,
  [15436] = 1,
    ACTIONS(2250), 1,
      aux_sym_update_token2,
  [15440] = 1,
    ACTIONS(2252), 1,
      anon_sym_EQ,
  [15444] = 1,
    ACTIONS(2254), 1,
      sym_object_name,
  [15448] = 1,
    ACTIONS(2256), 1,
      aux_sym_drop_type_token1,
  [15452] = 1,
    ACTIONS(2258), 1,
      aux_sym_grant_token2,
  [15456] = 1,
    ACTIONS(2260), 1,
      aux_sym_create_function_token1,
  [15460] = 1,
    ACTIONS(2262), 1,
      sym_object_name,
  [15464] = 1,
    ACTIONS(2264), 1,
      aux_sym_create_function_token2,
  [15468] = 1,
    ACTIONS(2266), 1,
      sym_object_name,
  [15472] = 1,
    ACTIONS(2268), 1,
      aux_sym_create_function_token1,
  [15476] = 1,
    ACTIONS(2270), 1,
      aux_sym_select_element_token1,
  [15480] = 1,
    ACTIONS(2272), 1,
      sym_object_name,
  [15484] = 1,
    ACTIONS(2274), 1,
      aux_sym_create_function_token2,
  [15488] = 1,
    ACTIONS(2276), 1,
      anon_sym_RPAREN,
  [15492] = 1,
    ACTIONS(2278), 1,
      sym_object_name,
  [15496] = 1,
    ACTIONS(2280), 1,
      aux_sym_create_aggregate_token4,
  [15500] = 1,
    ACTIONS(2282), 1,
      aux_sym_create_aggregate_token5,
  [15504] = 1,
    ACTIONS(2284), 1,
      aux_sym_delete_statement_token3,
  [15508] = 1,
    ACTIONS(2286), 1,
      sym_object_name,
  [15512] = 1,
    ACTIONS(2288), 1,
      aux_sym_delete_statement_token3,
  [15516] = 1,
    ACTIONS(2290), 1,
      anon_sym_RPAREN,
  [15520] = 1,
    ACTIONS(2292), 1,
      sym_object_name,
  [15524] = 1,
    ACTIONS(2294), 1,
      aux_sym_select_statement_token5,
  [15528] = 1,
    ACTIONS(2296), 1,
      anon_sym_EQ,
  [15532] = 1,
    ACTIONS(2298), 1,
      aux_sym_delete_statement_token3,
  [15536] = 1,
    ACTIONS(2300), 1,
      aux_sym_create_function_token2,
  [15540] = 1,
    ACTIONS(2302), 1,
      aux_sym_delete_statement_token3,
  [15544] = 1,
    ACTIONS(2304), 1,
      aux_sym_create_function_token1,
  [15548] = 1,
    ACTIONS(2306), 1,
      aux_sym_select_element_token1,
  [15552] = 1,
    ACTIONS(2308), 1,
      sym_object_name,
  [15556] = 1,
    ACTIONS(2310), 1,
      aux_sym_create_function_token2,
  [15560] = 1,
    ACTIONS(2312), 1,
      sym__code_block,
  [15564] = 1,
    ACTIONS(2314), 1,
      aux_sym_select_element_token1,
  [15568] = 1,
    ACTIONS(2316), 1,
      sym_object_name,
  [15572] = 1,
    ACTIONS(1053), 1,
      sym_object_name,
  [15576] = 1,
    ACTIONS(2318), 1,
      sym__code_block,
  [15580] = 1,
    ACTIONS(2320), 1,
      aux_sym_create_aggregate_token4,
  [15584] = 1,
    ACTIONS(2322), 1,
      aux_sym_create_aggregate_token5,
  [15588] = 1,
    ACTIONS(2324), 1,
      sym_object_name,
  [15592] = 1,
    ACTIONS(2326), 1,
      aux_sym_delete_statement_token3,
  [15596] = 1,
    ACTIONS(2328), 1,
      sym_object_name,
  [15600] = 1,
    ACTIONS(2330), 1,
      sym_object_name,
  [15604] = 1,
    ACTIONS(2332), 1,
      aux_sym_create_materialized_view_token1,
  [15608] = 1,
    ACTIONS(2334), 1,
      sym_object_name,
  [15612] = 1,
    ACTIONS(2336), 1,
      aux_sym_relation_contains_key_token2,
  [15616] = 1,
    ACTIONS(2338), 1,
      aux_sym_relation_contains_key_token2,
  [15620] = 1,
    ACTIONS(2340), 1,
      aux_sym_constant_token2,
  [15624] = 1,
    ACTIONS(2342), 1,
      aux_sym_delete_statement_token3,
  [15628] = 1,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
  [15632] = 1,
    ACTIONS(2344), 1,
      anon_sym_LPAREN,
  [15636] = 1,
    ACTIONS(2346), 1,
      anon_sym_RPAREN,
  [15640] = 1,
    ACTIONS(2348), 1,
      aux_sym_create_index_token3,
  [15644] = 1,
    ACTIONS(2350), 1,
      aux_sym_create_index_token3,
  [15648] = 1,
    ACTIONS(2352), 1,
      aux_sym_create_function_token1,
  [15652] = 1,
    ACTIONS(2354), 1,
      sym_object_name,
  [15656] = 1,
    ACTIONS(2356), 1,
      aux_sym_insert_statement_token3,
  [15660] = 1,
    ACTIONS(2358), 1,
      aux_sym_create_function_token2,
  [15664] = 1,
    ACTIONS(2360), 1,
      aux_sym_delete_statement_token3,
  [15668] = 1,
    ACTIONS(2362), 1,
      aux_sym_create_function_token1,
  [15672] = 1,
    ACTIONS(2364), 1,
      sym_object_name,
  [15676] = 1,
    ACTIONS(2366), 1,
      aux_sym_create_function_token2,
  [15680] = 1,
    ACTIONS(2368), 1,
      aux_sym_delete_statement_token3,
  [15684] = 1,
    ACTIONS(2370), 1,
      sym__code_block,
  [15688] = 1,
    ACTIONS(2372), 1,
      aux_sym_select_element_token1,
  [15692] = 1,
    ACTIONS(2374), 1,
      sym_object_name,
  [15696] = 1,
    ACTIONS(2376), 1,
      aux_sym_create_aggregate_token3,
  [15700] = 1,
    ACTIONS(2378), 1,
      aux_sym_create_aggregate_token4,
  [15704] = 1,
    ACTIONS(2380), 1,
      aux_sym_delete_statement_token3,
  [15708] = 1,
    ACTIONS(2382), 1,
      sym_object_name,
  [15712] = 1,
    ACTIONS(2384), 1,
      aux_sym_delete_statement_token3,
  [15716] = 1,
    ACTIONS(2386), 1,
      anon_sym_RPAREN,
  [15720] = 1,
    ACTIONS(2388), 1,
      aux_sym_materialized_view_options_token1,
  [15724] = 1,
    ACTIONS(2390), 1,
      sym_object_name,
  [15728] = 1,
    ACTIONS(2392), 1,
      aux_sym_create_function_token2,
  [15732] = 1,
    ACTIONS(2394), 1,
      aux_sym_insert_statement_token3,
  [15736] = 1,
    ACTIONS(2396), 1,
      sym__code_block,
  [15740] = 1,
    ACTIONS(2398), 1,
      aux_sym_select_element_token1,
  [15744] = 1,
    ACTIONS(2400), 1,
      sym_object_name,
  [15748] = 1,
    ACTIONS(2402), 1,
      anon_sym_RPAREN,
  [15752] = 1,
    ACTIONS(2404), 1,
      sym__code_block,
  [15756] = 1,
    ACTIONS(2406), 1,
      aux_sym_select_element_token1,
  [15760] = 1,
    ACTIONS(2408), 1,
      aux_sym_insert_statement_token3,
  [15764] = 1,
    ACTIONS(2410), 1,
      aux_sym_using_timestamp_spec_token1,
  [15768] = 1,
    ACTIONS(2412), 1,
      sym_object_name,
  [15772] = 1,
    ACTIONS(2414), 1,
      aux_sym_create_aggregate_token6,
  [15776] = 1,
    ACTIONS(2416), 1,
      anon_sym_LPAREN,
  [15780] = 1,
    ACTIONS(2418), 1,
      aux_sym_insert_statement_token3,
  [15784] = 1,
    ACTIONS(2420), 1,
      sym_object_name,
  [15788] = 1,
    ACTIONS(2422), 1,
      anon_sym_LPAREN,
  [15792] = 1,
    ACTIONS(2424), 1,
      sym_object_name,
  [15796] = 1,
    ACTIONS(2426), 1,
      aux_sym_relation_contains_key_token2,
  [15800] = 1,
    ACTIONS(2428), 1,
      aux_sym_create_materialized_view_token1,
  [15804] = 1,
    ACTIONS(2430), 1,
      anon_sym_LPAREN,
  [15808] = 1,
    ACTIONS(2432), 1,
      anon_sym_LPAREN,
  [15812] = 1,
    ACTIONS(2434), 1,
      sym_object_name,
  [15816] = 1,
    ACTIONS(2436), 1,
      sym_object_name,
  [15820] = 1,
    ACTIONS(2438), 1,
      anon_sym_RPAREN,
  [15824] = 1,
    ACTIONS(2440), 1,
      sym_object_name,
  [15828] = 1,
    ACTIONS(2442), 1,
      aux_sym_create_function_token1,
  [15832] = 1,
    ACTIONS(2444), 1,
      aux_sym_from_spec_token1,
  [15836] = 1,
    ACTIONS(2446), 1,
      sym_object_name,
  [15840] = 1,
    ACTIONS(2448), 1,
      aux_sym_create_function_token2,
  [15844] = 1,
    ACTIONS(2450), 1,
      aux_sym_insert_statement_token3,
  [15848] = 1,
    ACTIONS(2452), 1,
      aux_sym_select_element_token1,
  [15852] = 1,
    ACTIONS(2454), 1,
      sym_object_name,
  [15856] = 1,
    ACTIONS(2456), 1,
      aux_sym_create_function_token2,
  [15860] = 1,
    ACTIONS(2458), 1,
      aux_sym_insert_statement_token3,
  [15864] = 1,
    ACTIONS(2460), 1,
      sym__code_block,
  [15868] = 1,
    ACTIONS(2462), 1,
      aux_sym_select_element_token1,
  [15872] = 1,
    ACTIONS(2464), 1,
      sym_object_name,
  [15876] = 1,
    ACTIONS(2466), 1,
      aux_sym_select_statement_token1,
  [15880] = 1,
    ACTIONS(2468), 1,
      aux_sym_create_aggregate_token5,
  [15884] = 1,
    ACTIONS(2470), 1,
      aux_sym_create_aggregate_token6,
  [15888] = 1,
    ACTIONS(2472), 1,
      aux_sym_select_element_token1,
  [15892] = 1,
    ACTIONS(2474), 1,
      sym_object_name,
  [15896] = 1,
    ACTIONS(2476), 1,
      aux_sym_create_function_token2,
  [15900] = 1,
    ACTIONS(2478), 1,
      aux_sym_insert_statement_token3,
  [15904] = 1,
    ACTIONS(2480), 1,
      sym__code_block,
  [15908] = 1,
    ACTIONS(2482), 1,
      aux_sym_select_element_token1,
  [15912] = 1,
    ACTIONS(2484), 1,
      aux_sym_materialized_view_options_token1,
  [15916] = 1,
    ACTIONS(2486), 1,
      sym__code_block,
  [15920] = 1,
    ACTIONS(2488), 1,
      aux_sym_create_aggregate_token5,
  [15924] = 1,
    ACTIONS(2490), 1,
      aux_sym_create_aggregate_token6,
  [15928] = 1,
    ACTIONS(2492), 1,
      aux_sym_materialized_view_options_token1,
  [15932] = 1,
    ACTIONS(2494), 1,
      aux_sym_insert_statement_token3,
  [15936] = 1,
    ACTIONS(2496), 1,
      anon_sym_COLON,
  [15940] = 1,
    ACTIONS(2498), 1,
      sym_object_name,
  [15944] = 1,
    ACTIONS(2500), 1,
      anon_sym_RPAREN,
  [15948] = 1,
    ACTIONS(2502), 1,
      sym_object_name,
  [15952] = 1,
    ACTIONS(2504), 1,
      sym_object_name,
  [15956] = 1,
    ACTIONS(2506), 1,
      aux_sym_create_materialized_view_token1,
  [15960] = 1,
    ACTIONS(2508), 1,
      aux_sym_create_materialized_view_token1,
  [15964] = 1,
    ACTIONS(2510), 1,
      anon_sym_LPAREN,
  [15968] = 1,
    ACTIONS(2512), 1,
      aux_sym_relation_contains_key_token2,
  [15972] = 1,
    ACTIONS(2514), 1,
      aux_sym_create_index_token3,
  [15976] = 1,
    ACTIONS(2516), 1,
      anon_sym_LPAREN,
  [15980] = 1,
    ACTIONS(2518), 1,
      aux_sym_create_index_token3,
  [15984] = 1,
    ACTIONS(2520), 1,
      aux_sym_create_function_token2,
  [15988] = 1,
    ACTIONS(2522), 1,
      anon_sym_LPAREN,
  [15992] = 1,
    ACTIONS(2524), 1,
      aux_sym_create_function_token1,
  [15996] = 1,
    ACTIONS(2526), 1,
      aux_sym_select_element_token1,
  [16000] = 1,
    ACTIONS(2528), 1,
      sym_object_name,
  [16004] = 1,
    ACTIONS(2530), 1,
      aux_sym_create_function_token2,
  [16008] = 1,
    ACTIONS(2532), 1,
      sym__code_block,
  [16012] = 1,
    ACTIONS(2534), 1,
      aux_sym_select_element_token1,
  [16016] = 1,
    ACTIONS(2536), 1,
      sym_object_name,
  [16020] = 1,
    ACTIONS(2538), 1,
      aux_sym_insert_statement_token3,
  [16024] = 1,
    ACTIONS(2540), 1,
      sym__code_block,
  [16028] = 1,
    ACTIONS(2542), 1,
      aux_sym_create_aggregate_token4,
  [16032] = 1,
    ACTIONS(2544), 1,
      aux_sym_create_aggregate_token5,
  [16036] = 1,
    ACTIONS(2546), 1,
      sym_object_name,
  [16040] = 1,
    ACTIONS(2548), 1,
      sym_object_name,
  [16044] = 1,
    ACTIONS(2550), 1,
      sym__code_block,
  [16048] = 1,
    ACTIONS(2552), 1,
      aux_sym_select_element_token1,
  [16052] = 1,
    ACTIONS(2554), 1,
      sym_object_name,
  [16056] = 1,
    ACTIONS(2556), 1,
      aux_sym_create_function_token1,
  [16060] = 1,
    ACTIONS(2558), 1,
      sym__code_block,
  [16064] = 1,
    ACTIONS(2560), 1,
      aux_sym_insert_statement_token3,
  [16068] = 1,
    ACTIONS(2562), 1,
      sym_object_name,
  [16072] = 1,
    ACTIONS(2564), 1,
      sym_object_name,
  [16076] = 1,
    ACTIONS(2566), 1,
      anon_sym_RPAREN,
  [16080] = 1,
    ACTIONS(2568), 1,
      aux_sym_constant_token2,
  [16084] = 1,
    ACTIONS(2570), 1,
      aux_sym_create_index_token3,
  [16088] = 1,
    ACTIONS(2572), 1,
      sym_object_name,
  [16092] = 1,
    ACTIONS(2574), 1,
      aux_sym_create_keyspace_token1,
  [16096] = 1,
    ACTIONS(2576), 1,
      anon_sym_RPAREN,
  [16100] = 1,
    ACTIONS(2578), 1,
      anon_sym_RPAREN,
  [16104] = 1,
    ACTIONS(2580), 1,
      sym_object_name,
  [16108] = 1,
    ACTIONS(2582), 1,
      sym_object_name,
  [16112] = 1,
    ACTIONS(2584), 1,
      sym_object_name,
  [16116] = 1,
    ACTIONS(2586), 1,
      anon_sym_LPAREN,
  [16120] = 1,
    ACTIONS(2588), 1,
      aux_sym_relation_contains_key_token2,
  [16124] = 1,
    ACTIONS(2590), 1,
      aux_sym_relation_contains_key_token2,
  [16128] = 1,
    ACTIONS(2592), 1,
      anon_sym_RPAREN,
  [16132] = 1,
    ACTIONS(2594), 1,
      anon_sym_LPAREN,
  [16136] = 1,
    ACTIONS(2596), 1,
      anon_sym_RPAREN,
  [16140] = 1,
    ACTIONS(2598), 1,
      anon_sym_RPAREN,
  [16144] = 1,
    ACTIONS(2600), 1,
      sym_object_name,
  [16148] = 1,
    ACTIONS(2600), 1,
      anon_sym_STAR,
  [16152] = 1,
    ACTIONS(2602), 1,
      sym_object_name,
  [16156] = 1,
    ACTIONS(2604), 1,
      aux_sym_create_function_token2,
  [16160] = 1,
    ACTIONS(2606), 1,
      anon_sym_RPAREN,
  [16164] = 1,
    ACTIONS(2608), 1,
      sym__code_block,
  [16168] = 1,
    ACTIONS(2610), 1,
      aux_sym_select_element_token1,
  [16172] = 1,
    ACTIONS(2612), 1,
      sym_object_name,
  [16176] = 1,
    ACTIONS(2614), 1,
      aux_sym_relation_contains_key_token2,
  [16180] = 1,
    ACTIONS(2616), 1,
      sym__code_block,
  [16184] = 1,
    ACTIONS(2618), 1,
      aux_sym_select_element_token1,
  [16188] = 1,
    ACTIONS(2620), 1,
      aux_sym_materialized_view_options_token1,
  [16192] = 1,
    ACTIONS(2622), 1,
      sym_object_name,
  [16196] = 1,
    ACTIONS(2624), 1,
      sym_object_name,
  [16200] = 1,
    ACTIONS(2626), 1,
      aux_sym_create_aggregate_token6,
  [16204] = 1,
    ACTIONS(2628), 1,
      aux_sym_insert_statement_token2,
  [16208] = 1,
    ACTIONS(2630), 1,
      anon_sym_LBRACE,
  [16212] = 1,
    ACTIONS(2632), 1,
      sym__code_block,
  [16216] = 1,
    ACTIONS(2634), 1,
      aux_sym_select_element_token1,
  [16220] = 1,
    ACTIONS(2636), 1,
      sym_object_name,
  [16224] = 1,
    ACTIONS(2638), 1,
      aux_sym_create_aggregate_token6,
  [16228] = 1,
    ACTIONS(2640), 1,
      aux_sym_drop_materialized_view_token2,
  [16232] = 1,
    ACTIONS(2642), 1,
      aux_sym_relation_contains_key_token2,
  [16236] = 1,
    ACTIONS(2644), 1,
      sym_object_name,
  [16240] = 1,
    ACTIONS(2646), 1,
      anon_sym_RPAREN,
  [16244] = 1,
    ACTIONS(2648), 1,
      sym_object_name,
  [16248] = 1,
    ACTIONS(2650), 1,
      aux_sym_delete_statement_token3,
  [16252] = 1,
    ACTIONS(2652), 1,
      aux_sym_constant_token2,
  [16256] = 1,
    ACTIONS(2654), 1,
      sym_object_name,
  [16260] = 1,
    ACTIONS(2656), 1,
      aux_sym_create_index_token3,
  [16264] = 1,
    ACTIONS(2658), 1,
      aux_sym_create_materialized_view_token1,
  [16268] = 1,
    ACTIONS(2660), 1,
      anon_sym_LPAREN,
  [16272] = 1,
    ACTIONS(2662), 1,
      anon_sym_LPAREN,
  [16276] = 1,
    ACTIONS(2664), 1,
      anon_sym_RPAREN,
  [16280] = 1,
    ACTIONS(2666), 1,
      aux_sym_create_function_token1,
  [16284] = 1,
    ACTIONS(2668), 1,
      aux_sym_create_index_token3,
  [16288] = 1,
    ACTIONS(2670), 1,
      aux_sym_create_index_token3,
  [16292] = 1,
    ACTIONS(2672), 1,
      sym__boolean_literal,
  [16296] = 1,
    ACTIONS(2674), 1,
      anon_sym_RPAREN,
  [16300] = 1,
    ACTIONS(2676), 1,
      aux_sym_select_element_token1,
  [16304] = 1,
    ACTIONS(2678), 1,
      sym_object_name,
  [16308] = 1,
    ACTIONS(2680), 1,
      aux_sym_create_function_token2,
  [16312] = 1,
    ACTIONS(2682), 1,
      aux_sym_create_aggregate_token3,
  [16316] = 1,
    ACTIONS(2684), 1,
      sym__code_block,
  [16320] = 1,
    ACTIONS(2686), 1,
      aux_sym_select_element_token1,
  [16324] = 1,
    ACTIONS(2688), 1,
      aux_sym_drop_materialized_view_token2,
  [16328] = 1,
    ACTIONS(2690), 1,
      sym__code_block,
  [16332] = 1,
    ACTIONS(2692), 1,
      aux_sym_create_aggregate_token5,
  [16336] = 1,
    ACTIONS(2694), 1,
      aux_sym_create_aggregate_token6,
  [16340] = 1,
    ACTIONS(2696), 1,
      anon_sym_LPAREN,
  [16344] = 1,
    ACTIONS(2698), 1,
      sym_object_name,
  [16348] = 1,
    ACTIONS(2700), 1,
      sym__code_block,
  [16352] = 1,
    ACTIONS(2702), 1,
      aux_sym_select_element_token1,
  [16356] = 1,
    ACTIONS(2704), 1,
      aux_sym_relation_contains_key_token2,
  [16360] = 1,
    ACTIONS(2706), 1,
      aux_sym_using_timestamp_spec_token1,
  [16364] = 1,
    ACTIONS(2708), 1,
      aux_sym_select_statement_token5,
  [16368] = 1,
    ACTIONS(2710), 1,
      sym_object_name,
  [16372] = 1,
    ACTIONS(2712), 1,
      anon_sym_RPAREN,
  [16376] = 1,
    ACTIONS(2672), 1,
      sym__string_literal,
  [16380] = 1,
    ACTIONS(2714), 1,
      aux_sym_update_token2,
  [16384] = 1,
    ACTIONS(2716), 1,
      aux_sym_create_aggregate_token2,
  [16388] = 1,
    ACTIONS(2718), 1,
      sym_object_name,
  [16392] = 1,
    ACTIONS(2720), 1,
      sym__code_block,
  [16396] = 1,
    ACTIONS(2722), 1,
      aux_sym_select_element_token1,
  [16400] = 1,
    ACTIONS(2724), 1,
      sym_object_name,
  [16404] = 1,
    ACTIONS(2726), 1,
      aux_sym_materialized_view_options_token1,
  [16408] = 1,
    ACTIONS(2728), 1,
      sym__code_block,
  [16412] = 1,
    ACTIONS(2730), 1,
      anon_sym_RBRACK,
  [16416] = 1,
    ACTIONS(2732), 1,
      sym_object_name,
  [16420] = 1,
    ACTIONS(2734), 1,
      aux_sym_drop_materialized_view_token2,
  [16424] = 1,
    ACTIONS(2736), 1,
      sym_object_name,
  [16428] = 1,
    ACTIONS(2738), 1,
      sym_object_name,
  [16432] = 1,
    ACTIONS(2740), 1,
      aux_sym_delete_statement_token3,
  [16436] = 1,
    ACTIONS(2742), 1,
      anon_sym_LPAREN,
  [16440] = 1,
    ACTIONS(2744), 1,
      anon_sym_RPAREN,
  [16444] = 1,
    ACTIONS(2746), 1,
      anon_sym_RPAREN,
  [16448] = 1,
    ACTIONS(2748), 1,
      anon_sym_LBRACE,
  [16452] = 1,
    ACTIONS(2750), 1,
      sym_object_name,
  [16456] = 1,
    ACTIONS(2752), 1,
      sym_object_name,
  [16460] = 1,
    ACTIONS(2754), 1,
      sym_object_name,
  [16464] = 1,
    ACTIONS(2756), 1,
      aux_sym_begin_batch_token4,
  [16468] = 1,
    ACTIONS(2758), 1,
      sym__code_block,
  [16472] = 1,
    ACTIONS(2760), 1,
      aux_sym_select_element_token1,
  [16476] = 1,
    ACTIONS(2762), 1,
      sym_object_name,
  [16480] = 1,
    ACTIONS(2764), 1,
      aux_sym_create_aggregate_token6,
  [16484] = 1,
    ACTIONS(2766), 1,
      sym_object_name,
  [16488] = 1,
    ACTIONS(2768), 1,
      sym_object_name,
  [16492] = 1,
    ACTIONS(2770), 1,
      sym_object_name,
  [16496] = 1,
    ACTIONS(2772), 1,
      sym_object_name,
  [16500] = 1,
    ACTIONS(2774), 1,
      aux_sym_delete_statement_token3,
  [16504] = 1,
    ACTIONS(2776), 1,
      sym_object_name,
  [16508] = 1,
    ACTIONS(2778), 1,
      sym_object_name,
  [16512] = 1,
    ACTIONS(2780), 1,
      sym__code_block,
  [16516] = 1,
    ACTIONS(2782), 1,
      aux_sym_resource_token2,
  [16520] = 1,
    ACTIONS(2784), 1,
      anon_sym_RPAREN,
  [16524] = 1,
    ACTIONS(2786), 1,
      ts_builtin_sym_end,
  [16528] = 1,
    ACTIONS(2788), 1,
      aux_sym_begin_batch_token4,
  [16532] = 1,
    ACTIONS(2790), 1,
      sym_object_name,
  [16536] = 1,
    ACTIONS(2792), 1,
      sym_object_name,
  [16540] = 1,
    ACTIONS(2794), 1,
      sym_object_name,
  [16544] = 1,
    ACTIONS(2796), 1,
      aux_sym_insert_statement_token2,
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
  [SMALL_STATE(62)] = 2192,
  [SMALL_STATE(63)] = 2223,
  [SMALL_STATE(64)] = 2254,
  [SMALL_STATE(65)] = 2281,
  [SMALL_STATE(66)] = 2308,
  [SMALL_STATE(67)] = 2335,
  [SMALL_STATE(68)] = 2366,
  [SMALL_STATE(69)] = 2397,
  [SMALL_STATE(70)] = 2424,
  [SMALL_STATE(71)] = 2454,
  [SMALL_STATE(72)] = 2484,
  [SMALL_STATE(73)] = 2524,
  [SMALL_STATE(74)] = 2550,
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
  [SMALL_STATE(86)] = 2888,
  [SMALL_STATE(87)] = 2927,
  [SMALL_STATE(88)] = 2952,
  [SMALL_STATE(89)] = 2986,
  [SMALL_STATE(90)] = 3010,
  [SMALL_STATE(91)] = 3034,
  [SMALL_STATE(92)] = 3062,
  [SMALL_STATE(93)] = 3086,
  [SMALL_STATE(94)] = 3120,
  [SMALL_STATE(95)] = 3144,
  [SMALL_STATE(96)] = 3178,
  [SMALL_STATE(97)] = 3203,
  [SMALL_STATE(98)] = 3230,
  [SMALL_STATE(99)] = 3255,
  [SMALL_STATE(100)] = 3280,
  [SMALL_STATE(101)] = 3305,
  [SMALL_STATE(102)] = 3328,
  [SMALL_STATE(103)] = 3350,
  [SMALL_STATE(104)] = 3372,
  [SMALL_STATE(105)] = 3396,
  [SMALL_STATE(106)] = 3422,
  [SMALL_STATE(107)] = 3444,
  [SMALL_STATE(108)] = 3466,
  [SMALL_STATE(109)] = 3488,
  [SMALL_STATE(110)] = 3514,
  [SMALL_STATE(111)] = 3540,
  [SMALL_STATE(112)] = 3568,
  [SMALL_STATE(113)] = 3596,
  [SMALL_STATE(114)] = 3618,
  [SMALL_STATE(115)] = 3640,
  [SMALL_STATE(116)] = 3668,
  [SMALL_STATE(117)] = 3694,
  [SMALL_STATE(118)] = 3722,
  [SMALL_STATE(119)] = 3750,
  [SMALL_STATE(120)] = 3776,
  [SMALL_STATE(121)] = 3798,
  [SMALL_STATE(122)] = 3826,
  [SMALL_STATE(123)] = 3848,
  [SMALL_STATE(124)] = 3870,
  [SMALL_STATE(125)] = 3898,
  [SMALL_STATE(126)] = 3924,
  [SMALL_STATE(127)] = 3945,
  [SMALL_STATE(128)] = 3966,
  [SMALL_STATE(129)] = 3989,
  [SMALL_STATE(130)] = 4014,
  [SMALL_STATE(131)] = 4039,
  [SMALL_STATE(132)] = 4064,
  [SMALL_STATE(133)] = 4085,
  [SMALL_STATE(134)] = 4110,
  [SMALL_STATE(135)] = 4135,
  [SMALL_STATE(136)] = 4160,
  [SMALL_STATE(137)] = 4185,
  [SMALL_STATE(138)] = 4210,
  [SMALL_STATE(139)] = 4235,
  [SMALL_STATE(140)] = 4260,
  [SMALL_STATE(141)] = 4281,
  [SMALL_STATE(142)] = 4306,
  [SMALL_STATE(143)] = 4327,
  [SMALL_STATE(144)] = 4352,
  [SMALL_STATE(145)] = 4373,
  [SMALL_STATE(146)] = 4398,
  [SMALL_STATE(147)] = 4423,
  [SMALL_STATE(148)] = 4448,
  [SMALL_STATE(149)] = 4473,
  [SMALL_STATE(150)] = 4494,
  [SMALL_STATE(151)] = 4519,
  [SMALL_STATE(152)] = 4544,
  [SMALL_STATE(153)] = 4569,
  [SMALL_STATE(154)] = 4594,
  [SMALL_STATE(155)] = 4619,
  [SMALL_STATE(156)] = 4644,
  [SMALL_STATE(157)] = 4669,
  [SMALL_STATE(158)] = 4694,
  [SMALL_STATE(159)] = 4719,
  [SMALL_STATE(160)] = 4744,
  [SMALL_STATE(161)] = 4765,
  [SMALL_STATE(162)] = 4790,
  [SMALL_STATE(163)] = 4811,
  [SMALL_STATE(164)] = 4832,
  [SMALL_STATE(165)] = 4857,
  [SMALL_STATE(166)] = 4882,
  [SMALL_STATE(167)] = 4903,
  [SMALL_STATE(168)] = 4928,
  [SMALL_STATE(169)] = 4949,
  [SMALL_STATE(170)] = 4970,
  [SMALL_STATE(171)] = 4995,
  [SMALL_STATE(172)] = 5020,
  [SMALL_STATE(173)] = 5045,
  [SMALL_STATE(174)] = 5070,
  [SMALL_STATE(175)] = 5105,
  [SMALL_STATE(176)] = 5130,
  [SMALL_STATE(177)] = 5151,
  [SMALL_STATE(178)] = 5172,
  [SMALL_STATE(179)] = 5193,
  [SMALL_STATE(180)] = 5214,
  [SMALL_STATE(181)] = 5239,
  [SMALL_STATE(182)] = 5260,
  [SMALL_STATE(183)] = 5285,
  [SMALL_STATE(184)] = 5308,
  [SMALL_STATE(185)] = 5333,
  [SMALL_STATE(186)] = 5358,
  [SMALL_STATE(187)] = 5383,
  [SMALL_STATE(188)] = 5408,
  [SMALL_STATE(189)] = 5433,
  [SMALL_STATE(190)] = 5458,
  [SMALL_STATE(191)] = 5483,
  [SMALL_STATE(192)] = 5508,
  [SMALL_STATE(193)] = 5533,
  [SMALL_STATE(194)] = 5558,
  [SMALL_STATE(195)] = 5583,
  [SMALL_STATE(196)] = 5608,
  [SMALL_STATE(197)] = 5633,
  [SMALL_STATE(198)] = 5654,
  [SMALL_STATE(199)] = 5679,
  [SMALL_STATE(200)] = 5704,
  [SMALL_STATE(201)] = 5729,
  [SMALL_STATE(202)] = 5754,
  [SMALL_STATE(203)] = 5779,
  [SMALL_STATE(204)] = 5804,
  [SMALL_STATE(205)] = 5826,
  [SMALL_STATE(206)] = 5848,
  [SMALL_STATE(207)] = 5870,
  [SMALL_STATE(208)] = 5890,
  [SMALL_STATE(209)] = 5912,
  [SMALL_STATE(210)] = 5934,
  [SMALL_STATE(211)] = 5956,
  [SMALL_STATE(212)] = 5976,
  [SMALL_STATE(213)] = 5996,
  [SMALL_STATE(214)] = 6028,
  [SMALL_STATE(215)] = 6048,
  [SMALL_STATE(216)] = 6068,
  [SMALL_STATE(217)] = 6090,
  [SMALL_STATE(218)] = 6110,
  [SMALL_STATE(219)] = 6132,
  [SMALL_STATE(220)] = 6154,
  [SMALL_STATE(221)] = 6176,
  [SMALL_STATE(222)] = 6198,
  [SMALL_STATE(223)] = 6220,
  [SMALL_STATE(224)] = 6240,
  [SMALL_STATE(225)] = 6260,
  [SMALL_STATE(226)] = 6282,
  [SMALL_STATE(227)] = 6302,
  [SMALL_STATE(228)] = 6324,
  [SMALL_STATE(229)] = 6344,
  [SMALL_STATE(230)] = 6366,
  [SMALL_STATE(231)] = 6388,
  [SMALL_STATE(232)] = 6410,
  [SMALL_STATE(233)] = 6432,
  [SMALL_STATE(234)] = 6454,
  [SMALL_STATE(235)] = 6476,
  [SMALL_STATE(236)] = 6498,
  [SMALL_STATE(237)] = 6520,
  [SMALL_STATE(238)] = 6542,
  [SMALL_STATE(239)] = 6562,
  [SMALL_STATE(240)] = 6584,
  [SMALL_STATE(241)] = 6606,
  [SMALL_STATE(242)] = 6628,
  [SMALL_STATE(243)] = 6650,
  [SMALL_STATE(244)] = 6672,
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
  [SMALL_STATE(305)] = 7836,
  [SMALL_STATE(306)] = 7855,
  [SMALL_STATE(307)] = 7874,
  [SMALL_STATE(308)] = 7893,
  [SMALL_STATE(309)] = 7912,
  [SMALL_STATE(310)] = 7931,
  [SMALL_STATE(311)] = 7950,
  [SMALL_STATE(312)] = 7969,
  [SMALL_STATE(313)] = 7988,
  [SMALL_STATE(314)] = 8007,
  [SMALL_STATE(315)] = 8026,
  [SMALL_STATE(316)] = 8045,
  [SMALL_STATE(317)] = 8064,
  [SMALL_STATE(318)] = 8083,
  [SMALL_STATE(319)] = 8102,
  [SMALL_STATE(320)] = 8121,
  [SMALL_STATE(321)] = 8140,
  [SMALL_STATE(322)] = 8159,
  [SMALL_STATE(323)] = 8178,
  [SMALL_STATE(324)] = 8197,
  [SMALL_STATE(325)] = 8216,
  [SMALL_STATE(326)] = 8235,
  [SMALL_STATE(327)] = 8254,
  [SMALL_STATE(328)] = 8273,
  [SMALL_STATE(329)] = 8292,
  [SMALL_STATE(330)] = 8311,
  [SMALL_STATE(331)] = 8330,
  [SMALL_STATE(332)] = 8349,
  [SMALL_STATE(333)] = 8368,
  [SMALL_STATE(334)] = 8387,
  [SMALL_STATE(335)] = 8406,
  [SMALL_STATE(336)] = 8425,
  [SMALL_STATE(337)] = 8444,
  [SMALL_STATE(338)] = 8463,
  [SMALL_STATE(339)] = 8482,
  [SMALL_STATE(340)] = 8501,
  [SMALL_STATE(341)] = 8520,
  [SMALL_STATE(342)] = 8539,
  [SMALL_STATE(343)] = 8558,
  [SMALL_STATE(344)] = 8577,
  [SMALL_STATE(345)] = 8596,
  [SMALL_STATE(346)] = 8615,
  [SMALL_STATE(347)] = 8634,
  [SMALL_STATE(348)] = 8653,
  [SMALL_STATE(349)] = 8672,
  [SMALL_STATE(350)] = 8691,
  [SMALL_STATE(351)] = 8710,
  [SMALL_STATE(352)] = 8729,
  [SMALL_STATE(353)] = 8748,
  [SMALL_STATE(354)] = 8767,
  [SMALL_STATE(355)] = 8786,
  [SMALL_STATE(356)] = 8805,
  [SMALL_STATE(357)] = 8824,
  [SMALL_STATE(358)] = 8843,
  [SMALL_STATE(359)] = 8862,
  [SMALL_STATE(360)] = 8881,
  [SMALL_STATE(361)] = 8900,
  [SMALL_STATE(362)] = 8919,
  [SMALL_STATE(363)] = 8938,
  [SMALL_STATE(364)] = 8957,
  [SMALL_STATE(365)] = 8976,
  [SMALL_STATE(366)] = 8995,
  [SMALL_STATE(367)] = 9014,
  [SMALL_STATE(368)] = 9033,
  [SMALL_STATE(369)] = 9052,
  [SMALL_STATE(370)] = 9071,
  [SMALL_STATE(371)] = 9090,
  [SMALL_STATE(372)] = 9109,
  [SMALL_STATE(373)] = 9128,
  [SMALL_STATE(374)] = 9147,
  [SMALL_STATE(375)] = 9166,
  [SMALL_STATE(376)] = 9185,
  [SMALL_STATE(377)] = 9204,
  [SMALL_STATE(378)] = 9223,
  [SMALL_STATE(379)] = 9242,
  [SMALL_STATE(380)] = 9261,
  [SMALL_STATE(381)] = 9280,
  [SMALL_STATE(382)] = 9299,
  [SMALL_STATE(383)] = 9318,
  [SMALL_STATE(384)] = 9337,
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
  [SMALL_STATE(406)] = 9755,
  [SMALL_STATE(407)] = 9785,
  [SMALL_STATE(408)] = 9803,
  [SMALL_STATE(409)] = 9828,
  [SMALL_STATE(410)] = 9853,
  [SMALL_STATE(411)] = 9878,
  [SMALL_STATE(412)] = 9903,
  [SMALL_STATE(413)] = 9928,
  [SMALL_STATE(414)] = 9953,
  [SMALL_STATE(415)] = 9978,
  [SMALL_STATE(416)] = 10003,
  [SMALL_STATE(417)] = 10028,
  [SMALL_STATE(418)] = 10054,
  [SMALL_STATE(419)] = 10082,
  [SMALL_STATE(420)] = 10105,
  [SMALL_STATE(421)] = 10131,
  [SMALL_STATE(422)] = 10153,
  [SMALL_STATE(423)] = 10187,
  [SMALL_STATE(424)] = 10207,
  [SMALL_STATE(425)] = 10227,
  [SMALL_STATE(426)] = 10247,
  [SMALL_STATE(427)] = 10267,
  [SMALL_STATE(428)] = 10290,
  [SMALL_STATE(429)] = 10309,
  [SMALL_STATE(430)] = 10328,
  [SMALL_STATE(431)] = 10351,
  [SMALL_STATE(432)] = 10368,
  [SMALL_STATE(433)] = 10385,
  [SMALL_STATE(434)] = 10416,
  [SMALL_STATE(435)] = 10436,
  [SMALL_STATE(436)] = 10452,
  [SMALL_STATE(437)] = 10468,
  [SMALL_STATE(438)] = 10484,
  [SMALL_STATE(439)] = 10500,
  [SMALL_STATE(440)] = 10516,
  [SMALL_STATE(441)] = 10532,
  [SMALL_STATE(442)] = 10548,
  [SMALL_STATE(443)] = 10564,
  [SMALL_STATE(444)] = 10580,
  [SMALL_STATE(445)] = 10596,
  [SMALL_STATE(446)] = 10612,
  [SMALL_STATE(447)] = 10628,
  [SMALL_STATE(448)] = 10649,
  [SMALL_STATE(449)] = 10670,
  [SMALL_STATE(450)] = 10691,
  [SMALL_STATE(451)] = 10712,
  [SMALL_STATE(452)] = 10733,
  [SMALL_STATE(453)] = 10747,
  [SMALL_STATE(454)] = 10765,
  [SMALL_STATE(455)] = 10787,
  [SMALL_STATE(456)] = 10801,
  [SMALL_STATE(457)] = 10821,
  [SMALL_STATE(458)] = 10843,
  [SMALL_STATE(459)] = 10865,
  [SMALL_STATE(460)] = 10885,
  [SMALL_STATE(461)] = 10907,
  [SMALL_STATE(462)] = 10918,
  [SMALL_STATE(463)] = 10937,
  [SMALL_STATE(464)] = 10956,
  [SMALL_STATE(465)] = 10973,
  [SMALL_STATE(466)] = 10988,
  [SMALL_STATE(467)] = 11007,
  [SMALL_STATE(468)] = 11015,
  [SMALL_STATE(469)] = 11031,
  [SMALL_STATE(470)] = 11047,
  [SMALL_STATE(471)] = 11061,
  [SMALL_STATE(472)] = 11069,
  [SMALL_STATE(473)] = 11081,
  [SMALL_STATE(474)] = 11089,
  [SMALL_STATE(475)] = 11097,
  [SMALL_STATE(476)] = 11109,
  [SMALL_STATE(477)] = 11123,
  [SMALL_STATE(478)] = 11131,
  [SMALL_STATE(479)] = 11139,
  [SMALL_STATE(480)] = 11155,
  [SMALL_STATE(481)] = 11171,
  [SMALL_STATE(482)] = 11179,
  [SMALL_STATE(483)] = 11195,
  [SMALL_STATE(484)] = 11211,
  [SMALL_STATE(485)] = 11225,
  [SMALL_STATE(486)] = 11241,
  [SMALL_STATE(487)] = 11253,
  [SMALL_STATE(488)] = 11269,
  [SMALL_STATE(489)] = 11281,
  [SMALL_STATE(490)] = 11297,
  [SMALL_STATE(491)] = 11313,
  [SMALL_STATE(492)] = 11327,
  [SMALL_STATE(493)] = 11340,
  [SMALL_STATE(494)] = 11353,
  [SMALL_STATE(495)] = 11366,
  [SMALL_STATE(496)] = 11379,
  [SMALL_STATE(497)] = 11392,
  [SMALL_STATE(498)] = 11405,
  [SMALL_STATE(499)] = 11418,
  [SMALL_STATE(500)] = 11431,
  [SMALL_STATE(501)] = 11444,
  [SMALL_STATE(502)] = 11457,
  [SMALL_STATE(503)] = 11468,
  [SMALL_STATE(504)] = 11481,
  [SMALL_STATE(505)] = 11494,
  [SMALL_STATE(506)] = 11507,
  [SMALL_STATE(507)] = 11520,
  [SMALL_STATE(508)] = 11527,
  [SMALL_STATE(509)] = 11540,
  [SMALL_STATE(510)] = 11553,
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
  [SMALL_STATE(525)] = 11742,
  [SMALL_STATE(526)] = 11755,
  [SMALL_STATE(527)] = 11766,
  [SMALL_STATE(528)] = 11779,
  [SMALL_STATE(529)] = 11792,
  [SMALL_STATE(530)] = 11805,
  [SMALL_STATE(531)] = 11818,
  [SMALL_STATE(532)] = 11825,
  [SMALL_STATE(533)] = 11838,
  [SMALL_STATE(534)] = 11851,
  [SMALL_STATE(535)] = 11864,
  [SMALL_STATE(536)] = 11877,
  [SMALL_STATE(537)] = 11888,
  [SMALL_STATE(538)] = 11901,
  [SMALL_STATE(539)] = 11914,
  [SMALL_STATE(540)] = 11927,
  [SMALL_STATE(541)] = 11940,
  [SMALL_STATE(542)] = 11953,
  [SMALL_STATE(543)] = 11966,
  [SMALL_STATE(544)] = 11979,
  [SMALL_STATE(545)] = 11992,
  [SMALL_STATE(546)] = 12005,
  [SMALL_STATE(547)] = 12018,
  [SMALL_STATE(548)] = 12028,
  [SMALL_STATE(549)] = 12038,
  [SMALL_STATE(550)] = 12048,
  [SMALL_STATE(551)] = 12058,
  [SMALL_STATE(552)] = 12068,
  [SMALL_STATE(553)] = 12078,
  [SMALL_STATE(554)] = 12086,
  [SMALL_STATE(555)] = 12096,
  [SMALL_STATE(556)] = 12104,
  [SMALL_STATE(557)] = 12114,
  [SMALL_STATE(558)] = 12124,
  [SMALL_STATE(559)] = 12134,
  [SMALL_STATE(560)] = 12144,
  [SMALL_STATE(561)] = 12154,
  [SMALL_STATE(562)] = 12164,
  [SMALL_STATE(563)] = 12174,
  [SMALL_STATE(564)] = 12184,
  [SMALL_STATE(565)] = 12192,
  [SMALL_STATE(566)] = 12202,
  [SMALL_STATE(567)] = 12212,
  [SMALL_STATE(568)] = 12222,
  [SMALL_STATE(569)] = 12232,
  [SMALL_STATE(570)] = 12242,
  [SMALL_STATE(571)] = 12252,
  [SMALL_STATE(572)] = 12262,
  [SMALL_STATE(573)] = 12272,
  [SMALL_STATE(574)] = 12282,
  [SMALL_STATE(575)] = 12292,
  [SMALL_STATE(576)] = 12302,
  [SMALL_STATE(577)] = 12312,
  [SMALL_STATE(578)] = 12322,
  [SMALL_STATE(579)] = 12332,
  [SMALL_STATE(580)] = 12342,
  [SMALL_STATE(581)] = 12352,
  [SMALL_STATE(582)] = 12362,
  [SMALL_STATE(583)] = 12372,
  [SMALL_STATE(584)] = 12382,
  [SMALL_STATE(585)] = 12392,
  [SMALL_STATE(586)] = 12402,
  [SMALL_STATE(587)] = 12412,
  [SMALL_STATE(588)] = 12422,
  [SMALL_STATE(589)] = 12432,
  [SMALL_STATE(590)] = 12442,
  [SMALL_STATE(591)] = 12452,
  [SMALL_STATE(592)] = 12462,
  [SMALL_STATE(593)] = 12472,
  [SMALL_STATE(594)] = 12482,
  [SMALL_STATE(595)] = 12492,
  [SMALL_STATE(596)] = 12502,
  [SMALL_STATE(597)] = 12512,
  [SMALL_STATE(598)] = 12522,
  [SMALL_STATE(599)] = 12532,
  [SMALL_STATE(600)] = 12542,
  [SMALL_STATE(601)] = 12552,
  [SMALL_STATE(602)] = 12562,
  [SMALL_STATE(603)] = 12572,
  [SMALL_STATE(604)] = 12582,
  [SMALL_STATE(605)] = 12592,
  [SMALL_STATE(606)] = 12602,
  [SMALL_STATE(607)] = 12612,
  [SMALL_STATE(608)] = 12622,
  [SMALL_STATE(609)] = 12632,
  [SMALL_STATE(610)] = 12642,
  [SMALL_STATE(611)] = 12652,
  [SMALL_STATE(612)] = 12662,
  [SMALL_STATE(613)] = 12672,
  [SMALL_STATE(614)] = 12682,
  [SMALL_STATE(615)] = 12692,
  [SMALL_STATE(616)] = 12702,
  [SMALL_STATE(617)] = 12712,
  [SMALL_STATE(618)] = 12722,
  [SMALL_STATE(619)] = 12732,
  [SMALL_STATE(620)] = 12742,
  [SMALL_STATE(621)] = 12752,
  [SMALL_STATE(622)] = 12762,
  [SMALL_STATE(623)] = 12772,
  [SMALL_STATE(624)] = 12782,
  [SMALL_STATE(625)] = 12792,
  [SMALL_STATE(626)] = 12802,
  [SMALL_STATE(627)] = 12812,
  [SMALL_STATE(628)] = 12822,
  [SMALL_STATE(629)] = 12832,
  [SMALL_STATE(630)] = 12842,
  [SMALL_STATE(631)] = 12852,
  [SMALL_STATE(632)] = 12862,
  [SMALL_STATE(633)] = 12872,
  [SMALL_STATE(634)] = 12882,
  [SMALL_STATE(635)] = 12892,
  [SMALL_STATE(636)] = 12902,
  [SMALL_STATE(637)] = 12908,
  [SMALL_STATE(638)] = 12918,
  [SMALL_STATE(639)] = 12928,
  [SMALL_STATE(640)] = 12936,
  [SMALL_STATE(641)] = 12946,
  [SMALL_STATE(642)] = 12956,
  [SMALL_STATE(643)] = 12966,
  [SMALL_STATE(644)] = 12976,
  [SMALL_STATE(645)] = 12986,
  [SMALL_STATE(646)] = 12996,
  [SMALL_STATE(647)] = 13006,
  [SMALL_STATE(648)] = 13016,
  [SMALL_STATE(649)] = 13026,
  [SMALL_STATE(650)] = 13036,
  [SMALL_STATE(651)] = 13042,
  [SMALL_STATE(652)] = 13052,
  [SMALL_STATE(653)] = 13062,
  [SMALL_STATE(654)] = 13072,
  [SMALL_STATE(655)] = 13082,
  [SMALL_STATE(656)] = 13092,
  [SMALL_STATE(657)] = 13102,
  [SMALL_STATE(658)] = 13112,
  [SMALL_STATE(659)] = 13122,
  [SMALL_STATE(660)] = 13132,
  [SMALL_STATE(661)] = 13142,
  [SMALL_STATE(662)] = 13152,
  [SMALL_STATE(663)] = 13162,
  [SMALL_STATE(664)] = 13172,
  [SMALL_STATE(665)] = 13182,
  [SMALL_STATE(666)] = 13192,
  [SMALL_STATE(667)] = 13202,
  [SMALL_STATE(668)] = 13212,
  [SMALL_STATE(669)] = 13222,
  [SMALL_STATE(670)] = 13232,
  [SMALL_STATE(671)] = 13242,
  [SMALL_STATE(672)] = 13252,
  [SMALL_STATE(673)] = 13262,
  [SMALL_STATE(674)] = 13272,
  [SMALL_STATE(675)] = 13282,
  [SMALL_STATE(676)] = 13292,
  [SMALL_STATE(677)] = 13302,
  [SMALL_STATE(678)] = 13312,
  [SMALL_STATE(679)] = 13322,
  [SMALL_STATE(680)] = 13332,
  [SMALL_STATE(681)] = 13342,
  [SMALL_STATE(682)] = 13352,
  [SMALL_STATE(683)] = 13362,
  [SMALL_STATE(684)] = 13372,
  [SMALL_STATE(685)] = 13382,
  [SMALL_STATE(686)] = 13392,
  [SMALL_STATE(687)] = 13402,
  [SMALL_STATE(688)] = 13412,
  [SMALL_STATE(689)] = 13420,
  [SMALL_STATE(690)] = 13430,
  [SMALL_STATE(691)] = 13440,
  [SMALL_STATE(692)] = 13450,
  [SMALL_STATE(693)] = 13460,
  [SMALL_STATE(694)] = 13470,
  [SMALL_STATE(695)] = 13477,
  [SMALL_STATE(696)] = 13484,
  [SMALL_STATE(697)] = 13491,
  [SMALL_STATE(698)] = 13498,
  [SMALL_STATE(699)] = 13503,
  [SMALL_STATE(700)] = 13508,
  [SMALL_STATE(701)] = 13515,
  [SMALL_STATE(702)] = 13520,
  [SMALL_STATE(703)] = 13527,
  [SMALL_STATE(704)] = 13534,
  [SMALL_STATE(705)] = 13541,
  [SMALL_STATE(706)] = 13548,
  [SMALL_STATE(707)] = 13555,
  [SMALL_STATE(708)] = 13562,
  [SMALL_STATE(709)] = 13569,
  [SMALL_STATE(710)] = 13576,
  [SMALL_STATE(711)] = 13583,
  [SMALL_STATE(712)] = 13590,
  [SMALL_STATE(713)] = 13595,
  [SMALL_STATE(714)] = 13602,
  [SMALL_STATE(715)] = 13609,
  [SMALL_STATE(716)] = 13614,
  [SMALL_STATE(717)] = 13619,
  [SMALL_STATE(718)] = 13626,
  [SMALL_STATE(719)] = 13631,
  [SMALL_STATE(720)] = 13638,
  [SMALL_STATE(721)] = 13645,
  [SMALL_STATE(722)] = 13652,
  [SMALL_STATE(723)] = 13659,
  [SMALL_STATE(724)] = 13666,
  [SMALL_STATE(725)] = 13673,
  [SMALL_STATE(726)] = 13680,
  [SMALL_STATE(727)] = 13687,
  [SMALL_STATE(728)] = 13694,
  [SMALL_STATE(729)] = 13701,
  [SMALL_STATE(730)] = 13708,
  [SMALL_STATE(731)] = 13715,
  [SMALL_STATE(732)] = 13722,
  [SMALL_STATE(733)] = 13729,
  [SMALL_STATE(734)] = 13734,
  [SMALL_STATE(735)] = 13739,
  [SMALL_STATE(736)] = 13746,
  [SMALL_STATE(737)] = 13751,
  [SMALL_STATE(738)] = 13758,
  [SMALL_STATE(739)] = 13765,
  [SMALL_STATE(740)] = 13772,
  [SMALL_STATE(741)] = 13779,
  [SMALL_STATE(742)] = 13784,
  [SMALL_STATE(743)] = 13791,
  [SMALL_STATE(744)] = 13798,
  [SMALL_STATE(745)] = 13805,
  [SMALL_STATE(746)] = 13812,
  [SMALL_STATE(747)] = 13819,
  [SMALL_STATE(748)] = 13826,
  [SMALL_STATE(749)] = 13833,
  [SMALL_STATE(750)] = 13840,
  [SMALL_STATE(751)] = 13847,
  [SMALL_STATE(752)] = 13854,
  [SMALL_STATE(753)] = 13861,
  [SMALL_STATE(754)] = 13868,
  [SMALL_STATE(755)] = 13873,
  [SMALL_STATE(756)] = 13880,
  [SMALL_STATE(757)] = 13887,
  [SMALL_STATE(758)] = 13894,
  [SMALL_STATE(759)] = 13901,
  [SMALL_STATE(760)] = 13908,
  [SMALL_STATE(761)] = 13915,
  [SMALL_STATE(762)] = 13922,
  [SMALL_STATE(763)] = 13929,
  [SMALL_STATE(764)] = 13934,
  [SMALL_STATE(765)] = 13939,
  [SMALL_STATE(766)] = 13946,
  [SMALL_STATE(767)] = 13953,
  [SMALL_STATE(768)] = 13958,
  [SMALL_STATE(769)] = 13965,
  [SMALL_STATE(770)] = 13972,
  [SMALL_STATE(771)] = 13977,
  [SMALL_STATE(772)] = 13984,
  [SMALL_STATE(773)] = 13989,
  [SMALL_STATE(774)] = 13994,
  [SMALL_STATE(775)] = 13999,
  [SMALL_STATE(776)] = 14004,
  [SMALL_STATE(777)] = 14011,
  [SMALL_STATE(778)] = 14018,
  [SMALL_STATE(779)] = 14025,
  [SMALL_STATE(780)] = 14030,
  [SMALL_STATE(781)] = 14037,
  [SMALL_STATE(782)] = 14044,
  [SMALL_STATE(783)] = 14049,
  [SMALL_STATE(784)] = 14054,
  [SMALL_STATE(785)] = 14059,
  [SMALL_STATE(786)] = 14066,
  [SMALL_STATE(787)] = 14073,
  [SMALL_STATE(788)] = 14080,
  [SMALL_STATE(789)] = 14087,
  [SMALL_STATE(790)] = 14094,
  [SMALL_STATE(791)] = 14101,
  [SMALL_STATE(792)] = 14108,
  [SMALL_STATE(793)] = 14115,
  [SMALL_STATE(794)] = 14122,
  [SMALL_STATE(795)] = 14129,
  [SMALL_STATE(796)] = 14136,
  [SMALL_STATE(797)] = 14143,
  [SMALL_STATE(798)] = 14150,
  [SMALL_STATE(799)] = 14155,
  [SMALL_STATE(800)] = 14162,
  [SMALL_STATE(801)] = 14169,
  [SMALL_STATE(802)] = 14176,
  [SMALL_STATE(803)] = 14183,
  [SMALL_STATE(804)] = 14190,
  [SMALL_STATE(805)] = 14197,
  [SMALL_STATE(806)] = 14204,
  [SMALL_STATE(807)] = 14209,
  [SMALL_STATE(808)] = 14214,
  [SMALL_STATE(809)] = 14221,
  [SMALL_STATE(810)] = 14228,
  [SMALL_STATE(811)] = 14235,
  [SMALL_STATE(812)] = 14242,
  [SMALL_STATE(813)] = 14249,
  [SMALL_STATE(814)] = 14256,
  [SMALL_STATE(815)] = 14261,
  [SMALL_STATE(816)] = 14268,
  [SMALL_STATE(817)] = 14275,
  [SMALL_STATE(818)] = 14282,
  [SMALL_STATE(819)] = 14289,
  [SMALL_STATE(820)] = 14294,
  [SMALL_STATE(821)] = 14301,
  [SMALL_STATE(822)] = 14306,
  [SMALL_STATE(823)] = 14313,
  [SMALL_STATE(824)] = 14320,
  [SMALL_STATE(825)] = 14325,
  [SMALL_STATE(826)] = 14332,
  [SMALL_STATE(827)] = 14339,
  [SMALL_STATE(828)] = 14346,
  [SMALL_STATE(829)] = 14353,
  [SMALL_STATE(830)] = 14360,
  [SMALL_STATE(831)] = 14367,
  [SMALL_STATE(832)] = 14374,
  [SMALL_STATE(833)] = 14381,
  [SMALL_STATE(834)] = 14386,
  [SMALL_STATE(835)] = 14391,
  [SMALL_STATE(836)] = 14398,
  [SMALL_STATE(837)] = 14403,
  [SMALL_STATE(838)] = 14410,
  [SMALL_STATE(839)] = 14417,
  [SMALL_STATE(840)] = 14424,
  [SMALL_STATE(841)] = 14431,
  [SMALL_STATE(842)] = 14438,
  [SMALL_STATE(843)] = 14445,
  [SMALL_STATE(844)] = 14452,
  [SMALL_STATE(845)] = 14459,
  [SMALL_STATE(846)] = 14466,
  [SMALL_STATE(847)] = 14473,
  [SMALL_STATE(848)] = 14480,
  [SMALL_STATE(849)] = 14484,
  [SMALL_STATE(850)] = 14488,
  [SMALL_STATE(851)] = 14492,
  [SMALL_STATE(852)] = 14496,
  [SMALL_STATE(853)] = 14500,
  [SMALL_STATE(854)] = 14504,
  [SMALL_STATE(855)] = 14508,
  [SMALL_STATE(856)] = 14512,
  [SMALL_STATE(857)] = 14516,
  [SMALL_STATE(858)] = 14520,
  [SMALL_STATE(859)] = 14524,
  [SMALL_STATE(860)] = 14528,
  [SMALL_STATE(861)] = 14532,
  [SMALL_STATE(862)] = 14536,
  [SMALL_STATE(863)] = 14540,
  [SMALL_STATE(864)] = 14544,
  [SMALL_STATE(865)] = 14548,
  [SMALL_STATE(866)] = 14552,
  [SMALL_STATE(867)] = 14556,
  [SMALL_STATE(868)] = 14560,
  [SMALL_STATE(869)] = 14564,
  [SMALL_STATE(870)] = 14568,
  [SMALL_STATE(871)] = 14572,
  [SMALL_STATE(872)] = 14576,
  [SMALL_STATE(873)] = 14580,
  [SMALL_STATE(874)] = 14584,
  [SMALL_STATE(875)] = 14588,
  [SMALL_STATE(876)] = 14592,
  [SMALL_STATE(877)] = 14596,
  [SMALL_STATE(878)] = 14600,
  [SMALL_STATE(879)] = 14604,
  [SMALL_STATE(880)] = 14608,
  [SMALL_STATE(881)] = 14612,
  [SMALL_STATE(882)] = 14616,
  [SMALL_STATE(883)] = 14620,
  [SMALL_STATE(884)] = 14624,
  [SMALL_STATE(885)] = 14628,
  [SMALL_STATE(886)] = 14632,
  [SMALL_STATE(887)] = 14636,
  [SMALL_STATE(888)] = 14640,
  [SMALL_STATE(889)] = 14644,
  [SMALL_STATE(890)] = 14648,
  [SMALL_STATE(891)] = 14652,
  [SMALL_STATE(892)] = 14656,
  [SMALL_STATE(893)] = 14660,
  [SMALL_STATE(894)] = 14664,
  [SMALL_STATE(895)] = 14668,
  [SMALL_STATE(896)] = 14672,
  [SMALL_STATE(897)] = 14676,
  [SMALL_STATE(898)] = 14680,
  [SMALL_STATE(899)] = 14684,
  [SMALL_STATE(900)] = 14688,
  [SMALL_STATE(901)] = 14692,
  [SMALL_STATE(902)] = 14696,
  [SMALL_STATE(903)] = 14700,
  [SMALL_STATE(904)] = 14704,
  [SMALL_STATE(905)] = 14708,
  [SMALL_STATE(906)] = 14712,
  [SMALL_STATE(907)] = 14716,
  [SMALL_STATE(908)] = 14720,
  [SMALL_STATE(909)] = 14724,
  [SMALL_STATE(910)] = 14728,
  [SMALL_STATE(911)] = 14732,
  [SMALL_STATE(912)] = 14736,
  [SMALL_STATE(913)] = 14740,
  [SMALL_STATE(914)] = 14744,
  [SMALL_STATE(915)] = 14748,
  [SMALL_STATE(916)] = 14752,
  [SMALL_STATE(917)] = 14756,
  [SMALL_STATE(918)] = 14760,
  [SMALL_STATE(919)] = 14764,
  [SMALL_STATE(920)] = 14768,
  [SMALL_STATE(921)] = 14772,
  [SMALL_STATE(922)] = 14776,
  [SMALL_STATE(923)] = 14780,
  [SMALL_STATE(924)] = 14784,
  [SMALL_STATE(925)] = 14788,
  [SMALL_STATE(926)] = 14792,
  [SMALL_STATE(927)] = 14796,
  [SMALL_STATE(928)] = 14800,
  [SMALL_STATE(929)] = 14804,
  [SMALL_STATE(930)] = 14808,
  [SMALL_STATE(931)] = 14812,
  [SMALL_STATE(932)] = 14816,
  [SMALL_STATE(933)] = 14820,
  [SMALL_STATE(934)] = 14824,
  [SMALL_STATE(935)] = 14828,
  [SMALL_STATE(936)] = 14832,
  [SMALL_STATE(937)] = 14836,
  [SMALL_STATE(938)] = 14840,
  [SMALL_STATE(939)] = 14844,
  [SMALL_STATE(940)] = 14848,
  [SMALL_STATE(941)] = 14852,
  [SMALL_STATE(942)] = 14856,
  [SMALL_STATE(943)] = 14860,
  [SMALL_STATE(944)] = 14864,
  [SMALL_STATE(945)] = 14868,
  [SMALL_STATE(946)] = 14872,
  [SMALL_STATE(947)] = 14876,
  [SMALL_STATE(948)] = 14880,
  [SMALL_STATE(949)] = 14884,
  [SMALL_STATE(950)] = 14888,
  [SMALL_STATE(951)] = 14892,
  [SMALL_STATE(952)] = 14896,
  [SMALL_STATE(953)] = 14900,
  [SMALL_STATE(954)] = 14904,
  [SMALL_STATE(955)] = 14908,
  [SMALL_STATE(956)] = 14912,
  [SMALL_STATE(957)] = 14916,
  [SMALL_STATE(958)] = 14920,
  [SMALL_STATE(959)] = 14924,
  [SMALL_STATE(960)] = 14928,
  [SMALL_STATE(961)] = 14932,
  [SMALL_STATE(962)] = 14936,
  [SMALL_STATE(963)] = 14940,
  [SMALL_STATE(964)] = 14944,
  [SMALL_STATE(965)] = 14948,
  [SMALL_STATE(966)] = 14952,
  [SMALL_STATE(967)] = 14956,
  [SMALL_STATE(968)] = 14960,
  [SMALL_STATE(969)] = 14964,
  [SMALL_STATE(970)] = 14968,
  [SMALL_STATE(971)] = 14972,
  [SMALL_STATE(972)] = 14976,
  [SMALL_STATE(973)] = 14980,
  [SMALL_STATE(974)] = 14984,
  [SMALL_STATE(975)] = 14988,
  [SMALL_STATE(976)] = 14992,
  [SMALL_STATE(977)] = 14996,
  [SMALL_STATE(978)] = 15000,
  [SMALL_STATE(979)] = 15004,
  [SMALL_STATE(980)] = 15008,
  [SMALL_STATE(981)] = 15012,
  [SMALL_STATE(982)] = 15016,
  [SMALL_STATE(983)] = 15020,
  [SMALL_STATE(984)] = 15024,
  [SMALL_STATE(985)] = 15028,
  [SMALL_STATE(986)] = 15032,
  [SMALL_STATE(987)] = 15036,
  [SMALL_STATE(988)] = 15040,
  [SMALL_STATE(989)] = 15044,
  [SMALL_STATE(990)] = 15048,
  [SMALL_STATE(991)] = 15052,
  [SMALL_STATE(992)] = 15056,
  [SMALL_STATE(993)] = 15060,
  [SMALL_STATE(994)] = 15064,
  [SMALL_STATE(995)] = 15068,
  [SMALL_STATE(996)] = 15072,
  [SMALL_STATE(997)] = 15076,
  [SMALL_STATE(998)] = 15080,
  [SMALL_STATE(999)] = 15084,
  [SMALL_STATE(1000)] = 15088,
  [SMALL_STATE(1001)] = 15092,
  [SMALL_STATE(1002)] = 15096,
  [SMALL_STATE(1003)] = 15100,
  [SMALL_STATE(1004)] = 15104,
  [SMALL_STATE(1005)] = 15108,
  [SMALL_STATE(1006)] = 15112,
  [SMALL_STATE(1007)] = 15116,
  [SMALL_STATE(1008)] = 15120,
  [SMALL_STATE(1009)] = 15124,
  [SMALL_STATE(1010)] = 15128,
  [SMALL_STATE(1011)] = 15132,
  [SMALL_STATE(1012)] = 15136,
  [SMALL_STATE(1013)] = 15140,
  [SMALL_STATE(1014)] = 15144,
  [SMALL_STATE(1015)] = 15148,
  [SMALL_STATE(1016)] = 15152,
  [SMALL_STATE(1017)] = 15156,
  [SMALL_STATE(1018)] = 15160,
  [SMALL_STATE(1019)] = 15164,
  [SMALL_STATE(1020)] = 15168,
  [SMALL_STATE(1021)] = 15172,
  [SMALL_STATE(1022)] = 15176,
  [SMALL_STATE(1023)] = 15180,
  [SMALL_STATE(1024)] = 15184,
  [SMALL_STATE(1025)] = 15188,
  [SMALL_STATE(1026)] = 15192,
  [SMALL_STATE(1027)] = 15196,
  [SMALL_STATE(1028)] = 15200,
  [SMALL_STATE(1029)] = 15204,
  [SMALL_STATE(1030)] = 15208,
  [SMALL_STATE(1031)] = 15212,
  [SMALL_STATE(1032)] = 15216,
  [SMALL_STATE(1033)] = 15220,
  [SMALL_STATE(1034)] = 15224,
  [SMALL_STATE(1035)] = 15228,
  [SMALL_STATE(1036)] = 15232,
  [SMALL_STATE(1037)] = 15236,
  [SMALL_STATE(1038)] = 15240,
  [SMALL_STATE(1039)] = 15244,
  [SMALL_STATE(1040)] = 15248,
  [SMALL_STATE(1041)] = 15252,
  [SMALL_STATE(1042)] = 15256,
  [SMALL_STATE(1043)] = 15260,
  [SMALL_STATE(1044)] = 15264,
  [SMALL_STATE(1045)] = 15268,
  [SMALL_STATE(1046)] = 15272,
  [SMALL_STATE(1047)] = 15276,
  [SMALL_STATE(1048)] = 15280,
  [SMALL_STATE(1049)] = 15284,
  [SMALL_STATE(1050)] = 15288,
  [SMALL_STATE(1051)] = 15292,
  [SMALL_STATE(1052)] = 15296,
  [SMALL_STATE(1053)] = 15300,
  [SMALL_STATE(1054)] = 15304,
  [SMALL_STATE(1055)] = 15308,
  [SMALL_STATE(1056)] = 15312,
  [SMALL_STATE(1057)] = 15316,
  [SMALL_STATE(1058)] = 15320,
  [SMALL_STATE(1059)] = 15324,
  [SMALL_STATE(1060)] = 15328,
  [SMALL_STATE(1061)] = 15332,
  [SMALL_STATE(1062)] = 15336,
  [SMALL_STATE(1063)] = 15340,
  [SMALL_STATE(1064)] = 15344,
  [SMALL_STATE(1065)] = 15348,
  [SMALL_STATE(1066)] = 15352,
  [SMALL_STATE(1067)] = 15356,
  [SMALL_STATE(1068)] = 15360,
  [SMALL_STATE(1069)] = 15364,
  [SMALL_STATE(1070)] = 15368,
  [SMALL_STATE(1071)] = 15372,
  [SMALL_STATE(1072)] = 15376,
  [SMALL_STATE(1073)] = 15380,
  [SMALL_STATE(1074)] = 15384,
  [SMALL_STATE(1075)] = 15388,
  [SMALL_STATE(1076)] = 15392,
  [SMALL_STATE(1077)] = 15396,
  [SMALL_STATE(1078)] = 15400,
  [SMALL_STATE(1079)] = 15404,
  [SMALL_STATE(1080)] = 15408,
  [SMALL_STATE(1081)] = 15412,
  [SMALL_STATE(1082)] = 15416,
  [SMALL_STATE(1083)] = 15420,
  [SMALL_STATE(1084)] = 15424,
  [SMALL_STATE(1085)] = 15428,
  [SMALL_STATE(1086)] = 15432,
  [SMALL_STATE(1087)] = 15436,
  [SMALL_STATE(1088)] = 15440,
  [SMALL_STATE(1089)] = 15444,
  [SMALL_STATE(1090)] = 15448,
  [SMALL_STATE(1091)] = 15452,
  [SMALL_STATE(1092)] = 15456,
  [SMALL_STATE(1093)] = 15460,
  [SMALL_STATE(1094)] = 15464,
  [SMALL_STATE(1095)] = 15468,
  [SMALL_STATE(1096)] = 15472,
  [SMALL_STATE(1097)] = 15476,
  [SMALL_STATE(1098)] = 15480,
  [SMALL_STATE(1099)] = 15484,
  [SMALL_STATE(1100)] = 15488,
  [SMALL_STATE(1101)] = 15492,
  [SMALL_STATE(1102)] = 15496,
  [SMALL_STATE(1103)] = 15500,
  [SMALL_STATE(1104)] = 15504,
  [SMALL_STATE(1105)] = 15508,
  [SMALL_STATE(1106)] = 15512,
  [SMALL_STATE(1107)] = 15516,
  [SMALL_STATE(1108)] = 15520,
  [SMALL_STATE(1109)] = 15524,
  [SMALL_STATE(1110)] = 15528,
  [SMALL_STATE(1111)] = 15532,
  [SMALL_STATE(1112)] = 15536,
  [SMALL_STATE(1113)] = 15540,
  [SMALL_STATE(1114)] = 15544,
  [SMALL_STATE(1115)] = 15548,
  [SMALL_STATE(1116)] = 15552,
  [SMALL_STATE(1117)] = 15556,
  [SMALL_STATE(1118)] = 15560,
  [SMALL_STATE(1119)] = 15564,
  [SMALL_STATE(1120)] = 15568,
  [SMALL_STATE(1121)] = 15572,
  [SMALL_STATE(1122)] = 15576,
  [SMALL_STATE(1123)] = 15580,
  [SMALL_STATE(1124)] = 15584,
  [SMALL_STATE(1125)] = 15588,
  [SMALL_STATE(1126)] = 15592,
  [SMALL_STATE(1127)] = 15596,
  [SMALL_STATE(1128)] = 15600,
  [SMALL_STATE(1129)] = 15604,
  [SMALL_STATE(1130)] = 15608,
  [SMALL_STATE(1131)] = 15612,
  [SMALL_STATE(1132)] = 15616,
  [SMALL_STATE(1133)] = 15620,
  [SMALL_STATE(1134)] = 15624,
  [SMALL_STATE(1135)] = 15628,
  [SMALL_STATE(1136)] = 15632,
  [SMALL_STATE(1137)] = 15636,
  [SMALL_STATE(1138)] = 15640,
  [SMALL_STATE(1139)] = 15644,
  [SMALL_STATE(1140)] = 15648,
  [SMALL_STATE(1141)] = 15652,
  [SMALL_STATE(1142)] = 15656,
  [SMALL_STATE(1143)] = 15660,
  [SMALL_STATE(1144)] = 15664,
  [SMALL_STATE(1145)] = 15668,
  [SMALL_STATE(1146)] = 15672,
  [SMALL_STATE(1147)] = 15676,
  [SMALL_STATE(1148)] = 15680,
  [SMALL_STATE(1149)] = 15684,
  [SMALL_STATE(1150)] = 15688,
  [SMALL_STATE(1151)] = 15692,
  [SMALL_STATE(1152)] = 15696,
  [SMALL_STATE(1153)] = 15700,
  [SMALL_STATE(1154)] = 15704,
  [SMALL_STATE(1155)] = 15708,
  [SMALL_STATE(1156)] = 15712,
  [SMALL_STATE(1157)] = 15716,
  [SMALL_STATE(1158)] = 15720,
  [SMALL_STATE(1159)] = 15724,
  [SMALL_STATE(1160)] = 15728,
  [SMALL_STATE(1161)] = 15732,
  [SMALL_STATE(1162)] = 15736,
  [SMALL_STATE(1163)] = 15740,
  [SMALL_STATE(1164)] = 15744,
  [SMALL_STATE(1165)] = 15748,
  [SMALL_STATE(1166)] = 15752,
  [SMALL_STATE(1167)] = 15756,
  [SMALL_STATE(1168)] = 15760,
  [SMALL_STATE(1169)] = 15764,
  [SMALL_STATE(1170)] = 15768,
  [SMALL_STATE(1171)] = 15772,
  [SMALL_STATE(1172)] = 15776,
  [SMALL_STATE(1173)] = 15780,
  [SMALL_STATE(1174)] = 15784,
  [SMALL_STATE(1175)] = 15788,
  [SMALL_STATE(1176)] = 15792,
  [SMALL_STATE(1177)] = 15796,
  [SMALL_STATE(1178)] = 15800,
  [SMALL_STATE(1179)] = 15804,
  [SMALL_STATE(1180)] = 15808,
  [SMALL_STATE(1181)] = 15812,
  [SMALL_STATE(1182)] = 15816,
  [SMALL_STATE(1183)] = 15820,
  [SMALL_STATE(1184)] = 15824,
  [SMALL_STATE(1185)] = 15828,
  [SMALL_STATE(1186)] = 15832,
  [SMALL_STATE(1187)] = 15836,
  [SMALL_STATE(1188)] = 15840,
  [SMALL_STATE(1189)] = 15844,
  [SMALL_STATE(1190)] = 15848,
  [SMALL_STATE(1191)] = 15852,
  [SMALL_STATE(1192)] = 15856,
  [SMALL_STATE(1193)] = 15860,
  [SMALL_STATE(1194)] = 15864,
  [SMALL_STATE(1195)] = 15868,
  [SMALL_STATE(1196)] = 15872,
  [SMALL_STATE(1197)] = 15876,
  [SMALL_STATE(1198)] = 15880,
  [SMALL_STATE(1199)] = 15884,
  [SMALL_STATE(1200)] = 15888,
  [SMALL_STATE(1201)] = 15892,
  [SMALL_STATE(1202)] = 15896,
  [SMALL_STATE(1203)] = 15900,
  [SMALL_STATE(1204)] = 15904,
  [SMALL_STATE(1205)] = 15908,
  [SMALL_STATE(1206)] = 15912,
  [SMALL_STATE(1207)] = 15916,
  [SMALL_STATE(1208)] = 15920,
  [SMALL_STATE(1209)] = 15924,
  [SMALL_STATE(1210)] = 15928,
  [SMALL_STATE(1211)] = 15932,
  [SMALL_STATE(1212)] = 15936,
  [SMALL_STATE(1213)] = 15940,
  [SMALL_STATE(1214)] = 15944,
  [SMALL_STATE(1215)] = 15948,
  [SMALL_STATE(1216)] = 15952,
  [SMALL_STATE(1217)] = 15956,
  [SMALL_STATE(1218)] = 15960,
  [SMALL_STATE(1219)] = 15964,
  [SMALL_STATE(1220)] = 15968,
  [SMALL_STATE(1221)] = 15972,
  [SMALL_STATE(1222)] = 15976,
  [SMALL_STATE(1223)] = 15980,
  [SMALL_STATE(1224)] = 15984,
  [SMALL_STATE(1225)] = 15988,
  [SMALL_STATE(1226)] = 15992,
  [SMALL_STATE(1227)] = 15996,
  [SMALL_STATE(1228)] = 16000,
  [SMALL_STATE(1229)] = 16004,
  [SMALL_STATE(1230)] = 16008,
  [SMALL_STATE(1231)] = 16012,
  [SMALL_STATE(1232)] = 16016,
  [SMALL_STATE(1233)] = 16020,
  [SMALL_STATE(1234)] = 16024,
  [SMALL_STATE(1235)] = 16028,
  [SMALL_STATE(1236)] = 16032,
  [SMALL_STATE(1237)] = 16036,
  [SMALL_STATE(1238)] = 16040,
  [SMALL_STATE(1239)] = 16044,
  [SMALL_STATE(1240)] = 16048,
  [SMALL_STATE(1241)] = 16052,
  [SMALL_STATE(1242)] = 16056,
  [SMALL_STATE(1243)] = 16060,
  [SMALL_STATE(1244)] = 16064,
  [SMALL_STATE(1245)] = 16068,
  [SMALL_STATE(1246)] = 16072,
  [SMALL_STATE(1247)] = 16076,
  [SMALL_STATE(1248)] = 16080,
  [SMALL_STATE(1249)] = 16084,
  [SMALL_STATE(1250)] = 16088,
  [SMALL_STATE(1251)] = 16092,
  [SMALL_STATE(1252)] = 16096,
  [SMALL_STATE(1253)] = 16100,
  [SMALL_STATE(1254)] = 16104,
  [SMALL_STATE(1255)] = 16108,
  [SMALL_STATE(1256)] = 16112,
  [SMALL_STATE(1257)] = 16116,
  [SMALL_STATE(1258)] = 16120,
  [SMALL_STATE(1259)] = 16124,
  [SMALL_STATE(1260)] = 16128,
  [SMALL_STATE(1261)] = 16132,
  [SMALL_STATE(1262)] = 16136,
  [SMALL_STATE(1263)] = 16140,
  [SMALL_STATE(1264)] = 16144,
  [SMALL_STATE(1265)] = 16148,
  [SMALL_STATE(1266)] = 16152,
  [SMALL_STATE(1267)] = 16156,
  [SMALL_STATE(1268)] = 16160,
  [SMALL_STATE(1269)] = 16164,
  [SMALL_STATE(1270)] = 16168,
  [SMALL_STATE(1271)] = 16172,
  [SMALL_STATE(1272)] = 16176,
  [SMALL_STATE(1273)] = 16180,
  [SMALL_STATE(1274)] = 16184,
  [SMALL_STATE(1275)] = 16188,
  [SMALL_STATE(1276)] = 16192,
  [SMALL_STATE(1277)] = 16196,
  [SMALL_STATE(1278)] = 16200,
  [SMALL_STATE(1279)] = 16204,
  [SMALL_STATE(1280)] = 16208,
  [SMALL_STATE(1281)] = 16212,
  [SMALL_STATE(1282)] = 16216,
  [SMALL_STATE(1283)] = 16220,
  [SMALL_STATE(1284)] = 16224,
  [SMALL_STATE(1285)] = 16228,
  [SMALL_STATE(1286)] = 16232,
  [SMALL_STATE(1287)] = 16236,
  [SMALL_STATE(1288)] = 16240,
  [SMALL_STATE(1289)] = 16244,
  [SMALL_STATE(1290)] = 16248,
  [SMALL_STATE(1291)] = 16252,
  [SMALL_STATE(1292)] = 16256,
  [SMALL_STATE(1293)] = 16260,
  [SMALL_STATE(1294)] = 16264,
  [SMALL_STATE(1295)] = 16268,
  [SMALL_STATE(1296)] = 16272,
  [SMALL_STATE(1297)] = 16276,
  [SMALL_STATE(1298)] = 16280,
  [SMALL_STATE(1299)] = 16284,
  [SMALL_STATE(1300)] = 16288,
  [SMALL_STATE(1301)] = 16292,
  [SMALL_STATE(1302)] = 16296,
  [SMALL_STATE(1303)] = 16300,
  [SMALL_STATE(1304)] = 16304,
  [SMALL_STATE(1305)] = 16308,
  [SMALL_STATE(1306)] = 16312,
  [SMALL_STATE(1307)] = 16316,
  [SMALL_STATE(1308)] = 16320,
  [SMALL_STATE(1309)] = 16324,
  [SMALL_STATE(1310)] = 16328,
  [SMALL_STATE(1311)] = 16332,
  [SMALL_STATE(1312)] = 16336,
  [SMALL_STATE(1313)] = 16340,
  [SMALL_STATE(1314)] = 16344,
  [SMALL_STATE(1315)] = 16348,
  [SMALL_STATE(1316)] = 16352,
  [SMALL_STATE(1317)] = 16356,
  [SMALL_STATE(1318)] = 16360,
  [SMALL_STATE(1319)] = 16364,
  [SMALL_STATE(1320)] = 16368,
  [SMALL_STATE(1321)] = 16372,
  [SMALL_STATE(1322)] = 16376,
  [SMALL_STATE(1323)] = 16380,
  [SMALL_STATE(1324)] = 16384,
  [SMALL_STATE(1325)] = 16388,
  [SMALL_STATE(1326)] = 16392,
  [SMALL_STATE(1327)] = 16396,
  [SMALL_STATE(1328)] = 16400,
  [SMALL_STATE(1329)] = 16404,
  [SMALL_STATE(1330)] = 16408,
  [SMALL_STATE(1331)] = 16412,
  [SMALL_STATE(1332)] = 16416,
  [SMALL_STATE(1333)] = 16420,
  [SMALL_STATE(1334)] = 16424,
  [SMALL_STATE(1335)] = 16428,
  [SMALL_STATE(1336)] = 16432,
  [SMALL_STATE(1337)] = 16436,
  [SMALL_STATE(1338)] = 16440,
  [SMALL_STATE(1339)] = 16444,
  [SMALL_STATE(1340)] = 16448,
  [SMALL_STATE(1341)] = 16452,
  [SMALL_STATE(1342)] = 16456,
  [SMALL_STATE(1343)] = 16460,
  [SMALL_STATE(1344)] = 16464,
  [SMALL_STATE(1345)] = 16468,
  [SMALL_STATE(1346)] = 16472,
  [SMALL_STATE(1347)] = 16476,
  [SMALL_STATE(1348)] = 16480,
  [SMALL_STATE(1349)] = 16484,
  [SMALL_STATE(1350)] = 16488,
  [SMALL_STATE(1351)] = 16492,
  [SMALL_STATE(1352)] = 16496,
  [SMALL_STATE(1353)] = 16500,
  [SMALL_STATE(1354)] = 16504,
  [SMALL_STATE(1355)] = 16508,
  [SMALL_STATE(1356)] = 16512,
  [SMALL_STATE(1357)] = 16516,
  [SMALL_STATE(1358)] = 16520,
  [SMALL_STATE(1359)] = 16524,
  [SMALL_STATE(1360)] = 16528,
  [SMALL_STATE(1361)] = 16532,
  [SMALL_STATE(1362)] = 16536,
  [SMALL_STATE(1363)] = 16540,
  [SMALL_STATE(1364)] = 16544,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1364),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1362),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1361),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1360),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(457),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(469),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(639),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1364),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(721),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(422),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(433),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1362),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1361),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(432),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(431),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(466),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(425),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1360),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 19),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 19),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(825),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 20),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(464),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1023),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1070),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1319),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(1108),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1363),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1357),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 36),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1355),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2, .production_id = 43),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 8),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 27),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 37),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 5),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_options_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_options_repeat1, 2), SHIFT_REPEAT(559),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 53),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 15),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 20),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1142),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3, .production_id = 43),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1093),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 15),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 116),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 22),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2, .production_id = 21),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2, .production_id = 21),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8, .production_id = 22),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3, .production_id = 7),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15, .production_id = 84),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(827),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 4),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1, .production_id = 21),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3, .production_id = 7),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 57),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4, .production_id = 16),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4, .production_id = 43),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3, .production_id = 21),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 111),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 15),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 112),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2), SHIFT_REPEAT(1093),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 96),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 15),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 97),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 22),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6, .production_id = 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 101),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(491),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 11, .production_id = 68),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 22),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 4),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 107),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(708),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6, .production_id = 40),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3, .production_id = 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2, .production_id = 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1246),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 49),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 50),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1105),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_name, 1, .production_id = 17),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 55),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 9),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 41),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1141),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3, .production_id = 14),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 34),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1343),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 63),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5, .production_id = 33),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1347),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3, .production_id = 13),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 42),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 24),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1325),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 25),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 3, .production_id = 43),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3, .production_id = 12),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 28),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1238),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 31),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1354),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3, .production_id = 4),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 10),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4, .production_id = 16),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3, .production_id = 7),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 12, .production_id = 68),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 40),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 6),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 23, .production_id = 116),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 65),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 64),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 9),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9, .production_id = 61),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 21, .production_id = 115),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 92),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6, .production_id = 35),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 16),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 91),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 22),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 21, .production_id = 114),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 112),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4, .production_id = 4),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6, .production_id = 22),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4, .production_id = 7),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10, .production_id = 57),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4, .production_id = 7),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 40),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 40),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4, .production_id = 14),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 67),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 61),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 15),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 18),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 13, .production_id = 74),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 42),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 111),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 4),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4, .production_id = 15),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 90),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 89),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 6),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 20, .production_id = 113),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 16, .production_id = 84),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 5),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 107),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8, .production_id = 42),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 110),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 109),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 11, .production_id = 67),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 108),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 4),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 4),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 11, .production_id = 70),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 15),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 11),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5, .production_id = 22),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 101),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 22),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 106),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 105),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18, .production_id = 104),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 103),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7, .production_id = 4),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 8, .production_id = 56),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 54),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 102),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7, .production_id = 40),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8, .production_id = 44),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 97),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 73),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 96),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 43),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 100),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 93),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7, .production_id = 44),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 7, .production_id = 45),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 12, .production_id = 74),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 7, .production_id = 46),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 22),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 7, .production_id = 47),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 7, .production_id = 48),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 99),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 75),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 22),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 77),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 26),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5, .production_id = 27),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 94),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 29),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5, .production_id = 30),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 32),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 87),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3, .production_id = 11),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 88),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 75),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 14),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 35),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 78),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 79),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 86),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 98),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 51),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 85),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 80),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 81),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 82),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 83),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 2),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 7, .production_id = 52),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(834),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1212),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1333),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1324),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1135),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1082),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1309),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1222),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1225),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1136),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1247),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(870),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(855),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1034),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(854),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1313),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1292),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1287),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1285),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1283),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(845),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1089] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(439),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1265),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1264),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1139),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1233),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(753),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1139),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(887),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1272),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 21),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 21),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1286),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 3),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 21),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 2),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1279),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1276),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1291),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1293),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1063),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1211),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1210),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1173),
  [1290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(727),
  [1292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(57),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1161),
  [1305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1130),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1181),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1148),
  [1321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(1130),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1104),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2), SHIFT_REPEAT(1181),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(847),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(762),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(426),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(835),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(711),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(747),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 1),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1344),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(785),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(440),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1, .production_id = 69),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(759),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1079),
  [1476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(213),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1216),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2), SHIFT_REPEAT(735),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(616),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2, .production_id = 71),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1, .production_id = 72),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1128),
  [1527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2, .production_id = 76),
  [1529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(424),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(903),
  [1556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1335),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1342),
  [1572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1351),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1350),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1289),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 8),
  [1596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(946),
  [1598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(776),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1352),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1212),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 21),
  [1648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 95),
  [1650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1250),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1210),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 39),
  [1664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 66),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1215),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1106),
  [1682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1113),
  [1686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1126),
  [1694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1031),
  [1698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [1700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1032),
  [1702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [1716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1134),
  [1718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1111),
  [1722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1184),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1182),
  [1728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 3, .production_id = 62),
  [1730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1144),
  [1732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [1740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1154),
  [1742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [1744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1168),
  [1746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [1752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1189),
  [1754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1193),
  [1762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1203),
  [1768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [1770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1244),
  [1772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 60),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 58),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [1806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1090),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1280),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1322),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [1942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1301),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1306),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1314),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1316),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1056),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [2082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [2096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1067),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [2108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 23),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1071),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1076),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1320),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1086),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1353),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1336),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1097),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1098),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1349),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1331),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [2192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 69),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1116),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1120),
  [2216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 38),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1122),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1125),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1127),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1341),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1340),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1334),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1146),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1149),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1152),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1155),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [2290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 59),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1159),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1162),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1164),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1166),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1167),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1170),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1171),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1179),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1180),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1254),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [2350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 5),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1290),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1190),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1191),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1196),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1199),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [2386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1201),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1204),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1205),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1207),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1209),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [2420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [2422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1219),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [2432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1227),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1228),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1230),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1231),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1232),
  [2458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [2460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1234),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1235),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1237),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1239),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1240),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1241),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1243),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1245),
  [2490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [2492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, .production_id = 6),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [2496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [2498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [2500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [2504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1258),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1259),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1261),
  [2514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1256),
  [2518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [2520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1266),
  [2522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1255),
  [2524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1269),
  [2528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1270),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1271),
  [2532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [2534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1273),
  [2536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1274),
  [2538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [2540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [2542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [2544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1277),
  [2546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1278),
  [2548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [2550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [2552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1281),
  [2554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1282),
  [2556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [2560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [2562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1284),
  [2564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [2566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 21),
  [2568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [2570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [2572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
  [2574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [2576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [2580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [2582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [2584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [2586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [2588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1295),
  [2590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1296),
  [2592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [2594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [2596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [2598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [2600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [2602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1303),
  [2604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1304),
  [2606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [2608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [2610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1307),
  [2612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1308),
  [2614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [2616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [2618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1310),
  [2620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [2622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [2624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1312),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [2628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [2630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [2632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [2634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1315),
  [2636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [2638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [2640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [2644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [2646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [2648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [2650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [2652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1249),
  [2654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [2656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1248),
  [2658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1317),
  [2660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [2662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [2664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [2666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [2670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [2672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [2674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [2676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1326),
  [2678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1327),
  [2680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1328),
  [2682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1213),
  [2684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [2686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1330),
  [2688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [2690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1332),
  [2694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [2696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [2698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [2700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [2702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1197),
  [2704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1337),
  [2706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [2708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [2710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [2714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [2716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [2718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [2720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [2722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1345),
  [2724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1346),
  [2726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [2728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [2730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [2732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1348),
  [2734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [2736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [2738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [2740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1174),
  [2742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [2744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [2746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [2748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [2750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [2752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [2754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [2756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [2758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [2760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1356),
  [2762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [2764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [2766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [2768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [2770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1138),
  [2772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1175),
  [2774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1176),
  [2776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [2780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [2782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [2784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [2786] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [2790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [2792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [2794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [2796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
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
