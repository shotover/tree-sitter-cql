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
#define STATE_COUNT 1369
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 308
#define ALIAS_COUNT 26
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
    [1] = anon_alias_sym_table,
  },
  [3] = {
    [1] = anon_alias_sym_keyspace,
  },
  [4] = {
    [0] = anon_alias_sym_table,
  },
  [5] = {
    [2] = anon_alias_sym_table,
  },
  [6] = {
    [0] = anon_alias_sym_index,
  },
  [7] = {
    [0] = anon_alias_sym_keyspace,
  },
  [8] = {
    [2] = anon_alias_sym_role,
  },
  [9] = {
    [0] = anon_alias_sym_trigger,
  },
  [10] = {
    [0] = anon_alias_sym_user,
  },
  [11] = {
    [2] = anon_alias_sym_index,
  },
  [12] = {
    [2] = anon_alias_sym_keyspace,
  },
  [13] = {
    [2] = anon_alias_sym_function,
  },
  [14] = {
    [2] = anon_alias_sym_aggregate,
  },
  [15] = {
    [2] = anon_alias_sym_type,
  },
  [16] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_alias,
  },
  [17] = {
    [2] = anon_alias_sym_alias,
  },
  [18] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_table,
  },
  [19] = {
    [3] = anon_alias_sym_materialized_view,
  },
  [20] = {
    [0] = anon_alias_sym_role,
  },
  [21] = {
    [3] = anon_alias_sym_role,
  },
  [22] = {
    [0] = anon_alias_sym_function_name,
  },
  [23] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_table,
  },
  [24] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_table,
  },
  [25] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_trigger,
  },
  [26] = {
    [4] = anon_alias_sym_table,
  },
  [27] = {
    [4] = anon_alias_sym_index,
  },
  [28] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_index,
  },
  [29] = {
    [4] = anon_alias_sym_keyspace,
  },
  [30] = {
    [4] = anon_alias_sym_function,
  },
  [31] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
  },
  [32] = {
    [4] = anon_alias_sym_role,
  },
  [33] = {
    [4] = anon_alias_sym_aggregate,
  },
  [34] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
  },
  [35] = {
    [2] = anon_alias_sym_trigger,
    [4] = anon_alias_sym_table,
  },
  [36] = {
    [4] = anon_alias_sym_type,
  },
  [37] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
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
    [3] = anon_alias_sym_function,
  },
  [56] = {
    [1] = anon_alias_sym_column,
    [3] = anon_alias_sym_column,
  },
  [57] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_column,
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
  [1365] = 1365,
  [1366] = 1366,
  [1367] = 1367,
  [1368] = 1368,
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
          lookahead == 'b') ADVANCE(42);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(35);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(43);
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
          lookahead == 'p') ADVANCE(45);
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
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(387);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(191);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(341);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(359);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
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
    case 43:
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
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 46:
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
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(198);
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
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
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
          lookahead == 'e') ADVANCE(50);
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
          lookahead == 'l') ADVANCE(49);
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
          lookahead == 'n') ADVANCE(52);
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
          lookahead == 'm') ADVANCE(51);
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
          lookahead == 'n') ADVANCE(47);
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
          lookahead == 't') ADVANCE(48);
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
          lookahead == 'f') ADVANCE(44);
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
  [72] = {.lex_state = 552},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 552},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 552},
  [77] = {.lex_state = 554},
  [78] = {.lex_state = 552},
  [79] = {.lex_state = 552},
  [80] = {.lex_state = 552},
  [81] = {.lex_state = 552},
  [82] = {.lex_state = 552},
  [83] = {.lex_state = 552},
  [84] = {.lex_state = 552},
  [85] = {.lex_state = 552},
  [86] = {.lex_state = 552},
  [87] = {.lex_state = 552},
  [88] = {.lex_state = 552},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 552},
  [93] = {.lex_state = 552},
  [94] = {.lex_state = 552},
  [95] = {.lex_state = 552},
  [96] = {.lex_state = 553},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 552},
  [100] = {.lex_state = 552},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 552},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 552},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 552},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 552},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 552},
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
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 552},
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
  [185] = {.lex_state = 552},
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
  [206] = {.lex_state = 552},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 552},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 552},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 552},
  [220] = {.lex_state = 552},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 552},
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
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 1},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 552},
  [410] = {.lex_state = 552},
  [411] = {.lex_state = 552},
  [412] = {.lex_state = 552},
  [413] = {.lex_state = 552},
  [414] = {.lex_state = 552},
  [415] = {.lex_state = 552},
  [416] = {.lex_state = 552},
  [417] = {.lex_state = 552},
  [418] = {.lex_state = 1},
  [419] = {.lex_state = 1},
  [420] = {.lex_state = 1},
  [421] = {.lex_state = 552},
  [422] = {.lex_state = 41},
  [423] = {.lex_state = 1},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 1},
  [426] = {.lex_state = 53},
  [427] = {.lex_state = 552},
  [428] = {.lex_state = 552},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 41},
  [431] = {.lex_state = 552},
  [432] = {.lex_state = 41},
  [433] = {.lex_state = 53},
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
  [447] = {.lex_state = 552},
  [448] = {.lex_state = 18},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 18},
  [451] = {.lex_state = 18},
  [452] = {.lex_state = 18},
  [453] = {.lex_state = 552},
  [454] = {.lex_state = 14},
  [455] = {.lex_state = 10},
  [456] = {.lex_state = 11},
  [457] = {.lex_state = 14},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 552},
  [460] = {.lex_state = 10},
  [461] = {.lex_state = 14},
  [462] = {.lex_state = 13},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 10},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 12},
  [467] = {.lex_state = 53},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 15},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 10},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 15},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 15},
  [481] = {.lex_state = 19},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 10},
  [484] = {.lex_state = 552},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 10},
  [491] = {.lex_state = 24},
  [492] = {.lex_state = 19},
  [493] = {.lex_state = 17},
  [494] = {.lex_state = 21},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 17},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 17},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 21},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 17},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 26},
  [510] = {.lex_state = 17},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 17},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 17},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 17},
  [520] = {.lex_state = 553},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 17},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 10},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 17},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 10},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 17},
  [539] = {.lex_state = 10},
  [540] = {.lex_state = 17},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 17},
  [545] = {.lex_state = 17},
  [546] = {.lex_state = 17},
  [547] = {.lex_state = 17},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 10},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 553},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 10},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 10},
  [562] = {.lex_state = 10},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 16},
  [566] = {.lex_state = 20},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 20},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 10},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 20},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 10},
  [581] = {.lex_state = 25},
  [582] = {.lex_state = 10},
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
  [593] = {.lex_state = 10},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 20},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 10},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 10},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 10},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
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
  [633] = {.lex_state = 10},
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
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 10},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 10},
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
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 10},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 10},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 20},
  [703] = {.lex_state = 10},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 10},
  [707] = {.lex_state = 10},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 10},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 10},
  [715] = {.lex_state = 10},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 10},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 10},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 10},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 20},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 10},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 10},
  [746] = {.lex_state = 10},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 10},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 10},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 10},
  [755] = {.lex_state = 10},
  [756] = {.lex_state = 10},
  [757] = {.lex_state = 10},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 10},
  [760] = {.lex_state = 10},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 553},
  [764] = {.lex_state = 10},
  [765] = {.lex_state = 10},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 10},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 10},
  [773] = {.lex_state = 10},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 10},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 10},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 10},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 10},
  [789] = {.lex_state = 10},
  [790] = {.lex_state = 20},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 20},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 10},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 20},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 20},
  [803] = {.lex_state = 10},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 20},
  [806] = {.lex_state = 20},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 20},
  [809] = {.lex_state = 27},
  [810] = {.lex_state = 27},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 10},
  [813] = {.lex_state = 10},
  [814] = {.lex_state = 10},
  [815] = {.lex_state = 20},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 10},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 20},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 10},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 10},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 10},
  [828] = {.lex_state = 20},
  [829] = {.lex_state = 10},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 10},
  [833] = {.lex_state = 20},
  [834] = {.lex_state = 20},
  [835] = {.lex_state = 20},
  [836] = {.lex_state = 10},
  [837] = {.lex_state = 20},
  [838] = {.lex_state = 10},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 552},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 10},
  [845] = {.lex_state = 10},
  [846] = {.lex_state = 27},
  [847] = {.lex_state = 10},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 22},
  [850] = {.lex_state = 553},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 10},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 10},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 10},
  [861] = {.lex_state = 10},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 553},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 10},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 10},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 13},
  [872] = {.lex_state = 10},
  [873] = {.lex_state = 10},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 10},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 10},
  [878] = {.lex_state = 10},
  [879] = {.lex_state = 10},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 10},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 10},
  [885] = {.lex_state = 10},
  [886] = {.lex_state = 10},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 10},
  [890] = {.lex_state = 10},
  [891] = {.lex_state = 10},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 10},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 10},
  [898] = {.lex_state = 10},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 10},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 10},
  [903] = {.lex_state = 10},
  [904] = {.lex_state = 10},
  [905] = {.lex_state = 10},
  [906] = {.lex_state = 10},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 10},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 10},
  [912] = {.lex_state = 10},
  [913] = {.lex_state = 10},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 10},
  [918] = {.lex_state = 10},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 10},
  [922] = {.lex_state = 10},
  [923] = {.lex_state = 10},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 10},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 10},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 10},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 10},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 10},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 10},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 10},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 10},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 10},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 10},
  [964] = {.lex_state = 10},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 0},
  [967] = {.lex_state = 10},
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
  [980] = {.lex_state = 0},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 0},
  [984] = {.lex_state = 10},
  [985] = {.lex_state = 0},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 0},
  [988] = {.lex_state = 0},
  [989] = {.lex_state = 553},
  [990] = {.lex_state = 10},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 10},
  [993] = {.lex_state = 0},
  [994] = {.lex_state = 0},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 0},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 0},
  [999] = {.lex_state = 10},
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
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 10},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 0},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 10},
  [1020] = {.lex_state = 0},
  [1021] = {.lex_state = 0},
  [1022] = {.lex_state = 13},
  [1023] = {.lex_state = 10},
  [1024] = {.lex_state = 0},
  [1025] = {.lex_state = 10},
  [1026] = {.lex_state = 0},
  [1027] = {.lex_state = 10},
  [1028] = {.lex_state = 0},
  [1029] = {.lex_state = 10},
  [1030] = {.lex_state = 552},
  [1031] = {.lex_state = 0},
  [1032] = {.lex_state = 0},
  [1033] = {.lex_state = 552},
  [1034] = {.lex_state = 0},
  [1035] = {.lex_state = 0},
  [1036] = {.lex_state = 0},
  [1037] = {.lex_state = 10},
  [1038] = {.lex_state = 0},
  [1039] = {.lex_state = 0},
  [1040] = {.lex_state = 10},
  [1041] = {.lex_state = 0},
  [1042] = {.lex_state = 10},
  [1043] = {.lex_state = 0},
  [1044] = {.lex_state = 0},
  [1045] = {.lex_state = 10},
  [1046] = {.lex_state = 13},
  [1047] = {.lex_state = 0},
  [1048] = {.lex_state = 0},
  [1049] = {.lex_state = 0},
  [1050] = {.lex_state = 0},
  [1051] = {.lex_state = 0},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 10},
  [1054] = {.lex_state = 10},
  [1055] = {.lex_state = 0},
  [1056] = {.lex_state = 10},
  [1057] = {.lex_state = 0},
  [1058] = {.lex_state = 0},
  [1059] = {.lex_state = 0},
  [1060] = {.lex_state = 0},
  [1061] = {.lex_state = 0},
  [1062] = {.lex_state = 0},
  [1063] = {.lex_state = 10},
  [1064] = {.lex_state = 0},
  [1065] = {.lex_state = 13},
  [1066] = {.lex_state = 10},
  [1067] = {.lex_state = 0},
  [1068] = {.lex_state = 0},
  [1069] = {.lex_state = 0},
  [1070] = {.lex_state = 10},
  [1071] = {.lex_state = 0},
  [1072] = {.lex_state = 0},
  [1073] = {.lex_state = 0},
  [1074] = {.lex_state = 0},
  [1075] = {.lex_state = 10},
  [1076] = {.lex_state = 10},
  [1077] = {.lex_state = 0},
  [1078] = {.lex_state = 553},
  [1079] = {.lex_state = 0},
  [1080] = {.lex_state = 10},
  [1081] = {.lex_state = 10},
  [1082] = {.lex_state = 0},
  [1083] = {.lex_state = 0},
  [1084] = {.lex_state = 0},
  [1085] = {.lex_state = 0},
  [1086] = {.lex_state = 10},
  [1087] = {.lex_state = 0},
  [1088] = {.lex_state = 0},
  [1089] = {.lex_state = 10},
  [1090] = {.lex_state = 0},
  [1091] = {.lex_state = 0},
  [1092] = {.lex_state = 0},
  [1093] = {.lex_state = 10},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 0},
  [1096] = {.lex_state = 0},
  [1097] = {.lex_state = 0},
  [1098] = {.lex_state = 0},
  [1099] = {.lex_state = 0},
  [1100] = {.lex_state = 10},
  [1101] = {.lex_state = 0},
  [1102] = {.lex_state = 0},
  [1103] = {.lex_state = 10},
  [1104] = {.lex_state = 0},
  [1105] = {.lex_state = 0},
  [1106] = {.lex_state = 0},
  [1107] = {.lex_state = 0},
  [1108] = {.lex_state = 10},
  [1109] = {.lex_state = 0},
  [1110] = {.lex_state = 0},
  [1111] = {.lex_state = 0},
  [1112] = {.lex_state = 0},
  [1113] = {.lex_state = 10},
  [1114] = {.lex_state = 10},
  [1115] = {.lex_state = 0},
  [1116] = {.lex_state = 0},
  [1117] = {.lex_state = 0},
  [1118] = {.lex_state = 0},
  [1119] = {.lex_state = 0},
  [1120] = {.lex_state = 10},
  [1121] = {.lex_state = 0},
  [1122] = {.lex_state = 0},
  [1123] = {.lex_state = 0},
  [1124] = {.lex_state = 10},
  [1125] = {.lex_state = 0},
  [1126] = {.lex_state = 0},
  [1127] = {.lex_state = 0},
  [1128] = {.lex_state = 0},
  [1129] = {.lex_state = 10},
  [1130] = {.lex_state = 0},
  [1131] = {.lex_state = 10},
  [1132] = {.lex_state = 10},
  [1133] = {.lex_state = 0},
  [1134] = {.lex_state = 0},
  [1135] = {.lex_state = 552},
  [1136] = {.lex_state = 552},
  [1137] = {.lex_state = 0},
  [1138] = {.lex_state = 10},
  [1139] = {.lex_state = 10},
  [1140] = {.lex_state = 0},
  [1141] = {.lex_state = 0},
  [1142] = {.lex_state = 10},
  [1143] = {.lex_state = 0},
  [1144] = {.lex_state = 0},
  [1145] = {.lex_state = 0},
  [1146] = {.lex_state = 0},
  [1147] = {.lex_state = 0},
  [1148] = {.lex_state = 0},
  [1149] = {.lex_state = 0},
  [1150] = {.lex_state = 10},
  [1151] = {.lex_state = 0},
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
  [1163] = {.lex_state = 10},
  [1164] = {.lex_state = 0},
  [1165] = {.lex_state = 0},
  [1166] = {.lex_state = 0},
  [1167] = {.lex_state = 0},
  [1168] = {.lex_state = 10},
  [1169] = {.lex_state = 0},
  [1170] = {.lex_state = 0},
  [1171] = {.lex_state = 0},
  [1172] = {.lex_state = 0},
  [1173] = {.lex_state = 10},
  [1174] = {.lex_state = 10},
  [1175] = {.lex_state = 553},
  [1176] = {.lex_state = 0},
  [1177] = {.lex_state = 0},
  [1178] = {.lex_state = 10},
  [1179] = {.lex_state = 0},
  [1180] = {.lex_state = 10},
  [1181] = {.lex_state = 552},
  [1182] = {.lex_state = 0},
  [1183] = {.lex_state = 0},
  [1184] = {.lex_state = 0},
  [1185] = {.lex_state = 10},
  [1186] = {.lex_state = 10},
  [1187] = {.lex_state = 0},
  [1188] = {.lex_state = 0},
  [1189] = {.lex_state = 0},
  [1190] = {.lex_state = 0},
  [1191] = {.lex_state = 10},
  [1192] = {.lex_state = 0},
  [1193] = {.lex_state = 0},
  [1194] = {.lex_state = 0},
  [1195] = {.lex_state = 10},
  [1196] = {.lex_state = 0},
  [1197] = {.lex_state = 0},
  [1198] = {.lex_state = 0},
  [1199] = {.lex_state = 0},
  [1200] = {.lex_state = 10},
  [1201] = {.lex_state = 0},
  [1202] = {.lex_state = 0},
  [1203] = {.lex_state = 553},
  [1204] = {.lex_state = 0},
  [1205] = {.lex_state = 10},
  [1206] = {.lex_state = 0},
  [1207] = {.lex_state = 0},
  [1208] = {.lex_state = 0},
  [1209] = {.lex_state = 0},
  [1210] = {.lex_state = 0},
  [1211] = {.lex_state = 0},
  [1212] = {.lex_state = 0},
  [1213] = {.lex_state = 553},
  [1214] = {.lex_state = 0},
  [1215] = {.lex_state = 0},
  [1216] = {.lex_state = 0},
  [1217] = {.lex_state = 10},
  [1218] = {.lex_state = 0},
  [1219] = {.lex_state = 10},
  [1220] = {.lex_state = 10},
  [1221] = {.lex_state = 0},
  [1222] = {.lex_state = 0},
  [1223] = {.lex_state = 0},
  [1224] = {.lex_state = 552},
  [1225] = {.lex_state = 0},
  [1226] = {.lex_state = 0},
  [1227] = {.lex_state = 0},
  [1228] = {.lex_state = 0},
  [1229] = {.lex_state = 0},
  [1230] = {.lex_state = 0},
  [1231] = {.lex_state = 0},
  [1232] = {.lex_state = 10},
  [1233] = {.lex_state = 0},
  [1234] = {.lex_state = 0},
  [1235] = {.lex_state = 0},
  [1236] = {.lex_state = 10},
  [1237] = {.lex_state = 0},
  [1238] = {.lex_state = 0},
  [1239] = {.lex_state = 0},
  [1240] = {.lex_state = 0},
  [1241] = {.lex_state = 10},
  [1242] = {.lex_state = 10},
  [1243] = {.lex_state = 0},
  [1244] = {.lex_state = 0},
  [1245] = {.lex_state = 10},
  [1246] = {.lex_state = 0},
  [1247] = {.lex_state = 0},
  [1248] = {.lex_state = 10},
  [1249] = {.lex_state = 10},
  [1250] = {.lex_state = 0},
  [1251] = {.lex_state = 0},
  [1252] = {.lex_state = 10},
  [1253] = {.lex_state = 0},
  [1254] = {.lex_state = 0},
  [1255] = {.lex_state = 0},
  [1256] = {.lex_state = 10},
  [1257] = {.lex_state = 10},
  [1258] = {.lex_state = 10},
  [1259] = {.lex_state = 10},
  [1260] = {.lex_state = 0},
  [1261] = {.lex_state = 0},
  [1262] = {.lex_state = 552},
  [1263] = {.lex_state = 552},
  [1264] = {.lex_state = 0},
  [1265] = {.lex_state = 0},
  [1266] = {.lex_state = 0},
  [1267] = {.lex_state = 0},
  [1268] = {.lex_state = 10},
  [1269] = {.lex_state = 0},
  [1270] = {.lex_state = 10},
  [1271] = {.lex_state = 0},
  [1272] = {.lex_state = 552},
  [1273] = {.lex_state = 0},
  [1274] = {.lex_state = 0},
  [1275] = {.lex_state = 10},
  [1276] = {.lex_state = 0},
  [1277] = {.lex_state = 0},
  [1278] = {.lex_state = 0},
  [1279] = {.lex_state = 0},
  [1280] = {.lex_state = 10},
  [1281] = {.lex_state = 10},
  [1282] = {.lex_state = 553},
  [1283] = {.lex_state = 553},
  [1284] = {.lex_state = 552},
  [1285] = {.lex_state = 0},
  [1286] = {.lex_state = 0},
  [1287] = {.lex_state = 10},
  [1288] = {.lex_state = 553},
  [1289] = {.lex_state = 0},
  [1290] = {.lex_state = 0},
  [1291] = {.lex_state = 10},
  [1292] = {.lex_state = 10},
  [1293] = {.lex_state = 0},
  [1294] = {.lex_state = 0},
  [1295] = {.lex_state = 0},
  [1296] = {.lex_state = 10},
  [1297] = {.lex_state = 0},
  [1298] = {.lex_state = 0},
  [1299] = {.lex_state = 0},
  [1300] = {.lex_state = 0},
  [1301] = {.lex_state = 0},
  [1302] = {.lex_state = 0},
  [1303] = {.lex_state = 0},
  [1304] = {.lex_state = 0},
  [1305] = {.lex_state = 0},
  [1306] = {.lex_state = 0},
  [1307] = {.lex_state = 0},
  [1308] = {.lex_state = 10},
  [1309] = {.lex_state = 0},
  [1310] = {.lex_state = 0},
  [1311] = {.lex_state = 0},
  [1312] = {.lex_state = 0},
  [1313] = {.lex_state = 0},
  [1314] = {.lex_state = 0},
  [1315] = {.lex_state = 0},
  [1316] = {.lex_state = 553},
  [1317] = {.lex_state = 0},
  [1318] = {.lex_state = 0},
  [1319] = {.lex_state = 0},
  [1320] = {.lex_state = 10},
  [1321] = {.lex_state = 552},
  [1322] = {.lex_state = 0},
  [1323] = {.lex_state = 0},
  [1324] = {.lex_state = 0},
  [1325] = {.lex_state = 0},
  [1326] = {.lex_state = 0},
  [1327] = {.lex_state = 0},
  [1328] = {.lex_state = 0},
  [1329] = {.lex_state = 0},
  [1330] = {.lex_state = 0},
  [1331] = {.lex_state = 0},
  [1332] = {.lex_state = 10},
  [1333] = {.lex_state = 10},
  [1334] = {.lex_state = 0},
  [1335] = {.lex_state = 10},
  [1336] = {.lex_state = 10},
  [1337] = {.lex_state = 0},
  [1338] = {.lex_state = 0},
  [1339] = {.lex_state = 10},
  [1340] = {.lex_state = 10},
  [1341] = {.lex_state = 0},
  [1342] = {.lex_state = 0},
  [1343] = {.lex_state = 0},
  [1344] = {.lex_state = 0},
  [1345] = {.lex_state = 10},
  [1346] = {.lex_state = 10},
  [1347] = {.lex_state = 10},
  [1348] = {.lex_state = 0},
  [1349] = {.lex_state = 0},
  [1350] = {.lex_state = 0},
  [1351] = {.lex_state = 10},
  [1352] = {.lex_state = 553},
  [1353] = {.lex_state = 10},
  [1354] = {.lex_state = 10},
  [1355] = {.lex_state = 10},
  [1356] = {.lex_state = 10},
  [1357] = {.lex_state = 10},
  [1358] = {.lex_state = 10},
  [1359] = {.lex_state = 41},
  [1360] = {.lex_state = 0},
  [1361] = {.lex_state = 10},
  [1362] = {.lex_state = 0},
  [1363] = {.lex_state = 0},
  [1364] = {.lex_state = 0},
  [1365] = {.lex_state = 10},
  [1366] = {.lex_state = 10},
  [1367] = {.lex_state = 0},
  [1368] = {.lex_state = 553},
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
    [sym_source_file] = STATE(1363),
    [sym__statement] = STATE(3),
    [sym_select_statement] = STATE(279),
    [sym_delete_statement] = STATE(279),
    [sym_begin_batch] = STATE(552),
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
    STATE(552), 1,
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
      aux_sym_revoke_token1,
    ACTIONS(27), 1,
      aux_sym_priviledge_token3,
    ACTIONS(29), 1,
      aux_sym_list_roles_token1,
    ACTIONS(31), 1,
      aux_sym_apply_batch_token1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(552), 1,
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
    STATE(75), 1,
      sym_data_type_name,
    STATE(818), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
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
  [324] = 3,
    STATE(75), 1,
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
  [359] = 3,
    STATE(75), 1,
      sym_data_type_name,
    STATE(401), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
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
  [429] = 3,
    STATE(75), 1,
      sym_data_type_name,
    STATE(946), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
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
    STATE(75), 1,
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
    STATE(75), 1,
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
  [569] = 3,
    STATE(75), 1,
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
  [604] = 3,
    STATE(75), 1,
      sym_data_type_name,
    STATE(570), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
      sym_data_type_name,
    STATE(1212), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
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
  [709] = 3,
    STATE(75), 1,
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
  [744] = 3,
    STATE(75), 1,
      sym_data_type_name,
    STATE(1151), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
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
  [814] = 3,
    STATE(75), 1,
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
  [849] = 3,
    STATE(75), 1,
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
    STATE(75), 1,
      sym_data_type_name,
    STATE(1218), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
      sym_data_type_name,
    STATE(1240), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
      sym_data_type_name,
    STATE(867), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
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
  [1024] = 3,
    STATE(75), 1,
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
  [1059] = 3,
    STATE(75), 1,
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
  [1094] = 3,
    STATE(75), 1,
      sym_data_type_name,
    STATE(1128), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
      sym_data_type_name,
    STATE(656), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
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
  [1199] = 3,
    STATE(75), 1,
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
  [1234] = 3,
    STATE(75), 1,
      sym_data_type_name,
    STATE(140), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
      sym_data_type_name,
    STATE(1041), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
      sym_data_type_name,
    STATE(1116), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
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
  [1374] = 3,
    STATE(75), 1,
      sym_data_type_name,
    STATE(952), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
      sym_data_type_name,
    STATE(132), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
      sym_data_type_name,
    STATE(899), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
      sym_data_type_name,
    STATE(504), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
      sym_data_type_name,
    STATE(1309), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
      sym_data_type_name,
    STATE(915), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
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
  [1619] = 3,
    STATE(75), 1,
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
  [1654] = 3,
    STATE(75), 1,
      sym_data_type_name,
    STATE(1071), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
      sym_data_type_name,
    STATE(1315), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
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
  [1759] = 3,
    STATE(75), 1,
      sym_data_type_name,
    STATE(969), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
      sym_data_type_name,
    STATE(600), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
      sym_data_type_name,
    STATE(1102), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
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
  [1899] = 3,
    STATE(75), 1,
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
  [1934] = 3,
    STATE(75), 1,
      sym_data_type_name,
    STATE(1077), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
      sym_data_type_name,
    STATE(1096), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
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
    STATE(75), 1,
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
  [2039] = 2,
    STATE(831), 1,
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
    STATE(652), 1,
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
    ACTIONS(96), 24,
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
  [2192] = 1,
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
  [2219] = 1,
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
  [2246] = 1,
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
  [2273] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(60), 1,
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
  [2304] = 1,
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
  [2331] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(65), 1,
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
  [2362] = 3,
    ACTIONS(104), 1,
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
  [2393] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(68), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
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
  [2454] = 8,
    ACTIONS(119), 1,
      aux_sym_select_statement_token4,
    ACTIONS(121), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(125), 1,
      aux_sym_order_spec_token1,
    STATE(95), 1,
      sym_where_spec,
    STATE(120), 1,
      sym_order_spec,
    STATE(219), 1,
      sym_limit_spec,
    ACTIONS(117), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2494] = 8,
    ACTIONS(121), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(125), 1,
      aux_sym_order_spec_token1,
    ACTIONS(129), 1,
      aux_sym_select_statement_token4,
    STATE(93), 1,
      sym_where_spec,
    STATE(113), 1,
      sym_order_spec,
    STATE(205), 1,
      sym_limit_spec,
    ACTIONS(127), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2534] = 1,
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
  [2560] = 8,
    ACTIONS(121), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(125), 1,
      aux_sym_order_spec_token1,
    ACTIONS(135), 1,
      aux_sym_select_statement_token4,
    STATE(92), 1,
      sym_where_spec,
    STATE(118), 1,
      sym_order_spec,
    STATE(220), 1,
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
  [2600] = 3,
    ACTIONS(139), 1,
      anon_sym_LT,
    STATE(90), 1,
      sym_data_type_definition,
    ACTIONS(137), 21,
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
  [2655] = 8,
    ACTIONS(147), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(149), 1,
      sym_object_name,
    STATE(104), 1,
      sym_table_option_item,
    STATE(147), 1,
      sym_table_options,
    STATE(355), 1,
      sym_clustering_order,
    STATE(1092), 1,
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
  [2694] = 1,
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
  [2719] = 1,
    ACTIONS(153), 22,
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
  [2744] = 3,
    ACTIONS(157), 1,
      aux_sym_relation_elements_token1,
    STATE(83), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(155), 20,
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
  [2773] = 1,
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
  [2798] = 1,
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
  [2823] = 3,
    ACTIONS(157), 1,
      aux_sym_relation_elements_token1,
    STATE(70), 1,
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
  [2852] = 1,
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
  [2877] = 1,
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
  [2902] = 1,
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
  [3025] = 1,
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
  [3049] = 6,
    ACTIONS(121), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(125), 1,
      aux_sym_order_spec_token1,
    ACTIONS(179), 1,
      aux_sym_select_statement_token4,
    STATE(111), 1,
      sym_order_spec,
    STATE(223), 1,
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
  [3083] = 6,
    ACTIONS(121), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(125), 1,
      aux_sym_order_spec_token1,
    ACTIONS(135), 1,
      aux_sym_select_statement_token4,
    STATE(118), 1,
      sym_order_spec,
    STATE(220), 1,
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
  [3117] = 1,
    ACTIONS(181), 21,
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
  [3141] = 6,
    ACTIONS(121), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(125), 1,
      aux_sym_order_spec_token1,
    ACTIONS(129), 1,
      aux_sym_select_statement_token4,
    STATE(113), 1,
      sym_order_spec,
    STATE(205), 1,
      sym_limit_spec,
    ACTIONS(127), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    STATE(185), 1,
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
  [3203] = 2,
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
  [3228] = 3,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(191), 18,
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
  [3255] = 1,
    ACTIONS(196), 20,
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
  [3278] = 2,
    ACTIONS(200), 1,
      aux_sym_relation_element_token1,
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
    ACTIONS(212), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(214), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(395), 1,
      sym_using_ttl_timestamp,
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
  [3381] = 3,
    ACTIONS(218), 1,
      aux_sym_relation_elements_token1,
    STATE(125), 1,
      aux_sym_materialized_view_options_repeat1,
    ACTIONS(216), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3407] = 1,
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
  [3429] = 1,
    ACTIONS(222), 19,
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
  [3451] = 1,
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
  [3473] = 1,
    ACTIONS(224), 19,
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
  [3495] = 1,
    ACTIONS(226), 19,
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
  [3517] = 1,
    ACTIONS(228), 19,
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
  [3539] = 4,
    ACTIONS(121), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(232), 1,
      aux_sym_select_statement_token4,
    STATE(216), 1,
      sym_limit_spec,
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
  [3567] = 3,
    ACTIONS(236), 1,
      aux_sym_relation_elements_token1,
    STATE(112), 1,
      aux_sym_materialized_view_options_repeat1,
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
  [3593] = 4,
    ACTIONS(121), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(135), 1,
      aux_sym_select_statement_token4,
    STATE(220), 1,
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
  [3621] = 3,
    STATE(252), 1,
      sym_user_super_user,
    ACTIONS(241), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
  [3647] = 1,
    ACTIONS(243), 19,
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
  [3669] = 1,
    ACTIONS(245), 19,
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
  [3691] = 4,
    ACTIONS(214), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(249), 1,
      aux_sym_delete_statement_token2,
    STATE(330), 1,
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
  [3719] = 4,
    ACTIONS(121), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(179), 1,
      aux_sym_select_statement_token4,
    STATE(223), 1,
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
  [3747] = 3,
    STATE(286), 1,
      sym_user_super_user,
    ACTIONS(241), 2,
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
  [3773] = 4,
    ACTIONS(121), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(129), 1,
      aux_sym_select_statement_token4,
    STATE(205), 1,
      sym_limit_spec,
    ACTIONS(127), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3801] = 3,
    STATE(256), 1,
      sym_user_super_user,
    ACTIONS(241), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(253), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3827] = 1,
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
  [3849] = 2,
    ACTIONS(259), 1,
      aux_sym_priviledge_token2,
    ACTIONS(257), 18,
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
  [3873] = 4,
    ACTIONS(214), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(263), 1,
      aux_sym_delete_statement_token2,
    STATE(328), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3901] = 3,
    ACTIONS(218), 1,
      aux_sym_relation_elements_token1,
    STATE(112), 1,
      aux_sym_materialized_view_options_repeat1,
    ACTIONS(265), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
      aux_sym_materialized_view_options_token1,
    STATE(323), 1,
      sym_materialized_view_options,
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
  [3974] = 1,
    ACTIONS(273), 18,
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
  [3995] = 3,
    ACTIONS(277), 1,
      aux_sym_relation_elements_token1,
    STATE(144), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [4020] = 1,
    ACTIONS(279), 18,
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
  [4041] = 3,
    ACTIONS(271), 1,
      aux_sym_materialized_view_options_token1,
    STATE(248), 1,
      sym_materialized_view_options,
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
  [4066] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [4091] = 3,
    ACTIONS(289), 1,
      aux_sym_delete_statement_token2,
    STATE(285), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4116] = 3,
    ACTIONS(214), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(287), 1,
      sym_using_ttl_timestamp,
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
  [4141] = 2,
    ACTIONS(295), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(293), 17,
      ts_builtin_sym_end,
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
  [4164] = 3,
    ACTIONS(299), 1,
      aux_sym_delete_statement_token2,
    STATE(310), 1,
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
  [4189] = 2,
    ACTIONS(301), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(293), 17,
      ts_builtin_sym_end,
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
  [4212] = 3,
    ACTIONS(305), 1,
      aux_sym_delete_statement_token2,
    STATE(288), 1,
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
  [4237] = 3,
    ACTIONS(309), 1,
      aux_sym_delete_statement_token2,
    STATE(293), 1,
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
  [4262] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(160), 1,
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
  [4287] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_relation_element_repeat1,
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
  [4312] = 1,
    ACTIONS(317), 18,
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
  [4333] = 3,
    ACTIONS(321), 1,
      aux_sym_delete_statement_token2,
    STATE(365), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4358] = 3,
    ACTIONS(325), 1,
      aux_sym_relation_elements_token1,
    STATE(144), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [4383] = 3,
    ACTIONS(214), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(267), 1,
      sym_using_ttl_timestamp,
    ACTIONS(328), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4408] = 3,
    ACTIONS(332), 1,
      aux_sym_materialized_view_options_token1,
    STATE(264), 1,
      sym_with_element,
    ACTIONS(330), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4433] = 3,
    ACTIONS(336), 1,
      aux_sym_clustering_order_token1,
    STATE(263), 1,
      sym_clustering_order,
    ACTIONS(334), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(338), 18,
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
  [4479] = 3,
    ACTIONS(342), 1,
      aux_sym_delete_statement_token2,
    STATE(271), 1,
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
  [4504] = 1,
    ACTIONS(344), 18,
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
  [4525] = 3,
    ACTIONS(348), 1,
      aux_sym_materialized_view_options_token1,
    STATE(276), 1,
      sym_role_with,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4550] = 3,
    ACTIONS(352), 1,
      aux_sym_relation_elements_token1,
    STATE(179), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4575] = 3,
    ACTIONS(271), 1,
      aux_sym_materialized_view_options_token1,
    STATE(369), 1,
      sym_materialized_view_options,
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
  [4600] = 3,
    ACTIONS(332), 1,
      aux_sym_materialized_view_options_token1,
    STATE(273), 1,
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
  [4625] = 3,
    ACTIONS(348), 1,
      aux_sym_materialized_view_options_token1,
    STATE(277), 1,
      sym_role_with,
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
  [4650] = 1,
    ACTIONS(360), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4671] = 3,
    ACTIONS(271), 1,
      aux_sym_materialized_view_options_token1,
    STATE(262), 1,
      sym_materialized_view_options,
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
  [4696] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(364), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4721] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(366), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4746] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(192), 1,
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
  [4771] = 1,
    ACTIONS(370), 18,
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
  [4792] = 3,
    ACTIONS(271), 1,
      aux_sym_materialized_view_options_token1,
    STATE(272), 1,
      sym_materialized_view_options,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4817] = 1,
    ACTIONS(374), 18,
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
  [4838] = 3,
    ACTIONS(378), 1,
      aux_sym_delete_statement_token2,
    STATE(306), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4863] = 1,
    ACTIONS(380), 18,
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
  [4884] = 3,
    ACTIONS(384), 1,
      aux_sym_delete_statement_token2,
    STATE(253), 1,
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
  [4909] = 1,
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
  [4930] = 1,
    ACTIONS(234), 18,
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
  [4951] = 1,
    ACTIONS(388), 18,
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
  [4972] = 3,
    ACTIONS(277), 1,
      aux_sym_relation_elements_token1,
    STATE(129), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [4997] = 8,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      sym__decimal_literal,
    ACTIONS(398), 1,
      anon_sym_LBRACK,
    ACTIONS(400), 1,
      anon_sym_LBRACE,
    STATE(672), 1,
      sym_expression,
    STATE(1145), 1,
      sym_expression_list,
    STATE(726), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [5032] = 1,
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
  [5053] = 3,
    ACTIONS(406), 1,
      aux_sym_delete_statement_token2,
    STATE(247), 1,
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
  [5078] = 3,
    ACTIONS(410), 1,
      aux_sym_delete_statement_token2,
    STATE(339), 1,
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
  [5103] = 3,
    ACTIONS(414), 1,
      aux_sym_relation_elements_token1,
    STATE(189), 1,
      aux_sym_if_condition_list_repeat1,
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
  [5128] = 3,
    ACTIONS(418), 1,
      aux_sym_delete_statement_token2,
    STATE(391), 1,
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
  [5153] = 3,
    ACTIONS(422), 1,
      aux_sym_create_index_token3,
    ACTIONS(424), 1,
      aux_sym_list_roles_token2,
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
  [5178] = 3,
    ACTIONS(428), 1,
      aux_sym_list_roles_token2,
    ACTIONS(430), 1,
      aux_sym_list_roles_token3,
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
  [5203] = 3,
    ACTIONS(352), 1,
      aux_sym_relation_elements_token1,
    STATE(191), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(432), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(436), 1,
      aux_sym_delete_statement_token2,
    STATE(334), 1,
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
  [5253] = 1,
    ACTIONS(438), 18,
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
  [5274] = 1,
    ACTIONS(440), 18,
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
  [5295] = 1,
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
  [5316] = 1,
    ACTIONS(257), 18,
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
  [5337] = 1,
    ACTIONS(444), 18,
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
  [5358] = 3,
    ACTIONS(271), 1,
      aux_sym_materialized_view_options_token1,
    STATE(322), 1,
      sym_materialized_view_options,
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
  [5383] = 3,
    ACTIONS(450), 1,
      aux_sym_relation_elements_token1,
    STATE(198), 1,
      aux_sym_materialized_view_options_repeat1,
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
  [5408] = 3,
    ACTIONS(348), 1,
      aux_sym_materialized_view_options_token1,
    STATE(320), 1,
      sym_role_with,
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
  [5433] = 3,
    ACTIONS(414), 1,
      aux_sym_relation_elements_token1,
    STATE(202), 1,
      aux_sym_if_condition_list_repeat1,
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
  [5458] = 3,
    ACTIONS(271), 1,
      aux_sym_materialized_view_options_token1,
    STATE(308), 1,
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
  [5483] = 3,
    ACTIONS(460), 1,
      aux_sym_relation_elements_token1,
    STATE(191), 1,
      aux_sym_role_with_repeat1,
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
  [5508] = 3,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [5533] = 3,
    ACTIONS(332), 1,
      aux_sym_materialized_view_options_token1,
    STATE(314), 1,
      sym_with_element,
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
  [5558] = 3,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      aux_sym_materialized_view_options_token1,
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
  [5583] = 3,
    ACTIONS(478), 1,
      aux_sym_delete_statement_token2,
    STATE(316), 1,
      sym_if_spec,
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
  [5608] = 3,
    ACTIONS(271), 1,
      aux_sym_materialized_view_options_token1,
    STATE(295), 1,
      sym_materialized_view_options,
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
  [5633] = 3,
    ACTIONS(484), 1,
      aux_sym_delete_statement_token2,
    STATE(249), 1,
      sym_if_spec,
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
  [5658] = 3,
    ACTIONS(488), 1,
      aux_sym_relation_elements_token1,
    STATE(112), 1,
      aux_sym_materialized_view_options_repeat1,
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
  [5683] = 3,
    ACTIONS(332), 1,
      aux_sym_materialized_view_options_token1,
    STATE(342), 1,
      sym_with_element,
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
  [5708] = 3,
    ACTIONS(494), 1,
      aux_sym_delete_statement_token2,
    STATE(396), 1,
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
  [5733] = 3,
    ACTIONS(214), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(358), 1,
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
  [5758] = 3,
    ACTIONS(500), 1,
      aux_sym_relation_elements_token1,
    STATE(202), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5783] = 3,
    ACTIONS(505), 1,
      aux_sym_delete_statement_token2,
    STATE(332), 1,
      sym_if_spec,
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
  [5808] = 1,
    ACTIONS(507), 18,
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
  [5829] = 2,
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
  [5851] = 7,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      sym__decimal_literal,
    ACTIONS(398), 1,
      anon_sym_LBRACK,
    ACTIONS(400), 1,
      anon_sym_LBRACE,
    STATE(735), 1,
      sym_expression,
    STATE(726), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [5883] = 2,
    ACTIONS(511), 1,
      aux_sym_list_roles_token2,
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
  [5905] = 2,
    ACTIONS(515), 1,
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
  [5927] = 1,
    ACTIONS(517), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [5947] = 1,
    ACTIONS(519), 17,
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
  [5967] = 1,
    ACTIONS(498), 17,
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
  [5987] = 2,
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
  [6009] = 1,
    ACTIONS(458), 17,
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
  [6029] = 1,
    ACTIONS(525), 17,
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
  [6049] = 1,
    ACTIONS(527), 17,
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
  [6069] = 2,
    ACTIONS(531), 1,
      aux_sym_select_statement_token4,
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
  [6091] = 2,
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
  [6113] = 2,
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
  [6135] = 2,
    ACTIONS(129), 1,
      aux_sym_select_statement_token4,
    ACTIONS(127), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6157] = 2,
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
  [6179] = 2,
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
  [6201] = 2,
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
  [6223] = 2,
    ACTIONS(232), 1,
      aux_sym_select_statement_token4,
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
  [6245] = 1,
    ACTIONS(549), 17,
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
  [6265] = 1,
    ACTIONS(323), 17,
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
  [6285] = 2,
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
  [6307] = 1,
    ACTIONS(555), 17,
      ts_builtin_sym_end,
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
  [6327] = 2,
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
  [6349] = 2,
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
  [6371] = 2,
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
  [6393] = 2,
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
  [6415] = 2,
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
  [6437] = 2,
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
  [6459] = 1,
    ACTIONS(581), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [6479] = 2,
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
  [6501] = 2,
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
  [6523] = 2,
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
  [6545] = 1,
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
  [6565] = 2,
    ACTIONS(599), 1,
      aux_sym_materialized_view_options_token1,
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
  [6587] = 2,
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
  [6609] = 2,
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
  [6631] = 2,
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
  [6653] = 2,
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
  [6675] = 2,
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
  [6697] = 2,
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
  [6719] = 1,
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
  [6738] = 1,
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
  [6757] = 1,
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
  [6776] = 1,
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
  [6795] = 1,
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
  [6814] = 1,
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
  [6833] = 1,
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
  [6852] = 1,
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
  [6871] = 1,
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
  [6890] = 1,
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
  [6909] = 1,
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
  [6928] = 1,
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
  [6947] = 1,
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
  [6966] = 1,
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
  [6985] = 1,
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
  [7004] = 1,
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
  [7023] = 1,
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
  [7042] = 1,
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
  [7061] = 1,
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
  [7080] = 1,
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
  [7099] = 1,
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
  [7118] = 1,
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
  [7137] = 1,
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
  [7156] = 1,
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
  [7175] = 1,
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
  [7194] = 1,
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
  [7213] = 1,
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
  [7232] = 1,
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
  [7251] = 1,
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
  [7270] = 1,
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
  [7289] = 1,
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
  [7308] = 1,
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
  [7327] = 1,
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
  [7346] = 2,
    ACTIONS(685), 1,
      anon_sym_SEMI,
    ACTIONS(683), 15,
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
  [7367] = 1,
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
  [7386] = 1,
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
  [7405] = 1,
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
  [7424] = 1,
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
  [7443] = 1,
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
  [7462] = 1,
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
  [7481] = 1,
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
  [7500] = 1,
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
  [7519] = 1,
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
  [7538] = 1,
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
  [7557] = 1,
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
  [7576] = 1,
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
  [7595] = 1,
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
  [7614] = 1,
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
  [7633] = 1,
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
  [7652] = 1,
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
  [7671] = 1,
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
  [7690] = 1,
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
  [7709] = 1,
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
  [7728] = 1,
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
  [7747] = 1,
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
  [7766] = 1,
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
  [7785] = 1,
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
  [7804] = 1,
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
  [7823] = 1,
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
  [7842] = 1,
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
  [7861] = 1,
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
  [7880] = 1,
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
  [7899] = 1,
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
  [7918] = 1,
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
  [7937] = 1,
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
  [7956] = 1,
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
  [7975] = 1,
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
  [7994] = 1,
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
  [8013] = 1,
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
  [8032] = 1,
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
  [8051] = 1,
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
  [8070] = 1,
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
  [8089] = 1,
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
  [8108] = 1,
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
  [8127] = 1,
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
  [8146] = 1,
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
  [8165] = 1,
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
  [8184] = 1,
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
  [8203] = 1,
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
  [8222] = 1,
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
  [8241] = 1,
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
  [8260] = 1,
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
  [8279] = 1,
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
  [8298] = 1,
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
  [8317] = 1,
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
  [8336] = 1,
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
  [8355] = 1,
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
  [8374] = 1,
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
  [8393] = 1,
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
  [8412] = 1,
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
  [8431] = 1,
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
  [8450] = 1,
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
  [8469] = 1,
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
  [8488] = 1,
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
  [8507] = 1,
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
  [8526] = 1,
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
  [8545] = 1,
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
  [8564] = 1,
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
  [8583] = 1,
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
  [8602] = 1,
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
  [8621] = 1,
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
  [8640] = 1,
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
  [8659] = 1,
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
  [8678] = 1,
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
  [8697] = 1,
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
  [8716] = 1,
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
  [8735] = 1,
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
  [8754] = 1,
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
  [8773] = 1,
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
  [8792] = 1,
    ACTIONS(334), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [8830] = 1,
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
  [8849] = 1,
    ACTIONS(328), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [8887] = 1,
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
  [8906] = 1,
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
  [8925] = 1,
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
  [8944] = 1,
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
  [8963] = 1,
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
  [8982] = 1,
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
  [9001] = 1,
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
  [9020] = 1,
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
  [9039] = 1,
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
  [9058] = 1,
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
  [9077] = 1,
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
  [9096] = 1,
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
  [9115] = 1,
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
  [9134] = 1,
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
  [9153] = 1,
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
  [9172] = 1,
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
  [9191] = 1,
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
  [9210] = 1,
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
  [9229] = 1,
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
  [9248] = 1,
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
  [9267] = 1,
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
  [9286] = 1,
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
  [9305] = 1,
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
  [9324] = 1,
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
  [9343] = 1,
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
  [9362] = 1,
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
  [9381] = 1,
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
  [9400] = 1,
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
  [9419] = 1,
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
  [9438] = 1,
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
  [9457] = 1,
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
  [9476] = 1,
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
  [9495] = 1,
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
  [9514] = 1,
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
  [9533] = 1,
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
  [9552] = 1,
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
  [9571] = 1,
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
  [9590] = 1,
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
  [9609] = 1,
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
  [9628] = 1,
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
  [9647] = 1,
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
  [9666] = 1,
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
  [9685] = 1,
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
  [9704] = 1,
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
  [9723] = 1,
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
  [9742] = 1,
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
  [9761] = 1,
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
  [9780] = 7,
    ACTIONS(398), 1,
      anon_sym_LBRACK,
    ACTIONS(400), 1,
      anon_sym_LBRACE,
    ACTIONS(901), 1,
      sym_object_name,
    STATE(821), 1,
      sym_constant,
    ACTIONS(396), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    STATE(524), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(394), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9810] = 1,
    ACTIONS(903), 15,
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
  [9828] = 5,
    ACTIONS(396), 1,
      sym__decimal_literal,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(774), 1,
      sym_init_cond_definition,
    STATE(148), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9853] = 5,
    ACTIONS(396), 1,
      sym__decimal_literal,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(312), 1,
      sym_init_cond_definition,
    STATE(148), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9878] = 5,
    ACTIONS(396), 1,
      sym__decimal_literal,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(296), 1,
      sym_init_cond_definition,
    STATE(148), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9903] = 5,
    ACTIONS(396), 1,
      sym__decimal_literal,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(356), 1,
      sym_init_cond_definition,
    STATE(148), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9928] = 5,
    ACTIONS(396), 1,
      sym__decimal_literal,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(402), 1,
      sym_init_cond_definition,
    STATE(148), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9953] = 5,
    ACTIONS(396), 1,
      sym__decimal_literal,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(309), 1,
      sym_init_cond_definition,
    STATE(148), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9978] = 5,
    ACTIONS(396), 1,
      sym__decimal_literal,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(258), 1,
      sym_init_cond_definition,
    STATE(148), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10003] = 5,
    ACTIONS(396), 1,
      sym__decimal_literal,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(385), 1,
      sym_init_cond_definition,
    STATE(148), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10028] = 5,
    ACTIONS(396), 1,
      sym__decimal_literal,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(349), 1,
      sym_init_cond_definition,
    STATE(148), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10053] = 6,
    ACTIONS(907), 1,
      anon_sym_STAR,
    ACTIONS(909), 1,
      sym_object_name,
    STATE(1049), 1,
      sym_function_args,
    STATE(668), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(396), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(394), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10079] = 7,
    ACTIONS(911), 1,
      anon_sym_LPAREN,
    ACTIONS(913), 1,
      sym_object_name,
    STATE(644), 1,
      sym_init_cond_hash_item,
    STATE(648), 1,
      sym_init_cond_list,
    STATE(650), 1,
      sym_constant,
    ACTIONS(396), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(394), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10107] = 5,
    ACTIONS(909), 1,
      sym_object_name,
    STATE(1305), 1,
      sym_function_args,
    STATE(668), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(396), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(394), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10130] = 4,
    ACTIONS(396), 1,
      sym__decimal_literal,
    ACTIONS(911), 1,
      anon_sym_LPAREN,
    STATE(778), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10150] = 4,
    ACTIONS(917), 1,
      aux_sym_priviledge_token1,
    ACTIONS(919), 1,
      aux_sym_resource_token4,
    STATE(177), 1,
      sym_priviledge,
    ACTIONS(915), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10170] = 4,
    ACTIONS(921), 1,
      sym_object_name,
    STATE(705), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(396), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(394), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10190] = 7,
    ACTIONS(923), 1,
      anon_sym_DOT,
    ACTIONS(925), 1,
      aux_sym_drop_index_token1,
    ACTIONS(927), 1,
      aux_sym_materialized_view_options_token1,
    ACTIONS(929), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(931), 1,
      aux_sym_alter_table_rename_token1,
    STATE(246), 1,
      sym_alter_table_operation,
    STATE(275), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10216] = 4,
    ACTIONS(933), 1,
      sym_object_name,
    STATE(85), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(396), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(394), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10236] = 11,
    ACTIONS(935), 1,
      aux_sym_truncate_token2,
    ACTIONS(937), 1,
      aux_sym_create_index_token2,
    ACTIONS(939), 1,
      aux_sym_resource_token2,
    ACTIONS(941), 1,
      aux_sym_resource_token5,
    ACTIONS(943), 1,
      aux_sym_resource_token6,
    ACTIONS(945), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(947), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(949), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(951), 1,
      aux_sym_drop_type_token1,
    ACTIONS(953), 1,
      aux_sym_drop_user_token1,
    ACTIONS(955), 1,
      aux_sym_create_aggregate_token1,
  [10270] = 5,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      sym__decimal_literal,
    STATE(63), 1,
      sym_assignment_tuple,
    STATE(521), 1,
      sym_constant,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10292] = 6,
    ACTIONS(957), 1,
      anon_sym_LPAREN,
    ACTIONS(963), 1,
      aux_sym_relation_element_token1,
    ACTIONS(965), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(967), 1,
      aux_sym_column_not_null_token1,
    ACTIONS(959), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(961), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10315] = 6,
    ACTIONS(925), 1,
      aux_sym_drop_index_token1,
    ACTIONS(927), 1,
      aux_sym_materialized_view_options_token1,
    ACTIONS(929), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(931), 1,
      aux_sym_alter_table_rename_token1,
    STATE(268), 1,
      sym_alter_table_operation,
    STATE(275), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10338] = 3,
    ACTIONS(917), 1,
      aux_sym_priviledge_token1,
    STATE(1304), 1,
      sym_priviledge,
    ACTIONS(915), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10355] = 4,
    ACTIONS(396), 1,
      sym__decimal_literal,
    ACTIONS(969), 1,
      anon_sym_RBRACE,
    STATE(498), 1,
      sym_constant,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10374] = 3,
    ACTIONS(917), 1,
      aux_sym_priviledge_token1,
    STATE(1303), 1,
      sym_priviledge,
    ACTIONS(915), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10391] = 10,
    ACTIONS(971), 1,
      aux_sym_truncate_token2,
    ACTIONS(973), 1,
      aux_sym_create_index_token2,
    ACTIONS(975), 1,
      aux_sym_resource_token2,
    ACTIONS(977), 1,
      aux_sym_resource_token5,
    ACTIONS(979), 1,
      aux_sym_resource_token6,
    ACTIONS(981), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(983), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(985), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(987), 1,
      aux_sym_drop_type_token1,
    ACTIONS(989), 1,
      aux_sym_drop_user_token1,
  [10422] = 4,
    ACTIONS(396), 1,
      sym__decimal_literal,
    ACTIONS(991), 1,
      aux_sym_relation_contains_key_token2,
    STATE(87), 1,
      sym_constant,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10441] = 3,
    ACTIONS(396), 1,
      sym__decimal_literal,
    STATE(463), 1,
      sym_constant,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10457] = 3,
    ACTIONS(396), 1,
      sym__decimal_literal,
    STATE(172), 1,
      sym_constant,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10473] = 3,
    ACTIONS(396), 1,
      sym__decimal_literal,
    STATE(521), 1,
      sym_constant,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10489] = 3,
    ACTIONS(396), 1,
      sym__decimal_literal,
    STATE(811), 1,
      sym_constant,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10505] = 3,
    ACTIONS(396), 1,
      sym__decimal_literal,
    STATE(603), 1,
      sym_constant,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10521] = 3,
    ACTIONS(396), 1,
      sym__decimal_literal,
    STATE(88), 1,
      sym_constant,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10537] = 3,
    ACTIONS(396), 1,
      sym__decimal_literal,
    STATE(650), 1,
      sym_constant,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10553] = 3,
    ACTIONS(396), 1,
      sym__decimal_literal,
    STATE(564), 1,
      sym_constant,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10569] = 3,
    ACTIONS(396), 1,
      sym__decimal_literal,
    STATE(697), 1,
      sym_constant,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10585] = 5,
    ACTIONS(957), 1,
      anon_sym_LPAREN,
    ACTIONS(963), 1,
      aux_sym_relation_element_token1,
    ACTIONS(965), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(959), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(961), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10605] = 3,
    ACTIONS(396), 1,
      sym__decimal_literal,
    STATE(995), 1,
      sym_constant,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10621] = 3,
    ACTIONS(396), 1,
      sym__decimal_literal,
    STATE(215), 1,
      sym_constant,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10637] = 3,
    ACTIONS(396), 1,
      sym__decimal_literal,
    STATE(76), 1,
      sym_constant,
    ACTIONS(394), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10653] = 6,
    ACTIONS(993), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(995), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(997), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(999), 1,
      sym_object_name,
    STATE(1276), 1,
      sym_index_column_spec,
    STATE(1279), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10674] = 6,
    ACTIONS(1001), 1,
      anon_sym_DOT,
    ACTIONS(1003), 1,
      aux_sym_priviledge_token3,
    ACTIONS(1005), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1007), 1,
      aux_sym_alter_table_rename_token1,
    STATE(283), 1,
      sym_alter_type_operation,
    STATE(284), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10695] = 6,
    ACTIONS(993), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(995), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(997), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(999), 1,
      sym_object_name,
    STATE(1254), 1,
      sym_index_column_spec,
    STATE(1279), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10716] = 6,
    ACTIONS(993), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(995), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(997), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(999), 1,
      sym_object_name,
    STATE(935), 1,
      sym_index_column_spec,
    STATE(1279), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10737] = 6,
    ACTIONS(993), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(995), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(997), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(999), 1,
      sym_object_name,
    STATE(859), 1,
      sym_index_column_spec,
    STATE(1279), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10758] = 3,
    ACTIONS(1013), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1009), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1011), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10772] = 7,
    ACTIONS(1015), 1,
      aux_sym_truncate_token2,
    ACTIONS(1017), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1019), 1,
      aux_sym_resource_token2,
    ACTIONS(1021), 1,
      aux_sym_resource_token5,
    ACTIONS(1023), 1,
      aux_sym_resource_token6,
    ACTIONS(1025), 1,
      sym_object_name,
    STATE(870), 1,
      sym_resource,
  [10794] = 6,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
    ACTIONS(1029), 1,
      sym_object_name,
    STATE(86), 1,
      sym_relation_element,
    STATE(465), 1,
      sym_function_call,
    STATE(713), 1,
      sym_column_not_null,
    STATE(79), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10814] = 7,
    ACTIONS(1031), 1,
      aux_sym_select_statement_token2,
    ACTIONS(1033), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1035), 1,
      anon_sym_STAR,
    ACTIONS(1037), 1,
      sym_object_name,
    STATE(553), 1,
      sym_select_element,
    STATE(555), 1,
      sym_function_call,
    STATE(848), 1,
      sym_select_elements,
  [10836] = 7,
    ACTIONS(1015), 1,
      aux_sym_truncate_token2,
    ACTIONS(1017), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1019), 1,
      aux_sym_resource_token2,
    ACTIONS(1021), 1,
      aux_sym_resource_token5,
    ACTIONS(1023), 1,
      aux_sym_resource_token6,
    ACTIONS(1025), 1,
      sym_object_name,
    STATE(207), 1,
      sym_resource,
  [10858] = 5,
    ACTIONS(1003), 1,
      aux_sym_priviledge_token3,
    ACTIONS(1005), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(1007), 1,
      aux_sym_alter_table_rename_token1,
    STATE(259), 1,
      sym_alter_type_operation,
    STATE(284), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10876] = 3,
    ACTIONS(1043), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1039), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1041), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10890] = 6,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
    ACTIONS(1045), 1,
      sym_object_name,
    STATE(80), 1,
      sym_relation_element,
    STATE(99), 1,
      sym_relation_elements,
    STATE(465), 1,
      sym_function_call,
    STATE(79), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10910] = 7,
    ACTIONS(1015), 1,
      aux_sym_truncate_token2,
    ACTIONS(1017), 1,
      aux_sym_priviledge_token1,
    ACTIONS(1019), 1,
      aux_sym_resource_token2,
    ACTIONS(1021), 1,
      aux_sym_resource_token5,
    ACTIONS(1023), 1,
      aux_sym_resource_token6,
    ACTIONS(1025), 1,
      sym_object_name,
    STATE(869), 1,
      sym_resource,
  [10932] = 4,
    ACTIONS(398), 1,
      anon_sym_LBRACK,
    ACTIONS(400), 1,
      anon_sym_LBRACE,
    ACTIONS(1047), 1,
      sym__decimal_literal,
    STATE(807), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [10947] = 6,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
    STATE(669), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(673), 1,
      aux_sym_relation_element_repeat2,
    STATE(674), 1,
      sym_assignment_tuple,
  [10966] = 5,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
    ACTIONS(1045), 1,
      sym_object_name,
    STATE(86), 1,
      sym_relation_element,
    STATE(465), 1,
      sym_function_call,
    STATE(79), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10983] = 2,
    ACTIONS(1053), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1055), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10994] = 6,
    ACTIONS(1035), 1,
      anon_sym_STAR,
    ACTIONS(1037), 1,
      sym_object_name,
    ACTIONS(1057), 1,
      aux_sym_select_statement_token3,
    STATE(553), 1,
      sym_select_element,
    STATE(555), 1,
      sym_function_call,
    STATE(771), 1,
      sym_select_elements,
  [11013] = 6,
    ACTIONS(1059), 1,
      aux_sym_truncate_token2,
    ACTIONS(1061), 1,
      aux_sym_resource_token2,
    ACTIONS(1063), 1,
      aux_sym_resource_token6,
    ACTIONS(1065), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1067), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1069), 1,
      aux_sym_drop_user_token1,
  [11032] = 4,
    ACTIONS(1071), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1075), 1,
      aux_sym_role_with_options_token4,
    STATE(213), 1,
      sym_role_with_options,
    ACTIONS(1073), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11046] = 5,
    ACTIONS(147), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(149), 1,
      sym_object_name,
    STATE(168), 1,
      sym_table_option_item,
    STATE(301), 1,
      sym_clustering_order,
    STATE(1092), 1,
      sym_table_option_name,
  [11062] = 1,
    ACTIONS(1077), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11070] = 4,
    ACTIONS(957), 1,
      anon_sym_LPAREN,
    ACTIONS(1081), 1,
      anon_sym_DOT,
    ACTIONS(1083), 1,
      aux_sym_select_element_token1,
    ACTIONS(1079), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11084] = 1,
    ACTIONS(1085), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11092] = 3,
    ACTIONS(1087), 1,
      anon_sym_COMMA,
    STATE(473), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(1090), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11104] = 1,
    ACTIONS(1092), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11112] = 5,
    ACTIONS(1035), 1,
      anon_sym_STAR,
    ACTIONS(1094), 1,
      sym_object_name,
    STATE(553), 1,
      sym_select_element,
    STATE(555), 1,
      sym_function_call,
    STATE(717), 1,
      sym_select_elements,
  [11128] = 1,
    ACTIONS(1096), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11136] = 5,
    ACTIONS(147), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(149), 1,
      sym_object_name,
    STATE(187), 1,
      sym_table_option_item,
    STATE(344), 1,
      sym_clustering_order,
    STATE(1092), 1,
      sym_table_option_name,
  [11152] = 5,
    ACTIONS(1098), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1100), 1,
      anon_sym_LPAREN,
    ACTIONS(1102), 1,
      aux_sym_insert_values_spec_token1,
    STATE(124), 1,
      sym_insert_values_spec,
    STATE(627), 1,
      sym_insert_column_spec,
  [11168] = 1,
    ACTIONS(1104), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11176] = 5,
    ACTIONS(147), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(149), 1,
      sym_object_name,
    STATE(168), 1,
      sym_table_option_item,
    STATE(294), 1,
      sym_clustering_order,
    STATE(1092), 1,
      sym_table_option_name,
  [11192] = 5,
    ACTIONS(1106), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1108), 1,
      sym_object_name,
    STATE(537), 1,
      sym_from_spec,
    STATE(563), 1,
      sym_delete_column_item,
    STATE(709), 1,
      sym_delete_column_list,
  [11208] = 1,
    ACTIONS(1110), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11216] = 5,
    ACTIONS(1035), 1,
      anon_sym_STAR,
    ACTIONS(1094), 1,
      sym_object_name,
    STATE(553), 1,
      sym_select_element,
    STATE(555), 1,
      sym_function_call,
    STATE(771), 1,
      sym_select_elements,
  [11232] = 3,
    ACTIONS(1114), 1,
      anon_sym_LBRACE,
    ACTIONS(1112), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(161), 2,
      sym_option_hash,
      sym_table_option_value,
  [11244] = 5,
    ACTIONS(1098), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1100), 1,
      anon_sym_LPAREN,
    ACTIONS(1102), 1,
      aux_sym_insert_values_spec_token1,
    STATE(117), 1,
      sym_insert_values_spec,
    STATE(690), 1,
      sym_insert_column_spec,
  [11260] = 4,
    ACTIONS(1071), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1075), 1,
      aux_sym_role_with_options_token4,
    STATE(152), 1,
      sym_role_with_options,
    ACTIONS(1073), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11274] = 3,
    ACTIONS(1118), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(645), 1,
      sym_using_timestamp_spec,
    ACTIONS(1116), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11286] = 1,
    ACTIONS(1120), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11294] = 3,
    ACTIONS(1118), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(636), 1,
      sym_using_timestamp_spec,
    ACTIONS(1122), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11306] = 4,
    ACTIONS(1124), 1,
      anon_sym_LPAREN,
    ACTIONS(1126), 1,
      sym_object_name,
    STATE(932), 1,
      sym_primary_key_definition,
    STATE(933), 2,
      sym_compound_key,
      sym_composite_key,
  [11320] = 5,
    ACTIONS(1128), 1,
      sym__string_literal,
    ACTIONS(1130), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1132), 1,
      aux_sym_create_index_token3,
    ACTIONS(1134), 1,
      sym_object_name,
    STATE(1215), 1,
      sym_index_name,
  [11336] = 5,
    ACTIONS(1106), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1108), 1,
      sym_object_name,
    STATE(506), 1,
      sym_from_spec,
    STATE(563), 1,
      sym_delete_column_item,
    STATE(841), 1,
      sym_delete_column_list,
  [11352] = 4,
    ACTIONS(1136), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(1138), 1,
      sym_object_name,
    STATE(175), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [11365] = 4,
    ACTIONS(1140), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1142), 1,
      sym_object_name,
    STATE(768), 1,
      sym_column_definition,
    STATE(1024), 1,
      sym_primary_key_element,
  [11378] = 4,
    ACTIONS(957), 1,
      anon_sym_LPAREN,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    STATE(579), 1,
      aux_sym_function_args_repeat1,
  [11391] = 1,
    ACTIONS(1148), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11398] = 4,
    ACTIONS(1138), 1,
      sym_object_name,
    ACTIONS(1150), 1,
      aux_sym_delete_statement_token3,
    STATE(175), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [11411] = 4,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    ACTIONS(1154), 1,
      anon_sym_COLON,
    ACTIONS(1156), 1,
      anon_sym_RBRACE,
    STATE(664), 1,
      aux_sym_assignment_tuple_repeat1,
  [11424] = 4,
    ACTIONS(1138), 1,
      sym_object_name,
    ACTIONS(1158), 1,
      aux_sym_delete_statement_token3,
    STATE(175), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [11437] = 4,
    ACTIONS(1160), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1162), 1,
      aux_sym_create_materialized_view_token1,
    STATE(526), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(685), 1,
      aux_sym_relation_elements_repeat1,
  [11450] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      sym_where_spec,
    STATE(508), 1,
      aux_sym_update_repeat1,
  [11463] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    STATE(511), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1166), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11474] = 4,
    ACTIONS(1140), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1142), 1,
      sym_object_name,
    STATE(768), 1,
      sym_column_definition,
    STATE(1264), 1,
      sym_primary_key_element,
  [11487] = 3,
    ACTIONS(1170), 1,
      aux_sym_create_materialized_view_token1,
    STATE(770), 1,
      sym_primary_key_column,
    ACTIONS(1168), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11498] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      sym_where_spec,
    STATE(551), 1,
      aux_sym_update_repeat1,
  [11511] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1118), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(164), 1,
      sym_where_spec,
    STATE(761), 1,
      sym_using_timestamp_spec,
  [11524] = 4,
    ACTIONS(1138), 1,
      sym_object_name,
    ACTIONS(1172), 1,
      aux_sym_delete_statement_token3,
    STATE(175), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [11537] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      sym_where_spec,
    STATE(551), 1,
      aux_sym_update_repeat1,
  [11550] = 4,
    ACTIONS(1128), 1,
      sym__string_literal,
    ACTIONS(1134), 1,
      sym_object_name,
    ACTIONS(1174), 1,
      aux_sym_create_index_token3,
    STATE(1225), 1,
      sym_index_name,
  [11563] = 4,
    ACTIONS(1138), 1,
      sym_object_name,
    ACTIONS(1176), 1,
      aux_sym_delete_statement_token3,
    STATE(175), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [11576] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1178), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11587] = 4,
    ACTIONS(1138), 1,
      sym_object_name,
    ACTIONS(1180), 1,
      aux_sym_delete_statement_token3,
    STATE(175), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [11600] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      sym_where_spec,
    STATE(534), 1,
      aux_sym_update_repeat1,
  [11613] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      sym_where_spec,
    STATE(535), 1,
      aux_sym_update_repeat1,
  [11626] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      sym_where_spec,
    STATE(551), 1,
      aux_sym_update_repeat1,
  [11639] = 4,
    ACTIONS(1138), 1,
      sym_object_name,
    ACTIONS(1182), 1,
      aux_sym_delete_statement_token3,
    STATE(175), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [11652] = 4,
    ACTIONS(214), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1184), 1,
      anon_sym_DOT,
    ACTIONS(1186), 1,
      aux_sym_update_token2,
    STATE(887), 1,
      sym_using_ttl_timestamp,
  [11665] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1118), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(174), 1,
      sym_where_spec,
    STATE(699), 1,
      sym_using_timestamp_spec,
  [11678] = 4,
    ACTIONS(1138), 1,
      sym_object_name,
    ACTIONS(1188), 1,
      aux_sym_delete_statement_token3,
    STATE(175), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [11691] = 3,
    ACTIONS(1190), 1,
      anon_sym_RPAREN,
    STATE(1109), 1,
      sym_order_direction,
    ACTIONS(185), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
  [11702] = 1,
    ACTIONS(1090), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11709] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      sym_where_spec,
    STATE(529), 1,
      aux_sym_update_repeat1,
  [11722] = 4,
    ACTIONS(214), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1192), 1,
      anon_sym_DOT,
    ACTIONS(1194), 1,
      aux_sym_update_token2,
    STATE(1087), 1,
      sym_using_ttl_timestamp,
  [11735] = 2,
    ACTIONS(1196), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11744] = 4,
    ACTIONS(1138), 1,
      sym_object_name,
    ACTIONS(1200), 1,
      aux_sym_delete_statement_token3,
    STATE(175), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [11757] = 4,
    ACTIONS(1160), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1202), 1,
      aux_sym_create_materialized_view_token1,
    STATE(675), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(676), 1,
      aux_sym_relation_elements_repeat1,
  [11770] = 4,
    ACTIONS(1204), 1,
      aux_sym_timestamp_token1,
    ACTIONS(1206), 1,
      aux_sym_ttl_token1,
    STATE(135), 1,
      sym_ttl,
    STATE(137), 1,
      sym_timestamp,
  [11783] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      sym_where_spec,
    STATE(551), 1,
      aux_sym_update_repeat1,
  [11796] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      sym_where_spec,
    STATE(551), 1,
      aux_sym_update_repeat1,
  [11809] = 4,
    ACTIONS(1208), 1,
      sym_object_name,
    STATE(104), 1,
      sym_table_option_item,
    STATE(400), 1,
      sym_table_options,
    STATE(1092), 1,
      sym_table_option_name,
  [11822] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      sym_where_spec,
    STATE(505), 1,
      aux_sym_update_repeat1,
  [11835] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      sym_where_spec,
    STATE(515), 1,
      aux_sym_update_repeat1,
  [11848] = 4,
    ACTIONS(1138), 1,
      sym_object_name,
    ACTIONS(1210), 1,
      aux_sym_delete_statement_token3,
    STATE(175), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [11861] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      sym_where_spec,
    STATE(551), 1,
      aux_sym_update_repeat1,
  [11874] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      sym_where_spec,
    STATE(551), 1,
      aux_sym_update_repeat1,
  [11887] = 4,
    ACTIONS(1208), 1,
      sym_object_name,
    STATE(104), 1,
      sym_table_option_item,
    STATE(260), 1,
      sym_table_options,
    STATE(1092), 1,
      sym_table_option_name,
  [11900] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1118), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(195), 1,
      sym_where_spec,
    STATE(747), 1,
      sym_using_timestamp_spec,
  [11913] = 4,
    ACTIONS(1138), 1,
      sym_object_name,
    ACTIONS(1212), 1,
      aux_sym_delete_statement_token3,
    STATE(175), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [11926] = 4,
    ACTIONS(1208), 1,
      sym_object_name,
    STATE(104), 1,
      sym_table_option_item,
    STATE(307), 1,
      sym_table_options,
    STATE(1092), 1,
      sym_table_option_name,
  [11939] = 4,
    ACTIONS(1138), 1,
      sym_object_name,
    ACTIONS(1214), 1,
      aux_sym_delete_statement_token3,
    STATE(175), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [11952] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      sym_where_spec,
    STATE(528), 1,
      aux_sym_update_repeat1,
  [11965] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      sym_where_spec,
    STATE(551), 1,
      aux_sym_update_repeat1,
  [11978] = 4,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      sym_where_spec,
    STATE(542), 1,
      aux_sym_update_repeat1,
  [11991] = 4,
    ACTIONS(1138), 1,
      sym_object_name,
    ACTIONS(1216), 1,
      aux_sym_delete_statement_token3,
    STATE(175), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [12004] = 4,
    ACTIONS(1138), 1,
      sym_object_name,
    ACTIONS(1218), 1,
      aux_sym_delete_statement_token3,
    STATE(175), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [12017] = 4,
    ACTIONS(1138), 1,
      sym_object_name,
    ACTIONS(1220), 1,
      aux_sym_delete_statement_token3,
    STATE(175), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [12030] = 4,
    ACTIONS(1138), 1,
      sym_object_name,
    ACTIONS(1222), 1,
      aux_sym_delete_statement_token3,
    STATE(175), 1,
      sym_if_condition,
    STATE(318), 1,
      sym_if_condition_list,
  [12043] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(1326), 1,
      sym_return_mode,
  [12053] = 3,
    ACTIONS(1228), 1,
      anon_sym_RPAREN,
    ACTIONS(1230), 1,
      sym_object_name,
    STATE(599), 1,
      sym_param,
  [12063] = 3,
    ACTIONS(1232), 1,
      anon_sym_COMMA,
    ACTIONS(1234), 1,
      anon_sym_RBRACE,
    STATE(601), 1,
      aux_sym_replication_list_repeat1,
  [12073] = 3,
    ACTIONS(1236), 1,
      anon_sym_COMMA,
    ACTIONS(1239), 1,
      aux_sym_where_spec_token1,
    STATE(551), 1,
      aux_sym_update_repeat1,
  [12083] = 3,
    ACTIONS(1241), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1243), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1245), 1,
      aux_sym_update_token1,
  [12093] = 3,
    ACTIONS(1247), 1,
      anon_sym_COMMA,
    ACTIONS(1249), 1,
      aux_sym_from_spec_token1,
    STATE(617), 1,
      aux_sym_select_elements_repeat1,
  [12103] = 2,
    ACTIONS(1251), 1,
      aux_sym_resource_token1,
    ACTIONS(1253), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [12111] = 2,
    ACTIONS(1257), 1,
      aux_sym_select_element_token1,
    ACTIONS(1255), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12119] = 3,
    ACTIONS(1230), 1,
      sym_object_name,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
    STATE(606), 1,
      sym_param,
  [12129] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(944), 1,
      sym_return_mode,
  [12139] = 2,
    ACTIONS(1263), 1,
      anon_sym_LBRACK,
    ACTIONS(1261), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12147] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
    STATE(642), 1,
      aux_sym_create_function_repeat1,
  [12157] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(948), 1,
      sym_return_mode,
  [12167] = 3,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(587), 1,
      sym_column_definition,
    STATE(927), 1,
      sym_column_definition_list,
  [12177] = 3,
    ACTIONS(1208), 1,
      sym_object_name,
    STATE(168), 1,
      sym_table_option_item,
    STATE(1092), 1,
      sym_table_option_name,
  [12187] = 3,
    ACTIONS(1271), 1,
      anon_sym_COMMA,
    ACTIONS(1273), 1,
      aux_sym_from_spec_token1,
    STATE(632), 1,
      aux_sym_delete_column_list_repeat1,
  [12197] = 3,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1277), 1,
      anon_sym_RBRACE,
    STATE(590), 1,
      aux_sym_assignment_map_repeat1,
  [12207] = 3,
    ACTIONS(1279), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    ACTIONS(1281), 1,
      sym_object_name,
    STATE(327), 1,
      sym_alter_table_drop_column_list,
  [12217] = 3,
    ACTIONS(1283), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1285), 1,
      sym_object_name,
    STATE(1207), 1,
      sym_keyspace_name,
  [12227] = 3,
    ACTIONS(1287), 1,
      anon_sym_COMMA,
    ACTIONS(1289), 1,
      anon_sym_RBRACE,
    STATE(611), 1,
      aux_sym_option_hash_repeat1,
  [12237] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(1291), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
  [12247] = 3,
    ACTIONS(214), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1293), 1,
      aux_sym_update_token2,
    STATE(1061), 1,
      sym_using_ttl_timestamp,
  [12257] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1297), 1,
      anon_sym_RPAREN,
    STATE(662), 1,
      aux_sym_create_type_repeat1,
  [12267] = 3,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1302), 1,
      anon_sym_GT,
    STATE(571), 1,
      aux_sym_data_type_definition_repeat1,
  [12277] = 3,
    ACTIONS(1304), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1306), 1,
      sym_object_name,
    STATE(1172), 1,
      sym_trigger_name,
  [12287] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
    STATE(588), 1,
      aux_sym_relation_element_repeat2,
  [12297] = 3,
    ACTIONS(1310), 1,
      sym_object_name,
    STATE(170), 1,
      sym_alter_type_rename_item,
    STATE(381), 1,
      sym_alter_type_rename_list,
  [12307] = 3,
    ACTIONS(1312), 1,
      anon_sym_DOT,
    ACTIONS(1314), 1,
      aux_sym_where_spec_token1,
    STATE(966), 1,
      sym_materialized_view_where,
  [12317] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
    STATE(613), 1,
      aux_sym_create_type_repeat1,
  [12327] = 3,
    ACTIONS(1318), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1320), 1,
      sym_object_name,
    STATE(1160), 1,
      sym_user_name,
  [12337] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
    STATE(596), 1,
      aux_sym_create_type_repeat1,
  [12347] = 3,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    ACTIONS(1324), 1,
      anon_sym_RPAREN,
    STATE(682), 1,
      aux_sym_function_args_repeat1,
  [12357] = 3,
    ACTIONS(1230), 1,
      sym_object_name,
    ACTIONS(1326), 1,
      anon_sym_RPAREN,
    STATE(618), 1,
      sym_param,
  [12367] = 3,
    ACTIONS(1328), 1,
      sym__string_literal,
    ACTIONS(1330), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1332), 1,
      sym_object_name,
  [12377] = 3,
    ACTIONS(1230), 1,
      sym_object_name,
    ACTIONS(1334), 1,
      anon_sym_RPAREN,
    STATE(667), 1,
      sym_param,
  [12387] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(1336), 1,
      anon_sym_RPAREN,
    STATE(680), 1,
      aux_sym_relation_element_repeat1,
  [12397] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(974), 1,
      sym_return_mode,
  [12407] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1338), 1,
      anon_sym_RPAREN,
    STATE(620), 1,
      aux_sym_create_function_repeat1,
  [12417] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(979), 1,
      sym_return_mode,
  [12427] = 3,
    ACTIONS(1340), 1,
      anon_sym_COMMA,
    ACTIONS(1342), 1,
      anon_sym_RPAREN,
    STATE(647), 1,
      aux_sym_column_definition_list_repeat1,
  [12437] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
  [12447] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_relation_element_repeat2,
  [12457] = 3,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1346), 1,
      anon_sym_RBRACE,
    STATE(639), 1,
      aux_sym_assignment_map_repeat1,
  [12467] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1348), 1,
      anon_sym_RPAREN,
    STATE(642), 1,
      aux_sym_create_function_repeat1,
  [12477] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(895), 1,
      sym_return_mode,
  [12487] = 3,
    ACTIONS(1230), 1,
      sym_object_name,
    ACTIONS(1350), 1,
      anon_sym_RPAREN,
    STATE(585), 1,
      sym_param,
  [12497] = 3,
    ACTIONS(1352), 1,
      sym__string_literal,
    STATE(640), 1,
      sym_replication_list_item,
    STATE(1005), 1,
      sym_replication_list,
  [12507] = 3,
    ACTIONS(1320), 1,
      sym_object_name,
    ACTIONS(1354), 1,
      aux_sym_delete_statement_token2,
    STATE(364), 1,
      sym_user_name,
  [12517] = 3,
    ACTIONS(1356), 1,
      anon_sym_COMMA,
    ACTIONS(1359), 1,
      anon_sym_RPAREN,
    STATE(596), 1,
      aux_sym_create_type_repeat1,
  [12527] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1361), 1,
      anon_sym_RPAREN,
    STATE(642), 1,
      aux_sym_create_function_repeat1,
  [12537] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(1227), 1,
      sym_return_mode,
  [12547] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1363), 1,
      anon_sym_RPAREN,
    STATE(597), 1,
      aux_sym_create_function_repeat1,
  [12557] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
    STATE(578), 1,
      aux_sym_create_type_repeat1,
  [12567] = 3,
    ACTIONS(1367), 1,
      anon_sym_COMMA,
    ACTIONS(1370), 1,
      anon_sym_RBRACE,
    STATE(601), 1,
      aux_sym_replication_list_repeat1,
  [12577] = 3,
    ACTIONS(1372), 1,
      anon_sym_COMMA,
    ACTIONS(1375), 1,
      anon_sym_RPAREN,
    STATE(602), 1,
      aux_sym_init_cond_hash_repeat1,
  [12587] = 3,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    ACTIONS(1377), 1,
      anon_sym_RBRACK,
    STATE(665), 1,
      aux_sym_assignment_tuple_repeat1,
  [12597] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(1008), 1,
      sym_return_mode,
  [12607] = 3,
    ACTIONS(1230), 1,
      sym_object_name,
    ACTIONS(1379), 1,
      anon_sym_RPAREN,
    STATE(635), 1,
      sym_param,
  [12617] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1381), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_create_function_repeat1,
  [12627] = 3,
    ACTIONS(1383), 1,
      anon_sym_COMMA,
    ACTIONS(1386), 1,
      anon_sym_RPAREN,
    STATE(607), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12637] = 3,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    ACTIONS(1390), 1,
      anon_sym_RPAREN,
    STATE(663), 1,
      aux_sym_expression_list_repeat1,
  [12647] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(1013), 1,
      sym_return_mode,
  [12657] = 3,
    ACTIONS(1392), 1,
      anon_sym_COMMA,
    ACTIONS(1394), 1,
      anon_sym_GT,
    STATE(571), 1,
      aux_sym_data_type_definition_repeat1,
  [12667] = 3,
    ACTIONS(1396), 1,
      anon_sym_COMMA,
    ACTIONS(1399), 1,
      anon_sym_RBRACE,
    STATE(611), 1,
      aux_sym_option_hash_repeat1,
  [12677] = 3,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(587), 1,
      sym_column_definition,
    STATE(1035), 1,
      sym_column_definition_list,
  [12687] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1401), 1,
      anon_sym_RPAREN,
    STATE(596), 1,
      aux_sym_create_type_repeat1,
  [12697] = 3,
    ACTIONS(1287), 1,
      anon_sym_COMMA,
    ACTIONS(1403), 1,
      anon_sym_RBRACE,
    STATE(567), 1,
      aux_sym_option_hash_repeat1,
  [12707] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(1034), 1,
      sym_return_mode,
  [12717] = 3,
    ACTIONS(1094), 1,
      sym_object_name,
    STATE(555), 1,
      sym_function_call,
    STATE(718), 1,
      sym_select_element,
  [12727] = 3,
    ACTIONS(1247), 1,
      anon_sym_COMMA,
    ACTIONS(1405), 1,
      aux_sym_from_spec_token1,
    STATE(677), 1,
      aux_sym_select_elements_repeat1,
  [12737] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1407), 1,
      anon_sym_RPAREN,
    STATE(659), 1,
      aux_sym_create_function_repeat1,
  [12747] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(1038), 1,
      sym_return_mode,
  [12757] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1409), 1,
      anon_sym_RPAREN,
    STATE(642), 1,
      aux_sym_create_function_repeat1,
  [12767] = 3,
    ACTIONS(1411), 1,
      anon_sym_COMMA,
    ACTIONS(1413), 1,
      anon_sym_RPAREN,
    STATE(602), 1,
      aux_sym_init_cond_hash_repeat1,
  [12777] = 3,
    ACTIONS(1415), 1,
      anon_sym_COMMA,
    ACTIONS(1418), 1,
      anon_sym_RPAREN,
    STATE(622), 1,
      aux_sym_column_definition_list_repeat1,
  [12787] = 3,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(587), 1,
      sym_column_definition,
    STATE(857), 1,
      sym_column_definition_list,
  [12797] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1420), 1,
      anon_sym_RPAREN,
    STATE(642), 1,
      aux_sym_create_function_repeat1,
  [12807] = 3,
    ACTIONS(1422), 1,
      anon_sym_COMMA,
    ACTIONS(1424), 1,
      anon_sym_RPAREN,
    STATE(607), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12817] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(862), 1,
      sym_return_mode,
  [12827] = 3,
    ACTIONS(1098), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1102), 1,
      aux_sym_insert_values_spec_token1,
    STATE(117), 1,
      sym_insert_values_spec,
  [12837] = 3,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    ACTIONS(1426), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      aux_sym_assignment_tuple_repeat1,
  [12847] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1428), 1,
      anon_sym_RPAREN,
    STATE(559), 1,
      aux_sym_create_function_repeat1,
  [12857] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(858), 1,
      sym_return_mode,
  [12867] = 3,
    ACTIONS(1352), 1,
      sym__string_literal,
    STATE(640), 1,
      sym_replication_list_item,
    STATE(998), 1,
      sym_replication_list,
  [12877] = 3,
    ACTIONS(1271), 1,
      anon_sym_COMMA,
    ACTIONS(1430), 1,
      aux_sym_from_spec_token1,
    STATE(646), 1,
      aux_sym_delete_column_list_repeat1,
  [12887] = 3,
    ACTIONS(1230), 1,
      sym_object_name,
    ACTIONS(1432), 1,
      anon_sym_RPAREN,
    STATE(629), 1,
      sym_param,
  [12897] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(994), 1,
      sym_return_mode,
  [12907] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1434), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      aux_sym_create_function_repeat1,
  [12917] = 1,
    ACTIONS(1116), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12923] = 2,
    ACTIONS(1438), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1436), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [12931] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(1440), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
  [12941] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    ACTIONS(1445), 1,
      anon_sym_RBRACE,
    STATE(639), 1,
      aux_sym_assignment_map_repeat1,
  [12951] = 3,
    ACTIONS(1232), 1,
      anon_sym_COMMA,
    ACTIONS(1447), 1,
      anon_sym_RBRACE,
    STATE(550), 1,
      aux_sym_replication_list_repeat1,
  [12961] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(975), 1,
      sym_return_mode,
  [12971] = 3,
    ACTIONS(1449), 1,
      anon_sym_COMMA,
    ACTIONS(1452), 1,
      anon_sym_RPAREN,
    STATE(642), 1,
      aux_sym_create_function_repeat1,
  [12981] = 3,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    ACTIONS(1456), 1,
      anon_sym_RPAREN,
    STATE(678), 1,
      aux_sym_clustering_key_list_repeat1,
  [12991] = 3,
    ACTIONS(1411), 1,
      anon_sym_COMMA,
    ACTIONS(1458), 1,
      anon_sym_RPAREN,
    STATE(621), 1,
      aux_sym_init_cond_hash_repeat1,
  [13001] = 1,
    ACTIONS(1460), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13007] = 3,
    ACTIONS(1462), 1,
      anon_sym_COMMA,
    ACTIONS(1465), 1,
      aux_sym_from_spec_token1,
    STATE(646), 1,
      aux_sym_delete_column_list_repeat1,
  [13017] = 3,
    ACTIONS(1467), 1,
      anon_sym_COMMA,
    ACTIONS(1469), 1,
      anon_sym_RPAREN,
    STATE(622), 1,
      aux_sym_column_definition_list_repeat1,
  [13027] = 3,
    ACTIONS(1422), 1,
      anon_sym_COMMA,
    ACTIONS(1471), 1,
      anon_sym_RPAREN,
    STATE(625), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13037] = 3,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(587), 1,
      sym_column_definition,
    STATE(1290), 1,
      sym_column_definition_list,
  [13047] = 3,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    ACTIONS(1473), 1,
      anon_sym_RPAREN,
    STATE(628), 1,
      aux_sym_assignment_tuple_repeat1,
  [13057] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(1064), 1,
      sym_return_mode,
  [13067] = 3,
    ACTIONS(1392), 1,
      anon_sym_COMMA,
    ACTIONS(1475), 1,
      anon_sym_GT,
    STATE(610), 1,
      aux_sym_data_type_definition_repeat1,
  [13077] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1477), 1,
      anon_sym_RPAREN,
    STATE(642), 1,
      aux_sym_create_function_repeat1,
  [13087] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(1230), 1,
      sym_return_mode,
  [13097] = 3,
    ACTIONS(1314), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1479), 1,
      anon_sym_DOT,
    STATE(1082), 1,
      sym_materialized_view_where,
  [13107] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1481), 1,
      anon_sym_RPAREN,
    STATE(686), 1,
      aux_sym_create_type_repeat1,
  [13117] = 3,
    ACTIONS(1230), 1,
      sym_object_name,
    ACTIONS(1483), 1,
      anon_sym_RPAREN,
    STATE(692), 1,
      sym_param,
  [13127] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(1094), 1,
      sym_return_mode,
  [13137] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1485), 1,
      anon_sym_RPAREN,
    STATE(642), 1,
      aux_sym_create_function_repeat1,
  [13147] = 3,
    ACTIONS(1314), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1487), 1,
      anon_sym_DOT,
    STATE(1221), 1,
      sym_materialized_view_where,
  [13157] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(1098), 1,
      sym_return_mode,
  [13167] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1489), 1,
      anon_sym_RPAREN,
    STATE(596), 1,
      aux_sym_create_type_repeat1,
  [13177] = 3,
    ACTIONS(1491), 1,
      anon_sym_COMMA,
    ACTIONS(1494), 1,
      anon_sym_RPAREN,
    STATE(663), 1,
      aux_sym_expression_list_repeat1,
  [13187] = 3,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    ACTIONS(1496), 1,
      anon_sym_RBRACE,
    STATE(473), 1,
      aux_sym_assignment_tuple_repeat1,
  [13197] = 3,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    ACTIONS(1498), 1,
      anon_sym_RBRACK,
    STATE(473), 1,
      aux_sym_assignment_tuple_repeat1,
  [13207] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(936), 1,
      sym_return_mode,
  [13217] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1500), 1,
      anon_sym_RPAREN,
    STATE(591), 1,
      aux_sym_create_function_repeat1,
  [13227] = 3,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    STATE(579), 1,
      aux_sym_function_args_repeat1,
  [13237] = 3,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    ACTIONS(1502), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      aux_sym_assignment_tuple_repeat1,
  [13247] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1504), 1,
      anon_sym_RPAREN,
    STATE(642), 1,
      aux_sym_create_function_repeat1,
  [13257] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(1189), 1,
      sym_return_mode,
  [13267] = 3,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    ACTIONS(1506), 1,
      anon_sym_RPAREN,
    STATE(608), 1,
      aux_sym_expression_list_repeat1,
  [13277] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(1502), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
  [13287] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(1502), 1,
      anon_sym_RPAREN,
    STATE(568), 1,
      aux_sym_relation_element_repeat2,
  [13297] = 3,
    ACTIONS(1508), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1511), 1,
      aux_sym_create_materialized_view_token1,
    STATE(675), 1,
      aux_sym_materialized_view_where_repeat1,
  [13307] = 3,
    ACTIONS(157), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1513), 1,
      aux_sym_create_materialized_view_token1,
    STATE(70), 1,
      aux_sym_relation_elements_repeat1,
  [13317] = 3,
    ACTIONS(1515), 1,
      anon_sym_COMMA,
    ACTIONS(1518), 1,
      aux_sym_from_spec_token1,
    STATE(677), 1,
      aux_sym_select_elements_repeat1,
  [13327] = 3,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    ACTIONS(1520), 1,
      anon_sym_RPAREN,
    STATE(694), 1,
      aux_sym_clustering_key_list_repeat1,
  [13337] = 3,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    ACTIONS(1522), 1,
      anon_sym_RPAREN,
    STATE(691), 1,
      aux_sym_clustering_key_list_repeat1,
  [13347] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(1524), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_relation_element_repeat1,
  [13357] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(1118), 1,
      sym_return_mode,
  [13367] = 3,
    ACTIONS(1526), 1,
      anon_sym_COMMA,
    ACTIONS(1529), 1,
      anon_sym_RPAREN,
    STATE(682), 1,
      aux_sym_function_args_repeat1,
  [13377] = 3,
    ACTIONS(1314), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1531), 1,
      anon_sym_DOT,
    STATE(1133), 1,
      sym_materialized_view_where,
  [13387] = 2,
    ACTIONS(957), 1,
      anon_sym_LPAREN,
    ACTIONS(1529), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13395] = 3,
    ACTIONS(157), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1202), 1,
      aux_sym_create_materialized_view_token1,
    STATE(70), 1,
      aux_sym_relation_elements_repeat1,
  [13405] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1533), 1,
      anon_sym_RPAREN,
    STATE(596), 1,
      aux_sym_create_type_repeat1,
  [13415] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(1144), 1,
      sym_return_mode,
  [13425] = 3,
    ACTIONS(1352), 1,
      sym__string_literal,
    STATE(640), 1,
      sym_replication_list_item,
    STATE(893), 1,
      sym_replication_list,
  [13435] = 3,
    ACTIONS(214), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1535), 1,
      aux_sym_update_token2,
    STATE(1327), 1,
      sym_using_ttl_timestamp,
  [13445] = 3,
    ACTIONS(1098), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1102), 1,
      aux_sym_insert_values_spec_token1,
    STATE(103), 1,
      sym_insert_values_spec,
  [13455] = 3,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    ACTIONS(1537), 1,
      anon_sym_RPAREN,
    STATE(694), 1,
      aux_sym_clustering_key_list_repeat1,
  [13465] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1539), 1,
      anon_sym_RPAREN,
    STATE(670), 1,
      aux_sym_create_function_repeat1,
  [13475] = 3,
    ACTIONS(1224), 1,
      aux_sym_create_function_token1,
    ACTIONS(1226), 1,
      aux_sym_return_mode_token1,
    STATE(1149), 1,
      sym_return_mode,
  [13485] = 3,
    ACTIONS(1541), 1,
      anon_sym_COMMA,
    ACTIONS(1544), 1,
      anon_sym_RPAREN,
    STATE(694), 1,
      aux_sym_clustering_key_list_repeat1,
  [13495] = 1,
    ACTIONS(1544), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13500] = 2,
    ACTIONS(1546), 1,
      anon_sym_DOT,
    ACTIONS(1548), 1,
      aux_sym_create_index_token3,
  [13507] = 1,
    ACTIONS(1550), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13512] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(1161), 1,
      sym_clustering_key_list,
  [13519] = 2,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    STATE(136), 1,
      sym_where_spec,
  [13526] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(514), 1,
      sym_assignment_element,
  [13533] = 2,
    ACTIONS(1556), 1,
      aux_sym_durable_writes_token1,
    STATE(388), 1,
      sym_durable_writes,
  [13540] = 2,
    ACTIONS(1558), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1560), 1,
      sym_object_name,
  [13547] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(543), 1,
      sym_assignment_element,
  [13554] = 2,
    ACTIONS(1314), 1,
      aux_sym_where_spec_token1,
    STATE(1182), 1,
      sym_materialized_view_where,
  [13561] = 1,
    ACTIONS(1529), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13566] = 2,
    ACTIONS(1562), 1,
      sym_object_name,
    STATE(208), 1,
      sym_role_name,
  [13573] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(819), 1,
      sym_assignment_element,
  [13580] = 2,
    ACTIONS(1564), 1,
      anon_sym_DOT,
    ACTIONS(1566), 1,
      anon_sym_LPAREN,
  [13587] = 2,
    ACTIONS(1568), 1,
      aux_sym_from_spec_token1,
    STATE(518), 1,
      sym_from_spec,
  [13594] = 2,
    ACTIONS(1204), 1,
      aux_sym_timestamp_token1,
    STATE(227), 1,
      sym_timestamp,
  [13601] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(513), 1,
      sym_assignment_element,
  [13608] = 2,
    ACTIONS(1206), 1,
      aux_sym_ttl_token1,
    STATE(227), 1,
      sym_ttl,
  [13615] = 1,
    ACTIONS(1511), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13620] = 2,
    ACTIONS(1570), 1,
      sym_object_name,
    STATE(211), 1,
      sym_if_condition,
  [13627] = 2,
    ACTIONS(1572), 1,
      sym_object_name,
    STATE(485), 1,
      sym_table_name,
  [13634] = 2,
    ACTIONS(1574), 1,
      anon_sym_DOT,
    ACTIONS(1576), 1,
      aux_sym_create_index_token3,
  [13641] = 2,
    ACTIONS(1568), 1,
      aux_sym_from_spec_token1,
    STATE(74), 1,
      sym_from_spec,
  [13648] = 1,
    ACTIONS(1518), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13653] = 1,
    ACTIONS(1578), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [13658] = 2,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    STATE(573), 1,
      sym_assignment_tuple,
  [13665] = 2,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_assignment_tuple,
  [13672] = 1,
    ACTIONS(1580), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13677] = 2,
    ACTIONS(1582), 1,
      anon_sym_DOT,
    ACTIONS(1584), 1,
      anon_sym_LPAREN,
  [13684] = 1,
    ACTIONS(1586), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13689] = 2,
    ACTIONS(1588), 1,
      anon_sym_DOT,
    ACTIONS(1590), 1,
      anon_sym_LPAREN,
  [13696] = 1,
    ACTIONS(1592), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13701] = 2,
    ACTIONS(1594), 1,
      sym_object_name,
    STATE(1187), 1,
      sym_column_list,
  [13708] = 2,
    ACTIONS(1596), 1,
      aux_sym_resource_token5,
    ACTIONS(1598), 1,
      aux_sym_drop_aggregate_token1,
  [13715] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(541), 1,
      sym_assignment_element,
  [13722] = 2,
    ACTIONS(1600), 1,
      anon_sym_DOT,
    ACTIONS(1602), 1,
      anon_sym_LPAREN,
  [13729] = 2,
    ACTIONS(1604), 1,
      anon_sym_DOT,
    ACTIONS(1606), 1,
      aux_sym_using_timestamp_spec_token1,
  [13736] = 2,
    ACTIONS(1608), 1,
      sym_object_name,
    STATE(1367), 1,
      sym_user_name,
  [13743] = 1,
    ACTIONS(1610), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13748] = 2,
    ACTIONS(1612), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1614), 1,
      sym_object_name,
  [13755] = 1,
    ACTIONS(1494), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13760] = 2,
    ACTIONS(1616), 1,
      aux_sym_role_with_options_token1,
    STATE(121), 1,
      sym_user_password,
  [13767] = 2,
    ACTIONS(1618), 1,
      anon_sym_DOT,
    ACTIONS(1620), 1,
      anon_sym_LPAREN,
  [13774] = 2,
    ACTIONS(1622), 1,
      anon_sym_DOT,
    ACTIONS(1624), 1,
      anon_sym_LPAREN,
  [13781] = 2,
    ACTIONS(1314), 1,
      aux_sym_where_spec_token1,
    STATE(1222), 1,
      sym_materialized_view_where,
  [13788] = 1,
    ACTIONS(1626), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13793] = 2,
    ACTIONS(1628), 1,
      sym_object_name,
    STATE(1324), 1,
      sym_trigger_name,
  [13800] = 1,
    ACTIONS(1630), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13805] = 2,
    ACTIONS(1632), 1,
      sym__string_literal,
    STATE(346), 1,
      sym_trigger_class,
  [13812] = 2,
    ACTIONS(1314), 1,
      aux_sym_where_spec_token1,
    STATE(1083), 1,
      sym_materialized_view_where,
  [13819] = 2,
    ACTIONS(1634), 1,
      sym_object_name,
    STATE(713), 1,
      sym_column_not_null,
  [13826] = 2,
    ACTIONS(1594), 1,
      sym_object_name,
    STATE(1079), 1,
      sym_column_list,
  [13833] = 2,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    STATE(174), 1,
      sym_where_spec,
  [13840] = 2,
    ACTIONS(1269), 1,
      sym_object_name,
    STATE(768), 1,
      sym_column_definition,
  [13847] = 1,
    ACTIONS(1465), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13852] = 2,
    ACTIONS(1636), 1,
      anon_sym_DOT,
    ACTIONS(1638), 1,
      aux_sym_select_element_token1,
  [13859] = 2,
    ACTIONS(1640), 1,
      anon_sym_DOT,
    ACTIONS(1642), 1,
      anon_sym_LPAREN,
  [13866] = 2,
    ACTIONS(1572), 1,
      sym_object_name,
    STATE(1260), 1,
      sym_table_name,
  [13873] = 2,
    ACTIONS(1644), 1,
      sym__string_literal,
    STATE(614), 1,
      sym_option_hash_item,
  [13880] = 2,
    ACTIONS(1552), 1,
      sym_object_name,
    STATE(1060), 1,
      sym_clustering_key_list,
  [13887] = 2,
    ACTIONS(1594), 1,
      sym_object_name,
    STATE(1266), 1,
      sym_column_list,
  [13894] = 2,
    ACTIONS(1594), 1,
      sym_object_name,
    STATE(909), 1,
      sym_column_list,
  [13901] = 2,
    ACTIONS(1594), 1,
      sym_object_name,
    STATE(1267), 1,
      sym_column_list,
  [13908] = 1,
    ACTIONS(1452), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13913] = 2,
    ACTIONS(1572), 1,
      sym_object_name,
    STATE(986), 1,
      sym_table_name,
  [13920] = 2,
    ACTIONS(1646), 1,
      sym_object_name,
    STATE(749), 1,
      sym_delete_column_item,
  [13927] = 2,
    ACTIONS(123), 1,
      aux_sym_where_spec_token1,
    STATE(195), 1,
      sym_where_spec,
  [13934] = 2,
    ACTIONS(1204), 1,
      aux_sym_timestamp_token1,
    STATE(496), 1,
      sym_timestamp,
  [13941] = 1,
    ACTIONS(1648), 2,
      sym__string_literal,
      sym__decimal_literal,
  [13946] = 2,
    ACTIONS(1572), 1,
      sym_object_name,
    STATE(1012), 1,
      sym_table_name,
  [13953] = 2,
    ACTIONS(1650), 1,
      sym_object_name,
    STATE(782), 1,
      sym_init_cond_hash_item,
  [13960] = 2,
    ACTIONS(1556), 1,
      aux_sym_durable_writes_token1,
    STATE(326), 1,
      sym_durable_writes,
  [13967] = 2,
    ACTIONS(1314), 1,
      aux_sym_where_spec_token1,
    STATE(1298), 1,
      sym_materialized_view_where,
  [13974] = 1,
    ACTIONS(1418), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13979] = 2,
    ACTIONS(1594), 1,
      sym_object_name,
    STATE(1301), 1,
      sym_column_list,
  [13986] = 1,
    ACTIONS(1652), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13991] = 2,
    ACTIONS(1568), 1,
      aux_sym_from_spec_token1,
    STATE(72), 1,
      sym_from_spec,
  [13998] = 2,
    ACTIONS(1608), 1,
      sym_object_name,
    STATE(1072), 1,
      sym_user_name,
  [14005] = 2,
    ACTIONS(1634), 1,
      sym_object_name,
    STATE(500), 1,
      sym_column_not_null,
  [14012] = 1,
    ACTIONS(1654), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14017] = 2,
    ACTIONS(1352), 1,
      sym__string_literal,
    STATE(785), 1,
      sym_replication_list_item,
  [14024] = 1,
    ACTIONS(1399), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14029] = 1,
    ACTIONS(1656), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14034] = 1,
    ACTIONS(1386), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14039] = 2,
    ACTIONS(1658), 1,
      sym_object_name,
    STATE(1085), 1,
      sym_keyspace_name,
  [14046] = 2,
    ACTIONS(1660), 1,
      anon_sym_DOT,
    ACTIONS(1662), 1,
      anon_sym_LPAREN,
  [14053] = 2,
    ACTIONS(1594), 1,
      sym_object_name,
    STATE(882), 1,
      sym_column_list,
  [14060] = 1,
    ACTIONS(1375), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14065] = 2,
    ACTIONS(1556), 1,
      aux_sym_durable_writes_token1,
    STATE(304), 1,
      sym_durable_writes,
  [14072] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(522), 1,
      sym_assignment_element,
  [14079] = 1,
    ACTIONS(1370), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14084] = 1,
    ACTIONS(1664), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14089] = 1,
    ACTIONS(1666), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14094] = 2,
    ACTIONS(1230), 1,
      sym_object_name,
    STATE(758), 1,
      sym_param,
  [14101] = 2,
    ACTIONS(1594), 1,
      sym_object_name,
    STATE(1325), 1,
      sym_column_list,
  [14108] = 2,
    ACTIONS(1668), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1670), 1,
      sym_object_name,
  [14115] = 2,
    ACTIONS(1672), 1,
      anon_sym_DOT,
    ACTIONS(1674), 1,
      anon_sym_LPAREN,
  [14122] = 2,
    ACTIONS(1676), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1678), 1,
      sym_object_name,
  [14129] = 2,
    ACTIONS(1680), 1,
      anon_sym_COMMA,
    ACTIONS(1682), 1,
      anon_sym_RPAREN,
  [14136] = 2,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_assignment_tuple,
  [14143] = 2,
    ACTIONS(1114), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym_option_hash,
  [14150] = 2,
    ACTIONS(1684), 1,
      anon_sym_DOT,
    ACTIONS(1686), 1,
      anon_sym_LPAREN,
  [14157] = 2,
    ACTIONS(1688), 1,
      sym_object_name,
    STATE(1001), 1,
      sym_partition_key_list,
  [14164] = 2,
    ACTIONS(1690), 1,
      anon_sym_DOT,
    ACTIONS(1692), 1,
      anon_sym_LPAREN,
  [14171] = 2,
    ACTIONS(1694), 1,
      anon_sym_DOT,
    ACTIONS(1696), 1,
      aux_sym_select_element_token1,
  [14178] = 2,
    ACTIONS(1698), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1700), 1,
      sym_object_name,
  [14185] = 2,
    ACTIONS(1632), 1,
      sym__string_literal,
    STATE(361), 1,
      sym_trigger_class,
  [14192] = 2,
    ACTIONS(1702), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1704), 1,
      sym_object_name,
  [14199] = 2,
    ACTIONS(1658), 1,
      sym_object_name,
    STATE(1293), 1,
      sym_keyspace_name,
  [14206] = 2,
    ACTIONS(1616), 1,
      aux_sym_role_with_options_token1,
    STATE(119), 1,
      sym_user_password,
  [14213] = 2,
    ACTIONS(1706), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1708), 1,
      sym_object_name,
  [14220] = 2,
    ACTIONS(1710), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1712), 1,
      sym_object_name,
  [14227] = 1,
    ACTIONS(1714), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14232] = 2,
    ACTIONS(1716), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1718), 1,
      sym_object_name,
  [14239] = 2,
    ACTIONS(1720), 1,
      sym__string_literal,
    ACTIONS(1722), 1,
      sym_object_name,
  [14246] = 2,
    ACTIONS(1724), 1,
      sym__string_literal,
    ACTIONS(1726), 1,
      sym_object_name,
  [14253] = 1,
    ACTIONS(1728), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14258] = 2,
    ACTIONS(1594), 1,
      sym_object_name,
    STATE(1342), 1,
      sym_column_list,
  [14265] = 2,
    ACTIONS(1594), 1,
      sym_object_name,
    STATE(1190), 1,
      sym_column_list,
  [14272] = 2,
    ACTIONS(1594), 1,
      sym_object_name,
    STATE(1343), 1,
      sym_column_list,
  [14279] = 2,
    ACTIONS(1730), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1732), 1,
      sym_object_name,
  [14286] = 1,
    ACTIONS(1734), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14291] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(501), 1,
      sym_assignment_element,
  [14298] = 1,
    ACTIONS(1736), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14303] = 1,
    ACTIONS(1239), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14308] = 2,
    ACTIONS(1738), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1740), 1,
      sym_object_name,
  [14315] = 1,
    ACTIONS(1196), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14320] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(532), 1,
      sym_assignment_element,
  [14327] = 1,
    ACTIONS(1742), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [14332] = 2,
    ACTIONS(1616), 1,
      aux_sym_role_with_options_token1,
    STATE(114), 1,
      sym_user_password,
  [14339] = 2,
    ACTIONS(1594), 1,
      sym_object_name,
    STATE(962), 1,
      sym_column_list,
  [14346] = 2,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_assignment_tuple,
  [14353] = 2,
    ACTIONS(1310), 1,
      sym_object_name,
    STATE(225), 1,
      sym_alter_type_rename_item,
  [14360] = 2,
    ACTIONS(1744), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1746), 1,
      sym_object_name,
  [14367] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(531), 1,
      sym_assignment_element,
  [14374] = 2,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    STATE(589), 1,
      sym_assignment_tuple,
  [14381] = 1,
    ACTIONS(1302), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14386] = 2,
    ACTIONS(1608), 1,
      sym_object_name,
    STATE(390), 1,
      sym_user_name,
  [14393] = 2,
    ACTIONS(1748), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1750), 1,
      sym_object_name,
  [14400] = 2,
    ACTIONS(1752), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1754), 1,
      sym_object_name,
  [14407] = 2,
    ACTIONS(1756), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1758), 1,
      sym_object_name,
  [14414] = 2,
    ACTIONS(1760), 1,
      sym_object_name,
    STATE(392), 1,
      sym_alter_table_column_definition,
  [14421] = 2,
    ACTIONS(1762), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1764), 1,
      sym_object_name,
  [14428] = 2,
    ACTIONS(1572), 1,
      sym_object_name,
    STATE(478), 1,
      sym_table_name,
  [14435] = 2,
    ACTIONS(1644), 1,
      sym__string_literal,
    STATE(776), 1,
      sym_option_hash_item,
  [14442] = 1,
    ACTIONS(1766), 2,
      sym__string_literal,
      sym__float_literal,
  [14447] = 2,
    ACTIONS(1568), 1,
      aux_sym_from_spec_token1,
    STATE(537), 1,
      sym_from_spec,
  [14454] = 2,
    ACTIONS(1768), 1,
      anon_sym_EQ,
    ACTIONS(1770), 1,
      anon_sym_LBRACK,
  [14461] = 2,
    ACTIONS(1772), 1,
      anon_sym_DOT,
    ACTIONS(1774), 1,
      anon_sym_LPAREN,
  [14468] = 2,
    ACTIONS(1572), 1,
      sym_object_name,
    STATE(920), 1,
      sym_table_name,
  [14475] = 2,
    ACTIONS(1594), 1,
      sym_object_name,
    STATE(1362), 1,
      sym_column_list,
  [14482] = 2,
    ACTIONS(1776), 1,
      sym__string_literal,
    ACTIONS(1778), 1,
      sym_object_name,
  [14489] = 2,
    ACTIONS(1572), 1,
      sym_object_name,
    STATE(94), 1,
      sym_table_name,
  [14496] = 2,
    ACTIONS(1568), 1,
      aux_sym_from_spec_token1,
    STATE(71), 1,
      sym_from_spec,
  [14503] = 2,
    ACTIONS(1780), 1,
      aux_sym_truncate_token2,
    ACTIONS(1782), 1,
      sym_object_name,
  [14510] = 1,
    ACTIONS(1784), 2,
      sym__string_literal,
      sym__decimal_literal,
  [14515] = 1,
    ACTIONS(1786), 1,
      aux_sym_create_aggregate_token4,
  [14519] = 1,
    ACTIONS(1788), 1,
      sym_object_name,
  [14523] = 1,
    ACTIONS(1790), 1,
      anon_sym_RPAREN,
  [14527] = 1,
    ACTIONS(1792), 1,
      anon_sym_RPAREN,
  [14531] = 1,
    ACTIONS(1794), 1,
      anon_sym_LBRACE,
  [14535] = 1,
    ACTIONS(1796), 1,
      sym_object_name,
  [14539] = 1,
    ACTIONS(1798), 1,
      anon_sym_RPAREN,
  [14543] = 1,
    ACTIONS(1800), 1,
      aux_sym_create_function_token1,
  [14547] = 1,
    ACTIONS(1802), 1,
      anon_sym_RPAREN,
  [14551] = 1,
    ACTIONS(1804), 1,
      sym_object_name,
  [14555] = 1,
    ACTIONS(1806), 1,
      sym_object_name,
  [14559] = 1,
    ACTIONS(1808), 1,
      aux_sym_create_function_token1,
  [14563] = 1,
    ACTIONS(1810), 1,
      aux_sym_order_spec_token2,
  [14567] = 1,
    ACTIONS(1812), 1,
      aux_sym_return_mode_token2,
  [14571] = 1,
    ACTIONS(1814), 1,
      aux_sym_create_function_token1,
  [14575] = 1,
    ACTIONS(1816), 1,
      sym_object_name,
  [14579] = 1,
    ACTIONS(1818), 1,
      aux_sym_create_function_token2,
  [14583] = 1,
    ACTIONS(1820), 1,
      sym_object_name,
  [14587] = 1,
    ACTIONS(1822), 1,
      aux_sym_grant_token2,
  [14591] = 1,
    ACTIONS(1824), 1,
      aux_sym_from_spec_token1,
  [14595] = 1,
    ACTIONS(1826), 1,
      sym__decimal_literal,
  [14599] = 1,
    ACTIONS(1828), 1,
      sym_object_name,
  [14603] = 1,
    ACTIONS(1830), 1,
      sym_object_name,
  [14607] = 1,
    ACTIONS(1832), 1,
      aux_sym_create_aggregate_token3,
  [14611] = 1,
    ACTIONS(1834), 1,
      sym_object_name,
  [14615] = 1,
    ACTIONS(1836), 1,
      aux_sym_create_keyspace_token1,
  [14619] = 1,
    ACTIONS(1838), 1,
      sym_object_name,
  [14623] = 1,
    ACTIONS(1840), 1,
      sym_object_name,
  [14627] = 1,
    ACTIONS(1842), 1,
      sym_object_name,
  [14631] = 1,
    ACTIONS(1844), 1,
      aux_sym_select_element_token1,
  [14635] = 1,
    ACTIONS(1846), 1,
      sym_object_name,
  [14639] = 1,
    ACTIONS(1848), 1,
      aux_sym_from_spec_token1,
  [14643] = 1,
    ACTIONS(1850), 1,
      aux_sym_select_statement_token5,
  [14647] = 1,
    ACTIONS(1852), 1,
      sym_object_name,
  [14651] = 1,
    ACTIONS(1854), 1,
      sym_object_name,
  [14655] = 1,
    ACTIONS(1856), 1,
      sym_object_name,
  [14659] = 1,
    ACTIONS(1858), 1,
      aux_sym_update_token2,
  [14663] = 1,
    ACTIONS(1860), 1,
      aux_sym_select_statement_token5,
  [14667] = 1,
    ACTIONS(1862), 1,
      sym_object_name,
  [14671] = 1,
    ACTIONS(1864), 1,
      sym_object_name,
  [14675] = 1,
    ACTIONS(1866), 1,
      sym_object_name,
  [14679] = 1,
    ACTIONS(1868), 1,
      aux_sym_delete_statement_token3,
  [14683] = 1,
    ACTIONS(1870), 1,
      anon_sym_RBRACE,
  [14687] = 1,
    ACTIONS(1872), 1,
      sym_object_name,
  [14691] = 1,
    ACTIONS(1874), 1,
      aux_sym_create_function_token1,
  [14695] = 1,
    ACTIONS(1876), 1,
      anon_sym_LPAREN,
  [14699] = 1,
    ACTIONS(1878), 1,
      sym_object_name,
  [14703] = 1,
    ACTIONS(1880), 1,
      sym_object_name,
  [14707] = 1,
    ACTIONS(1882), 1,
      anon_sym_RPAREN,
  [14711] = 1,
    ACTIONS(1884), 1,
      sym_object_name,
  [14715] = 1,
    ACTIONS(1886), 1,
      aux_sym_delete_statement_token3,
  [14719] = 1,
    ACTIONS(1888), 1,
      sym_object_name,
  [14723] = 1,
    ACTIONS(1890), 1,
      sym_object_name,
  [14727] = 1,
    ACTIONS(1892), 1,
      sym_object_name,
  [14731] = 1,
    ACTIONS(1894), 1,
      sym_object_name,
  [14735] = 1,
    ACTIONS(1896), 1,
      sym_object_name,
  [14739] = 1,
    ACTIONS(1898), 1,
      anon_sym_EQ,
  [14743] = 1,
    ACTIONS(1900), 1,
      sym_object_name,
  [14747] = 1,
    ACTIONS(1902), 1,
      anon_sym_RPAREN,
  [14751] = 1,
    ACTIONS(1904), 1,
      aux_sym_insert_statement_token3,
  [14755] = 1,
    ACTIONS(1906), 1,
      sym_object_name,
  [14759] = 1,
    ACTIONS(1908), 1,
      sym_object_name,
  [14763] = 1,
    ACTIONS(1910), 1,
      sym_object_name,
  [14767] = 1,
    ACTIONS(1912), 1,
      anon_sym_LPAREN,
  [14771] = 1,
    ACTIONS(1914), 1,
      aux_sym_create_function_token2,
  [14775] = 1,
    ACTIONS(1916), 1,
      aux_sym_delete_statement_token3,
  [14779] = 1,
    ACTIONS(1918), 1,
      sym_object_name,
  [14783] = 1,
    ACTIONS(1920), 1,
      sym_object_name,
  [14787] = 1,
    ACTIONS(1922), 1,
      aux_sym_delete_statement_token3,
  [14791] = 1,
    ACTIONS(1924), 1,
      anon_sym_LPAREN,
  [14795] = 1,
    ACTIONS(1926), 1,
      sym_object_name,
  [14799] = 1,
    ACTIONS(1928), 1,
      sym_object_name,
  [14803] = 1,
    ACTIONS(1930), 1,
      sym_object_name,
  [14807] = 1,
    ACTIONS(1932), 1,
      aux_sym_delete_statement_token3,
  [14811] = 1,
    ACTIONS(1934), 1,
      sym_object_name,
  [14815] = 1,
    ACTIONS(1936), 1,
      anon_sym_EQ,
  [14819] = 1,
    ACTIONS(1938), 1,
      anon_sym_RPAREN,
  [14823] = 1,
    ACTIONS(1940), 1,
      aux_sym_insert_statement_token3,
  [14827] = 1,
    ACTIONS(1942), 1,
      anon_sym_LPAREN,
  [14831] = 1,
    ACTIONS(1944), 1,
      aux_sym_create_aggregate_token3,
  [14835] = 1,
    ACTIONS(1946), 1,
      sym_object_name,
  [14839] = 1,
    ACTIONS(1948), 1,
      anon_sym_RPAREN,
  [14843] = 1,
    ACTIONS(1950), 1,
      anon_sym_RPAREN,
  [14847] = 1,
    ACTIONS(1952), 1,
      sym_object_name,
  [14851] = 1,
    ACTIONS(1954), 1,
      anon_sym_RPAREN,
  [14855] = 1,
    ACTIONS(1956), 1,
      aux_sym_create_function_token1,
  [14859] = 1,
    ACTIONS(1958), 1,
      anon_sym_LPAREN,
  [14863] = 1,
    ACTIONS(1960), 1,
      sym_object_name,
  [14867] = 1,
    ACTIONS(1962), 1,
      anon_sym_EQ,
  [14871] = 1,
    ACTIONS(1964), 1,
      anon_sym_LPAREN,
  [14875] = 1,
    ACTIONS(1966), 1,
      anon_sym_EQ,
  [14879] = 1,
    ACTIONS(1968), 1,
      sym_object_name,
  [14883] = 1,
    ACTIONS(1970), 1,
      aux_sym_delete_statement_token3,
  [14887] = 1,
    ACTIONS(1972), 1,
      aux_sym_create_function_token1,
  [14891] = 1,
    ACTIONS(1974), 1,
      aux_sym_select_statement_token1,
  [14895] = 1,
    ACTIONS(1976), 1,
      aux_sym_create_function_token2,
  [14899] = 1,
    ACTIONS(1978), 1,
      aux_sym_delete_statement_token3,
  [14903] = 1,
    ACTIONS(1980), 1,
      aux_sym_create_function_token1,
  [14907] = 1,
    ACTIONS(1982), 1,
      aux_sym_create_function_token1,
  [14911] = 1,
    ACTIONS(1984), 1,
      aux_sym_select_element_token1,
  [14915] = 1,
    ACTIONS(1986), 1,
      sym_object_name,
  [14919] = 1,
    ACTIONS(1988), 1,
      aux_sym_create_function_token2,
  [14923] = 1,
    ACTIONS(1990), 1,
      sym_object_name,
  [14927] = 1,
    ACTIONS(1992), 1,
      anon_sym_EQ,
  [14931] = 1,
    ACTIONS(1994), 1,
      sym_object_name,
  [14935] = 1,
    ACTIONS(1996), 1,
      aux_sym_create_aggregate_token4,
  [14939] = 1,
    ACTIONS(1998), 1,
      anon_sym_RPAREN,
  [14943] = 1,
    ACTIONS(2000), 1,
      sym_object_name,
  [14947] = 1,
    ACTIONS(2002), 1,
      aux_sym_delete_statement_token3,
  [14951] = 1,
    ACTIONS(2004), 1,
      aux_sym_create_aggregate_token5,
  [14955] = 1,
    ACTIONS(2006), 1,
      aux_sym_select_statement_token1,
  [14959] = 1,
    ACTIONS(2008), 1,
      aux_sym_from_spec_token1,
  [14963] = 1,
    ACTIONS(2010), 1,
      sym_object_name,
  [14967] = 1,
    ACTIONS(2012), 1,
      sym_object_name,
  [14971] = 1,
    ACTIONS(2014), 1,
      aux_sym_create_aggregate_token3,
  [14975] = 1,
    ACTIONS(2016), 1,
      aux_sym_create_materialized_view_token1,
  [14979] = 1,
    ACTIONS(2018), 1,
      sym_object_name,
  [14983] = 1,
    ACTIONS(2020), 1,
      aux_sym_delete_statement_token3,
  [14987] = 1,
    ACTIONS(2022), 1,
      anon_sym_RPAREN,
  [14991] = 1,
    ACTIONS(2024), 1,
      aux_sym_create_keyspace_token1,
  [14995] = 1,
    ACTIONS(2026), 1,
      anon_sym_LPAREN,
  [14999] = 1,
    ACTIONS(2028), 1,
      anon_sym_LPAREN,
  [15003] = 1,
    ACTIONS(2030), 1,
      anon_sym_COLON,
  [15007] = 1,
    ACTIONS(2032), 1,
      aux_sym_create_function_token1,
  [15011] = 1,
    ACTIONS(2034), 1,
      aux_sym_create_function_token1,
  [15015] = 1,
    ACTIONS(2036), 1,
      anon_sym_LPAREN,
  [15019] = 1,
    ACTIONS(2038), 1,
      aux_sym_create_function_token2,
  [15023] = 1,
    ACTIONS(2040), 1,
      aux_sym_delete_statement_token3,
  [15027] = 1,
    ACTIONS(2042), 1,
      aux_sym_create_function_token1,
  [15031] = 1,
    ACTIONS(2044), 1,
      anon_sym_LPAREN,
  [15035] = 1,
    ACTIONS(2046), 1,
      anon_sym_RPAREN,
  [15039] = 1,
    ACTIONS(2048), 1,
      aux_sym_create_aggregate_token3,
  [15043] = 1,
    ACTIONS(2050), 1,
      aux_sym_create_aggregate_token4,
  [15047] = 1,
    ACTIONS(2052), 1,
      sym_object_name,
  [15051] = 1,
    ACTIONS(2054), 1,
      aux_sym_delete_statement_token3,
  [15055] = 1,
    ACTIONS(2056), 1,
      anon_sym_LPAREN,
  [15059] = 1,
    ACTIONS(2058), 1,
      aux_sym_grant_token2,
  [15063] = 1,
    ACTIONS(2060), 1,
      aux_sym_delete_statement_token3,
  [15067] = 1,
    ACTIONS(2062), 1,
      aux_sym_return_mode_token2,
  [15071] = 1,
    ACTIONS(2064), 1,
      sym_object_name,
  [15075] = 1,
    ACTIONS(2066), 1,
      aux_sym_delete_statement_token3,
  [15079] = 1,
    ACTIONS(2068), 1,
      sym_object_name,
  [15083] = 1,
    ACTIONS(2070), 1,
      aux_sym_constant_token2,
  [15087] = 1,
    ACTIONS(2072), 1,
      aux_sym_create_function_token1,
  [15091] = 1,
    ACTIONS(2074), 1,
      anon_sym_COLON,
  [15095] = 1,
    ACTIONS(2076), 1,
      anon_sym_LPAREN,
  [15099] = 1,
    ACTIONS(2078), 1,
      anon_sym_LPAREN,
  [15103] = 1,
    ACTIONS(2080), 1,
      anon_sym_RBRACE,
  [15107] = 1,
    ACTIONS(2082), 1,
      sym_object_name,
  [15111] = 1,
    ACTIONS(2084), 1,
      anon_sym_COLON,
  [15115] = 1,
    ACTIONS(2086), 1,
      anon_sym_RPAREN,
  [15119] = 1,
    ACTIONS(2088), 1,
      anon_sym_EQ,
  [15123] = 1,
    ACTIONS(2090), 1,
      anon_sym_RPAREN,
  [15127] = 1,
    ACTIONS(2092), 1,
      anon_sym_RPAREN,
  [15131] = 1,
    ACTIONS(2094), 1,
      anon_sym_RBRACE,
  [15135] = 1,
    ACTIONS(2096), 1,
      anon_sym_EQ,
  [15139] = 1,
    ACTIONS(2098), 1,
      anon_sym_RPAREN,
  [15143] = 1,
    ACTIONS(2100), 1,
      aux_sym_create_function_token1,
  [15147] = 1,
    ACTIONS(2102), 1,
      anon_sym_RPAREN,
  [15151] = 1,
    ACTIONS(2104), 1,
      anon_sym_RPAREN,
  [15155] = 1,
    ACTIONS(2106), 1,
      aux_sym_create_function_token2,
  [15159] = 1,
    ACTIONS(2108), 1,
      anon_sym_LPAREN,
  [15163] = 1,
    ACTIONS(2110), 1,
      aux_sym_create_function_token1,
  [15167] = 1,
    ACTIONS(2112), 1,
      sym_object_name,
  [15171] = 1,
    ACTIONS(2114), 1,
      aux_sym_create_function_token2,
  [15175] = 1,
    ACTIONS(2116), 1,
      aux_sym_delete_statement_token3,
  [15179] = 1,
    ACTIONS(2118), 1,
      sym__code_block,
  [15183] = 1,
    ACTIONS(2120), 1,
      aux_sym_select_element_token1,
  [15187] = 1,
    ACTIONS(2122), 1,
      sym_object_name,
  [15191] = 1,
    ACTIONS(2124), 1,
      aux_sym_create_aggregate_token3,
  [15195] = 1,
    ACTIONS(2126), 1,
      aux_sym_create_aggregate_token4,
  [15199] = 1,
    ACTIONS(2128), 1,
      sym__decimal_literal,
  [15203] = 1,
    ACTIONS(2130), 1,
      sym_object_name,
  [15207] = 1,
    ACTIONS(2132), 1,
      anon_sym_RPAREN,
  [15211] = 1,
    ACTIONS(2134), 1,
      sym_object_name,
  [15215] = 1,
    ACTIONS(2136), 1,
      anon_sym_LPAREN,
  [15219] = 1,
    ACTIONS(2138), 1,
      sym_object_name,
  [15223] = 1,
    ACTIONS(967), 1,
      aux_sym_column_not_null_token1,
  [15227] = 1,
    ACTIONS(2140), 1,
      sym_object_name,
  [15231] = 1,
    ACTIONS(2142), 1,
      aux_sym_relation_contains_key_token2,
  [15235] = 1,
    ACTIONS(2144), 1,
      aux_sym_select_statement_token1,
  [15239] = 1,
    ACTIONS(2146), 1,
      anon_sym_RBRACK,
  [15243] = 1,
    ACTIONS(2148), 1,
      aux_sym_order_spec_token1,
  [15247] = 1,
    ACTIONS(2150), 1,
      aux_sym_create_function_token1,
  [15251] = 1,
    ACTIONS(2152), 1,
      anon_sym_RPAREN,
  [15255] = 1,
    ACTIONS(2154), 1,
      anon_sym_LPAREN,
  [15259] = 1,
    ACTIONS(2156), 1,
      sym_object_name,
  [15263] = 1,
    ACTIONS(2158), 1,
      aux_sym_create_function_token1,
  [15267] = 1,
    ACTIONS(2160), 1,
      aux_sym_using_timestamp_spec_token1,
  [15271] = 1,
    ACTIONS(2162), 1,
      sym_object_name,
  [15275] = 1,
    ACTIONS(2164), 1,
      aux_sym_create_function_token2,
  [15279] = 1,
    ACTIONS(2166), 1,
      sym_object_name,
  [15283] = 1,
    ACTIONS(2168), 1,
      aux_sym_order_spec_token2,
  [15287] = 1,
    ACTIONS(2170), 1,
      aux_sym_create_aggregate_token3,
  [15291] = 1,
    ACTIONS(2172), 1,
      sym_object_name,
  [15295] = 1,
    ACTIONS(2174), 1,
      sym__decimal_literal,
  [15299] = 1,
    ACTIONS(2176), 1,
      aux_sym_select_statement_token5,
  [15303] = 1,
    ACTIONS(2178), 1,
      anon_sym_LPAREN,
  [15307] = 1,
    ACTIONS(2180), 1,
      anon_sym_RPAREN,
  [15311] = 1,
    ACTIONS(2182), 1,
      sym__string_literal,
  [15315] = 1,
    ACTIONS(2184), 1,
      aux_sym_insert_statement_token3,
  [15319] = 1,
    ACTIONS(2186), 1,
      anon_sym_LPAREN,
  [15323] = 1,
    ACTIONS(2188), 1,
      sym_object_name,
  [15327] = 1,
    ACTIONS(2190), 1,
      sym_object_name,
  [15331] = 1,
    ACTIONS(2192), 1,
      aux_sym_select_statement_token5,
  [15335] = 1,
    ACTIONS(2194), 1,
      sym_object_name,
  [15339] = 1,
    ACTIONS(2196), 1,
      aux_sym_create_index_token3,
  [15343] = 1,
    ACTIONS(2198), 1,
      anon_sym_COMMA,
  [15347] = 1,
    ACTIONS(2200), 1,
      aux_sym_insert_statement_token3,
  [15351] = 1,
    ACTIONS(2202), 1,
      anon_sym_RPAREN,
  [15355] = 1,
    ACTIONS(2204), 1,
      aux_sym_update_token2,
  [15359] = 1,
    ACTIONS(2206), 1,
      sym__boolean_literal,
  [15363] = 1,
    ACTIONS(2208), 1,
      sym_object_name,
  [15367] = 1,
    ACTIONS(2210), 1,
      aux_sym_create_function_token1,
  [15371] = 1,
    ACTIONS(2212), 1,
      sym__decimal_literal,
  [15375] = 1,
    ACTIONS(2214), 1,
      sym_object_name,
  [15379] = 1,
    ACTIONS(2216), 1,
      aux_sym_create_function_token2,
  [15383] = 1,
    ACTIONS(2218), 1,
      aux_sym_insert_statement_token3,
  [15387] = 1,
    ACTIONS(2220), 1,
      aux_sym_select_element_token1,
  [15391] = 1,
    ACTIONS(2222), 1,
      sym_object_name,
  [15395] = 1,
    ACTIONS(2224), 1,
      aux_sym_create_function_token2,
  [15399] = 1,
    ACTIONS(2226), 1,
      aux_sym_materialized_view_options_token1,
  [15403] = 1,
    ACTIONS(2228), 1,
      sym__code_block,
  [15407] = 1,
    ACTIONS(2230), 1,
      aux_sym_select_element_token1,
  [15411] = 1,
    ACTIONS(2232), 1,
      sym_object_name,
  [15415] = 1,
    ACTIONS(2234), 1,
      sym_object_name,
  [15419] = 1,
    ACTIONS(2236), 1,
      aux_sym_create_aggregate_token5,
  [15423] = 1,
    ACTIONS(2238), 1,
      aux_sym_create_aggregate_token6,
  [15427] = 1,
    ACTIONS(2240), 1,
      aux_sym_from_spec_token1,
  [15431] = 1,
    ACTIONS(2242), 1,
      sym_object_name,
  [15435] = 1,
    ACTIONS(2244), 1,
      sym_object_name,
  [15439] = 1,
    ACTIONS(2246), 1,
      aux_sym_create_materialized_view_token1,
  [15443] = 1,
    ACTIONS(2248), 1,
      aux_sym_create_materialized_view_token1,
  [15447] = 1,
    ACTIONS(2250), 1,
      aux_sym_insert_statement_token3,
  [15451] = 1,
    ACTIONS(2252), 1,
      aux_sym_materialized_view_options_token1,
  [15455] = 1,
    ACTIONS(2254), 1,
      sym_object_name,
  [15459] = 1,
    ACTIONS(2256), 1,
      aux_sym_update_token2,
  [15463] = 1,
    ACTIONS(2258), 1,
      anon_sym_LPAREN,
  [15467] = 1,
    ACTIONS(2260), 1,
      sym_object_name,
  [15471] = 1,
    ACTIONS(2262), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [15475] = 1,
    ACTIONS(2264), 1,
      anon_sym_EQ,
  [15479] = 1,
    ACTIONS(2266), 1,
      anon_sym_EQ,
  [15483] = 1,
    ACTIONS(2268), 1,
      sym_object_name,
  [15487] = 1,
    ACTIONS(2270), 1,
      aux_sym_create_function_token1,
  [15491] = 1,
    ACTIONS(2272), 1,
      aux_sym_grant_token2,
  [15495] = 1,
    ACTIONS(2274), 1,
      aux_sym_create_function_token2,
  [15499] = 1,
    ACTIONS(2276), 1,
      aux_sym_delete_statement_token3,
  [15503] = 1,
    ACTIONS(2278), 1,
      aux_sym_create_function_token1,
  [15507] = 1,
    ACTIONS(2280), 1,
      aux_sym_select_element_token1,
  [15511] = 1,
    ACTIONS(2282), 1,
      sym_object_name,
  [15515] = 1,
    ACTIONS(2284), 1,
      aux_sym_create_function_token2,
  [15519] = 1,
    ACTIONS(2286), 1,
      anon_sym_RPAREN,
  [15523] = 1,
    ACTIONS(2288), 1,
      sym_object_name,
  [15527] = 1,
    ACTIONS(2290), 1,
      aux_sym_create_aggregate_token4,
  [15531] = 1,
    ACTIONS(2292), 1,
      aux_sym_create_aggregate_token5,
  [15535] = 1,
    ACTIONS(2294), 1,
      aux_sym_delete_statement_token3,
  [15539] = 1,
    ACTIONS(2296), 1,
      anon_sym_EQ,
  [15543] = 1,
    ACTIONS(2298), 1,
      sym_object_name,
  [15547] = 1,
    ACTIONS(2300), 1,
      anon_sym_RPAREN,
  [15551] = 1,
    ACTIONS(2302), 1,
      anon_sym_RPAREN,
  [15555] = 1,
    ACTIONS(2304), 1,
      aux_sym_drop_type_token1,
  [15559] = 1,
    ACTIONS(957), 1,
      anon_sym_LPAREN,
  [15563] = 1,
    ACTIONS(2306), 1,
      sym_object_name,
  [15567] = 1,
    ACTIONS(2308), 1,
      sym_object_name,
  [15571] = 1,
    ACTIONS(2310), 1,
      aux_sym_delete_statement_token3,
  [15575] = 1,
    ACTIONS(2312), 1,
      aux_sym_create_function_token2,
  [15579] = 1,
    ACTIONS(2314), 1,
      aux_sym_select_statement_token5,
  [15583] = 1,
    ACTIONS(2316), 1,
      aux_sym_create_function_token1,
  [15587] = 1,
    ACTIONS(2318), 1,
      aux_sym_select_element_token1,
  [15591] = 1,
    ACTIONS(2320), 1,
      sym_object_name,
  [15595] = 1,
    ACTIONS(2322), 1,
      aux_sym_create_function_token2,
  [15599] = 1,
    ACTIONS(2324), 1,
      sym__code_block,
  [15603] = 1,
    ACTIONS(2326), 1,
      aux_sym_select_element_token1,
  [15607] = 1,
    ACTIONS(2328), 1,
      sym_object_name,
  [15611] = 1,
    ACTIONS(2330), 1,
      aux_sym_delete_statement_token3,
  [15615] = 1,
    ACTIONS(2332), 1,
      sym__code_block,
  [15619] = 1,
    ACTIONS(2334), 1,
      aux_sym_create_aggregate_token4,
  [15623] = 1,
    ACTIONS(2336), 1,
      aux_sym_create_aggregate_token5,
  [15627] = 1,
    ACTIONS(2338), 1,
      sym_object_name,
  [15631] = 1,
    ACTIONS(2340), 1,
      aux_sym_delete_statement_token3,
  [15635] = 1,
    ACTIONS(2342), 1,
      sym_object_name,
  [15639] = 1,
    ACTIONS(2344), 1,
      sym_object_name,
  [15643] = 1,
    ACTIONS(2346), 1,
      aux_sym_create_materialized_view_token1,
  [15647] = 1,
    ACTIONS(2348), 1,
      anon_sym_EQ,
  [15651] = 1,
    ACTIONS(2350), 1,
      aux_sym_relation_contains_key_token2,
  [15655] = 1,
    ACTIONS(2352), 1,
      aux_sym_relation_contains_key_token2,
  [15659] = 1,
    ACTIONS(2354), 1,
      aux_sym_constant_token2,
  [15663] = 1,
    ACTIONS(1047), 1,
      sym_object_name,
  [15667] = 1,
    ACTIONS(2356), 1,
      sym_object_name,
  [15671] = 1,
    ACTIONS(2358), 1,
      anon_sym_LPAREN,
  [15675] = 1,
    ACTIONS(2360), 1,
      aux_sym_create_index_token3,
  [15679] = 1,
    ACTIONS(2362), 1,
      sym_object_name,
  [15683] = 1,
    ACTIONS(2364), 1,
      aux_sym_delete_statement_token3,
  [15687] = 1,
    ACTIONS(2366), 1,
      aux_sym_create_function_token1,
  [15691] = 1,
    ACTIONS(2368), 1,
      anon_sym_RPAREN,
  [15695] = 1,
    ACTIONS(2370), 1,
      aux_sym_insert_statement_token3,
  [15699] = 1,
    ACTIONS(2372), 1,
      aux_sym_create_function_token2,
  [15703] = 1,
    ACTIONS(2374), 1,
      aux_sym_delete_statement_token3,
  [15707] = 1,
    ACTIONS(2376), 1,
      aux_sym_create_function_token1,
  [15711] = 1,
    ACTIONS(2378), 1,
      sym_object_name,
  [15715] = 1,
    ACTIONS(2380), 1,
      aux_sym_create_function_token2,
  [15719] = 1,
    ACTIONS(2382), 1,
      aux_sym_delete_statement_token3,
  [15723] = 1,
    ACTIONS(2384), 1,
      sym__code_block,
  [15727] = 1,
    ACTIONS(2386), 1,
      aux_sym_select_element_token1,
  [15731] = 1,
    ACTIONS(2388), 1,
      sym_object_name,
  [15735] = 1,
    ACTIONS(2390), 1,
      aux_sym_create_aggregate_token3,
  [15739] = 1,
    ACTIONS(2392), 1,
      aux_sym_create_aggregate_token4,
  [15743] = 1,
    ACTIONS(2394), 1,
      anon_sym_RPAREN,
  [15747] = 1,
    ACTIONS(2396), 1,
      sym_object_name,
  [15751] = 1,
    ACTIONS(2398), 1,
      aux_sym_materialized_view_options_token1,
  [15755] = 1,
    ACTIONS(2400), 1,
      anon_sym_RPAREN,
  [15759] = 1,
    ACTIONS(2402), 1,
      aux_sym_insert_statement_token3,
  [15763] = 1,
    ACTIONS(2404), 1,
      sym_object_name,
  [15767] = 1,
    ACTIONS(2406), 1,
      aux_sym_create_function_token2,
  [15771] = 1,
    ACTIONS(2408), 1,
      anon_sym_LPAREN,
  [15775] = 1,
    ACTIONS(2410), 1,
      sym__code_block,
  [15779] = 1,
    ACTIONS(2412), 1,
      aux_sym_select_element_token1,
  [15783] = 1,
    ACTIONS(2414), 1,
      sym_object_name,
  [15787] = 1,
    ACTIONS(2416), 1,
      aux_sym_insert_statement_token3,
  [15791] = 1,
    ACTIONS(2418), 1,
      sym__code_block,
  [15795] = 1,
    ACTIONS(2420), 1,
      aux_sym_select_element_token1,
  [15799] = 1,
    ACTIONS(2422), 1,
      aux_sym_using_timestamp_spec_token1,
  [15803] = 1,
    ACTIONS(2424), 1,
      sym_object_name,
  [15807] = 1,
    ACTIONS(2426), 1,
      sym_object_name,
  [15811] = 1,
    ACTIONS(2428), 1,
      aux_sym_create_aggregate_token6,
  [15815] = 1,
    ACTIONS(2430), 1,
      aux_sym_insert_statement_token3,
  [15819] = 1,
    ACTIONS(2432), 1,
      anon_sym_LPAREN,
  [15823] = 1,
    ACTIONS(2434), 1,
      sym_object_name,
  [15827] = 1,
    ACTIONS(2436), 1,
      aux_sym_delete_statement_token3,
  [15831] = 1,
    ACTIONS(2438), 1,
      sym_object_name,
  [15835] = 1,
    ACTIONS(2440), 1,
      aux_sym_relation_contains_key_token2,
  [15839] = 1,
    ACTIONS(2442), 1,
      aux_sym_create_materialized_view_token1,
  [15843] = 1,
    ACTIONS(2444), 1,
      anon_sym_LPAREN,
  [15847] = 1,
    ACTIONS(2446), 1,
      anon_sym_LPAREN,
  [15851] = 1,
    ACTIONS(2448), 1,
      sym_object_name,
  [15855] = 1,
    ACTIONS(2450), 1,
      sym_object_name,
  [15859] = 1,
    ACTIONS(2452), 1,
      anon_sym_RPAREN,
  [15863] = 1,
    ACTIONS(2454), 1,
      aux_sym_insert_statement_token3,
  [15867] = 1,
    ACTIONS(2456), 1,
      aux_sym_create_function_token1,
  [15871] = 1,
    ACTIONS(2458), 1,
      aux_sym_from_spec_token1,
  [15875] = 1,
    ACTIONS(2460), 1,
      sym_object_name,
  [15879] = 1,
    ACTIONS(2462), 1,
      aux_sym_create_function_token2,
  [15883] = 1,
    ACTIONS(2464), 1,
      aux_sym_insert_statement_token3,
  [15887] = 1,
    ACTIONS(2466), 1,
      aux_sym_select_element_token1,
  [15891] = 1,
    ACTIONS(2468), 1,
      sym_object_name,
  [15895] = 1,
    ACTIONS(2470), 1,
      aux_sym_create_function_token2,
  [15899] = 1,
    ACTIONS(2472), 1,
      aux_sym_select_statement_token1,
  [15903] = 1,
    ACTIONS(2474), 1,
      sym__code_block,
  [15907] = 1,
    ACTIONS(2476), 1,
      aux_sym_select_element_token1,
  [15911] = 1,
    ACTIONS(2478), 1,
      sym_object_name,
  [15915] = 1,
    ACTIONS(2480), 1,
      aux_sym_insert_statement_token3,
  [15919] = 1,
    ACTIONS(2482), 1,
      aux_sym_create_aggregate_token5,
  [15923] = 1,
    ACTIONS(2484), 1,
      aux_sym_create_aggregate_token6,
  [15927] = 1,
    ACTIONS(2486), 1,
      aux_sym_select_element_token1,
  [15931] = 1,
    ACTIONS(2488), 1,
      sym_object_name,
  [15935] = 1,
    ACTIONS(2490), 1,
      aux_sym_create_function_token2,
  [15939] = 1,
    ACTIONS(2492), 1,
      aux_sym_materialized_view_options_token1,
  [15943] = 1,
    ACTIONS(2494), 1,
      sym__code_block,
  [15947] = 1,
    ACTIONS(2496), 1,
      aux_sym_select_element_token1,
  [15951] = 1,
    ACTIONS(2498), 1,
      aux_sym_materialized_view_options_token1,
  [15955] = 1,
    ACTIONS(2500), 1,
      sym__code_block,
  [15959] = 1,
    ACTIONS(2502), 1,
      aux_sym_create_aggregate_token5,
  [15963] = 1,
    ACTIONS(2504), 1,
      aux_sym_create_aggregate_token6,
  [15967] = 1,
    ACTIONS(2506), 1,
      aux_sym_insert_statement_token3,
  [15971] = 1,
    ACTIONS(2508), 1,
      aux_sym_create_index_token3,
  [15975] = 1,
    ACTIONS(2510), 1,
      anon_sym_COLON,
  [15979] = 1,
    ACTIONS(2512), 1,
      sym_object_name,
  [15983] = 1,
    ACTIONS(2514), 1,
      anon_sym_RPAREN,
  [15987] = 1,
    ACTIONS(2516), 1,
      sym_object_name,
  [15991] = 1,
    ACTIONS(2518), 1,
      sym_object_name,
  [15995] = 1,
    ACTIONS(2520), 1,
      aux_sym_create_materialized_view_token1,
  [15999] = 1,
    ACTIONS(2522), 1,
      aux_sym_create_materialized_view_token1,
  [16003] = 1,
    ACTIONS(2524), 1,
      anon_sym_LPAREN,
  [16007] = 1,
    ACTIONS(2526), 1,
      aux_sym_relation_contains_key_token2,
  [16011] = 1,
    ACTIONS(2528), 1,
      aux_sym_create_index_token3,
  [16015] = 1,
    ACTIONS(2530), 1,
      anon_sym_LPAREN,
  [16019] = 1,
    ACTIONS(2532), 1,
      aux_sym_create_function_token1,
  [16023] = 1,
    ACTIONS(2534), 1,
      aux_sym_create_function_token2,
  [16027] = 1,
    ACTIONS(2536), 1,
      aux_sym_insert_statement_token3,
  [16031] = 1,
    ACTIONS(2538), 1,
      aux_sym_create_function_token1,
  [16035] = 1,
    ACTIONS(2540), 1,
      aux_sym_select_element_token1,
  [16039] = 1,
    ACTIONS(2542), 1,
      sym_object_name,
  [16043] = 1,
    ACTIONS(2544), 1,
      aux_sym_create_function_token2,
  [16047] = 1,
    ACTIONS(2546), 1,
      sym__code_block,
  [16051] = 1,
    ACTIONS(2548), 1,
      aux_sym_select_element_token1,
  [16055] = 1,
    ACTIONS(2550), 1,
      sym_object_name,
  [16059] = 1,
    ACTIONS(2552), 1,
      aux_sym_create_index_token3,
  [16063] = 1,
    ACTIONS(2554), 1,
      sym__code_block,
  [16067] = 1,
    ACTIONS(2556), 1,
      aux_sym_create_aggregate_token4,
  [16071] = 1,
    ACTIONS(2558), 1,
      aux_sym_create_aggregate_token5,
  [16075] = 1,
    ACTIONS(2560), 1,
      sym_object_name,
  [16079] = 1,
    ACTIONS(2562), 1,
      sym_object_name,
  [16083] = 1,
    ACTIONS(2564), 1,
      sym__code_block,
  [16087] = 1,
    ACTIONS(2566), 1,
      aux_sym_select_element_token1,
  [16091] = 1,
    ACTIONS(2568), 1,
      sym_object_name,
  [16095] = 1,
    ACTIONS(2570), 1,
      aux_sym_insert_statement_token3,
  [16099] = 1,
    ACTIONS(2572), 1,
      sym__code_block,
  [16103] = 1,
    ACTIONS(2574), 1,
      sym_object_name,
  [16107] = 1,
    ACTIONS(2576), 1,
      sym_object_name,
  [16111] = 1,
    ACTIONS(2578), 1,
      aux_sym_constant_token2,
  [16115] = 1,
    ACTIONS(2580), 1,
      aux_sym_create_index_token3,
  [16119] = 1,
    ACTIONS(2582), 1,
      sym_object_name,
  [16123] = 1,
    ACTIONS(2584), 1,
      aux_sym_create_keyspace_token1,
  [16127] = 1,
    ACTIONS(2586), 1,
      anon_sym_RPAREN,
  [16131] = 1,
    ACTIONS(2588), 1,
      anon_sym_LPAREN,
  [16135] = 1,
    ACTIONS(2590), 1,
      sym_object_name,
  [16139] = 1,
    ACTIONS(2592), 1,
      sym_object_name,
  [16143] = 1,
    ACTIONS(2594), 1,
      sym_object_name,
  [16147] = 1,
    ACTIONS(2596), 1,
      sym_object_name,
  [16151] = 1,
    ACTIONS(2598), 1,
      anon_sym_LPAREN,
  [16155] = 1,
    ACTIONS(2600), 1,
      anon_sym_RPAREN,
  [16159] = 1,
    ACTIONS(2602), 1,
      aux_sym_relation_contains_key_token2,
  [16163] = 1,
    ACTIONS(2604), 1,
      aux_sym_relation_contains_key_token2,
  [16167] = 1,
    ACTIONS(2606), 1,
      anon_sym_RPAREN,
  [16171] = 1,
    ACTIONS(2608), 1,
      anon_sym_LPAREN,
  [16175] = 1,
    ACTIONS(2610), 1,
      anon_sym_RPAREN,
  [16179] = 1,
    ACTIONS(2612), 1,
      anon_sym_RPAREN,
  [16183] = 1,
    ACTIONS(2614), 1,
      sym_object_name,
  [16187] = 1,
    ACTIONS(2616), 1,
      anon_sym_STAR,
  [16191] = 1,
    ACTIONS(2618), 1,
      sym_object_name,
  [16195] = 1,
    ACTIONS(2620), 1,
      aux_sym_create_function_token2,
  [16199] = 1,
    ACTIONS(2622), 1,
      aux_sym_relation_contains_key_token2,
  [16203] = 1,
    ACTIONS(2624), 1,
      sym__code_block,
  [16207] = 1,
    ACTIONS(2626), 1,
      aux_sym_select_element_token1,
  [16211] = 1,
    ACTIONS(2628), 1,
      sym_object_name,
  [16215] = 1,
    ACTIONS(2630), 1,
      anon_sym_RPAREN,
  [16219] = 1,
    ACTIONS(2632), 1,
      sym__code_block,
  [16223] = 1,
    ACTIONS(2634), 1,
      aux_sym_select_element_token1,
  [16227] = 1,
    ACTIONS(2636), 1,
      anon_sym_RPAREN,
  [16231] = 1,
    ACTIONS(2638), 1,
      sym_object_name,
  [16235] = 1,
    ACTIONS(2640), 1,
      sym_object_name,
  [16239] = 1,
    ACTIONS(2642), 1,
      aux_sym_create_aggregate_token6,
  [16243] = 1,
    ACTIONS(2644), 1,
      aux_sym_insert_statement_token2,
  [16247] = 1,
    ACTIONS(2646), 1,
      aux_sym_relation_contains_key_token2,
  [16251] = 1,
    ACTIONS(2648), 1,
      sym__code_block,
  [16255] = 1,
    ACTIONS(2650), 1,
      aux_sym_select_element_token1,
  [16259] = 1,
    ACTIONS(2652), 1,
      sym_object_name,
  [16263] = 1,
    ACTIONS(2654), 1,
      aux_sym_create_aggregate_token6,
  [16267] = 1,
    ACTIONS(2656), 1,
      aux_sym_drop_materialized_view_token2,
  [16271] = 1,
    ACTIONS(2658), 1,
      anon_sym_RPAREN,
  [16275] = 1,
    ACTIONS(2660), 1,
      sym_object_name,
  [16279] = 1,
    ACTIONS(2662), 1,
      sym_object_name,
  [16283] = 1,
    ACTIONS(2664), 1,
      aux_sym_materialized_view_options_token1,
  [16287] = 1,
    ACTIONS(2666), 1,
      aux_sym_delete_statement_token3,
  [16291] = 1,
    ACTIONS(2668), 1,
      anon_sym_LBRACE,
  [16295] = 1,
    ACTIONS(2670), 1,
      sym_object_name,
  [16299] = 1,
    ACTIONS(2672), 1,
      aux_sym_constant_token2,
  [16303] = 1,
    ACTIONS(2674), 1,
      aux_sym_create_materialized_view_token1,
  [16307] = 1,
    ACTIONS(2676), 1,
      anon_sym_LPAREN,
  [16311] = 1,
    ACTIONS(2678), 1,
      anon_sym_LPAREN,
  [16315] = 1,
    ACTIONS(2680), 1,
      anon_sym_RPAREN,
  [16319] = 1,
    ACTIONS(2682), 1,
      aux_sym_create_index_token3,
  [16323] = 1,
    ACTIONS(2684), 1,
      aux_sym_create_index_token3,
  [16327] = 1,
    ACTIONS(2686), 1,
      aux_sym_create_index_token3,
  [16331] = 1,
    ACTIONS(2688), 1,
      anon_sym_RPAREN,
  [16335] = 1,
    ACTIONS(2690), 1,
      sym__string_literal,
  [16339] = 1,
    ACTIONS(2692), 1,
      aux_sym_select_element_token1,
  [16343] = 1,
    ACTIONS(2694), 1,
      sym_object_name,
  [16347] = 1,
    ACTIONS(2696), 1,
      aux_sym_create_function_token2,
  [16351] = 1,
    ACTIONS(2690), 1,
      sym__boolean_literal,
  [16355] = 1,
    ACTIONS(2698), 1,
      sym__code_block,
  [16359] = 1,
    ACTIONS(2700), 1,
      aux_sym_select_element_token1,
  [16363] = 1,
    ACTIONS(2702), 1,
      aux_sym_drop_materialized_view_token2,
  [16367] = 1,
    ACTIONS(2704), 1,
      sym__code_block,
  [16371] = 1,
    ACTIONS(2706), 1,
      aux_sym_create_aggregate_token5,
  [16375] = 1,
    ACTIONS(2708), 1,
      aux_sym_create_aggregate_token6,
  [16379] = 1,
    ACTIONS(2710), 1,
      anon_sym_LPAREN,
  [16383] = 1,
    ACTIONS(2712), 1,
      aux_sym_create_aggregate_token3,
  [16387] = 1,
    ACTIONS(2714), 1,
      sym__code_block,
  [16391] = 1,
    ACTIONS(2716), 1,
      sym_object_name,
  [16395] = 1,
    ACTIONS(2718), 1,
      aux_sym_relation_contains_key_token2,
  [16399] = 1,
    ACTIONS(2720), 1,
      aux_sym_select_element_token1,
  [16403] = 1,
    ACTIONS(2722), 1,
      aux_sym_select_statement_token5,
  [16407] = 1,
    ACTIONS(2724), 1,
      aux_sym_using_timestamp_spec_token1,
  [16411] = 1,
    ACTIONS(2726), 1,
      anon_sym_RPAREN,
  [16415] = 1,
    ACTIONS(2728), 1,
      aux_sym_create_function_token1,
  [16419] = 1,
    ACTIONS(2730), 1,
      aux_sym_update_token2,
  [16423] = 1,
    ACTIONS(2732), 1,
      aux_sym_create_aggregate_token2,
  [16427] = 1,
    ACTIONS(2734), 1,
      anon_sym_RBRACK,
  [16431] = 1,
    ACTIONS(2736), 1,
      sym__code_block,
  [16435] = 1,
    ACTIONS(2738), 1,
      aux_sym_select_element_token1,
  [16439] = 1,
    ACTIONS(2740), 1,
      sym_object_name,
  [16443] = 1,
    ACTIONS(2742), 1,
      sym_object_name,
  [16447] = 1,
    ACTIONS(2744), 1,
      sym__code_block,
  [16451] = 1,
    ACTIONS(2746), 1,
      sym_object_name,
  [16455] = 1,
    ACTIONS(2748), 1,
      sym_object_name,
  [16459] = 1,
    ACTIONS(2750), 1,
      aux_sym_drop_materialized_view_token2,
  [16463] = 1,
    ACTIONS(2752), 1,
      aux_sym_delete_statement_token3,
  [16467] = 1,
    ACTIONS(2754), 1,
      sym_object_name,
  [16471] = 1,
    ACTIONS(2756), 1,
      sym_object_name,
  [16475] = 1,
    ACTIONS(2758), 1,
      anon_sym_LPAREN,
  [16479] = 1,
    ACTIONS(2760), 1,
      anon_sym_RPAREN,
  [16483] = 1,
    ACTIONS(2762), 1,
      anon_sym_RPAREN,
  [16487] = 1,
    ACTIONS(2764), 1,
      anon_sym_LBRACE,
  [16491] = 1,
    ACTIONS(2766), 1,
      sym_object_name,
  [16495] = 1,
    ACTIONS(2768), 1,
      sym_object_name,
  [16499] = 1,
    ACTIONS(2770), 1,
      sym_object_name,
  [16503] = 1,
    ACTIONS(2772), 1,
      aux_sym_begin_batch_token4,
  [16507] = 1,
    ACTIONS(2774), 1,
      sym__code_block,
  [16511] = 1,
    ACTIONS(2776), 1,
      aux_sym_select_element_token1,
  [16515] = 1,
    ACTIONS(2778), 1,
      sym_object_name,
  [16519] = 1,
    ACTIONS(2780), 1,
      aux_sym_create_aggregate_token6,
  [16523] = 1,
    ACTIONS(2782), 1,
      sym_object_name,
  [16527] = 1,
    ACTIONS(2784), 1,
      sym_object_name,
  [16531] = 1,
    ACTIONS(2786), 1,
      sym_object_name,
  [16535] = 1,
    ACTIONS(2788), 1,
      sym_object_name,
  [16539] = 1,
    ACTIONS(2790), 1,
      sym_object_name,
  [16543] = 1,
    ACTIONS(2792), 1,
      sym_object_name,
  [16547] = 1,
    ACTIONS(2794), 1,
      aux_sym_resource_token2,
  [16551] = 1,
    ACTIONS(2796), 1,
      sym__code_block,
  [16555] = 1,
    ACTIONS(2798), 1,
      sym_object_name,
  [16559] = 1,
    ACTIONS(2800), 1,
      anon_sym_RPAREN,
  [16563] = 1,
    ACTIONS(2802), 1,
      ts_builtin_sym_end,
  [16567] = 1,
    ACTIONS(2804), 1,
      aux_sym_begin_batch_token4,
  [16571] = 1,
    ACTIONS(2806), 1,
      sym_object_name,
  [16575] = 1,
    ACTIONS(2808), 1,
      sym_object_name,
  [16579] = 1,
    ACTIONS(2810), 1,
      aux_sym_materialized_view_options_token1,
  [16583] = 1,
    ACTIONS(2812), 1,
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
  [SMALL_STATE(63)] = 2219,
  [SMALL_STATE(64)] = 2246,
  [SMALL_STATE(65)] = 2273,
  [SMALL_STATE(66)] = 2304,
  [SMALL_STATE(67)] = 2331,
  [SMALL_STATE(68)] = 2362,
  [SMALL_STATE(69)] = 2393,
  [SMALL_STATE(70)] = 2424,
  [SMALL_STATE(71)] = 2454,
  [SMALL_STATE(72)] = 2494,
  [SMALL_STATE(73)] = 2534,
  [SMALL_STATE(74)] = 2560,
  [SMALL_STATE(75)] = 2600,
  [SMALL_STATE(76)] = 2630,
  [SMALL_STATE(77)] = 2655,
  [SMALL_STATE(78)] = 2694,
  [SMALL_STATE(79)] = 2719,
  [SMALL_STATE(80)] = 2744,
  [SMALL_STATE(81)] = 2773,
  [SMALL_STATE(82)] = 2798,
  [SMALL_STATE(83)] = 2823,
  [SMALL_STATE(84)] = 2852,
  [SMALL_STATE(85)] = 2877,
  [SMALL_STATE(86)] = 2902,
  [SMALL_STATE(87)] = 2927,
  [SMALL_STATE(88)] = 2952,
  [SMALL_STATE(89)] = 2977,
  [SMALL_STATE(90)] = 3001,
  [SMALL_STATE(91)] = 3025,
  [SMALL_STATE(92)] = 3049,
  [SMALL_STATE(93)] = 3083,
  [SMALL_STATE(94)] = 3117,
  [SMALL_STATE(95)] = 3141,
  [SMALL_STATE(96)] = 3175,
  [SMALL_STATE(97)] = 3203,
  [SMALL_STATE(98)] = 3228,
  [SMALL_STATE(99)] = 3255,
  [SMALL_STATE(100)] = 3278,
  [SMALL_STATE(101)] = 3303,
  [SMALL_STATE(102)] = 3328,
  [SMALL_STATE(103)] = 3353,
  [SMALL_STATE(104)] = 3381,
  [SMALL_STATE(105)] = 3407,
  [SMALL_STATE(106)] = 3429,
  [SMALL_STATE(107)] = 3451,
  [SMALL_STATE(108)] = 3473,
  [SMALL_STATE(109)] = 3495,
  [SMALL_STATE(110)] = 3517,
  [SMALL_STATE(111)] = 3539,
  [SMALL_STATE(112)] = 3567,
  [SMALL_STATE(113)] = 3593,
  [SMALL_STATE(114)] = 3621,
  [SMALL_STATE(115)] = 3647,
  [SMALL_STATE(116)] = 3669,
  [SMALL_STATE(117)] = 3691,
  [SMALL_STATE(118)] = 3719,
  [SMALL_STATE(119)] = 3747,
  [SMALL_STATE(120)] = 3773,
  [SMALL_STATE(121)] = 3801,
  [SMALL_STATE(122)] = 3827,
  [SMALL_STATE(123)] = 3849,
  [SMALL_STATE(124)] = 3873,
  [SMALL_STATE(125)] = 3901,
  [SMALL_STATE(126)] = 3927,
  [SMALL_STATE(127)] = 3949,
  [SMALL_STATE(128)] = 3974,
  [SMALL_STATE(129)] = 3995,
  [SMALL_STATE(130)] = 4020,
  [SMALL_STATE(131)] = 4041,
  [SMALL_STATE(132)] = 4066,
  [SMALL_STATE(133)] = 4091,
  [SMALL_STATE(134)] = 4116,
  [SMALL_STATE(135)] = 4141,
  [SMALL_STATE(136)] = 4164,
  [SMALL_STATE(137)] = 4189,
  [SMALL_STATE(138)] = 4212,
  [SMALL_STATE(139)] = 4237,
  [SMALL_STATE(140)] = 4262,
  [SMALL_STATE(141)] = 4287,
  [SMALL_STATE(142)] = 4312,
  [SMALL_STATE(143)] = 4333,
  [SMALL_STATE(144)] = 4358,
  [SMALL_STATE(145)] = 4383,
  [SMALL_STATE(146)] = 4408,
  [SMALL_STATE(147)] = 4433,
  [SMALL_STATE(148)] = 4458,
  [SMALL_STATE(149)] = 4479,
  [SMALL_STATE(150)] = 4504,
  [SMALL_STATE(151)] = 4525,
  [SMALL_STATE(152)] = 4550,
  [SMALL_STATE(153)] = 4575,
  [SMALL_STATE(154)] = 4600,
  [SMALL_STATE(155)] = 4625,
  [SMALL_STATE(156)] = 4650,
  [SMALL_STATE(157)] = 4671,
  [SMALL_STATE(158)] = 4696,
  [SMALL_STATE(159)] = 4721,
  [SMALL_STATE(160)] = 4746,
  [SMALL_STATE(161)] = 4771,
  [SMALL_STATE(162)] = 4792,
  [SMALL_STATE(163)] = 4817,
  [SMALL_STATE(164)] = 4838,
  [SMALL_STATE(165)] = 4863,
  [SMALL_STATE(166)] = 4884,
  [SMALL_STATE(167)] = 4909,
  [SMALL_STATE(168)] = 4930,
  [SMALL_STATE(169)] = 4951,
  [SMALL_STATE(170)] = 4972,
  [SMALL_STATE(171)] = 4997,
  [SMALL_STATE(172)] = 5032,
  [SMALL_STATE(173)] = 5053,
  [SMALL_STATE(174)] = 5078,
  [SMALL_STATE(175)] = 5103,
  [SMALL_STATE(176)] = 5128,
  [SMALL_STATE(177)] = 5153,
  [SMALL_STATE(178)] = 5178,
  [SMALL_STATE(179)] = 5203,
  [SMALL_STATE(180)] = 5228,
  [SMALL_STATE(181)] = 5253,
  [SMALL_STATE(182)] = 5274,
  [SMALL_STATE(183)] = 5295,
  [SMALL_STATE(184)] = 5316,
  [SMALL_STATE(185)] = 5337,
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
  [SMALL_STATE(198)] = 5658,
  [SMALL_STATE(199)] = 5683,
  [SMALL_STATE(200)] = 5708,
  [SMALL_STATE(201)] = 5733,
  [SMALL_STATE(202)] = 5758,
  [SMALL_STATE(203)] = 5783,
  [SMALL_STATE(204)] = 5808,
  [SMALL_STATE(205)] = 5829,
  [SMALL_STATE(206)] = 5851,
  [SMALL_STATE(207)] = 5883,
  [SMALL_STATE(208)] = 5905,
  [SMALL_STATE(209)] = 5927,
  [SMALL_STATE(210)] = 5947,
  [SMALL_STATE(211)] = 5967,
  [SMALL_STATE(212)] = 5987,
  [SMALL_STATE(213)] = 6009,
  [SMALL_STATE(214)] = 6029,
  [SMALL_STATE(215)] = 6049,
  [SMALL_STATE(216)] = 6069,
  [SMALL_STATE(217)] = 6091,
  [SMALL_STATE(218)] = 6113,
  [SMALL_STATE(219)] = 6135,
  [SMALL_STATE(220)] = 6157,
  [SMALL_STATE(221)] = 6179,
  [SMALL_STATE(222)] = 6201,
  [SMALL_STATE(223)] = 6223,
  [SMALL_STATE(224)] = 6245,
  [SMALL_STATE(225)] = 6265,
  [SMALL_STATE(226)] = 6285,
  [SMALL_STATE(227)] = 6307,
  [SMALL_STATE(228)] = 6327,
  [SMALL_STATE(229)] = 6349,
  [SMALL_STATE(230)] = 6371,
  [SMALL_STATE(231)] = 6393,
  [SMALL_STATE(232)] = 6415,
  [SMALL_STATE(233)] = 6437,
  [SMALL_STATE(234)] = 6459,
  [SMALL_STATE(235)] = 6479,
  [SMALL_STATE(236)] = 6501,
  [SMALL_STATE(237)] = 6523,
  [SMALL_STATE(238)] = 6545,
  [SMALL_STATE(239)] = 6565,
  [SMALL_STATE(240)] = 6587,
  [SMALL_STATE(241)] = 6609,
  [SMALL_STATE(242)] = 6631,
  [SMALL_STATE(243)] = 6653,
  [SMALL_STATE(244)] = 6675,
  [SMALL_STATE(245)] = 6697,
  [SMALL_STATE(246)] = 6719,
  [SMALL_STATE(247)] = 6738,
  [SMALL_STATE(248)] = 6757,
  [SMALL_STATE(249)] = 6776,
  [SMALL_STATE(250)] = 6795,
  [SMALL_STATE(251)] = 6814,
  [SMALL_STATE(252)] = 6833,
  [SMALL_STATE(253)] = 6852,
  [SMALL_STATE(254)] = 6871,
  [SMALL_STATE(255)] = 6890,
  [SMALL_STATE(256)] = 6909,
  [SMALL_STATE(257)] = 6928,
  [SMALL_STATE(258)] = 6947,
  [SMALL_STATE(259)] = 6966,
  [SMALL_STATE(260)] = 6985,
  [SMALL_STATE(261)] = 7004,
  [SMALL_STATE(262)] = 7023,
  [SMALL_STATE(263)] = 7042,
  [SMALL_STATE(264)] = 7061,
  [SMALL_STATE(265)] = 7080,
  [SMALL_STATE(266)] = 7099,
  [SMALL_STATE(267)] = 7118,
  [SMALL_STATE(268)] = 7137,
  [SMALL_STATE(269)] = 7156,
  [SMALL_STATE(270)] = 7175,
  [SMALL_STATE(271)] = 7194,
  [SMALL_STATE(272)] = 7213,
  [SMALL_STATE(273)] = 7232,
  [SMALL_STATE(274)] = 7251,
  [SMALL_STATE(275)] = 7270,
  [SMALL_STATE(276)] = 7289,
  [SMALL_STATE(277)] = 7308,
  [SMALL_STATE(278)] = 7327,
  [SMALL_STATE(279)] = 7346,
  [SMALL_STATE(280)] = 7367,
  [SMALL_STATE(281)] = 7386,
  [SMALL_STATE(282)] = 7405,
  [SMALL_STATE(283)] = 7424,
  [SMALL_STATE(284)] = 7443,
  [SMALL_STATE(285)] = 7462,
  [SMALL_STATE(286)] = 7481,
  [SMALL_STATE(287)] = 7500,
  [SMALL_STATE(288)] = 7519,
  [SMALL_STATE(289)] = 7538,
  [SMALL_STATE(290)] = 7557,
  [SMALL_STATE(291)] = 7576,
  [SMALL_STATE(292)] = 7595,
  [SMALL_STATE(293)] = 7614,
  [SMALL_STATE(294)] = 7633,
  [SMALL_STATE(295)] = 7652,
  [SMALL_STATE(296)] = 7671,
  [SMALL_STATE(297)] = 7690,
  [SMALL_STATE(298)] = 7709,
  [SMALL_STATE(299)] = 7728,
  [SMALL_STATE(300)] = 7747,
  [SMALL_STATE(301)] = 7766,
  [SMALL_STATE(302)] = 7785,
  [SMALL_STATE(303)] = 7804,
  [SMALL_STATE(304)] = 7823,
  [SMALL_STATE(305)] = 7842,
  [SMALL_STATE(306)] = 7861,
  [SMALL_STATE(307)] = 7880,
  [SMALL_STATE(308)] = 7899,
  [SMALL_STATE(309)] = 7918,
  [SMALL_STATE(310)] = 7937,
  [SMALL_STATE(311)] = 7956,
  [SMALL_STATE(312)] = 7975,
  [SMALL_STATE(313)] = 7994,
  [SMALL_STATE(314)] = 8013,
  [SMALL_STATE(315)] = 8032,
  [SMALL_STATE(316)] = 8051,
  [SMALL_STATE(317)] = 8070,
  [SMALL_STATE(318)] = 8089,
  [SMALL_STATE(319)] = 8108,
  [SMALL_STATE(320)] = 8127,
  [SMALL_STATE(321)] = 8146,
  [SMALL_STATE(322)] = 8165,
  [SMALL_STATE(323)] = 8184,
  [SMALL_STATE(324)] = 8203,
  [SMALL_STATE(325)] = 8222,
  [SMALL_STATE(326)] = 8241,
  [SMALL_STATE(327)] = 8260,
  [SMALL_STATE(328)] = 8279,
  [SMALL_STATE(329)] = 8298,
  [SMALL_STATE(330)] = 8317,
  [SMALL_STATE(331)] = 8336,
  [SMALL_STATE(332)] = 8355,
  [SMALL_STATE(333)] = 8374,
  [SMALL_STATE(334)] = 8393,
  [SMALL_STATE(335)] = 8412,
  [SMALL_STATE(336)] = 8431,
  [SMALL_STATE(337)] = 8450,
  [SMALL_STATE(338)] = 8469,
  [SMALL_STATE(339)] = 8488,
  [SMALL_STATE(340)] = 8507,
  [SMALL_STATE(341)] = 8526,
  [SMALL_STATE(342)] = 8545,
  [SMALL_STATE(343)] = 8564,
  [SMALL_STATE(344)] = 8583,
  [SMALL_STATE(345)] = 8602,
  [SMALL_STATE(346)] = 8621,
  [SMALL_STATE(347)] = 8640,
  [SMALL_STATE(348)] = 8659,
  [SMALL_STATE(349)] = 8678,
  [SMALL_STATE(350)] = 8697,
  [SMALL_STATE(351)] = 8716,
  [SMALL_STATE(352)] = 8735,
  [SMALL_STATE(353)] = 8754,
  [SMALL_STATE(354)] = 8773,
  [SMALL_STATE(355)] = 8792,
  [SMALL_STATE(356)] = 8811,
  [SMALL_STATE(357)] = 8830,
  [SMALL_STATE(358)] = 8849,
  [SMALL_STATE(359)] = 8868,
  [SMALL_STATE(360)] = 8887,
  [SMALL_STATE(361)] = 8906,
  [SMALL_STATE(362)] = 8925,
  [SMALL_STATE(363)] = 8944,
  [SMALL_STATE(364)] = 8963,
  [SMALL_STATE(365)] = 8982,
  [SMALL_STATE(366)] = 9001,
  [SMALL_STATE(367)] = 9020,
  [SMALL_STATE(368)] = 9039,
  [SMALL_STATE(369)] = 9058,
  [SMALL_STATE(370)] = 9077,
  [SMALL_STATE(371)] = 9096,
  [SMALL_STATE(372)] = 9115,
  [SMALL_STATE(373)] = 9134,
  [SMALL_STATE(374)] = 9153,
  [SMALL_STATE(375)] = 9172,
  [SMALL_STATE(376)] = 9191,
  [SMALL_STATE(377)] = 9210,
  [SMALL_STATE(378)] = 9229,
  [SMALL_STATE(379)] = 9248,
  [SMALL_STATE(380)] = 9267,
  [SMALL_STATE(381)] = 9286,
  [SMALL_STATE(382)] = 9305,
  [SMALL_STATE(383)] = 9324,
  [SMALL_STATE(384)] = 9343,
  [SMALL_STATE(385)] = 9362,
  [SMALL_STATE(386)] = 9381,
  [SMALL_STATE(387)] = 9400,
  [SMALL_STATE(388)] = 9419,
  [SMALL_STATE(389)] = 9438,
  [SMALL_STATE(390)] = 9457,
  [SMALL_STATE(391)] = 9476,
  [SMALL_STATE(392)] = 9495,
  [SMALL_STATE(393)] = 9514,
  [SMALL_STATE(394)] = 9533,
  [SMALL_STATE(395)] = 9552,
  [SMALL_STATE(396)] = 9571,
  [SMALL_STATE(397)] = 9590,
  [SMALL_STATE(398)] = 9609,
  [SMALL_STATE(399)] = 9628,
  [SMALL_STATE(400)] = 9647,
  [SMALL_STATE(401)] = 9666,
  [SMALL_STATE(402)] = 9685,
  [SMALL_STATE(403)] = 9704,
  [SMALL_STATE(404)] = 9723,
  [SMALL_STATE(405)] = 9742,
  [SMALL_STATE(406)] = 9761,
  [SMALL_STATE(407)] = 9780,
  [SMALL_STATE(408)] = 9810,
  [SMALL_STATE(409)] = 9828,
  [SMALL_STATE(410)] = 9853,
  [SMALL_STATE(411)] = 9878,
  [SMALL_STATE(412)] = 9903,
  [SMALL_STATE(413)] = 9928,
  [SMALL_STATE(414)] = 9953,
  [SMALL_STATE(415)] = 9978,
  [SMALL_STATE(416)] = 10003,
  [SMALL_STATE(417)] = 10028,
  [SMALL_STATE(418)] = 10053,
  [SMALL_STATE(419)] = 10079,
  [SMALL_STATE(420)] = 10107,
  [SMALL_STATE(421)] = 10130,
  [SMALL_STATE(422)] = 10150,
  [SMALL_STATE(423)] = 10170,
  [SMALL_STATE(424)] = 10190,
  [SMALL_STATE(425)] = 10216,
  [SMALL_STATE(426)] = 10236,
  [SMALL_STATE(427)] = 10270,
  [SMALL_STATE(428)] = 10292,
  [SMALL_STATE(429)] = 10315,
  [SMALL_STATE(430)] = 10338,
  [SMALL_STATE(431)] = 10355,
  [SMALL_STATE(432)] = 10374,
  [SMALL_STATE(433)] = 10391,
  [SMALL_STATE(434)] = 10422,
  [SMALL_STATE(435)] = 10441,
  [SMALL_STATE(436)] = 10457,
  [SMALL_STATE(437)] = 10473,
  [SMALL_STATE(438)] = 10489,
  [SMALL_STATE(439)] = 10505,
  [SMALL_STATE(440)] = 10521,
  [SMALL_STATE(441)] = 10537,
  [SMALL_STATE(442)] = 10553,
  [SMALL_STATE(443)] = 10569,
  [SMALL_STATE(444)] = 10585,
  [SMALL_STATE(445)] = 10605,
  [SMALL_STATE(446)] = 10621,
  [SMALL_STATE(447)] = 10637,
  [SMALL_STATE(448)] = 10653,
  [SMALL_STATE(449)] = 10674,
  [SMALL_STATE(450)] = 10695,
  [SMALL_STATE(451)] = 10716,
  [SMALL_STATE(452)] = 10737,
  [SMALL_STATE(453)] = 10758,
  [SMALL_STATE(454)] = 10772,
  [SMALL_STATE(455)] = 10794,
  [SMALL_STATE(456)] = 10814,
  [SMALL_STATE(457)] = 10836,
  [SMALL_STATE(458)] = 10858,
  [SMALL_STATE(459)] = 10876,
  [SMALL_STATE(460)] = 10890,
  [SMALL_STATE(461)] = 10910,
  [SMALL_STATE(462)] = 10932,
  [SMALL_STATE(463)] = 10947,
  [SMALL_STATE(464)] = 10966,
  [SMALL_STATE(465)] = 10983,
  [SMALL_STATE(466)] = 10994,
  [SMALL_STATE(467)] = 11013,
  [SMALL_STATE(468)] = 11032,
  [SMALL_STATE(469)] = 11046,
  [SMALL_STATE(470)] = 11062,
  [SMALL_STATE(471)] = 11070,
  [SMALL_STATE(472)] = 11084,
  [SMALL_STATE(473)] = 11092,
  [SMALL_STATE(474)] = 11104,
  [SMALL_STATE(475)] = 11112,
  [SMALL_STATE(476)] = 11128,
  [SMALL_STATE(477)] = 11136,
  [SMALL_STATE(478)] = 11152,
  [SMALL_STATE(479)] = 11168,
  [SMALL_STATE(480)] = 11176,
  [SMALL_STATE(481)] = 11192,
  [SMALL_STATE(482)] = 11208,
  [SMALL_STATE(483)] = 11216,
  [SMALL_STATE(484)] = 11232,
  [SMALL_STATE(485)] = 11244,
  [SMALL_STATE(486)] = 11260,
  [SMALL_STATE(487)] = 11274,
  [SMALL_STATE(488)] = 11286,
  [SMALL_STATE(489)] = 11294,
  [SMALL_STATE(490)] = 11306,
  [SMALL_STATE(491)] = 11320,
  [SMALL_STATE(492)] = 11336,
  [SMALL_STATE(493)] = 11352,
  [SMALL_STATE(494)] = 11365,
  [SMALL_STATE(495)] = 11378,
  [SMALL_STATE(496)] = 11391,
  [SMALL_STATE(497)] = 11398,
  [SMALL_STATE(498)] = 11411,
  [SMALL_STATE(499)] = 11424,
  [SMALL_STATE(500)] = 11437,
  [SMALL_STATE(501)] = 11450,
  [SMALL_STATE(502)] = 11463,
  [SMALL_STATE(503)] = 11474,
  [SMALL_STATE(504)] = 11487,
  [SMALL_STATE(505)] = 11498,
  [SMALL_STATE(506)] = 11511,
  [SMALL_STATE(507)] = 11524,
  [SMALL_STATE(508)] = 11537,
  [SMALL_STATE(509)] = 11550,
  [SMALL_STATE(510)] = 11563,
  [SMALL_STATE(511)] = 11576,
  [SMALL_STATE(512)] = 11587,
  [SMALL_STATE(513)] = 11600,
  [SMALL_STATE(514)] = 11613,
  [SMALL_STATE(515)] = 11626,
  [SMALL_STATE(516)] = 11639,
  [SMALL_STATE(517)] = 11652,
  [SMALL_STATE(518)] = 11665,
  [SMALL_STATE(519)] = 11678,
  [SMALL_STATE(520)] = 11691,
  [SMALL_STATE(521)] = 11702,
  [SMALL_STATE(522)] = 11709,
  [SMALL_STATE(523)] = 11722,
  [SMALL_STATE(524)] = 11735,
  [SMALL_STATE(525)] = 11744,
  [SMALL_STATE(526)] = 11757,
  [SMALL_STATE(527)] = 11770,
  [SMALL_STATE(528)] = 11783,
  [SMALL_STATE(529)] = 11796,
  [SMALL_STATE(530)] = 11809,
  [SMALL_STATE(531)] = 11822,
  [SMALL_STATE(532)] = 11835,
  [SMALL_STATE(533)] = 11848,
  [SMALL_STATE(534)] = 11861,
  [SMALL_STATE(535)] = 11874,
  [SMALL_STATE(536)] = 11887,
  [SMALL_STATE(537)] = 11900,
  [SMALL_STATE(538)] = 11913,
  [SMALL_STATE(539)] = 11926,
  [SMALL_STATE(540)] = 11939,
  [SMALL_STATE(541)] = 11952,
  [SMALL_STATE(542)] = 11965,
  [SMALL_STATE(543)] = 11978,
  [SMALL_STATE(544)] = 11991,
  [SMALL_STATE(545)] = 12004,
  [SMALL_STATE(546)] = 12017,
  [SMALL_STATE(547)] = 12030,
  [SMALL_STATE(548)] = 12043,
  [SMALL_STATE(549)] = 12053,
  [SMALL_STATE(550)] = 12063,
  [SMALL_STATE(551)] = 12073,
  [SMALL_STATE(552)] = 12083,
  [SMALL_STATE(553)] = 12093,
  [SMALL_STATE(554)] = 12103,
  [SMALL_STATE(555)] = 12111,
  [SMALL_STATE(556)] = 12119,
  [SMALL_STATE(557)] = 12129,
  [SMALL_STATE(558)] = 12139,
  [SMALL_STATE(559)] = 12147,
  [SMALL_STATE(560)] = 12157,
  [SMALL_STATE(561)] = 12167,
  [SMALL_STATE(562)] = 12177,
  [SMALL_STATE(563)] = 12187,
  [SMALL_STATE(564)] = 12197,
  [SMALL_STATE(565)] = 12207,
  [SMALL_STATE(566)] = 12217,
  [SMALL_STATE(567)] = 12227,
  [SMALL_STATE(568)] = 12237,
  [SMALL_STATE(569)] = 12247,
  [SMALL_STATE(570)] = 12257,
  [SMALL_STATE(571)] = 12267,
  [SMALL_STATE(572)] = 12277,
  [SMALL_STATE(573)] = 12287,
  [SMALL_STATE(574)] = 12297,
  [SMALL_STATE(575)] = 12307,
  [SMALL_STATE(576)] = 12317,
  [SMALL_STATE(577)] = 12327,
  [SMALL_STATE(578)] = 12337,
  [SMALL_STATE(579)] = 12347,
  [SMALL_STATE(580)] = 12357,
  [SMALL_STATE(581)] = 12367,
  [SMALL_STATE(582)] = 12377,
  [SMALL_STATE(583)] = 12387,
  [SMALL_STATE(584)] = 12397,
  [SMALL_STATE(585)] = 12407,
  [SMALL_STATE(586)] = 12417,
  [SMALL_STATE(587)] = 12427,
  [SMALL_STATE(588)] = 12437,
  [SMALL_STATE(589)] = 12447,
  [SMALL_STATE(590)] = 12457,
  [SMALL_STATE(591)] = 12467,
  [SMALL_STATE(592)] = 12477,
  [SMALL_STATE(593)] = 12487,
  [SMALL_STATE(594)] = 12497,
  [SMALL_STATE(595)] = 12507,
  [SMALL_STATE(596)] = 12517,
  [SMALL_STATE(597)] = 12527,
  [SMALL_STATE(598)] = 12537,
  [SMALL_STATE(599)] = 12547,
  [SMALL_STATE(600)] = 12557,
  [SMALL_STATE(601)] = 12567,
  [SMALL_STATE(602)] = 12577,
  [SMALL_STATE(603)] = 12587,
  [SMALL_STATE(604)] = 12597,
  [SMALL_STATE(605)] = 12607,
  [SMALL_STATE(606)] = 12617,
  [SMALL_STATE(607)] = 12627,
  [SMALL_STATE(608)] = 12637,
  [SMALL_STATE(609)] = 12647,
  [SMALL_STATE(610)] = 12657,
  [SMALL_STATE(611)] = 12667,
  [SMALL_STATE(612)] = 12677,
  [SMALL_STATE(613)] = 12687,
  [SMALL_STATE(614)] = 12697,
  [SMALL_STATE(615)] = 12707,
  [SMALL_STATE(616)] = 12717,
  [SMALL_STATE(617)] = 12727,
  [SMALL_STATE(618)] = 12737,
  [SMALL_STATE(619)] = 12747,
  [SMALL_STATE(620)] = 12757,
  [SMALL_STATE(621)] = 12767,
  [SMALL_STATE(622)] = 12777,
  [SMALL_STATE(623)] = 12787,
  [SMALL_STATE(624)] = 12797,
  [SMALL_STATE(625)] = 12807,
  [SMALL_STATE(626)] = 12817,
  [SMALL_STATE(627)] = 12827,
  [SMALL_STATE(628)] = 12837,
  [SMALL_STATE(629)] = 12847,
  [SMALL_STATE(630)] = 12857,
  [SMALL_STATE(631)] = 12867,
  [SMALL_STATE(632)] = 12877,
  [SMALL_STATE(633)] = 12887,
  [SMALL_STATE(634)] = 12897,
  [SMALL_STATE(635)] = 12907,
  [SMALL_STATE(636)] = 12917,
  [SMALL_STATE(637)] = 12923,
  [SMALL_STATE(638)] = 12931,
  [SMALL_STATE(639)] = 12941,
  [SMALL_STATE(640)] = 12951,
  [SMALL_STATE(641)] = 12961,
  [SMALL_STATE(642)] = 12971,
  [SMALL_STATE(643)] = 12981,
  [SMALL_STATE(644)] = 12991,
  [SMALL_STATE(645)] = 13001,
  [SMALL_STATE(646)] = 13007,
  [SMALL_STATE(647)] = 13017,
  [SMALL_STATE(648)] = 13027,
  [SMALL_STATE(649)] = 13037,
  [SMALL_STATE(650)] = 13047,
  [SMALL_STATE(651)] = 13057,
  [SMALL_STATE(652)] = 13067,
  [SMALL_STATE(653)] = 13077,
  [SMALL_STATE(654)] = 13087,
  [SMALL_STATE(655)] = 13097,
  [SMALL_STATE(656)] = 13107,
  [SMALL_STATE(657)] = 13117,
  [SMALL_STATE(658)] = 13127,
  [SMALL_STATE(659)] = 13137,
  [SMALL_STATE(660)] = 13147,
  [SMALL_STATE(661)] = 13157,
  [SMALL_STATE(662)] = 13167,
  [SMALL_STATE(663)] = 13177,
  [SMALL_STATE(664)] = 13187,
  [SMALL_STATE(665)] = 13197,
  [SMALL_STATE(666)] = 13207,
  [SMALL_STATE(667)] = 13217,
  [SMALL_STATE(668)] = 13227,
  [SMALL_STATE(669)] = 13237,
  [SMALL_STATE(670)] = 13247,
  [SMALL_STATE(671)] = 13257,
  [SMALL_STATE(672)] = 13267,
  [SMALL_STATE(673)] = 13277,
  [SMALL_STATE(674)] = 13287,
  [SMALL_STATE(675)] = 13297,
  [SMALL_STATE(676)] = 13307,
  [SMALL_STATE(677)] = 13317,
  [SMALL_STATE(678)] = 13327,
  [SMALL_STATE(679)] = 13337,
  [SMALL_STATE(680)] = 13347,
  [SMALL_STATE(681)] = 13357,
  [SMALL_STATE(682)] = 13367,
  [SMALL_STATE(683)] = 13377,
  [SMALL_STATE(684)] = 13387,
  [SMALL_STATE(685)] = 13395,
  [SMALL_STATE(686)] = 13405,
  [SMALL_STATE(687)] = 13415,
  [SMALL_STATE(688)] = 13425,
  [SMALL_STATE(689)] = 13435,
  [SMALL_STATE(690)] = 13445,
  [SMALL_STATE(691)] = 13455,
  [SMALL_STATE(692)] = 13465,
  [SMALL_STATE(693)] = 13475,
  [SMALL_STATE(694)] = 13485,
  [SMALL_STATE(695)] = 13495,
  [SMALL_STATE(696)] = 13500,
  [SMALL_STATE(697)] = 13507,
  [SMALL_STATE(698)] = 13512,
  [SMALL_STATE(699)] = 13519,
  [SMALL_STATE(700)] = 13526,
  [SMALL_STATE(701)] = 13533,
  [SMALL_STATE(702)] = 13540,
  [SMALL_STATE(703)] = 13547,
  [SMALL_STATE(704)] = 13554,
  [SMALL_STATE(705)] = 13561,
  [SMALL_STATE(706)] = 13566,
  [SMALL_STATE(707)] = 13573,
  [SMALL_STATE(708)] = 13580,
  [SMALL_STATE(709)] = 13587,
  [SMALL_STATE(710)] = 13594,
  [SMALL_STATE(711)] = 13601,
  [SMALL_STATE(712)] = 13608,
  [SMALL_STATE(713)] = 13615,
  [SMALL_STATE(714)] = 13620,
  [SMALL_STATE(715)] = 13627,
  [SMALL_STATE(716)] = 13634,
  [SMALL_STATE(717)] = 13641,
  [SMALL_STATE(718)] = 13648,
  [SMALL_STATE(719)] = 13653,
  [SMALL_STATE(720)] = 13658,
  [SMALL_STATE(721)] = 13665,
  [SMALL_STATE(722)] = 13672,
  [SMALL_STATE(723)] = 13677,
  [SMALL_STATE(724)] = 13684,
  [SMALL_STATE(725)] = 13689,
  [SMALL_STATE(726)] = 13696,
  [SMALL_STATE(727)] = 13701,
  [SMALL_STATE(728)] = 13708,
  [SMALL_STATE(729)] = 13715,
  [SMALL_STATE(730)] = 13722,
  [SMALL_STATE(731)] = 13729,
  [SMALL_STATE(732)] = 13736,
  [SMALL_STATE(733)] = 13743,
  [SMALL_STATE(734)] = 13748,
  [SMALL_STATE(735)] = 13755,
  [SMALL_STATE(736)] = 13760,
  [SMALL_STATE(737)] = 13767,
  [SMALL_STATE(738)] = 13774,
  [SMALL_STATE(739)] = 13781,
  [SMALL_STATE(740)] = 13788,
  [SMALL_STATE(741)] = 13793,
  [SMALL_STATE(742)] = 13800,
  [SMALL_STATE(743)] = 13805,
  [SMALL_STATE(744)] = 13812,
  [SMALL_STATE(745)] = 13819,
  [SMALL_STATE(746)] = 13826,
  [SMALL_STATE(747)] = 13833,
  [SMALL_STATE(748)] = 13840,
  [SMALL_STATE(749)] = 13847,
  [SMALL_STATE(750)] = 13852,
  [SMALL_STATE(751)] = 13859,
  [SMALL_STATE(752)] = 13866,
  [SMALL_STATE(753)] = 13873,
  [SMALL_STATE(754)] = 13880,
  [SMALL_STATE(755)] = 13887,
  [SMALL_STATE(756)] = 13894,
  [SMALL_STATE(757)] = 13901,
  [SMALL_STATE(758)] = 13908,
  [SMALL_STATE(759)] = 13913,
  [SMALL_STATE(760)] = 13920,
  [SMALL_STATE(761)] = 13927,
  [SMALL_STATE(762)] = 13934,
  [SMALL_STATE(763)] = 13941,
  [SMALL_STATE(764)] = 13946,
  [SMALL_STATE(765)] = 13953,
  [SMALL_STATE(766)] = 13960,
  [SMALL_STATE(767)] = 13967,
  [SMALL_STATE(768)] = 13974,
  [SMALL_STATE(769)] = 13979,
  [SMALL_STATE(770)] = 13986,
  [SMALL_STATE(771)] = 13991,
  [SMALL_STATE(772)] = 13998,
  [SMALL_STATE(773)] = 14005,
  [SMALL_STATE(774)] = 14012,
  [SMALL_STATE(775)] = 14017,
  [SMALL_STATE(776)] = 14024,
  [SMALL_STATE(777)] = 14029,
  [SMALL_STATE(778)] = 14034,
  [SMALL_STATE(779)] = 14039,
  [SMALL_STATE(780)] = 14046,
  [SMALL_STATE(781)] = 14053,
  [SMALL_STATE(782)] = 14060,
  [SMALL_STATE(783)] = 14065,
  [SMALL_STATE(784)] = 14072,
  [SMALL_STATE(785)] = 14079,
  [SMALL_STATE(786)] = 14084,
  [SMALL_STATE(787)] = 14089,
  [SMALL_STATE(788)] = 14094,
  [SMALL_STATE(789)] = 14101,
  [SMALL_STATE(790)] = 14108,
  [SMALL_STATE(791)] = 14115,
  [SMALL_STATE(792)] = 14122,
  [SMALL_STATE(793)] = 14129,
  [SMALL_STATE(794)] = 14136,
  [SMALL_STATE(795)] = 14143,
  [SMALL_STATE(796)] = 14150,
  [SMALL_STATE(797)] = 14157,
  [SMALL_STATE(798)] = 14164,
  [SMALL_STATE(799)] = 14171,
  [SMALL_STATE(800)] = 14178,
  [SMALL_STATE(801)] = 14185,
  [SMALL_STATE(802)] = 14192,
  [SMALL_STATE(803)] = 14199,
  [SMALL_STATE(804)] = 14206,
  [SMALL_STATE(805)] = 14213,
  [SMALL_STATE(806)] = 14220,
  [SMALL_STATE(807)] = 14227,
  [SMALL_STATE(808)] = 14232,
  [SMALL_STATE(809)] = 14239,
  [SMALL_STATE(810)] = 14246,
  [SMALL_STATE(811)] = 14253,
  [SMALL_STATE(812)] = 14258,
  [SMALL_STATE(813)] = 14265,
  [SMALL_STATE(814)] = 14272,
  [SMALL_STATE(815)] = 14279,
  [SMALL_STATE(816)] = 14286,
  [SMALL_STATE(817)] = 14291,
  [SMALL_STATE(818)] = 14298,
  [SMALL_STATE(819)] = 14303,
  [SMALL_STATE(820)] = 14308,
  [SMALL_STATE(821)] = 14315,
  [SMALL_STATE(822)] = 14320,
  [SMALL_STATE(823)] = 14327,
  [SMALL_STATE(824)] = 14332,
  [SMALL_STATE(825)] = 14339,
  [SMALL_STATE(826)] = 14346,
  [SMALL_STATE(827)] = 14353,
  [SMALL_STATE(828)] = 14360,
  [SMALL_STATE(829)] = 14367,
  [SMALL_STATE(830)] = 14374,
  [SMALL_STATE(831)] = 14381,
  [SMALL_STATE(832)] = 14386,
  [SMALL_STATE(833)] = 14393,
  [SMALL_STATE(834)] = 14400,
  [SMALL_STATE(835)] = 14407,
  [SMALL_STATE(836)] = 14414,
  [SMALL_STATE(837)] = 14421,
  [SMALL_STATE(838)] = 14428,
  [SMALL_STATE(839)] = 14435,
  [SMALL_STATE(840)] = 14442,
  [SMALL_STATE(841)] = 14447,
  [SMALL_STATE(842)] = 14454,
  [SMALL_STATE(843)] = 14461,
  [SMALL_STATE(844)] = 14468,
  [SMALL_STATE(845)] = 14475,
  [SMALL_STATE(846)] = 14482,
  [SMALL_STATE(847)] = 14489,
  [SMALL_STATE(848)] = 14496,
  [SMALL_STATE(849)] = 14503,
  [SMALL_STATE(850)] = 14510,
  [SMALL_STATE(851)] = 14515,
  [SMALL_STATE(852)] = 14519,
  [SMALL_STATE(853)] = 14523,
  [SMALL_STATE(854)] = 14527,
  [SMALL_STATE(855)] = 14531,
  [SMALL_STATE(856)] = 14535,
  [SMALL_STATE(857)] = 14539,
  [SMALL_STATE(858)] = 14543,
  [SMALL_STATE(859)] = 14547,
  [SMALL_STATE(860)] = 14551,
  [SMALL_STATE(861)] = 14555,
  [SMALL_STATE(862)] = 14559,
  [SMALL_STATE(863)] = 14563,
  [SMALL_STATE(864)] = 14567,
  [SMALL_STATE(865)] = 14571,
  [SMALL_STATE(866)] = 14575,
  [SMALL_STATE(867)] = 14579,
  [SMALL_STATE(868)] = 14583,
  [SMALL_STATE(869)] = 14587,
  [SMALL_STATE(870)] = 14591,
  [SMALL_STATE(871)] = 14595,
  [SMALL_STATE(872)] = 14599,
  [SMALL_STATE(873)] = 14603,
  [SMALL_STATE(874)] = 14607,
  [SMALL_STATE(875)] = 14611,
  [SMALL_STATE(876)] = 14615,
  [SMALL_STATE(877)] = 14619,
  [SMALL_STATE(878)] = 14623,
  [SMALL_STATE(879)] = 14627,
  [SMALL_STATE(880)] = 14631,
  [SMALL_STATE(881)] = 14635,
  [SMALL_STATE(882)] = 14639,
  [SMALL_STATE(883)] = 14643,
  [SMALL_STATE(884)] = 14647,
  [SMALL_STATE(885)] = 14651,
  [SMALL_STATE(886)] = 14655,
  [SMALL_STATE(887)] = 14659,
  [SMALL_STATE(888)] = 14663,
  [SMALL_STATE(889)] = 14667,
  [SMALL_STATE(890)] = 14671,
  [SMALL_STATE(891)] = 14675,
  [SMALL_STATE(892)] = 14679,
  [SMALL_STATE(893)] = 14683,
  [SMALL_STATE(894)] = 14687,
  [SMALL_STATE(895)] = 14691,
  [SMALL_STATE(896)] = 14695,
  [SMALL_STATE(897)] = 14699,
  [SMALL_STATE(898)] = 14703,
  [SMALL_STATE(899)] = 14707,
  [SMALL_STATE(900)] = 14711,
  [SMALL_STATE(901)] = 14715,
  [SMALL_STATE(902)] = 14719,
  [SMALL_STATE(903)] = 14723,
  [SMALL_STATE(904)] = 14727,
  [SMALL_STATE(905)] = 14731,
  [SMALL_STATE(906)] = 14735,
  [SMALL_STATE(907)] = 14739,
  [SMALL_STATE(908)] = 14743,
  [SMALL_STATE(909)] = 14747,
  [SMALL_STATE(910)] = 14751,
  [SMALL_STATE(911)] = 14755,
  [SMALL_STATE(912)] = 14759,
  [SMALL_STATE(913)] = 14763,
  [SMALL_STATE(914)] = 14767,
  [SMALL_STATE(915)] = 14771,
  [SMALL_STATE(916)] = 14775,
  [SMALL_STATE(917)] = 14779,
  [SMALL_STATE(918)] = 14783,
  [SMALL_STATE(919)] = 14787,
  [SMALL_STATE(920)] = 14791,
  [SMALL_STATE(921)] = 14795,
  [SMALL_STATE(922)] = 14799,
  [SMALL_STATE(923)] = 14803,
  [SMALL_STATE(924)] = 14807,
  [SMALL_STATE(925)] = 14811,
  [SMALL_STATE(926)] = 14815,
  [SMALL_STATE(927)] = 14819,
  [SMALL_STATE(928)] = 14823,
  [SMALL_STATE(929)] = 14827,
  [SMALL_STATE(930)] = 14831,
  [SMALL_STATE(931)] = 14835,
  [SMALL_STATE(932)] = 14839,
  [SMALL_STATE(933)] = 14843,
  [SMALL_STATE(934)] = 14847,
  [SMALL_STATE(935)] = 14851,
  [SMALL_STATE(936)] = 14855,
  [SMALL_STATE(937)] = 14859,
  [SMALL_STATE(938)] = 14863,
  [SMALL_STATE(939)] = 14867,
  [SMALL_STATE(940)] = 14871,
  [SMALL_STATE(941)] = 14875,
  [SMALL_STATE(942)] = 14879,
  [SMALL_STATE(943)] = 14883,
  [SMALL_STATE(944)] = 14887,
  [SMALL_STATE(945)] = 14891,
  [SMALL_STATE(946)] = 14895,
  [SMALL_STATE(947)] = 14899,
  [SMALL_STATE(948)] = 14903,
  [SMALL_STATE(949)] = 14907,
  [SMALL_STATE(950)] = 14911,
  [SMALL_STATE(951)] = 14915,
  [SMALL_STATE(952)] = 14919,
  [SMALL_STATE(953)] = 14923,
  [SMALL_STATE(954)] = 14927,
  [SMALL_STATE(955)] = 14931,
  [SMALL_STATE(956)] = 14935,
  [SMALL_STATE(957)] = 14939,
  [SMALL_STATE(958)] = 14943,
  [SMALL_STATE(959)] = 14947,
  [SMALL_STATE(960)] = 14951,
  [SMALL_STATE(961)] = 14955,
  [SMALL_STATE(962)] = 14959,
  [SMALL_STATE(963)] = 14963,
  [SMALL_STATE(964)] = 14967,
  [SMALL_STATE(965)] = 14971,
  [SMALL_STATE(966)] = 14975,
  [SMALL_STATE(967)] = 14979,
  [SMALL_STATE(968)] = 14983,
  [SMALL_STATE(969)] = 14987,
  [SMALL_STATE(970)] = 14991,
  [SMALL_STATE(971)] = 14995,
  [SMALL_STATE(972)] = 14999,
  [SMALL_STATE(973)] = 15003,
  [SMALL_STATE(974)] = 15007,
  [SMALL_STATE(975)] = 15011,
  [SMALL_STATE(976)] = 15015,
  [SMALL_STATE(977)] = 15019,
  [SMALL_STATE(978)] = 15023,
  [SMALL_STATE(979)] = 15027,
  [SMALL_STATE(980)] = 15031,
  [SMALL_STATE(981)] = 15035,
  [SMALL_STATE(982)] = 15039,
  [SMALL_STATE(983)] = 15043,
  [SMALL_STATE(984)] = 15047,
  [SMALL_STATE(985)] = 15051,
  [SMALL_STATE(986)] = 15055,
  [SMALL_STATE(987)] = 15059,
  [SMALL_STATE(988)] = 15063,
  [SMALL_STATE(989)] = 15067,
  [SMALL_STATE(990)] = 15071,
  [SMALL_STATE(991)] = 15075,
  [SMALL_STATE(992)] = 15079,
  [SMALL_STATE(993)] = 15083,
  [SMALL_STATE(994)] = 15087,
  [SMALL_STATE(995)] = 15091,
  [SMALL_STATE(996)] = 15095,
  [SMALL_STATE(997)] = 15099,
  [SMALL_STATE(998)] = 15103,
  [SMALL_STATE(999)] = 15107,
  [SMALL_STATE(1000)] = 15111,
  [SMALL_STATE(1001)] = 15115,
  [SMALL_STATE(1002)] = 15119,
  [SMALL_STATE(1003)] = 15123,
  [SMALL_STATE(1004)] = 15127,
  [SMALL_STATE(1005)] = 15131,
  [SMALL_STATE(1006)] = 15135,
  [SMALL_STATE(1007)] = 15139,
  [SMALL_STATE(1008)] = 15143,
  [SMALL_STATE(1009)] = 15147,
  [SMALL_STATE(1010)] = 15151,
  [SMALL_STATE(1011)] = 15155,
  [SMALL_STATE(1012)] = 15159,
  [SMALL_STATE(1013)] = 15163,
  [SMALL_STATE(1014)] = 15167,
  [SMALL_STATE(1015)] = 15171,
  [SMALL_STATE(1016)] = 15175,
  [SMALL_STATE(1017)] = 15179,
  [SMALL_STATE(1018)] = 15183,
  [SMALL_STATE(1019)] = 15187,
  [SMALL_STATE(1020)] = 15191,
  [SMALL_STATE(1021)] = 15195,
  [SMALL_STATE(1022)] = 15199,
  [SMALL_STATE(1023)] = 15203,
  [SMALL_STATE(1024)] = 15207,
  [SMALL_STATE(1025)] = 15211,
  [SMALL_STATE(1026)] = 15215,
  [SMALL_STATE(1027)] = 15219,
  [SMALL_STATE(1028)] = 15223,
  [SMALL_STATE(1029)] = 15227,
  [SMALL_STATE(1030)] = 15231,
  [SMALL_STATE(1031)] = 15235,
  [SMALL_STATE(1032)] = 15239,
  [SMALL_STATE(1033)] = 15243,
  [SMALL_STATE(1034)] = 15247,
  [SMALL_STATE(1035)] = 15251,
  [SMALL_STATE(1036)] = 15255,
  [SMALL_STATE(1037)] = 15259,
  [SMALL_STATE(1038)] = 15263,
  [SMALL_STATE(1039)] = 15267,
  [SMALL_STATE(1040)] = 15271,
  [SMALL_STATE(1041)] = 15275,
  [SMALL_STATE(1042)] = 15279,
  [SMALL_STATE(1043)] = 15283,
  [SMALL_STATE(1044)] = 15287,
  [SMALL_STATE(1045)] = 15291,
  [SMALL_STATE(1046)] = 15295,
  [SMALL_STATE(1047)] = 15299,
  [SMALL_STATE(1048)] = 15303,
  [SMALL_STATE(1049)] = 15307,
  [SMALL_STATE(1050)] = 15311,
  [SMALL_STATE(1051)] = 15315,
  [SMALL_STATE(1052)] = 15319,
  [SMALL_STATE(1053)] = 15323,
  [SMALL_STATE(1054)] = 15327,
  [SMALL_STATE(1055)] = 15331,
  [SMALL_STATE(1056)] = 15335,
  [SMALL_STATE(1057)] = 15339,
  [SMALL_STATE(1058)] = 15343,
  [SMALL_STATE(1059)] = 15347,
  [SMALL_STATE(1060)] = 15351,
  [SMALL_STATE(1061)] = 15355,
  [SMALL_STATE(1062)] = 15359,
  [SMALL_STATE(1063)] = 15363,
  [SMALL_STATE(1064)] = 15367,
  [SMALL_STATE(1065)] = 15371,
  [SMALL_STATE(1066)] = 15375,
  [SMALL_STATE(1067)] = 15379,
  [SMALL_STATE(1068)] = 15383,
  [SMALL_STATE(1069)] = 15387,
  [SMALL_STATE(1070)] = 15391,
  [SMALL_STATE(1071)] = 15395,
  [SMALL_STATE(1072)] = 15399,
  [SMALL_STATE(1073)] = 15403,
  [SMALL_STATE(1074)] = 15407,
  [SMALL_STATE(1075)] = 15411,
  [SMALL_STATE(1076)] = 15415,
  [SMALL_STATE(1077)] = 15419,
  [SMALL_STATE(1078)] = 15423,
  [SMALL_STATE(1079)] = 15427,
  [SMALL_STATE(1080)] = 15431,
  [SMALL_STATE(1081)] = 15435,
  [SMALL_STATE(1082)] = 15439,
  [SMALL_STATE(1083)] = 15443,
  [SMALL_STATE(1084)] = 15447,
  [SMALL_STATE(1085)] = 15451,
  [SMALL_STATE(1086)] = 15455,
  [SMALL_STATE(1087)] = 15459,
  [SMALL_STATE(1088)] = 15463,
  [SMALL_STATE(1089)] = 15467,
  [SMALL_STATE(1090)] = 15471,
  [SMALL_STATE(1091)] = 15475,
  [SMALL_STATE(1092)] = 15479,
  [SMALL_STATE(1093)] = 15483,
  [SMALL_STATE(1094)] = 15487,
  [SMALL_STATE(1095)] = 15491,
  [SMALL_STATE(1096)] = 15495,
  [SMALL_STATE(1097)] = 15499,
  [SMALL_STATE(1098)] = 15503,
  [SMALL_STATE(1099)] = 15507,
  [SMALL_STATE(1100)] = 15511,
  [SMALL_STATE(1101)] = 15515,
  [SMALL_STATE(1102)] = 15519,
  [SMALL_STATE(1103)] = 15523,
  [SMALL_STATE(1104)] = 15527,
  [SMALL_STATE(1105)] = 15531,
  [SMALL_STATE(1106)] = 15535,
  [SMALL_STATE(1107)] = 15539,
  [SMALL_STATE(1108)] = 15543,
  [SMALL_STATE(1109)] = 15547,
  [SMALL_STATE(1110)] = 15551,
  [SMALL_STATE(1111)] = 15555,
  [SMALL_STATE(1112)] = 15559,
  [SMALL_STATE(1113)] = 15563,
  [SMALL_STATE(1114)] = 15567,
  [SMALL_STATE(1115)] = 15571,
  [SMALL_STATE(1116)] = 15575,
  [SMALL_STATE(1117)] = 15579,
  [SMALL_STATE(1118)] = 15583,
  [SMALL_STATE(1119)] = 15587,
  [SMALL_STATE(1120)] = 15591,
  [SMALL_STATE(1121)] = 15595,
  [SMALL_STATE(1122)] = 15599,
  [SMALL_STATE(1123)] = 15603,
  [SMALL_STATE(1124)] = 15607,
  [SMALL_STATE(1125)] = 15611,
  [SMALL_STATE(1126)] = 15615,
  [SMALL_STATE(1127)] = 15619,
  [SMALL_STATE(1128)] = 15623,
  [SMALL_STATE(1129)] = 15627,
  [SMALL_STATE(1130)] = 15631,
  [SMALL_STATE(1131)] = 15635,
  [SMALL_STATE(1132)] = 15639,
  [SMALL_STATE(1133)] = 15643,
  [SMALL_STATE(1134)] = 15647,
  [SMALL_STATE(1135)] = 15651,
  [SMALL_STATE(1136)] = 15655,
  [SMALL_STATE(1137)] = 15659,
  [SMALL_STATE(1138)] = 15663,
  [SMALL_STATE(1139)] = 15667,
  [SMALL_STATE(1140)] = 15671,
  [SMALL_STATE(1141)] = 15675,
  [SMALL_STATE(1142)] = 15679,
  [SMALL_STATE(1143)] = 15683,
  [SMALL_STATE(1144)] = 15687,
  [SMALL_STATE(1145)] = 15691,
  [SMALL_STATE(1146)] = 15695,
  [SMALL_STATE(1147)] = 15699,
  [SMALL_STATE(1148)] = 15703,
  [SMALL_STATE(1149)] = 15707,
  [SMALL_STATE(1150)] = 15711,
  [SMALL_STATE(1151)] = 15715,
  [SMALL_STATE(1152)] = 15719,
  [SMALL_STATE(1153)] = 15723,
  [SMALL_STATE(1154)] = 15727,
  [SMALL_STATE(1155)] = 15731,
  [SMALL_STATE(1156)] = 15735,
  [SMALL_STATE(1157)] = 15739,
  [SMALL_STATE(1158)] = 15743,
  [SMALL_STATE(1159)] = 15747,
  [SMALL_STATE(1160)] = 15751,
  [SMALL_STATE(1161)] = 15755,
  [SMALL_STATE(1162)] = 15759,
  [SMALL_STATE(1163)] = 15763,
  [SMALL_STATE(1164)] = 15767,
  [SMALL_STATE(1165)] = 15771,
  [SMALL_STATE(1166)] = 15775,
  [SMALL_STATE(1167)] = 15779,
  [SMALL_STATE(1168)] = 15783,
  [SMALL_STATE(1169)] = 15787,
  [SMALL_STATE(1170)] = 15791,
  [SMALL_STATE(1171)] = 15795,
  [SMALL_STATE(1172)] = 15799,
  [SMALL_STATE(1173)] = 15803,
  [SMALL_STATE(1174)] = 15807,
  [SMALL_STATE(1175)] = 15811,
  [SMALL_STATE(1176)] = 15815,
  [SMALL_STATE(1177)] = 15819,
  [SMALL_STATE(1178)] = 15823,
  [SMALL_STATE(1179)] = 15827,
  [SMALL_STATE(1180)] = 15831,
  [SMALL_STATE(1181)] = 15835,
  [SMALL_STATE(1182)] = 15839,
  [SMALL_STATE(1183)] = 15843,
  [SMALL_STATE(1184)] = 15847,
  [SMALL_STATE(1185)] = 15851,
  [SMALL_STATE(1186)] = 15855,
  [SMALL_STATE(1187)] = 15859,
  [SMALL_STATE(1188)] = 15863,
  [SMALL_STATE(1189)] = 15867,
  [SMALL_STATE(1190)] = 15871,
  [SMALL_STATE(1191)] = 15875,
  [SMALL_STATE(1192)] = 15879,
  [SMALL_STATE(1193)] = 15883,
  [SMALL_STATE(1194)] = 15887,
  [SMALL_STATE(1195)] = 15891,
  [SMALL_STATE(1196)] = 15895,
  [SMALL_STATE(1197)] = 15899,
  [SMALL_STATE(1198)] = 15903,
  [SMALL_STATE(1199)] = 15907,
  [SMALL_STATE(1200)] = 15911,
  [SMALL_STATE(1201)] = 15915,
  [SMALL_STATE(1202)] = 15919,
  [SMALL_STATE(1203)] = 15923,
  [SMALL_STATE(1204)] = 15927,
  [SMALL_STATE(1205)] = 15931,
  [SMALL_STATE(1206)] = 15935,
  [SMALL_STATE(1207)] = 15939,
  [SMALL_STATE(1208)] = 15943,
  [SMALL_STATE(1209)] = 15947,
  [SMALL_STATE(1210)] = 15951,
  [SMALL_STATE(1211)] = 15955,
  [SMALL_STATE(1212)] = 15959,
  [SMALL_STATE(1213)] = 15963,
  [SMALL_STATE(1214)] = 15967,
  [SMALL_STATE(1215)] = 15971,
  [SMALL_STATE(1216)] = 15975,
  [SMALL_STATE(1217)] = 15979,
  [SMALL_STATE(1218)] = 15983,
  [SMALL_STATE(1219)] = 15987,
  [SMALL_STATE(1220)] = 15991,
  [SMALL_STATE(1221)] = 15995,
  [SMALL_STATE(1222)] = 15999,
  [SMALL_STATE(1223)] = 16003,
  [SMALL_STATE(1224)] = 16007,
  [SMALL_STATE(1225)] = 16011,
  [SMALL_STATE(1226)] = 16015,
  [SMALL_STATE(1227)] = 16019,
  [SMALL_STATE(1228)] = 16023,
  [SMALL_STATE(1229)] = 16027,
  [SMALL_STATE(1230)] = 16031,
  [SMALL_STATE(1231)] = 16035,
  [SMALL_STATE(1232)] = 16039,
  [SMALL_STATE(1233)] = 16043,
  [SMALL_STATE(1234)] = 16047,
  [SMALL_STATE(1235)] = 16051,
  [SMALL_STATE(1236)] = 16055,
  [SMALL_STATE(1237)] = 16059,
  [SMALL_STATE(1238)] = 16063,
  [SMALL_STATE(1239)] = 16067,
  [SMALL_STATE(1240)] = 16071,
  [SMALL_STATE(1241)] = 16075,
  [SMALL_STATE(1242)] = 16079,
  [SMALL_STATE(1243)] = 16083,
  [SMALL_STATE(1244)] = 16087,
  [SMALL_STATE(1245)] = 16091,
  [SMALL_STATE(1246)] = 16095,
  [SMALL_STATE(1247)] = 16099,
  [SMALL_STATE(1248)] = 16103,
  [SMALL_STATE(1249)] = 16107,
  [SMALL_STATE(1250)] = 16111,
  [SMALL_STATE(1251)] = 16115,
  [SMALL_STATE(1252)] = 16119,
  [SMALL_STATE(1253)] = 16123,
  [SMALL_STATE(1254)] = 16127,
  [SMALL_STATE(1255)] = 16131,
  [SMALL_STATE(1256)] = 16135,
  [SMALL_STATE(1257)] = 16139,
  [SMALL_STATE(1258)] = 16143,
  [SMALL_STATE(1259)] = 16147,
  [SMALL_STATE(1260)] = 16151,
  [SMALL_STATE(1261)] = 16155,
  [SMALL_STATE(1262)] = 16159,
  [SMALL_STATE(1263)] = 16163,
  [SMALL_STATE(1264)] = 16167,
  [SMALL_STATE(1265)] = 16171,
  [SMALL_STATE(1266)] = 16175,
  [SMALL_STATE(1267)] = 16179,
  [SMALL_STATE(1268)] = 16183,
  [SMALL_STATE(1269)] = 16187,
  [SMALL_STATE(1270)] = 16191,
  [SMALL_STATE(1271)] = 16195,
  [SMALL_STATE(1272)] = 16199,
  [SMALL_STATE(1273)] = 16203,
  [SMALL_STATE(1274)] = 16207,
  [SMALL_STATE(1275)] = 16211,
  [SMALL_STATE(1276)] = 16215,
  [SMALL_STATE(1277)] = 16219,
  [SMALL_STATE(1278)] = 16223,
  [SMALL_STATE(1279)] = 16227,
  [SMALL_STATE(1280)] = 16231,
  [SMALL_STATE(1281)] = 16235,
  [SMALL_STATE(1282)] = 16239,
  [SMALL_STATE(1283)] = 16243,
  [SMALL_STATE(1284)] = 16247,
  [SMALL_STATE(1285)] = 16251,
  [SMALL_STATE(1286)] = 16255,
  [SMALL_STATE(1287)] = 16259,
  [SMALL_STATE(1288)] = 16263,
  [SMALL_STATE(1289)] = 16267,
  [SMALL_STATE(1290)] = 16271,
  [SMALL_STATE(1291)] = 16275,
  [SMALL_STATE(1292)] = 16279,
  [SMALL_STATE(1293)] = 16283,
  [SMALL_STATE(1294)] = 16287,
  [SMALL_STATE(1295)] = 16291,
  [SMALL_STATE(1296)] = 16295,
  [SMALL_STATE(1297)] = 16299,
  [SMALL_STATE(1298)] = 16303,
  [SMALL_STATE(1299)] = 16307,
  [SMALL_STATE(1300)] = 16311,
  [SMALL_STATE(1301)] = 16315,
  [SMALL_STATE(1302)] = 16319,
  [SMALL_STATE(1303)] = 16323,
  [SMALL_STATE(1304)] = 16327,
  [SMALL_STATE(1305)] = 16331,
  [SMALL_STATE(1306)] = 16335,
  [SMALL_STATE(1307)] = 16339,
  [SMALL_STATE(1308)] = 16343,
  [SMALL_STATE(1309)] = 16347,
  [SMALL_STATE(1310)] = 16351,
  [SMALL_STATE(1311)] = 16355,
  [SMALL_STATE(1312)] = 16359,
  [SMALL_STATE(1313)] = 16363,
  [SMALL_STATE(1314)] = 16367,
  [SMALL_STATE(1315)] = 16371,
  [SMALL_STATE(1316)] = 16375,
  [SMALL_STATE(1317)] = 16379,
  [SMALL_STATE(1318)] = 16383,
  [SMALL_STATE(1319)] = 16387,
  [SMALL_STATE(1320)] = 16391,
  [SMALL_STATE(1321)] = 16395,
  [SMALL_STATE(1322)] = 16399,
  [SMALL_STATE(1323)] = 16403,
  [SMALL_STATE(1324)] = 16407,
  [SMALL_STATE(1325)] = 16411,
  [SMALL_STATE(1326)] = 16415,
  [SMALL_STATE(1327)] = 16419,
  [SMALL_STATE(1328)] = 16423,
  [SMALL_STATE(1329)] = 16427,
  [SMALL_STATE(1330)] = 16431,
  [SMALL_STATE(1331)] = 16435,
  [SMALL_STATE(1332)] = 16439,
  [SMALL_STATE(1333)] = 16443,
  [SMALL_STATE(1334)] = 16447,
  [SMALL_STATE(1335)] = 16451,
  [SMALL_STATE(1336)] = 16455,
  [SMALL_STATE(1337)] = 16459,
  [SMALL_STATE(1338)] = 16463,
  [SMALL_STATE(1339)] = 16467,
  [SMALL_STATE(1340)] = 16471,
  [SMALL_STATE(1341)] = 16475,
  [SMALL_STATE(1342)] = 16479,
  [SMALL_STATE(1343)] = 16483,
  [SMALL_STATE(1344)] = 16487,
  [SMALL_STATE(1345)] = 16491,
  [SMALL_STATE(1346)] = 16495,
  [SMALL_STATE(1347)] = 16499,
  [SMALL_STATE(1348)] = 16503,
  [SMALL_STATE(1349)] = 16507,
  [SMALL_STATE(1350)] = 16511,
  [SMALL_STATE(1351)] = 16515,
  [SMALL_STATE(1352)] = 16519,
  [SMALL_STATE(1353)] = 16523,
  [SMALL_STATE(1354)] = 16527,
  [SMALL_STATE(1355)] = 16531,
  [SMALL_STATE(1356)] = 16535,
  [SMALL_STATE(1357)] = 16539,
  [SMALL_STATE(1358)] = 16543,
  [SMALL_STATE(1359)] = 16547,
  [SMALL_STATE(1360)] = 16551,
  [SMALL_STATE(1361)] = 16555,
  [SMALL_STATE(1362)] = 16559,
  [SMALL_STATE(1363)] = 16563,
  [SMALL_STATE(1364)] = 16567,
  [SMALL_STATE(1365)] = 16571,
  [SMALL_STATE(1366)] = 16575,
  [SMALL_STATE(1367)] = 16579,
  [SMALL_STATE(1368)] = 16583,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1368),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1366),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1365),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1364),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(456),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(492),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(637),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1368),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(849),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(426),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(433),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1366),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1365),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(430),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(432),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(467),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(422),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1364),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 22),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 22),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(826),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 23),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 45),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 45),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 45),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(464),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1033),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1091),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9, .production_id = 45),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8, .production_id = 45),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3, .production_id = 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4, .production_id = 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1323),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(1139),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1359),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1361),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 38),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1358),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 39),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2, .production_id = 45),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_options_repeat1, 2),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_options_repeat1, 2), SHIFT_REPEAT(562),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 5),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 55),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 18),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1146),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 8),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 23),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 29),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 98),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 118),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3, .production_id = 45),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 18),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 24),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 5),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2, .production_id = 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2, .production_id = 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1139),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(827),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8, .production_id = 24),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3, .production_id = 8),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15, .production_id = 86),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 59),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3, .production_id = 8),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 114),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4, .production_id = 45),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1, .production_id = 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3, .production_id = 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 113),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 18),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 5),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 18),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 99),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6, .production_id = 42),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 103),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(468),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2), SHIFT_REPEAT(1108),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6, .production_id = 5),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4, .production_id = 19),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 109),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 24),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 11, .production_id = 70),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 5),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(714),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 24),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_name, 1, .production_id = 20),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2, .production_id = 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1248),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3, .production_id = 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 51),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 52),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3, .production_id = 5),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 57),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 43),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1142),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3, .production_id = 15),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 36),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1339),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4, .production_id = 19),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5, .production_id = 35),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1340),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3, .production_id = 14),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 10),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3, .production_id = 5),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3, .production_id = 13),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 3, .production_id = 45),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 44),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 26),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1357),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 27),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 30),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1356),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 11),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 33),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1355),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 65),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4, .production_id = 5),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 23, .production_id = 118),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 42),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 6),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 67),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 66),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 9),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9, .production_id = 63),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 21, .production_id = 117),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6, .production_id = 37),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 19),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 21, .production_id = 116),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 114),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 24),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6, .production_id = 24),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 42),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 42),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 113),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10, .production_id = 59),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4, .production_id = 8),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4, .production_id = 8),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 44),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 69),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 63),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4, .production_id = 15),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 18),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 6),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 21),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 20, .production_id = 115),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 5),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 109),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 112),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4, .production_id = 18),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 5),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 111),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 110),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 4),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8, .production_id = 44),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 103),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 108),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 107),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18, .production_id = 106),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 105),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7, .production_id = 5),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 104),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 11, .production_id = 69),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7, .production_id = 42),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 11, .production_id = 72),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 99),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 98),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 102),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 18),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 11),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5, .production_id = 24),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7, .production_id = 46),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 24),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 7, .production_id = 47),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 7, .production_id = 48),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 7, .production_id = 49),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 7, .production_id = 50),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 8, .production_id = 58),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 101),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8, .production_id = 46),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 12, .production_id = 70),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 100),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 75),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 96),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 95),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 94),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 53),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 7, .production_id = 54),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 93),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 12, .production_id = 76),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 92),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 91),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 24),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 77),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 16, .production_id = 86),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3, .production_id = 8),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 79),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 24),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 28),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5, .production_id = 29),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3, .production_id = 12),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 31),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5, .production_id = 32),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 34),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 13, .production_id = 76),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 90),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 77),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 14),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 37),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 80),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 87),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 5),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 56),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 81),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 88),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 45),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 82),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 83),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 84),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 85),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 89),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1216),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1112),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1337),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1328),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1313),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1226),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1140),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1255),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1261),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1317),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(856),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(860),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(861),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(868),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1296),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1291),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1289),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1287),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1, .production_id = 1),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1269),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1268),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1087] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(437),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(847),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1237),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1229),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1237),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(907),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1272),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 1),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 1),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1284),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(752),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 1),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1093),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1138),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 3),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1297),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1302),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 2),
  [1236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(707),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1283),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1280),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1259),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1, .production_id = 1),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1090),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1214),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1210),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1180),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(57),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1176),
  [1306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1162),
  [1320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1148),
  [1332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1000),
  [1354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1097),
  [1356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2), SHIFT_REPEAT(1180),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(775),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(765),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(421),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(839),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(748),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1348),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(445),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 1),
  [1449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(788),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1056),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1, .production_id = 71),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(760),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(206),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2), SHIFT_REPEAT(745),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2),
  [1513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(616),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2, .production_id = 73),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1, .production_id = 74),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(423),
  [1529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2, .production_id = 78),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(1056),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [1558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(901),
  [1560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1353),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1351),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 16),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1333),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 9),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 17),
  [1612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(928),
  [1614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(799),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1292),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1216),
  [1652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 1),
  [1654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 97),
  [1656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1210),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1252),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 41),
  [1666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [1668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1106),
  [1670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(985),
  [1678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 68),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1219),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [1698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1125),
  [1700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1130),
  [1704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1115),
  [1708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1059),
  [1712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [1714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1051),
  [1718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [1728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [1730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1143),
  [1732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [1734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4, .production_id = 1),
  [1736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 3, .production_id = 64),
  [1738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1152),
  [1740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1169),
  [1746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [1748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1188),
  [1750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(737),
  [1752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1193),
  [1754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [1756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1201),
  [1758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1246),
  [1764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(708),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1185),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1346),
  [1782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 61),
  [1792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 62),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [1814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1086),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1111),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1179),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1295),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [1950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1306),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1310),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1173),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1335),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [2090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1318),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1320),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1075),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [2132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1322),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 25),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1104),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1354),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1347),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1338),
  [2202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 71),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1329),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1120),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1122),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1126),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1127),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1136),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1137),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [2264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 40),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1345),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1154),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1155),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1157),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1159),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1344),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [2302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 60),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1166),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1167),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1168),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1170),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1171),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1174),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1175),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1181),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [2350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1183),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1184),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1257),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1294),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1191),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1199),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1203),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [2400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1204),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1205),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1208),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1209),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [2420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1211),
  [2422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1213),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [2432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1223),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1224),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [2460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1231),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1232),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1234),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1235),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1236),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1238),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1239),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1241),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1243),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1244),
  [2490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1245),
  [2492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [2496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1247),
  [2498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, .production_id = 7),
  [2500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1249),
  [2504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [2514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [2518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [2520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1262),
  [2522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1263),
  [2524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [2526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1265),
  [2528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1258),
  [2532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [2534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1270),
  [2536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [2538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1273),
  [2542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1274),
  [2544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1275),
  [2546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1277),
  [2550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1278),
  [2552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 6),
  [2554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [2556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1281),
  [2560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1282),
  [2562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1165),
  [2564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [2566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1285),
  [2568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1286),
  [2570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [2572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [2574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [2576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1288),
  [2578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [2580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [2582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [2584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [2586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [2588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1256),
  [2590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [2592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [2594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [2596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [2600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 1),
  [2602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1299),
  [2604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1300),
  [2606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [2608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [2610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [2612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [2614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [2616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [2618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1307),
  [2620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1308),
  [2622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [2624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1311),
  [2628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1312),
  [2630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [2632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [2634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1314),
  [2636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [2638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [2640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1316),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [2644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [2646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [2648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1319),
  [2652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [2654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [2656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1076),
  [2658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [2660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [2662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [2664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1253),
  [2666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [2668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [2670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [2672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [2674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1321),
  [2676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [2678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [2680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [2682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1250),
  [2684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [2686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [2688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [2690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [2692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1330),
  [2694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1331),
  [2696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1332),
  [2698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [2700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1334),
  [2702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [2704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [2706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1336),
  [2708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [2710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [2712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1217),
  [2714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [2716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [2718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1341),
  [2720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1197),
  [2722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [2724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [2726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [2728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [2732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [2734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [2736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [2738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1349),
  [2740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1350),
  [2742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [2744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [2746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [2748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1352),
  [2750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [2752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1178),
  [2754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [2756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [2760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [2762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [2764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [2766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [2768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [2770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [2772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [2774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [2776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1360),
  [2778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [2780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [2782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1141),
  [2784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [2788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [2790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [2792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [2794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [2796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [2798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [2800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [2802] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [2806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [2808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [2810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [2812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
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
