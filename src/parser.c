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
#define SYMBOL_COUNT 309
#define ALIAS_COUNT 25
#define TOKEN_COUNT 145
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 24
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
  sym_keyspace_name = 260,
  sym_replication_list = 261,
  sym_alter_role = 262,
  sym_alter_table = 263,
  sym_alter_table_operation = 264,
  sym_alter_table_add = 265,
  sym_alter_table_column_definition = 266,
  sym_alter_table_drop_columns = 267,
  sym_alter_table_drop_column_list = 268,
  sym_alter_table_drop_compact_storage = 269,
  sym_alter_table_rename = 270,
  sym_alter_table_with = 271,
  sym_alter_type = 272,
  sym_alter_type_operation = 273,
  sym_alter_type_alter_type = 274,
  sym_alter_type_add = 275,
  sym_alter_type_rename = 276,
  sym_alter_type_rename_list = 277,
  sym_alter_type_rename_item = 278,
  sym_alter_user = 279,
  sym_user_password = 280,
  sym_user_super_user = 281,
  sym_apply_batch = 282,
  aux_sym_source_file_repeat1 = 283,
  aux_sym_select_elements_repeat1 = 284,
  aux_sym_function_args_repeat1 = 285,
  aux_sym_relation_elements_repeat1 = 286,
  aux_sym_relation_element_repeat1 = 287,
  aux_sym_relation_element_repeat2 = 288,
  aux_sym_assignment_tuple_repeat1 = 289,
  aux_sym_delete_column_list_repeat1 = 290,
  aux_sym_if_condition_list_repeat1 = 291,
  aux_sym_column_list_repeat1 = 292,
  aux_sym_expression_list_repeat1 = 293,
  aux_sym_assignment_map_repeat1 = 294,
  aux_sym_update_repeat1 = 295,
  aux_sym_init_cond_list_nested_repeat1 = 296,
  aux_sym_init_cond_hash_repeat1 = 297,
  aux_sym_column_not_null_list_repeat1 = 298,
  aux_sym_create_function_repeat1 = 299,
  aux_sym_data_type_definition_repeat1 = 300,
  aux_sym_role_with_repeat1 = 301,
  aux_sym_option_hash_repeat1 = 302,
  aux_sym_column_definition_list_repeat1 = 303,
  aux_sym_table_options_repeat1 = 304,
  aux_sym_create_type_repeat1 = 305,
  aux_sym_replication_list_repeat1 = 306,
  aux_sym_alter_table_column_definition_repeat1 = 307,
  aux_sym_alter_type_rename_list_repeat1 = 308,
  anon_alias_sym_aggregate = 309,
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
  anon_alias_sym_materialized_view = 323,
  anon_alias_sym_option = 324,
  anon_alias_sym_param_name = 325,
  anon_alias_sym_partition_key = 326,
  anon_alias_sym_primary_key = 327,
  anon_alias_sym_role = 328,
  anon_alias_sym_sfunc = 329,
  anon_alias_sym_table = 330,
  anon_alias_sym_trigger = 331,
  anon_alias_sym_type = 332,
  anon_alias_sym_user = 333,
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
  },
  [99] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
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
  },
  [114] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_keyspace,
    [13] = anon_alias_sym_table,
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
  [137] = 120,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 121,
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
  [68] = {.lex_state = 550},
  [69] = {.lex_state = 0},
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
  [80] = {.lex_state = 550},
  [81] = {.lex_state = 552},
  [82] = {.lex_state = 550},
  [83] = {.lex_state = 550},
  [84] = {.lex_state = 550},
  [85] = {.lex_state = 550},
  [86] = {.lex_state = 550},
  [87] = {.lex_state = 550},
  [88] = {.lex_state = 550},
  [89] = {.lex_state = 550},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 551},
  [94] = {.lex_state = 550},
  [95] = {.lex_state = 550},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 550},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 550},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 550},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 550},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 550},
  [110] = {.lex_state = 550},
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
  [123] = {.lex_state = 550},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 550},
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
  [162] = {.lex_state = 550},
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
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 550},
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
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 550},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 550},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 550},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 550},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 550},
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
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 1},
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
  [440] = {.lex_state = 550},
  [441] = {.lex_state = 41},
  [442] = {.lex_state = 42},
  [443] = {.lex_state = 1},
  [444] = {.lex_state = 1},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 550},
  [447] = {.lex_state = 41},
  [448] = {.lex_state = 41},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 41},
  [451] = {.lex_state = 550},
  [452] = {.lex_state = 550},
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
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 18},
  [469] = {.lex_state = 18},
  [470] = {.lex_state = 18},
  [471] = {.lex_state = 15},
  [472] = {.lex_state = 15},
  [473] = {.lex_state = 10},
  [474] = {.lex_state = 15},
  [475] = {.lex_state = 15},
  [476] = {.lex_state = 15},
  [477] = {.lex_state = 15},
  [478] = {.lex_state = 11},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 550},
  [481] = {.lex_state = 14},
  [482] = {.lex_state = 15},
  [483] = {.lex_state = 15},
  [484] = {.lex_state = 14},
  [485] = {.lex_state = 14},
  [486] = {.lex_state = 550},
  [487] = {.lex_state = 12},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 13},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 41},
  [493] = {.lex_state = 10},
  [494] = {.lex_state = 10},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 24},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 10},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 19},
  [511] = {.lex_state = 550},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 10},
  [516] = {.lex_state = 10},
  [517] = {.lex_state = 19},
  [518] = {.lex_state = 17},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 10},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 17},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 17},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 17},
  [529] = {.lex_state = 17},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 26},
  [534] = {.lex_state = 17},
  [535] = {.lex_state = 17},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 17},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 10},
  [542] = {.lex_state = 17},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 17},
  [546] = {.lex_state = 17},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 17},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 17},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 551},
  [557] = {.lex_state = 10},
  [558] = {.lex_state = 17},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 21},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 21},
  [566] = {.lex_state = 17},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 17},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 10},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 10},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 10},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 551},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 10},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 10},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 16},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 10},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 10},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
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
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 20},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 10},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 10},
  [627] = {.lex_state = 10},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
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
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 10},
  [676] = {.lex_state = 10},
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
  [688] = {.lex_state = 20},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 20},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 10},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 25},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 10},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 20},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 20},
  [723] = {.lex_state = 10},
  [724] = {.lex_state = 20},
  [725] = {.lex_state = 10},
  [726] = {.lex_state = 20},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 20},
  [729] = {.lex_state = 10},
  [730] = {.lex_state = 10},
  [731] = {.lex_state = 10},
  [732] = {.lex_state = 20},
  [733] = {.lex_state = 20},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 10},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 20},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 10},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 10},
  [743] = {.lex_state = 10},
  [744] = {.lex_state = 10},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 10},
  [747] = {.lex_state = 10},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 10},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 10},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 10},
  [756] = {.lex_state = 20},
  [757] = {.lex_state = 10},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 20},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 20},
  [765] = {.lex_state = 20},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 10},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 10},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 10},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 10},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 10},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 10},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 20},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 10},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 10},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 10},
  [795] = {.lex_state = 551},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 10},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 27},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 10},
  [810] = {.lex_state = 10},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 10},
  [816] = {.lex_state = 10},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 551},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 10},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 20},
  [826] = {.lex_state = 20},
  [827] = {.lex_state = 10},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 27},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 10},
  [836] = {.lex_state = 27},
  [837] = {.lex_state = 10},
  [838] = {.lex_state = 10},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 10},
  [843] = {.lex_state = 10},
  [844] = {.lex_state = 10},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 20},
  [849] = {.lex_state = 10},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 10},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 10},
  [857] = {.lex_state = 10},
  [858] = {.lex_state = 22},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 20},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 10},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 10},
  [870] = {.lex_state = 10},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 550},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 10},
  [876] = {.lex_state = 10},
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
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 551},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 10},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 10},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 10},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 10},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 10},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 10},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 10},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 551},
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
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 550},
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
  [943] = {.lex_state = 10},
  [944] = {.lex_state = 10},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 10},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 10},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 10},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 10},
  [954] = {.lex_state = 10},
  [955] = {.lex_state = 10},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 10},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 10},
  [964] = {.lex_state = 0},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 10},
  [967] = {.lex_state = 0},
  [968] = {.lex_state = 0},
  [969] = {.lex_state = 10},
  [970] = {.lex_state = 10},
  [971] = {.lex_state = 0},
  [972] = {.lex_state = 0},
  [973] = {.lex_state = 0},
  [974] = {.lex_state = 10},
  [975] = {.lex_state = 0},
  [976] = {.lex_state = 10},
  [977] = {.lex_state = 0},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 0},
  [980] = {.lex_state = 10},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 10},
  [983] = {.lex_state = 0},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 550},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 10},
  [988] = {.lex_state = 0},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 10},
  [993] = {.lex_state = 10},
  [994] = {.lex_state = 550},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 0},
  [997] = {.lex_state = 10},
  [998] = {.lex_state = 0},
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
  [1014] = {.lex_state = 10},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 10},
  [1017] = {.lex_state = 0},
  [1018] = {.lex_state = 10},
  [1019] = {.lex_state = 41},
  [1020] = {.lex_state = 10},
  [1021] = {.lex_state = 0},
  [1022] = {.lex_state = 0},
  [1023] = {.lex_state = 10},
  [1024] = {.lex_state = 10},
  [1025] = {.lex_state = 10},
  [1026] = {.lex_state = 10},
  [1027] = {.lex_state = 0},
  [1028] = {.lex_state = 10},
  [1029] = {.lex_state = 10},
  [1030] = {.lex_state = 10},
  [1031] = {.lex_state = 10},
  [1032] = {.lex_state = 10},
  [1033] = {.lex_state = 0},
  [1034] = {.lex_state = 0},
  [1035] = {.lex_state = 0},
  [1036] = {.lex_state = 10},
  [1037] = {.lex_state = 0},
  [1038] = {.lex_state = 0},
  [1039] = {.lex_state = 0},
  [1040] = {.lex_state = 0},
  [1041] = {.lex_state = 0},
  [1042] = {.lex_state = 10},
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
  [1054] = {.lex_state = 10},
  [1055] = {.lex_state = 10},
  [1056] = {.lex_state = 0},
  [1057] = {.lex_state = 10},
  [1058] = {.lex_state = 0},
  [1059] = {.lex_state = 0},
  [1060] = {.lex_state = 0},
  [1061] = {.lex_state = 0},
  [1062] = {.lex_state = 0},
  [1063] = {.lex_state = 550},
  [1064] = {.lex_state = 0},
  [1065] = {.lex_state = 0},
  [1066] = {.lex_state = 0},
  [1067] = {.lex_state = 0},
  [1068] = {.lex_state = 0},
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
  [1083] = {.lex_state = 10},
  [1084] = {.lex_state = 0},
  [1085] = {.lex_state = 10},
  [1086] = {.lex_state = 0},
  [1087] = {.lex_state = 10},
  [1088] = {.lex_state = 10},
  [1089] = {.lex_state = 0},
  [1090] = {.lex_state = 0},
  [1091] = {.lex_state = 10},
  [1092] = {.lex_state = 0},
  [1093] = {.lex_state = 0},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 0},
  [1096] = {.lex_state = 0},
  [1097] = {.lex_state = 0},
  [1098] = {.lex_state = 0},
  [1099] = {.lex_state = 0},
  [1100] = {.lex_state = 10},
  [1101] = {.lex_state = 0},
  [1102] = {.lex_state = 0},
  [1103] = {.lex_state = 0},
  [1104] = {.lex_state = 10},
  [1105] = {.lex_state = 0},
  [1106] = {.lex_state = 10},
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
  [1119] = {.lex_state = 13},
  [1120] = {.lex_state = 0},
  [1121] = {.lex_state = 0},
  [1122] = {.lex_state = 0},
  [1123] = {.lex_state = 10},
  [1124] = {.lex_state = 10},
  [1125] = {.lex_state = 0},
  [1126] = {.lex_state = 0},
  [1127] = {.lex_state = 0},
  [1128] = {.lex_state = 0},
  [1129] = {.lex_state = 0},
  [1130] = {.lex_state = 0},
  [1131] = {.lex_state = 10},
  [1132] = {.lex_state = 0},
  [1133] = {.lex_state = 0},
  [1134] = {.lex_state = 10},
  [1135] = {.lex_state = 0},
  [1136] = {.lex_state = 0},
  [1137] = {.lex_state = 10},
  [1138] = {.lex_state = 0},
  [1139] = {.lex_state = 0},
  [1140] = {.lex_state = 0},
  [1141] = {.lex_state = 0},
  [1142] = {.lex_state = 10},
  [1143] = {.lex_state = 0},
  [1144] = {.lex_state = 0},
  [1145] = {.lex_state = 0},
  [1146] = {.lex_state = 10},
  [1147] = {.lex_state = 0},
  [1148] = {.lex_state = 0},
  [1149] = {.lex_state = 0},
  [1150] = {.lex_state = 10},
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
  [1167] = {.lex_state = 10},
  [1168] = {.lex_state = 550},
  [1169] = {.lex_state = 550},
  [1170] = {.lex_state = 0},
  [1171] = {.lex_state = 0},
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
  [1184] = {.lex_state = 0},
  [1185] = {.lex_state = 0},
  [1186] = {.lex_state = 0},
  [1187] = {.lex_state = 10},
  [1188] = {.lex_state = 0},
  [1189] = {.lex_state = 0},
  [1190] = {.lex_state = 0},
  [1191] = {.lex_state = 10},
  [1192] = {.lex_state = 10},
  [1193] = {.lex_state = 0},
  [1194] = {.lex_state = 0},
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
  [1205] = {.lex_state = 10},
  [1206] = {.lex_state = 10},
  [1207] = {.lex_state = 551},
  [1208] = {.lex_state = 10},
  [1209] = {.lex_state = 0},
  [1210] = {.lex_state = 10},
  [1211] = {.lex_state = 10},
  [1212] = {.lex_state = 0},
  [1213] = {.lex_state = 550},
  [1214] = {.lex_state = 0},
  [1215] = {.lex_state = 0},
  [1216] = {.lex_state = 0},
  [1217] = {.lex_state = 0},
  [1218] = {.lex_state = 0},
  [1219] = {.lex_state = 10},
  [1220] = {.lex_state = 0},
  [1221] = {.lex_state = 10},
  [1222] = {.lex_state = 10},
  [1223] = {.lex_state = 0},
  [1224] = {.lex_state = 0},
  [1225] = {.lex_state = 0},
  [1226] = {.lex_state = 10},
  [1227] = {.lex_state = 0},
  [1228] = {.lex_state = 10},
  [1229] = {.lex_state = 0},
  [1230] = {.lex_state = 0},
  [1231] = {.lex_state = 10},
  [1232] = {.lex_state = 13},
  [1233] = {.lex_state = 0},
  [1234] = {.lex_state = 551},
  [1235] = {.lex_state = 0},
  [1236] = {.lex_state = 10},
  [1237] = {.lex_state = 0},
  [1238] = {.lex_state = 10},
  [1239] = {.lex_state = 0},
  [1240] = {.lex_state = 0},
  [1241] = {.lex_state = 10},
  [1242] = {.lex_state = 0},
  [1243] = {.lex_state = 0},
  [1244] = {.lex_state = 551},
  [1245] = {.lex_state = 10},
  [1246] = {.lex_state = 10},
  [1247] = {.lex_state = 0},
  [1248] = {.lex_state = 10},
  [1249] = {.lex_state = 0},
  [1250] = {.lex_state = 10},
  [1251] = {.lex_state = 10},
  [1252] = {.lex_state = 0},
  [1253] = {.lex_state = 0},
  [1254] = {.lex_state = 0},
  [1255] = {.lex_state = 550},
  [1256] = {.lex_state = 10},
  [1257] = {.lex_state = 10},
  [1258] = {.lex_state = 10},
  [1259] = {.lex_state = 0},
  [1260] = {.lex_state = 10},
  [1261] = {.lex_state = 0},
  [1262] = {.lex_state = 0},
  [1263] = {.lex_state = 10},
  [1264] = {.lex_state = 0},
  [1265] = {.lex_state = 0},
  [1266] = {.lex_state = 0},
  [1267] = {.lex_state = 10},
  [1268] = {.lex_state = 10},
  [1269] = {.lex_state = 0},
  [1270] = {.lex_state = 0},
  [1271] = {.lex_state = 0},
  [1272] = {.lex_state = 10},
  [1273] = {.lex_state = 10},
  [1274] = {.lex_state = 0},
  [1275] = {.lex_state = 0},
  [1276] = {.lex_state = 10},
  [1277] = {.lex_state = 10},
  [1278] = {.lex_state = 0},
  [1279] = {.lex_state = 0},
  [1280] = {.lex_state = 10},
  [1281] = {.lex_state = 10},
  [1282] = {.lex_state = 10},
  [1283] = {.lex_state = 0},
  [1284] = {.lex_state = 10},
  [1285] = {.lex_state = 0},
  [1286] = {.lex_state = 0},
  [1287] = {.lex_state = 10},
  [1288] = {.lex_state = 0},
  [1289] = {.lex_state = 0},
  [1290] = {.lex_state = 10},
  [1291] = {.lex_state = 0},
  [1292] = {.lex_state = 0},
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
  [1306] = {.lex_state = 10},
  [1307] = {.lex_state = 0},
  [1308] = {.lex_state = 0},
  [1309] = {.lex_state = 0},
  [1310] = {.lex_state = 10},
  [1311] = {.lex_state = 10},
  [1312] = {.lex_state = 551},
  [1313] = {.lex_state = 0},
  [1314] = {.lex_state = 10},
  [1315] = {.lex_state = 0},
  [1316] = {.lex_state = 0},
  [1317] = {.lex_state = 13},
  [1318] = {.lex_state = 551},
  [1319] = {.lex_state = 10},
  [1320] = {.lex_state = 0},
  [1321] = {.lex_state = 10},
  [1322] = {.lex_state = 0},
  [1323] = {.lex_state = 13},
  [1324] = {.lex_state = 0},
  [1325] = {.lex_state = 0},
  [1326] = {.lex_state = 10},
  [1327] = {.lex_state = 10},
  [1328] = {.lex_state = 0},
  [1329] = {.lex_state = 0},
  [1330] = {.lex_state = 0},
  [1331] = {.lex_state = 0},
  [1332] = {.lex_state = 0},
  [1333] = {.lex_state = 10},
  [1334] = {.lex_state = 0},
  [1335] = {.lex_state = 0},
  [1336] = {.lex_state = 10},
  [1337] = {.lex_state = 0},
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
  [1348] = {.lex_state = 0},
  [1349] = {.lex_state = 551},
  [1350] = {.lex_state = 0},
  [1351] = {.lex_state = 0},
  [1352] = {.lex_state = 550},
  [1353] = {.lex_state = 0},
  [1354] = {.lex_state = 0},
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
  [1374] = {.lex_state = 0},
  [1375] = {.lex_state = 0},
  [1376] = {.lex_state = 0},
  [1377] = {.lex_state = 0},
  [1378] = {.lex_state = 0},
  [1379] = {.lex_state = 0},
  [1380] = {.lex_state = 0},
  [1381] = {.lex_state = 0},
  [1382] = {.lex_state = 10},
  [1383] = {.lex_state = 551},
  [1384] = {.lex_state = 10},
  [1385] = {.lex_state = 0},
  [1386] = {.lex_state = 10},
  [1387] = {.lex_state = 551},
  [1388] = {.lex_state = 10},
  [1389] = {.lex_state = 0},
  [1390] = {.lex_state = 10},
  [1391] = {.lex_state = 0},
  [1392] = {.lex_state = 10},
  [1393] = {.lex_state = 0},
  [1394] = {.lex_state = 0},
  [1395] = {.lex_state = 0},
  [1396] = {.lex_state = 0},
  [1397] = {.lex_state = 0},
  [1398] = {.lex_state = 0},
  [1399] = {.lex_state = 10},
  [1400] = {.lex_state = 10},
  [1401] = {.lex_state = 0},
  [1402] = {.lex_state = 0},
  [1403] = {.lex_state = 0},
  [1404] = {.lex_state = 10},
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
    [sym_source_file] = STATE(1402),
    [sym__statement] = STATE(2),
    [sym_select_statement] = STATE(296),
    [sym_delete_statement] = STATE(296),
    [sym_begin_batch] = STATE(610),
    [sym_insert_statement] = STATE(296),
    [sym_truncate] = STATE(296),
    [sym_create_index] = STATE(296),
    [sym_drop_index] = STATE(296),
    [sym_update] = STATE(296),
    [sym_use] = STATE(296),
    [sym_grant] = STATE(296),
    [sym_revoke] = STATE(296),
    [sym_list_roles] = STATE(296),
    [sym_list_permissions] = STATE(296),
    [sym_drop_aggregate] = STATE(296),
    [sym_drop_materialized_view] = STATE(296),
    [sym_drop_function] = STATE(296),
    [sym_drop_keyspace] = STATE(296),
    [sym_drop_role] = STATE(296),
    [sym_drop_table] = STATE(296),
    [sym_drop_trigger] = STATE(296),
    [sym_drop_type] = STATE(296),
    [sym_drop_user] = STATE(296),
    [sym_create_aggregate] = STATE(296),
    [sym_create_materialized_view] = STATE(296),
    [sym_create_function] = STATE(296),
    [sym_create_keyspace] = STATE(296),
    [sym_create_role] = STATE(296),
    [sym_create_table] = STATE(296),
    [sym_create_trigger] = STATE(296),
    [sym_create_type] = STATE(296),
    [sym_create_user] = STATE(296),
    [sym_alter_materialized_view] = STATE(296),
    [sym_alter_keyspace] = STATE(296),
    [sym_alter_role] = STATE(296),
    [sym_alter_table] = STATE(296),
    [sym_alter_type] = STATE(296),
    [sym_alter_user] = STATE(296),
    [sym_apply_batch] = STATE(296),
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
    STATE(610), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(296), 37,
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
    STATE(610), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(296), 37,
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
  [289] = 3,
    STATE(69), 1,
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
  [324] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(965), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [394] = 3,
    STATE(69), 1,
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
  [429] = 3,
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
  [464] = 3,
    STATE(69), 1,
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
  [499] = 3,
    STATE(69), 1,
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
  [534] = 3,
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
  [569] = 3,
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
  [604] = 3,
    STATE(69), 1,
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
  [639] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(371), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [709] = 3,
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
  [744] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(215), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(949), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [849] = 3,
    STATE(69), 1,
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
  [884] = 3,
    STATE(69), 1,
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
  [919] = 3,
    STATE(69), 1,
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
  [954] = 3,
    STATE(69), 1,
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
  [989] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(786), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [1059] = 3,
    STATE(69), 1,
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
  [1094] = 3,
    STATE(69), 1,
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
  [1129] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(573), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [1199] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(564), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [1269] = 3,
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
  [1304] = 3,
    STATE(69), 1,
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
  [1339] = 3,
    STATE(69), 1,
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
  [1374] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(799), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [1444] = 3,
    STATE(69), 1,
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
  [1479] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1139), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(197), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [1584] = 3,
    STATE(69), 1,
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
  [1619] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(194), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(594), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [1724] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(914), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
  [1794] = 3,
    STATE(69), 1,
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
  [1829] = 3,
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
  [1864] = 3,
    STATE(69), 1,
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
  [1899] = 3,
    STATE(69), 1,
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
  [1934] = 3,
    STATE(69), 1,
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
  [1969] = 3,
    STATE(69), 1,
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
  [2004] = 3,
    STATE(69), 1,
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
    STATE(739), 1,
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
    STATE(64), 1,
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
  [2166] = 1,
    ACTIONS(96), 24,
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
  [2193] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(59), 1,
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
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(59), 1,
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
  [2282] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(62), 1,
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
  [2313] = 1,
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
  [2367] = 2,
    ACTIONS(108), 1,
      anon_sym_DOT,
    ACTIONS(106), 22,
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
  [2395] = 3,
    ACTIONS(112), 1,
      anon_sym_LT,
    STATE(90), 1,
      sym_data_type_definition,
    ACTIONS(110), 21,
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
  [2425] = 8,
    ACTIONS(116), 1,
      aux_sym_select_statement_token4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    STATE(88), 1,
      sym_where_spec,
    STATE(105), 1,
      sym_order_spec,
    STATE(241), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2465] = 1,
    ACTIONS(124), 23,
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
  [2491] = 8,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(128), 1,
      aux_sym_select_statement_token4,
    STATE(94), 1,
      sym_where_spec,
    STATE(123), 1,
      sym_order_spec,
    STATE(224), 1,
      sym_limit_spec,
    ACTIONS(126), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(132), 1,
      aux_sym_select_statement_token4,
    STATE(95), 1,
      sym_where_spec,
    STATE(103), 1,
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
    STATE(82), 1,
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
  [2625] = 1,
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
  [2650] = 1,
    ACTIONS(140), 22,
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
  [2675] = 1,
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
  [2700] = 1,
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
  [2750] = 8,
    ACTIONS(152), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(154), 1,
      sym_object_name,
    STATE(121), 1,
      sym_table_option_item,
    STATE(183), 1,
      sym_table_options,
    STATE(342), 1,
      sym_clustering_order,
    STATE(1097), 1,
      sym_table_option_name,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(150), 14,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2789] = 3,
    ACTIONS(158), 1,
      aux_sym_relation_elements_token1,
    STATE(82), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(156), 20,
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
  [2818] = 1,
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
  [2843] = 1,
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
  [2868] = 1,
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
  [2893] = 3,
    ACTIONS(136), 1,
      aux_sym_relation_elements_token1,
    STATE(74), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(165), 20,
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
  [2922] = 1,
    ACTIONS(167), 21,
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
  [2946] = 6,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(132), 1,
      aux_sym_select_statement_token4,
    STATE(103), 1,
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
  [2980] = 1,
    ACTIONS(156), 21,
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
  [3004] = 1,
    ACTIONS(169), 21,
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
  [3052] = 1,
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
  [3076] = 3,
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
  [3104] = 6,
    ACTIONS(116), 1,
      aux_sym_select_statement_token4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    STATE(105), 1,
      sym_order_spec,
    STATE(241), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3138] = 6,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_order_spec_token1,
    ACTIONS(181), 1,
      aux_sym_select_statement_token4,
    STATE(110), 1,
      sym_order_spec,
    STATE(206), 1,
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
  [3172] = 2,
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
  [3197] = 2,
    ACTIONS(189), 1,
      anon_sym_DOT,
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
  [3222] = 2,
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
  [3247] = 1,
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
  [3270] = 3,
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
  [3297] = 2,
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
  [3322] = 1,
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
  [3344] = 4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(181), 1,
      aux_sym_select_statement_token4,
    STATE(206), 1,
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
  [3372] = 4,
    ACTIONS(210), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(212), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(363), 1,
      sym_using_ttl_timestamp,
    ACTIONS(208), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3400] = 4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(132), 1,
      aux_sym_select_statement_token4,
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
  [3428] = 1,
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
  [3450] = 3,
    STATE(332), 1,
      sym_user_super_user,
    ACTIONS(218), 2,
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
  [3476] = 1,
    ACTIONS(220), 19,
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
    ACTIONS(222), 19,
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
  [3520] = 4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(226), 1,
      aux_sym_select_statement_token4,
    STATE(230), 1,
      sym_limit_spec,
    ACTIONS(224), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3548] = 4,
    ACTIONS(212), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(230), 1,
      aux_sym_delete_statement_token2,
    STATE(325), 1,
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
  [3576] = 4,
    ACTIONS(212), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(234), 1,
      aux_sym_delete_statement_token2,
    STATE(364), 1,
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
  [3604] = 4,
    ACTIONS(212), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(238), 1,
      aux_sym_delete_statement_token2,
    STATE(369), 1,
      sym_using_ttl_timestamp,
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
  [3632] = 3,
    STATE(387), 1,
      sym_user_super_user,
    ACTIONS(218), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
  [3658] = 4,
    ACTIONS(212), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(244), 1,
      aux_sym_delete_statement_token2,
    STATE(327), 1,
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
  [3686] = 4,
    ACTIONS(212), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(248), 1,
      aux_sym_delete_statement_token2,
    STATE(297), 1,
      sym_using_ttl_timestamp,
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
  [3714] = 1,
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
  [3736] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3758] = 2,
    ACTIONS(254), 1,
      aux_sym_priviledge_token2,
    ACTIONS(252), 18,
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
  [3782] = 3,
    ACTIONS(258), 1,
      aux_sym_relation_elements_token1,
    STATE(122), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(256), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3808] = 3,
    ACTIONS(258), 1,
      aux_sym_relation_elements_token1,
    STATE(120), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(260), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3834] = 3,
    ACTIONS(264), 1,
      aux_sym_relation_elements_token1,
    STATE(122), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(262), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3860] = 4,
    ACTIONS(116), 1,
      aux_sym_select_statement_token4,
    ACTIONS(118), 1,
      aux_sym_limit_spec_token1,
    STATE(241), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3888] = 1,
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
  [3910] = 1,
    ACTIONS(269), 19,
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
  [3932] = 3,
    STATE(319), 1,
      sym_user_super_user,
    ACTIONS(218), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
  [3958] = 1,
    ACTIONS(273), 19,
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
  [3980] = 4,
    ACTIONS(212), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(277), 1,
      aux_sym_delete_statement_token2,
    STATE(384), 1,
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
  [4008] = 4,
    ACTIONS(212), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(281), 1,
      aux_sym_delete_statement_token2,
    STATE(339), 1,
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
  [4036] = 1,
    ACTIONS(283), 19,
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
  [4058] = 3,
    ACTIONS(287), 1,
      aux_sym_relation_elements_token1,
    STATE(149), 1,
      aux_sym_role_with_repeat1,
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
  [4083] = 8,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      sym__decimal_literal,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    STATE(592), 1,
      sym_expression,
    STATE(1082), 1,
      sym_expression_list,
    STATE(859), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [4118] = 2,
    ACTIONS(301), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(299), 17,
      ts_builtin_sym_end,
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
  [4141] = 3,
    ACTIONS(305), 1,
      aux_sym_delete_statement_token2,
    STATE(398), 1,
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
  [4166] = 3,
    ACTIONS(309), 1,
      aux_sym_create_materialized_view_token2,
    STATE(420), 1,
      sym_with_element,
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
  [4191] = 2,
    ACTIONS(311), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(299), 17,
      ts_builtin_sym_end,
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
  [4214] = 2,
    STATE(122), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(256), 17,
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
  [4237] = 3,
    ACTIONS(309), 1,
      aux_sym_create_materialized_view_token2,
    STATE(425), 1,
      sym_with_element,
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
  [4262] = 1,
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
  [4283] = 3,
    ACTIONS(212), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(421), 1,
      sym_using_ttl_timestamp,
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
  [4308] = 1,
    ACTIONS(319), 18,
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
  [4329] = 1,
    ACTIONS(321), 18,
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
  [4350] = 2,
    STATE(137), 1,
      aux_sym_table_options_repeat1,
    ACTIONS(260), 17,
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
  [4373] = 3,
    ACTIONS(212), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(347), 1,
      sym_using_ttl_timestamp,
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
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      aux_sym_create_materialized_view_token2,
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
  [4423] = 3,
    ACTIONS(333), 1,
      aux_sym_delete_statement_token2,
    STATE(393), 1,
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
  [4448] = 1,
    ACTIONS(335), 18,
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
  [4469] = 3,
    ACTIONS(339), 1,
      aux_sym_delete_statement_token2,
    STATE(407), 1,
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
  [4494] = 3,
    ACTIONS(287), 1,
      aux_sym_relation_elements_token1,
    STATE(155), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_create_materialized_view_token2,
    STATE(256), 1,
      sym_role_with,
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
    ACTIONS(349), 1,
      aux_sym_delete_statement_token2,
    STATE(368), 1,
      sym_if_spec,
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
  [4569] = 1,
    ACTIONS(351), 18,
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
  [4590] = 3,
    ACTIONS(212), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(365), 1,
      sym_using_ttl_timestamp,
    ACTIONS(353), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4615] = 3,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [4640] = 3,
    ACTIONS(362), 1,
      aux_sym_relation_elements_token1,
    STATE(155), 1,
      aux_sym_role_with_repeat1,
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
  [4665] = 3,
    ACTIONS(367), 1,
      aux_sym_delete_statement_token2,
    STATE(338), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4690] = 3,
    ACTIONS(345), 1,
      aux_sym_create_materialized_view_token2,
    STATE(275), 1,
      sym_role_with,
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
  [4715] = 3,
    ACTIONS(309), 1,
      aux_sym_create_materialized_view_token2,
    STATE(402), 1,
      sym_with_element,
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
  [4740] = 3,
    ACTIONS(212), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(276), 1,
      sym_using_ttl_timestamp,
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
  [4765] = 3,
    ACTIONS(377), 1,
      aux_sym_relation_elements_token1,
    STATE(172), 1,
      aux_sym_if_condition_list_repeat1,
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
  [4790] = 1,
    ACTIONS(379), 18,
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
  [4811] = 1,
    ACTIONS(381), 18,
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
  [4832] = 1,
    ACTIONS(383), 18,
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
  [4853] = 3,
    ACTIONS(212), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(356), 1,
      sym_using_ttl_timestamp,
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
  [4878] = 3,
    ACTIONS(377), 1,
      aux_sym_relation_elements_token1,
    STATE(160), 1,
      aux_sym_if_condition_list_repeat1,
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
  [4903] = 3,
    ACTIONS(391), 1,
      aux_sym_create_index_token3,
    ACTIONS(393), 1,
      aux_sym_list_roles_token2,
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
  [4928] = 3,
    ACTIONS(397), 1,
      aux_sym_list_roles_token2,
    ACTIONS(399), 1,
      aux_sym_list_roles_token3,
    ACTIONS(395), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4953] = 3,
    ACTIONS(403), 1,
      aux_sym_delete_statement_token2,
    STATE(313), 1,
      sym_if_spec,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4978] = 3,
    ACTIONS(407), 1,
      aux_sym_delete_statement_token2,
    STATE(351), 1,
      sym_if_spec,
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
  [5003] = 1,
    ACTIONS(409), 18,
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
  [5024] = 3,
    ACTIONS(413), 1,
      aux_sym_delete_statement_token2,
    STATE(306), 1,
      sym_if_spec,
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
  [5049] = 3,
    ACTIONS(417), 1,
      aux_sym_relation_elements_token1,
    STATE(172), 1,
      aux_sym_if_condition_list_repeat1,
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
  [5074] = 3,
    ACTIONS(422), 1,
      aux_sym_delete_statement_token2,
    STATE(396), 1,
      sym_if_spec,
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
  [5099] = 1,
    ACTIONS(424), 18,
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
  [5120] = 3,
    ACTIONS(428), 1,
      aux_sym_relation_elements_token1,
    STATE(202), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [5145] = 1,
    ACTIONS(430), 18,
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
  [5166] = 1,
    ACTIONS(432), 18,
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
  [5187] = 3,
    ACTIONS(436), 1,
      aux_sym_delete_statement_token2,
    STATE(367), 1,
      sym_if_spec,
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
  [5212] = 3,
    ACTIONS(212), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(370), 1,
      sym_using_ttl_timestamp,
    ACTIONS(438), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5237] = 1,
    ACTIONS(262), 18,
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
  [5258] = 3,
    ACTIONS(442), 1,
      aux_sym_delete_statement_token2,
    STATE(309), 1,
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
  [5283] = 1,
    ACTIONS(444), 18,
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
  [5304] = 3,
    ACTIONS(448), 1,
      aux_sym_clustering_order_token1,
    STATE(261), 1,
      sym_clustering_order,
    ACTIONS(446), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5329] = 1,
    ACTIONS(450), 18,
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
  [5350] = 3,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_column_list_repeat1,
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
  [5375] = 1,
    ACTIONS(252), 18,
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
  [5396] = 1,
    ACTIONS(456), 18,
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
  [5417] = 3,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    STATE(185), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5442] = 3,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [5467] = 3,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [5492] = 3,
    ACTIONS(345), 1,
      aux_sym_create_materialized_view_token2,
    STATE(348), 1,
      sym_role_with,
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
  [5517] = 3,
    ACTIONS(470), 1,
      aux_sym_delete_statement_token2,
    STATE(314), 1,
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
  [5542] = 3,
    ACTIONS(309), 1,
      aux_sym_create_materialized_view_token2,
    STATE(262), 1,
      sym_with_element,
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
  [5567] = 3,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [5592] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5613] = 3,
    ACTIONS(480), 1,
      aux_sym_relation_elements_token1,
    STATE(196), 1,
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
  [5638] = 3,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [5663] = 3,
    ACTIONS(487), 1,
      aux_sym_delete_statement_token2,
    STATE(290), 1,
      sym_if_spec,
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
  [5688] = 1,
    ACTIONS(489), 18,
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
  [5709] = 3,
    ACTIONS(493), 1,
      aux_sym_delete_statement_token2,
    STATE(289), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5734] = 3,
    ACTIONS(212), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(263), 1,
      sym_using_ttl_timestamp,
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
  [5759] = 3,
    ACTIONS(428), 1,
      aux_sym_relation_elements_token1,
    STATE(196), 1,
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
  [5784] = 3,
    ACTIONS(212), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(293), 1,
      sym_using_ttl_timestamp,
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
  [5809] = 3,
    ACTIONS(503), 1,
      aux_sym_delete_statement_token2,
    STATE(374), 1,
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
  [5834] = 3,
    ACTIONS(507), 1,
      aux_sym_delete_statement_token2,
    STATE(291), 1,
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
  [5859] = 2,
    ACTIONS(226), 1,
      aux_sym_select_statement_token4,
    ACTIONS(224), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5881] = 2,
    ACTIONS(511), 1,
      aux_sym_relation_elements_token1,
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
  [5903] = 2,
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
  [5925] = 2,
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
  [5947] = 2,
    ACTIONS(523), 1,
      anon_sym_DOT,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5969] = 2,
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
  [5991] = 2,
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
  [6013] = 2,
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
  [6035] = 2,
    ACTIONS(539), 1,
      aux_sym_relation_elements_token1,
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
  [6057] = 1,
    ACTIONS(541), 17,
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
  [6077] = 1,
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
  [6097] = 1,
    ACTIONS(543), 17,
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
  [6117] = 1,
    ACTIONS(545), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [6137] = 2,
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
  [6159] = 2,
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
  [6181] = 2,
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
  [6203] = 2,
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
  [6225] = 2,
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
  [6247] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6269] = 1,
    ACTIONS(567), 17,
      ts_builtin_sym_end,
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
  [6289] = 2,
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
  [6311] = 2,
    ACTIONS(571), 1,
      aux_sym_create_materialized_view_token2,
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
  [6333] = 2,
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
  [6355] = 2,
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
  [6377] = 2,
    ACTIONS(583), 1,
      aux_sym_select_statement_token4,
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
  [6399] = 2,
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
  [6421] = 2,
    ACTIONS(591), 1,
      aux_sym_create_materialized_view_token2,
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
  [6443] = 2,
    ACTIONS(595), 1,
      aux_sym_create_materialized_view_token2,
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
  [6465] = 2,
    ACTIONS(599), 1,
      aux_sym_create_materialized_view_token2,
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
  [6487] = 1,
    ACTIONS(601), 17,
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
  [6507] = 1,
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
  [6527] = 1,
    ACTIONS(603), 17,
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
  [6547] = 1,
    ACTIONS(415), 17,
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
  [6567] = 2,
    ACTIONS(607), 1,
      aux_sym_create_materialized_view_token2,
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
  [6589] = 2,
    ACTIONS(611), 1,
      aux_sym_relation_elements_token1,
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
  [6611] = 2,
    ACTIONS(132), 1,
      aux_sym_select_statement_token4,
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
  [6633] = 1,
    ACTIONS(613), 17,
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
  [6653] = 2,
    ACTIONS(617), 1,
      aux_sym_create_materialized_view_token2,
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
  [6675] = 2,
    ACTIONS(621), 1,
      aux_sym_list_roles_token2,
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
  [6697] = 2,
    ACTIONS(625), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6719] = 2,
    ACTIONS(629), 1,
      aux_sym_list_roles_token3,
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
  [6741] = 1,
    ACTIONS(631), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [6761] = 2,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6783] = 2,
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
  [6805] = 7,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      sym__decimal_literal,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    STATE(752), 1,
      sym_expression,
    STATE(859), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [6837] = 2,
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
  [6859] = 2,
    ACTIONS(647), 1,
      anon_sym_DOT,
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
  [6881] = 2,
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
  [6903] = 2,
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
  [6925] = 2,
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
  [6947] = 1,
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
  [6966] = 1,
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
  [6985] = 1,
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
  [7004] = 1,
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
  [7023] = 1,
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
  [7042] = 1,
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
  [7061] = 1,
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
  [7080] = 1,
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
  [7099] = 1,
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
  [7118] = 1,
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
  [7137] = 1,
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
  [7156] = 1,
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
  [7175] = 1,
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
  [7194] = 1,
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
  [7213] = 1,
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
  [7232] = 1,
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
  [7251] = 1,
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
  [7270] = 1,
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
  [7289] = 1,
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
  [7308] = 1,
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
  [7327] = 1,
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
  [7346] = 1,
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
  [7365] = 1,
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
  [7384] = 1,
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
  [7403] = 1,
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
  [7422] = 1,
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
  [7441] = 1,
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
  [7460] = 1,
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
  [7479] = 1,
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
  [7498] = 1,
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
  [7517] = 1,
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
  [7536] = 1,
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
  [7555] = 1,
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
  [7574] = 1,
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
  [7593] = 1,
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
  [7612] = 1,
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
  [7631] = 1,
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
  [7650] = 1,
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
  [7669] = 1,
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
  [7688] = 1,
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
  [7707] = 2,
    ACTIONS(735), 1,
      anon_sym_SEMI,
    ACTIONS(733), 15,
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
  [7728] = 1,
    ACTIONS(208), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7766] = 1,
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
  [7785] = 1,
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
  [7804] = 1,
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
  [7823] = 1,
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
  [7842] = 1,
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
  [7861] = 1,
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
  [7880] = 1,
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
  [7899] = 1,
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
  [7918] = 1,
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
  [7937] = 1,
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
  [7956] = 1,
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
  [7975] = 1,
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
  [7994] = 1,
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
  [8013] = 1,
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
  [8032] = 1,
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
  [8051] = 1,
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
  [8070] = 1,
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
  [8089] = 1,
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
  [8108] = 1,
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
  [8127] = 1,
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
  [8146] = 1,
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
  [8165] = 1,
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
  [8184] = 1,
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
  [8203] = 1,
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
  [8222] = 1,
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
  [8241] = 1,
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
  [8260] = 1,
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
  [8279] = 1,
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
  [8298] = 1,
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
  [8317] = 1,
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
  [8336] = 1,
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
  [8355] = 1,
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
  [8374] = 1,
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
  [8393] = 1,
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
  [8412] = 1,
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
  [8431] = 1,
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
  [8450] = 1,
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
  [8469] = 1,
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
  [8488] = 1,
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
  [8507] = 1,
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
  [8526] = 1,
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
  [8545] = 1,
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
  [8564] = 1,
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
  [8583] = 1,
    ACTIONS(446), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8602] = 1,
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
  [8621] = 1,
    ACTIONS(224), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8640] = 1,
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
  [8659] = 1,
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
  [8678] = 1,
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
  [8697] = 1,
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
  [8716] = 1,
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
  [8735] = 1,
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
  [8754] = 1,
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
  [8773] = 1,
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
  [8792] = 1,
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
  [8811] = 1,
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
  [8830] = 1,
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
  [8849] = 1,
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
  [8868] = 1,
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
  [8887] = 1,
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
  [8906] = 1,
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
  [8925] = 1,
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
  [8944] = 1,
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
  [8963] = 1,
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
  [8982] = 1,
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
  [9001] = 1,
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
  [9020] = 1,
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
  [9039] = 1,
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
  [9058] = 1,
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
  [9077] = 1,
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
  [9096] = 1,
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
  [9115] = 1,
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
  [9134] = 1,
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
  [9153] = 1,
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
  [9172] = 1,
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
  [9191] = 1,
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
  [9210] = 1,
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
  [9229] = 1,
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
  [9248] = 1,
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
  [9267] = 1,
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
  [9286] = 1,
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
  [9305] = 1,
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
  [9324] = 1,
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
  [9343] = 1,
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
  [9362] = 1,
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
  [9381] = 1,
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
  [9400] = 1,
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
  [9419] = 1,
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
  [9438] = 1,
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
  [9457] = 1,
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
  [9476] = 1,
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
  [9495] = 1,
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
  [9514] = 1,
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
  [9533] = 1,
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
  [9552] = 1,
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
  [9571] = 1,
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
  [9590] = 1,
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
  [9609] = 1,
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
  [9628] = 1,
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
  [9647] = 1,
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
  [9666] = 1,
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
  [9685] = 1,
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
  [9704] = 1,
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
  [9723] = 1,
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
  [9742] = 1,
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
  [9761] = 1,
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
  [9780] = 1,
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
  [9799] = 1,
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
  [9818] = 1,
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
  [9837] = 1,
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
  [9856] = 1,
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
  [9875] = 1,
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
  [9894] = 1,
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
  [9913] = 1,
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
  [9932] = 1,
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
  [9951] = 1,
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
  [9970] = 1,
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
  [9989] = 1,
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
  [10008] = 1,
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
  [10027] = 1,
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
  [10046] = 1,
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
  [10065] = 1,
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
  [10084] = 1,
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
  [10103] = 1,
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
  [10122] = 1,
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
  [10141] = 1,
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
  [10160] = 1,
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
  [10179] = 1,
    ACTIONS(949), 15,
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
  [10197] = 7,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(951), 1,
      sym_object_name,
    STATE(754), 1,
      sym_constant,
    ACTIONS(293), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    STATE(548), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(291), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10227] = 5,
    ACTIONS(293), 1,
      sym__decimal_literal,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(401), 1,
      sym_init_cond_definition,
    STATE(141), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10252] = 5,
    ACTIONS(293), 1,
      sym__decimal_literal,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(354), 1,
      sym_init_cond_definition,
    STATE(141), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10277] = 5,
    ACTIONS(293), 1,
      sym__decimal_literal,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(424), 1,
      sym_init_cond_definition,
    STATE(141), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10302] = 5,
    ACTIONS(293), 1,
      sym__decimal_literal,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(330), 1,
      sym_init_cond_definition,
    STATE(141), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10327] = 5,
    ACTIONS(293), 1,
      sym__decimal_literal,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(779), 1,
      sym_init_cond_definition,
    STATE(141), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10352] = 5,
    ACTIONS(293), 1,
      sym__decimal_literal,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(320), 1,
      sym_init_cond_definition,
    STATE(141), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10377] = 5,
    ACTIONS(293), 1,
      sym__decimal_literal,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(267), 1,
      sym_init_cond_definition,
    STATE(141), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10402] = 5,
    ACTIONS(293), 1,
      sym__decimal_literal,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(410), 1,
      sym_init_cond_definition,
    STATE(141), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10427] = 5,
    ACTIONS(293), 1,
      sym__decimal_literal,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(349), 1,
      sym_init_cond_definition,
    STATE(141), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10452] = 7,
    ACTIONS(955), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 1,
      sym_object_name,
    STATE(603), 1,
      sym_constant,
    STATE(605), 1,
      sym_init_cond_list,
    STATE(608), 1,
      sym_init_cond_hash_item,
    ACTIONS(293), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(291), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10480] = 6,
    ACTIONS(959), 1,
      anon_sym_STAR,
    ACTIONS(961), 1,
      sym_object_name,
    STATE(1325), 1,
      sym_function_args,
    STATE(666), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(293), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(291), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10506] = 5,
    ACTIONS(961), 1,
      sym_object_name,
    STATE(1001), 1,
      sym_function_args,
    STATE(666), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(293), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(291), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10529] = 4,
    ACTIONS(293), 1,
      sym__decimal_literal,
    ACTIONS(955), 1,
      anon_sym_LPAREN,
    STATE(780), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10549] = 11,
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
  [10583] = 4,
    ACTIONS(987), 1,
      aux_sym_priviledge_token1,
    ACTIONS(989), 1,
      aux_sym_resource_token4,
    STATE(166), 1,
      sym_priviledge,
    ACTIONS(985), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10603] = 4,
    ACTIONS(991), 1,
      sym_object_name,
    STATE(828), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(293), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(291), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10623] = 4,
    ACTIONS(993), 1,
      sym_object_name,
    STATE(79), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(293), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(291), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10643] = 7,
    ACTIONS(995), 1,
      anon_sym_DOT,
    ACTIONS(997), 1,
      aux_sym_drop_index_token1,
    ACTIONS(999), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(1001), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1003), 1,
      aux_sym_alter_table_rename_token1,
    STATE(272), 1,
      sym_alter_table_operation,
    STATE(273), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10669] = 5,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      sym__decimal_literal,
    STATE(66), 1,
      sym_assignment_tuple,
    STATE(521), 1,
      sym_constant,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10691] = 3,
    ACTIONS(987), 1,
      aux_sym_priviledge_token1,
    STATE(1394), 1,
      sym_priviledge,
    ACTIONS(985), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10708] = 3,
    ACTIONS(987), 1,
      aux_sym_priviledge_token1,
    STATE(1395), 1,
      sym_priviledge,
    ACTIONS(985), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10725] = 6,
    ACTIONS(997), 1,
      aux_sym_drop_index_token1,
    ACTIONS(999), 1,
      aux_sym_create_materialized_view_token2,
    ACTIONS(1001), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1003), 1,
      aux_sym_alter_table_rename_token1,
    STATE(307), 1,
      sym_alter_table_operation,
    STATE(273), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10748] = 10,
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
  [10779] = 4,
    ACTIONS(293), 1,
      sym__decimal_literal,
    ACTIONS(1025), 1,
      anon_sym_RBRACE,
    STATE(560), 1,
      sym_constant,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10798] = 4,
    ACTIONS(293), 1,
      sym__decimal_literal,
    ACTIONS(1027), 1,
      aux_sym_relation_contains_key_token2,
    STATE(80), 1,
      sym_constant,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10817] = 3,
    ACTIONS(293), 1,
      sym__decimal_literal,
    STATE(237), 1,
      sym_constant,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10833] = 3,
    ACTIONS(293), 1,
      sym__decimal_literal,
    STATE(76), 1,
      sym_constant,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10849] = 3,
    ACTIONS(293), 1,
      sym__decimal_literal,
    STATE(749), 1,
      sym_constant,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10865] = 3,
    ACTIONS(293), 1,
      sym__decimal_literal,
    STATE(521), 1,
      sym_constant,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10881] = 3,
    ACTIONS(293), 1,
      sym__decimal_literal,
    STATE(763), 1,
      sym_constant,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10897] = 3,
    ACTIONS(293), 1,
      sym__decimal_literal,
    STATE(1027), 1,
      sym_constant,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10913] = 3,
    ACTIONS(293), 1,
      sym__decimal_literal,
    STATE(589), 1,
      sym_constant,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10929] = 5,
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
  [10949] = 3,
    ACTIONS(293), 1,
      sym__decimal_literal,
    STATE(603), 1,
      sym_constant,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10965] = 3,
    ACTIONS(293), 1,
      sym__decimal_literal,
    STATE(79), 1,
      sym_constant,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10981] = 3,
    ACTIONS(293), 1,
      sym__decimal_literal,
    STATE(170), 1,
      sym_constant,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10997] = 3,
    ACTIONS(293), 1,
      sym__decimal_literal,
    STATE(491), 1,
      sym_constant,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [11013] = 3,
    ACTIONS(293), 1,
      sym__decimal_literal,
    STATE(618), 1,
      sym_constant,
    ACTIONS(291), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [11029] = 6,
    ACTIONS(1039), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1041), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1043), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1045), 1,
      sym_object_name,
    STATE(972), 1,
      sym_index_column_spec,
    STATE(1068), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11050] = 6,
    ACTIONS(1047), 1,
      anon_sym_DOT,
    ACTIONS(1049), 1,
      aux_sym_priviledge_token3,
    ACTIONS(1051), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1053), 1,
      aux_sym_alter_table_rename_token1,
    STATE(281), 1,
      sym_alter_type_operation,
    STATE(282), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [11071] = 6,
    ACTIONS(1039), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1041), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1043), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1045), 1,
      sym_object_name,
    STATE(964), 1,
      sym_index_column_spec,
    STATE(1068), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11092] = 6,
    ACTIONS(1039), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1041), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1043), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1045), 1,
      sym_object_name,
    STATE(1069), 1,
      sym_index_column_spec,
    STATE(1068), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11113] = 6,
    ACTIONS(1039), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(1041), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(1043), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(1045), 1,
      sym_object_name,
    STATE(883), 1,
      sym_index_column_spec,
    STATE(1068), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [11134] = 7,
    ACTIONS(152), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(154), 1,
      sym_object_name,
    STATE(143), 1,
      sym_table_option_item,
    STATE(207), 1,
      sym_table_options,
    STATE(265), 1,
      sym_clustering_order,
    STATE(295), 1,
      sym_materialized_view_options,
    STATE(1097), 1,
      sym_table_option_name,
  [11156] = 7,
    ACTIONS(152), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(154), 1,
      sym_object_name,
    STATE(143), 1,
      sym_table_option_item,
    STATE(207), 1,
      sym_table_options,
    STATE(265), 1,
      sym_clustering_order,
    STATE(361), 1,
      sym_materialized_view_options,
    STATE(1097), 1,
      sym_table_option_name,
  [11178] = 6,
    ACTIONS(1055), 1,
      anon_sym_LPAREN,
    ACTIONS(1057), 1,
      sym_object_name,
    STATE(86), 1,
      sym_relation_element,
    STATE(99), 1,
      sym_relation_elements,
    STATE(489), 1,
      sym_function_call,
    STATE(85), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11198] = 7,
    ACTIONS(152), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(154), 1,
      sym_object_name,
    STATE(143), 1,
      sym_table_option_item,
    STATE(207), 1,
      sym_table_options,
    STATE(265), 1,
      sym_clustering_order,
    STATE(358), 1,
      sym_materialized_view_options,
    STATE(1097), 1,
      sym_table_option_name,
  [11220] = 7,
    ACTIONS(152), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(154), 1,
      sym_object_name,
    STATE(143), 1,
      sym_table_option_item,
    STATE(207), 1,
      sym_table_options,
    STATE(265), 1,
      sym_clustering_order,
    STATE(324), 1,
      sym_materialized_view_options,
    STATE(1097), 1,
      sym_table_option_name,
  [11242] = 7,
    ACTIONS(152), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(154), 1,
      sym_object_name,
    STATE(143), 1,
      sym_table_option_item,
    STATE(207), 1,
      sym_table_options,
    STATE(265), 1,
      sym_clustering_order,
    STATE(271), 1,
      sym_materialized_view_options,
    STATE(1097), 1,
      sym_table_option_name,
  [11264] = 7,
    ACTIONS(152), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(154), 1,
      sym_object_name,
    STATE(143), 1,
      sym_table_option_item,
    STATE(207), 1,
      sym_table_options,
    STATE(265), 1,
      sym_clustering_order,
    STATE(268), 1,
      sym_materialized_view_options,
    STATE(1097), 1,
      sym_table_option_name,
  [11286] = 7,
    ACTIONS(1059), 1,
      aux_sym_select_statement_token2,
    ACTIONS(1061), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1063), 1,
      anon_sym_STAR,
    ACTIONS(1065), 1,
      sym_object_name,
    STATE(616), 1,
      sym_select_element,
    STATE(632), 1,
      sym_function_call,
    STATE(817), 1,
      sym_select_elements,
  [11308] = 5,
    ACTIONS(1049), 1,
      aux_sym_priviledge_token3,
    ACTIONS(1051), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1053), 1,
      aux_sym_alter_table_rename_token1,
    STATE(311), 1,
      sym_alter_type_operation,
    STATE(282), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [11326] = 3,
    ACTIONS(1071), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1067), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1069), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11340] = 7,
    ACTIONS(1073), 1,
      aux_sym_truncate_token2,
    ACTIONS(1075), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1077), 1,
      aux_sym_resource_token2,
    ACTIONS(1079), 1,
      aux_sym_resource_token5,
    ACTIONS(1081), 1,
      aux_sym_resource_token6,
    ACTIONS(1083), 1,
      sym_object_name,
    STATE(1212), 1,
      sym_resource,
  [11362] = 7,
    ACTIONS(152), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(154), 1,
      sym_object_name,
    STATE(143), 1,
      sym_table_option_item,
    STATE(207), 1,
      sym_table_options,
    STATE(265), 1,
      sym_clustering_order,
    STATE(394), 1,
      sym_materialized_view_options,
    STATE(1097), 1,
      sym_table_option_name,
  [11384] = 7,
    ACTIONS(152), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(154), 1,
      sym_object_name,
    STATE(143), 1,
      sym_table_option_item,
    STATE(207), 1,
      sym_table_options,
    STATE(265), 1,
      sym_clustering_order,
    STATE(362), 1,
      sym_materialized_view_options,
    STATE(1097), 1,
      sym_table_option_name,
  [11406] = 7,
    ACTIONS(1073), 1,
      aux_sym_truncate_token2,
    ACTIONS(1075), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1077), 1,
      aux_sym_resource_token2,
    ACTIONS(1079), 1,
      aux_sym_resource_token5,
    ACTIONS(1081), 1,
      aux_sym_resource_token6,
    ACTIONS(1083), 1,
      sym_object_name,
    STATE(244), 1,
      sym_resource,
  [11428] = 7,
    ACTIONS(1073), 1,
      aux_sym_truncate_token2,
    ACTIONS(1075), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1077), 1,
      aux_sym_resource_token2,
    ACTIONS(1079), 1,
      aux_sym_resource_token5,
    ACTIONS(1081), 1,
      aux_sym_resource_token6,
    ACTIONS(1083), 1,
      sym_object_name,
    STATE(1217), 1,
      sym_resource,
  [11450] = 3,
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
  [11464] = 6,
    ACTIONS(1063), 1,
      anon_sym_STAR,
    ACTIONS(1065), 1,
      sym_object_name,
    ACTIONS(1091), 1,
      aux_sym_select_statement_token3,
    STATE(616), 1,
      sym_select_element,
    STATE(632), 1,
      sym_function_call,
    STATE(775), 1,
      sym_select_elements,
  [11483] = 6,
    ACTIONS(1093), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1095), 1,
      anon_sym_DOT,
    ACTIONS(1097), 1,
      anon_sym_LPAREN,
    ACTIONS(1099), 1,
      aux_sym_insert_values_spec_token1,
    STATE(129), 1,
      sym_insert_values_spec,
    STATE(658), 1,
      sym_insert_column_spec,
  [11502] = 2,
    ACTIONS(1101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1103), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11513] = 4,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(1105), 1,
      sym__decimal_literal,
    STATE(824), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [11528] = 6,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(1107), 1,
      anon_sym_COMMA,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
    STATE(703), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(704), 1,
      aux_sym_relation_element_repeat2,
    STATE(706), 1,
      sym_assignment_tuple,
  [11547] = 6,
    ACTIONS(1111), 1,
      aux_sym_truncate_token2,
    ACTIONS(1113), 1,
      aux_sym_resource_token2,
    ACTIONS(1115), 1,
      aux_sym_resource_token6,
    ACTIONS(1117), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1119), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1121), 1,
      aux_sym_drop_user_token1,
  [11566] = 5,
    ACTIONS(1055), 1,
      anon_sym_LPAREN,
    ACTIONS(1057), 1,
      sym_object_name,
    STATE(89), 1,
      sym_relation_element,
    STATE(489), 1,
      sym_function_call,
    STATE(85), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11583] = 5,
    ACTIONS(1055), 1,
      anon_sym_LPAREN,
    ACTIONS(1057), 1,
      sym_object_name,
    STATE(489), 1,
      sym_function_call,
    STATE(1171), 1,
      sym_relation_element,
    STATE(85), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11600] = 6,
    ACTIONS(1093), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1097), 1,
      anon_sym_LPAREN,
    ACTIONS(1099), 1,
      aux_sym_insert_values_spec_token1,
    ACTIONS(1123), 1,
      anon_sym_DOT,
    STATE(115), 1,
      sym_insert_values_spec,
    STATE(705), 1,
      sym_insert_column_spec,
  [11619] = 4,
    ACTIONS(1125), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1129), 1,
      aux_sym_role_with_options_token4,
    STATE(131), 1,
      sym_role_with_options,
    ACTIONS(1127), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11633] = 1,
    ACTIONS(1131), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11641] = 5,
    ACTIONS(1093), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1097), 1,
      anon_sym_LPAREN,
    ACTIONS(1099), 1,
      aux_sym_insert_values_spec_token1,
    STATE(128), 1,
      sym_insert_values_spec,
    STATE(601), 1,
      sym_insert_column_spec,
  [11657] = 1,
    ACTIONS(1133), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11665] = 1,
    ACTIONS(1135), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11673] = 3,
    ACTIONS(1139), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(621), 1,
      sym_using_timestamp_spec,
    ACTIONS(1137), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11685] = 4,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
    ACTIONS(1143), 1,
      anon_sym_DOT,
    ACTIONS(1145), 1,
      aux_sym_select_element_token1,
    ACTIONS(1141), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11699] = 5,
    ACTIONS(1147), 1,
      sym__string_literal,
    ACTIONS(1149), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1151), 1,
      aux_sym_create_index_token3,
    ACTIONS(1153), 1,
      sym_object_name,
    STATE(1376), 1,
      sym_index_name,
  [11715] = 1,
    ACTIONS(1155), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11723] = 5,
    ACTIONS(1063), 1,
      anon_sym_STAR,
    ACTIONS(1157), 1,
      sym_object_name,
    STATE(616), 1,
      sym_select_element,
    STATE(632), 1,
      sym_function_call,
    STATE(775), 1,
      sym_select_elements,
  [11739] = 3,
    ACTIONS(1139), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(691), 1,
      sym_using_timestamp_spec,
    ACTIONS(1159), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11751] = 1,
    ACTIONS(1161), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11759] = 4,
    ACTIONS(1125), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1129), 1,
      aux_sym_role_with_options_token4,
    STATE(236), 1,
      sym_role_with_options,
    ACTIONS(1127), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11773] = 5,
    ACTIONS(1093), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1097), 1,
      anon_sym_LPAREN,
    ACTIONS(1099), 1,
      aux_sym_insert_values_spec_token1,
    STATE(116), 1,
      sym_insert_values_spec,
    STATE(719), 1,
      sym_insert_column_spec,
  [11789] = 5,
    ACTIONS(1163), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1165), 1,
      sym_object_name,
    STATE(562), 1,
      sym_from_spec,
    STATE(650), 1,
      sym_delete_column_item,
    STATE(841), 1,
      sym_delete_column_list,
  [11805] = 3,
    ACTIONS(1167), 1,
      anon_sym_LPAREN,
    ACTIONS(1169), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(187), 2,
      sym_option_hash,
      sym_table_option_value,
  [11817] = 3,
    ACTIONS(1171), 1,
      anon_sym_COMMA,
    STATE(512), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(1174), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11829] = 1,
    ACTIONS(1176), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11837] = 1,
    ACTIONS(1178), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11845] = 4,
    ACTIONS(1180), 1,
      anon_sym_LPAREN,
    ACTIONS(1182), 1,
      sym_object_name,
    STATE(961), 1,
      sym_primary_key_definition,
    STATE(962), 2,
      sym_compound_key,
      sym_composite_key,
  [11859] = 5,
    ACTIONS(1063), 1,
      anon_sym_STAR,
    ACTIONS(1157), 1,
      sym_object_name,
    STATE(616), 1,
      sym_select_element,
    STATE(632), 1,
      sym_function_call,
    STATE(834), 1,
      sym_select_elements,
  [11875] = 5,
    ACTIONS(1163), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1165), 1,
      sym_object_name,
    STATE(532), 1,
      sym_from_spec,
    STATE(650), 1,
      sym_delete_column_item,
    STATE(802), 1,
      sym_delete_column_list,
  [11891] = 4,
    ACTIONS(1184), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(1186), 1,
      sym_object_name,
    STATE(165), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [11904] = 3,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(1188), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11915] = 4,
    ACTIONS(1190), 1,
      sym_object_name,
    STATE(121), 1,
      sym_table_option_item,
    STATE(415), 1,
      sym_table_options,
    STATE(1097), 1,
      sym_table_option_name,
  [11928] = 1,
    ACTIONS(1174), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11935] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1139), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(169), 1,
      sym_where_spec,
    STATE(788), 1,
      sym_using_timestamp_spec,
  [11948] = 4,
    ACTIONS(1186), 1,
      sym_object_name,
    ACTIONS(1192), 1,
      aux_sym_delete_statement_token3,
    STATE(165), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [11961] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      sym_where_spec,
    STATE(544), 1,
      aux_sym_update_repeat1,
  [11974] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      sym_where_spec,
    STATE(685), 1,
      aux_sym_update_repeat1,
  [11987] = 4,
    ACTIONS(1186), 1,
      sym_object_name,
    ACTIONS(1196), 1,
      aux_sym_delete_statement_token3,
    STATE(165), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [12000] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      sym_where_spec,
    STATE(685), 1,
      aux_sym_update_repeat1,
  [12013] = 4,
    ACTIONS(1186), 1,
      sym_object_name,
    ACTIONS(1198), 1,
      aux_sym_delete_statement_token3,
    STATE(165), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [12026] = 4,
    ACTIONS(1186), 1,
      sym_object_name,
    ACTIONS(1200), 1,
      aux_sym_delete_statement_token3,
    STATE(165), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [12039] = 4,
    ACTIONS(1202), 1,
      aux_sym_timestamp_token1,
    ACTIONS(1204), 1,
      aux_sym_ttl_token1,
    STATE(133), 1,
      sym_ttl,
    STATE(136), 1,
      sym_timestamp,
  [12052] = 3,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    STATE(519), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(1206), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [12063] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1139), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(148), 1,
      sym_where_spec,
    STATE(807), 1,
      sym_using_timestamp_spec,
  [12076] = 4,
    ACTIONS(1147), 1,
      sym__string_literal,
    ACTIONS(1153), 1,
      sym_object_name,
    ACTIONS(1208), 1,
      aux_sym_create_index_token3,
    STATE(1079), 1,
      sym_index_name,
  [12089] = 4,
    ACTIONS(1186), 1,
      sym_object_name,
    ACTIONS(1210), 1,
      aux_sym_delete_statement_token3,
    STATE(165), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [12102] = 4,
    ACTIONS(1186), 1,
      sym_object_name,
    ACTIONS(1212), 1,
      aux_sym_delete_statement_token3,
    STATE(165), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [12115] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      sym_where_spec,
    STATE(685), 1,
      aux_sym_update_repeat1,
  [12128] = 4,
    ACTIONS(1186), 1,
      sym_object_name,
    ACTIONS(1214), 1,
      aux_sym_delete_statement_token3,
    STATE(165), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [12141] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      sym_where_spec,
    STATE(525), 1,
      aux_sym_update_repeat1,
  [12154] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      sym_where_spec,
    STATE(547), 1,
      aux_sym_update_repeat1,
  [12167] = 4,
    ACTIONS(212), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1216), 1,
      anon_sym_DOT,
    ACTIONS(1218), 1,
      aux_sym_update_token2,
    STATE(1335), 1,
      sym_using_ttl_timestamp,
  [12180] = 4,
    ACTIONS(1190), 1,
      sym_object_name,
    STATE(121), 1,
      sym_table_option_item,
    STATE(300), 1,
      sym_table_options,
    STATE(1097), 1,
      sym_table_option_name,
  [12193] = 4,
    ACTIONS(1186), 1,
      sym_object_name,
    ACTIONS(1220), 1,
      aux_sym_delete_statement_token3,
    STATE(165), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [12206] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      sym_where_spec,
    STATE(550), 1,
      aux_sym_update_repeat1,
  [12219] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      sym_where_spec,
    STATE(685), 1,
      aux_sym_update_repeat1,
  [12232] = 4,
    ACTIONS(1186), 1,
      sym_object_name,
    ACTIONS(1222), 1,
      aux_sym_delete_statement_token3,
    STATE(165), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [12245] = 4,
    ACTIONS(1186), 1,
      sym_object_name,
    ACTIONS(1224), 1,
      aux_sym_delete_statement_token3,
    STATE(165), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [12258] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      sym_where_spec,
    STATE(685), 1,
      aux_sym_update_repeat1,
  [12271] = 2,
    ACTIONS(1226), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12280] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      sym_where_spec,
    STATE(527), 1,
      aux_sym_update_repeat1,
  [12293] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      sym_where_spec,
    STATE(685), 1,
      aux_sym_update_repeat1,
  [12306] = 4,
    ACTIONS(1186), 1,
      sym_object_name,
    ACTIONS(1230), 1,
      aux_sym_delete_statement_token3,
    STATE(165), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [12319] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      sym_where_spec,
    STATE(555), 1,
      aux_sym_update_repeat1,
  [12332] = 4,
    ACTIONS(1186), 1,
      sym_object_name,
    ACTIONS(1232), 1,
      aux_sym_delete_statement_token3,
    STATE(165), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [12345] = 1,
    ACTIONS(1234), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12352] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      sym_where_spec,
    STATE(685), 1,
      aux_sym_update_repeat1,
  [12365] = 3,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
    STATE(1144), 1,
      sym_order_direction,
    ACTIONS(177), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [12376] = 4,
    ACTIONS(1190), 1,
      sym_object_name,
    STATE(121), 1,
      sym_table_option_item,
    STATE(310), 1,
      sym_table_options,
    STATE(1097), 1,
      sym_table_option_name,
  [12389] = 4,
    ACTIONS(1186), 1,
      sym_object_name,
    ACTIONS(1238), 1,
      aux_sym_delete_statement_token3,
    STATE(165), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [12402] = 4,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
    ACTIONS(1240), 1,
      anon_sym_COMMA,
    ACTIONS(1242), 1,
      anon_sym_RPAREN,
    STATE(612), 1,
      aux_sym_function_args_repeat1,
  [12415] = 4,
    ACTIONS(1244), 1,
      anon_sym_COMMA,
    ACTIONS(1246), 1,
      anon_sym_COLON,
    ACTIONS(1248), 1,
      anon_sym_RBRACE,
    STATE(699), 1,
      aux_sym_assignment_tuple_repeat1,
  [12428] = 4,
    ACTIONS(1250), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1252), 1,
      sym_object_name,
    STATE(814), 1,
      sym_column_definition,
    STATE(984), 1,
      sym_primary_key_element,
  [12441] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1139), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(192), 1,
      sym_where_spec,
    STATE(773), 1,
      sym_using_timestamp_spec,
  [12454] = 4,
    ACTIONS(212), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1254), 1,
      anon_sym_DOT,
    ACTIONS(1256), 1,
      aux_sym_update_token2,
    STATE(1197), 1,
      sym_using_ttl_timestamp,
  [12467] = 3,
    ACTIONS(1260), 1,
      aux_sym_create_materialized_view_token1,
    STATE(821), 1,
      sym_primary_key_column,
    ACTIONS(1258), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12478] = 4,
    ACTIONS(1250), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1252), 1,
      sym_object_name,
    STATE(814), 1,
      sym_column_definition,
    STATE(930), 1,
      sym_primary_key_element,
  [12491] = 4,
    ACTIONS(1186), 1,
      sym_object_name,
    ACTIONS(1262), 1,
      aux_sym_delete_statement_token3,
    STATE(165), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [12504] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      sym_where_spec,
    STATE(568), 1,
      aux_sym_update_repeat1,
  [12517] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      sym_where_spec,
    STATE(685), 1,
      aux_sym_update_repeat1,
  [12530] = 4,
    ACTIONS(1186), 1,
      sym_object_name,
    ACTIONS(1264), 1,
      aux_sym_delete_statement_token3,
    STATE(165), 1,
      sym_if_condition,
    STATE(316), 1,
      sym_if_condition_list,
  [12543] = 4,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      sym_where_spec,
    STATE(536), 1,
      aux_sym_update_repeat1,
  [12556] = 3,
    ACTIONS(1266), 1,
      anon_sym_RPAREN,
    ACTIONS(1268), 1,
      sym_object_name,
    STATE(598), 1,
      sym_param,
  [12566] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(1220), 1,
      sym_return_mode,
  [12576] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1276), 1,
      anon_sym_RPAREN,
    STATE(720), 1,
      aux_sym_create_type_repeat1,
  [12586] = 3,
    ACTIONS(1268), 1,
      sym_object_name,
    ACTIONS(1278), 1,
      anon_sym_RPAREN,
    STATE(708), 1,
      sym_param,
  [12596] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(1128), 1,
      sym_return_mode,
  [12606] = 3,
    ACTIONS(1280), 1,
      anon_sym_COMMA,
    ACTIONS(1282), 1,
      anon_sym_RPAREN,
    STATE(591), 1,
      aux_sym_init_cond_hash_repeat1,
  [12616] = 3,
    ACTIONS(1190), 1,
      sym_object_name,
    STATE(180), 1,
      sym_table_option_item,
    STATE(1097), 1,
      sym_table_option_name,
  [12626] = 3,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    ACTIONS(1286), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_create_function_repeat1,
  [12636] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(1132), 1,
      sym_return_mode,
  [12646] = 2,
    ACTIONS(1288), 1,
      aux_sym_resource_token1,
    ACTIONS(1290), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [12654] = 3,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_create_function_repeat1,
  [12664] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(1261), 1,
      sym_return_mode,
  [12674] = 3,
    ACTIONS(1294), 1,
      anon_sym_COMMA,
    ACTIONS(1296), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      aux_sym_column_definition_list_repeat1,
  [12684] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(973), 1,
      sym_return_mode,
  [12694] = 2,
    ACTIONS(1300), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1298), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [12702] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    STATE(664), 1,
      sym_column_definition,
    STATE(956), 1,
      sym_column_definition_list,
  [12712] = 3,
    ACTIONS(1304), 1,
      anon_sym_DOT,
    ACTIONS(1306), 1,
      aux_sym_where_spec_token1,
    STATE(1252), 1,
      sym_materialized_view_where,
  [12722] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    STATE(664), 1,
      sym_column_definition,
    STATE(996), 1,
      sym_column_definition_list,
  [12732] = 3,
    ACTIONS(1308), 1,
      anon_sym_COMMA,
    ACTIONS(1310), 1,
      anon_sym_RBRACE,
    STATE(668), 1,
      aux_sym_assignment_map_repeat1,
  [12742] = 3,
    ACTIONS(1312), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    ACTIONS(1314), 1,
      sym_object_name,
    STATE(413), 1,
      sym_alter_table_drop_column_list,
  [12752] = 3,
    ACTIONS(1316), 1,
      anon_sym_COMMA,
    ACTIONS(1319), 1,
      anon_sym_RPAREN,
    STATE(591), 1,
      aux_sym_init_cond_hash_repeat1,
  [12762] = 3,
    ACTIONS(1321), 1,
      anon_sym_COMMA,
    ACTIONS(1323), 1,
      anon_sym_RPAREN,
    STATE(622), 1,
      aux_sym_expression_list_repeat1,
  [12772] = 3,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_create_function_repeat1,
  [12782] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1327), 1,
      anon_sym_RPAREN,
    STATE(673), 1,
      aux_sym_create_type_repeat1,
  [12792] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [12802] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(1071), 1,
      sym_return_mode,
  [12812] = 3,
    ACTIONS(212), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1331), 1,
      aux_sym_update_token2,
    STATE(1044), 1,
      sym_using_ttl_timestamp,
  [12822] = 3,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
    STATE(578), 1,
      aux_sym_create_function_repeat1,
  [12832] = 3,
    ACTIONS(1335), 1,
      sym_object_name,
    STATE(175), 1,
      sym_alter_type_rename_item,
    STATE(423), 1,
      sym_alter_type_rename_list,
  [12842] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
    STATE(686), 1,
      aux_sym_relation_element_repeat2,
  [12852] = 3,
    ACTIONS(1093), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1099), 1,
      aux_sym_insert_values_spec_token1,
    STATE(112), 1,
      sym_insert_values_spec,
  [12862] = 3,
    ACTIONS(1268), 1,
      sym_object_name,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
    STATE(640), 1,
      sym_param,
  [12872] = 3,
    ACTIONS(1244), 1,
      anon_sym_COMMA,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
    STATE(693), 1,
      aux_sym_assignment_tuple_repeat1,
  [12882] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(1067), 1,
      sym_return_mode,
  [12892] = 3,
    ACTIONS(1343), 1,
      anon_sym_COMMA,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
    STATE(697), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12902] = 3,
    ACTIONS(1347), 1,
      anon_sym_COMMA,
    ACTIONS(1350), 1,
      anon_sym_RPAREN,
    STATE(606), 1,
      aux_sym_relation_element_repeat1,
  [12912] = 3,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    ACTIONS(1352), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_create_function_repeat1,
  [12922] = 3,
    ACTIONS(1280), 1,
      anon_sym_COMMA,
    ACTIONS(1354), 1,
      anon_sym_RPAREN,
    STATE(576), 1,
      aux_sym_init_cond_hash_repeat1,
  [12932] = 3,
    ACTIONS(1356), 1,
      anon_sym_COMMA,
    ACTIONS(1358), 1,
      anon_sym_RBRACE,
    STATE(647), 1,
      aux_sym_replication_list_repeat1,
  [12942] = 3,
    ACTIONS(1360), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1362), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1364), 1,
      aux_sym_update_token1,
  [12952] = 3,
    ACTIONS(1366), 1,
      anon_sym_COMMA,
    ACTIONS(1368), 1,
      anon_sym_RPAREN,
    STATE(606), 1,
      aux_sym_relation_element_repeat1,
  [12962] = 3,
    ACTIONS(1240), 1,
      anon_sym_COMMA,
    ACTIONS(1370), 1,
      anon_sym_RPAREN,
    STATE(615), 1,
      aux_sym_function_args_repeat1,
  [12972] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1372), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      aux_sym_create_type_repeat1,
  [12982] = 3,
    ACTIONS(1366), 1,
      anon_sym_COMMA,
    ACTIONS(1374), 1,
      anon_sym_RPAREN,
    STATE(611), 1,
      aux_sym_relation_element_repeat1,
  [12992] = 3,
    ACTIONS(1376), 1,
      anon_sym_COMMA,
    ACTIONS(1379), 1,
      anon_sym_RPAREN,
    STATE(615), 1,
      aux_sym_function_args_repeat1,
  [13002] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    ACTIONS(1383), 1,
      aux_sym_from_spec_token1,
    STATE(670), 1,
      aux_sym_select_elements_repeat1,
  [13012] = 2,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
    ACTIONS(1379), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13020] = 3,
    ACTIONS(1244), 1,
      anon_sym_COMMA,
    ACTIONS(1385), 1,
      anon_sym_RBRACK,
    STATE(702), 1,
      aux_sym_assignment_tuple_repeat1,
  [13030] = 3,
    ACTIONS(1387), 1,
      anon_sym_COMMA,
    ACTIONS(1390), 1,
      aux_sym_from_spec_token1,
    STATE(619), 1,
      aux_sym_select_elements_repeat1,
  [13040] = 3,
    ACTIONS(1392), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1394), 1,
      sym_object_name,
    STATE(1357), 1,
      sym_user_name,
  [13050] = 1,
    ACTIONS(1159), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13056] = 3,
    ACTIONS(1321), 1,
      anon_sym_COMMA,
    ACTIONS(1396), 1,
      anon_sym_RPAREN,
    STATE(698), 1,
      aux_sym_expression_list_repeat1,
  [13066] = 3,
    ACTIONS(1268), 1,
      sym_object_name,
    ACTIONS(1398), 1,
      anon_sym_RPAREN,
    STATE(678), 1,
      sym_param,
  [13076] = 3,
    ACTIONS(1400), 1,
      anon_sym_COMMA,
    ACTIONS(1403), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13086] = 3,
    ACTIONS(1405), 1,
      anon_sym_COMMA,
    ACTIONS(1407), 1,
      aux_sym_from_spec_token1,
    STATE(690), 1,
      aux_sym_delete_column_list_repeat1,
  [13096] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    STATE(664), 1,
      sym_column_definition,
    STATE(933), 1,
      sym_column_definition_list,
  [13106] = 3,
    ACTIONS(1409), 1,
      sym_object_name,
    STATE(683), 1,
      sym_column_not_null,
    STATE(766), 1,
      sym_column_not_null_list,
  [13116] = 3,
    ACTIONS(1411), 1,
      anon_sym_COMMA,
    ACTIONS(1414), 1,
      anon_sym_RPAREN,
    STATE(628), 1,
      aux_sym_option_hash_repeat1,
  [13126] = 3,
    ACTIONS(1366), 1,
      anon_sym_COMMA,
    ACTIONS(1416), 1,
      anon_sym_RPAREN,
    STATE(681), 1,
      aux_sym_relation_element_repeat1,
  [13136] = 3,
    ACTIONS(1418), 1,
      anon_sym_COMMA,
    ACTIONS(1421), 1,
      anon_sym_RBRACE,
    STATE(630), 1,
      aux_sym_assignment_map_repeat1,
  [13146] = 3,
    ACTIONS(1423), 1,
      anon_sym_COMMA,
    ACTIONS(1425), 1,
      anon_sym_RPAREN,
    STATE(628), 1,
      aux_sym_option_hash_repeat1,
  [13156] = 2,
    ACTIONS(1145), 1,
      aux_sym_select_element_token1,
    ACTIONS(1141), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13164] = 3,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    ACTIONS(1427), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_create_function_repeat1,
  [13174] = 3,
    ACTIONS(1429), 1,
      anon_sym_COMMA,
    ACTIONS(1432), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      aux_sym_column_definition_list_repeat1,
  [13184] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(918), 1,
      sym_return_mode,
  [13194] = 3,
    ACTIONS(1268), 1,
      sym_object_name,
    ACTIONS(1434), 1,
      anon_sym_RPAREN,
    STATE(671), 1,
      sym_param,
  [13204] = 2,
    ACTIONS(1438), 1,
      anon_sym_LBRACK,
    ACTIONS(1436), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13212] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(1045), 1,
      sym_return_mode,
  [13222] = 3,
    ACTIONS(1440), 1,
      anon_sym_COMMA,
    ACTIONS(1443), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      aux_sym_create_type_repeat1,
  [13232] = 3,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    ACTIONS(1445), 1,
      anon_sym_RPAREN,
    STATE(607), 1,
      aux_sym_create_function_repeat1,
  [13242] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(1040), 1,
      sym_return_mode,
  [13252] = 3,
    ACTIONS(1447), 1,
      sym__string_literal,
    STATE(687), 1,
      sym_replication_list_item,
    STATE(921), 1,
      sym_replication_list,
  [13262] = 3,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    ACTIONS(1449), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_create_function_repeat1,
  [13272] = 3,
    ACTIONS(1268), 1,
      sym_object_name,
    ACTIONS(1451), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      sym_param,
  [13282] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(917), 1,
      sym_return_mode,
  [13292] = 3,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    ACTIONS(1453), 1,
      anon_sym_RPAREN,
    STATE(667), 1,
      aux_sym_create_function_repeat1,
  [13302] = 3,
    ACTIONS(1455), 1,
      anon_sym_COMMA,
    ACTIONS(1458), 1,
      anon_sym_RBRACE,
    STATE(647), 1,
      aux_sym_replication_list_repeat1,
  [13312] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1460), 1,
      anon_sym_RPAREN,
    STATE(662), 1,
      aux_sym_create_type_repeat1,
  [13322] = 3,
    ACTIONS(212), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1462), 1,
      aux_sym_update_token2,
    STATE(1005), 1,
      sym_using_ttl_timestamp,
  [13332] = 3,
    ACTIONS(1405), 1,
      anon_sym_COMMA,
    ACTIONS(1464), 1,
      aux_sym_from_spec_token1,
    STATE(625), 1,
      aux_sym_delete_column_list_repeat1,
  [13342] = 3,
    ACTIONS(1466), 1,
      anon_sym_COMMA,
    ACTIONS(1469), 1,
      anon_sym_GT,
    STATE(651), 1,
      aux_sym_data_type_definition_repeat1,
  [13352] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(912), 1,
      sym_return_mode,
  [13362] = 3,
    ACTIONS(1471), 1,
      anon_sym_COMMA,
    ACTIONS(1474), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_create_function_repeat1,
  [13372] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(977), 1,
      sym_return_mode,
  [13382] = 3,
    ACTIONS(1476), 1,
      anon_sym_COMMA,
    ACTIONS(1478), 1,
      anon_sym_GT,
    STATE(651), 1,
      aux_sym_data_type_definition_repeat1,
  [13392] = 3,
    ACTIONS(1306), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1480), 1,
      anon_sym_DOT,
    STATE(995), 1,
      sym_materialized_view_where,
  [13402] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1482), 1,
      anon_sym_RPAREN,
    STATE(613), 1,
      aux_sym_create_type_repeat1,
  [13412] = 3,
    ACTIONS(1093), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1099), 1,
      aux_sym_insert_values_spec_token1,
    STATE(113), 1,
      sym_insert_values_spec,
  [13422] = 3,
    ACTIONS(1447), 1,
      sym__string_literal,
    STATE(687), 1,
      sym_replication_list_item,
    STATE(1037), 1,
      sym_replication_list,
  [13432] = 3,
    ACTIONS(1484), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1487), 1,
      aux_sym_create_materialized_view_token1,
    STATE(660), 1,
      aux_sym_column_not_null_list_repeat1,
  [13442] = 3,
    ACTIONS(1423), 1,
      anon_sym_COMMA,
    ACTIONS(1489), 1,
      anon_sym_RPAREN,
    STATE(631), 1,
      aux_sym_option_hash_repeat1,
  [13452] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1491), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      aux_sym_create_type_repeat1,
  [13462] = 3,
    ACTIONS(1476), 1,
      anon_sym_COMMA,
    ACTIONS(1493), 1,
      anon_sym_GT,
    STATE(655), 1,
      aux_sym_data_type_definition_repeat1,
  [13472] = 3,
    ACTIONS(1495), 1,
      anon_sym_COMMA,
    ACTIONS(1497), 1,
      anon_sym_RPAREN,
    STATE(583), 1,
      aux_sym_column_definition_list_repeat1,
  [13482] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(1003), 1,
      sym_return_mode,
  [13492] = 3,
    ACTIONS(1240), 1,
      anon_sym_COMMA,
    ACTIONS(1242), 1,
      anon_sym_RPAREN,
    STATE(612), 1,
      aux_sym_function_args_repeat1,
  [13502] = 3,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    ACTIONS(1499), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_create_function_repeat1,
  [13512] = 3,
    ACTIONS(1308), 1,
      anon_sym_COMMA,
    ACTIONS(1501), 1,
      anon_sym_RBRACE,
    STATE(630), 1,
      aux_sym_assignment_map_repeat1,
  [13522] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(889), 1,
      sym_return_mode,
  [13532] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    ACTIONS(1503), 1,
      aux_sym_from_spec_token1,
    STATE(619), 1,
      aux_sym_select_elements_repeat1,
  [13542] = 3,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    ACTIONS(1505), 1,
      anon_sym_RPAREN,
    STATE(593), 1,
      aux_sym_create_function_repeat1,
  [13552] = 3,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    ACTIONS(1507), 1,
      anon_sym_RPAREN,
    STATE(581), 1,
      aux_sym_create_function_repeat1,
  [13562] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1509), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      aux_sym_create_type_repeat1,
  [13572] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(888), 1,
      sym_return_mode,
  [13582] = 3,
    ACTIONS(1157), 1,
      sym_object_name,
    STATE(632), 1,
      sym_function_call,
    STATE(829), 1,
      sym_select_element,
  [13592] = 3,
    ACTIONS(1268), 1,
      sym_object_name,
    ACTIONS(1511), 1,
      anon_sym_RPAREN,
    STATE(646), 1,
      sym_param,
  [13602] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(899), 1,
      sym_return_mode,
  [13612] = 3,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    ACTIONS(1513), 1,
      anon_sym_RPAREN,
    STATE(633), 1,
      aux_sym_create_function_repeat1,
  [13622] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(1008), 1,
      sym_return_mode,
  [13632] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1515), 1,
      anon_sym_RPAREN,
    STATE(716), 1,
      aux_sym_relation_element_repeat2,
  [13642] = 3,
    ACTIONS(1366), 1,
      anon_sym_COMMA,
    ACTIONS(1517), 1,
      anon_sym_RPAREN,
    STATE(606), 1,
      aux_sym_relation_element_repeat1,
  [13652] = 3,
    ACTIONS(1366), 1,
      anon_sym_COMMA,
    ACTIONS(1519), 1,
      anon_sym_RPAREN,
    STATE(695), 1,
      aux_sym_relation_element_repeat1,
  [13662] = 2,
    STATE(710), 1,
      aux_sym_column_not_null_list_repeat1,
    ACTIONS(1521), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13670] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(1151), 1,
      sym_return_mode,
  [13680] = 3,
    ACTIONS(1523), 1,
      anon_sym_COMMA,
    ACTIONS(1526), 1,
      aux_sym_where_spec_token1,
    STATE(685), 1,
      aux_sym_update_repeat1,
  [13690] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1515), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [13700] = 3,
    ACTIONS(1356), 1,
      anon_sym_COMMA,
    ACTIONS(1528), 1,
      anon_sym_RBRACE,
    STATE(609), 1,
      aux_sym_replication_list_repeat1,
  [13710] = 3,
    ACTIONS(1530), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1532), 1,
      sym_object_name,
    STATE(1370), 1,
      sym_keyspace_name,
  [13720] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(1061), 1,
      sym_return_mode,
  [13730] = 3,
    ACTIONS(1534), 1,
      anon_sym_COMMA,
    ACTIONS(1537), 1,
      aux_sym_from_spec_token1,
    STATE(690), 1,
      aux_sym_delete_column_list_repeat1,
  [13740] = 1,
    ACTIONS(1539), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13746] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(1098), 1,
      sym_return_mode,
  [13756] = 3,
    ACTIONS(1244), 1,
      anon_sym_COMMA,
    ACTIONS(1541), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      aux_sym_assignment_tuple_repeat1,
  [13766] = 3,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    ACTIONS(1543), 1,
      anon_sym_RPAREN,
    STATE(717), 1,
      aux_sym_create_function_repeat1,
  [13776] = 3,
    ACTIONS(1366), 1,
      anon_sym_COMMA,
    ACTIONS(1545), 1,
      anon_sym_RPAREN,
    STATE(606), 1,
      aux_sym_relation_element_repeat1,
  [13786] = 3,
    ACTIONS(1547), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1549), 1,
      sym_object_name,
    STATE(1363), 1,
      sym_trigger_name,
  [13796] = 3,
    ACTIONS(1343), 1,
      anon_sym_COMMA,
    ACTIONS(1551), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13806] = 3,
    ACTIONS(1553), 1,
      anon_sym_COMMA,
    ACTIONS(1556), 1,
      anon_sym_RPAREN,
    STATE(698), 1,
      aux_sym_expression_list_repeat1,
  [13816] = 3,
    ACTIONS(1244), 1,
      anon_sym_COMMA,
    ACTIONS(1558), 1,
      anon_sym_RBRACE,
    STATE(512), 1,
      aux_sym_assignment_tuple_repeat1,
  [13826] = 3,
    ACTIONS(1268), 1,
      sym_object_name,
    ACTIONS(1560), 1,
      anon_sym_RPAREN,
    STATE(694), 1,
      sym_param,
  [13836] = 3,
    ACTIONS(1306), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1562), 1,
      anon_sym_DOT,
    STATE(1166), 1,
      sym_materialized_view_where,
  [13846] = 3,
    ACTIONS(1244), 1,
      anon_sym_COMMA,
    ACTIONS(1564), 1,
      anon_sym_RBRACK,
    STATE(512), 1,
      aux_sym_assignment_tuple_repeat1,
  [13856] = 3,
    ACTIONS(1244), 1,
      anon_sym_COMMA,
    ACTIONS(1566), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      aux_sym_assignment_tuple_repeat1,
  [13866] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1566), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [13876] = 3,
    ACTIONS(1093), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1099), 1,
      aux_sym_insert_values_spec_token1,
    STATE(111), 1,
      sym_insert_values_spec,
  [13886] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1566), 1,
      anon_sym_RPAREN,
    STATE(595), 1,
      aux_sym_relation_element_repeat2,
  [13896] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(1181), 1,
      sym_return_mode,
  [13906] = 3,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    ACTIONS(1568), 1,
      anon_sym_RPAREN,
    STATE(643), 1,
      aux_sym_create_function_repeat1,
  [13916] = 3,
    ACTIONS(1570), 1,
      sym__string_literal,
    ACTIONS(1572), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1574), 1,
      sym_object_name,
  [13926] = 2,
    STATE(660), 1,
      aux_sym_column_not_null_list_repeat1,
    ACTIONS(1576), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13934] = 3,
    ACTIONS(1447), 1,
      sym__string_literal,
    STATE(687), 1,
      sym_replication_list_item,
    STATE(877), 1,
      sym_replication_list,
  [13944] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(1176), 1,
      sym_return_mode,
  [13954] = 3,
    ACTIONS(1302), 1,
      sym_object_name,
    STATE(664), 1,
      sym_column_definition,
    STATE(1174), 1,
      sym_column_definition_list,
  [13964] = 3,
    ACTIONS(1306), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1578), 1,
      anon_sym_DOT,
    STATE(1116), 1,
      sym_materialized_view_where,
  [13974] = 3,
    ACTIONS(1394), 1,
      sym_object_name,
    ACTIONS(1580), 1,
      aux_sym_delete_statement_token2,
    STATE(266), 1,
      sym_user_name,
  [13984] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(1582), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_relation_element_repeat2,
  [13994] = 3,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    ACTIONS(1584), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_create_function_repeat1,
  [14004] = 3,
    ACTIONS(1270), 1,
      aux_sym_create_function_token1,
    ACTIONS(1272), 1,
      aux_sym_return_mode_token1,
    STATE(967), 1,
      sym_return_mode,
  [14014] = 3,
    ACTIONS(1093), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1099), 1,
      aux_sym_insert_values_spec_token1,
    STATE(104), 1,
      sym_insert_values_spec,
  [14024] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1586), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      aux_sym_create_type_repeat1,
  [14034] = 2,
    ACTIONS(1588), 1,
      anon_sym_DOT,
    ACTIONS(1590), 1,
      anon_sym_LPAREN,
  [14041] = 2,
    ACTIONS(1592), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1594), 1,
      sym_object_name,
  [14048] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(1331), 1,
      sym_column_list,
  [14055] = 2,
    ACTIONS(1598), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1600), 1,
      sym_object_name,
  [14062] = 2,
    ACTIONS(1602), 1,
      sym_object_name,
    STATE(524), 1,
      sym_assignment_element,
  [14069] = 2,
    ACTIONS(1604), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1606), 1,
      sym_object_name,
  [14076] = 2,
    ACTIONS(1608), 1,
      anon_sym_DOT,
    ACTIONS(1610), 1,
      anon_sym_LPAREN,
  [14083] = 2,
    ACTIONS(1612), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1614), 1,
      sym_object_name,
  [14090] = 2,
    ACTIONS(1268), 1,
      sym_object_name,
    STATE(801), 1,
      sym_param,
  [14097] = 2,
    ACTIONS(1602), 1,
      sym_object_name,
    STATE(549), 1,
      sym_assignment_element,
  [14104] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(1113), 1,
      sym_column_list,
  [14111] = 2,
    ACTIONS(1616), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1618), 1,
      sym_object_name,
  [14118] = 2,
    ACTIONS(1620), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1622), 1,
      sym_object_name,
  [14125] = 2,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(600), 1,
      sym_assignment_tuple,
  [14132] = 2,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_assignment_tuple,
  [14139] = 2,
    ACTIONS(1624), 1,
      sym_object_name,
    STATE(1173), 1,
      sym_table_name,
  [14146] = 2,
    ACTIONS(1626), 1,
      anon_sym_DOT,
    ACTIONS(1628), 1,
      aux_sym_create_index_token3,
  [14153] = 2,
    ACTIONS(1630), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1632), 1,
      sym_object_name,
  [14160] = 1,
    ACTIONS(1469), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14165] = 2,
    ACTIONS(1634), 1,
      sym_object_name,
    STATE(1041), 1,
      sym_user_name,
  [14172] = 2,
    ACTIONS(1306), 1,
      aux_sym_where_spec_token1,
    STATE(1328), 1,
      sym_materialized_view_where,
  [14179] = 2,
    ACTIONS(1409), 1,
      sym_object_name,
    STATE(771), 1,
      sym_column_not_null,
  [14186] = 2,
    ACTIONS(1636), 1,
      sym_object_name,
    STATE(839), 1,
      sym_init_cond_hash_item,
  [14193] = 2,
    ACTIONS(1638), 1,
      sym_object_name,
    STATE(1334), 1,
      sym_keyspace_name,
  [14200] = 2,
    ACTIONS(1204), 1,
      aux_sym_ttl_token1,
    STATE(225), 1,
      sym_ttl,
  [14207] = 2,
    ACTIONS(1602), 1,
      sym_object_name,
    STATE(552), 1,
      sym_assignment_element,
  [14214] = 2,
    ACTIONS(1640), 1,
      sym_object_name,
    STATE(1022), 1,
      sym_trigger_name,
  [14221] = 2,
    ACTIONS(1202), 1,
      aux_sym_timestamp_token1,
    STATE(225), 1,
      sym_timestamp,
  [14228] = 1,
    ACTIONS(1642), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14233] = 2,
    ACTIONS(1634), 1,
      sym_object_name,
    STATE(1332), 1,
      sym_user_name,
  [14240] = 1,
    ACTIONS(1644), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [14245] = 1,
    ACTIONS(1556), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14250] = 2,
    ACTIONS(1602), 1,
      sym_object_name,
    STATE(762), 1,
      sym_assignment_element,
  [14257] = 1,
    ACTIONS(1226), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14262] = 2,
    ACTIONS(1646), 1,
      sym_object_name,
    STATE(1193), 1,
      sym_clustering_key_list,
  [14269] = 2,
    ACTIONS(1648), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1650), 1,
      sym_object_name,
  [14276] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(1180), 1,
      sym_column_list,
  [14283] = 2,
    ACTIONS(1306), 1,
      aux_sym_where_spec_token1,
    STATE(1117), 1,
      sym_materialized_view_where,
  [14290] = 1,
    ACTIONS(1652), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14295] = 2,
    ACTIONS(1654), 1,
      aux_sym_durable_writes_token1,
    STATE(292), 1,
      sym_durable_writes,
  [14302] = 2,
    ACTIONS(1656), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1658), 1,
      sym_object_name,
  [14309] = 1,
    ACTIONS(1526), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14314] = 1,
    ACTIONS(1660), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14319] = 2,
    ACTIONS(1662), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1664), 1,
      sym_object_name,
  [14326] = 2,
    ACTIONS(1666), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1668), 1,
      sym_object_name,
  [14333] = 2,
    ACTIONS(1670), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1672), 1,
      aux_sym_create_materialized_view_token1,
  [14340] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(1372), 1,
      sym_column_list,
  [14347] = 1,
    ACTIONS(1537), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14352] = 2,
    ACTIONS(1306), 1,
      aux_sym_where_spec_token1,
    STATE(1214), 1,
      sym_materialized_view_where,
  [14359] = 2,
    ACTIONS(1638), 1,
      sym_object_name,
    STATE(1066), 1,
      sym_keyspace_name,
  [14366] = 1,
    ACTIONS(1487), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [14371] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(905), 1,
      sym_column_list,
  [14378] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(169), 1,
      sym_where_spec,
  [14385] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(1393), 1,
      sym_column_list,
  [14392] = 2,
    ACTIONS(1674), 1,
      aux_sym_from_spec_token1,
    STATE(70), 1,
      sym_from_spec,
  [14399] = 2,
    ACTIONS(1602), 1,
      sym_object_name,
    STATE(539), 1,
      sym_assignment_element,
  [14406] = 2,
    ACTIONS(1676), 1,
      aux_sym_role_with_options_token1,
    STATE(107), 1,
      sym_user_password,
  [14413] = 2,
    ACTIONS(1654), 1,
      aux_sym_durable_writes_token1,
    STATE(341), 1,
      sym_durable_writes,
  [14420] = 1,
    ACTIONS(1678), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14425] = 1,
    ACTIONS(1403), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14430] = 2,
    ACTIONS(1680), 1,
      sym__string_literal,
    STATE(323), 1,
      sym_trigger_class,
  [14437] = 2,
    ACTIONS(1682), 1,
      sym_object_name,
    STATE(1033), 1,
      sym_partition_key_list,
  [14444] = 2,
    ACTIONS(1684), 1,
      anon_sym_DOT,
    ACTIONS(1686), 1,
      anon_sym_LPAREN,
  [14451] = 2,
    ACTIONS(1688), 1,
      anon_sym_DOT,
    ACTIONS(1690), 1,
      aux_sym_select_element_token1,
  [14458] = 2,
    ACTIONS(1692), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1694), 1,
      sym_object_name,
  [14465] = 1,
    ACTIONS(1696), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14470] = 2,
    ACTIONS(1698), 1,
      anon_sym_COMMA,
    ACTIONS(1700), 1,
      anon_sym_RPAREN,
  [14477] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(204), 1,
      sym_where_spec,
  [14484] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(1373), 1,
      sym_column_list,
  [14491] = 2,
    ACTIONS(1167), 1,
      anon_sym_LPAREN,
    STATE(242), 1,
      sym_option_hash,
  [14498] = 2,
    ACTIONS(1702), 1,
      sym__string_literal,
    STATE(661), 1,
      sym_option_hash_item,
  [14505] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(991), 1,
      sym_column_list,
  [14512] = 2,
    ACTIONS(1704), 1,
      anon_sym_DOT,
    ACTIONS(1706), 1,
      aux_sym_select_element_token1,
  [14519] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(1218), 1,
      sym_column_list,
  [14526] = 1,
    ACTIONS(1708), 2,
      sym__string_literal,
      sym__decimal_literal,
  [14531] = 1,
    ACTIONS(1710), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14536] = 2,
    ACTIONS(1302), 1,
      sym_object_name,
    STATE(814), 1,
      sym_column_definition,
  [14543] = 2,
    ACTIONS(1712), 1,
      anon_sym_DOT,
    ACTIONS(1714), 1,
      anon_sym_LPAREN,
  [14550] = 1,
    ACTIONS(1716), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14555] = 2,
    ACTIONS(1680), 1,
      sym__string_literal,
    STATE(360), 1,
      sym_trigger_class,
  [14562] = 1,
    ACTIONS(1474), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14567] = 2,
    ACTIONS(1674), 1,
      aux_sym_from_spec_token1,
    STATE(562), 1,
      sym_from_spec,
  [14574] = 1,
    ACTIONS(1458), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14579] = 2,
    ACTIONS(1718), 1,
      sym__string_literal,
    ACTIONS(1720), 1,
      sym_object_name,
  [14586] = 2,
    ACTIONS(1654), 1,
      aux_sym_durable_writes_token1,
    STATE(259), 1,
      sym_durable_writes,
  [14593] = 2,
    ACTIONS(1202), 1,
      aux_sym_timestamp_token1,
    STATE(554), 1,
      sym_timestamp,
  [14600] = 2,
    ACTIONS(120), 1,
      aux_sym_where_spec_token1,
    STATE(192), 1,
      sym_where_spec,
  [14607] = 2,
    ACTIONS(1722), 1,
      anon_sym_DOT,
    ACTIONS(1724), 1,
      anon_sym_LPAREN,
  [14614] = 2,
    ACTIONS(1624), 1,
      sym_object_name,
    STATE(929), 1,
      sym_table_name,
  [14621] = 2,
    ACTIONS(1624), 1,
      sym_object_name,
    STATE(87), 1,
      sym_table_name,
  [14628] = 1,
    ACTIONS(1726), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14633] = 1,
    ACTIONS(1414), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14638] = 2,
    ACTIONS(1728), 1,
      anon_sym_DOT,
    ACTIONS(1730), 1,
      anon_sym_LPAREN,
  [14645] = 1,
    ACTIONS(1432), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14650] = 2,
    ACTIONS(1602), 1,
      sym_object_name,
    STATE(570), 1,
      sym_assignment_element,
  [14657] = 2,
    ACTIONS(1732), 1,
      sym_object_name,
    STATE(768), 1,
      sym_delete_column_item,
  [14664] = 2,
    ACTIONS(1674), 1,
      aux_sym_from_spec_token1,
    STATE(72), 1,
      sym_from_spec,
  [14671] = 2,
    ACTIONS(1702), 1,
      sym__string_literal,
    STATE(812), 1,
      sym_option_hash_item,
  [14678] = 1,
    ACTIONS(1734), 2,
      sym__string_literal,
      sym__decimal_literal,
  [14683] = 2,
    ACTIONS(1736), 1,
      anon_sym_DOT,
    ACTIONS(1738), 1,
      anon_sym_LPAREN,
  [14690] = 1,
    ACTIONS(1740), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14695] = 2,
    ACTIONS(1676), 1,
      aux_sym_role_with_options_token1,
    STATE(114), 1,
      sym_user_password,
  [14702] = 2,
    ACTIONS(1602), 1,
      sym_object_name,
    STATE(543), 1,
      sym_assignment_element,
  [14709] = 1,
    ACTIONS(1742), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14714] = 2,
    ACTIONS(1744), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1746), 1,
      sym_object_name,
  [14721] = 2,
    ACTIONS(1748), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1750), 1,
      sym_object_name,
  [14728] = 2,
    ACTIONS(1646), 1,
      sym_object_name,
    STATE(1094), 1,
      sym_clustering_key_list,
  [14735] = 1,
    ACTIONS(1379), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14740] = 1,
    ACTIONS(1390), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14745] = 1,
    ACTIONS(1752), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14750] = 2,
    ACTIONS(1447), 1,
      sym__string_literal,
    STATE(803), 1,
      sym_replication_list_item,
  [14757] = 2,
    ACTIONS(1754), 1,
      sym__string_literal,
    ACTIONS(1756), 1,
      sym_object_name,
  [14764] = 2,
    ACTIONS(1758), 1,
      anon_sym_DOT,
    ACTIONS(1760), 1,
      anon_sym_LPAREN,
  [14771] = 2,
    ACTIONS(1674), 1,
      aux_sym_from_spec_token1,
    STATE(73), 1,
      sym_from_spec,
  [14778] = 2,
    ACTIONS(1624), 1,
      sym_object_name,
    STATE(1299), 1,
      sym_table_name,
  [14785] = 2,
    ACTIONS(1762), 1,
      sym__string_literal,
    ACTIONS(1764), 1,
      sym_object_name,
  [14792] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(1298), 1,
      sym_column_list,
  [14799] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(1297), 1,
      sym_column_list,
  [14806] = 1,
    ACTIONS(1319), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14811] = 1,
    ACTIONS(1766), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14816] = 2,
    ACTIONS(1674), 1,
      aux_sym_from_spec_token1,
    STATE(522), 1,
      sym_from_spec,
  [14823] = 2,
    ACTIONS(1768), 1,
      sym_object_name,
    STATE(238), 1,
      sym_if_condition,
  [14830] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(959), 1,
      sym_column_list,
  [14837] = 2,
    ACTIONS(1602), 1,
      sym_object_name,
    STATE(567), 1,
      sym_assignment_element,
  [14844] = 2,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_assignment_tuple,
  [14851] = 1,
    ACTIONS(1350), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14856] = 2,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_assignment_tuple,
  [14863] = 2,
    ACTIONS(1770), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1772), 1,
      sym_object_name,
  [14870] = 2,
    ACTIONS(1774), 1,
      sym_object_name,
    STATE(246), 1,
      sym_role_name,
  [14877] = 2,
    ACTIONS(1676), 1,
      aux_sym_role_with_options_token1,
    STATE(126), 1,
      sym_user_password,
  [14884] = 2,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(680), 1,
      sym_assignment_tuple,
  [14891] = 2,
    ACTIONS(1776), 1,
      anon_sym_DOT,
    ACTIONS(1778), 1,
      anon_sym_LPAREN,
  [14898] = 2,
    ACTIONS(1634), 1,
      sym_object_name,
    STATE(389), 1,
      sym_user_name,
  [14905] = 2,
    ACTIONS(1780), 1,
      anon_sym_DOT,
    ACTIONS(1782), 1,
      aux_sym_create_index_token3,
  [14912] = 1,
    ACTIONS(1784), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [14917] = 2,
    ACTIONS(1786), 1,
      sym_object_name,
    STATE(419), 1,
      sym_alter_table_column_definition,
  [14924] = 2,
    ACTIONS(1602), 1,
      sym_object_name,
    STATE(538), 1,
      sym_assignment_element,
  [14931] = 2,
    ACTIONS(1788), 1,
      aux_sym_truncate_token2,
    ACTIONS(1790), 1,
      sym_object_name,
  [14938] = 1,
    ACTIONS(1792), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14943] = 2,
    ACTIONS(1794), 1,
      anon_sym_DOT,
    ACTIONS(1796), 1,
      anon_sym_LPAREN,
  [14950] = 2,
    ACTIONS(1798), 1,
      anon_sym_DOT,
    ACTIONS(1800), 1,
      anon_sym_LPAREN,
  [14957] = 2,
    ACTIONS(1802), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1804), 1,
      sym_object_name,
  [14964] = 2,
    ACTIONS(1306), 1,
      aux_sym_where_spec_token1,
    STATE(1253), 1,
      sym_materialized_view_where,
  [14971] = 2,
    ACTIONS(1335), 1,
      sym_object_name,
    STATE(216), 1,
      sym_alter_type_rename_item,
  [14978] = 2,
    ACTIONS(1806), 1,
      anon_sym_DOT,
    ACTIONS(1808), 1,
      aux_sym_using_timestamp_spec_token1,
  [14985] = 1,
    ACTIONS(1810), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [14990] = 2,
    ACTIONS(448), 1,
      aux_sym_clustering_order_token1,
    STATE(385), 1,
      sym_clustering_order,
  [14997] = 2,
    ACTIONS(1812), 1,
      anon_sym_EQ,
    ACTIONS(1814), 1,
      anon_sym_LBRACK,
  [15004] = 2,
    ACTIONS(1624), 1,
      sym_object_name,
    STATE(983), 1,
      sym_table_name,
  [15011] = 2,
    ACTIONS(1596), 1,
      sym_object_name,
    STATE(1356), 1,
      sym_column_list,
  [15018] = 2,
    ACTIONS(1816), 1,
      anon_sym_DOT,
    ACTIONS(1818), 1,
      anon_sym_LPAREN,
  [15025] = 2,
    ACTIONS(1820), 1,
      aux_sym_resource_token5,
    ACTIONS(1822), 1,
      aux_sym_drop_aggregate_token1,
  [15032] = 1,
    ACTIONS(1824), 2,
      sym__string_literal,
      sym__float_literal,
  [15037] = 1,
    ACTIONS(1826), 1,
      anon_sym_LPAREN,
  [15041] = 1,
    ACTIONS(1828), 1,
      sym_object_name,
  [15045] = 1,
    ACTIONS(1830), 1,
      sym_object_name,
  [15049] = 1,
    ACTIONS(1832), 1,
      anon_sym_RBRACE,
  [15053] = 1,
    ACTIONS(1834), 1,
      aux_sym_insert_statement_token3,
  [15057] = 1,
    ACTIONS(1836), 1,
      aux_sym_delete_statement_token3,
  [15061] = 1,
    ACTIONS(1838), 1,
      aux_sym_select_statement_token5,
  [15065] = 1,
    ACTIONS(1840), 1,
      aux_sym_delete_statement_token3,
  [15069] = 1,
    ACTIONS(1842), 1,
      aux_sym_order_spec_token2,
  [15073] = 1,
    ACTIONS(1844), 1,
      anon_sym_RPAREN,
  [15077] = 1,
    ACTIONS(1846), 1,
      anon_sym_RPAREN,
  [15081] = 1,
    ACTIONS(1848), 1,
      anon_sym_RPAREN,
  [15085] = 1,
    ACTIONS(1850), 1,
      anon_sym_RPAREN,
  [15089] = 1,
    ACTIONS(1852), 1,
      anon_sym_LBRACE,
  [15093] = 1,
    ACTIONS(1854), 1,
      aux_sym_create_function_token1,
  [15097] = 1,
    ACTIONS(1856), 1,
      aux_sym_create_function_token1,
  [15101] = 1,
    ACTIONS(1858), 1,
      aux_sym_return_mode_token2,
  [15105] = 1,
    ACTIONS(1860), 1,
      aux_sym_create_function_token1,
  [15109] = 1,
    ACTIONS(1862), 1,
      sym_object_name,
  [15113] = 1,
    ACTIONS(1864), 1,
      aux_sym_create_function_token2,
  [15117] = 1,
    ACTIONS(1866), 1,
      anon_sym_COLON,
  [15121] = 1,
    ACTIONS(1868), 1,
      sym_object_name,
  [15125] = 1,
    ACTIONS(1870), 1,
      aux_sym_create_aggregate_token3,
  [15129] = 1,
    ACTIONS(1872), 1,
      aux_sym_create_aggregate_token3,
  [15133] = 1,
    ACTIONS(1874), 1,
      sym_object_name,
  [15137] = 1,
    ACTIONS(1876), 1,
      aux_sym_create_function_token1,
  [15141] = 1,
    ACTIONS(1878), 1,
      anon_sym_LPAREN,
  [15145] = 1,
    ACTIONS(1880), 1,
      sym_object_name,
  [15149] = 1,
    ACTIONS(1882), 1,
      aux_sym_select_statement_token1,
  [15153] = 1,
    ACTIONS(1884), 1,
      aux_sym_select_element_token1,
  [15157] = 1,
    ACTIONS(1886), 1,
      sym_object_name,
  [15161] = 1,
    ACTIONS(1888), 1,
      aux_sym_from_spec_token1,
  [15165] = 1,
    ACTIONS(1890), 1,
      aux_sym_create_aggregate_token4,
  [15169] = 1,
    ACTIONS(1892), 1,
      sym_object_name,
  [15173] = 1,
    ACTIONS(1894), 1,
      aux_sym_create_aggregate_token3,
  [15177] = 1,
    ACTIONS(1896), 1,
      anon_sym_RPAREN,
  [15181] = 1,
    ACTIONS(1898), 1,
      anon_sym_LPAREN,
  [15185] = 1,
    ACTIONS(1900), 1,
      anon_sym_COLON,
  [15189] = 1,
    ACTIONS(1902), 1,
      aux_sym_create_function_token1,
  [15193] = 1,
    ACTIONS(1904), 1,
      sym_object_name,
  [15197] = 1,
    ACTIONS(1906), 1,
      aux_sym_create_function_token2,
  [15201] = 1,
    ACTIONS(1908), 1,
      aux_sym_return_mode_token2,
  [15205] = 1,
    ACTIONS(1910), 1,
      aux_sym_constant_token2,
  [15209] = 1,
    ACTIONS(1912), 1,
      aux_sym_create_function_token1,
  [15213] = 1,
    ACTIONS(1914), 1,
      aux_sym_create_function_token1,
  [15217] = 1,
    ACTIONS(1916), 1,
      anon_sym_LPAREN,
  [15221] = 1,
    ACTIONS(1918), 1,
      sym_object_name,
  [15225] = 1,
    ACTIONS(1920), 1,
      anon_sym_RBRACE,
  [15229] = 1,
    ACTIONS(1922), 1,
      anon_sym_RPAREN,
  [15233] = 1,
    ACTIONS(1924), 1,
      sym_object_name,
  [15237] = 1,
    ACTIONS(1926), 1,
      aux_sym_create_index_token3,
  [15241] = 1,
    ACTIONS(1928), 1,
      anon_sym_EQ,
  [15245] = 1,
    ACTIONS(1930), 1,
      anon_sym_RPAREN,
  [15249] = 1,
    ACTIONS(1932), 1,
      anon_sym_RPAREN,
  [15253] = 1,
    ACTIONS(1934), 1,
      anon_sym_RPAREN,
  [15257] = 1,
    ACTIONS(1936), 1,
      anon_sym_LPAREN,
  [15261] = 1,
    ACTIONS(1938), 1,
      anon_sym_RPAREN,
  [15265] = 1,
    ACTIONS(1940), 1,
      anon_sym_LPAREN,
  [15269] = 1,
    ACTIONS(1942), 1,
      aux_sym_order_spec_token1,
  [15273] = 1,
    ACTIONS(1944), 1,
      anon_sym_RPAREN,
  [15277] = 1,
    ACTIONS(1946), 1,
      aux_sym_insert_statement_token3,
  [15281] = 1,
    ACTIONS(1948), 1,
      anon_sym_LPAREN,
  [15285] = 1,
    ACTIONS(1950), 1,
      aux_sym_delete_statement_token3,
  [15289] = 1,
    ACTIONS(1952), 1,
      aux_sym_delete_statement_token3,
  [15293] = 1,
    ACTIONS(1954), 1,
      aux_sym_insert_statement_token3,
  [15297] = 1,
    ACTIONS(1956), 1,
      anon_sym_LPAREN,
  [15301] = 1,
    ACTIONS(1958), 1,
      aux_sym_select_statement_token5,
  [15305] = 1,
    ACTIONS(1960), 1,
      aux_sym_delete_statement_token3,
  [15309] = 1,
    ACTIONS(1962), 1,
      aux_sym_insert_statement_token3,
  [15313] = 1,
    ACTIONS(1964), 1,
      sym_object_name,
  [15317] = 1,
    ACTIONS(1966), 1,
      sym_object_name,
  [15321] = 1,
    ACTIONS(1968), 1,
      anon_sym_EQ,
  [15325] = 1,
    ACTIONS(1105), 1,
      sym_object_name,
  [15329] = 1,
    ACTIONS(1970), 1,
      aux_sym_create_index_token3,
  [15333] = 1,
    ACTIONS(1972), 1,
      sym_object_name,
  [15337] = 1,
    ACTIONS(1974), 1,
      anon_sym_RPAREN,
  [15341] = 1,
    ACTIONS(1976), 1,
      anon_sym_LPAREN,
  [15345] = 1,
    ACTIONS(1978), 1,
      sym_object_name,
  [15349] = 1,
    ACTIONS(1980), 1,
      anon_sym_LPAREN,
  [15353] = 1,
    ACTIONS(1982), 1,
      sym_object_name,
  [15357] = 1,
    ACTIONS(1984), 1,
      sym_object_name,
  [15361] = 1,
    ACTIONS(1986), 1,
      sym_object_name,
  [15365] = 1,
    ACTIONS(1988), 1,
      anon_sym_RPAREN,
  [15369] = 1,
    ACTIONS(1990), 1,
      sym_object_name,
  [15373] = 1,
    ACTIONS(1992), 1,
      anon_sym_LPAREN,
  [15377] = 1,
    ACTIONS(1994), 1,
      aux_sym_from_spec_token1,
  [15381] = 1,
    ACTIONS(1996), 1,
      aux_sym_select_statement_token1,
  [15385] = 1,
    ACTIONS(1998), 1,
      anon_sym_RPAREN,
  [15389] = 1,
    ACTIONS(2000), 1,
      anon_sym_RPAREN,
  [15393] = 1,
    ACTIONS(2002), 1,
      sym_object_name,
  [15397] = 1,
    ACTIONS(2004), 1,
      anon_sym_RPAREN,
  [15401] = 1,
    ACTIONS(2006), 1,
      anon_sym_RPAREN,
  [15405] = 1,
    ACTIONS(2008), 1,
      sym_object_name,
  [15409] = 1,
    ACTIONS(2010), 1,
      aux_sym_create_function_token1,
  [15413] = 1,
    ACTIONS(2012), 1,
      aux_sym_constant_token2,
  [15417] = 1,
    ACTIONS(2014), 1,
      sym_object_name,
  [15421] = 1,
    ACTIONS(2016), 1,
      sym_object_name,
  [15425] = 1,
    ACTIONS(2018), 1,
      aux_sym_create_keyspace_token1,
  [15429] = 1,
    ACTIONS(2020), 1,
      anon_sym_RPAREN,
  [15433] = 1,
    ACTIONS(2022), 1,
      aux_sym_create_function_token1,
  [15437] = 1,
    ACTIONS(2024), 1,
      sym_object_name,
  [15441] = 1,
    ACTIONS(2026), 1,
      aux_sym_create_function_token2,
  [15445] = 1,
    ACTIONS(2028), 1,
      sym_object_name,
  [15449] = 1,
    ACTIONS(2030), 1,
      aux_sym_create_function_token1,
  [15453] = 1,
    ACTIONS(2032), 1,
      aux_sym_create_function_token1,
  [15457] = 1,
    ACTIONS(2034), 1,
      aux_sym_select_element_token1,
  [15461] = 1,
    ACTIONS(2036), 1,
      sym_object_name,
  [15465] = 1,
    ACTIONS(2038), 1,
      aux_sym_create_function_token2,
  [15469] = 1,
    ACTIONS(2040), 1,
      sym_object_name,
  [15473] = 1,
    ACTIONS(2042), 1,
      anon_sym_LPAREN,
  [15477] = 1,
    ACTIONS(2044), 1,
      anon_sym_RPAREN,
  [15481] = 1,
    ACTIONS(2046), 1,
      aux_sym_relation_contains_key_token2,
  [15485] = 1,
    ACTIONS(2048), 1,
      anon_sym_RPAREN,
  [15489] = 1,
    ACTIONS(2050), 1,
      sym_object_name,
  [15493] = 1,
    ACTIONS(2052), 1,
      aux_sym_create_aggregate_token4,
  [15497] = 1,
    ACTIONS(2054), 1,
      aux_sym_create_aggregate_token5,
  [15501] = 1,
    ACTIONS(2056), 1,
      aux_sym_select_statement_token1,
  [15505] = 1,
    ACTIONS(2058), 1,
      aux_sym_from_spec_token1,
  [15509] = 1,
    ACTIONS(2060), 1,
      sym_object_name,
  [15513] = 1,
    ACTIONS(2062), 1,
      sym_object_name,
  [15517] = 1,
    ACTIONS(2064), 1,
      aux_sym_relation_contains_key_token2,
  [15521] = 1,
    ACTIONS(2066), 1,
      aux_sym_create_materialized_view_token1,
  [15525] = 1,
    ACTIONS(2068), 1,
      anon_sym_RPAREN,
  [15529] = 1,
    ACTIONS(2070), 1,
      sym_object_name,
  [15533] = 1,
    ACTIONS(2072), 1,
      aux_sym_delete_statement_token3,
  [15537] = 1,
    ACTIONS(2074), 1,
      aux_sym_insert_statement_token3,
  [15541] = 1,
    ACTIONS(2076), 1,
      anon_sym_LPAREN,
  [15545] = 1,
    ACTIONS(2078), 1,
      anon_sym_RPAREN,
  [15549] = 1,
    ACTIONS(2080), 1,
      anon_sym_LPAREN,
  [15553] = 1,
    ACTIONS(2082), 1,
      aux_sym_create_function_token1,
  [15557] = 1,
    ACTIONS(2084), 1,
      aux_sym_select_statement_token5,
  [15561] = 1,
    ACTIONS(2086), 1,
      aux_sym_update_token2,
  [15565] = 1,
    ACTIONS(2088), 1,
      aux_sym_create_function_token2,
  [15569] = 1,
    ACTIONS(2090), 1,
      aux_sym_insert_statement_token3,
  [15573] = 1,
    ACTIONS(2092), 1,
      aux_sym_create_function_token1,
  [15577] = 1,
    ACTIONS(2094), 1,
      anon_sym_LPAREN,
  [15581] = 1,
    ACTIONS(2096), 1,
      anon_sym_RPAREN,
  [15585] = 1,
    ACTIONS(2098), 1,
      aux_sym_create_aggregate_token3,
  [15589] = 1,
    ACTIONS(2100), 1,
      aux_sym_create_aggregate_token4,
  [15593] = 1,
    ACTIONS(2102), 1,
      sym_object_name,
  [15597] = 1,
    ACTIONS(2104), 1,
      sym_object_name,
  [15601] = 1,
    ACTIONS(2106), 1,
      anon_sym_LBRACE,
  [15605] = 1,
    ACTIONS(2108), 1,
      sym_object_name,
  [15609] = 1,
    ACTIONS(2110), 1,
      aux_sym_delete_statement_token3,
  [15613] = 1,
    ACTIONS(2112), 1,
      sym_object_name,
  [15617] = 1,
    ACTIONS(2114), 1,
      aux_sym_resource_token2,
  [15621] = 1,
    ACTIONS(2116), 1,
      sym_object_name,
  [15625] = 1,
    ACTIONS(2118), 1,
      anon_sym_RBRACK,
  [15629] = 1,
    ACTIONS(2120), 1,
      aux_sym_using_timestamp_spec_token1,
  [15633] = 1,
    ACTIONS(2122), 1,
      sym_object_name,
  [15637] = 1,
    ACTIONS(2124), 1,
      sym_object_name,
  [15641] = 1,
    ACTIONS(2126), 1,
      sym_object_name,
  [15645] = 1,
    ACTIONS(2128), 1,
      sym_object_name,
  [15649] = 1,
    ACTIONS(2130), 1,
      anon_sym_COLON,
  [15653] = 1,
    ACTIONS(2132), 1,
      sym_object_name,
  [15657] = 1,
    ACTIONS(2134), 1,
      sym_object_name,
  [15661] = 1,
    ACTIONS(2136), 1,
      sym_object_name,
  [15665] = 1,
    ACTIONS(2138), 1,
      sym_object_name,
  [15669] = 1,
    ACTIONS(2140), 1,
      sym_object_name,
  [15673] = 1,
    ACTIONS(2142), 1,
      anon_sym_RPAREN,
  [15677] = 1,
    ACTIONS(2144), 1,
      aux_sym_delete_statement_token3,
  [15681] = 1,
    ACTIONS(2146), 1,
      anon_sym_RPAREN,
  [15685] = 1,
    ACTIONS(2148), 1,
      sym_object_name,
  [15689] = 1,
    ACTIONS(2150), 1,
      anon_sym_RBRACE,
  [15693] = 1,
    ACTIONS(2152), 1,
      anon_sym_EQ,
  [15697] = 1,
    ACTIONS(2154), 1,
      aux_sym_delete_statement_token3,
  [15701] = 1,
    ACTIONS(2156), 1,
      aux_sym_create_function_token1,
  [15705] = 1,
    ACTIONS(2158), 1,
      aux_sym_create_materialized_view_token2,
  [15709] = 1,
    ACTIONS(2160), 1,
      sym_object_name,
  [15713] = 1,
    ACTIONS(2162), 1,
      aux_sym_create_function_token2,
  [15717] = 1,
    ACTIONS(2164), 1,
      aux_sym_update_token2,
  [15721] = 1,
    ACTIONS(2166), 1,
      aux_sym_create_function_token1,
  [15725] = 1,
    ACTIONS(2168), 1,
      sym_object_name,
  [15729] = 1,
    ACTIONS(2170), 1,
      aux_sym_create_function_token2,
  [15733] = 1,
    ACTIONS(2172), 1,
      aux_sym_select_element_token1,
  [15737] = 1,
    ACTIONS(2174), 1,
      sym__code_block,
  [15741] = 1,
    ACTIONS(2176), 1,
      aux_sym_select_element_token1,
  [15745] = 1,
    ACTIONS(2178), 1,
      sym_object_name,
  [15749] = 1,
    ACTIONS(2180), 1,
      aux_sym_create_aggregate_token3,
  [15753] = 1,
    ACTIONS(2182), 1,
      aux_sym_create_aggregate_token4,
  [15757] = 1,
    ACTIONS(2184), 1,
      sym_object_name,
  [15761] = 1,
    ACTIONS(2186), 1,
      sym_object_name,
  [15765] = 1,
    ACTIONS(2188), 1,
      aux_sym_create_aggregate_token3,
  [15769] = 1,
    ACTIONS(2190), 1,
      sym_object_name,
  [15773] = 1,
    ACTIONS(2192), 1,
      sym__boolean_literal,
  [15777] = 1,
    ACTIONS(2192), 1,
      sym__string_literal,
  [15781] = 1,
    ACTIONS(2194), 1,
      aux_sym_column_not_null_token1,
  [15785] = 1,
    ACTIONS(2196), 1,
      aux_sym_create_function_token1,
  [15789] = 1,
    ACTIONS(2198), 1,
      aux_sym_create_index_token3,
  [15793] = 1,
    ACTIONS(2200), 1,
      aux_sym_relation_contains_key_token2,
  [15797] = 1,
    ACTIONS(2202), 1,
      aux_sym_constant_token2,
  [15801] = 1,
    ACTIONS(2204), 1,
      anon_sym_LBRACE,
  [15805] = 1,
    ACTIONS(2206), 1,
      aux_sym_create_materialized_view_token2,
  [15809] = 1,
    ACTIONS(2208), 1,
      aux_sym_create_function_token1,
  [15813] = 1,
    ACTIONS(2210), 1,
      anon_sym_RPAREN,
  [15817] = 1,
    ACTIONS(2212), 1,
      anon_sym_RPAREN,
  [15821] = 1,
    ACTIONS(2214), 1,
      anon_sym_RPAREN,
  [15825] = 1,
    ACTIONS(2216), 1,
      aux_sym_create_function_token1,
  [15829] = 1,
    ACTIONS(2218), 1,
      anon_sym_LPAREN,
  [15833] = 1,
    ACTIONS(2220), 1,
      sym_object_name,
  [15837] = 1,
    ACTIONS(2222), 1,
      aux_sym_create_function_token2,
  [15841] = 1,
    ACTIONS(2224), 1,
      anon_sym_LPAREN,
  [15845] = 1,
    ACTIONS(2226), 1,
      anon_sym_LPAREN,
  [15849] = 1,
    ACTIONS(2228), 1,
      aux_sym_create_aggregate_token3,
  [15853] = 1,
    ACTIONS(2230), 1,
      sym_object_name,
  [15857] = 1,
    ACTIONS(2232), 1,
      aux_sym_create_index_token3,
  [15861] = 1,
    ACTIONS(2234), 1,
      aux_sym_delete_statement_token3,
  [15865] = 1,
    ACTIONS(2236), 1,
      aux_sym_insert_statement_token3,
  [15869] = 1,
    ACTIONS(2238), 1,
      anon_sym_RPAREN,
  [15873] = 1,
    ACTIONS(2240), 1,
      sym_object_name,
  [15877] = 1,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
  [15881] = 1,
    ACTIONS(2242), 1,
      sym_object_name,
  [15885] = 1,
    ACTIONS(2244), 1,
      aux_sym_select_statement_token5,
  [15889] = 1,
    ACTIONS(2246), 1,
      sym_object_name,
  [15893] = 1,
    ACTIONS(2248), 1,
      sym_object_name,
  [15897] = 1,
    ACTIONS(2250), 1,
      aux_sym_grant_token2,
  [15901] = 1,
    ACTIONS(2252), 1,
      aux_sym_drop_type_token1,
  [15905] = 1,
    ACTIONS(2254), 1,
      sym_object_name,
  [15909] = 1,
    ACTIONS(2256), 1,
      anon_sym_COMMA,
  [15913] = 1,
    ACTIONS(2258), 1,
      anon_sym_EQ,
  [15917] = 1,
    ACTIONS(2260), 1,
      anon_sym_RPAREN,
  [15921] = 1,
    ACTIONS(2262), 1,
      aux_sym_grant_token2,
  [15925] = 1,
    ACTIONS(2264), 1,
      sym__boolean_literal,
  [15929] = 1,
    ACTIONS(2266), 1,
      anon_sym_EQ,
  [15933] = 1,
    ACTIONS(2268), 1,
      aux_sym_create_function_token1,
  [15937] = 1,
    ACTIONS(2270), 1,
      anon_sym_EQ,
  [15941] = 1,
    ACTIONS(2272), 1,
      sym_object_name,
  [15945] = 1,
    ACTIONS(2274), 1,
      aux_sym_create_function_token2,
  [15949] = 1,
    ACTIONS(2276), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [15953] = 1,
    ACTIONS(2278), 1,
      aux_sym_select_element_token1,
  [15957] = 1,
    ACTIONS(2280), 1,
      sym_object_name,
  [15961] = 1,
    ACTIONS(2282), 1,
      aux_sym_create_function_token2,
  [15965] = 1,
    ACTIONS(2284), 1,
      sym_object_name,
  [15969] = 1,
    ACTIONS(2286), 1,
      sym__code_block,
  [15973] = 1,
    ACTIONS(2288), 1,
      aux_sym_select_element_token1,
  [15977] = 1,
    ACTIONS(2290), 1,
      sym_object_name,
  [15981] = 1,
    ACTIONS(2292), 1,
      sym_object_name,
  [15985] = 1,
    ACTIONS(2294), 1,
      aux_sym_create_aggregate_token5,
  [15989] = 1,
    ACTIONS(2296), 1,
      aux_sym_create_aggregate_token6,
  [15993] = 1,
    ACTIONS(2298), 1,
      aux_sym_from_spec_token1,
  [15997] = 1,
    ACTIONS(2300), 1,
      sym_object_name,
  [16001] = 1,
    ACTIONS(2302), 1,
      sym_object_name,
  [16005] = 1,
    ACTIONS(2304), 1,
      aux_sym_create_materialized_view_token1,
  [16009] = 1,
    ACTIONS(2306), 1,
      aux_sym_create_materialized_view_token1,
  [16013] = 1,
    ACTIONS(2308), 1,
      aux_sym_insert_statement_token3,
  [16017] = 1,
    ACTIONS(2310), 1,
      sym__decimal_literal,
  [16021] = 1,
    ACTIONS(2312), 1,
      anon_sym_EQ,
  [16025] = 1,
    ACTIONS(2314), 1,
      aux_sym_create_index_token3,
  [16029] = 1,
    ACTIONS(2316), 1,
      anon_sym_LPAREN,
  [16033] = 1,
    ACTIONS(2318), 1,
      sym_object_name,
  [16037] = 1,
    ACTIONS(2320), 1,
      sym_object_name,
  [16041] = 1,
    ACTIONS(2322), 1,
      aux_sym_insert_statement_token3,
  [16045] = 1,
    ACTIONS(2324), 1,
      aux_sym_insert_statement_token3,
  [16049] = 1,
    ACTIONS(2326), 1,
      sym__string_literal,
  [16053] = 1,
    ACTIONS(2328), 1,
      aux_sym_create_function_token1,
  [16057] = 1,
    ACTIONS(2330), 1,
      anon_sym_LPAREN,
  [16061] = 1,
    ACTIONS(2332), 1,
      aux_sym_create_function_token2,
  [16065] = 1,
    ACTIONS(2334), 1,
      sym_object_name,
  [16069] = 1,
    ACTIONS(2336), 1,
      aux_sym_create_function_token1,
  [16073] = 1,
    ACTIONS(2338), 1,
      aux_sym_select_element_token1,
  [16077] = 1,
    ACTIONS(2340), 1,
      sym_object_name,
  [16081] = 1,
    ACTIONS(2342), 1,
      aux_sym_create_function_token2,
  [16085] = 1,
    ACTIONS(2344), 1,
      anon_sym_RPAREN,
  [16089] = 1,
    ACTIONS(2346), 1,
      sym_object_name,
  [16093] = 1,
    ACTIONS(2348), 1,
      aux_sym_create_aggregate_token4,
  [16097] = 1,
    ACTIONS(2350), 1,
      aux_sym_create_aggregate_token5,
  [16101] = 1,
    ACTIONS(2352), 1,
      aux_sym_using_timestamp_spec_token1,
  [16105] = 1,
    ACTIONS(2354), 1,
      aux_sym_select_statement_token1,
  [16109] = 1,
    ACTIONS(2356), 1,
      sym_object_name,
  [16113] = 1,
    ACTIONS(2358), 1,
      aux_sym_delete_statement_token3,
  [16117] = 1,
    ACTIONS(2360), 1,
      anon_sym_RPAREN,
  [16121] = 1,
    ACTIONS(2362), 1,
      anon_sym_RPAREN,
  [16125] = 1,
    ACTIONS(2364), 1,
      sym_object_name,
  [16129] = 1,
    ACTIONS(2366), 1,
      anon_sym_EQ,
  [16133] = 1,
    ACTIONS(2368), 1,
      anon_sym_EQ,
  [16137] = 1,
    ACTIONS(2370), 1,
      aux_sym_create_function_token2,
  [16141] = 1,
    ACTIONS(2372), 1,
      sym_object_name,
  [16145] = 1,
    ACTIONS(2374), 1,
      aux_sym_create_function_token1,
  [16149] = 1,
    ACTIONS(2376), 1,
      aux_sym_select_element_token1,
  [16153] = 1,
    ACTIONS(2378), 1,
      sym_object_name,
  [16157] = 1,
    ACTIONS(2380), 1,
      aux_sym_create_function_token2,
  [16161] = 1,
    ACTIONS(2382), 1,
      sym__code_block,
  [16165] = 1,
    ACTIONS(2384), 1,
      aux_sym_select_element_token1,
  [16169] = 1,
    ACTIONS(2386), 1,
      sym_object_name,
  [16173] = 1,
    ACTIONS(2388), 1,
      sym_object_name,
  [16177] = 1,
    ACTIONS(2390), 1,
      sym__code_block,
  [16181] = 1,
    ACTIONS(2392), 1,
      aux_sym_create_aggregate_token4,
  [16185] = 1,
    ACTIONS(2394), 1,
      aux_sym_create_aggregate_token5,
  [16189] = 1,
    ACTIONS(2396), 1,
      sym_object_name,
  [16193] = 1,
    ACTIONS(2398), 1,
      anon_sym_LPAREN,
  [16197] = 1,
    ACTIONS(2400), 1,
      sym_object_name,
  [16201] = 1,
    ACTIONS(2402), 1,
      sym_object_name,
  [16205] = 1,
    ACTIONS(2404), 1,
      aux_sym_create_materialized_view_token1,
  [16209] = 1,
    ACTIONS(2406), 1,
      sym_object_name,
  [16213] = 1,
    ACTIONS(2408), 1,
      aux_sym_relation_contains_key_token2,
  [16217] = 1,
    ACTIONS(2410), 1,
      aux_sym_relation_contains_key_token2,
  [16221] = 1,
    ACTIONS(2412), 1,
      aux_sym_constant_token2,
  [16225] = 1,
    ACTIONS(2414), 1,
      aux_sym_create_materialized_view_token1,
  [16229] = 1,
    ACTIONS(2416), 1,
      anon_sym_EQ,
  [16233] = 1,
    ACTIONS(2418), 1,
      anon_sym_LPAREN,
  [16237] = 1,
    ACTIONS(2420), 1,
      anon_sym_RPAREN,
  [16241] = 1,
    ACTIONS(2422), 1,
      anon_sym_LPAREN,
  [16245] = 1,
    ACTIONS(2424), 1,
      aux_sym_create_function_token1,
  [16249] = 1,
    ACTIONS(2426), 1,
      sym_object_name,
  [16253] = 1,
    ACTIONS(2428), 1,
      aux_sym_insert_statement_token3,
  [16257] = 1,
    ACTIONS(2430), 1,
      aux_sym_create_function_token2,
  [16261] = 1,
    ACTIONS(2432), 1,
      anon_sym_RPAREN,
  [16265] = 1,
    ACTIONS(2434), 1,
      aux_sym_create_function_token1,
  [16269] = 1,
    ACTIONS(2436), 1,
      sym_object_name,
  [16273] = 1,
    ACTIONS(2438), 1,
      aux_sym_create_function_token2,
  [16277] = 1,
    ACTIONS(2440), 1,
      anon_sym_EQ,
  [16281] = 1,
    ACTIONS(2442), 1,
      sym__code_block,
  [16285] = 1,
    ACTIONS(2444), 1,
      aux_sym_select_element_token1,
  [16289] = 1,
    ACTIONS(2446), 1,
      sym_object_name,
  [16293] = 1,
    ACTIONS(2448), 1,
      aux_sym_create_aggregate_token3,
  [16297] = 1,
    ACTIONS(2450), 1,
      aux_sym_create_aggregate_token4,
  [16301] = 1,
    ACTIONS(2452), 1,
      anon_sym_LPAREN,
  [16305] = 1,
    ACTIONS(2454), 1,
      sym_object_name,
  [16309] = 1,
    ACTIONS(2456), 1,
      sym_object_name,
  [16313] = 1,
    ACTIONS(2458), 1,
      anon_sym_RPAREN,
  [16317] = 1,
    ACTIONS(2460), 1,
      aux_sym_select_statement_token5,
  [16321] = 1,
    ACTIONS(2462), 1,
      sym_object_name,
  [16325] = 1,
    ACTIONS(2464), 1,
      aux_sym_create_function_token2,
  [16329] = 1,
    ACTIONS(2466), 1,
      aux_sym_update_token2,
  [16333] = 1,
    ACTIONS(2468), 1,
      sym__code_block,
  [16337] = 1,
    ACTIONS(2470), 1,
      aux_sym_select_element_token1,
  [16341] = 1,
    ACTIONS(2472), 1,
      sym_object_name,
  [16345] = 1,
    ACTIONS(2474), 1,
      sym_object_name,
  [16349] = 1,
    ACTIONS(2476), 1,
      sym__code_block,
  [16353] = 1,
    ACTIONS(2478), 1,
      aux_sym_select_element_token1,
  [16357] = 1,
    ACTIONS(2480), 1,
      sym_object_name,
  [16361] = 1,
    ACTIONS(2482), 1,
      sym_object_name,
  [16365] = 1,
    ACTIONS(2484), 1,
      sym_object_name,
  [16369] = 1,
    ACTIONS(2486), 1,
      aux_sym_create_aggregate_token6,
  [16373] = 1,
    ACTIONS(2488), 1,
      sym_object_name,
  [16377] = 1,
    ACTIONS(2490), 1,
      aux_sym_create_keyspace_token1,
  [16381] = 1,
    ACTIONS(2492), 1,
      sym_object_name,
  [16385] = 1,
    ACTIONS(2494), 1,
      sym_object_name,
  [16389] = 1,
    ACTIONS(2496), 1,
      aux_sym_from_spec_token1,
  [16393] = 1,
    ACTIONS(2498), 1,
      aux_sym_relation_contains_key_token2,
  [16397] = 1,
    ACTIONS(2500), 1,
      aux_sym_create_materialized_view_token1,
  [16401] = 1,
    ACTIONS(2502), 1,
      anon_sym_LPAREN,
  [16405] = 1,
    ACTIONS(2504), 1,
      anon_sym_LPAREN,
  [16409] = 1,
    ACTIONS(2506), 1,
      aux_sym_grant_token2,
  [16413] = 1,
    ACTIONS(2508), 1,
      anon_sym_RPAREN,
  [16417] = 1,
    ACTIONS(2510), 1,
      sym_object_name,
  [16421] = 1,
    ACTIONS(2512), 1,
      aux_sym_create_function_token1,
  [16425] = 1,
    ACTIONS(2514), 1,
      sym_object_name,
  [16429] = 1,
    ACTIONS(2516), 1,
      sym_object_name,
  [16433] = 1,
    ACTIONS(2518), 1,
      aux_sym_create_function_token2,
  [16437] = 1,
    ACTIONS(2520), 1,
      aux_sym_delete_statement_token3,
  [16441] = 1,
    ACTIONS(2522), 1,
      aux_sym_select_element_token1,
  [16445] = 1,
    ACTIONS(2524), 1,
      sym_object_name,
  [16449] = 1,
    ACTIONS(2526), 1,
      aux_sym_create_function_token2,
  [16453] = 1,
    ACTIONS(2528), 1,
      sym_object_name,
  [16457] = 1,
    ACTIONS(2530), 1,
      sym__code_block,
  [16461] = 1,
    ACTIONS(2532), 1,
      aux_sym_select_element_token1,
  [16465] = 1,
    ACTIONS(2534), 1,
      sym_object_name,
  [16469] = 1,
    ACTIONS(2536), 1,
      sym__decimal_literal,
  [16473] = 1,
    ACTIONS(2538), 1,
      aux_sym_create_aggregate_token5,
  [16477] = 1,
    ACTIONS(2540), 1,
      aux_sym_create_aggregate_token6,
  [16481] = 1,
    ACTIONS(2542), 1,
      aux_sym_select_element_token1,
  [16485] = 1,
    ACTIONS(2544), 1,
      sym_object_name,
  [16489] = 1,
    ACTIONS(2546), 1,
      aux_sym_create_function_token2,
  [16493] = 1,
    ACTIONS(2548), 1,
      sym_object_name,
  [16497] = 1,
    ACTIONS(2550), 1,
      sym__code_block,
  [16501] = 1,
    ACTIONS(2552), 1,
      aux_sym_select_element_token1,
  [16505] = 1,
    ACTIONS(2554), 1,
      sym_object_name,
  [16509] = 1,
    ACTIONS(2556), 1,
      sym__code_block,
  [16513] = 1,
    ACTIONS(2558), 1,
      aux_sym_create_aggregate_token5,
  [16517] = 1,
    ACTIONS(2560), 1,
      aux_sym_create_aggregate_token6,
  [16521] = 1,
    ACTIONS(2562), 1,
      sym_object_name,
  [16525] = 1,
    ACTIONS(2564), 1,
      sym_object_name,
  [16529] = 1,
    ACTIONS(2566), 1,
      anon_sym_COLON,
  [16533] = 1,
    ACTIONS(2568), 1,
      sym_object_name,
  [16537] = 1,
    ACTIONS(2570), 1,
      aux_sym_delete_statement_token3,
  [16541] = 1,
    ACTIONS(2572), 1,
      sym_object_name,
  [16545] = 1,
    ACTIONS(2574), 1,
      sym_object_name,
  [16549] = 1,
    ACTIONS(2576), 1,
      aux_sym_create_materialized_view_token1,
  [16553] = 1,
    ACTIONS(2578), 1,
      aux_sym_create_materialized_view_token1,
  [16557] = 1,
    ACTIONS(2580), 1,
      anon_sym_LPAREN,
  [16561] = 1,
    ACTIONS(2582), 1,
      aux_sym_relation_contains_key_token2,
  [16565] = 1,
    ACTIONS(2584), 1,
      sym_object_name,
  [16569] = 1,
    ACTIONS(2586), 1,
      sym_object_name,
  [16573] = 1,
    ACTIONS(2588), 1,
      sym_object_name,
  [16577] = 1,
    ACTIONS(2590), 1,
      aux_sym_create_function_token2,
  [16581] = 1,
    ACTIONS(2592), 1,
      sym_object_name,
  [16585] = 1,
    ACTIONS(2594), 1,
      aux_sym_create_function_token1,
  [16589] = 1,
    ACTIONS(2596), 1,
      aux_sym_select_element_token1,
  [16593] = 1,
    ACTIONS(2598), 1,
      sym_object_name,
  [16597] = 1,
    ACTIONS(2600), 1,
      aux_sym_create_function_token2,
  [16601] = 1,
    ACTIONS(2602), 1,
      sym__code_block,
  [16605] = 1,
    ACTIONS(2604), 1,
      aux_sym_select_element_token1,
  [16609] = 1,
    ACTIONS(2606), 1,
      sym_object_name,
  [16613] = 1,
    ACTIONS(2608), 1,
      sym_object_name,
  [16617] = 1,
    ACTIONS(2610), 1,
      sym__code_block,
  [16621] = 1,
    ACTIONS(2612), 1,
      aux_sym_create_aggregate_token4,
  [16625] = 1,
    ACTIONS(2614), 1,
      aux_sym_create_aggregate_token5,
  [16629] = 1,
    ACTIONS(2616), 1,
      sym_object_name,
  [16633] = 1,
    ACTIONS(2618), 1,
      sym_object_name,
  [16637] = 1,
    ACTIONS(2620), 1,
      sym__code_block,
  [16641] = 1,
    ACTIONS(2622), 1,
      aux_sym_select_element_token1,
  [16645] = 1,
    ACTIONS(2624), 1,
      sym_object_name,
  [16649] = 1,
    ACTIONS(2626), 1,
      sym_object_name,
  [16653] = 1,
    ACTIONS(2628), 1,
      sym__code_block,
  [16657] = 1,
    ACTIONS(2630), 1,
      aux_sym_delete_statement_token3,
  [16661] = 1,
    ACTIONS(2632), 1,
      sym_object_name,
  [16665] = 1,
    ACTIONS(2634), 1,
      sym_object_name,
  [16669] = 1,
    ACTIONS(2636), 1,
      sym_object_name,
  [16673] = 1,
    ACTIONS(2638), 1,
      aux_sym_delete_statement_token3,
  [16677] = 1,
    ACTIONS(2640), 1,
      sym_object_name,
  [16681] = 1,
    ACTIONS(2642), 1,
      aux_sym_delete_statement_token3,
  [16685] = 1,
    ACTIONS(2644), 1,
      aux_sym_insert_statement_token3,
  [16689] = 1,
    ACTIONS(2646), 1,
      sym_object_name,
  [16693] = 1,
    ACTIONS(2648), 1,
      aux_sym_delete_statement_token3,
  [16697] = 1,
    ACTIONS(2650), 1,
      aux_sym_delete_statement_token3,
  [16701] = 1,
    ACTIONS(2652), 1,
      sym_object_name,
  [16705] = 1,
    ACTIONS(2654), 1,
      aux_sym_delete_statement_token3,
  [16709] = 1,
    ACTIONS(2656), 1,
      aux_sym_create_keyspace_token1,
  [16713] = 1,
    ACTIONS(2658), 1,
      aux_sym_relation_contains_key_token2,
  [16717] = 1,
    ACTIONS(2660), 1,
      aux_sym_relation_contains_key_token2,
  [16721] = 1,
    ACTIONS(2662), 1,
      aux_sym_delete_statement_token3,
  [16725] = 1,
    ACTIONS(2664), 1,
      anon_sym_LPAREN,
  [16729] = 1,
    ACTIONS(2666), 1,
      anon_sym_RPAREN,
  [16733] = 1,
    ACTIONS(2668), 1,
      anon_sym_RPAREN,
  [16737] = 1,
    ACTIONS(2670), 1,
      anon_sym_LPAREN,
  [16741] = 1,
    ACTIONS(2672), 1,
      sym_object_name,
  [16745] = 1,
    ACTIONS(2674), 1,
      aux_sym_create_function_token2,
  [16749] = 1,
    ACTIONS(2676), 1,
      aux_sym_delete_statement_token3,
  [16753] = 1,
    ACTIONS(2678), 1,
      sym__code_block,
  [16757] = 1,
    ACTIONS(2680), 1,
      aux_sym_select_element_token1,
  [16761] = 1,
    ACTIONS(2682), 1,
      sym_object_name,
  [16765] = 1,
    ACTIONS(2684), 1,
      sym_object_name,
  [16769] = 1,
    ACTIONS(2686), 1,
      sym__code_block,
  [16773] = 1,
    ACTIONS(2688), 1,
      aux_sym_select_element_token1,
  [16777] = 1,
    ACTIONS(2690), 1,
      aux_sym_delete_statement_token3,
  [16781] = 1,
    ACTIONS(2692), 1,
      sym_object_name,
  [16785] = 1,
    ACTIONS(2694), 1,
      sym_object_name,
  [16789] = 1,
    ACTIONS(2696), 1,
      aux_sym_create_aggregate_token6,
  [16793] = 1,
    ACTIONS(2698), 1,
      anon_sym_LPAREN,
  [16797] = 1,
    ACTIONS(2700), 1,
      sym_object_name,
  [16801] = 1,
    ACTIONS(2702), 1,
      sym__code_block,
  [16805] = 1,
    ACTIONS(2704), 1,
      aux_sym_select_element_token1,
  [16809] = 1,
    ACTIONS(2706), 1,
      sym__decimal_literal,
  [16813] = 1,
    ACTIONS(2708), 1,
      aux_sym_create_aggregate_token6,
  [16817] = 1,
    ACTIONS(2710), 1,
      sym_object_name,
  [16821] = 1,
    ACTIONS(2712), 1,
      anon_sym_RBRACK,
  [16825] = 1,
    ACTIONS(2714), 1,
      sym_object_name,
  [16829] = 1,
    ACTIONS(2716), 1,
      aux_sym_order_spec_token2,
  [16833] = 1,
    ACTIONS(2718), 1,
      sym__decimal_literal,
  [16837] = 1,
    ACTIONS(2720), 1,
      aux_sym_select_statement_token5,
  [16841] = 1,
    ACTIONS(2722), 1,
      anon_sym_RPAREN,
  [16845] = 1,
    ACTIONS(2724), 1,
      sym_object_name,
  [16849] = 1,
    ACTIONS(2726), 1,
      sym_object_name,
  [16853] = 1,
    ACTIONS(2728), 1,
      aux_sym_create_materialized_view_token1,
  [16857] = 1,
    ACTIONS(2730), 1,
      anon_sym_LPAREN,
  [16861] = 1,
    ACTIONS(2732), 1,
      anon_sym_LPAREN,
  [16865] = 1,
    ACTIONS(2734), 1,
      anon_sym_RPAREN,
  [16869] = 1,
    ACTIONS(2736), 1,
      aux_sym_create_materialized_view_token2,
  [16873] = 1,
    ACTIONS(2738), 1,
      sym_object_name,
  [16877] = 1,
    ACTIONS(2740), 1,
      aux_sym_create_materialized_view_token2,
  [16881] = 1,
    ACTIONS(2742), 1,
      aux_sym_update_token2,
  [16885] = 1,
    ACTIONS(2744), 1,
      sym_object_name,
  [16889] = 1,
    ACTIONS(2746), 1,
      aux_sym_delete_statement_token3,
  [16893] = 1,
    ACTIONS(2748), 1,
      aux_sym_select_element_token1,
  [16897] = 1,
    ACTIONS(2750), 1,
      sym_object_name,
  [16901] = 1,
    ACTIONS(2752), 1,
      aux_sym_create_function_token2,
  [16905] = 1,
    ACTIONS(2754), 1,
      aux_sym_delete_statement_token3,
  [16909] = 1,
    ACTIONS(2756), 1,
      sym__code_block,
  [16913] = 1,
    ACTIONS(2758), 1,
      aux_sym_select_element_token1,
  [16917] = 1,
    ACTIONS(2760), 1,
      aux_sym_delete_statement_token3,
  [16921] = 1,
    ACTIONS(2762), 1,
      sym__code_block,
  [16925] = 1,
    ACTIONS(2764), 1,
      aux_sym_create_aggregate_token5,
  [16929] = 1,
    ACTIONS(2766), 1,
      aux_sym_create_aggregate_token6,
  [16933] = 1,
    ACTIONS(2768), 1,
      aux_sym_delete_statement_token3,
  [16937] = 1,
    ACTIONS(2770), 1,
      aux_sym_insert_statement_token2,
  [16941] = 1,
    ACTIONS(2772), 1,
      sym__code_block,
  [16945] = 1,
    ACTIONS(2774), 1,
      aux_sym_delete_statement_token3,
  [16949] = 1,
    ACTIONS(2776), 1,
      aux_sym_relation_contains_key_token2,
  [16953] = 1,
    ACTIONS(2778), 1,
      aux_sym_delete_statement_token3,
  [16957] = 1,
    ACTIONS(2780), 1,
      aux_sym_delete_statement_token3,
  [16961] = 1,
    ACTIONS(2782), 1,
      aux_sym_delete_statement_token3,
  [16965] = 1,
    ACTIONS(2784), 1,
      anon_sym_RPAREN,
  [16969] = 1,
    ACTIONS(2786), 1,
      aux_sym_create_materialized_view_token2,
  [16973] = 1,
    ACTIONS(2788), 1,
      aux_sym_insert_statement_token3,
  [16977] = 1,
    ACTIONS(2790), 1,
      aux_sym_insert_statement_token3,
  [16981] = 1,
    ACTIONS(2792), 1,
      sym__code_block,
  [16985] = 1,
    ACTIONS(2794), 1,
      aux_sym_select_element_token1,
  [16989] = 1,
    ACTIONS(2796), 1,
      sym_object_name,
  [16993] = 1,
    ACTIONS(2798), 1,
      aux_sym_using_timestamp_spec_token1,
  [16997] = 1,
    ACTIONS(2800), 1,
      sym__code_block,
  [17001] = 1,
    ACTIONS(2802), 1,
      aux_sym_insert_statement_token3,
  [17005] = 1,
    ACTIONS(2804), 1,
      sym_object_name,
  [17009] = 1,
    ACTIONS(2806), 1,
      aux_sym_insert_statement_token3,
  [17013] = 1,
    ACTIONS(2808), 1,
      aux_sym_insert_statement_token3,
  [17017] = 1,
    ACTIONS(2810), 1,
      aux_sym_insert_statement_token3,
  [17021] = 1,
    ACTIONS(2812), 1,
      aux_sym_create_materialized_view_token2,
  [17025] = 1,
    ACTIONS(2814), 1,
      anon_sym_LPAREN,
  [17029] = 1,
    ACTIONS(2816), 1,
      anon_sym_RPAREN,
  [17033] = 1,
    ACTIONS(2818), 1,
      anon_sym_RPAREN,
  [17037] = 1,
    ACTIONS(2820), 1,
      aux_sym_create_materialized_view_token2,
  [17041] = 1,
    ACTIONS(2822), 1,
      aux_sym_insert_statement_token3,
  [17045] = 1,
    ACTIONS(2824), 1,
      aux_sym_create_index_token3,
  [17049] = 1,
    ACTIONS(2826), 1,
      aux_sym_insert_statement_token3,
  [17053] = 1,
    ACTIONS(2828), 1,
      aux_sym_create_index_token3,
  [17057] = 1,
    ACTIONS(2830), 1,
      aux_sym_insert_statement_token3,
  [17061] = 1,
    ACTIONS(2832), 1,
      sym__code_block,
  [17065] = 1,
    ACTIONS(2834), 1,
      aux_sym_select_element_token1,
  [17069] = 1,
    ACTIONS(2836), 1,
      sym_object_name,
  [17073] = 1,
    ACTIONS(2838), 1,
      aux_sym_create_aggregate_token6,
  [17077] = 1,
    ACTIONS(2840), 1,
      sym_object_name,
  [17081] = 1,
    ACTIONS(2840), 1,
      anon_sym_STAR,
  [17085] = 1,
    ACTIONS(2842), 1,
      sym_object_name,
  [17089] = 1,
    ACTIONS(2844), 1,
      aux_sym_insert_statement_token2,
  [17093] = 1,
    ACTIONS(2846), 1,
      sym_object_name,
  [17097] = 1,
    ACTIONS(2848), 1,
      aux_sym_drop_materialized_view_token2,
  [17101] = 1,
    ACTIONS(2850), 1,
      sym_object_name,
  [17105] = 1,
    ACTIONS(2852), 1,
      sym__code_block,
  [17109] = 1,
    ACTIONS(2854), 1,
      sym_object_name,
  [17113] = 1,
    ACTIONS(2856), 1,
      anon_sym_RPAREN,
  [17117] = 1,
    ACTIONS(2858), 1,
      aux_sym_create_index_token3,
  [17121] = 1,
    ACTIONS(2860), 1,
      aux_sym_create_index_token3,
  [17125] = 1,
    ACTIONS(2862), 1,
      aux_sym_drop_materialized_view_token2,
  [17129] = 1,
    ACTIONS(2864), 1,
      aux_sym_create_aggregate_token2,
  [17133] = 1,
    ACTIONS(2866), 1,
      aux_sym_drop_materialized_view_token2,
  [17137] = 1,
    ACTIONS(2868), 1,
      sym_object_name,
  [17141] = 1,
    ACTIONS(2870), 1,
      sym_object_name,
  [17145] = 1,
    ACTIONS(2872), 1,
      aux_sym_begin_batch_token4,
  [17149] = 1,
    ACTIONS(2874), 1,
      ts_builtin_sym_end,
  [17153] = 1,
    ACTIONS(2876), 1,
      aux_sym_begin_batch_token4,
  [17157] = 1,
    ACTIONS(2878), 1,
      sym_object_name,
  [17161] = 1,
    ACTIONS(2880), 1,
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
  [SMALL_STATE(62)] = 2193,
  [SMALL_STATE(63)] = 2224,
  [SMALL_STATE(64)] = 2251,
  [SMALL_STATE(65)] = 2282,
  [SMALL_STATE(66)] = 2313,
  [SMALL_STATE(67)] = 2340,
  [SMALL_STATE(68)] = 2367,
  [SMALL_STATE(69)] = 2395,
  [SMALL_STATE(70)] = 2425,
  [SMALL_STATE(71)] = 2465,
  [SMALL_STATE(72)] = 2491,
  [SMALL_STATE(73)] = 2531,
  [SMALL_STATE(74)] = 2571,
  [SMALL_STATE(75)] = 2600,
  [SMALL_STATE(76)] = 2625,
  [SMALL_STATE(77)] = 2650,
  [SMALL_STATE(78)] = 2675,
  [SMALL_STATE(79)] = 2700,
  [SMALL_STATE(80)] = 2725,
  [SMALL_STATE(81)] = 2750,
  [SMALL_STATE(82)] = 2789,
  [SMALL_STATE(83)] = 2818,
  [SMALL_STATE(84)] = 2843,
  [SMALL_STATE(85)] = 2868,
  [SMALL_STATE(86)] = 2893,
  [SMALL_STATE(87)] = 2922,
  [SMALL_STATE(88)] = 2946,
  [SMALL_STATE(89)] = 2980,
  [SMALL_STATE(90)] = 3004,
  [SMALL_STATE(91)] = 3028,
  [SMALL_STATE(92)] = 3052,
  [SMALL_STATE(93)] = 3076,
  [SMALL_STATE(94)] = 3104,
  [SMALL_STATE(95)] = 3138,
  [SMALL_STATE(96)] = 3172,
  [SMALL_STATE(97)] = 3197,
  [SMALL_STATE(98)] = 3222,
  [SMALL_STATE(99)] = 3247,
  [SMALL_STATE(100)] = 3270,
  [SMALL_STATE(101)] = 3297,
  [SMALL_STATE(102)] = 3322,
  [SMALL_STATE(103)] = 3344,
  [SMALL_STATE(104)] = 3372,
  [SMALL_STATE(105)] = 3400,
  [SMALL_STATE(106)] = 3428,
  [SMALL_STATE(107)] = 3450,
  [SMALL_STATE(108)] = 3476,
  [SMALL_STATE(109)] = 3498,
  [SMALL_STATE(110)] = 3520,
  [SMALL_STATE(111)] = 3548,
  [SMALL_STATE(112)] = 3576,
  [SMALL_STATE(113)] = 3604,
  [SMALL_STATE(114)] = 3632,
  [SMALL_STATE(115)] = 3658,
  [SMALL_STATE(116)] = 3686,
  [SMALL_STATE(117)] = 3714,
  [SMALL_STATE(118)] = 3736,
  [SMALL_STATE(119)] = 3758,
  [SMALL_STATE(120)] = 3782,
  [SMALL_STATE(121)] = 3808,
  [SMALL_STATE(122)] = 3834,
  [SMALL_STATE(123)] = 3860,
  [SMALL_STATE(124)] = 3888,
  [SMALL_STATE(125)] = 3910,
  [SMALL_STATE(126)] = 3932,
  [SMALL_STATE(127)] = 3958,
  [SMALL_STATE(128)] = 3980,
  [SMALL_STATE(129)] = 4008,
  [SMALL_STATE(130)] = 4036,
  [SMALL_STATE(131)] = 4058,
  [SMALL_STATE(132)] = 4083,
  [SMALL_STATE(133)] = 4118,
  [SMALL_STATE(134)] = 4141,
  [SMALL_STATE(135)] = 4166,
  [SMALL_STATE(136)] = 4191,
  [SMALL_STATE(137)] = 4214,
  [SMALL_STATE(138)] = 4237,
  [SMALL_STATE(139)] = 4262,
  [SMALL_STATE(140)] = 4283,
  [SMALL_STATE(141)] = 4308,
  [SMALL_STATE(142)] = 4329,
  [SMALL_STATE(143)] = 4350,
  [SMALL_STATE(144)] = 4373,
  [SMALL_STATE(145)] = 4398,
  [SMALL_STATE(146)] = 4423,
  [SMALL_STATE(147)] = 4448,
  [SMALL_STATE(148)] = 4469,
  [SMALL_STATE(149)] = 4494,
  [SMALL_STATE(150)] = 4519,
  [SMALL_STATE(151)] = 4544,
  [SMALL_STATE(152)] = 4569,
  [SMALL_STATE(153)] = 4590,
  [SMALL_STATE(154)] = 4615,
  [SMALL_STATE(155)] = 4640,
  [SMALL_STATE(156)] = 4665,
  [SMALL_STATE(157)] = 4690,
  [SMALL_STATE(158)] = 4715,
  [SMALL_STATE(159)] = 4740,
  [SMALL_STATE(160)] = 4765,
  [SMALL_STATE(161)] = 4790,
  [SMALL_STATE(162)] = 4811,
  [SMALL_STATE(163)] = 4832,
  [SMALL_STATE(164)] = 4853,
  [SMALL_STATE(165)] = 4878,
  [SMALL_STATE(166)] = 4903,
  [SMALL_STATE(167)] = 4928,
  [SMALL_STATE(168)] = 4953,
  [SMALL_STATE(169)] = 4978,
  [SMALL_STATE(170)] = 5003,
  [SMALL_STATE(171)] = 5024,
  [SMALL_STATE(172)] = 5049,
  [SMALL_STATE(173)] = 5074,
  [SMALL_STATE(174)] = 5099,
  [SMALL_STATE(175)] = 5120,
  [SMALL_STATE(176)] = 5145,
  [SMALL_STATE(177)] = 5166,
  [SMALL_STATE(178)] = 5187,
  [SMALL_STATE(179)] = 5212,
  [SMALL_STATE(180)] = 5237,
  [SMALL_STATE(181)] = 5258,
  [SMALL_STATE(182)] = 5283,
  [SMALL_STATE(183)] = 5304,
  [SMALL_STATE(184)] = 5329,
  [SMALL_STATE(185)] = 5350,
  [SMALL_STATE(186)] = 5375,
  [SMALL_STATE(187)] = 5396,
  [SMALL_STATE(188)] = 5417,
  [SMALL_STATE(189)] = 5442,
  [SMALL_STATE(190)] = 5467,
  [SMALL_STATE(191)] = 5492,
  [SMALL_STATE(192)] = 5517,
  [SMALL_STATE(193)] = 5542,
  [SMALL_STATE(194)] = 5567,
  [SMALL_STATE(195)] = 5592,
  [SMALL_STATE(196)] = 5613,
  [SMALL_STATE(197)] = 5638,
  [SMALL_STATE(198)] = 5663,
  [SMALL_STATE(199)] = 5688,
  [SMALL_STATE(200)] = 5709,
  [SMALL_STATE(201)] = 5734,
  [SMALL_STATE(202)] = 5759,
  [SMALL_STATE(203)] = 5784,
  [SMALL_STATE(204)] = 5809,
  [SMALL_STATE(205)] = 5834,
  [SMALL_STATE(206)] = 5859,
  [SMALL_STATE(207)] = 5881,
  [SMALL_STATE(208)] = 5903,
  [SMALL_STATE(209)] = 5925,
  [SMALL_STATE(210)] = 5947,
  [SMALL_STATE(211)] = 5969,
  [SMALL_STATE(212)] = 5991,
  [SMALL_STATE(213)] = 6013,
  [SMALL_STATE(214)] = 6035,
  [SMALL_STATE(215)] = 6057,
  [SMALL_STATE(216)] = 6077,
  [SMALL_STATE(217)] = 6097,
  [SMALL_STATE(218)] = 6117,
  [SMALL_STATE(219)] = 6137,
  [SMALL_STATE(220)] = 6159,
  [SMALL_STATE(221)] = 6181,
  [SMALL_STATE(222)] = 6203,
  [SMALL_STATE(223)] = 6225,
  [SMALL_STATE(224)] = 6247,
  [SMALL_STATE(225)] = 6269,
  [SMALL_STATE(226)] = 6289,
  [SMALL_STATE(227)] = 6311,
  [SMALL_STATE(228)] = 6333,
  [SMALL_STATE(229)] = 6355,
  [SMALL_STATE(230)] = 6377,
  [SMALL_STATE(231)] = 6399,
  [SMALL_STATE(232)] = 6421,
  [SMALL_STATE(233)] = 6443,
  [SMALL_STATE(234)] = 6465,
  [SMALL_STATE(235)] = 6487,
  [SMALL_STATE(236)] = 6507,
  [SMALL_STATE(237)] = 6527,
  [SMALL_STATE(238)] = 6547,
  [SMALL_STATE(239)] = 6567,
  [SMALL_STATE(240)] = 6589,
  [SMALL_STATE(241)] = 6611,
  [SMALL_STATE(242)] = 6633,
  [SMALL_STATE(243)] = 6653,
  [SMALL_STATE(244)] = 6675,
  [SMALL_STATE(245)] = 6697,
  [SMALL_STATE(246)] = 6719,
  [SMALL_STATE(247)] = 6741,
  [SMALL_STATE(248)] = 6761,
  [SMALL_STATE(249)] = 6783,
  [SMALL_STATE(250)] = 6805,
  [SMALL_STATE(251)] = 6837,
  [SMALL_STATE(252)] = 6859,
  [SMALL_STATE(253)] = 6881,
  [SMALL_STATE(254)] = 6903,
  [SMALL_STATE(255)] = 6925,
  [SMALL_STATE(256)] = 6947,
  [SMALL_STATE(257)] = 6966,
  [SMALL_STATE(258)] = 6985,
  [SMALL_STATE(259)] = 7004,
  [SMALL_STATE(260)] = 7023,
  [SMALL_STATE(261)] = 7042,
  [SMALL_STATE(262)] = 7061,
  [SMALL_STATE(263)] = 7080,
  [SMALL_STATE(264)] = 7099,
  [SMALL_STATE(265)] = 7118,
  [SMALL_STATE(266)] = 7137,
  [SMALL_STATE(267)] = 7156,
  [SMALL_STATE(268)] = 7175,
  [SMALL_STATE(269)] = 7194,
  [SMALL_STATE(270)] = 7213,
  [SMALL_STATE(271)] = 7232,
  [SMALL_STATE(272)] = 7251,
  [SMALL_STATE(273)] = 7270,
  [SMALL_STATE(274)] = 7289,
  [SMALL_STATE(275)] = 7308,
  [SMALL_STATE(276)] = 7327,
  [SMALL_STATE(277)] = 7346,
  [SMALL_STATE(278)] = 7365,
  [SMALL_STATE(279)] = 7384,
  [SMALL_STATE(280)] = 7403,
  [SMALL_STATE(281)] = 7422,
  [SMALL_STATE(282)] = 7441,
  [SMALL_STATE(283)] = 7460,
  [SMALL_STATE(284)] = 7479,
  [SMALL_STATE(285)] = 7498,
  [SMALL_STATE(286)] = 7517,
  [SMALL_STATE(287)] = 7536,
  [SMALL_STATE(288)] = 7555,
  [SMALL_STATE(289)] = 7574,
  [SMALL_STATE(290)] = 7593,
  [SMALL_STATE(291)] = 7612,
  [SMALL_STATE(292)] = 7631,
  [SMALL_STATE(293)] = 7650,
  [SMALL_STATE(294)] = 7669,
  [SMALL_STATE(295)] = 7688,
  [SMALL_STATE(296)] = 7707,
  [SMALL_STATE(297)] = 7728,
  [SMALL_STATE(298)] = 7747,
  [SMALL_STATE(299)] = 7766,
  [SMALL_STATE(300)] = 7785,
  [SMALL_STATE(301)] = 7804,
  [SMALL_STATE(302)] = 7823,
  [SMALL_STATE(303)] = 7842,
  [SMALL_STATE(304)] = 7861,
  [SMALL_STATE(305)] = 7880,
  [SMALL_STATE(306)] = 7899,
  [SMALL_STATE(307)] = 7918,
  [SMALL_STATE(308)] = 7937,
  [SMALL_STATE(309)] = 7956,
  [SMALL_STATE(310)] = 7975,
  [SMALL_STATE(311)] = 7994,
  [SMALL_STATE(312)] = 8013,
  [SMALL_STATE(313)] = 8032,
  [SMALL_STATE(314)] = 8051,
  [SMALL_STATE(315)] = 8070,
  [SMALL_STATE(316)] = 8089,
  [SMALL_STATE(317)] = 8108,
  [SMALL_STATE(318)] = 8127,
  [SMALL_STATE(319)] = 8146,
  [SMALL_STATE(320)] = 8165,
  [SMALL_STATE(321)] = 8184,
  [SMALL_STATE(322)] = 8203,
  [SMALL_STATE(323)] = 8222,
  [SMALL_STATE(324)] = 8241,
  [SMALL_STATE(325)] = 8260,
  [SMALL_STATE(326)] = 8279,
  [SMALL_STATE(327)] = 8298,
  [SMALL_STATE(328)] = 8317,
  [SMALL_STATE(329)] = 8336,
  [SMALL_STATE(330)] = 8355,
  [SMALL_STATE(331)] = 8374,
  [SMALL_STATE(332)] = 8393,
  [SMALL_STATE(333)] = 8412,
  [SMALL_STATE(334)] = 8431,
  [SMALL_STATE(335)] = 8450,
  [SMALL_STATE(336)] = 8469,
  [SMALL_STATE(337)] = 8488,
  [SMALL_STATE(338)] = 8507,
  [SMALL_STATE(339)] = 8526,
  [SMALL_STATE(340)] = 8545,
  [SMALL_STATE(341)] = 8564,
  [SMALL_STATE(342)] = 8583,
  [SMALL_STATE(343)] = 8602,
  [SMALL_STATE(344)] = 8621,
  [SMALL_STATE(345)] = 8640,
  [SMALL_STATE(346)] = 8659,
  [SMALL_STATE(347)] = 8678,
  [SMALL_STATE(348)] = 8697,
  [SMALL_STATE(349)] = 8716,
  [SMALL_STATE(350)] = 8735,
  [SMALL_STATE(351)] = 8754,
  [SMALL_STATE(352)] = 8773,
  [SMALL_STATE(353)] = 8792,
  [SMALL_STATE(354)] = 8811,
  [SMALL_STATE(355)] = 8830,
  [SMALL_STATE(356)] = 8849,
  [SMALL_STATE(357)] = 8868,
  [SMALL_STATE(358)] = 8887,
  [SMALL_STATE(359)] = 8906,
  [SMALL_STATE(360)] = 8925,
  [SMALL_STATE(361)] = 8944,
  [SMALL_STATE(362)] = 8963,
  [SMALL_STATE(363)] = 8982,
  [SMALL_STATE(364)] = 9001,
  [SMALL_STATE(365)] = 9020,
  [SMALL_STATE(366)] = 9039,
  [SMALL_STATE(367)] = 9058,
  [SMALL_STATE(368)] = 9077,
  [SMALL_STATE(369)] = 9096,
  [SMALL_STATE(370)] = 9115,
  [SMALL_STATE(371)] = 9134,
  [SMALL_STATE(372)] = 9153,
  [SMALL_STATE(373)] = 9172,
  [SMALL_STATE(374)] = 9191,
  [SMALL_STATE(375)] = 9210,
  [SMALL_STATE(376)] = 9229,
  [SMALL_STATE(377)] = 9248,
  [SMALL_STATE(378)] = 9267,
  [SMALL_STATE(379)] = 9286,
  [SMALL_STATE(380)] = 9305,
  [SMALL_STATE(381)] = 9324,
  [SMALL_STATE(382)] = 9343,
  [SMALL_STATE(383)] = 9362,
  [SMALL_STATE(384)] = 9381,
  [SMALL_STATE(385)] = 9400,
  [SMALL_STATE(386)] = 9419,
  [SMALL_STATE(387)] = 9438,
  [SMALL_STATE(388)] = 9457,
  [SMALL_STATE(389)] = 9476,
  [SMALL_STATE(390)] = 9495,
  [SMALL_STATE(391)] = 9514,
  [SMALL_STATE(392)] = 9533,
  [SMALL_STATE(393)] = 9552,
  [SMALL_STATE(394)] = 9571,
  [SMALL_STATE(395)] = 9590,
  [SMALL_STATE(396)] = 9609,
  [SMALL_STATE(397)] = 9628,
  [SMALL_STATE(398)] = 9647,
  [SMALL_STATE(399)] = 9666,
  [SMALL_STATE(400)] = 9685,
  [SMALL_STATE(401)] = 9704,
  [SMALL_STATE(402)] = 9723,
  [SMALL_STATE(403)] = 9742,
  [SMALL_STATE(404)] = 9761,
  [SMALL_STATE(405)] = 9780,
  [SMALL_STATE(406)] = 9799,
  [SMALL_STATE(407)] = 9818,
  [SMALL_STATE(408)] = 9837,
  [SMALL_STATE(409)] = 9856,
  [SMALL_STATE(410)] = 9875,
  [SMALL_STATE(411)] = 9894,
  [SMALL_STATE(412)] = 9913,
  [SMALL_STATE(413)] = 9932,
  [SMALL_STATE(414)] = 9951,
  [SMALL_STATE(415)] = 9970,
  [SMALL_STATE(416)] = 9989,
  [SMALL_STATE(417)] = 10008,
  [SMALL_STATE(418)] = 10027,
  [SMALL_STATE(419)] = 10046,
  [SMALL_STATE(420)] = 10065,
  [SMALL_STATE(421)] = 10084,
  [SMALL_STATE(422)] = 10103,
  [SMALL_STATE(423)] = 10122,
  [SMALL_STATE(424)] = 10141,
  [SMALL_STATE(425)] = 10160,
  [SMALL_STATE(426)] = 10179,
  [SMALL_STATE(427)] = 10197,
  [SMALL_STATE(428)] = 10227,
  [SMALL_STATE(429)] = 10252,
  [SMALL_STATE(430)] = 10277,
  [SMALL_STATE(431)] = 10302,
  [SMALL_STATE(432)] = 10327,
  [SMALL_STATE(433)] = 10352,
  [SMALL_STATE(434)] = 10377,
  [SMALL_STATE(435)] = 10402,
  [SMALL_STATE(436)] = 10427,
  [SMALL_STATE(437)] = 10452,
  [SMALL_STATE(438)] = 10480,
  [SMALL_STATE(439)] = 10506,
  [SMALL_STATE(440)] = 10529,
  [SMALL_STATE(441)] = 10549,
  [SMALL_STATE(442)] = 10583,
  [SMALL_STATE(443)] = 10603,
  [SMALL_STATE(444)] = 10623,
  [SMALL_STATE(445)] = 10643,
  [SMALL_STATE(446)] = 10669,
  [SMALL_STATE(447)] = 10691,
  [SMALL_STATE(448)] = 10708,
  [SMALL_STATE(449)] = 10725,
  [SMALL_STATE(450)] = 10748,
  [SMALL_STATE(451)] = 10779,
  [SMALL_STATE(452)] = 10798,
  [SMALL_STATE(453)] = 10817,
  [SMALL_STATE(454)] = 10833,
  [SMALL_STATE(455)] = 10849,
  [SMALL_STATE(456)] = 10865,
  [SMALL_STATE(457)] = 10881,
  [SMALL_STATE(458)] = 10897,
  [SMALL_STATE(459)] = 10913,
  [SMALL_STATE(460)] = 10929,
  [SMALL_STATE(461)] = 10949,
  [SMALL_STATE(462)] = 10965,
  [SMALL_STATE(463)] = 10981,
  [SMALL_STATE(464)] = 10997,
  [SMALL_STATE(465)] = 11013,
  [SMALL_STATE(466)] = 11029,
  [SMALL_STATE(467)] = 11050,
  [SMALL_STATE(468)] = 11071,
  [SMALL_STATE(469)] = 11092,
  [SMALL_STATE(470)] = 11113,
  [SMALL_STATE(471)] = 11134,
  [SMALL_STATE(472)] = 11156,
  [SMALL_STATE(473)] = 11178,
  [SMALL_STATE(474)] = 11198,
  [SMALL_STATE(475)] = 11220,
  [SMALL_STATE(476)] = 11242,
  [SMALL_STATE(477)] = 11264,
  [SMALL_STATE(478)] = 11286,
  [SMALL_STATE(479)] = 11308,
  [SMALL_STATE(480)] = 11326,
  [SMALL_STATE(481)] = 11340,
  [SMALL_STATE(482)] = 11362,
  [SMALL_STATE(483)] = 11384,
  [SMALL_STATE(484)] = 11406,
  [SMALL_STATE(485)] = 11428,
  [SMALL_STATE(486)] = 11450,
  [SMALL_STATE(487)] = 11464,
  [SMALL_STATE(488)] = 11483,
  [SMALL_STATE(489)] = 11502,
  [SMALL_STATE(490)] = 11513,
  [SMALL_STATE(491)] = 11528,
  [SMALL_STATE(492)] = 11547,
  [SMALL_STATE(493)] = 11566,
  [SMALL_STATE(494)] = 11583,
  [SMALL_STATE(495)] = 11600,
  [SMALL_STATE(496)] = 11619,
  [SMALL_STATE(497)] = 11633,
  [SMALL_STATE(498)] = 11641,
  [SMALL_STATE(499)] = 11657,
  [SMALL_STATE(500)] = 11665,
  [SMALL_STATE(501)] = 11673,
  [SMALL_STATE(502)] = 11685,
  [SMALL_STATE(503)] = 11699,
  [SMALL_STATE(504)] = 11715,
  [SMALL_STATE(505)] = 11723,
  [SMALL_STATE(506)] = 11739,
  [SMALL_STATE(507)] = 11751,
  [SMALL_STATE(508)] = 11759,
  [SMALL_STATE(509)] = 11773,
  [SMALL_STATE(510)] = 11789,
  [SMALL_STATE(511)] = 11805,
  [SMALL_STATE(512)] = 11817,
  [SMALL_STATE(513)] = 11829,
  [SMALL_STATE(514)] = 11837,
  [SMALL_STATE(515)] = 11845,
  [SMALL_STATE(516)] = 11859,
  [SMALL_STATE(517)] = 11875,
  [SMALL_STATE(518)] = 11891,
  [SMALL_STATE(519)] = 11904,
  [SMALL_STATE(520)] = 11915,
  [SMALL_STATE(521)] = 11928,
  [SMALL_STATE(522)] = 11935,
  [SMALL_STATE(523)] = 11948,
  [SMALL_STATE(524)] = 11961,
  [SMALL_STATE(525)] = 11974,
  [SMALL_STATE(526)] = 11987,
  [SMALL_STATE(527)] = 12000,
  [SMALL_STATE(528)] = 12013,
  [SMALL_STATE(529)] = 12026,
  [SMALL_STATE(530)] = 12039,
  [SMALL_STATE(531)] = 12052,
  [SMALL_STATE(532)] = 12063,
  [SMALL_STATE(533)] = 12076,
  [SMALL_STATE(534)] = 12089,
  [SMALL_STATE(535)] = 12102,
  [SMALL_STATE(536)] = 12115,
  [SMALL_STATE(537)] = 12128,
  [SMALL_STATE(538)] = 12141,
  [SMALL_STATE(539)] = 12154,
  [SMALL_STATE(540)] = 12167,
  [SMALL_STATE(541)] = 12180,
  [SMALL_STATE(542)] = 12193,
  [SMALL_STATE(543)] = 12206,
  [SMALL_STATE(544)] = 12219,
  [SMALL_STATE(545)] = 12232,
  [SMALL_STATE(546)] = 12245,
  [SMALL_STATE(547)] = 12258,
  [SMALL_STATE(548)] = 12271,
  [SMALL_STATE(549)] = 12280,
  [SMALL_STATE(550)] = 12293,
  [SMALL_STATE(551)] = 12306,
  [SMALL_STATE(552)] = 12319,
  [SMALL_STATE(553)] = 12332,
  [SMALL_STATE(554)] = 12345,
  [SMALL_STATE(555)] = 12352,
  [SMALL_STATE(556)] = 12365,
  [SMALL_STATE(557)] = 12376,
  [SMALL_STATE(558)] = 12389,
  [SMALL_STATE(559)] = 12402,
  [SMALL_STATE(560)] = 12415,
  [SMALL_STATE(561)] = 12428,
  [SMALL_STATE(562)] = 12441,
  [SMALL_STATE(563)] = 12454,
  [SMALL_STATE(564)] = 12467,
  [SMALL_STATE(565)] = 12478,
  [SMALL_STATE(566)] = 12491,
  [SMALL_STATE(567)] = 12504,
  [SMALL_STATE(568)] = 12517,
  [SMALL_STATE(569)] = 12530,
  [SMALL_STATE(570)] = 12543,
  [SMALL_STATE(571)] = 12556,
  [SMALL_STATE(572)] = 12566,
  [SMALL_STATE(573)] = 12576,
  [SMALL_STATE(574)] = 12586,
  [SMALL_STATE(575)] = 12596,
  [SMALL_STATE(576)] = 12606,
  [SMALL_STATE(577)] = 12616,
  [SMALL_STATE(578)] = 12626,
  [SMALL_STATE(579)] = 12636,
  [SMALL_STATE(580)] = 12646,
  [SMALL_STATE(581)] = 12654,
  [SMALL_STATE(582)] = 12664,
  [SMALL_STATE(583)] = 12674,
  [SMALL_STATE(584)] = 12684,
  [SMALL_STATE(585)] = 12694,
  [SMALL_STATE(586)] = 12702,
  [SMALL_STATE(587)] = 12712,
  [SMALL_STATE(588)] = 12722,
  [SMALL_STATE(589)] = 12732,
  [SMALL_STATE(590)] = 12742,
  [SMALL_STATE(591)] = 12752,
  [SMALL_STATE(592)] = 12762,
  [SMALL_STATE(593)] = 12772,
  [SMALL_STATE(594)] = 12782,
  [SMALL_STATE(595)] = 12792,
  [SMALL_STATE(596)] = 12802,
  [SMALL_STATE(597)] = 12812,
  [SMALL_STATE(598)] = 12822,
  [SMALL_STATE(599)] = 12832,
  [SMALL_STATE(600)] = 12842,
  [SMALL_STATE(601)] = 12852,
  [SMALL_STATE(602)] = 12862,
  [SMALL_STATE(603)] = 12872,
  [SMALL_STATE(604)] = 12882,
  [SMALL_STATE(605)] = 12892,
  [SMALL_STATE(606)] = 12902,
  [SMALL_STATE(607)] = 12912,
  [SMALL_STATE(608)] = 12922,
  [SMALL_STATE(609)] = 12932,
  [SMALL_STATE(610)] = 12942,
  [SMALL_STATE(611)] = 12952,
  [SMALL_STATE(612)] = 12962,
  [SMALL_STATE(613)] = 12972,
  [SMALL_STATE(614)] = 12982,
  [SMALL_STATE(615)] = 12992,
  [SMALL_STATE(616)] = 13002,
  [SMALL_STATE(617)] = 13012,
  [SMALL_STATE(618)] = 13020,
  [SMALL_STATE(619)] = 13030,
  [SMALL_STATE(620)] = 13040,
  [SMALL_STATE(621)] = 13050,
  [SMALL_STATE(622)] = 13056,
  [SMALL_STATE(623)] = 13066,
  [SMALL_STATE(624)] = 13076,
  [SMALL_STATE(625)] = 13086,
  [SMALL_STATE(626)] = 13096,
  [SMALL_STATE(627)] = 13106,
  [SMALL_STATE(628)] = 13116,
  [SMALL_STATE(629)] = 13126,
  [SMALL_STATE(630)] = 13136,
  [SMALL_STATE(631)] = 13146,
  [SMALL_STATE(632)] = 13156,
  [SMALL_STATE(633)] = 13164,
  [SMALL_STATE(634)] = 13174,
  [SMALL_STATE(635)] = 13184,
  [SMALL_STATE(636)] = 13194,
  [SMALL_STATE(637)] = 13204,
  [SMALL_STATE(638)] = 13212,
  [SMALL_STATE(639)] = 13222,
  [SMALL_STATE(640)] = 13232,
  [SMALL_STATE(641)] = 13242,
  [SMALL_STATE(642)] = 13252,
  [SMALL_STATE(643)] = 13262,
  [SMALL_STATE(644)] = 13272,
  [SMALL_STATE(645)] = 13282,
  [SMALL_STATE(646)] = 13292,
  [SMALL_STATE(647)] = 13302,
  [SMALL_STATE(648)] = 13312,
  [SMALL_STATE(649)] = 13322,
  [SMALL_STATE(650)] = 13332,
  [SMALL_STATE(651)] = 13342,
  [SMALL_STATE(652)] = 13352,
  [SMALL_STATE(653)] = 13362,
  [SMALL_STATE(654)] = 13372,
  [SMALL_STATE(655)] = 13382,
  [SMALL_STATE(656)] = 13392,
  [SMALL_STATE(657)] = 13402,
  [SMALL_STATE(658)] = 13412,
  [SMALL_STATE(659)] = 13422,
  [SMALL_STATE(660)] = 13432,
  [SMALL_STATE(661)] = 13442,
  [SMALL_STATE(662)] = 13452,
  [SMALL_STATE(663)] = 13462,
  [SMALL_STATE(664)] = 13472,
  [SMALL_STATE(665)] = 13482,
  [SMALL_STATE(666)] = 13492,
  [SMALL_STATE(667)] = 13502,
  [SMALL_STATE(668)] = 13512,
  [SMALL_STATE(669)] = 13522,
  [SMALL_STATE(670)] = 13532,
  [SMALL_STATE(671)] = 13542,
  [SMALL_STATE(672)] = 13552,
  [SMALL_STATE(673)] = 13562,
  [SMALL_STATE(674)] = 13572,
  [SMALL_STATE(675)] = 13582,
  [SMALL_STATE(676)] = 13592,
  [SMALL_STATE(677)] = 13602,
  [SMALL_STATE(678)] = 13612,
  [SMALL_STATE(679)] = 13622,
  [SMALL_STATE(680)] = 13632,
  [SMALL_STATE(681)] = 13642,
  [SMALL_STATE(682)] = 13652,
  [SMALL_STATE(683)] = 13662,
  [SMALL_STATE(684)] = 13670,
  [SMALL_STATE(685)] = 13680,
  [SMALL_STATE(686)] = 13690,
  [SMALL_STATE(687)] = 13700,
  [SMALL_STATE(688)] = 13710,
  [SMALL_STATE(689)] = 13720,
  [SMALL_STATE(690)] = 13730,
  [SMALL_STATE(691)] = 13740,
  [SMALL_STATE(692)] = 13746,
  [SMALL_STATE(693)] = 13756,
  [SMALL_STATE(694)] = 13766,
  [SMALL_STATE(695)] = 13776,
  [SMALL_STATE(696)] = 13786,
  [SMALL_STATE(697)] = 13796,
  [SMALL_STATE(698)] = 13806,
  [SMALL_STATE(699)] = 13816,
  [SMALL_STATE(700)] = 13826,
  [SMALL_STATE(701)] = 13836,
  [SMALL_STATE(702)] = 13846,
  [SMALL_STATE(703)] = 13856,
  [SMALL_STATE(704)] = 13866,
  [SMALL_STATE(705)] = 13876,
  [SMALL_STATE(706)] = 13886,
  [SMALL_STATE(707)] = 13896,
  [SMALL_STATE(708)] = 13906,
  [SMALL_STATE(709)] = 13916,
  [SMALL_STATE(710)] = 13926,
  [SMALL_STATE(711)] = 13934,
  [SMALL_STATE(712)] = 13944,
  [SMALL_STATE(713)] = 13954,
  [SMALL_STATE(714)] = 13964,
  [SMALL_STATE(715)] = 13974,
  [SMALL_STATE(716)] = 13984,
  [SMALL_STATE(717)] = 13994,
  [SMALL_STATE(718)] = 14004,
  [SMALL_STATE(719)] = 14014,
  [SMALL_STATE(720)] = 14024,
  [SMALL_STATE(721)] = 14034,
  [SMALL_STATE(722)] = 14041,
  [SMALL_STATE(723)] = 14048,
  [SMALL_STATE(724)] = 14055,
  [SMALL_STATE(725)] = 14062,
  [SMALL_STATE(726)] = 14069,
  [SMALL_STATE(727)] = 14076,
  [SMALL_STATE(728)] = 14083,
  [SMALL_STATE(729)] = 14090,
  [SMALL_STATE(730)] = 14097,
  [SMALL_STATE(731)] = 14104,
  [SMALL_STATE(732)] = 14111,
  [SMALL_STATE(733)] = 14118,
  [SMALL_STATE(734)] = 14125,
  [SMALL_STATE(735)] = 14132,
  [SMALL_STATE(736)] = 14139,
  [SMALL_STATE(737)] = 14146,
  [SMALL_STATE(738)] = 14153,
  [SMALL_STATE(739)] = 14160,
  [SMALL_STATE(740)] = 14165,
  [SMALL_STATE(741)] = 14172,
  [SMALL_STATE(742)] = 14179,
  [SMALL_STATE(743)] = 14186,
  [SMALL_STATE(744)] = 14193,
  [SMALL_STATE(745)] = 14200,
  [SMALL_STATE(746)] = 14207,
  [SMALL_STATE(747)] = 14214,
  [SMALL_STATE(748)] = 14221,
  [SMALL_STATE(749)] = 14228,
  [SMALL_STATE(750)] = 14233,
  [SMALL_STATE(751)] = 14240,
  [SMALL_STATE(752)] = 14245,
  [SMALL_STATE(753)] = 14250,
  [SMALL_STATE(754)] = 14257,
  [SMALL_STATE(755)] = 14262,
  [SMALL_STATE(756)] = 14269,
  [SMALL_STATE(757)] = 14276,
  [SMALL_STATE(758)] = 14283,
  [SMALL_STATE(759)] = 14290,
  [SMALL_STATE(760)] = 14295,
  [SMALL_STATE(761)] = 14302,
  [SMALL_STATE(762)] = 14309,
  [SMALL_STATE(763)] = 14314,
  [SMALL_STATE(764)] = 14319,
  [SMALL_STATE(765)] = 14326,
  [SMALL_STATE(766)] = 14333,
  [SMALL_STATE(767)] = 14340,
  [SMALL_STATE(768)] = 14347,
  [SMALL_STATE(769)] = 14352,
  [SMALL_STATE(770)] = 14359,
  [SMALL_STATE(771)] = 14366,
  [SMALL_STATE(772)] = 14371,
  [SMALL_STATE(773)] = 14378,
  [SMALL_STATE(774)] = 14385,
  [SMALL_STATE(775)] = 14392,
  [SMALL_STATE(776)] = 14399,
  [SMALL_STATE(777)] = 14406,
  [SMALL_STATE(778)] = 14413,
  [SMALL_STATE(779)] = 14420,
  [SMALL_STATE(780)] = 14425,
  [SMALL_STATE(781)] = 14430,
  [SMALL_STATE(782)] = 14437,
  [SMALL_STATE(783)] = 14444,
  [SMALL_STATE(784)] = 14451,
  [SMALL_STATE(785)] = 14458,
  [SMALL_STATE(786)] = 14465,
  [SMALL_STATE(787)] = 14470,
  [SMALL_STATE(788)] = 14477,
  [SMALL_STATE(789)] = 14484,
  [SMALL_STATE(790)] = 14491,
  [SMALL_STATE(791)] = 14498,
  [SMALL_STATE(792)] = 14505,
  [SMALL_STATE(793)] = 14512,
  [SMALL_STATE(794)] = 14519,
  [SMALL_STATE(795)] = 14526,
  [SMALL_STATE(796)] = 14531,
  [SMALL_STATE(797)] = 14536,
  [SMALL_STATE(798)] = 14543,
  [SMALL_STATE(799)] = 14550,
  [SMALL_STATE(800)] = 14555,
  [SMALL_STATE(801)] = 14562,
  [SMALL_STATE(802)] = 14567,
  [SMALL_STATE(803)] = 14574,
  [SMALL_STATE(804)] = 14579,
  [SMALL_STATE(805)] = 14586,
  [SMALL_STATE(806)] = 14593,
  [SMALL_STATE(807)] = 14600,
  [SMALL_STATE(808)] = 14607,
  [SMALL_STATE(809)] = 14614,
  [SMALL_STATE(810)] = 14621,
  [SMALL_STATE(811)] = 14628,
  [SMALL_STATE(812)] = 14633,
  [SMALL_STATE(813)] = 14638,
  [SMALL_STATE(814)] = 14645,
  [SMALL_STATE(815)] = 14650,
  [SMALL_STATE(816)] = 14657,
  [SMALL_STATE(817)] = 14664,
  [SMALL_STATE(818)] = 14671,
  [SMALL_STATE(819)] = 14678,
  [SMALL_STATE(820)] = 14683,
  [SMALL_STATE(821)] = 14690,
  [SMALL_STATE(822)] = 14695,
  [SMALL_STATE(823)] = 14702,
  [SMALL_STATE(824)] = 14709,
  [SMALL_STATE(825)] = 14714,
  [SMALL_STATE(826)] = 14721,
  [SMALL_STATE(827)] = 14728,
  [SMALL_STATE(828)] = 14735,
  [SMALL_STATE(829)] = 14740,
  [SMALL_STATE(830)] = 14745,
  [SMALL_STATE(831)] = 14750,
  [SMALL_STATE(832)] = 14757,
  [SMALL_STATE(833)] = 14764,
  [SMALL_STATE(834)] = 14771,
  [SMALL_STATE(835)] = 14778,
  [SMALL_STATE(836)] = 14785,
  [SMALL_STATE(837)] = 14792,
  [SMALL_STATE(838)] = 14799,
  [SMALL_STATE(839)] = 14806,
  [SMALL_STATE(840)] = 14811,
  [SMALL_STATE(841)] = 14816,
  [SMALL_STATE(842)] = 14823,
  [SMALL_STATE(843)] = 14830,
  [SMALL_STATE(844)] = 14837,
  [SMALL_STATE(845)] = 14844,
  [SMALL_STATE(846)] = 14851,
  [SMALL_STATE(847)] = 14856,
  [SMALL_STATE(848)] = 14863,
  [SMALL_STATE(849)] = 14870,
  [SMALL_STATE(850)] = 14877,
  [SMALL_STATE(851)] = 14884,
  [SMALL_STATE(852)] = 14891,
  [SMALL_STATE(853)] = 14898,
  [SMALL_STATE(854)] = 14905,
  [SMALL_STATE(855)] = 14912,
  [SMALL_STATE(856)] = 14917,
  [SMALL_STATE(857)] = 14924,
  [SMALL_STATE(858)] = 14931,
  [SMALL_STATE(859)] = 14938,
  [SMALL_STATE(860)] = 14943,
  [SMALL_STATE(861)] = 14950,
  [SMALL_STATE(862)] = 14957,
  [SMALL_STATE(863)] = 14964,
  [SMALL_STATE(864)] = 14971,
  [SMALL_STATE(865)] = 14978,
  [SMALL_STATE(866)] = 14985,
  [SMALL_STATE(867)] = 14990,
  [SMALL_STATE(868)] = 14997,
  [SMALL_STATE(869)] = 15004,
  [SMALL_STATE(870)] = 15011,
  [SMALL_STATE(871)] = 15018,
  [SMALL_STATE(872)] = 15025,
  [SMALL_STATE(873)] = 15032,
  [SMALL_STATE(874)] = 15037,
  [SMALL_STATE(875)] = 15041,
  [SMALL_STATE(876)] = 15045,
  [SMALL_STATE(877)] = 15049,
  [SMALL_STATE(878)] = 15053,
  [SMALL_STATE(879)] = 15057,
  [SMALL_STATE(880)] = 15061,
  [SMALL_STATE(881)] = 15065,
  [SMALL_STATE(882)] = 15069,
  [SMALL_STATE(883)] = 15073,
  [SMALL_STATE(884)] = 15077,
  [SMALL_STATE(885)] = 15081,
  [SMALL_STATE(886)] = 15085,
  [SMALL_STATE(887)] = 15089,
  [SMALL_STATE(888)] = 15093,
  [SMALL_STATE(889)] = 15097,
  [SMALL_STATE(890)] = 15101,
  [SMALL_STATE(891)] = 15105,
  [SMALL_STATE(892)] = 15109,
  [SMALL_STATE(893)] = 15113,
  [SMALL_STATE(894)] = 15117,
  [SMALL_STATE(895)] = 15121,
  [SMALL_STATE(896)] = 15125,
  [SMALL_STATE(897)] = 15129,
  [SMALL_STATE(898)] = 15133,
  [SMALL_STATE(899)] = 15137,
  [SMALL_STATE(900)] = 15141,
  [SMALL_STATE(901)] = 15145,
  [SMALL_STATE(902)] = 15149,
  [SMALL_STATE(903)] = 15153,
  [SMALL_STATE(904)] = 15157,
  [SMALL_STATE(905)] = 15161,
  [SMALL_STATE(906)] = 15165,
  [SMALL_STATE(907)] = 15169,
  [SMALL_STATE(908)] = 15173,
  [SMALL_STATE(909)] = 15177,
  [SMALL_STATE(910)] = 15181,
  [SMALL_STATE(911)] = 15185,
  [SMALL_STATE(912)] = 15189,
  [SMALL_STATE(913)] = 15193,
  [SMALL_STATE(914)] = 15197,
  [SMALL_STATE(915)] = 15201,
  [SMALL_STATE(916)] = 15205,
  [SMALL_STATE(917)] = 15209,
  [SMALL_STATE(918)] = 15213,
  [SMALL_STATE(919)] = 15217,
  [SMALL_STATE(920)] = 15221,
  [SMALL_STATE(921)] = 15225,
  [SMALL_STATE(922)] = 15229,
  [SMALL_STATE(923)] = 15233,
  [SMALL_STATE(924)] = 15237,
  [SMALL_STATE(925)] = 15241,
  [SMALL_STATE(926)] = 15245,
  [SMALL_STATE(927)] = 15249,
  [SMALL_STATE(928)] = 15253,
  [SMALL_STATE(929)] = 15257,
  [SMALL_STATE(930)] = 15261,
  [SMALL_STATE(931)] = 15265,
  [SMALL_STATE(932)] = 15269,
  [SMALL_STATE(933)] = 15273,
  [SMALL_STATE(934)] = 15277,
  [SMALL_STATE(935)] = 15281,
  [SMALL_STATE(936)] = 15285,
  [SMALL_STATE(937)] = 15289,
  [SMALL_STATE(938)] = 15293,
  [SMALL_STATE(939)] = 15297,
  [SMALL_STATE(940)] = 15301,
  [SMALL_STATE(941)] = 15305,
  [SMALL_STATE(942)] = 15309,
  [SMALL_STATE(943)] = 15313,
  [SMALL_STATE(944)] = 15317,
  [SMALL_STATE(945)] = 15321,
  [SMALL_STATE(946)] = 15325,
  [SMALL_STATE(947)] = 15329,
  [SMALL_STATE(948)] = 15333,
  [SMALL_STATE(949)] = 15337,
  [SMALL_STATE(950)] = 15341,
  [SMALL_STATE(951)] = 15345,
  [SMALL_STATE(952)] = 15349,
  [SMALL_STATE(953)] = 15353,
  [SMALL_STATE(954)] = 15357,
  [SMALL_STATE(955)] = 15361,
  [SMALL_STATE(956)] = 15365,
  [SMALL_STATE(957)] = 15369,
  [SMALL_STATE(958)] = 15373,
  [SMALL_STATE(959)] = 15377,
  [SMALL_STATE(960)] = 15381,
  [SMALL_STATE(961)] = 15385,
  [SMALL_STATE(962)] = 15389,
  [SMALL_STATE(963)] = 15393,
  [SMALL_STATE(964)] = 15397,
  [SMALL_STATE(965)] = 15401,
  [SMALL_STATE(966)] = 15405,
  [SMALL_STATE(967)] = 15409,
  [SMALL_STATE(968)] = 15413,
  [SMALL_STATE(969)] = 15417,
  [SMALL_STATE(970)] = 15421,
  [SMALL_STATE(971)] = 15425,
  [SMALL_STATE(972)] = 15429,
  [SMALL_STATE(973)] = 15433,
  [SMALL_STATE(974)] = 15437,
  [SMALL_STATE(975)] = 15441,
  [SMALL_STATE(976)] = 15445,
  [SMALL_STATE(977)] = 15449,
  [SMALL_STATE(978)] = 15453,
  [SMALL_STATE(979)] = 15457,
  [SMALL_STATE(980)] = 15461,
  [SMALL_STATE(981)] = 15465,
  [SMALL_STATE(982)] = 15469,
  [SMALL_STATE(983)] = 15473,
  [SMALL_STATE(984)] = 15477,
  [SMALL_STATE(985)] = 15481,
  [SMALL_STATE(986)] = 15485,
  [SMALL_STATE(987)] = 15489,
  [SMALL_STATE(988)] = 15493,
  [SMALL_STATE(989)] = 15497,
  [SMALL_STATE(990)] = 15501,
  [SMALL_STATE(991)] = 15505,
  [SMALL_STATE(992)] = 15509,
  [SMALL_STATE(993)] = 15513,
  [SMALL_STATE(994)] = 15517,
  [SMALL_STATE(995)] = 15521,
  [SMALL_STATE(996)] = 15525,
  [SMALL_STATE(997)] = 15529,
  [SMALL_STATE(998)] = 15533,
  [SMALL_STATE(999)] = 15537,
  [SMALL_STATE(1000)] = 15541,
  [SMALL_STATE(1001)] = 15545,
  [SMALL_STATE(1002)] = 15549,
  [SMALL_STATE(1003)] = 15553,
  [SMALL_STATE(1004)] = 15557,
  [SMALL_STATE(1005)] = 15561,
  [SMALL_STATE(1006)] = 15565,
  [SMALL_STATE(1007)] = 15569,
  [SMALL_STATE(1008)] = 15573,
  [SMALL_STATE(1009)] = 15577,
  [SMALL_STATE(1010)] = 15581,
  [SMALL_STATE(1011)] = 15585,
  [SMALL_STATE(1012)] = 15589,
  [SMALL_STATE(1013)] = 15593,
  [SMALL_STATE(1014)] = 15597,
  [SMALL_STATE(1015)] = 15601,
  [SMALL_STATE(1016)] = 15605,
  [SMALL_STATE(1017)] = 15609,
  [SMALL_STATE(1018)] = 15613,
  [SMALL_STATE(1019)] = 15617,
  [SMALL_STATE(1020)] = 15621,
  [SMALL_STATE(1021)] = 15625,
  [SMALL_STATE(1022)] = 15629,
  [SMALL_STATE(1023)] = 15633,
  [SMALL_STATE(1024)] = 15637,
  [SMALL_STATE(1025)] = 15641,
  [SMALL_STATE(1026)] = 15645,
  [SMALL_STATE(1027)] = 15649,
  [SMALL_STATE(1028)] = 15653,
  [SMALL_STATE(1029)] = 15657,
  [SMALL_STATE(1030)] = 15661,
  [SMALL_STATE(1031)] = 15665,
  [SMALL_STATE(1032)] = 15669,
  [SMALL_STATE(1033)] = 15673,
  [SMALL_STATE(1034)] = 15677,
  [SMALL_STATE(1035)] = 15681,
  [SMALL_STATE(1036)] = 15685,
  [SMALL_STATE(1037)] = 15689,
  [SMALL_STATE(1038)] = 15693,
  [SMALL_STATE(1039)] = 15697,
  [SMALL_STATE(1040)] = 15701,
  [SMALL_STATE(1041)] = 15705,
  [SMALL_STATE(1042)] = 15709,
  [SMALL_STATE(1043)] = 15713,
  [SMALL_STATE(1044)] = 15717,
  [SMALL_STATE(1045)] = 15721,
  [SMALL_STATE(1046)] = 15725,
  [SMALL_STATE(1047)] = 15729,
  [SMALL_STATE(1048)] = 15733,
  [SMALL_STATE(1049)] = 15737,
  [SMALL_STATE(1050)] = 15741,
  [SMALL_STATE(1051)] = 15745,
  [SMALL_STATE(1052)] = 15749,
  [SMALL_STATE(1053)] = 15753,
  [SMALL_STATE(1054)] = 15757,
  [SMALL_STATE(1055)] = 15761,
  [SMALL_STATE(1056)] = 15765,
  [SMALL_STATE(1057)] = 15769,
  [SMALL_STATE(1058)] = 15773,
  [SMALL_STATE(1059)] = 15777,
  [SMALL_STATE(1060)] = 15781,
  [SMALL_STATE(1061)] = 15785,
  [SMALL_STATE(1062)] = 15789,
  [SMALL_STATE(1063)] = 15793,
  [SMALL_STATE(1064)] = 15797,
  [SMALL_STATE(1065)] = 15801,
  [SMALL_STATE(1066)] = 15805,
  [SMALL_STATE(1067)] = 15809,
  [SMALL_STATE(1068)] = 15813,
  [SMALL_STATE(1069)] = 15817,
  [SMALL_STATE(1070)] = 15821,
  [SMALL_STATE(1071)] = 15825,
  [SMALL_STATE(1072)] = 15829,
  [SMALL_STATE(1073)] = 15833,
  [SMALL_STATE(1074)] = 15837,
  [SMALL_STATE(1075)] = 15841,
  [SMALL_STATE(1076)] = 15845,
  [SMALL_STATE(1077)] = 15849,
  [SMALL_STATE(1078)] = 15853,
  [SMALL_STATE(1079)] = 15857,
  [SMALL_STATE(1080)] = 15861,
  [SMALL_STATE(1081)] = 15865,
  [SMALL_STATE(1082)] = 15869,
  [SMALL_STATE(1083)] = 15873,
  [SMALL_STATE(1084)] = 15877,
  [SMALL_STATE(1085)] = 15881,
  [SMALL_STATE(1086)] = 15885,
  [SMALL_STATE(1087)] = 15889,
  [SMALL_STATE(1088)] = 15893,
  [SMALL_STATE(1089)] = 15897,
  [SMALL_STATE(1090)] = 15901,
  [SMALL_STATE(1091)] = 15905,
  [SMALL_STATE(1092)] = 15909,
  [SMALL_STATE(1093)] = 15913,
  [SMALL_STATE(1094)] = 15917,
  [SMALL_STATE(1095)] = 15921,
  [SMALL_STATE(1096)] = 15925,
  [SMALL_STATE(1097)] = 15929,
  [SMALL_STATE(1098)] = 15933,
  [SMALL_STATE(1099)] = 15937,
  [SMALL_STATE(1100)] = 15941,
  [SMALL_STATE(1101)] = 15945,
  [SMALL_STATE(1102)] = 15949,
  [SMALL_STATE(1103)] = 15953,
  [SMALL_STATE(1104)] = 15957,
  [SMALL_STATE(1105)] = 15961,
  [SMALL_STATE(1106)] = 15965,
  [SMALL_STATE(1107)] = 15969,
  [SMALL_STATE(1108)] = 15973,
  [SMALL_STATE(1109)] = 15977,
  [SMALL_STATE(1110)] = 15981,
  [SMALL_STATE(1111)] = 15985,
  [SMALL_STATE(1112)] = 15989,
  [SMALL_STATE(1113)] = 15993,
  [SMALL_STATE(1114)] = 15997,
  [SMALL_STATE(1115)] = 16001,
  [SMALL_STATE(1116)] = 16005,
  [SMALL_STATE(1117)] = 16009,
  [SMALL_STATE(1118)] = 16013,
  [SMALL_STATE(1119)] = 16017,
  [SMALL_STATE(1120)] = 16021,
  [SMALL_STATE(1121)] = 16025,
  [SMALL_STATE(1122)] = 16029,
  [SMALL_STATE(1123)] = 16033,
  [SMALL_STATE(1124)] = 16037,
  [SMALL_STATE(1125)] = 16041,
  [SMALL_STATE(1126)] = 16045,
  [SMALL_STATE(1127)] = 16049,
  [SMALL_STATE(1128)] = 16053,
  [SMALL_STATE(1129)] = 16057,
  [SMALL_STATE(1130)] = 16061,
  [SMALL_STATE(1131)] = 16065,
  [SMALL_STATE(1132)] = 16069,
  [SMALL_STATE(1133)] = 16073,
  [SMALL_STATE(1134)] = 16077,
  [SMALL_STATE(1135)] = 16081,
  [SMALL_STATE(1136)] = 16085,
  [SMALL_STATE(1137)] = 16089,
  [SMALL_STATE(1138)] = 16093,
  [SMALL_STATE(1139)] = 16097,
  [SMALL_STATE(1140)] = 16101,
  [SMALL_STATE(1141)] = 16105,
  [SMALL_STATE(1142)] = 16109,
  [SMALL_STATE(1143)] = 16113,
  [SMALL_STATE(1144)] = 16117,
  [SMALL_STATE(1145)] = 16121,
  [SMALL_STATE(1146)] = 16125,
  [SMALL_STATE(1147)] = 16129,
  [SMALL_STATE(1148)] = 16133,
  [SMALL_STATE(1149)] = 16137,
  [SMALL_STATE(1150)] = 16141,
  [SMALL_STATE(1151)] = 16145,
  [SMALL_STATE(1152)] = 16149,
  [SMALL_STATE(1153)] = 16153,
  [SMALL_STATE(1154)] = 16157,
  [SMALL_STATE(1155)] = 16161,
  [SMALL_STATE(1156)] = 16165,
  [SMALL_STATE(1157)] = 16169,
  [SMALL_STATE(1158)] = 16173,
  [SMALL_STATE(1159)] = 16177,
  [SMALL_STATE(1160)] = 16181,
  [SMALL_STATE(1161)] = 16185,
  [SMALL_STATE(1162)] = 16189,
  [SMALL_STATE(1163)] = 16193,
  [SMALL_STATE(1164)] = 16197,
  [SMALL_STATE(1165)] = 16201,
  [SMALL_STATE(1166)] = 16205,
  [SMALL_STATE(1167)] = 16209,
  [SMALL_STATE(1168)] = 16213,
  [SMALL_STATE(1169)] = 16217,
  [SMALL_STATE(1170)] = 16221,
  [SMALL_STATE(1171)] = 16225,
  [SMALL_STATE(1172)] = 16229,
  [SMALL_STATE(1173)] = 16233,
  [SMALL_STATE(1174)] = 16237,
  [SMALL_STATE(1175)] = 16241,
  [SMALL_STATE(1176)] = 16245,
  [SMALL_STATE(1177)] = 16249,
  [SMALL_STATE(1178)] = 16253,
  [SMALL_STATE(1179)] = 16257,
  [SMALL_STATE(1180)] = 16261,
  [SMALL_STATE(1181)] = 16265,
  [SMALL_STATE(1182)] = 16269,
  [SMALL_STATE(1183)] = 16273,
  [SMALL_STATE(1184)] = 16277,
  [SMALL_STATE(1185)] = 16281,
  [SMALL_STATE(1186)] = 16285,
  [SMALL_STATE(1187)] = 16289,
  [SMALL_STATE(1188)] = 16293,
  [SMALL_STATE(1189)] = 16297,
  [SMALL_STATE(1190)] = 16301,
  [SMALL_STATE(1191)] = 16305,
  [SMALL_STATE(1192)] = 16309,
  [SMALL_STATE(1193)] = 16313,
  [SMALL_STATE(1194)] = 16317,
  [SMALL_STATE(1195)] = 16321,
  [SMALL_STATE(1196)] = 16325,
  [SMALL_STATE(1197)] = 16329,
  [SMALL_STATE(1198)] = 16333,
  [SMALL_STATE(1199)] = 16337,
  [SMALL_STATE(1200)] = 16341,
  [SMALL_STATE(1201)] = 16345,
  [SMALL_STATE(1202)] = 16349,
  [SMALL_STATE(1203)] = 16353,
  [SMALL_STATE(1204)] = 16357,
  [SMALL_STATE(1205)] = 16361,
  [SMALL_STATE(1206)] = 16365,
  [SMALL_STATE(1207)] = 16369,
  [SMALL_STATE(1208)] = 16373,
  [SMALL_STATE(1209)] = 16377,
  [SMALL_STATE(1210)] = 16381,
  [SMALL_STATE(1211)] = 16385,
  [SMALL_STATE(1212)] = 16389,
  [SMALL_STATE(1213)] = 16393,
  [SMALL_STATE(1214)] = 16397,
  [SMALL_STATE(1215)] = 16401,
  [SMALL_STATE(1216)] = 16405,
  [SMALL_STATE(1217)] = 16409,
  [SMALL_STATE(1218)] = 16413,
  [SMALL_STATE(1219)] = 16417,
  [SMALL_STATE(1220)] = 16421,
  [SMALL_STATE(1221)] = 16425,
  [SMALL_STATE(1222)] = 16429,
  [SMALL_STATE(1223)] = 16433,
  [SMALL_STATE(1224)] = 16437,
  [SMALL_STATE(1225)] = 16441,
  [SMALL_STATE(1226)] = 16445,
  [SMALL_STATE(1227)] = 16449,
  [SMALL_STATE(1228)] = 16453,
  [SMALL_STATE(1229)] = 16457,
  [SMALL_STATE(1230)] = 16461,
  [SMALL_STATE(1231)] = 16465,
  [SMALL_STATE(1232)] = 16469,
  [SMALL_STATE(1233)] = 16473,
  [SMALL_STATE(1234)] = 16477,
  [SMALL_STATE(1235)] = 16481,
  [SMALL_STATE(1236)] = 16485,
  [SMALL_STATE(1237)] = 16489,
  [SMALL_STATE(1238)] = 16493,
  [SMALL_STATE(1239)] = 16497,
  [SMALL_STATE(1240)] = 16501,
  [SMALL_STATE(1241)] = 16505,
  [SMALL_STATE(1242)] = 16509,
  [SMALL_STATE(1243)] = 16513,
  [SMALL_STATE(1244)] = 16517,
  [SMALL_STATE(1245)] = 16521,
  [SMALL_STATE(1246)] = 16525,
  [SMALL_STATE(1247)] = 16529,
  [SMALL_STATE(1248)] = 16533,
  [SMALL_STATE(1249)] = 16537,
  [SMALL_STATE(1250)] = 16541,
  [SMALL_STATE(1251)] = 16545,
  [SMALL_STATE(1252)] = 16549,
  [SMALL_STATE(1253)] = 16553,
  [SMALL_STATE(1254)] = 16557,
  [SMALL_STATE(1255)] = 16561,
  [SMALL_STATE(1256)] = 16565,
  [SMALL_STATE(1257)] = 16569,
  [SMALL_STATE(1258)] = 16573,
  [SMALL_STATE(1259)] = 16577,
  [SMALL_STATE(1260)] = 16581,
  [SMALL_STATE(1261)] = 16585,
  [SMALL_STATE(1262)] = 16589,
  [SMALL_STATE(1263)] = 16593,
  [SMALL_STATE(1264)] = 16597,
  [SMALL_STATE(1265)] = 16601,
  [SMALL_STATE(1266)] = 16605,
  [SMALL_STATE(1267)] = 16609,
  [SMALL_STATE(1268)] = 16613,
  [SMALL_STATE(1269)] = 16617,
  [SMALL_STATE(1270)] = 16621,
  [SMALL_STATE(1271)] = 16625,
  [SMALL_STATE(1272)] = 16629,
  [SMALL_STATE(1273)] = 16633,
  [SMALL_STATE(1274)] = 16637,
  [SMALL_STATE(1275)] = 16641,
  [SMALL_STATE(1276)] = 16645,
  [SMALL_STATE(1277)] = 16649,
  [SMALL_STATE(1278)] = 16653,
  [SMALL_STATE(1279)] = 16657,
  [SMALL_STATE(1280)] = 16661,
  [SMALL_STATE(1281)] = 16665,
  [SMALL_STATE(1282)] = 16669,
  [SMALL_STATE(1283)] = 16673,
  [SMALL_STATE(1284)] = 16677,
  [SMALL_STATE(1285)] = 16681,
  [SMALL_STATE(1286)] = 16685,
  [SMALL_STATE(1287)] = 16689,
  [SMALL_STATE(1288)] = 16693,
  [SMALL_STATE(1289)] = 16697,
  [SMALL_STATE(1290)] = 16701,
  [SMALL_STATE(1291)] = 16705,
  [SMALL_STATE(1292)] = 16709,
  [SMALL_STATE(1293)] = 16713,
  [SMALL_STATE(1294)] = 16717,
  [SMALL_STATE(1295)] = 16721,
  [SMALL_STATE(1296)] = 16725,
  [SMALL_STATE(1297)] = 16729,
  [SMALL_STATE(1298)] = 16733,
  [SMALL_STATE(1299)] = 16737,
  [SMALL_STATE(1300)] = 16741,
  [SMALL_STATE(1301)] = 16745,
  [SMALL_STATE(1302)] = 16749,
  [SMALL_STATE(1303)] = 16753,
  [SMALL_STATE(1304)] = 16757,
  [SMALL_STATE(1305)] = 16761,
  [SMALL_STATE(1306)] = 16765,
  [SMALL_STATE(1307)] = 16769,
  [SMALL_STATE(1308)] = 16773,
  [SMALL_STATE(1309)] = 16777,
  [SMALL_STATE(1310)] = 16781,
  [SMALL_STATE(1311)] = 16785,
  [SMALL_STATE(1312)] = 16789,
  [SMALL_STATE(1313)] = 16793,
  [SMALL_STATE(1314)] = 16797,
  [SMALL_STATE(1315)] = 16801,
  [SMALL_STATE(1316)] = 16805,
  [SMALL_STATE(1317)] = 16809,
  [SMALL_STATE(1318)] = 16813,
  [SMALL_STATE(1319)] = 16817,
  [SMALL_STATE(1320)] = 16821,
  [SMALL_STATE(1321)] = 16825,
  [SMALL_STATE(1322)] = 16829,
  [SMALL_STATE(1323)] = 16833,
  [SMALL_STATE(1324)] = 16837,
  [SMALL_STATE(1325)] = 16841,
  [SMALL_STATE(1326)] = 16845,
  [SMALL_STATE(1327)] = 16849,
  [SMALL_STATE(1328)] = 16853,
  [SMALL_STATE(1329)] = 16857,
  [SMALL_STATE(1330)] = 16861,
  [SMALL_STATE(1331)] = 16865,
  [SMALL_STATE(1332)] = 16869,
  [SMALL_STATE(1333)] = 16873,
  [SMALL_STATE(1334)] = 16877,
  [SMALL_STATE(1335)] = 16881,
  [SMALL_STATE(1336)] = 16885,
  [SMALL_STATE(1337)] = 16889,
  [SMALL_STATE(1338)] = 16893,
  [SMALL_STATE(1339)] = 16897,
  [SMALL_STATE(1340)] = 16901,
  [SMALL_STATE(1341)] = 16905,
  [SMALL_STATE(1342)] = 16909,
  [SMALL_STATE(1343)] = 16913,
  [SMALL_STATE(1344)] = 16917,
  [SMALL_STATE(1345)] = 16921,
  [SMALL_STATE(1346)] = 16925,
  [SMALL_STATE(1347)] = 16929,
  [SMALL_STATE(1348)] = 16933,
  [SMALL_STATE(1349)] = 16937,
  [SMALL_STATE(1350)] = 16941,
  [SMALL_STATE(1351)] = 16945,
  [SMALL_STATE(1352)] = 16949,
  [SMALL_STATE(1353)] = 16953,
  [SMALL_STATE(1354)] = 16957,
  [SMALL_STATE(1355)] = 16961,
  [SMALL_STATE(1356)] = 16965,
  [SMALL_STATE(1357)] = 16969,
  [SMALL_STATE(1358)] = 16973,
  [SMALL_STATE(1359)] = 16977,
  [SMALL_STATE(1360)] = 16981,
  [SMALL_STATE(1361)] = 16985,
  [SMALL_STATE(1362)] = 16989,
  [SMALL_STATE(1363)] = 16993,
  [SMALL_STATE(1364)] = 16997,
  [SMALL_STATE(1365)] = 17001,
  [SMALL_STATE(1366)] = 17005,
  [SMALL_STATE(1367)] = 17009,
  [SMALL_STATE(1368)] = 17013,
  [SMALL_STATE(1369)] = 17017,
  [SMALL_STATE(1370)] = 17021,
  [SMALL_STATE(1371)] = 17025,
  [SMALL_STATE(1372)] = 17029,
  [SMALL_STATE(1373)] = 17033,
  [SMALL_STATE(1374)] = 17037,
  [SMALL_STATE(1375)] = 17041,
  [SMALL_STATE(1376)] = 17045,
  [SMALL_STATE(1377)] = 17049,
  [SMALL_STATE(1378)] = 17053,
  [SMALL_STATE(1379)] = 17057,
  [SMALL_STATE(1380)] = 17061,
  [SMALL_STATE(1381)] = 17065,
  [SMALL_STATE(1382)] = 17069,
  [SMALL_STATE(1383)] = 17073,
  [SMALL_STATE(1384)] = 17077,
  [SMALL_STATE(1385)] = 17081,
  [SMALL_STATE(1386)] = 17085,
  [SMALL_STATE(1387)] = 17089,
  [SMALL_STATE(1388)] = 17093,
  [SMALL_STATE(1389)] = 17097,
  [SMALL_STATE(1390)] = 17101,
  [SMALL_STATE(1391)] = 17105,
  [SMALL_STATE(1392)] = 17109,
  [SMALL_STATE(1393)] = 17113,
  [SMALL_STATE(1394)] = 17117,
  [SMALL_STATE(1395)] = 17121,
  [SMALL_STATE(1396)] = 17125,
  [SMALL_STATE(1397)] = 17129,
  [SMALL_STATE(1398)] = 17133,
  [SMALL_STATE(1399)] = 17137,
  [SMALL_STATE(1400)] = 17141,
  [SMALL_STATE(1401)] = 17145,
  [SMALL_STATE(1402)] = 17149,
  [SMALL_STATE(1403)] = 17153,
  [SMALL_STATE(1404)] = 17157,
  [SMALL_STATE(1405)] = 17161,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1349),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1405),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1404),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1403),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(478),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(517),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(585),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1349),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(858),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(441),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(450),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1405),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1404),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(448),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(447),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(492),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(442),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1403),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 19),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 19),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(847),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1321),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1323),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1322),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1324),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1086),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 20),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(932),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1099),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(493),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 36),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(1083),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1019),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 37),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 57),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 27),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 8),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5, .production_id = 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 22),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 39),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 5),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4, .production_id = 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1178),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 57),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(577),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 20),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 54),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 15),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 22),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5, .production_id = 39),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2, .production_id = 44),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 22),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 59),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 11, .production_id = 70),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 22),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4, .production_id = 16),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6, .production_id = 41),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 22),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 39),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2), SHIFT_REPEAT(943),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(508),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 15),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3, .production_id = 7),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6, .production_id = 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 22),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 11, .production_id = 57),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1327),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 15),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(842),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 4),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 57),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 15),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2, .production_id = 21),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1, .production_id = 21),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3, .production_id = 21),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4, .production_id = 44),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3, .production_id = 7),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8, .production_id = 22),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2, .production_id = 21),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(864),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3, .production_id = 44),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 22),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 39),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 24),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 31),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 28),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5, .production_id = 33),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 34),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 43),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 3, .production_id = 44),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 56),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 9),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 113),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 65),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2, .production_id = 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1382),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3, .production_id = 4),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1273),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 114),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 51),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 118),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 25),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 103),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 98),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 109),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15, .production_id = 86),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 99),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4, .production_id = 16),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_name, 1, .production_id = 17),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 50),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3, .production_id = 14),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1238),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3, .production_id = 4),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1310),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3, .production_id = 13),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1250),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3, .production_id = 12),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1258),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 42),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 10),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7, .production_id = 41),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 92),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 100),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 22),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 4),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 83),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 82),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 86),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 101),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 24, .production_id = 118),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4, .production_id = 4),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3, .production_id = 7),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4, .production_id = 7),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 11, .production_id = 22),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 84),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 81),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 80),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 43),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4, .production_id = 14),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 102),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 85),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 4),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3, .production_id = 11),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 18),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 14),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10, .production_id = 39),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 77),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 114),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8, .production_id = 43),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 41),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 87),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 11, .production_id = 69),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 41),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6, .production_id = 22),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 15),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 16),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6, .production_id = 35),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 104),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 88),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 89),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 8, .production_id = 58),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 6),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 90),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 41),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8, .production_id = 45),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 113),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6, .production_id = 4),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 11, .production_id = 72),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5, .production_id = 22),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 13, .production_id = 76),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 21, .production_id = 117),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9, .production_id = 63),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 9),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 15),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 105),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 66),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 67),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 79),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 11),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 1),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 21, .production_id = 116),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4, .production_id = 7),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18, .production_id = 106),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 107),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 77),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 108),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 22),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 12, .production_id = 57),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 63),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 109),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 98),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 99),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9, .production_id = 57),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8, .production_id = 22),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7, .production_id = 39),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 44),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 22),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 26),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5, .production_id = 27),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 55),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 29),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5, .production_id = 30),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 91),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 32),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 12, .production_id = 76),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 2),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 3),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4, .production_id = 15),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 6),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 35),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 20, .production_id = 115),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 110),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 4),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 103),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 69),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 22),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 7, .production_id = 53),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 93),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7, .production_id = 4),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 52),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 111),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 7, .production_id = 49),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 75),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 7, .production_id = 48),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 112),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 7, .production_id = 47),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 7, .production_id = 46),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 94),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 95),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10, .production_id = 59),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7, .production_id = 45),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 96),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 12, .production_id = 70),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1247),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1325),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1398),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1397),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1084),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1211),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1210),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1396),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1190),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1076),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1075),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1072),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1070),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1208),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1205),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1204),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1319),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(845),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1228),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1150),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1221),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1219),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1313),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1392),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1390),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1389),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1388),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1314),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1120),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1147),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1385),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1384),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1378),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1377),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(835),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1378),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(810),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(456),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1184),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 21),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1317),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1232),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 21),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(869),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1336),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(985),
  [1252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1201),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 21),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [1262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1401),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1102),
  [1314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(743),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(1085),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 2),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1387),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1386),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(443),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(675),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1358),
  [1394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(440),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [1411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(818),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1, .production_id = 71),
  [1418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(458),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(797),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2), SHIFT_REPEAT(954),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(831),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(58),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(729),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_not_null_list_repeat1, 2), SHIFT_REPEAT(742),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_not_null_list_repeat1, 2),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2, .production_id = 73),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1, .production_id = 74),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null_list, 1),
  [1523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(753),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 1),
  [1530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1375),
  [1532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1374),
  [1534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(816),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2, .production_id = 78),
  [1547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1365),
  [1549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(865),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(250),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1165),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1354),
  [1574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null_list, 2),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [1580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1337),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1369),
  [1594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(852),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1344),
  [1600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(854),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1341),
  [1606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1279),
  [1614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1351),
  [1618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1353),
  [1622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [1630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1355),
  [1632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1247),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1374),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1359),
  [1650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(871),
  [1652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [1656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1367),
  [1658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(860),
  [1660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [1662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1368),
  [1664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [1666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1348),
  [1668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1127),
  [1678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 97),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1379),
  [1694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(833),
  [1696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 3, .production_id = 64),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 68),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1142),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1141),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1320),
  [1710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 40),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 21),
  [1742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1126),
  [1746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(727),
  [1748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1125),
  [1750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [1752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1306),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1184),
  [1770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1249),
  [1772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1290),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1246),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1245),
  [1784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1399),
  [1790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1287),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1286),
  [1804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1284),
  [1808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 8),
  [1810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4, .production_id = 21),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1282),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1281),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 60),
  [1848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 61),
  [1850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 62),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [1860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1000),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [2000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [2032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [2044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1077),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [2146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1104),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1122),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [2214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 21),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1137),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1138),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [2260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 71),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 38),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1152),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1155),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1157),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1159),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1160),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1162),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1164),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1168),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1169),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1170),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1182),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1185),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1188),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1189),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [2350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1191),
  [2352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 23),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1056),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1199),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1202),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1203),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1206),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1207),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1213),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1215),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1216),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [2414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [2420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [2422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1222),
  [2432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1225),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1229),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1230),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1231),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1234),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [2458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [2460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1235),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1236),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1239),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1240),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1090),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1244),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [2490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1093),
  [2492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [2496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1106),
  [2498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1254),
  [2500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1255),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [2504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [2514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1262),
  [2518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1263),
  [2520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [2522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1265),
  [2524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1266),
  [2526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1267),
  [2528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [2532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1269),
  [2534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1270),
  [2536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [2538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1272),
  [2540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [2542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1274),
  [2544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1275),
  [2546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1276),
  [2548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [2550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [2552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1278),
  [2554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [2556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [2558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1280),
  [2560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [2562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [2564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [2566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [2568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [2570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [2572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [2574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [2576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1293),
  [2578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1294),
  [2580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [2582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1296),
  [2584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [2586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [2588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [2590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1300),
  [2592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [2594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1303),
  [2598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1304),
  [2600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1305),
  [2602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [2604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1307),
  [2606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1308),
  [2608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [2610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [2612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [2614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1311),
  [2616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1312),
  [2618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [2620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [2622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1315),
  [2624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1316),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [2628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [2630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1257),
  [2632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1318),
  [2634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [2636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [2638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [2640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1140),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [2644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [2646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [2648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1146),
  [2650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1158),
  [2652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [2654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1167),
  [2656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [2658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1329),
  [2660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1330),
  [2662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [2664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [2666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [2668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [2670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [2672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1338),
  [2674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1339),
  [2676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [2678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [2680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1342),
  [2682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1343),
  [2684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1175),
  [2686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [2688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1345),
  [2690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [2692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [2694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1347),
  [2696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [2698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [2700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [2702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [2704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1350),
  [2706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [2708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [2710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [2712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [2714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [2716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1192),
  [2718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [2720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [2722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [2726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [2728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1352),
  [2730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [2732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [2734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [2736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [2738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [2740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1209),
  [2742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [2744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [2746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [2748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1360),
  [2750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1361),
  [2752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1362),
  [2754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1241),
  [2756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [2758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1364),
  [2760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1248),
  [2762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1366),
  [2766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [2768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1256),
  [2770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1400),
  [2772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [2774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1260),
  [2776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1371),
  [2778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1268),
  [2780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [2782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1277),
  [2784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [2786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [2788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1224),
  [2790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1283),
  [2792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [2794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1380),
  [2796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1381),
  [2798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [2800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [2802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1285),
  [2804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1383),
  [2806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1288),
  [2808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1289),
  [2810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1291),
  [2812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1292),
  [2814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [2816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [2818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [2820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, .production_id = 6),
  [2822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1295),
  [2824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [2826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1302),
  [2828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 5),
  [2830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1309),
  [2832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [2834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1391),
  [2836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [2838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [2840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [2842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [2844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1326),
  [2846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [2848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1333),
  [2850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [2852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [2854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [2856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [2858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [2860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [2862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [2864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [2866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [2868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [2870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [2872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [2874] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [2878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [2880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
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
