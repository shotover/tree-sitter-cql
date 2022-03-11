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
#define STATE_COUNT 1357
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 307
#define ALIAS_COUNT 28
#define TOKEN_COUNT 145
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 23
#define PRODUCTION_ID_COUNT 121

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
  aux_sym_order_spec_token3 = 36,
  aux_sym_order_spec_token4 = 37,
  aux_sym_delete_statement_token1 = 38,
  aux_sym_delete_statement_token2 = 39,
  aux_sym_delete_statement_token3 = 40,
  aux_sym_begin_batch_token1 = 41,
  aux_sym_begin_batch_token2 = 42,
  aux_sym_begin_batch_token3 = 43,
  aux_sym_begin_batch_token4 = 44,
  anon_sym_LBRACK = 45,
  anon_sym_RBRACK = 46,
  aux_sym_using_timestamp_spec_token1 = 47,
  aux_sym_timestamp_token1 = 48,
  aux_sym_insert_statement_token1 = 49,
  aux_sym_insert_statement_token2 = 50,
  aux_sym_insert_statement_token3 = 51,
  aux_sym_insert_values_spec_token1 = 52,
  anon_sym_LBRACE = 53,
  anon_sym_COLON = 54,
  anon_sym_RBRACE = 55,
  aux_sym_ttl_token1 = 56,
  aux_sym_truncate_token1 = 57,
  aux_sym_truncate_token2 = 58,
  aux_sym_create_index_token1 = 59,
  aux_sym_create_index_token2 = 60,
  aux_sym_create_index_token3 = 61,
  aux_sym_index_keys_spec_token1 = 62,
  aux_sym_index_entries_s_spec_token1 = 63,
  aux_sym_index_full_spec_token1 = 64,
  aux_sym_drop_index_token1 = 65,
  aux_sym_update_token1 = 66,
  aux_sym_update_token2 = 67,
  anon_sym_PLUS = 68,
  anon_sym_DASH = 69,
  aux_sym_use_token1 = 70,
  aux_sym_grant_token1 = 71,
  aux_sym_grant_token2 = 72,
  aux_sym_revoke_token1 = 73,
  aux_sym_priviledge_token1 = 74,
  aux_sym_priviledge_token2 = 75,
  aux_sym_priviledge_token3 = 76,
  aux_sym_priviledge_token4 = 77,
  aux_sym_priviledge_token5 = 78,
  aux_sym_priviledge_token6 = 79,
  aux_sym_priviledge_token7 = 80,
  aux_sym_resource_token1 = 81,
  aux_sym_resource_token2 = 82,
  aux_sym_resource_token3 = 83,
  aux_sym_resource_token4 = 84,
  aux_sym_resource_token5 = 85,
  aux_sym_resource_token6 = 86,
  aux_sym_list_roles_token1 = 87,
  aux_sym_list_roles_token2 = 88,
  aux_sym_list_roles_token3 = 89,
  aux_sym_drop_aggregate_token1 = 90,
  aux_sym_drop_materialized_view_token1 = 91,
  aux_sym_drop_materialized_view_token2 = 92,
  aux_sym_drop_trigger_token1 = 93,
  aux_sym_drop_type_token1 = 94,
  aux_sym_drop_user_token1 = 95,
  aux_sym_create_aggregate_token1 = 96,
  aux_sym_create_aggregate_token2 = 97,
  aux_sym_create_aggregate_token3 = 98,
  aux_sym_create_aggregate_token4 = 99,
  aux_sym_create_aggregate_token5 = 100,
  aux_sym_create_aggregate_token6 = 101,
  aux_sym_create_materialized_view_token1 = 102,
  aux_sym_column_not_null_token1 = 103,
  aux_sym_materialized_view_options_token1 = 104,
  aux_sym_create_function_token1 = 105,
  aux_sym_create_function_token2 = 106,
  aux_sym_data_type_name_token1 = 107,
  aux_sym_data_type_name_token2 = 108,
  aux_sym_data_type_name_token3 = 109,
  aux_sym_data_type_name_token4 = 110,
  aux_sym_data_type_name_token5 = 111,
  aux_sym_data_type_name_token6 = 112,
  aux_sym_data_type_name_token7 = 113,
  aux_sym_data_type_name_token8 = 114,
  aux_sym_data_type_name_token9 = 115,
  aux_sym_data_type_name_token10 = 116,
  aux_sym_data_type_name_token11 = 117,
  aux_sym_data_type_name_token12 = 118,
  aux_sym_data_type_name_token13 = 119,
  aux_sym_data_type_name_token14 = 120,
  aux_sym_data_type_name_token15 = 121,
  aux_sym_data_type_name_token16 = 122,
  aux_sym_data_type_name_token17 = 123,
  aux_sym_data_type_name_token18 = 124,
  aux_sym_data_type_name_token19 = 125,
  aux_sym_data_type_name_token20 = 126,
  aux_sym_data_type_name_token21 = 127,
  aux_sym_data_type_name_token22 = 128,
  aux_sym_return_mode_token1 = 129,
  aux_sym_return_mode_token2 = 130,
  aux_sym_create_keyspace_token1 = 131,
  aux_sym_durable_writes_token1 = 132,
  aux_sym_role_with_options_token1 = 133,
  aux_sym_role_with_options_token2 = 134,
  aux_sym_role_with_options_token3 = 135,
  aux_sym_role_with_options_token4 = 136,
  aux_sym_clustering_order_token1 = 137,
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
  sym_relation_contains_key = 159,
  sym_relation_contains = 160,
  sym_order_spec = 161,
  sym_delete_statement = 162,
  sym_begin_batch = 163,
  sym_delete_column_list = 164,
  sym_delete_column_item = 165,
  sym_using_timestamp_spec = 166,
  sym_timestamp = 167,
  sym_if_spec = 168,
  sym_if_condition_list = 169,
  sym_if_condition = 170,
  sym_insert_statement = 171,
  sym_insert_column_spec = 172,
  sym_column_list = 173,
  sym_insert_values_spec = 174,
  sym_expression_list = 175,
  sym_expression = 176,
  sym_assignment_map = 177,
  sym_assignment_set = 178,
  sym_assignment_list = 179,
  sym_assignment_tuple = 180,
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
  sym_create_trigger = 250,
  sym_trigger_name = 251,
  sym_trigger_class = 252,
  sym_create_type = 253,
  sym_create_user = 254,
  sym_user_name = 255,
  sym_alter_materialized_view = 256,
  sym_alter_keyspace = 257,
  sym_keyspace_name = 258,
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
  aux_sym_delete_column_list_repeat1 = 287,
  aux_sym_if_condition_list_repeat1 = 288,
  aux_sym_expression_list_repeat1 = 289,
  aux_sym_assignment_map_repeat1 = 290,
  aux_sym_assignment_set_repeat1 = 291,
  aux_sym_update_repeat1 = 292,
  aux_sym_init_cond_list_nested_repeat1 = 293,
  aux_sym_init_cond_hash_repeat1 = 294,
  aux_sym_materialized_view_where_repeat1 = 295,
  aux_sym_materialized_view_options_repeat1 = 296,
  aux_sym_create_function_repeat1 = 297,
  aux_sym_data_type_definition_repeat1 = 298,
  aux_sym_role_with_repeat1 = 299,
  aux_sym_option_hash_repeat1 = 300,
  aux_sym_column_definition_list_repeat1 = 301,
  aux_sym_clustering_key_list_repeat1 = 302,
  aux_sym_create_type_repeat1 = 303,
  aux_sym_replication_list_repeat1 = 304,
  aux_sym_alter_table_column_definition_repeat1 = 305,
  aux_sym_alter_type_rename_list_repeat1 = 306,
  anon_alias_sym_aggregate = 307,
  anon_alias_sym_alias = 308,
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
  anon_alias_sym_limit_value = 322,
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
  anon_alias_sym_value = 334,
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
  [aux_sym_order_spec_token3] = "ASC",
  [aux_sym_order_spec_token4] = "DESC",
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
  [sym_assignment_tuple] = "assignment_tuple",
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
  [aux_sym_delete_column_list_repeat1] = "delete_column_list_repeat1",
  [aux_sym_if_condition_list_repeat1] = "if_condition_list_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_assignment_map_repeat1] = "assignment_map_repeat1",
  [aux_sym_assignment_set_repeat1] = "assignment_set_repeat1",
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
  [anon_alias_sym_value] = "value",
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
  [aux_sym_order_spec_token3] = aux_sym_order_spec_token3,
  [aux_sym_order_spec_token4] = aux_sym_order_spec_token4,
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
  [sym_assignment_tuple] = sym_assignment_tuple,
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
  [aux_sym_delete_column_list_repeat1] = aux_sym_delete_column_list_repeat1,
  [aux_sym_if_condition_list_repeat1] = aux_sym_if_condition_list_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_assignment_map_repeat1] = aux_sym_assignment_map_repeat1,
  [aux_sym_assignment_set_repeat1] = aux_sym_assignment_set_repeat1,
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
  [anon_alias_sym_value] = anon_alias_sym_value,
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
  [aux_sym_order_spec_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_spec_token4] = {
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
  [sym_assignment_tuple] = {
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
  [aux_sym_assignment_set_repeat1] = {
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
  [anon_alias_sym_value] = {
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
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_value,
  },
  [24] = {
    [0] = anon_alias_sym_keyspace,
    [2] = anon_alias_sym_trigger,
  },
  [25] = {
    [4] = anon_alias_sym_table,
  },
  [26] = {
    [2] = anon_alias_sym_keyspace,
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
    [1] = anon_alias_sym_table,
  },
  [39] = {
    [1] = anon_alias_sym_function,
  },
  [40] = {
    [1] = anon_alias_sym_role,
  },
  [41] = {
    [0] = anon_alias_sym_option,
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
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_table,
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
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_materialized_view,
  },
  [61] = {
    [5] = anon_alias_sym_table,
  },
  [62] = {
    [2] = anon_alias_sym_keys,
  },
  [63] = {
    [2] = anon_alias_sym_entries,
  },
  [64] = {
    [2] = anon_alias_sym_full,
  },
  [65] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_type,
    [6] = anon_alias_sym_column,
    [7] = anon_alias_sym_data_type,
  },
  [66] = {
    [1] = anon_alias_sym_column,
    [2] = anon_alias_sym_data_type,
  },
  [67] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_trigger,
    [8] = anon_alias_sym_table,
  },
  [68] = {
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [69] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_table,
  },
  [70] = {
    [0] = anon_alias_sym_primary_key,
  },
  [71] = {
    [5] = anon_alias_sym_type,
    [7] = anon_alias_sym_column,
    [8] = anon_alias_sym_data_type,
  },
  [72] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_table,
  },
  [73] = {
    [0] = anon_alias_sym_partition_key,
  },
  [74] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_trigger,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
  },
  [75] = {
    [0] = anon_alias_sym_partition_key,
    [1] = anon_alias_sym_partition_key,
  },
  [76] = {
    [0] = anon_alias_sym_clustering_key,
  },
  [77] = {
    [2] = anon_alias_sym_function,
    [9] = anon_alias_sym_language,
  },
  [78] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_type,
    [9] = anon_alias_sym_column,
    [10] = anon_alias_sym_data_type,
  },
  [79] = {
    [4] = anon_alias_sym_column,
  },
  [80] = {
    [0] = anon_alias_sym_clustering_key,
    [1] = anon_alias_sym_clustering_key,
  },
  [81] = {
    [2] = anon_alias_sym_function,
    [10] = anon_alias_sym_language,
  },
  [82] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [83] = {
    [2] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [84] = {
    [2] = anon_alias_sym_aggregate,
    [7] = anon_alias_sym_sfunc,
    [11] = anon_alias_sym_finalfunc,
  },
  [85] = {
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [86] = {
    [5] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [87] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [88] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_table,
    [13] = anon_alias_sym_primary_key,
  },
  [89] = {
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [90] = {
    [5] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [91] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [92] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [93] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [94] = {
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [95] = {
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [96] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [97] = {
    [5] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [98] = {
    [5] = anon_alias_sym_aggregate,
    [10] = anon_alias_sym_sfunc,
    [14] = anon_alias_sym_finalfunc,
  },
  [99] = {
    [0] = anon_alias_sym_hash_key,
  },
  [100] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
    [10] = anon_alias_sym_table,
    [15] = anon_alias_sym_primary_key,
  },
  [101] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
    [15] = anon_alias_sym_primary_key,
  },
  [102] = {
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [103] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [104] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [105] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_table,
    [16] = anon_alias_sym_primary_key,
  },
  [106] = {
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [107] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [108] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
    [11] = anon_alias_sym_sfunc,
    [15] = anon_alias_sym_finalfunc,
  },
  [109] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [110] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [111] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
    [10] = anon_alias_sym_keyspace,
    [12] = anon_alias_sym_table,
    [17] = anon_alias_sym_primary_key,
  },
  [112] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [113] = {
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [114] = {
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [115] = {
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_materialized_view,
    [13] = anon_alias_sym_table,
    [18] = anon_alias_sym_primary_key,
  },
  [116] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_keyspace,
    [13] = anon_alias_sym_table,
    [18] = anon_alias_sym_primary_key,
  },
  [117] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [17] = anon_alias_sym_language,
  },
  [118] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [18] = anon_alias_sym_language,
  },
  [119] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_aggregate,
    [14] = anon_alias_sym_sfunc,
    [18] = anon_alias_sym_finalfunc,
  },
  [120] = {
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
      if (lookahead == '+') ADVANCE(658);
      if (lookahead == ',') ADVANCE(567);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(568);
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == ':') ADVANCE(634);
      if (lookahead == ';') ADVANCE(556);
      if (lookahead == '<') ADVANCE(597);
      if (lookahead == '=') ADVANCE(600);
      if (lookahead == '>') ADVANCE(601);
      if (lookahead == 'X') ADVANCE(28);
      if (lookahead == '[') ADVANCE(623);
      if (lookahead == ']') ADVANCE(624);
      if (lookahead == '{') ADVANCE(633);
      if (lookahead == '}') ADVANCE(635);
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
      if (lookahead == '[') ADVANCE(623);
      if (lookahead == '{') ADVANCE(633);
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
      if (lookahead == '[') ADVANCE(623);
      if (lookahead == '{') ADVANCE(633);
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
          lookahead == 'o') ADVANCE(664);
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
          lookahead == 'b') ADVANCE(711);
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
          lookahead == 'c') ADVANCE(611);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(698);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(700);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(610);
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
          lookahead == 'd') ADVANCE(749);
      END_STATE();
    case 104:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(751);
      END_STATE();
    case 105:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(620);
      END_STATE();
    case 106:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(701);
      END_STATE();
    case 107:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(755);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(739);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(621);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(690);
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
          lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(660);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(738);
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
          lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(743);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(654);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(764);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
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
          lookahead == 'e') ADVANCE(673);
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
          lookahead == 'f') ADVANCE(614);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(603);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(704);
      END_STATE();
    case 193:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(614);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(704);
      END_STATE();
    case 194:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(687);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(644);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(457);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(696);
      END_STATE();
    case 195:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(687);
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
          lookahead == 'g') ADVANCE(625);
      END_STATE();
    case 201:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(564);
      END_STATE();
    case 202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(759);
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
          lookahead == 'h') ADVANCE(705);
      END_STATE();
    case 217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(622);
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
          lookahead == 'l') ADVANCE(667);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(636);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(650);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(574);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(719);
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
          lookahead == 't') ADVANCE(656);
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
          lookahead == 'n') ADVANCE(618);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(756);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(725);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(713);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(681);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(753);
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
          lookahead == 'o') ADVANCE(664);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 337:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 338:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(630);
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
          lookahead == 'p') ADVANCE(731);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 362:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(652);
      END_STATE();
    case 363:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(626);
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
          lookahead == 'r') ADVANCE(670);
      END_STATE();
    case 379:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(608);
      END_STATE();
    case 380:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(715);
      END_STATE();
    case 381:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(692);
      END_STATE();
    case 382:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(745);
      END_STATE();
    case 383:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(757);
      END_STATE();
    case 384:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(766);
      END_STATE();
    case 385:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(695);
      END_STATE();
    case 386:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(694);
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
          lookahead == 't') ADVANCE(631);
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
          lookahead == 's') ADVANCE(616);
      END_STATE();
    case 409:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(632);
      END_STATE();
    case 410:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(648);
      END_STATE();
    case 411:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(758);
      END_STATE();
    case 412:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(706);
      END_STATE();
    case 413:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(605);
      END_STATE();
    case 414:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(669);
      END_STATE();
    case 415:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(754);
      END_STATE();
    case 416:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(680);
      END_STATE();
    case 417:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(676);
      END_STATE();
    case 418:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(679);
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
          lookahead == 't') ADVANCE(727);
      END_STATE();
    case 438:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(685);
      END_STATE();
    case 439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      END_STATE();
    case 440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(723);
      END_STATE();
    case 441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(662);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(752);
      END_STATE();
    case 443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(565);
      END_STATE();
    case 444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(709);
      END_STATE();
    case 445:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(628);
      END_STATE();
    case 446:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(557);
      END_STATE();
    case 447:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(747);
      END_STATE();
    case 448:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(762);
      END_STATE();
    case 449:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(741);
      END_STATE();
    case 450:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(559);
      END_STATE();
    case 451:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(733);
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
          lookahead == 'w') ADVANCE(691);
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
          lookahead == 'x') ADVANCE(643);
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
          lookahead == 'y') ADVANCE(675);
      END_STATE();
    case 506:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(702);
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
      if (lookahead == ':') ADVANCE(634);
      if (lookahead == ';') ADVANCE(556);
      if (lookahead == '<') ADVANCE(597);
      if (lookahead == '=') ADVANCE(600);
      if (lookahead == '>') ADVANCE(601);
      if (lookahead == 'X') ADVANCE(28);
      if (lookahead == '[') ADVANCE(623);
      if (lookahead == ']') ADVANCE(624);
      if (lookahead == '{') ADVANCE(633);
      if (lookahead == '}') ADVANCE(635);
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
          lookahead == 't') ADVANCE(729);
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
          lookahead == 's') ADVANCE(646);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_order_spec_token3);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_order_spec_token4);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_insert_statement_token3);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_ttl_token1);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_update_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_update_token2);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_update_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_use_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_priviledge_token1);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_priviledge_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_priviledge_token2);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_priviledge_token3);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_priviledge_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_priviledge_token4);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_priviledge_token5);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_priviledge_token6);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_priviledge_token7);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_resource_token3);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_resource_token4);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_drop_aggregate_token1);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token1);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token2);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_drop_trigger_token1);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_drop_type_token1);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token2);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token3);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token4);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token5);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token6);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token1);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_column_not_null_token1);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_materialized_view_options_token1);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_data_type_name_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(630);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 737:
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
    case 738:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(483);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_return_mode_token1);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_return_mode_token2);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token1);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_durable_writes_token1);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_role_with_options_token1);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_role_with_options_token2);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_role_with_options_token3);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_role_with_options_token4);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
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
          lookahead == 'b') ADVANCE(712);
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
          lookahead == 'd') ADVANCE(750);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(740);
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
          lookahead == 'e') ADVANCE(718);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(737);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(744);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(722);
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
          lookahead == 'e') ADVANCE(661);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(613);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(655);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(638);
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
          lookahead == 'e') ADVANCE(684);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
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
          lookahead == 't') ADVANCE(730);
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
          lookahead == 'f') ADVANCE(615);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(760);
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
          lookahead == 'i') ADVANCE(708);
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
          lookahead == 'l') ADVANCE(720);
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
          lookahead == 'l') ADVANCE(651);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(668);
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
          lookahead == 'n') ADVANCE(726);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(714);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(619);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(682);
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
          lookahead == 'n') ADVANCE(645);
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
          lookahead == 'p') ADVANCE(732);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(627);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(653);
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
          lookahead == 'r') ADVANCE(716);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(746);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(671);
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
          lookahead == 's') ADVANCE(647);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(649);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(617);
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
          lookahead == 't') ADVANCE(657);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(728);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(686);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(736);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(724);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(710);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(748);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(742);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(734);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(663);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(629);
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
          lookahead == 'y') ADVANCE(703);
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
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 552},
  [70] = {.lex_state = 552},
  [71] = {.lex_state = 552},
  [72] = {.lex_state = 552},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 552},
  [75] = {.lex_state = 552},
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
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 552},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 552},
  [93] = {.lex_state = 552},
  [94] = {.lex_state = 552},
  [95] = {.lex_state = 553},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 552},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 552},
  [102] = {.lex_state = 552},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 552},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 552},
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
  [170] = {.lex_state = 552},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 552},
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
  [201] = {.lex_state = 552},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 552},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 552},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 552},
  [213] = {.lex_state = 552},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 552},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 552},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 552},
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
  [403] = {.lex_state = 1},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 552},
  [406] = {.lex_state = 552},
  [407] = {.lex_state = 552},
  [408] = {.lex_state = 552},
  [409] = {.lex_state = 552},
  [410] = {.lex_state = 552},
  [411] = {.lex_state = 552},
  [412] = {.lex_state = 552},
  [413] = {.lex_state = 552},
  [414] = {.lex_state = 1},
  [415] = {.lex_state = 1},
  [416] = {.lex_state = 1},
  [417] = {.lex_state = 41},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 1},
  [420] = {.lex_state = 1},
  [421] = {.lex_state = 42},
  [422] = {.lex_state = 552},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 41},
  [425] = {.lex_state = 41},
  [426] = {.lex_state = 552},
  [427] = {.lex_state = 552},
  [428] = {.lex_state = 41},
  [429] = {.lex_state = 552},
  [430] = {.lex_state = 552},
  [431] = {.lex_state = 552},
  [432] = {.lex_state = 552},
  [433] = {.lex_state = 552},
  [434] = {.lex_state = 552},
  [435] = {.lex_state = 552},
  [436] = {.lex_state = 552},
  [437] = {.lex_state = 552},
  [438] = {.lex_state = 552},
  [439] = {.lex_state = 552},
  [440] = {.lex_state = 552},
  [441] = {.lex_state = 552},
  [442] = {.lex_state = 18},
  [443] = {.lex_state = 18},
  [444] = {.lex_state = 18},
  [445] = {.lex_state = 18},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 14},
  [448] = {.lex_state = 552},
  [449] = {.lex_state = 14},
  [450] = {.lex_state = 14},
  [451] = {.lex_state = 10},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 11},
  [454] = {.lex_state = 552},
  [455] = {.lex_state = 10},
  [456] = {.lex_state = 13},
  [457] = {.lex_state = 41},
  [458] = {.lex_state = 10},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 12},
  [461] = {.lex_state = 10},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 19},
  [464] = {.lex_state = 552},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 15},
  [467] = {.lex_state = 10},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 10},
  [473] = {.lex_state = 15},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 15},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 19},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 24},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 17},
  [490] = {.lex_state = 17},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 17},
  [496] = {.lex_state = 17},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 21},
  [501] = {.lex_state = 17},
  [502] = {.lex_state = 17},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 21},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 17},
  [513] = {.lex_state = 17},
  [514] = {.lex_state = 17},
  [515] = {.lex_state = 17},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 17},
  [519] = {.lex_state = 10},
  [520] = {.lex_state = 17},
  [521] = {.lex_state = 26},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 10},
  [524] = {.lex_state = 17},
  [525] = {.lex_state = 17},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 10},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 17},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 17},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 22},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 10},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 10},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 10},
  [557] = {.lex_state = 16},
  [558] = {.lex_state = 10},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 20},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 10},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 20},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 10},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 20},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 25},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
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
  [591] = {.lex_state = 20},
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
  [602] = {.lex_state = 10},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 10},
  [607] = {.lex_state = 10},
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
  [628] = {.lex_state = 10},
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
  [641] = {.lex_state = 10},
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
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 553},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 553},
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
  [685] = {.lex_state = 10},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 10},
  [693] = {.lex_state = 20},
  [694] = {.lex_state = 10},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 10},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 10},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
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
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 10},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 10},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 20},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 10},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 10},
  [737] = {.lex_state = 10},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 10},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 10},
  [745] = {.lex_state = 10},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 10},
  [748] = {.lex_state = 10},
  [749] = {.lex_state = 10},
  [750] = {.lex_state = 10},
  [751] = {.lex_state = 10},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 10},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 553},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 10},
  [759] = {.lex_state = 10},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 10},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 10},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 10},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 10},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 10},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 10},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 10},
  [778] = {.lex_state = 20},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 20},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 20},
  [785] = {.lex_state = 20},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 10},
  [790] = {.lex_state = 10},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 20},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 10},
  [796] = {.lex_state = 10},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 20},
  [800] = {.lex_state = 20},
  [801] = {.lex_state = 27},
  [802] = {.lex_state = 27},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 20},
  [805] = {.lex_state = 10},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 10},
  [808] = {.lex_state = 20},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 10},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 10},
  [813] = {.lex_state = 20},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 10},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 20},
  [820] = {.lex_state = 20},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 10},
  [823] = {.lex_state = 20},
  [824] = {.lex_state = 10},
  [825] = {.lex_state = 20},
  [826] = {.lex_state = 10},
  [827] = {.lex_state = 10},
  [828] = {.lex_state = 10},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 10},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 552},
  [835] = {.lex_state = 10},
  [836] = {.lex_state = 10},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 27},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 553},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 10},
  [844] = {.lex_state = 10},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 553},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 10},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 10},
  [856] = {.lex_state = 10},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 10},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 10},
  [863] = {.lex_state = 13},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 10},
  [866] = {.lex_state = 10},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 10},
  [871] = {.lex_state = 10},
  [872] = {.lex_state = 10},
  [873] = {.lex_state = 10},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 10},
  [876] = {.lex_state = 10},
  [877] = {.lex_state = 10},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 10},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 10},
  [884] = {.lex_state = 10},
  [885] = {.lex_state = 10},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 10},
  [888] = {.lex_state = 10},
  [889] = {.lex_state = 10},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 10},
  [892] = {.lex_state = 10},
  [893] = {.lex_state = 10},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 10},
  [896] = {.lex_state = 10},
  [897] = {.lex_state = 10},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 10},
  [901] = {.lex_state = 10},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 10},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 10},
  [907] = {.lex_state = 10},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 10},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 10},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 10},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 10},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 10},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 10},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 10},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 10},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 10},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 10},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 10},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 10},
  [952] = {.lex_state = 10},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 10},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 0},
  [964] = {.lex_state = 0},
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
  [977] = {.lex_state = 0},
  [978] = {.lex_state = 553},
  [979] = {.lex_state = 10},
  [980] = {.lex_state = 0},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 0},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 0},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 10},
  [988] = {.lex_state = 0},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 0},
  [993] = {.lex_state = 0},
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
  [1005] = {.lex_state = 0},
  [1006] = {.lex_state = 0},
  [1007] = {.lex_state = 10},
  [1008] = {.lex_state = 0},
  [1009] = {.lex_state = 0},
  [1010] = {.lex_state = 13},
  [1011] = {.lex_state = 10},
  [1012] = {.lex_state = 0},
  [1013] = {.lex_state = 10},
  [1014] = {.lex_state = 0},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 10},
  [1018] = {.lex_state = 552},
  [1019] = {.lex_state = 10},
  [1020] = {.lex_state = 0},
  [1021] = {.lex_state = 552},
  [1022] = {.lex_state = 0},
  [1023] = {.lex_state = 0},
  [1024] = {.lex_state = 0},
  [1025] = {.lex_state = 0},
  [1026] = {.lex_state = 0},
  [1027] = {.lex_state = 0},
  [1028] = {.lex_state = 10},
  [1029] = {.lex_state = 0},
  [1030] = {.lex_state = 0},
  [1031] = {.lex_state = 13},
  [1032] = {.lex_state = 0},
  [1033] = {.lex_state = 10},
  [1034] = {.lex_state = 0},
  [1035] = {.lex_state = 10},
  [1036] = {.lex_state = 0},
  [1037] = {.lex_state = 0},
  [1038] = {.lex_state = 0},
  [1039] = {.lex_state = 0},
  [1040] = {.lex_state = 0},
  [1041] = {.lex_state = 0},
  [1042] = {.lex_state = 0},
  [1043] = {.lex_state = 10},
  [1044] = {.lex_state = 10},
  [1045] = {.lex_state = 10},
  [1046] = {.lex_state = 0},
  [1047] = {.lex_state = 0},
  [1048] = {.lex_state = 0},
  [1049] = {.lex_state = 0},
  [1050] = {.lex_state = 0},
  [1051] = {.lex_state = 10},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 13},
  [1054] = {.lex_state = 10},
  [1055] = {.lex_state = 0},
  [1056] = {.lex_state = 10},
  [1057] = {.lex_state = 0},
  [1058] = {.lex_state = 10},
  [1059] = {.lex_state = 0},
  [1060] = {.lex_state = 0},
  [1061] = {.lex_state = 0},
  [1062] = {.lex_state = 0},
  [1063] = {.lex_state = 10},
  [1064] = {.lex_state = 10},
  [1065] = {.lex_state = 0},
  [1066] = {.lex_state = 553},
  [1067] = {.lex_state = 0},
  [1068] = {.lex_state = 10},
  [1069] = {.lex_state = 10},
  [1070] = {.lex_state = 0},
  [1071] = {.lex_state = 0},
  [1072] = {.lex_state = 0},
  [1073] = {.lex_state = 0},
  [1074] = {.lex_state = 10},
  [1075] = {.lex_state = 0},
  [1076] = {.lex_state = 0},
  [1077] = {.lex_state = 0},
  [1078] = {.lex_state = 0},
  [1079] = {.lex_state = 0},
  [1080] = {.lex_state = 10},
  [1081] = {.lex_state = 10},
  [1082] = {.lex_state = 0},
  [1083] = {.lex_state = 0},
  [1084] = {.lex_state = 0},
  [1085] = {.lex_state = 0},
  [1086] = {.lex_state = 0},
  [1087] = {.lex_state = 0},
  [1088] = {.lex_state = 10},
  [1089] = {.lex_state = 0},
  [1090] = {.lex_state = 0},
  [1091] = {.lex_state = 10},
  [1092] = {.lex_state = 0},
  [1093] = {.lex_state = 0},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 0},
  [1096] = {.lex_state = 10},
  [1097] = {.lex_state = 0},
  [1098] = {.lex_state = 0},
  [1099] = {.lex_state = 0},
  [1100] = {.lex_state = 10},
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
  [1112] = {.lex_state = 10},
  [1113] = {.lex_state = 0},
  [1114] = {.lex_state = 0},
  [1115] = {.lex_state = 0},
  [1116] = {.lex_state = 0},
  [1117] = {.lex_state = 10},
  [1118] = {.lex_state = 0},
  [1119] = {.lex_state = 10},
  [1120] = {.lex_state = 10},
  [1121] = {.lex_state = 0},
  [1122] = {.lex_state = 0},
  [1123] = {.lex_state = 552},
  [1124] = {.lex_state = 552},
  [1125] = {.lex_state = 0},
  [1126] = {.lex_state = 10},
  [1127] = {.lex_state = 0},
  [1128] = {.lex_state = 0},
  [1129] = {.lex_state = 10},
  [1130] = {.lex_state = 0},
  [1131] = {.lex_state = 0},
  [1132] = {.lex_state = 0},
  [1133] = {.lex_state = 0},
  [1134] = {.lex_state = 0},
  [1135] = {.lex_state = 0},
  [1136] = {.lex_state = 0},
  [1137] = {.lex_state = 0},
  [1138] = {.lex_state = 10},
  [1139] = {.lex_state = 0},
  [1140] = {.lex_state = 0},
  [1141] = {.lex_state = 0},
  [1142] = {.lex_state = 0},
  [1143] = {.lex_state = 10},
  [1144] = {.lex_state = 0},
  [1145] = {.lex_state = 0},
  [1146] = {.lex_state = 10},
  [1147] = {.lex_state = 10},
  [1148] = {.lex_state = 0},
  [1149] = {.lex_state = 0},
  [1150] = {.lex_state = 0},
  [1151] = {.lex_state = 10},
  [1152] = {.lex_state = 0},
  [1153] = {.lex_state = 0},
  [1154] = {.lex_state = 0},
  [1155] = {.lex_state = 0},
  [1156] = {.lex_state = 10},
  [1157] = {.lex_state = 0},
  [1158] = {.lex_state = 0},
  [1159] = {.lex_state = 0},
  [1160] = {.lex_state = 0},
  [1161] = {.lex_state = 10},
  [1162] = {.lex_state = 10},
  [1163] = {.lex_state = 553},
  [1164] = {.lex_state = 0},
  [1165] = {.lex_state = 10},
  [1166] = {.lex_state = 0},
  [1167] = {.lex_state = 10},
  [1168] = {.lex_state = 10},
  [1169] = {.lex_state = 552},
  [1170] = {.lex_state = 0},
  [1171] = {.lex_state = 0},
  [1172] = {.lex_state = 0},
  [1173] = {.lex_state = 0},
  [1174] = {.lex_state = 0},
  [1175] = {.lex_state = 0},
  [1176] = {.lex_state = 0},
  [1177] = {.lex_state = 0},
  [1178] = {.lex_state = 10},
  [1179] = {.lex_state = 10},
  [1180] = {.lex_state = 0},
  [1181] = {.lex_state = 0},
  [1182] = {.lex_state = 0},
  [1183] = {.lex_state = 10},
  [1184] = {.lex_state = 0},
  [1185] = {.lex_state = 0},
  [1186] = {.lex_state = 0},
  [1187] = {.lex_state = 0},
  [1188] = {.lex_state = 10},
  [1189] = {.lex_state = 0},
  [1190] = {.lex_state = 0},
  [1191] = {.lex_state = 553},
  [1192] = {.lex_state = 0},
  [1193] = {.lex_state = 10},
  [1194] = {.lex_state = 0},
  [1195] = {.lex_state = 0},
  [1196] = {.lex_state = 0},
  [1197] = {.lex_state = 0},
  [1198] = {.lex_state = 0},
  [1199] = {.lex_state = 0},
  [1200] = {.lex_state = 0},
  [1201] = {.lex_state = 553},
  [1202] = {.lex_state = 0},
  [1203] = {.lex_state = 0},
  [1204] = {.lex_state = 0},
  [1205] = {.lex_state = 0},
  [1206] = {.lex_state = 10},
  [1207] = {.lex_state = 0},
  [1208] = {.lex_state = 10},
  [1209] = {.lex_state = 0},
  [1210] = {.lex_state = 0},
  [1211] = {.lex_state = 0},
  [1212] = {.lex_state = 552},
  [1213] = {.lex_state = 0},
  [1214] = {.lex_state = 0},
  [1215] = {.lex_state = 0},
  [1216] = {.lex_state = 0},
  [1217] = {.lex_state = 0},
  [1218] = {.lex_state = 0},
  [1219] = {.lex_state = 0},
  [1220] = {.lex_state = 10},
  [1221] = {.lex_state = 0},
  [1222] = {.lex_state = 0},
  [1223] = {.lex_state = 0},
  [1224] = {.lex_state = 10},
  [1225] = {.lex_state = 0},
  [1226] = {.lex_state = 0},
  [1227] = {.lex_state = 0},
  [1228] = {.lex_state = 0},
  [1229] = {.lex_state = 10},
  [1230] = {.lex_state = 0},
  [1231] = {.lex_state = 0},
  [1232] = {.lex_state = 0},
  [1233] = {.lex_state = 10},
  [1234] = {.lex_state = 0},
  [1235] = {.lex_state = 0},
  [1236] = {.lex_state = 10},
  [1237] = {.lex_state = 10},
  [1238] = {.lex_state = 0},
  [1239] = {.lex_state = 0},
  [1240] = {.lex_state = 0},
  [1241] = {.lex_state = 10},
  [1242] = {.lex_state = 10},
  [1243] = {.lex_state = 10},
  [1244] = {.lex_state = 0},
  [1245] = {.lex_state = 0},
  [1246] = {.lex_state = 0},
  [1247] = {.lex_state = 10},
  [1248] = {.lex_state = 552},
  [1249] = {.lex_state = 0},
  [1250] = {.lex_state = 552},
  [1251] = {.lex_state = 552},
  [1252] = {.lex_state = 0},
  [1253] = {.lex_state = 0},
  [1254] = {.lex_state = 0},
  [1255] = {.lex_state = 0},
  [1256] = {.lex_state = 10},
  [1257] = {.lex_state = 0},
  [1258] = {.lex_state = 10},
  [1259] = {.lex_state = 0},
  [1260] = {.lex_state = 552},
  [1261] = {.lex_state = 0},
  [1262] = {.lex_state = 0},
  [1263] = {.lex_state = 10},
  [1264] = {.lex_state = 0},
  [1265] = {.lex_state = 0},
  [1266] = {.lex_state = 0},
  [1267] = {.lex_state = 10},
  [1268] = {.lex_state = 10},
  [1269] = {.lex_state = 10},
  [1270] = {.lex_state = 553},
  [1271] = {.lex_state = 553},
  [1272] = {.lex_state = 0},
  [1273] = {.lex_state = 0},
  [1274] = {.lex_state = 0},
  [1275] = {.lex_state = 10},
  [1276] = {.lex_state = 553},
  [1277] = {.lex_state = 0},
  [1278] = {.lex_state = 0},
  [1279] = {.lex_state = 10},
  [1280] = {.lex_state = 0},
  [1281] = {.lex_state = 0},
  [1282] = {.lex_state = 0},
  [1283] = {.lex_state = 0},
  [1284] = {.lex_state = 10},
  [1285] = {.lex_state = 0},
  [1286] = {.lex_state = 0},
  [1287] = {.lex_state = 0},
  [1288] = {.lex_state = 0},
  [1289] = {.lex_state = 0},
  [1290] = {.lex_state = 0},
  [1291] = {.lex_state = 0},
  [1292] = {.lex_state = 0},
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
  [1304] = {.lex_state = 553},
  [1305] = {.lex_state = 0},
  [1306] = {.lex_state = 0},
  [1307] = {.lex_state = 0},
  [1308] = {.lex_state = 0},
  [1309] = {.lex_state = 552},
  [1310] = {.lex_state = 0},
  [1311] = {.lex_state = 0},
  [1312] = {.lex_state = 10},
  [1313] = {.lex_state = 0},
  [1314] = {.lex_state = 0},
  [1315] = {.lex_state = 0},
  [1316] = {.lex_state = 0},
  [1317] = {.lex_state = 0},
  [1318] = {.lex_state = 0},
  [1319] = {.lex_state = 0},
  [1320] = {.lex_state = 10},
  [1321] = {.lex_state = 10},
  [1322] = {.lex_state = 0},
  [1323] = {.lex_state = 10},
  [1324] = {.lex_state = 10},
  [1325] = {.lex_state = 0},
  [1326] = {.lex_state = 0},
  [1327] = {.lex_state = 10},
  [1328] = {.lex_state = 0},
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
  [1339] = {.lex_state = 10},
  [1340] = {.lex_state = 553},
  [1341] = {.lex_state = 10},
  [1342] = {.lex_state = 10},
  [1343] = {.lex_state = 10},
  [1344] = {.lex_state = 10},
  [1345] = {.lex_state = 41},
  [1346] = {.lex_state = 10},
  [1347] = {.lex_state = 10},
  [1348] = {.lex_state = 0},
  [1349] = {.lex_state = 10},
  [1350] = {.lex_state = 0},
  [1351] = {.lex_state = 0},
  [1352] = {.lex_state = 0},
  [1353] = {.lex_state = 10},
  [1354] = {.lex_state = 10},
  [1355] = {.lex_state = 10},
  [1356] = {.lex_state = 553},
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
    [aux_sym_order_spec_token4] = ACTIONS(1),
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
    [aux_sym_alter_table_add_token1] = ACTIONS(1),
    [aux_sym_alter_table_drop_compact_storage_token1] = ACTIONS(1),
    [aux_sym_alter_table_drop_compact_storage_token2] = ACTIONS(1),
    [aux_sym_alter_table_rename_token1] = ACTIONS(1),
    [aux_sym_user_super_user_token1] = ACTIONS(1),
    [aux_sym_apply_batch_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(1351),
    [sym__statement] = STATE(2),
    [sym_select_statement] = STATE(288),
    [sym_delete_statement] = STATE(288),
    [sym_begin_batch] = STATE(544),
    [sym_insert_statement] = STATE(288),
    [sym_truncate] = STATE(288),
    [sym_create_index] = STATE(288),
    [sym_drop_index] = STATE(288),
    [sym_update] = STATE(288),
    [sym_use] = STATE(288),
    [sym_grant] = STATE(288),
    [sym_revoke] = STATE(288),
    [sym_list_roles] = STATE(288),
    [sym_list_permissions] = STATE(288),
    [sym_drop_aggregate] = STATE(288),
    [sym_drop_materialized_view] = STATE(288),
    [sym_drop_function] = STATE(288),
    [sym_drop_keyspace] = STATE(288),
    [sym_drop_role] = STATE(288),
    [sym_drop_table] = STATE(288),
    [sym_drop_trigger] = STATE(288),
    [sym_drop_type] = STATE(288),
    [sym_drop_user] = STATE(288),
    [sym_create_aggregate] = STATE(288),
    [sym_create_materialized_view] = STATE(288),
    [sym_create_function] = STATE(288),
    [sym_create_keyspace] = STATE(288),
    [sym_create_role] = STATE(288),
    [sym_create_table] = STATE(288),
    [sym_create_trigger] = STATE(288),
    [sym_create_type] = STATE(288),
    [sym_create_user] = STATE(288),
    [sym_alter_materialized_view] = STATE(288),
    [sym_alter_keyspace] = STATE(288),
    [sym_alter_role] = STATE(288),
    [sym_alter_table] = STATE(288),
    [sym_alter_type] = STATE(288),
    [sym_alter_user] = STATE(288),
    [sym_apply_batch] = STATE(288),
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
    STATE(544), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(288), 37,
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
    STATE(544), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(288), 37,
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
    ACTIONS(83), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_limit_spec_token1,
      anon_sym_COMMA,
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
  [253] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(1055), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [288] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(1093), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [323] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(1221), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [358] = 3,
    STATE(73), 1,
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
  [393] = 3,
    STATE(73), 1,
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
  [428] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(940), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [463] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(1133), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [498] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(934), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [533] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(242), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [568] = 3,
    STATE(73), 1,
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
  [603] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(999), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [638] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(127), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [673] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(1003), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [708] = 3,
    STATE(73), 1,
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
  [743] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(1194), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [778] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(565), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [813] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(1185), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [848] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(1190), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [883] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(1029), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [918] = 3,
    STATE(73), 1,
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
  [953] = 3,
    STATE(73), 1,
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
  [988] = 3,
    STATE(73), 1,
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
  [1023] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(1152), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1058] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(147), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1093] = 3,
    STATE(73), 1,
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
  [1128] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(571), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1163] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(1059), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1198] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(776), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1233] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(1109), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1268] = 3,
    STATE(73), 1,
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
  [1303] = 3,
    STATE(73), 1,
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
  [1338] = 3,
    STATE(73), 1,
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
  [1373] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(1216), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1408] = 3,
    STATE(73), 1,
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
  [1443] = 3,
    STATE(73), 1,
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
  [1478] = 3,
    STATE(73), 1,
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
  [1513] = 3,
    STATE(73), 1,
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
  [1548] = 3,
    STATE(73), 1,
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
  [1583] = 3,
    STATE(73), 1,
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
  [1618] = 3,
    STATE(73), 1,
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
  [1653] = 3,
    STATE(73), 1,
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
  [1688] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(1089), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1723] = 3,
    STATE(73), 1,
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
  [1758] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(1090), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1793] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(590), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1828] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(1200), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1863] = 3,
    STATE(73), 1,
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
  [1898] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(529), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1933] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(886), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1968] = 3,
    STATE(73), 1,
      sym_data_type_name,
    STATE(811), 1,
      sym_data_type,
    ACTIONS(85), 26,
      aux_sym_timestamp_token1,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [2003] = 3,
    STATE(73), 1,
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
  [2038] = 2,
    STATE(829), 1,
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
  [2070] = 2,
    STATE(647), 1,
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
  [2102] = 2,
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
  [2132] = 3,
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
  [2164] = 3,
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
  [2195] = 1,
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
  [2222] = 3,
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
  [2253] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(63), 1,
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
  [2284] = 1,
    ACTIONS(102), 24,
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
  [2311] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(61), 1,
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
  [2342] = 1,
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
  [2369] = 1,
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
  [2395] = 8,
    ACTIONS(112), 1,
      aux_sym_select_statement_token4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    STATE(93), 1,
      sym_where_spec,
    STATE(113), 1,
      sym_order_spec,
    STATE(236), 1,
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
  [2435] = 3,
    ACTIONS(122), 1,
      aux_sym_relation_elements_token1,
    STATE(70), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(120), 21,
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
  [2465] = 8,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(127), 1,
      aux_sym_select_statement_token4,
    STATE(90), 1,
      sym_where_spec,
    STATE(102), 1,
      sym_order_spec,
    STATE(203), 1,
      sym_limit_spec,
    ACTIONS(125), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2505] = 8,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(131), 1,
      aux_sym_select_statement_token4,
    STATE(92), 1,
      sym_where_spec,
    STATE(101), 1,
      sym_order_spec,
    STATE(216), 1,
      sym_limit_spec,
    ACTIONS(129), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2545] = 3,
    ACTIONS(135), 1,
      anon_sym_LT,
    STATE(91), 1,
      sym_data_type_definition,
    ACTIONS(133), 21,
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
  [2575] = 1,
    ACTIONS(137), 22,
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
  [2600] = 1,
    ACTIONS(139), 22,
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
  [2625] = 3,
    ACTIONS(143), 1,
      aux_sym_relation_elements_token1,
    STATE(70), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(141), 20,
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
  [2654] = 8,
    ACTIONS(149), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(151), 1,
      sym_object_name,
    STATE(104), 1,
      sym_table_option_item,
    STATE(150), 1,
      sym_table_options,
    STATE(349), 1,
      sym_clustering_order,
    STATE(1079), 1,
      sym_table_option_name,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(147), 14,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2693] = 1,
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
  [2718] = 3,
    ACTIONS(143), 1,
      aux_sym_relation_elements_token1,
    STATE(76), 1,
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
  [2747] = 1,
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
  [2772] = 1,
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
  [2797] = 1,
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
  [2822] = 1,
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
  [2847] = 1,
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
  [2872] = 1,
    ACTIONS(120), 22,
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
  [2897] = 1,
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
  [2946] = 1,
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
  [2970] = 1,
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
  [2994] = 6,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(175), 1,
      aux_sym_select_statement_token4,
    STATE(107), 1,
      sym_order_spec,
    STATE(212), 1,
      sym_limit_spec,
    ACTIONS(173), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [3052] = 6,
    ACTIONS(112), 1,
      aux_sym_select_statement_token4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    STATE(113), 1,
      sym_order_spec,
    STATE(236), 1,
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
  [3086] = 6,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(118), 1,
      aux_sym_order_spec_token1,
    ACTIONS(127), 1,
      aux_sym_select_statement_token4,
    STATE(102), 1,
      sym_order_spec,
    STATE(203), 1,
      sym_limit_spec,
    ACTIONS(125), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(179), 20,
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
  [3143] = 2,
    ACTIONS(183), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
    ACTIONS(181), 18,
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
  [3168] = 2,
    ACTIONS(187), 1,
      anon_sym_DOT,
    ACTIONS(185), 19,
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
  [3193] = 2,
    ACTIONS(191), 1,
      aux_sym_relation_element_token1,
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
  [3218] = 2,
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
  [3243] = 3,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_relation_element_repeat1,
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
  [3270] = 2,
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
  [3295] = 4,
    ACTIONS(112), 1,
      aux_sym_select_statement_token4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    STATE(236), 1,
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
  [3323] = 4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(175), 1,
      aux_sym_select_statement_token4,
    STATE(212), 1,
      sym_limit_spec,
    ACTIONS(173), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3351] = 3,
    ACTIONS(208), 1,
      aux_sym_relation_elements_token1,
    STATE(117), 1,
      aux_sym_materialized_view_options_repeat1,
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
  [3377] = 3,
    ACTIONS(208), 1,
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
  [3403] = 1,
    ACTIONS(212), 19,
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
  [3425] = 4,
    ACTIONS(216), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(218), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(388), 1,
      sym_using_ttl_timestamp,
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
  [3453] = 4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(222), 1,
      aux_sym_select_statement_token4,
    STATE(227), 1,
      sym_limit_spec,
    ACTIONS(220), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3481] = 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3503] = 1,
    ACTIONS(226), 19,
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
  [3525] = 1,
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
  [3547] = 4,
    ACTIONS(218), 1,
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
  [3575] = 1,
    ACTIONS(232), 19,
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
  [3597] = 4,
    ACTIONS(114), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(127), 1,
      aux_sym_select_statement_token4,
    STATE(203), 1,
      sym_limit_spec,
    ACTIONS(125), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3625] = 1,
    ACTIONS(234), 19,
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
  [3647] = 1,
    ACTIONS(236), 19,
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
  [3669] = 4,
    ACTIONS(218), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(240), 1,
      aux_sym_delete_statement_token2,
    STATE(328), 1,
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
  [3697] = 3,
    ACTIONS(244), 1,
      aux_sym_relation_elements_token1,
    STATE(117), 1,
      aux_sym_materialized_view_options_repeat1,
    ACTIONS(242), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [3723] = 3,
    STATE(255), 1,
      sym_user_super_user,
    ACTIONS(249), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
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
  [3749] = 1,
    ACTIONS(251), 19,
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
  [3771] = 3,
    STATE(270), 1,
      sym_user_super_user,
    ACTIONS(249), 2,
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
  [3797] = 3,
    STATE(283), 1,
      sym_user_super_user,
    ACTIONS(249), 2,
      aux_sym_role_with_options_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(255), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3823] = 2,
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
  [3847] = 1,
    ACTIONS(261), 19,
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
  [3869] = 3,
    ACTIONS(265), 1,
      aux_sym_delete_statement_token2,
    STATE(340), 1,
      sym_if_spec,
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
  [3894] = 3,
    ACTIONS(269), 1,
      aux_sym_materialized_view_options_token1,
    STATE(312), 1,
      sym_with_element,
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
  [3919] = 1,
    ACTIONS(271), 18,
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
  [3940] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [3965] = 3,
    ACTIONS(279), 1,
      aux_sym_delete_statement_token2,
    STATE(280), 1,
      sym_if_spec,
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
  [3990] = 3,
    ACTIONS(283), 1,
      aux_sym_delete_statement_token2,
    STATE(290), 1,
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
  [4015] = 1,
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
  [4036] = 3,
    ACTIONS(218), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(285), 1,
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
  [4061] = 2,
    ACTIONS(291), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(289), 17,
      ts_builtin_sym_end,
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
  [4084] = 3,
    ACTIONS(295), 1,
      aux_sym_delete_statement_token2,
    STATE(302), 1,
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
  [4109] = 1,
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
  [4130] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [4155] = 3,
    ACTIONS(303), 1,
      aux_sym_delete_statement_token2,
    STATE(286), 1,
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
  [4180] = 3,
    ACTIONS(307), 1,
      aux_sym_materialized_view_options_token1,
    STATE(247), 1,
      sym_materialized_view_options,
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
  [4205] = 2,
    ACTIONS(309), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(289), 17,
      ts_builtin_sym_end,
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
  [4228] = 3,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_relation_element_repeat1,
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
  [4253] = 3,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym_relation_element_repeat1,
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
  [4278] = 3,
    ACTIONS(319), 1,
      aux_sym_delete_statement_token2,
    STATE(396), 1,
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
  [4303] = 1,
    ACTIONS(242), 18,
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
  [4324] = 1,
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
  [4345] = 1,
    ACTIONS(323), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4366] = 1,
    ACTIONS(325), 18,
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
    ACTIONS(218), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(267), 1,
      sym_using_ttl_timestamp,
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
  [4412] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [4437] = 3,
    ACTIONS(333), 1,
      aux_sym_relation_elements_token1,
    STATE(154), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [4462] = 3,
    ACTIONS(269), 1,
      aux_sym_materialized_view_options_token1,
    STATE(265), 1,
      sym_with_element,
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
  [4487] = 3,
    ACTIONS(339), 1,
      aux_sym_clustering_order_token1,
    STATE(263), 1,
      sym_clustering_order,
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
  [4512] = 3,
    ACTIONS(343), 1,
      aux_sym_delete_statement_token2,
    STATE(321), 1,
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
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4537] = 3,
    ACTIONS(347), 1,
      aux_sym_relation_elements_token1,
    STATE(183), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(345), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4562] = 1,
    ACTIONS(349), 18,
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
  [4583] = 3,
    ACTIONS(333), 1,
      aux_sym_relation_elements_token1,
    STATE(182), 1,
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
  [4608] = 3,
    ACTIONS(355), 1,
      aux_sym_create_index_token3,
    ACTIONS(357), 1,
      aux_sym_list_roles_token2,
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
  [4633] = 3,
    ACTIONS(361), 1,
      aux_sym_list_roles_token2,
    ACTIONS(363), 1,
      aux_sym_list_roles_token3,
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
  [4658] = 3,
    ACTIONS(367), 1,
      aux_sym_materialized_view_options_token1,
    STATE(275), 1,
      sym_role_with,
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
  [4683] = 3,
    ACTIONS(371), 1,
      aux_sym_delete_statement_token2,
    STATE(329), 1,
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
  [4708] = 3,
    ACTIONS(375), 1,
      aux_sym_delete_statement_token2,
    STATE(307), 1,
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
  [4733] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [4758] = 1,
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
  [4779] = 1,
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
  [4800] = 1,
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
  [4821] = 3,
    ACTIONS(269), 1,
      aux_sym_materialized_view_options_token1,
    STATE(260), 1,
      sym_with_element,
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
  [4846] = 3,
    ACTIONS(307), 1,
      aux_sym_materialized_view_options_token1,
    STATE(326), 1,
      sym_materialized_view_options,
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
  [4871] = 1,
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
  [4892] = 3,
    ACTIONS(307), 1,
      aux_sym_materialized_view_options_token1,
    STATE(324), 1,
      sym_materialized_view_options,
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
  [4917] = 3,
    ACTIONS(393), 1,
      aux_sym_delete_statement_token2,
    STATE(252), 1,
      sym_if_spec,
    ACTIONS(391), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4942] = 1,
    ACTIONS(395), 18,
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
  [4963] = 8,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      sym__decimal_literal,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    ACTIONS(405), 1,
      anon_sym_LBRACE,
    STATE(656), 1,
      sym_expression,
    STATE(1130), 1,
      sym_expression_list,
    STATE(710), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [4998] = 1,
    ACTIONS(407), 18,
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
  [5019] = 1,
    ACTIONS(409), 18,
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
  [5040] = 3,
    ACTIONS(413), 1,
      aux_sym_relation_elements_token1,
    STATE(181), 1,
      aux_sym_materialized_view_options_repeat1,
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
  [5065] = 3,
    ACTIONS(417), 1,
      aux_sym_relation_elements_token1,
    STATE(175), 1,
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
  [5090] = 3,
    ACTIONS(417), 1,
      aux_sym_relation_elements_token1,
    STATE(189), 1,
      aux_sym_if_condition_list_repeat1,
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
  [5115] = 8,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      sym__decimal_literal,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    ACTIONS(405), 1,
      anon_sym_LBRACE,
    STATE(656), 1,
      sym_expression,
    STATE(1283), 1,
      sym_expression_list,
    STATE(710), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [5150] = 3,
    ACTIONS(307), 1,
      aux_sym_materialized_view_options_token1,
    STATE(306), 1,
      sym_materialized_view_options,
    ACTIONS(421), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5175] = 3,
    ACTIONS(425), 1,
      aux_sym_relation_elements_token1,
    STATE(178), 1,
      aux_sym_role_with_repeat1,
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
  [5200] = 3,
    ACTIONS(430), 1,
      aux_sym_delete_statement_token2,
    STATE(381), 1,
      sym_if_spec,
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
  [5225] = 1,
    ACTIONS(432), 18,
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
  [5246] = 3,
    ACTIONS(436), 1,
      aux_sym_relation_elements_token1,
    STATE(117), 1,
      aux_sym_materialized_view_options_repeat1,
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
  [5271] = 3,
    ACTIONS(440), 1,
      aux_sym_relation_elements_token1,
    STATE(182), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [5296] = 3,
    ACTIONS(347), 1,
      aux_sym_relation_elements_token1,
    STATE(178), 1,
      aux_sym_role_with_repeat1,
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
  [5321] = 1,
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
  [5342] = 3,
    ACTIONS(367), 1,
      aux_sym_materialized_view_options_token1,
    STATE(266), 1,
      sym_role_with,
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
  [5367] = 3,
    ACTIONS(218), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(353), 1,
      sym_using_ttl_timestamp,
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
  [5392] = 3,
    ACTIONS(453), 1,
      anon_sym_DOT,
    ACTIONS(455), 1,
      aux_sym_materialized_view_options_token1,
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
  [5417] = 1,
    ACTIONS(457), 18,
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
  [5438] = 3,
    ACTIONS(461), 1,
      aux_sym_relation_elements_token1,
    STATE(189), 1,
      aux_sym_if_condition_list_repeat1,
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
  [5463] = 3,
    ACTIONS(307), 1,
      aux_sym_materialized_view_options_token1,
    STATE(268), 1,
      sym_materialized_view_options,
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
  [5488] = 3,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
  [5513] = 3,
    ACTIONS(307), 1,
      aux_sym_materialized_view_options_token1,
    STATE(274), 1,
      sym_materialized_view_options,
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
  [5538] = 3,
    ACTIONS(307), 1,
      aux_sym_materialized_view_options_token1,
    STATE(292), 1,
      sym_materialized_view_options,
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
  [5563] = 3,
    ACTIONS(477), 1,
      aux_sym_delete_statement_token2,
    STATE(313), 1,
      sym_if_spec,
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
  [5588] = 3,
    ACTIONS(481), 1,
      aux_sym_delete_statement_token2,
    STATE(246), 1,
      sym_if_spec,
    ACTIONS(479), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
    ACTIONS(485), 1,
      aux_sym_delete_statement_token2,
    STATE(243), 1,
      sym_if_spec,
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
  [5638] = 3,
    ACTIONS(307), 1,
      aux_sym_materialized_view_options_token1,
    STATE(390), 1,
      sym_materialized_view_options,
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
  [5663] = 3,
    ACTIONS(269), 1,
      aux_sym_materialized_view_options_token1,
    STATE(337), 1,
      sym_with_element,
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
  [5688] = 3,
    ACTIONS(493), 1,
      aux_sym_delete_statement_token2,
    STATE(262), 1,
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
  [5713] = 3,
    ACTIONS(497), 1,
      aux_sym_delete_statement_token2,
    STATE(248), 1,
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
  [5738] = 1,
    ACTIONS(499), 18,
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
  [5759] = 3,
    ACTIONS(367), 1,
      aux_sym_materialized_view_options_token1,
    STATE(318), 1,
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
  [5784] = 2,
    ACTIONS(175), 1,
      aux_sym_select_statement_token4,
    ACTIONS(173), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5806] = 2,
    ACTIONS(505), 1,
      aux_sym_relation_elements_token1,
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
  [5828] = 1,
    ACTIONS(438), 17,
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
  [5848] = 2,
    ACTIONS(509), 1,
      aux_sym_list_roles_token2,
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
  [5870] = 2,
    ACTIONS(513), 1,
      aux_sym_list_roles_token3,
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
  [5892] = 1,
    ACTIONS(515), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [5912] = 1,
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
  [5932] = 1,
    ACTIONS(519), 17,
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
  [5952] = 1,
    ACTIONS(459), 17,
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
  [5972] = 2,
    ACTIONS(222), 1,
      aux_sym_select_statement_token4,
    ACTIONS(220), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5994] = 7,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      sym__decimal_literal,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    ACTIONS(405), 1,
      anon_sym_LBRACE,
    STATE(726), 1,
      sym_expression,
    STATE(710), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [6026] = 1,
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
  [6046] = 1,
    ACTIONS(423), 17,
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
  [6066] = 2,
    ACTIONS(112), 1,
      aux_sym_select_statement_token4,
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
  [6088] = 2,
    ACTIONS(525), 1,
      aux_sym_relation_elements_token1,
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
  [6110] = 2,
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
  [6132] = 2,
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
  [6154] = 2,
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
  [6176] = 1,
    ACTIONS(539), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [6196] = 1,
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
  [6216] = 2,
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
  [6238] = 2,
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
  [6260] = 1,
    ACTIONS(551), 17,
      ts_builtin_sym_end,
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
  [6280] = 2,
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
  [6302] = 2,
    ACTIONS(559), 1,
      aux_sym_select_statement_token4,
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
  [6324] = 2,
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
  [6346] = 2,
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
  [6368] = 2,
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
  [6390] = 2,
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
  [6412] = 2,
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
  [6434] = 2,
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
  [6456] = 2,
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
  [6478] = 2,
    ACTIONS(591), 1,
      aux_sym_materialized_view_options_token1,
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
  [6500] = 2,
    ACTIONS(127), 1,
      aux_sym_select_statement_token4,
    ACTIONS(125), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6522] = 2,
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
  [6544] = 1,
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
  [6564] = 2,
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
  [6586] = 2,
    ACTIONS(605), 1,
      anon_sym_DOT,
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
  [6608] = 2,
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
  [6630] = 1,
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
  [6649] = 1,
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
  [6668] = 1,
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
  [6687] = 1,
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
  [6706] = 1,
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
  [6725] = 1,
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
  [6744] = 1,
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
  [6763] = 1,
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
  [6782] = 1,
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
  [6801] = 1,
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
  [6820] = 1,
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
  [6839] = 1,
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
  [6858] = 1,
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
  [6877] = 1,
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
  [6896] = 1,
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
  [6915] = 1,
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
  [6934] = 1,
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
  [6953] = 1,
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
  [6972] = 1,
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
  [6991] = 1,
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
  [7010] = 1,
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
  [7029] = 1,
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
  [7048] = 1,
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
  [7067] = 1,
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
  [7086] = 1,
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
  [7105] = 1,
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
  [7124] = 1,
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
  [7143] = 1,
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
  [7162] = 1,
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
  [7181] = 1,
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
  [7200] = 1,
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
  [7219] = 1,
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
  [7238] = 1,
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
  [7257] = 1,
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
  [7276] = 1,
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
  [7295] = 1,
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
  [7314] = 1,
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
  [7333] = 1,
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
  [7352] = 1,
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
  [7371] = 1,
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
  [7390] = 1,
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
  [7409] = 1,
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
  [7428] = 1,
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
  [7447] = 1,
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
  [7466] = 1,
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
  [7485] = 1,
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
  [7504] = 2,
    ACTIONS(695), 1,
      anon_sym_SEMI,
    ACTIONS(693), 15,
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
  [7525] = 1,
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
  [7544] = 1,
    ACTIONS(479), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7582] = 1,
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
  [7601] = 1,
    ACTIONS(220), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7639] = 1,
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
  [7658] = 1,
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
  [7677] = 1,
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
  [7696] = 1,
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
  [7715] = 1,
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
  [7734] = 1,
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
  [7753] = 1,
    ACTIONS(125), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
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
  [7791] = 1,
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
  [7810] = 1,
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
  [7829] = 1,
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
  [7848] = 1,
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
  [7867] = 1,
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
  [7886] = 1,
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
  [7905] = 1,
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
  [7924] = 1,
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
  [7943] = 1,
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
  [7962] = 1,
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
  [7981] = 1,
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
  [8000] = 1,
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
  [8019] = 1,
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
  [8038] = 1,
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
  [8057] = 1,
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
  [8076] = 1,
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
  [8095] = 1,
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
  [8114] = 1,
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
  [8133] = 1,
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
  [8152] = 1,
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
  [8171] = 1,
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
  [8190] = 1,
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
  [8209] = 1,
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
  [8228] = 1,
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
  [8247] = 1,
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
  [8266] = 1,
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
  [8285] = 1,
    ACTIONS(391), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8304] = 1,
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
  [8323] = 1,
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
  [8342] = 1,
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
  [8361] = 1,
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
  [8380] = 1,
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
  [8399] = 1,
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
  [8418] = 1,
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
  [8437] = 1,
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
  [8456] = 1,
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
  [8475] = 1,
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
  [8494] = 1,
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
  [8513] = 1,
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
  [8532] = 1,
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
  [8551] = 1,
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
  [8570] = 1,
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
  [8589] = 1,
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
  [8608] = 1,
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
  [8627] = 1,
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
  [8646] = 1,
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
  [8665] = 1,
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
  [8684] = 1,
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
  [8703] = 1,
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
  [8722] = 1,
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
  [8741] = 1,
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
  [8760] = 1,
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
  [8779] = 1,
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
  [8798] = 1,
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
  [8817] = 1,
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
  [8836] = 1,
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
  [8855] = 1,
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
  [8874] = 1,
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
  [8893] = 1,
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
  [8912] = 1,
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
  [8931] = 1,
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
  [8950] = 1,
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
  [8969] = 1,
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
  [8988] = 1,
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
  [9007] = 1,
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
  [9026] = 1,
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
  [9045] = 1,
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
  [9064] = 1,
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
  [9083] = 1,
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
  [9102] = 1,
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
  [9121] = 1,
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
  [9140] = 1,
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
  [9159] = 1,
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
  [9178] = 1,
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
  [9197] = 1,
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
  [9216] = 1,
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
  [9235] = 1,
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
  [9254] = 1,
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
  [9273] = 1,
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
  [9292] = 1,
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
  [9311] = 1,
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
  [9330] = 1,
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
  [9349] = 1,
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
  [9368] = 1,
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
  [9387] = 1,
    ACTIONS(173), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_priviledge_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9406] = 1,
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
  [9425] = 1,
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
  [9444] = 1,
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
  [9463] = 1,
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
  [9482] = 1,
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
  [9501] = 1,
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
  [9520] = 1,
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
  [9539] = 1,
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
  [9558] = 1,
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
  [9577] = 1,
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
  [9596] = 1,
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
  [9615] = 1,
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
  [9634] = 1,
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
  [9653] = 1,
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
  [9672] = 1,
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
  [9691] = 7,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    ACTIONS(405), 1,
      anon_sym_LBRACE,
    ACTIONS(887), 1,
      sym_object_name,
    STATE(815), 1,
      sym_constant,
    ACTIONS(401), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    STATE(487), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(399), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9721] = 1,
    ACTIONS(889), 15,
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
  [9739] = 5,
    ACTIONS(401), 1,
      sym__decimal_literal,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(359), 1,
      sym_init_cond_definition,
    STATE(184), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9764] = 5,
    ACTIONS(401), 1,
      sym__decimal_literal,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(327), 1,
      sym_init_cond_definition,
    STATE(184), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9789] = 5,
    ACTIONS(401), 1,
      sym__decimal_literal,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(393), 1,
      sym_init_cond_definition,
    STATE(184), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9814] = 5,
    ACTIONS(401), 1,
      sym__decimal_literal,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(310), 1,
      sym_init_cond_definition,
    STATE(184), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9839] = 5,
    ACTIONS(401), 1,
      sym__decimal_literal,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(765), 1,
      sym_init_cond_definition,
    STATE(184), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9864] = 5,
    ACTIONS(401), 1,
      sym__decimal_literal,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym_init_cond_definition,
    STATE(184), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9889] = 5,
    ACTIONS(401), 1,
      sym__decimal_literal,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym_init_cond_definition,
    STATE(184), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9914] = 5,
    ACTIONS(401), 1,
      sym__decimal_literal,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(249), 1,
      sym_init_cond_definition,
    STATE(184), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9939] = 5,
    ACTIONS(401), 1,
      sym__decimal_literal,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    STATE(351), 1,
      sym_init_cond_definition,
    STATE(184), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9964] = 7,
    ACTIONS(893), 1,
      anon_sym_LPAREN,
    ACTIONS(895), 1,
      sym_object_name,
    STATE(633), 1,
      sym_init_cond_hash_item,
    STATE(635), 1,
      sym_init_cond_list,
    STATE(643), 1,
      sym_constant,
    ACTIONS(401), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(399), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9992] = 6,
    ACTIONS(897), 1,
      anon_sym_STAR,
    ACTIONS(899), 1,
      sym_object_name,
    STATE(1036), 1,
      sym_function_args,
    STATE(658), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(401), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(399), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10018] = 5,
    ACTIONS(899), 1,
      sym_object_name,
    STATE(1294), 1,
      sym_function_args,
    STATE(658), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(401), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(399), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10041] = 11,
    ACTIONS(901), 1,
      aux_sym_truncate_token2,
    ACTIONS(903), 1,
      aux_sym_create_index_token2,
    ACTIONS(905), 1,
      aux_sym_resource_token2,
    ACTIONS(907), 1,
      aux_sym_resource_token5,
    ACTIONS(909), 1,
      aux_sym_resource_token6,
    ACTIONS(911), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(913), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(915), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(917), 1,
      aux_sym_drop_type_token1,
    ACTIONS(919), 1,
      aux_sym_drop_user_token1,
    ACTIONS(921), 1,
      aux_sym_create_aggregate_token1,
  [10075] = 7,
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
    STATE(272), 1,
      sym_alter_table_operation,
    STATE(273), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10101] = 4,
    ACTIONS(933), 1,
      sym_object_name,
    STATE(75), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(401), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(399), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10121] = 4,
    ACTIONS(935), 1,
      sym_object_name,
    STATE(695), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(401), 3,
      aux_sym_constant_token2,
      sym__decimal_literal,
      sym__boolean_literal,
    ACTIONS(399), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10141] = 4,
    ACTIONS(939), 1,
      aux_sym_priviledge_token1,
    ACTIONS(941), 1,
      aux_sym_resource_token4,
    STATE(155), 1,
      sym_priviledge,
    ACTIONS(937), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10161] = 4,
    ACTIONS(401), 1,
      sym__decimal_literal,
    ACTIONS(893), 1,
      anon_sym_LPAREN,
    STATE(767), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10181] = 6,
    ACTIONS(925), 1,
      aux_sym_drop_index_token1,
    ACTIONS(927), 1,
      aux_sym_materialized_view_options_token1,
    ACTIONS(929), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(931), 1,
      aux_sym_alter_table_rename_token1,
    STATE(257), 1,
      sym_alter_table_operation,
    STATE(273), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10204] = 3,
    ACTIONS(939), 1,
      aux_sym_priviledge_token1,
    STATE(1292), 1,
      sym_priviledge,
    ACTIONS(937), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10221] = 3,
    ACTIONS(939), 1,
      aux_sym_priviledge_token1,
    STATE(1291), 1,
      sym_priviledge,
    ACTIONS(937), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_priviledge_token3,
      aux_sym_priviledge_token4,
      aux_sym_priviledge_token5,
      aux_sym_priviledge_token6,
      aux_sym_priviledge_token7,
  [10238] = 4,
    ACTIONS(401), 1,
      sym__decimal_literal,
    ACTIONS(943), 1,
      anon_sym_RBRACE,
    STATE(535), 1,
      sym_constant,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10257] = 6,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    ACTIONS(951), 1,
      aux_sym_relation_element_token1,
    ACTIONS(953), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(955), 1,
      aux_sym_column_not_null_token1,
    ACTIONS(947), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(949), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10280] = 10,
    ACTIONS(957), 1,
      aux_sym_truncate_token2,
    ACTIONS(959), 1,
      aux_sym_create_index_token2,
    ACTIONS(961), 1,
      aux_sym_resource_token2,
    ACTIONS(963), 1,
      aux_sym_resource_token5,
    ACTIONS(965), 1,
      aux_sym_resource_token6,
    ACTIONS(967), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(969), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(971), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(973), 1,
      aux_sym_drop_type_token1,
    ACTIONS(975), 1,
      aux_sym_drop_user_token1,
  [10311] = 4,
    ACTIONS(401), 1,
      sym__decimal_literal,
    ACTIONS(977), 1,
      aux_sym_relation_contains_key_token2,
    STATE(78), 1,
      sym_constant,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10330] = 3,
    ACTIONS(401), 1,
      sym__decimal_literal,
    STATE(559), 1,
      sym_constant,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10346] = 3,
    ACTIONS(401), 1,
      sym__decimal_literal,
    STATE(209), 1,
      sym_constant,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10362] = 3,
    ACTIONS(401), 1,
      sym__decimal_literal,
    STATE(689), 1,
      sym_constant,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10378] = 3,
    ACTIONS(401), 1,
      sym__decimal_literal,
    STATE(643), 1,
      sym_constant,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10394] = 3,
    ACTIONS(401), 1,
      sym__decimal_literal,
    STATE(803), 1,
      sym_constant,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10410] = 3,
    ACTIONS(401), 1,
      sym__decimal_literal,
    STATE(171), 1,
      sym_constant,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10426] = 3,
    ACTIONS(401), 1,
      sym__decimal_literal,
    STATE(598), 1,
      sym_constant,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10442] = 3,
    ACTIONS(401), 1,
      sym__decimal_literal,
    STATE(84), 1,
      sym_constant,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10458] = 3,
    ACTIONS(401), 1,
      sym__decimal_literal,
    STATE(81), 1,
      sym_constant,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10474] = 3,
    ACTIONS(401), 1,
      sym__decimal_literal,
    STATE(983), 1,
      sym_constant,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10490] = 3,
    ACTIONS(401), 1,
      sym__decimal_literal,
    STATE(517), 1,
      sym_constant,
    ACTIONS(399), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10506] = 5,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    ACTIONS(951), 1,
      aux_sym_relation_element_token1,
    ACTIONS(953), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(947), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(949), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10526] = 6,
    ACTIONS(979), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(981), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(983), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(985), 1,
      sym_object_name,
    STATE(1239), 1,
      sym_index_column_spec,
    STATE(1280), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10547] = 6,
    ACTIONS(979), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(981), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(983), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(985), 1,
      sym_object_name,
    STATE(923), 1,
      sym_index_column_spec,
    STATE(1280), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10568] = 6,
    ACTIONS(979), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(981), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(983), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(985), 1,
      sym_object_name,
    STATE(1272), 1,
      sym_index_column_spec,
    STATE(1280), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10589] = 6,
    ACTIONS(979), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(981), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(983), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(985), 1,
      sym_object_name,
    STATE(857), 1,
      sym_index_column_spec,
    STATE(1280), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10610] = 6,
    ACTIONS(987), 1,
      anon_sym_DOT,
    ACTIONS(989), 1,
      aux_sym_priviledge_token3,
    ACTIONS(991), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(993), 1,
      aux_sym_alter_table_rename_token1,
    STATE(281), 1,
      sym_alter_type_operation,
    STATE(282), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10631] = 7,
    ACTIONS(995), 1,
      aux_sym_truncate_token2,
    ACTIONS(997), 1,
      aux_sym_priviledge_token1,
    ACTIONS(999), 1,
      aux_sym_resource_token2,
    ACTIONS(1001), 1,
      aux_sym_resource_token5,
    ACTIONS(1003), 1,
      aux_sym_resource_token6,
    ACTIONS(1005), 1,
      sym_object_name,
    STATE(859), 1,
      sym_resource,
  [10653] = 3,
    ACTIONS(1011), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1007), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1009), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10667] = 7,
    ACTIONS(995), 1,
      aux_sym_truncate_token2,
    ACTIONS(997), 1,
      aux_sym_priviledge_token1,
    ACTIONS(999), 1,
      aux_sym_resource_token2,
    ACTIONS(1001), 1,
      aux_sym_resource_token5,
    ACTIONS(1003), 1,
      aux_sym_resource_token6,
    ACTIONS(1005), 1,
      sym_object_name,
    STATE(864), 1,
      sym_resource,
  [10689] = 7,
    ACTIONS(995), 1,
      aux_sym_truncate_token2,
    ACTIONS(997), 1,
      aux_sym_priviledge_token1,
    ACTIONS(999), 1,
      aux_sym_resource_token2,
    ACTIONS(1001), 1,
      aux_sym_resource_token5,
    ACTIONS(1003), 1,
      aux_sym_resource_token6,
    ACTIONS(1005), 1,
      sym_object_name,
    STATE(206), 1,
      sym_resource,
  [10711] = 6,
    ACTIONS(1013), 1,
      anon_sym_LPAREN,
    ACTIONS(1015), 1,
      sym_object_name,
    STATE(79), 1,
      sym_relation_element,
    STATE(94), 1,
      sym_relation_elements,
    STATE(459), 1,
      sym_function_call,
    STATE(80), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10731] = 5,
    ACTIONS(989), 1,
      aux_sym_priviledge_token3,
    ACTIONS(991), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(993), 1,
      aux_sym_alter_table_rename_token1,
    STATE(392), 1,
      sym_alter_type_operation,
    STATE(282), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10749] = 7,
    ACTIONS(1017), 1,
      aux_sym_select_statement_token2,
    ACTIONS(1019), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1021), 1,
      anon_sym_STAR,
    ACTIONS(1023), 1,
      sym_object_name,
    STATE(546), 1,
      sym_select_element,
    STATE(549), 1,
      sym_function_call,
    STATE(837), 1,
      sym_select_elements,
  [10771] = 3,
    ACTIONS(1029), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1025), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1027), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10785] = 6,
    ACTIONS(1013), 1,
      anon_sym_LPAREN,
    ACTIONS(1031), 1,
      sym_object_name,
    STATE(85), 1,
      sym_relation_element,
    STATE(459), 1,
      sym_function_call,
    STATE(699), 1,
      sym_column_not_null,
    STATE(80), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10805] = 4,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    ACTIONS(405), 1,
      anon_sym_LBRACE,
    ACTIONS(1033), 1,
      sym__decimal_literal,
    STATE(798), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [10820] = 6,
    ACTIONS(1035), 1,
      aux_sym_truncate_token2,
    ACTIONS(1037), 1,
      aux_sym_resource_token2,
    ACTIONS(1039), 1,
      aux_sym_resource_token6,
    ACTIONS(1041), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1043), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1045), 1,
      aux_sym_drop_user_token1,
  [10839] = 5,
    ACTIONS(1013), 1,
      anon_sym_LPAREN,
    ACTIONS(1015), 1,
      sym_object_name,
    STATE(85), 1,
      sym_relation_element,
    STATE(459), 1,
      sym_function_call,
    STATE(80), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10856] = 2,
    ACTIONS(1047), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1049), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10867] = 6,
    ACTIONS(1021), 1,
      anon_sym_STAR,
    ACTIONS(1023), 1,
      sym_object_name,
    ACTIONS(1051), 1,
      aux_sym_select_statement_token3,
    STATE(546), 1,
      sym_select_element,
    STATE(549), 1,
      sym_function_call,
    STATE(763), 1,
      sym_select_elements,
  [10886] = 5,
    ACTIONS(1021), 1,
      anon_sym_STAR,
    ACTIONS(1053), 1,
      sym_object_name,
    STATE(546), 1,
      sym_select_element,
    STATE(549), 1,
      sym_function_call,
    STATE(763), 1,
      sym_select_elements,
  [10902] = 5,
    ACTIONS(1055), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1057), 1,
      anon_sym_LPAREN,
    ACTIONS(1059), 1,
      aux_sym_insert_values_spec_token1,
    STATE(111), 1,
      sym_insert_values_spec,
    STATE(619), 1,
      sym_insert_column_spec,
  [10918] = 5,
    ACTIONS(1061), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1063), 1,
      sym_object_name,
    STATE(498), 1,
      sym_from_spec,
    STATE(555), 1,
      sym_delete_column_item,
    STATE(831), 1,
      sym_delete_column_list,
  [10934] = 3,
    ACTIONS(1067), 1,
      anon_sym_LBRACE,
    ACTIONS(1065), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(169), 2,
      sym_option_hash,
      sym_table_option_value,
  [10946] = 1,
    ACTIONS(1069), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10954] = 5,
    ACTIONS(149), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(151), 1,
      sym_object_name,
    STATE(173), 1,
      sym_table_option_item,
    STATE(347), 1,
      sym_clustering_order,
    STATE(1079), 1,
      sym_table_option_name,
  [10970] = 4,
    ACTIONS(1071), 1,
      anon_sym_LPAREN,
    ACTIONS(1073), 1,
      sym_object_name,
    STATE(920), 1,
      sym_primary_key_definition,
    STATE(921), 2,
      sym_compound_key,
      sym_composite_key,
  [10984] = 1,
    ACTIONS(1075), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10992] = 3,
    ACTIONS(1077), 1,
      anon_sym_COMMA,
    STATE(469), 1,
      aux_sym_assignment_set_repeat1,
    ACTIONS(1080), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11004] = 1,
    ACTIONS(1082), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11012] = 1,
    ACTIONS(1084), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11020] = 5,
    ACTIONS(1021), 1,
      anon_sym_STAR,
    ACTIONS(1053), 1,
      sym_object_name,
    STATE(546), 1,
      sym_select_element,
    STATE(549), 1,
      sym_function_call,
    STATE(712), 1,
      sym_select_elements,
  [11036] = 5,
    ACTIONS(149), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(151), 1,
      sym_object_name,
    STATE(142), 1,
      sym_table_option_item,
    STATE(304), 1,
      sym_clustering_order,
    STATE(1079), 1,
      sym_table_option_name,
  [11052] = 4,
    ACTIONS(1086), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1090), 1,
      aux_sym_role_with_options_token4,
    STATE(152), 1,
      sym_role_with_options,
    ACTIONS(1088), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11066] = 5,
    ACTIONS(1055), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1057), 1,
      anon_sym_LPAREN,
    ACTIONS(1059), 1,
      aux_sym_insert_values_spec_token1,
    STATE(116), 1,
      sym_insert_values_spec,
    STATE(683), 1,
      sym_insert_column_spec,
  [11082] = 3,
    ACTIONS(1094), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(638), 1,
      sym_using_timestamp_spec,
    ACTIONS(1092), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11094] = 4,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    ACTIONS(1098), 1,
      anon_sym_DOT,
    ACTIONS(1100), 1,
      aux_sym_select_element_token1,
    ACTIONS(1096), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11108] = 4,
    ACTIONS(1086), 1,
      aux_sym_role_with_options_token1,
    ACTIONS(1090), 1,
      aux_sym_role_with_options_token4,
    STATE(215), 1,
      sym_role_with_options,
    ACTIONS(1088), 2,
      aux_sym_role_with_options_token2,
      aux_sym_role_with_options_token3,
  [11122] = 1,
    ACTIONS(1102), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11130] = 5,
    ACTIONS(149), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(151), 1,
      sym_object_name,
    STATE(142), 1,
      sym_table_option_item,
    STATE(291), 1,
      sym_clustering_order,
    STATE(1079), 1,
      sym_table_option_name,
  [11146] = 3,
    ACTIONS(1094), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(624), 1,
      sym_using_timestamp_spec,
    ACTIONS(1104), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11158] = 5,
    ACTIONS(1061), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1063), 1,
      sym_object_name,
    STATE(534), 1,
      sym_from_spec,
    STATE(555), 1,
      sym_delete_column_item,
    STATE(701), 1,
      sym_delete_column_list,
  [11174] = 1,
    ACTIONS(1106), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11182] = 5,
    ACTIONS(1108), 1,
      sym__string_literal,
    ACTIONS(1110), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1112), 1,
      aux_sym_create_index_token3,
    ACTIONS(1114), 1,
      sym_object_name,
    STATE(1203), 1,
      sym_index_name,
  [11198] = 1,
    ACTIONS(1116), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11206] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      sym_where_spec,
    STATE(528), 1,
      aux_sym_update_repeat1,
  [11219] = 2,
    ACTIONS(1120), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11228] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      sym_where_spec,
    STATE(506), 1,
      aux_sym_update_repeat1,
  [11241] = 4,
    ACTIONS(1124), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(1126), 1,
      sym_object_name,
    STATE(174), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11254] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      aux_sym_delete_statement_token3,
    STATE(174), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11267] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      sym_where_spec,
    STATE(547), 1,
      aux_sym_update_repeat1,
  [11280] = 1,
    ACTIONS(1130), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11287] = 4,
    ACTIONS(1132), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1134), 1,
      aux_sym_create_materialized_view_token1,
    STATE(536), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(674), 1,
      aux_sym_relation_elements_repeat1,
  [11300] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      sym_where_spec,
    STATE(547), 1,
      aux_sym_update_repeat1,
  [11313] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1136), 1,
      aux_sym_delete_statement_token3,
    STATE(174), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11326] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1138), 1,
      aux_sym_delete_statement_token3,
    STATE(174), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11339] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      sym_where_spec,
    STATE(547), 1,
      aux_sym_update_repeat1,
  [11352] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1094), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(133), 1,
      sym_where_spec,
    STATE(752), 1,
      sym_using_timestamp_spec,
  [11365] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      sym_where_spec,
    STATE(516), 1,
      aux_sym_update_repeat1,
  [11378] = 4,
    ACTIONS(1140), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1142), 1,
      sym_object_name,
    STATE(756), 1,
      sym_column_definition,
    STATE(1012), 1,
      sym_primary_key_element,
  [11391] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1144), 1,
      aux_sym_delete_statement_token3,
    STATE(174), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11404] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1146), 1,
      aux_sym_delete_statement_token3,
    STATE(174), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11417] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      sym_where_spec,
    STATE(491), 1,
      aux_sym_update_repeat1,
  [11430] = 4,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
    STATE(573), 1,
      aux_sym_function_args_repeat1,
  [11443] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      sym_where_spec,
    STATE(547), 1,
      aux_sym_update_repeat1,
  [11456] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      sym_where_spec,
    STATE(547), 1,
      aux_sym_update_repeat1,
  [11469] = 3,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(527), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1152), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11480] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      sym_where_spec,
    STATE(505), 1,
      aux_sym_update_repeat1,
  [11493] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      sym_where_spec,
    STATE(539), 1,
      aux_sym_update_repeat1,
  [11506] = 4,
    ACTIONS(1140), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1142), 1,
      sym_object_name,
    STATE(756), 1,
      sym_column_definition,
    STATE(1246), 1,
      sym_primary_key_element,
  [11519] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1094), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(124), 1,
      sym_where_spec,
    STATE(686), 1,
      sym_using_timestamp_spec,
  [11532] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1154), 1,
      aux_sym_delete_statement_token3,
    STATE(174), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11545] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1156), 1,
      aux_sym_delete_statement_token3,
    STATE(174), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11558] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1158), 1,
      aux_sym_delete_statement_token3,
    STATE(174), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11571] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1160), 1,
      aux_sym_delete_statement_token3,
    STATE(174), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11584] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      sym_where_spec,
    STATE(547), 1,
      aux_sym_update_repeat1,
  [11597] = 1,
    ACTIONS(1080), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11604] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1162), 1,
      aux_sym_delete_statement_token3,
    STATE(174), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11617] = 4,
    ACTIONS(1164), 1,
      sym_object_name,
    STATE(104), 1,
      sym_table_option_item,
    STATE(303), 1,
      sym_table_options,
    STATE(1079), 1,
      sym_table_option_name,
  [11630] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1166), 1,
      aux_sym_delete_statement_token3,
    STATE(174), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11643] = 4,
    ACTIONS(1108), 1,
      sym__string_literal,
    ACTIONS(1114), 1,
      sym_object_name,
    ACTIONS(1168), 1,
      aux_sym_create_index_token3,
    STATE(1213), 1,
      sym_index_name,
  [11656] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      sym_where_spec,
    STATE(497), 1,
      aux_sym_update_repeat1,
  [11669] = 4,
    ACTIONS(1164), 1,
      sym_object_name,
    STATE(104), 1,
      sym_table_option_item,
    STATE(276), 1,
      sym_table_options,
    STATE(1079), 1,
      sym_table_option_name,
  [11682] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1170), 1,
      aux_sym_delete_statement_token3,
    STATE(174), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11695] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1172), 1,
      aux_sym_delete_statement_token3,
    STATE(174), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11708] = 4,
    ACTIONS(218), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1174), 1,
      anon_sym_DOT,
    ACTIONS(1176), 1,
      aux_sym_update_token2,
    STATE(878), 1,
      sym_using_ttl_timestamp,
  [11721] = 3,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1178), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11732] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      sym_where_spec,
    STATE(547), 1,
      aux_sym_update_repeat1,
  [11745] = 3,
    ACTIONS(1182), 1,
      aux_sym_create_materialized_view_token1,
    STATE(761), 1,
      sym_primary_key_column,
    ACTIONS(1180), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11756] = 4,
    ACTIONS(1164), 1,
      sym_object_name,
    STATE(104), 1,
      sym_table_option_item,
    STATE(245), 1,
      sym_table_options,
    STATE(1079), 1,
      sym_table_option_name,
  [11769] = 4,
    ACTIONS(218), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1184), 1,
      anon_sym_DOT,
    ACTIONS(1186), 1,
      aux_sym_update_token2,
    STATE(1075), 1,
      sym_using_ttl_timestamp,
  [11782] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1188), 1,
      aux_sym_delete_statement_token3,
    STATE(174), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11795] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      sym_where_spec,
    STATE(494), 1,
      aux_sym_update_repeat1,
  [11808] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1094), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(194), 1,
      sym_where_spec,
    STATE(738), 1,
      sym_using_timestamp_spec,
  [11821] = 4,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    ACTIONS(1192), 1,
      anon_sym_COLON,
    ACTIONS(1194), 1,
      anon_sym_RBRACE,
    STATE(654), 1,
      aux_sym_assignment_set_repeat1,
  [11834] = 4,
    ACTIONS(1132), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1196), 1,
      aux_sym_create_materialized_view_token1,
    STATE(666), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(670), 1,
      aux_sym_relation_elements_repeat1,
  [11847] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1198), 1,
      aux_sym_delete_statement_token3,
    STATE(174), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11860] = 4,
    ACTIONS(1200), 1,
      aux_sym_timestamp_token1,
    ACTIONS(1202), 1,
      aux_sym_ttl_token1,
    STATE(132), 1,
      sym_ttl,
    STATE(138), 1,
      sym_timestamp,
  [11873] = 4,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      sym_where_spec,
    STATE(547), 1,
      aux_sym_update_repeat1,
  [11886] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1293), 1,
      sym_return_mode,
  [11896] = 3,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1210), 1,
      anon_sym_RPAREN,
    STATE(663), 1,
      aux_sym_create_function_repeat1,
  [11906] = 3,
    ACTIONS(1212), 1,
      aux_sym_truncate_token2,
    ACTIONS(1214), 1,
      sym_object_name,
    STATE(305), 1,
      sym_table_name,
  [11916] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1218), 1,
      anon_sym_RBRACE,
    STATE(592), 1,
      aux_sym_replication_list_repeat1,
  [11926] = 3,
    ACTIONS(1220), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1222), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1224), 1,
      aux_sym_update_token1,
  [11936] = 3,
    ACTIONS(1226), 1,
      anon_sym_RPAREN,
    ACTIONS(1228), 1,
      sym_object_name,
    STATE(595), 1,
      sym_param,
  [11946] = 3,
    ACTIONS(1230), 1,
      anon_sym_COMMA,
    ACTIONS(1232), 1,
      aux_sym_from_spec_token1,
    STATE(608), 1,
      aux_sym_select_elements_repeat1,
  [11956] = 3,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    ACTIONS(1237), 1,
      aux_sym_where_spec_token1,
    STATE(547), 1,
      aux_sym_update_repeat1,
  [11966] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(932), 1,
      sym_return_mode,
  [11976] = 2,
    ACTIONS(1241), 1,
      aux_sym_select_element_token1,
    ACTIONS(1239), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11984] = 3,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [11994] = 2,
    ACTIONS(1247), 1,
      anon_sym_LBRACK,
    ACTIONS(1245), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12002] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(936), 1,
      sym_return_mode,
  [12012] = 3,
    ACTIONS(1228), 1,
      sym_object_name,
    ACTIONS(1249), 1,
      anon_sym_RPAREN,
    STATE(662), 1,
      sym_param,
  [12022] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    ACTIONS(1253), 1,
      anon_sym_RBRACE,
    STATE(601), 1,
      aux_sym_option_hash_repeat1,
  [12032] = 3,
    ACTIONS(1255), 1,
      anon_sym_COMMA,
    ACTIONS(1257), 1,
      aux_sym_from_spec_token1,
    STATE(623), 1,
      aux_sym_delete_column_list_repeat1,
  [12042] = 3,
    ACTIONS(1259), 1,
      sym_object_name,
    STATE(580), 1,
      sym_column_definition,
    STATE(915), 1,
      sym_column_definition_list,
  [12052] = 3,
    ACTIONS(1261), 1,
      aux_sym_alter_table_drop_compact_storage_token1,
    ACTIONS(1263), 1,
      sym_object_name,
    STATE(330), 1,
      sym_alter_table_drop_column_list,
  [12062] = 3,
    ACTIONS(1164), 1,
      sym_object_name,
    STATE(142), 1,
      sym_table_option_item,
    STATE(1079), 1,
      sym_table_option_name,
  [12072] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1267), 1,
      anon_sym_RBRACE,
    STATE(582), 1,
      aux_sym_assignment_map_repeat1,
  [12082] = 3,
    ACTIONS(1269), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1271), 1,
      sym_object_name,
    STATE(1195), 1,
      sym_keyspace_name,
  [12092] = 3,
    ACTIONS(218), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1273), 1,
      aux_sym_update_token2,
    STATE(1298), 1,
      sym_using_ttl_timestamp,
  [12102] = 3,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1278), 1,
      anon_sym_GT,
    STATE(562), 1,
      aux_sym_data_type_definition_repeat1,
  [12112] = 3,
    ACTIONS(1280), 1,
      anon_sym_DOT,
    ACTIONS(1282), 1,
      aux_sym_where_spec_token1,
    STATE(954), 1,
      sym_materialized_view_where,
  [12122] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1284), 1,
      anon_sym_RPAREN,
    STATE(579), 1,
      aux_sym_relation_element_repeat2,
  [12132] = 3,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
    STATE(604), 1,
      aux_sym_create_type_repeat1,
  [12142] = 3,
    ACTIONS(1290), 1,
      sym_object_name,
    STATE(148), 1,
      sym_alter_type_rename_item,
    STATE(366), 1,
      sym_alter_type_rename_list,
  [12152] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1207), 1,
      sym_return_mode,
  [12162] = 3,
    ACTIONS(1292), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1294), 1,
      sym_object_name,
    STATE(1160), 1,
      sym_trigger_name,
  [12172] = 3,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1296), 1,
      anon_sym_RPAREN,
    STATE(588), 1,
      aux_sym_create_type_repeat1,
  [12182] = 3,
    ACTIONS(1228), 1,
      sym_object_name,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
    STATE(610), 1,
      sym_param,
  [12192] = 3,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1300), 1,
      anon_sym_RPAREN,
    STATE(657), 1,
      aux_sym_create_type_repeat1,
  [12202] = 3,
    ACTIONS(1302), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1304), 1,
      sym_object_name,
    STATE(1148), 1,
      sym_user_name,
  [12212] = 3,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    ACTIONS(1306), 1,
      anon_sym_RPAREN,
    STATE(675), 1,
      aux_sym_function_args_repeat1,
  [12222] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(962), 1,
      sym_return_mode,
  [12232] = 3,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
    STATE(613), 1,
      aux_sym_create_function_repeat1,
  [12242] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(967), 1,
      sym_return_mode,
  [12252] = 3,
    ACTIONS(1310), 1,
      sym__string_literal,
    ACTIONS(1312), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1314), 1,
      sym_object_name,
  [12262] = 3,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
    STATE(673), 1,
      aux_sym_relation_element_repeat1,
  [12272] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1318), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
  [12282] = 3,
    ACTIONS(1320), 1,
      anon_sym_COMMA,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      aux_sym_column_definition_list_repeat1,
  [12292] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1318), 1,
      anon_sym_RPAREN,
    STATE(627), 1,
      aux_sym_relation_element_repeat2,
  [12302] = 3,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1324), 1,
      anon_sym_RBRACE,
    STATE(631), 1,
      aux_sym_assignment_map_repeat1,
  [12312] = 3,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1326), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [12322] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(882), 1,
      sym_return_mode,
  [12332] = 3,
    ACTIONS(1328), 1,
      sym__string_literal,
    STATE(632), 1,
      sym_replication_list_item,
    STATE(993), 1,
      sym_replication_list,
  [12342] = 3,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [12352] = 3,
    ACTIONS(1228), 1,
      sym_object_name,
    ACTIONS(1332), 1,
      anon_sym_RPAREN,
    STATE(575), 1,
      sym_param,
  [12362] = 3,
    ACTIONS(1334), 1,
      anon_sym_COMMA,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
    STATE(588), 1,
      aux_sym_create_type_repeat1,
  [12372] = 3,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
    STATE(586), 1,
      aux_sym_create_function_repeat1,
  [12382] = 3,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
    STATE(569), 1,
      aux_sym_create_type_repeat1,
  [12392] = 3,
    ACTIONS(1304), 1,
      sym_object_name,
    ACTIONS(1343), 1,
      aux_sym_delete_statement_token2,
    STATE(354), 1,
      sym_user_name,
  [12402] = 3,
    ACTIONS(1345), 1,
      anon_sym_COMMA,
    ACTIONS(1348), 1,
      anon_sym_RBRACE,
    STATE(592), 1,
      aux_sym_replication_list_repeat1,
  [12412] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(996), 1,
      sym_return_mode,
  [12422] = 3,
    ACTIONS(1350), 1,
      anon_sym_COMMA,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
    STATE(594), 1,
      aux_sym_init_cond_hash_repeat1,
  [12432] = 3,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1355), 1,
      anon_sym_RPAREN,
    STATE(644), 1,
      aux_sym_create_function_repeat1,
  [12442] = 3,
    ACTIONS(1228), 1,
      sym_object_name,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
    STATE(630), 1,
      sym_param,
  [12452] = 3,
    ACTIONS(1359), 1,
      anon_sym_COMMA,
    ACTIONS(1362), 1,
      anon_sym_RPAREN,
    STATE(597), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12462] = 3,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    ACTIONS(1364), 1,
      anon_sym_RBRACK,
    STATE(659), 1,
      aux_sym_assignment_set_repeat1,
  [12472] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1001), 1,
      sym_return_mode,
  [12482] = 3,
    ACTIONS(1366), 1,
      anon_sym_COMMA,
    ACTIONS(1368), 1,
      anon_sym_GT,
    STATE(562), 1,
      aux_sym_data_type_definition_repeat1,
  [12492] = 3,
    ACTIONS(1370), 1,
      anon_sym_COMMA,
    ACTIONS(1373), 1,
      anon_sym_RBRACE,
    STATE(601), 1,
      aux_sym_option_hash_repeat1,
  [12502] = 3,
    ACTIONS(1228), 1,
      sym_object_name,
    ACTIONS(1375), 1,
      anon_sym_RPAREN,
    STATE(589), 1,
      sym_param,
  [12512] = 3,
    ACTIONS(1377), 1,
      anon_sym_COMMA,
    ACTIONS(1379), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_expression_list_repeat1,
  [12522] = 3,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1381), 1,
      anon_sym_RPAREN,
    STATE(588), 1,
      aux_sym_create_type_repeat1,
  [12532] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1022), 1,
      sym_return_mode,
  [12542] = 3,
    ACTIONS(1053), 1,
      sym_object_name,
    STATE(549), 1,
      sym_function_call,
    STATE(714), 1,
      sym_select_element,
  [12552] = 3,
    ACTIONS(1259), 1,
      sym_object_name,
    STATE(580), 1,
      sym_column_definition,
    STATE(1024), 1,
      sym_column_definition_list,
  [12562] = 3,
    ACTIONS(1230), 1,
      anon_sym_COMMA,
    ACTIONS(1383), 1,
      aux_sym_from_spec_token1,
    STATE(665), 1,
      aux_sym_select_elements_repeat1,
  [12572] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    ACTIONS(1385), 1,
      anon_sym_RBRACE,
    STATE(554), 1,
      aux_sym_option_hash_repeat1,
  [12582] = 3,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1387), 1,
      anon_sym_RPAREN,
    STATE(651), 1,
      aux_sym_create_function_repeat1,
  [12592] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1026), 1,
      sym_return_mode,
  [12602] = 3,
    ACTIONS(1389), 1,
      anon_sym_COMMA,
    ACTIONS(1391), 1,
      anon_sym_RPAREN,
    STATE(594), 1,
      aux_sym_init_cond_hash_repeat1,
  [12612] = 3,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1393), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [12622] = 3,
    ACTIONS(1259), 1,
      sym_object_name,
    STATE(580), 1,
      sym_column_definition,
    STATE(910), 1,
      sym_column_definition_list,
  [12632] = 3,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    ACTIONS(1397), 1,
      anon_sym_RPAREN,
    STATE(597), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12642] = 3,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1399), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [12652] = 3,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1404), 1,
      anon_sym_RPAREN,
    STATE(617), 1,
      aux_sym_column_definition_list_repeat1,
  [12662] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(849), 1,
      sym_return_mode,
  [12672] = 3,
    ACTIONS(1055), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1059), 1,
      aux_sym_insert_values_spec_token1,
    STATE(116), 1,
      sym_insert_values_spec,
  [12682] = 3,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    ACTIONS(1406), 1,
      anon_sym_RPAREN,
    STATE(469), 1,
      aux_sym_assignment_set_repeat1,
  [12692] = 3,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1408), 1,
      anon_sym_RPAREN,
    STATE(550), 1,
      aux_sym_create_function_repeat1,
  [12702] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(845), 1,
      sym_return_mode,
  [12712] = 3,
    ACTIONS(1255), 1,
      anon_sym_COMMA,
    ACTIONS(1410), 1,
      aux_sym_from_spec_token1,
    STATE(640), 1,
      aux_sym_delete_column_list_repeat1,
  [12722] = 1,
    ACTIONS(1092), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12728] = 2,
    ACTIONS(1414), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1412), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [12736] = 3,
    ACTIONS(1328), 1,
      sym__string_literal,
    STATE(632), 1,
      sym_replication_list_item,
    STATE(986), 1,
      sym_replication_list,
  [12746] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(1416), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
  [12756] = 3,
    ACTIONS(1228), 1,
      sym_object_name,
    ACTIONS(1418), 1,
      anon_sym_RPAREN,
    STATE(621), 1,
      sym_param,
  [12766] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(982), 1,
      sym_return_mode,
  [12776] = 3,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1420), 1,
      anon_sym_RPAREN,
    STATE(616), 1,
      aux_sym_create_function_repeat1,
  [12786] = 3,
    ACTIONS(1422), 1,
      anon_sym_COMMA,
    ACTIONS(1425), 1,
      anon_sym_RBRACE,
    STATE(631), 1,
      aux_sym_assignment_map_repeat1,
  [12796] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1427), 1,
      anon_sym_RBRACE,
    STATE(543), 1,
      aux_sym_replication_list_repeat1,
  [12806] = 3,
    ACTIONS(1389), 1,
      anon_sym_COMMA,
    ACTIONS(1429), 1,
      anon_sym_RPAREN,
    STATE(612), 1,
      aux_sym_init_cond_hash_repeat1,
  [12816] = 3,
    ACTIONS(1431), 1,
      anon_sym_COMMA,
    ACTIONS(1433), 1,
      anon_sym_RPAREN,
    STATE(668), 1,
      aux_sym_clustering_key_list_repeat1,
  [12826] = 3,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    ACTIONS(1435), 1,
      anon_sym_RPAREN,
    STATE(615), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12836] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(964), 1,
      sym_return_mode,
  [12846] = 3,
    ACTIONS(1437), 1,
      anon_sym_COMMA,
    ACTIONS(1440), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [12856] = 1,
    ACTIONS(1442), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12862] = 3,
    ACTIONS(1444), 1,
      anon_sym_COMMA,
    ACTIONS(1446), 1,
      anon_sym_RPAREN,
    STATE(617), 1,
      aux_sym_column_definition_list_repeat1,
  [12872] = 3,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    ACTIONS(1451), 1,
      aux_sym_from_spec_token1,
    STATE(640), 1,
      aux_sym_delete_column_list_repeat1,
  [12882] = 3,
    ACTIONS(1259), 1,
      sym_object_name,
    STATE(580), 1,
      sym_column_definition,
    STATE(1264), 1,
      sym_column_definition_list,
  [12892] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1052), 1,
      sym_return_mode,
  [12902] = 3,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    ACTIONS(1453), 1,
      anon_sym_RPAREN,
    STATE(620), 1,
      aux_sym_assignment_set_repeat1,
  [12912] = 3,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1455), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [12922] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1218), 1,
      sym_return_mode,
  [12932] = 3,
    ACTIONS(1282), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1457), 1,
      anon_sym_DOT,
    STATE(1070), 1,
      sym_materialized_view_where,
  [12942] = 3,
    ACTIONS(1366), 1,
      anon_sym_COMMA,
    ACTIONS(1459), 1,
      anon_sym_GT,
    STATE(600), 1,
      aux_sym_data_type_definition_repeat1,
  [12952] = 3,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1461), 1,
      anon_sym_RPAREN,
    STATE(678), 1,
      aux_sym_create_type_repeat1,
  [12962] = 3,
    ACTIONS(1228), 1,
      sym_object_name,
    ACTIONS(1463), 1,
      anon_sym_RPAREN,
    STATE(541), 1,
      sym_param,
  [12972] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1082), 1,
      sym_return_mode,
  [12982] = 3,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1465), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [12992] = 3,
    ACTIONS(1282), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1467), 1,
      anon_sym_DOT,
    STATE(1209), 1,
      sym_materialized_view_where,
  [13002] = 3,
    ACTIONS(1469), 1,
      anon_sym_COMMA,
    ACTIONS(1472), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_expression_list_repeat1,
  [13012] = 3,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    ACTIONS(1474), 1,
      anon_sym_RBRACE,
    STATE(469), 1,
      aux_sym_assignment_set_repeat1,
  [13022] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1086), 1,
      sym_return_mode,
  [13032] = 3,
    ACTIONS(1377), 1,
      anon_sym_COMMA,
    ACTIONS(1476), 1,
      anon_sym_RPAREN,
    STATE(603), 1,
      aux_sym_expression_list_repeat1,
  [13042] = 3,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1478), 1,
      anon_sym_RPAREN,
    STATE(588), 1,
      aux_sym_create_type_repeat1,
  [13052] = 3,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
    STATE(573), 1,
      aux_sym_function_args_repeat1,
  [13062] = 3,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    ACTIONS(1480), 1,
      anon_sym_RBRACK,
    STATE(469), 1,
      aux_sym_assignment_set_repeat1,
  [13072] = 2,
    ACTIONS(1482), 1,
      aux_sym_resource_token1,
    ACTIONS(1484), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [13080] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(925), 1,
      sym_return_mode,
  [13090] = 3,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1486), 1,
      anon_sym_RPAREN,
    STATE(583), 1,
      aux_sym_create_function_repeat1,
  [13100] = 3,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1488), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [13110] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1177), 1,
      sym_return_mode,
  [13120] = 3,
    ACTIONS(1490), 1,
      anon_sym_COMMA,
    ACTIONS(1493), 1,
      aux_sym_from_spec_token1,
    STATE(665), 1,
      aux_sym_select_elements_repeat1,
  [13130] = 3,
    ACTIONS(1495), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1498), 1,
      aux_sym_create_materialized_view_token1,
    STATE(666), 1,
      aux_sym_materialized_view_where_repeat1,
  [13140] = 2,
    ACTIONS(1500), 1,
      anon_sym_RPAREN,
    ACTIONS(1502), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
  [13148] = 3,
    ACTIONS(1431), 1,
      anon_sym_COMMA,
    ACTIONS(1504), 1,
      anon_sym_RPAREN,
    STATE(684), 1,
      aux_sym_clustering_key_list_repeat1,
  [13158] = 3,
    ACTIONS(1431), 1,
      anon_sym_COMMA,
    ACTIONS(1506), 1,
      anon_sym_RPAREN,
    STATE(681), 1,
      aux_sym_clustering_key_list_repeat1,
  [13168] = 3,
    ACTIONS(143), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1508), 1,
      aux_sym_create_materialized_view_token1,
    STATE(70), 1,
      aux_sym_relation_elements_repeat1,
  [13178] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1106), 1,
      sym_return_mode,
  [13188] = 3,
    ACTIONS(1282), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1510), 1,
      anon_sym_DOT,
    STATE(1121), 1,
      sym_materialized_view_where,
  [13198] = 3,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(1512), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_relation_element_repeat1,
  [13208] = 3,
    ACTIONS(143), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1196), 1,
      aux_sym_create_materialized_view_token1,
    STATE(70), 1,
      aux_sym_relation_elements_repeat1,
  [13218] = 3,
    ACTIONS(1514), 1,
      anon_sym_COMMA,
    ACTIONS(1517), 1,
      anon_sym_RPAREN,
    STATE(675), 1,
      aux_sym_function_args_repeat1,
  [13228] = 3,
    ACTIONS(1328), 1,
      sym__string_literal,
    STATE(632), 1,
      sym_replication_list_item,
    STATE(894), 1,
      sym_replication_list,
  [13238] = 2,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    ACTIONS(1517), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13246] = 3,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1519), 1,
      anon_sym_RPAREN,
    STATE(588), 1,
      aux_sym_create_type_repeat1,
  [13256] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1132), 1,
      sym_return_mode,
  [13266] = 3,
    ACTIONS(1204), 1,
      aux_sym_create_function_token1,
    ACTIONS(1206), 1,
      aux_sym_return_mode_token1,
    STATE(1137), 1,
      sym_return_mode,
  [13276] = 3,
    ACTIONS(1431), 1,
      anon_sym_COMMA,
    ACTIONS(1521), 1,
      anon_sym_RPAREN,
    STATE(684), 1,
      aux_sym_clustering_key_list_repeat1,
  [13286] = 3,
    ACTIONS(218), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1523), 1,
      aux_sym_update_token2,
    STATE(1315), 1,
      sym_using_ttl_timestamp,
  [13296] = 3,
    ACTIONS(1055), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1059), 1,
      aux_sym_insert_values_spec_token1,
    STATE(106), 1,
      sym_insert_values_spec,
  [13306] = 3,
    ACTIONS(1525), 1,
      anon_sym_COMMA,
    ACTIONS(1528), 1,
      anon_sym_RPAREN,
    STATE(684), 1,
      aux_sym_clustering_key_list_repeat1,
  [13316] = 2,
    ACTIONS(1530), 1,
      sym_object_name,
    STATE(1149), 1,
      sym_clustering_key_list,
  [13323] = 2,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    STATE(159), 1,
      sym_where_spec,
  [13330] = 1,
    ACTIONS(1528), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13335] = 2,
    ACTIONS(1532), 1,
      anon_sym_DOT,
    ACTIONS(1534), 1,
      aux_sym_create_index_token3,
  [13342] = 1,
    ACTIONS(1536), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13347] = 2,
    ACTIONS(1538), 1,
      aux_sym_durable_writes_token1,
    STATE(383), 1,
      sym_durable_writes,
  [13354] = 2,
    ACTIONS(1328), 1,
      sym__string_literal,
    STATE(779), 1,
      sym_replication_list_item,
  [13361] = 2,
    ACTIONS(1540), 1,
      sym_object_name,
    STATE(503), 1,
      sym_assignment_element,
  [13368] = 2,
    ACTIONS(1542), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1544), 1,
      sym_object_name,
  [13375] = 2,
    ACTIONS(1540), 1,
      sym_object_name,
    STATE(533), 1,
      sym_assignment_element,
  [13382] = 1,
    ACTIONS(1517), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13387] = 2,
    ACTIONS(1282), 1,
      aux_sym_where_spec_token1,
    STATE(1170), 1,
      sym_materialized_view_where,
  [13394] = 2,
    ACTIONS(1546), 1,
      anon_sym_DOT,
    ACTIONS(1548), 1,
      anon_sym_LPAREN,
  [13401] = 2,
    ACTIONS(1550), 1,
      sym_object_name,
    STATE(207), 1,
      sym_role_name,
  [13408] = 1,
    ACTIONS(1498), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13413] = 2,
    ACTIONS(1540), 1,
      sym_object_name,
    STATE(839), 1,
      sym_assignment_element,
  [13420] = 2,
    ACTIONS(1552), 1,
      aux_sym_from_spec_token1,
    STATE(511), 1,
      sym_from_spec,
  [13427] = 2,
    ACTIONS(1200), 1,
      aux_sym_timestamp_token1,
    STATE(225), 1,
      sym_timestamp,
  [13434] = 2,
    ACTIONS(1554), 1,
      sym_object_name,
    STATE(211), 1,
      sym_if_condition,
  [13441] = 2,
    ACTIONS(1202), 1,
      aux_sym_ttl_token1,
    STATE(225), 1,
      sym_ttl,
  [13448] = 2,
    ACTIONS(1556), 1,
      anon_sym_DOT,
    ACTIONS(1558), 1,
      anon_sym_LPAREN,
  [13455] = 2,
    ACTIONS(1540), 1,
      sym_object_name,
    STATE(509), 1,
      sym_assignment_element,
  [13462] = 2,
    ACTIONS(1540), 1,
      sym_object_name,
    STATE(522), 1,
      sym_assignment_element,
  [13469] = 1,
    ACTIONS(1560), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [13474] = 2,
    ACTIONS(1562), 1,
      anon_sym_DOT,
    ACTIONS(1564), 1,
      aux_sym_create_index_token3,
  [13481] = 1,
    ACTIONS(1566), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13486] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(475), 1,
      sym_table_name,
  [13493] = 2,
    ACTIONS(1552), 1,
      aux_sym_from_spec_token1,
    STATE(71), 1,
      sym_from_spec,
  [13500] = 2,
    ACTIONS(1570), 1,
      anon_sym_DOT,
    ACTIONS(1572), 1,
      anon_sym_LPAREN,
  [13507] = 1,
    ACTIONS(1493), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13512] = 2,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    STATE(564), 1,
      sym_assignment_tuple,
  [13519] = 2,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_assignment_tuple,
  [13526] = 2,
    ACTIONS(1574), 1,
      sym_object_name,
    STATE(1175), 1,
      sym_column_list,
  [13533] = 2,
    ACTIONS(1576), 1,
      aux_sym_resource_token5,
    ACTIONS(1578), 1,
      aux_sym_drop_aggregate_token1,
  [13540] = 1,
    ACTIONS(1580), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13545] = 1,
    ACTIONS(1582), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13550] = 2,
    ACTIONS(1584), 1,
      sym_object_name,
    STATE(1326), 1,
      sym_user_name,
  [13557] = 2,
    ACTIONS(1586), 1,
      anon_sym_DOT,
    ACTIONS(1588), 1,
      anon_sym_LPAREN,
  [13564] = 2,
    ACTIONS(1590), 1,
      aux_sym_role_with_options_token1,
    STATE(118), 1,
      sym_user_password,
  [13571] = 2,
    ACTIONS(1592), 1,
      anon_sym_DOT,
    ACTIONS(1594), 1,
      aux_sym_using_timestamp_spec_token1,
  [13578] = 2,
    ACTIONS(1596), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1598), 1,
      sym_object_name,
  [13585] = 1,
    ACTIONS(1472), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13590] = 2,
    ACTIONS(1600), 1,
      anon_sym_DOT,
    ACTIONS(1602), 1,
      anon_sym_LPAREN,
  [13597] = 1,
    ACTIONS(1604), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13602] = 2,
    ACTIONS(1606), 1,
      sym_object_name,
    STATE(1317), 1,
      sym_trigger_name,
  [13609] = 2,
    ACTIONS(1608), 1,
      sym__string_literal,
    STATE(341), 1,
      sym_trigger_class,
  [13616] = 2,
    ACTIONS(1282), 1,
      aux_sym_where_spec_token1,
    STATE(1210), 1,
      sym_materialized_view_where,
  [13623] = 1,
    ACTIONS(1610), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13628] = 1,
    ACTIONS(1612), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13633] = 2,
    ACTIONS(1614), 1,
      anon_sym_DOT,
    ACTIONS(1616), 1,
      aux_sym_select_element_token1,
  [13640] = 2,
    ACTIONS(1282), 1,
      aux_sym_where_spec_token1,
    STATE(1071), 1,
      sym_materialized_view_where,
  [13647] = 2,
    ACTIONS(1618), 1,
      sym_object_name,
    STATE(699), 1,
      sym_column_not_null,
  [13654] = 2,
    ACTIONS(1574), 1,
      sym_object_name,
    STATE(1067), 1,
      sym_column_list,
  [13661] = 2,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    STATE(124), 1,
      sym_where_spec,
  [13668] = 2,
    ACTIONS(1259), 1,
      sym_object_name,
    STATE(756), 1,
      sym_column_definition,
  [13675] = 1,
    ACTIONS(1451), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13680] = 2,
    ACTIONS(1620), 1,
      anon_sym_DOT,
    ACTIONS(1622), 1,
      anon_sym_LPAREN,
  [13687] = 2,
    ACTIONS(1624), 1,
      anon_sym_DOT,
    ACTIONS(1626), 1,
      anon_sym_LPAREN,
  [13694] = 2,
    ACTIONS(1628), 1,
      sym__string_literal,
    STATE(609), 1,
      sym_option_hash_item,
  [13701] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(1244), 1,
      sym_table_name,
  [13708] = 2,
    ACTIONS(1530), 1,
      sym_object_name,
    STATE(1048), 1,
      sym_clustering_key_list,
  [13715] = 1,
    ACTIONS(1440), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13720] = 2,
    ACTIONS(1574), 1,
      sym_object_name,
    STATE(902), 1,
      sym_column_list,
  [13727] = 2,
    ACTIONS(1574), 1,
      sym_object_name,
    STATE(1254), 1,
      sym_column_list,
  [13734] = 2,
    ACTIONS(1574), 1,
      sym_object_name,
    STATE(1255), 1,
      sym_column_list,
  [13741] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(976), 1,
      sym_table_name,
  [13748] = 2,
    ACTIONS(1630), 1,
      sym_object_name,
    STATE(740), 1,
      sym_delete_column_item,
  [13755] = 2,
    ACTIONS(116), 1,
      aux_sym_where_spec_token1,
    STATE(194), 1,
      sym_where_spec,
  [13762] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(1000), 1,
      sym_table_name,
  [13769] = 2,
    ACTIONS(1200), 1,
      aux_sym_timestamp_token1,
    STATE(492), 1,
      sym_timestamp,
  [13776] = 1,
    ACTIONS(1632), 2,
      sym__string_literal,
      sym__decimal_literal,
  [13781] = 1,
    ACTIONS(1404), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13786] = 2,
    ACTIONS(1538), 1,
      aux_sym_durable_writes_token1,
    STATE(323), 1,
      sym_durable_writes,
  [13793] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(911), 1,
      sym_table_name,
  [13800] = 2,
    ACTIONS(1634), 1,
      sym_object_name,
    STATE(773), 1,
      sym_init_cond_hash_item,
  [13807] = 2,
    ACTIONS(1282), 1,
      aux_sym_where_spec_token1,
    STATE(1286), 1,
      sym_materialized_view_where,
  [13814] = 1,
    ACTIONS(1636), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13819] = 2,
    ACTIONS(1574), 1,
      sym_object_name,
    STATE(1289), 1,
      sym_column_list,
  [13826] = 2,
    ACTIONS(1552), 1,
      aux_sym_from_spec_token1,
    STATE(69), 1,
      sym_from_spec,
  [13833] = 2,
    ACTIONS(1584), 1,
      sym_object_name,
    STATE(1060), 1,
      sym_user_name,
  [13840] = 1,
    ACTIONS(1638), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13845] = 2,
    ACTIONS(1618), 1,
      sym_object_name,
    STATE(493), 1,
      sym_column_not_null,
  [13852] = 1,
    ACTIONS(1362), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13857] = 1,
    ACTIONS(1373), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13862] = 2,
    ACTIONS(1640), 1,
      sym_object_name,
    STATE(1073), 1,
      sym_keyspace_name,
  [13869] = 1,
    ACTIONS(1642), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13874] = 2,
    ACTIONS(1644), 1,
      anon_sym_DOT,
    ACTIONS(1646), 1,
      anon_sym_LPAREN,
  [13881] = 2,
    ACTIONS(1574), 1,
      sym_object_name,
    STATE(869), 1,
      sym_column_list,
  [13888] = 1,
    ACTIONS(1353), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13893] = 2,
    ACTIONS(1574), 1,
      sym_object_name,
    STATE(1313), 1,
      sym_column_list,
  [13900] = 2,
    ACTIONS(1538), 1,
      aux_sym_durable_writes_token1,
    STATE(298), 1,
      sym_durable_writes,
  [13907] = 1,
    ACTIONS(1648), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13912] = 2,
    ACTIONS(1228), 1,
      sym_object_name,
    STATE(746), 1,
      sym_param,
  [13919] = 2,
    ACTIONS(1650), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1652), 1,
      sym_object_name,
  [13926] = 1,
    ACTIONS(1348), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13931] = 2,
    ACTIONS(1654), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1656), 1,
      sym_object_name,
  [13938] = 1,
    ACTIONS(1658), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13943] = 2,
    ACTIONS(1660), 1,
      anon_sym_DOT,
    ACTIONS(1662), 1,
      anon_sym_LPAREN,
  [13950] = 2,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_assignment_tuple,
  [13957] = 2,
    ACTIONS(1664), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1666), 1,
      sym_object_name,
  [13964] = 2,
    ACTIONS(1668), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1670), 1,
      sym_object_name,
  [13971] = 2,
    ACTIONS(1067), 1,
      anon_sym_LBRACE,
    STATE(214), 1,
      sym_option_hash,
  [13978] = 2,
    ACTIONS(1672), 1,
      anon_sym_DOT,
    ACTIONS(1674), 1,
      anon_sym_LPAREN,
  [13985] = 2,
    ACTIONS(1676), 1,
      anon_sym_COMMA,
    ACTIONS(1678), 1,
      anon_sym_RPAREN,
  [13992] = 2,
    ACTIONS(1680), 1,
      sym_object_name,
    STATE(989), 1,
      sym_partition_key_list,
  [13999] = 2,
    ACTIONS(1640), 1,
      sym_object_name,
    STATE(1281), 1,
      sym_keyspace_name,
  [14006] = 2,
    ACTIONS(1682), 1,
      anon_sym_DOT,
    ACTIONS(1684), 1,
      aux_sym_select_element_token1,
  [14013] = 2,
    ACTIONS(1686), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1688), 1,
      sym_object_name,
  [14020] = 2,
    ACTIONS(1690), 1,
      anon_sym_DOT,
    ACTIONS(1692), 1,
      anon_sym_LPAREN,
  [14027] = 2,
    ACTIONS(1608), 1,
      sym__string_literal,
    STATE(357), 1,
      sym_trigger_class,
  [14034] = 2,
    ACTIONS(1574), 1,
      sym_object_name,
    STATE(1330), 1,
      sym_column_list,
  [14041] = 2,
    ACTIONS(1574), 1,
      sym_object_name,
    STATE(1331), 1,
      sym_column_list,
  [14048] = 2,
    ACTIONS(1590), 1,
      aux_sym_role_with_options_token1,
    STATE(120), 1,
      sym_user_password,
  [14055] = 1,
    ACTIONS(1694), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14060] = 2,
    ACTIONS(1696), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1698), 1,
      sym_object_name,
  [14067] = 2,
    ACTIONS(1700), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1702), 1,
      sym_object_name,
  [14074] = 2,
    ACTIONS(1704), 1,
      sym__string_literal,
    ACTIONS(1706), 1,
      sym_object_name,
  [14081] = 2,
    ACTIONS(1708), 1,
      sym__string_literal,
    ACTIONS(1710), 1,
      sym_object_name,
  [14088] = 1,
    ACTIONS(1712), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14093] = 2,
    ACTIONS(1714), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1716), 1,
      sym_object_name,
  [14100] = 2,
    ACTIONS(1540), 1,
      sym_object_name,
    STATE(488), 1,
      sym_assignment_element,
  [14107] = 1,
    ACTIONS(1718), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14112] = 2,
    ACTIONS(1574), 1,
      sym_object_name,
    STATE(1173), 1,
      sym_column_list,
  [14119] = 2,
    ACTIONS(1720), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1722), 1,
      sym_object_name,
  [14126] = 2,
    ACTIONS(1724), 1,
      anon_sym_DOT,
    ACTIONS(1726), 1,
      anon_sym_LPAREN,
  [14133] = 2,
    ACTIONS(1290), 1,
      sym_object_name,
    STATE(205), 1,
      sym_alter_type_rename_item,
  [14140] = 1,
    ACTIONS(1728), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14145] = 2,
    ACTIONS(1540), 1,
      sym_object_name,
    STATE(508), 1,
      sym_assignment_element,
  [14152] = 2,
    ACTIONS(1730), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1732), 1,
      sym_object_name,
  [14159] = 2,
    ACTIONS(1590), 1,
      aux_sym_role_with_options_token1,
    STATE(121), 1,
      sym_user_password,
  [14166] = 1,
    ACTIONS(1120), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14171] = 2,
    ACTIONS(1584), 1,
      sym_object_name,
    STATE(386), 1,
      sym_user_name,
  [14178] = 2,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_assignment_tuple,
  [14185] = 1,
    ACTIONS(1734), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [14190] = 2,
    ACTIONS(1736), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1738), 1,
      sym_object_name,
  [14197] = 2,
    ACTIONS(1740), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1742), 1,
      sym_object_name,
  [14204] = 2,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    STATE(581), 1,
      sym_assignment_tuple,
  [14211] = 2,
    ACTIONS(1574), 1,
      sym_object_name,
    STATE(950), 1,
      sym_column_list,
  [14218] = 2,
    ACTIONS(1744), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1746), 1,
      sym_object_name,
  [14225] = 2,
    ACTIONS(1540), 1,
      sym_object_name,
    STATE(499), 1,
      sym_assignment_element,
  [14232] = 2,
    ACTIONS(1748), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1750), 1,
      sym_object_name,
  [14239] = 2,
    ACTIONS(1752), 1,
      sym_object_name,
    STATE(311), 1,
      sym_alter_table_column_definition,
  [14246] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(399), 1,
      sym_table_name,
  [14253] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(462), 1,
      sym_table_name,
  [14260] = 1,
    ACTIONS(1278), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14265] = 2,
    ACTIONS(1754), 1,
      anon_sym_EQ,
    ACTIONS(1756), 1,
      anon_sym_LBRACK,
  [14272] = 2,
    ACTIONS(1552), 1,
      aux_sym_from_spec_token1,
    STATE(534), 1,
      sym_from_spec,
  [14279] = 2,
    ACTIONS(1540), 1,
      sym_object_name,
    STATE(486), 1,
      sym_assignment_element,
  [14286] = 2,
    ACTIONS(1628), 1,
      sym__string_literal,
    STATE(768), 1,
      sym_option_hash_item,
  [14293] = 1,
    ACTIONS(1758), 2,
      sym__string_literal,
      sym__float_literal,
  [14298] = 2,
    ACTIONS(1574), 1,
      sym_object_name,
    STATE(1350), 1,
      sym_column_list,
  [14305] = 2,
    ACTIONS(1568), 1,
      sym_object_name,
    STATE(87), 1,
      sym_table_name,
  [14312] = 2,
    ACTIONS(1552), 1,
      aux_sym_from_spec_token1,
    STATE(72), 1,
      sym_from_spec,
  [14319] = 2,
    ACTIONS(1760), 1,
      sym__string_literal,
    ACTIONS(1762), 1,
      sym_object_name,
  [14326] = 1,
    ACTIONS(1237), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14331] = 1,
    ACTIONS(1764), 2,
      sym__string_literal,
      sym__decimal_literal,
  [14336] = 1,
    ACTIONS(1766), 1,
      aux_sym_select_statement_token1,
  [14340] = 1,
    ACTIONS(1768), 1,
      aux_sym_drop_type_token1,
  [14344] = 1,
    ACTIONS(1770), 1,
      sym_object_name,
  [14348] = 1,
    ACTIONS(1772), 1,
      sym_object_name,
  [14352] = 1,
    ACTIONS(1774), 1,
      aux_sym_create_function_token1,
  [14356] = 1,
    ACTIONS(1776), 1,
      anon_sym_RPAREN,
  [14360] = 1,
    ACTIONS(1778), 1,
      anon_sym_RPAREN,
  [14364] = 1,
    ACTIONS(1780), 1,
      aux_sym_delete_statement_token3,
  [14368] = 1,
    ACTIONS(1782), 1,
      aux_sym_create_function_token1,
  [14372] = 1,
    ACTIONS(1784), 1,
      anon_sym_RPAREN,
  [14376] = 1,
    ACTIONS(1786), 1,
      aux_sym_return_mode_token2,
  [14380] = 1,
    ACTIONS(1788), 1,
      aux_sym_create_function_token1,
  [14384] = 1,
    ACTIONS(1790), 1,
      sym_object_name,
  [14388] = 1,
    ACTIONS(1792), 1,
      aux_sym_create_function_token2,
  [14392] = 1,
    ACTIONS(1794), 1,
      sym_object_name,
  [14396] = 1,
    ACTIONS(1796), 1,
      sym_object_name,
  [14400] = 1,
    ACTIONS(1798), 1,
      anon_sym_RPAREN,
  [14404] = 1,
    ACTIONS(1800), 1,
      sym_object_name,
  [14408] = 1,
    ACTIONS(1802), 1,
      aux_sym_grant_token2,
  [14412] = 1,
    ACTIONS(1804), 1,
      aux_sym_order_spec_token2,
  [14416] = 1,
    ACTIONS(1806), 1,
      aux_sym_create_aggregate_token3,
  [14420] = 1,
    ACTIONS(1808), 1,
      sym_object_name,
  [14424] = 1,
    ACTIONS(1810), 1,
      sym__decimal_literal,
  [14428] = 1,
    ACTIONS(1812), 1,
      aux_sym_from_spec_token1,
  [14432] = 1,
    ACTIONS(1814), 1,
      sym_object_name,
  [14436] = 1,
    ACTIONS(1816), 1,
      sym_object_name,
  [14440] = 1,
    ACTIONS(1818), 1,
      aux_sym_select_element_token1,
  [14444] = 1,
    ACTIONS(1820), 1,
      aux_sym_create_keyspace_token1,
  [14448] = 1,
    ACTIONS(1822), 1,
      aux_sym_from_spec_token1,
  [14452] = 1,
    ACTIONS(1824), 1,
      sym_object_name,
  [14456] = 1,
    ACTIONS(1826), 1,
      sym_object_name,
  [14460] = 1,
    ACTIONS(1828), 1,
      sym_object_name,
  [14464] = 1,
    ACTIONS(1830), 1,
      sym_object_name,
  [14468] = 1,
    ACTIONS(1832), 1,
      aux_sym_select_statement_token5,
  [14472] = 1,
    ACTIONS(1834), 1,
      sym_object_name,
  [14476] = 1,
    ACTIONS(1836), 1,
      sym_object_name,
  [14480] = 1,
    ACTIONS(1838), 1,
      sym_object_name,
  [14484] = 1,
    ACTIONS(1840), 1,
      aux_sym_update_token2,
  [14488] = 1,
    ACTIONS(1842), 1,
      aux_sym_select_statement_token5,
  [14492] = 1,
    ACTIONS(1844), 1,
      aux_sym_delete_statement_token3,
  [14496] = 1,
    ACTIONS(1846), 1,
      sym_object_name,
  [14500] = 1,
    ACTIONS(1848), 1,
      aux_sym_create_function_token1,
  [14504] = 1,
    ACTIONS(1850), 1,
      sym_object_name,
  [14508] = 1,
    ACTIONS(1852), 1,
      sym_object_name,
  [14512] = 1,
    ACTIONS(1854), 1,
      sym_object_name,
  [14516] = 1,
    ACTIONS(1856), 1,
      anon_sym_RPAREN,
  [14520] = 1,
    ACTIONS(1858), 1,
      sym_object_name,
  [14524] = 1,
    ACTIONS(1860), 1,
      sym_object_name,
  [14528] = 1,
    ACTIONS(1862), 1,
      sym_object_name,
  [14532] = 1,
    ACTIONS(1864), 1,
      aux_sym_delete_statement_token3,
  [14536] = 1,
    ACTIONS(1866), 1,
      sym_object_name,
  [14540] = 1,
    ACTIONS(1868), 1,
      sym_object_name,
  [14544] = 1,
    ACTIONS(1870), 1,
      sym_object_name,
  [14548] = 1,
    ACTIONS(1872), 1,
      anon_sym_RBRACE,
  [14552] = 1,
    ACTIONS(1874), 1,
      sym_object_name,
  [14556] = 1,
    ACTIONS(1876), 1,
      sym_object_name,
  [14560] = 1,
    ACTIONS(1878), 1,
      sym_object_name,
  [14564] = 1,
    ACTIONS(1880), 1,
      anon_sym_LPAREN,
  [14568] = 1,
    ACTIONS(1882), 1,
      anon_sym_EQ,
  [14572] = 1,
    ACTIONS(1884), 1,
      sym_object_name,
  [14576] = 1,
    ACTIONS(1886), 1,
      sym_object_name,
  [14580] = 1,
    ACTIONS(1888), 1,
      anon_sym_RPAREN,
  [14584] = 1,
    ACTIONS(1890), 1,
      aux_sym_insert_statement_token3,
  [14588] = 1,
    ACTIONS(1892), 1,
      sym_object_name,
  [14592] = 1,
    ACTIONS(1894), 1,
      aux_sym_delete_statement_token3,
  [14596] = 1,
    ACTIONS(1896), 1,
      sym_object_name,
  [14600] = 1,
    ACTIONS(1898), 1,
      sym_object_name,
  [14604] = 1,
    ACTIONS(1900), 1,
      aux_sym_delete_statement_token3,
  [14608] = 1,
    ACTIONS(1902), 1,
      anon_sym_LPAREN,
  [14612] = 1,
    ACTIONS(1904), 1,
      anon_sym_RPAREN,
  [14616] = 1,
    ACTIONS(1906), 1,
      anon_sym_LPAREN,
  [14620] = 1,
    ACTIONS(1908), 1,
      sym_object_name,
  [14624] = 1,
    ACTIONS(1910), 1,
      aux_sym_delete_statement_token3,
  [14628] = 1,
    ACTIONS(1912), 1,
      sym_object_name,
  [14632] = 1,
    ACTIONS(1914), 1,
      anon_sym_RPAREN,
  [14636] = 1,
    ACTIONS(1916), 1,
      sym_object_name,
  [14640] = 1,
    ACTIONS(1918), 1,
      anon_sym_LPAREN,
  [14644] = 1,
    ACTIONS(1920), 1,
      sym_object_name,
  [14648] = 1,
    ACTIONS(1922), 1,
      aux_sym_create_aggregate_token3,
  [14652] = 1,
    ACTIONS(1924), 1,
      anon_sym_RPAREN,
  [14656] = 1,
    ACTIONS(1926), 1,
      anon_sym_RPAREN,
  [14660] = 1,
    ACTIONS(1928), 1,
      aux_sym_insert_statement_token3,
  [14664] = 1,
    ACTIONS(1930), 1,
      anon_sym_RPAREN,
  [14668] = 1,
    ACTIONS(1932), 1,
      anon_sym_EQ,
  [14672] = 1,
    ACTIONS(1934), 1,
      aux_sym_create_function_token1,
  [14676] = 1,
    ACTIONS(1936), 1,
      sym_object_name,
  [14680] = 1,
    ACTIONS(1938), 1,
      anon_sym_LPAREN,
  [14684] = 1,
    ACTIONS(1940), 1,
      sym_object_name,
  [14688] = 1,
    ACTIONS(1942), 1,
      anon_sym_LPAREN,
  [14692] = 1,
    ACTIONS(1944), 1,
      anon_sym_EQ,
  [14696] = 1,
    ACTIONS(1946), 1,
      sym_object_name,
  [14700] = 1,
    ACTIONS(1948), 1,
      aux_sym_create_function_token1,
  [14704] = 1,
    ACTIONS(1950), 1,
      sym_object_name,
  [14708] = 1,
    ACTIONS(1952), 1,
      aux_sym_create_function_token2,
  [14712] = 1,
    ACTIONS(1954), 1,
      aux_sym_delete_statement_token3,
  [14716] = 1,
    ACTIONS(1956), 1,
      aux_sym_create_function_token1,
  [14720] = 1,
    ACTIONS(1958), 1,
      aux_sym_create_function_token1,
  [14724] = 1,
    ACTIONS(1960), 1,
      aux_sym_select_element_token1,
  [14728] = 1,
    ACTIONS(1962), 1,
      sym_object_name,
  [14732] = 1,
    ACTIONS(1964), 1,
      aux_sym_create_function_token2,
  [14736] = 1,
    ACTIONS(1966), 1,
      aux_sym_select_statement_token1,
  [14740] = 1,
    ACTIONS(1968), 1,
      sym_object_name,
  [14744] = 1,
    ACTIONS(1970), 1,
      aux_sym_delete_statement_token3,
  [14748] = 1,
    ACTIONS(1972), 1,
      anon_sym_EQ,
  [14752] = 1,
    ACTIONS(1974), 1,
      anon_sym_RPAREN,
  [14756] = 1,
    ACTIONS(1976), 1,
      sym_object_name,
  [14760] = 1,
    ACTIONS(1978), 1,
      aux_sym_create_aggregate_token4,
  [14764] = 1,
    ACTIONS(1980), 1,
      aux_sym_create_aggregate_token5,
  [14768] = 1,
    ACTIONS(1982), 1,
      aux_sym_delete_statement_token3,
  [14772] = 1,
    ACTIONS(1984), 1,
      aux_sym_from_spec_token1,
  [14776] = 1,
    ACTIONS(1986), 1,
      sym_object_name,
  [14780] = 1,
    ACTIONS(1988), 1,
      sym_object_name,
  [14784] = 1,
    ACTIONS(1990), 1,
      anon_sym_EQ,
  [14788] = 1,
    ACTIONS(1992), 1,
      aux_sym_create_materialized_view_token1,
  [14792] = 1,
    ACTIONS(1994), 1,
      aux_sym_create_aggregate_token4,
  [14796] = 1,
    ACTIONS(1996), 1,
      sym_object_name,
  [14800] = 1,
    ACTIONS(1998), 1,
      aux_sym_create_aggregate_token3,
  [14804] = 1,
    ACTIONS(2000), 1,
      aux_sym_delete_statement_token3,
  [14808] = 1,
    ACTIONS(2002), 1,
      anon_sym_LPAREN,
  [14812] = 1,
    ACTIONS(2004), 1,
      anon_sym_RPAREN,
  [14816] = 1,
    ACTIONS(2006), 1,
      anon_sym_LPAREN,
  [14820] = 1,
    ACTIONS(2008), 1,
      aux_sym_create_function_token1,
  [14824] = 1,
    ACTIONS(2010), 1,
      anon_sym_COLON,
  [14828] = 1,
    ACTIONS(2012), 1,
      aux_sym_create_function_token1,
  [14832] = 1,
    ACTIONS(2014), 1,
      aux_sym_create_function_token2,
  [14836] = 1,
    ACTIONS(2016), 1,
      aux_sym_create_keyspace_token1,
  [14840] = 1,
    ACTIONS(2018), 1,
      aux_sym_create_function_token1,
  [14844] = 1,
    ACTIONS(2020), 1,
      anon_sym_LPAREN,
  [14848] = 1,
    ACTIONS(2022), 1,
      anon_sym_RPAREN,
  [14852] = 1,
    ACTIONS(2024), 1,
      aux_sym_create_aggregate_token3,
  [14856] = 1,
    ACTIONS(2026), 1,
      aux_sym_create_aggregate_token4,
  [14860] = 1,
    ACTIONS(2028), 1,
      sym_object_name,
  [14864] = 1,
    ACTIONS(2030), 1,
      aux_sym_delete_statement_token3,
  [14868] = 1,
    ACTIONS(2032), 1,
      sym_object_name,
  [14872] = 1,
    ACTIONS(2034), 1,
      aux_sym_create_function_token2,
  [14876] = 1,
    ACTIONS(2036), 1,
      anon_sym_LPAREN,
  [14880] = 1,
    ACTIONS(2038), 1,
      aux_sym_delete_statement_token3,
  [14884] = 1,
    ACTIONS(2040), 1,
      aux_sym_return_mode_token2,
  [14888] = 1,
    ACTIONS(2042), 1,
      sym_object_name,
  [14892] = 1,
    ACTIONS(2044), 1,
      aux_sym_delete_statement_token3,
  [14896] = 1,
    ACTIONS(2046), 1,
      aux_sym_constant_token2,
  [14900] = 1,
    ACTIONS(2048), 1,
      aux_sym_create_function_token1,
  [14904] = 1,
    ACTIONS(2050), 1,
      anon_sym_COLON,
  [14908] = 1,
    ACTIONS(2052), 1,
      anon_sym_LPAREN,
  [14912] = 1,
    ACTIONS(2054), 1,
      anon_sym_LPAREN,
  [14916] = 1,
    ACTIONS(2056), 1,
      anon_sym_RBRACE,
  [14920] = 1,
    ACTIONS(2058), 1,
      sym_object_name,
  [14924] = 1,
    ACTIONS(2060), 1,
      anon_sym_COLON,
  [14928] = 1,
    ACTIONS(2062), 1,
      anon_sym_RPAREN,
  [14932] = 1,
    ACTIONS(2064), 1,
      anon_sym_EQ,
  [14936] = 1,
    ACTIONS(2066), 1,
      anon_sym_RPAREN,
  [14940] = 1,
    ACTIONS(2068), 1,
      anon_sym_LPAREN,
  [14944] = 1,
    ACTIONS(2070), 1,
      anon_sym_RBRACE,
  [14948] = 1,
    ACTIONS(2072), 1,
      anon_sym_EQ,
  [14952] = 1,
    ACTIONS(2074), 1,
      anon_sym_RPAREN,
  [14956] = 1,
    ACTIONS(2076), 1,
      aux_sym_create_function_token1,
  [14960] = 1,
    ACTIONS(2078), 1,
      anon_sym_RPAREN,
  [14964] = 1,
    ACTIONS(2080), 1,
      anon_sym_RPAREN,
  [14968] = 1,
    ACTIONS(2082), 1,
      aux_sym_create_function_token2,
  [14972] = 1,
    ACTIONS(2084), 1,
      anon_sym_LPAREN,
  [14976] = 1,
    ACTIONS(2086), 1,
      aux_sym_create_function_token1,
  [14980] = 1,
    ACTIONS(2088), 1,
      sym_object_name,
  [14984] = 1,
    ACTIONS(2090), 1,
      aux_sym_create_function_token2,
  [14988] = 1,
    ACTIONS(2092), 1,
      anon_sym_RPAREN,
  [14992] = 1,
    ACTIONS(2094), 1,
      sym__code_block,
  [14996] = 1,
    ACTIONS(2096), 1,
      aux_sym_select_element_token1,
  [15000] = 1,
    ACTIONS(2098), 1,
      sym_object_name,
  [15004] = 1,
    ACTIONS(2100), 1,
      aux_sym_create_aggregate_token3,
  [15008] = 1,
    ACTIONS(2102), 1,
      aux_sym_create_aggregate_token4,
  [15012] = 1,
    ACTIONS(2104), 1,
      sym__decimal_literal,
  [15016] = 1,
    ACTIONS(2106), 1,
      sym_object_name,
  [15020] = 1,
    ACTIONS(2108), 1,
      anon_sym_RPAREN,
  [15024] = 1,
    ACTIONS(2110), 1,
      sym_object_name,
  [15028] = 1,
    ACTIONS(2112), 1,
      anon_sym_LPAREN,
  [15032] = 1,
    ACTIONS(2114), 1,
      aux_sym_delete_statement_token3,
  [15036] = 1,
    ACTIONS(955), 1,
      aux_sym_column_not_null_token1,
  [15040] = 1,
    ACTIONS(2116), 1,
      sym_object_name,
  [15044] = 1,
    ACTIONS(2118), 1,
      aux_sym_relation_contains_key_token2,
  [15048] = 1,
    ACTIONS(2120), 1,
      sym_object_name,
  [15052] = 1,
    ACTIONS(2122), 1,
      anon_sym_RBRACK,
  [15056] = 1,
    ACTIONS(2124), 1,
      aux_sym_order_spec_token1,
  [15060] = 1,
    ACTIONS(2126), 1,
      aux_sym_create_function_token1,
  [15064] = 1,
    ACTIONS(2128), 1,
      aux_sym_select_statement_token1,
  [15068] = 1,
    ACTIONS(2130), 1,
      anon_sym_RPAREN,
  [15072] = 1,
    ACTIONS(2132), 1,
      anon_sym_LPAREN,
  [15076] = 1,
    ACTIONS(2134), 1,
      aux_sym_create_function_token1,
  [15080] = 1,
    ACTIONS(2136), 1,
      aux_sym_using_timestamp_spec_token1,
  [15084] = 1,
    ACTIONS(2138), 1,
      sym_object_name,
  [15088] = 1,
    ACTIONS(2140), 1,
      aux_sym_create_function_token2,
  [15092] = 1,
    ACTIONS(2142), 1,
      aux_sym_order_spec_token2,
  [15096] = 1,
    ACTIONS(2144), 1,
      sym__decimal_literal,
  [15100] = 1,
    ACTIONS(2146), 1,
      aux_sym_create_aggregate_token3,
  [15104] = 1,
    ACTIONS(2148), 1,
      sym_object_name,
  [15108] = 1,
    ACTIONS(2150), 1,
      aux_sym_select_statement_token5,
  [15112] = 1,
    ACTIONS(2152), 1,
      sym_object_name,
  [15116] = 1,
    ACTIONS(2154), 1,
      anon_sym_RPAREN,
  [15120] = 1,
    ACTIONS(2156), 1,
      anon_sym_LPAREN,
  [15124] = 1,
    ACTIONS(2158), 1,
      sym__string_literal,
  [15128] = 1,
    ACTIONS(2160), 1,
      aux_sym_insert_statement_token3,
  [15132] = 1,
    ACTIONS(2162), 1,
      anon_sym_LPAREN,
  [15136] = 1,
    ACTIONS(2164), 1,
      aux_sym_insert_statement_token3,
  [15140] = 1,
    ACTIONS(2166), 1,
      aux_sym_select_statement_token5,
  [15144] = 1,
    ACTIONS(2168), 1,
      sym_object_name,
  [15148] = 1,
    ACTIONS(2170), 1,
      sym_object_name,
  [15152] = 1,
    ACTIONS(2172), 1,
      sym_object_name,
  [15156] = 1,
    ACTIONS(2174), 1,
      anon_sym_COMMA,
  [15160] = 1,
    ACTIONS(2176), 1,
      aux_sym_create_index_token3,
  [15164] = 1,
    ACTIONS(2178), 1,
      anon_sym_RPAREN,
  [15168] = 1,
    ACTIONS(2180), 1,
      aux_sym_insert_statement_token3,
  [15172] = 1,
    ACTIONS(2182), 1,
      sym__boolean_literal,
  [15176] = 1,
    ACTIONS(2184), 1,
      sym_object_name,
  [15180] = 1,
    ACTIONS(2186), 1,
      aux_sym_create_function_token1,
  [15184] = 1,
    ACTIONS(2188), 1,
      sym__decimal_literal,
  [15188] = 1,
    ACTIONS(2190), 1,
      sym_object_name,
  [15192] = 1,
    ACTIONS(2192), 1,
      aux_sym_create_function_token2,
  [15196] = 1,
    ACTIONS(2194), 1,
      sym_object_name,
  [15200] = 1,
    ACTIONS(2196), 1,
      aux_sym_select_element_token1,
  [15204] = 1,
    ACTIONS(2198), 1,
      sym_object_name,
  [15208] = 1,
    ACTIONS(2200), 1,
      aux_sym_create_function_token2,
  [15212] = 1,
    ACTIONS(2202), 1,
      aux_sym_materialized_view_options_token1,
  [15216] = 1,
    ACTIONS(2204), 1,
      sym__code_block,
  [15220] = 1,
    ACTIONS(2206), 1,
      aux_sym_select_element_token1,
  [15224] = 1,
    ACTIONS(2208), 1,
      sym_object_name,
  [15228] = 1,
    ACTIONS(2210), 1,
      sym_object_name,
  [15232] = 1,
    ACTIONS(2212), 1,
      aux_sym_create_aggregate_token5,
  [15236] = 1,
    ACTIONS(2214), 1,
      aux_sym_create_aggregate_token6,
  [15240] = 1,
    ACTIONS(2216), 1,
      aux_sym_from_spec_token1,
  [15244] = 1,
    ACTIONS(2218), 1,
      sym_object_name,
  [15248] = 1,
    ACTIONS(2220), 1,
      sym_object_name,
  [15252] = 1,
    ACTIONS(2222), 1,
      aux_sym_create_materialized_view_token1,
  [15256] = 1,
    ACTIONS(2224), 1,
      aux_sym_create_materialized_view_token1,
  [15260] = 1,
    ACTIONS(2226), 1,
      aux_sym_insert_statement_token3,
  [15264] = 1,
    ACTIONS(2228), 1,
      aux_sym_materialized_view_options_token1,
  [15268] = 1,
    ACTIONS(2230), 1,
      sym_object_name,
  [15272] = 1,
    ACTIONS(2232), 1,
      aux_sym_update_token2,
  [15276] = 1,
    ACTIONS(2234), 1,
      anon_sym_LPAREN,
  [15280] = 1,
    ACTIONS(2236), 1,
      aux_sym_alter_table_drop_compact_storage_token2,
  [15284] = 1,
    ACTIONS(2238), 1,
      anon_sym_EQ,
  [15288] = 1,
    ACTIONS(2240), 1,
      anon_sym_EQ,
  [15292] = 1,
    ACTIONS(2242), 1,
      sym_object_name,
  [15296] = 1,
    ACTIONS(2244), 1,
      sym_object_name,
  [15300] = 1,
    ACTIONS(2246), 1,
      aux_sym_create_function_token1,
  [15304] = 1,
    ACTIONS(2248), 1,
      aux_sym_grant_token2,
  [15308] = 1,
    ACTIONS(2250), 1,
      aux_sym_create_function_token2,
  [15312] = 1,
    ACTIONS(2252), 1,
      aux_sym_delete_statement_token3,
  [15316] = 1,
    ACTIONS(2254), 1,
      aux_sym_create_function_token1,
  [15320] = 1,
    ACTIONS(2256), 1,
      aux_sym_select_element_token1,
  [15324] = 1,
    ACTIONS(2258), 1,
      sym_object_name,
  [15328] = 1,
    ACTIONS(2260), 1,
      aux_sym_create_function_token2,
  [15332] = 1,
    ACTIONS(2262), 1,
      anon_sym_RPAREN,
  [15336] = 1,
    ACTIONS(2264), 1,
      sym_object_name,
  [15340] = 1,
    ACTIONS(2266), 1,
      aux_sym_create_aggregate_token4,
  [15344] = 1,
    ACTIONS(2268), 1,
      aux_sym_create_aggregate_token5,
  [15348] = 1,
    ACTIONS(2270), 1,
      aux_sym_delete_statement_token3,
  [15352] = 1,
    ACTIONS(2272), 1,
      anon_sym_EQ,
  [15356] = 1,
    ACTIONS(2274), 1,
      sym_object_name,
  [15360] = 1,
    ACTIONS(2276), 1,
      anon_sym_RPAREN,
  [15364] = 1,
    ACTIONS(2278), 1,
      anon_sym_LBRACE,
  [15368] = 1,
    ACTIONS(2280), 1,
      aux_sym_grant_token2,
  [15372] = 1,
    ACTIONS(2282), 1,
      sym_object_name,
  [15376] = 1,
    ACTIONS(2284), 1,
      sym_object_name,
  [15380] = 1,
    ACTIONS(2286), 1,
      anon_sym_EQ,
  [15384] = 1,
    ACTIONS(2288), 1,
      aux_sym_delete_statement_token3,
  [15388] = 1,
    ACTIONS(2290), 1,
      aux_sym_create_function_token2,
  [15392] = 1,
    ACTIONS(1033), 1,
      sym_object_name,
  [15396] = 1,
    ACTIONS(2292), 1,
      aux_sym_create_function_token1,
  [15400] = 1,
    ACTIONS(2294), 1,
      aux_sym_select_element_token1,
  [15404] = 1,
    ACTIONS(2296), 1,
      sym_object_name,
  [15408] = 1,
    ACTIONS(2298), 1,
      aux_sym_create_function_token2,
  [15412] = 1,
    ACTIONS(2300), 1,
      sym__code_block,
  [15416] = 1,
    ACTIONS(2302), 1,
      aux_sym_select_element_token1,
  [15420] = 1,
    ACTIONS(2304), 1,
      sym_object_name,
  [15424] = 1,
    ACTIONS(2306), 1,
      aux_sym_delete_statement_token3,
  [15428] = 1,
    ACTIONS(2308), 1,
      sym__code_block,
  [15432] = 1,
    ACTIONS(2310), 1,
      aux_sym_create_aggregate_token4,
  [15436] = 1,
    ACTIONS(2312), 1,
      aux_sym_create_aggregate_token5,
  [15440] = 1,
    ACTIONS(2314), 1,
      sym_object_name,
  [15444] = 1,
    ACTIONS(2316), 1,
      aux_sym_delete_statement_token3,
  [15448] = 1,
    ACTIONS(2318), 1,
      sym_object_name,
  [15452] = 1,
    ACTIONS(2320), 1,
      sym_object_name,
  [15456] = 1,
    ACTIONS(2322), 1,
      aux_sym_create_materialized_view_token1,
  [15460] = 1,
    ACTIONS(2324), 1,
      aux_sym_select_statement_token5,
  [15464] = 1,
    ACTIONS(2326), 1,
      aux_sym_relation_contains_key_token2,
  [15468] = 1,
    ACTIONS(2328), 1,
      aux_sym_relation_contains_key_token2,
  [15472] = 1,
    ACTIONS(2330), 1,
      aux_sym_constant_token2,
  [15476] = 1,
    ACTIONS(2332), 1,
      sym_object_name,
  [15480] = 1,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
  [15484] = 1,
    ACTIONS(2334), 1,
      aux_sym_create_index_token3,
  [15488] = 1,
    ACTIONS(2336), 1,
      sym_object_name,
  [15492] = 1,
    ACTIONS(2338), 1,
      anon_sym_RPAREN,
  [15496] = 1,
    ACTIONS(2340), 1,
      aux_sym_delete_statement_token3,
  [15500] = 1,
    ACTIONS(2342), 1,
      aux_sym_create_function_token1,
  [15504] = 1,
    ACTIONS(2344), 1,
      anon_sym_RPAREN,
  [15508] = 1,
    ACTIONS(2346), 1,
      anon_sym_LPAREN,
  [15512] = 1,
    ACTIONS(2348), 1,
      aux_sym_create_function_token2,
  [15516] = 1,
    ACTIONS(2350), 1,
      aux_sym_delete_statement_token3,
  [15520] = 1,
    ACTIONS(2352), 1,
      aux_sym_create_function_token1,
  [15524] = 1,
    ACTIONS(2354), 1,
      sym_object_name,
  [15528] = 1,
    ACTIONS(2356), 1,
      aux_sym_create_function_token2,
  [15532] = 1,
    ACTIONS(2358), 1,
      aux_sym_delete_statement_token3,
  [15536] = 1,
    ACTIONS(2360), 1,
      sym__code_block,
  [15540] = 1,
    ACTIONS(2362), 1,
      aux_sym_select_element_token1,
  [15544] = 1,
    ACTIONS(2364), 1,
      sym_object_name,
  [15548] = 1,
    ACTIONS(2366), 1,
      aux_sym_create_aggregate_token3,
  [15552] = 1,
    ACTIONS(2368), 1,
      aux_sym_create_aggregate_token4,
  [15556] = 1,
    ACTIONS(2370), 1,
      sym_object_name,
  [15560] = 1,
    ACTIONS(2372), 1,
      sym_object_name,
  [15564] = 1,
    ACTIONS(2374), 1,
      aux_sym_materialized_view_options_token1,
  [15568] = 1,
    ACTIONS(2376), 1,
      anon_sym_RPAREN,
  [15572] = 1,
    ACTIONS(2378), 1,
      aux_sym_insert_statement_token3,
  [15576] = 1,
    ACTIONS(2380), 1,
      sym_object_name,
  [15580] = 1,
    ACTIONS(2382), 1,
      aux_sym_create_function_token2,
  [15584] = 1,
    ACTIONS(2384), 1,
      anon_sym_LPAREN,
  [15588] = 1,
    ACTIONS(2386), 1,
      sym__code_block,
  [15592] = 1,
    ACTIONS(2388), 1,
      aux_sym_select_element_token1,
  [15596] = 1,
    ACTIONS(2390), 1,
      sym_object_name,
  [15600] = 1,
    ACTIONS(2392), 1,
      aux_sym_insert_statement_token3,
  [15604] = 1,
    ACTIONS(2394), 1,
      sym__code_block,
  [15608] = 1,
    ACTIONS(2396), 1,
      aux_sym_select_element_token1,
  [15612] = 1,
    ACTIONS(2398), 1,
      aux_sym_using_timestamp_spec_token1,
  [15616] = 1,
    ACTIONS(2400), 1,
      sym_object_name,
  [15620] = 1,
    ACTIONS(2402), 1,
      sym_object_name,
  [15624] = 1,
    ACTIONS(2404), 1,
      aux_sym_create_aggregate_token6,
  [15628] = 1,
    ACTIONS(2406), 1,
      aux_sym_insert_statement_token3,
  [15632] = 1,
    ACTIONS(2408), 1,
      sym_object_name,
  [15636] = 1,
    ACTIONS(2410), 1,
      aux_sym_insert_statement_token3,
  [15640] = 1,
    ACTIONS(2412), 1,
      sym_object_name,
  [15644] = 1,
    ACTIONS(2414), 1,
      sym_object_name,
  [15648] = 1,
    ACTIONS(2416), 1,
      aux_sym_relation_contains_key_token2,
  [15652] = 1,
    ACTIONS(2418), 1,
      aux_sym_create_materialized_view_token1,
  [15656] = 1,
    ACTIONS(2420), 1,
      anon_sym_LPAREN,
  [15660] = 1,
    ACTIONS(2422), 1,
      anon_sym_LPAREN,
  [15664] = 1,
    ACTIONS(2424), 1,
      aux_sym_from_spec_token1,
  [15668] = 1,
    ACTIONS(2426), 1,
      aux_sym_select_statement_token1,
  [15672] = 1,
    ACTIONS(2428), 1,
      anon_sym_RPAREN,
  [15676] = 1,
    ACTIONS(2430), 1,
      aux_sym_insert_statement_token3,
  [15680] = 1,
    ACTIONS(2432), 1,
      aux_sym_create_function_token1,
  [15684] = 1,
    ACTIONS(2434), 1,
      sym_object_name,
  [15688] = 1,
    ACTIONS(2436), 1,
      sym_object_name,
  [15692] = 1,
    ACTIONS(2438), 1,
      aux_sym_create_function_token2,
  [15696] = 1,
    ACTIONS(2440), 1,
      aux_sym_insert_statement_token3,
  [15700] = 1,
    ACTIONS(2442), 1,
      aux_sym_select_element_token1,
  [15704] = 1,
    ACTIONS(2444), 1,
      sym_object_name,
  [15708] = 1,
    ACTIONS(2446), 1,
      aux_sym_create_function_token2,
  [15712] = 1,
    ACTIONS(2448), 1,
      anon_sym_RPAREN,
  [15716] = 1,
    ACTIONS(2450), 1,
      sym__code_block,
  [15720] = 1,
    ACTIONS(2452), 1,
      aux_sym_select_element_token1,
  [15724] = 1,
    ACTIONS(2454), 1,
      sym_object_name,
  [15728] = 1,
    ACTIONS(2456), 1,
      aux_sym_insert_statement_token3,
  [15732] = 1,
    ACTIONS(2458), 1,
      aux_sym_create_aggregate_token5,
  [15736] = 1,
    ACTIONS(2460), 1,
      aux_sym_create_aggregate_token6,
  [15740] = 1,
    ACTIONS(2462), 1,
      aux_sym_select_element_token1,
  [15744] = 1,
    ACTIONS(2464), 1,
      sym_object_name,
  [15748] = 1,
    ACTIONS(2466), 1,
      aux_sym_create_function_token2,
  [15752] = 1,
    ACTIONS(2468), 1,
      aux_sym_materialized_view_options_token1,
  [15756] = 1,
    ACTIONS(2470), 1,
      sym__code_block,
  [15760] = 1,
    ACTIONS(2472), 1,
      aux_sym_select_element_token1,
  [15764] = 1,
    ACTIONS(2474), 1,
      aux_sym_materialized_view_options_token1,
  [15768] = 1,
    ACTIONS(2476), 1,
      sym__code_block,
  [15772] = 1,
    ACTIONS(2478), 1,
      aux_sym_create_aggregate_token5,
  [15776] = 1,
    ACTIONS(2480), 1,
      aux_sym_create_aggregate_token6,
  [15780] = 1,
    ACTIONS(2482), 1,
      aux_sym_insert_statement_token3,
  [15784] = 1,
    ACTIONS(2484), 1,
      aux_sym_create_index_token3,
  [15788] = 1,
    ACTIONS(2486), 1,
      anon_sym_COLON,
  [15792] = 1,
    ACTIONS(2488), 1,
      aux_sym_delete_statement_token3,
  [15796] = 1,
    ACTIONS(2490), 1,
      sym_object_name,
  [15800] = 1,
    ACTIONS(2492), 1,
      aux_sym_create_function_token1,
  [15804] = 1,
    ACTIONS(2494), 1,
      sym_object_name,
  [15808] = 1,
    ACTIONS(2496), 1,
      aux_sym_create_materialized_view_token1,
  [15812] = 1,
    ACTIONS(2498), 1,
      aux_sym_create_materialized_view_token1,
  [15816] = 1,
    ACTIONS(2500), 1,
      anon_sym_LPAREN,
  [15820] = 1,
    ACTIONS(2502), 1,
      aux_sym_relation_contains_key_token2,
  [15824] = 1,
    ACTIONS(2504), 1,
      aux_sym_create_index_token3,
  [15828] = 1,
    ACTIONS(2506), 1,
      aux_sym_constant_token2,
  [15832] = 1,
    ACTIONS(2508), 1,
      aux_sym_create_index_token3,
  [15836] = 1,
    ACTIONS(2510), 1,
      aux_sym_create_function_token2,
  [15840] = 1,
    ACTIONS(2512), 1,
      aux_sym_insert_statement_token3,
  [15844] = 1,
    ACTIONS(2514), 1,
      aux_sym_create_function_token1,
  [15848] = 1,
    ACTIONS(2516), 1,
      aux_sym_select_element_token1,
  [15852] = 1,
    ACTIONS(2518), 1,
      sym_object_name,
  [15856] = 1,
    ACTIONS(2520), 1,
      aux_sym_create_function_token2,
  [15860] = 1,
    ACTIONS(2522), 1,
      sym__code_block,
  [15864] = 1,
    ACTIONS(2524), 1,
      aux_sym_select_element_token1,
  [15868] = 1,
    ACTIONS(2526), 1,
      sym_object_name,
  [15872] = 1,
    ACTIONS(2528), 1,
      aux_sym_create_index_token3,
  [15876] = 1,
    ACTIONS(2530), 1,
      sym__code_block,
  [15880] = 1,
    ACTIONS(2532), 1,
      aux_sym_create_aggregate_token4,
  [15884] = 1,
    ACTIONS(2534), 1,
      aux_sym_create_aggregate_token5,
  [15888] = 1,
    ACTIONS(2536), 1,
      sym_object_name,
  [15892] = 1,
    ACTIONS(2538), 1,
      anon_sym_RBRACK,
  [15896] = 1,
    ACTIONS(2540), 1,
      sym__code_block,
  [15900] = 1,
    ACTIONS(2542), 1,
      aux_sym_select_element_token1,
  [15904] = 1,
    ACTIONS(2544), 1,
      sym_object_name,
  [15908] = 1,
    ACTIONS(2546), 1,
      aux_sym_insert_statement_token3,
  [15912] = 1,
    ACTIONS(2548), 1,
      sym__code_block,
  [15916] = 1,
    ACTIONS(2550), 1,
      sym_object_name,
  [15920] = 1,
    ACTIONS(2552), 1,
      sym_object_name,
  [15924] = 1,
    ACTIONS(2554), 1,
      aux_sym_create_keyspace_token1,
  [15928] = 1,
    ACTIONS(2556), 1,
      anon_sym_RPAREN,
  [15932] = 1,
    ACTIONS(2558), 1,
      anon_sym_LPAREN,
  [15936] = 1,
    ACTIONS(2560), 1,
      sym_object_name,
  [15940] = 1,
    ACTIONS(2562), 1,
      sym_object_name,
  [15944] = 1,
    ACTIONS(2564), 1,
      sym_object_name,
  [15948] = 1,
    ACTIONS(2566), 1,
      anon_sym_LPAREN,
  [15952] = 1,
    ACTIONS(2568), 1,
      anon_sym_LPAREN,
  [15956] = 1,
    ACTIONS(2570), 1,
      anon_sym_RPAREN,
  [15960] = 1,
    ACTIONS(2572), 1,
      sym_object_name,
  [15964] = 1,
    ACTIONS(2574), 1,
      aux_sym_relation_contains_key_token2,
  [15968] = 1,
    ACTIONS(2576), 1,
      anon_sym_LPAREN,
  [15972] = 1,
    ACTIONS(2578), 1,
      aux_sym_relation_contains_key_token2,
  [15976] = 1,
    ACTIONS(2580), 1,
      aux_sym_relation_contains_key_token2,
  [15980] = 1,
    ACTIONS(2582), 1,
      anon_sym_RPAREN,
  [15984] = 1,
    ACTIONS(2584), 1,
      anon_sym_LPAREN,
  [15988] = 1,
    ACTIONS(2586), 1,
      anon_sym_RPAREN,
  [15992] = 1,
    ACTIONS(2588), 1,
      anon_sym_RPAREN,
  [15996] = 1,
    ACTIONS(2590), 1,
      sym_object_name,
  [16000] = 1,
    ACTIONS(2592), 1,
      anon_sym_STAR,
  [16004] = 1,
    ACTIONS(2594), 1,
      sym_object_name,
  [16008] = 1,
    ACTIONS(2596), 1,
      aux_sym_create_function_token2,
  [16012] = 1,
    ACTIONS(2598), 1,
      aux_sym_relation_contains_key_token2,
  [16016] = 1,
    ACTIONS(2600), 1,
      sym__code_block,
  [16020] = 1,
    ACTIONS(2602), 1,
      aux_sym_select_element_token1,
  [16024] = 1,
    ACTIONS(2604), 1,
      sym_object_name,
  [16028] = 1,
    ACTIONS(2606), 1,
      anon_sym_RPAREN,
  [16032] = 1,
    ACTIONS(2608), 1,
      sym__code_block,
  [16036] = 1,
    ACTIONS(2610), 1,
      aux_sym_select_element_token1,
  [16040] = 1,
    ACTIONS(2612), 1,
      sym_object_name,
  [16044] = 1,
    ACTIONS(2614), 1,
      sym_object_name,
  [16048] = 1,
    ACTIONS(2616), 1,
      sym_object_name,
  [16052] = 1,
    ACTIONS(2618), 1,
      aux_sym_create_aggregate_token6,
  [16056] = 1,
    ACTIONS(2620), 1,
      aux_sym_insert_statement_token2,
  [16060] = 1,
    ACTIONS(2622), 1,
      anon_sym_RPAREN,
  [16064] = 1,
    ACTIONS(2624), 1,
      sym__code_block,
  [16068] = 1,
    ACTIONS(2626), 1,
      aux_sym_select_element_token1,
  [16072] = 1,
    ACTIONS(2628), 1,
      sym_object_name,
  [16076] = 1,
    ACTIONS(2630), 1,
      aux_sym_create_aggregate_token6,
  [16080] = 1,
    ACTIONS(2632), 1,
      aux_sym_drop_materialized_view_token2,
  [16084] = 1,
    ACTIONS(2634), 1,
      aux_sym_delete_statement_token3,
  [16088] = 1,
    ACTIONS(2636), 1,
      sym_object_name,
  [16092] = 1,
    ACTIONS(2638), 1,
      anon_sym_RPAREN,
  [16096] = 1,
    ACTIONS(2640), 1,
      aux_sym_materialized_view_options_token1,
  [16100] = 1,
    ACTIONS(2642), 1,
      anon_sym_LBRACE,
  [16104] = 1,
    ACTIONS(2644), 1,
      anon_sym_RPAREN,
  [16108] = 1,
    ACTIONS(2646), 1,
      sym_object_name,
  [16112] = 1,
    ACTIONS(2648), 1,
      aux_sym_constant_token2,
  [16116] = 1,
    ACTIONS(2650), 1,
      aux_sym_create_materialized_view_token1,
  [16120] = 1,
    ACTIONS(2652), 1,
      anon_sym_LPAREN,
  [16124] = 1,
    ACTIONS(2654), 1,
      anon_sym_LPAREN,
  [16128] = 1,
    ACTIONS(2656), 1,
      anon_sym_RPAREN,
  [16132] = 1,
    ACTIONS(2658), 1,
      aux_sym_create_index_token3,
  [16136] = 1,
    ACTIONS(2660), 1,
      aux_sym_create_index_token3,
  [16140] = 1,
    ACTIONS(2662), 1,
      aux_sym_create_index_token3,
  [16144] = 1,
    ACTIONS(2664), 1,
      aux_sym_create_function_token1,
  [16148] = 1,
    ACTIONS(2666), 1,
      anon_sym_RPAREN,
  [16152] = 1,
    ACTIONS(2668), 1,
      aux_sym_select_element_token1,
  [16156] = 1,
    ACTIONS(2670), 1,
      sym_object_name,
  [16160] = 1,
    ACTIONS(2672), 1,
      aux_sym_create_function_token2,
  [16164] = 1,
    ACTIONS(2674), 1,
      aux_sym_update_token2,
  [16168] = 1,
    ACTIONS(2676), 1,
      sym__code_block,
  [16172] = 1,
    ACTIONS(2678), 1,
      aux_sym_select_element_token1,
  [16176] = 1,
    ACTIONS(2680), 1,
      aux_sym_drop_materialized_view_token2,
  [16180] = 1,
    ACTIONS(2682), 1,
      sym__code_block,
  [16184] = 1,
    ACTIONS(2684), 1,
      aux_sym_create_aggregate_token5,
  [16188] = 1,
    ACTIONS(2686), 1,
      aux_sym_create_aggregate_token6,
  [16192] = 1,
    ACTIONS(2688), 1,
      anon_sym_LPAREN,
  [16196] = 1,
    ACTIONS(2690), 1,
      sym__string_literal,
  [16200] = 1,
    ACTIONS(2692), 1,
      sym__code_block,
  [16204] = 1,
    ACTIONS(2690), 1,
      sym__boolean_literal,
  [16208] = 1,
    ACTIONS(2694), 1,
      aux_sym_relation_contains_key_token2,
  [16212] = 1,
    ACTIONS(2696), 1,
      aux_sym_select_statement_token5,
  [16216] = 1,
    ACTIONS(2698), 1,
      aux_sym_create_aggregate_token3,
  [16220] = 1,
    ACTIONS(2700), 1,
      sym_object_name,
  [16224] = 1,
    ACTIONS(2702), 1,
      anon_sym_RPAREN,
  [16228] = 1,
    ACTIONS(2704), 1,
      aux_sym_select_element_token1,
  [16232] = 1,
    ACTIONS(2706), 1,
      aux_sym_update_token2,
  [16236] = 1,
    ACTIONS(2708), 1,
      aux_sym_create_aggregate_token2,
  [16240] = 1,
    ACTIONS(2710), 1,
      aux_sym_using_timestamp_spec_token1,
  [16244] = 1,
    ACTIONS(2712), 1,
      sym__code_block,
  [16248] = 1,
    ACTIONS(2714), 1,
      aux_sym_select_element_token1,
  [16252] = 1,
    ACTIONS(2716), 1,
      sym_object_name,
  [16256] = 1,
    ACTIONS(2718), 1,
      sym_object_name,
  [16260] = 1,
    ACTIONS(2720), 1,
      sym__code_block,
  [16264] = 1,
    ACTIONS(2722), 1,
      sym_object_name,
  [16268] = 1,
    ACTIONS(2724), 1,
      sym_object_name,
  [16272] = 1,
    ACTIONS(2726), 1,
      aux_sym_drop_materialized_view_token2,
  [16276] = 1,
    ACTIONS(2728), 1,
      aux_sym_materialized_view_options_token1,
  [16280] = 1,
    ACTIONS(2730), 1,
      sym_object_name,
  [16284] = 1,
    ACTIONS(2732), 1,
      anon_sym_LBRACE,
  [16288] = 1,
    ACTIONS(2734), 1,
      anon_sym_LPAREN,
  [16292] = 1,
    ACTIONS(2736), 1,
      anon_sym_RPAREN,
  [16296] = 1,
    ACTIONS(2738), 1,
      anon_sym_RPAREN,
  [16300] = 1,
    ACTIONS(2740), 1,
      sym_object_name,
  [16304] = 1,
    ACTIONS(2742), 1,
      aux_sym_delete_statement_token3,
  [16308] = 1,
    ACTIONS(2744), 1,
      sym_object_name,
  [16312] = 1,
    ACTIONS(2746), 1,
      sym_object_name,
  [16316] = 1,
    ACTIONS(2748), 1,
      aux_sym_begin_batch_token4,
  [16320] = 1,
    ACTIONS(2750), 1,
      sym__code_block,
  [16324] = 1,
    ACTIONS(2752), 1,
      aux_sym_select_element_token1,
  [16328] = 1,
    ACTIONS(2754), 1,
      sym_object_name,
  [16332] = 1,
    ACTIONS(2756), 1,
      aux_sym_create_aggregate_token6,
  [16336] = 1,
    ACTIONS(2758), 1,
      sym_object_name,
  [16340] = 1,
    ACTIONS(2760), 1,
      sym_object_name,
  [16344] = 1,
    ACTIONS(2762), 1,
      sym_object_name,
  [16348] = 1,
    ACTIONS(2764), 1,
      sym_object_name,
  [16352] = 1,
    ACTIONS(2766), 1,
      aux_sym_resource_token2,
  [16356] = 1,
    ACTIONS(2768), 1,
      sym_object_name,
  [16360] = 1,
    ACTIONS(2770), 1,
      sym_object_name,
  [16364] = 1,
    ACTIONS(2772), 1,
      sym__code_block,
  [16368] = 1,
    ACTIONS(2774), 1,
      sym_object_name,
  [16372] = 1,
    ACTIONS(2776), 1,
      anon_sym_RPAREN,
  [16376] = 1,
    ACTIONS(2778), 1,
      ts_builtin_sym_end,
  [16380] = 1,
    ACTIONS(2780), 1,
      aux_sym_begin_batch_token4,
  [16384] = 1,
    ACTIONS(2782), 1,
      sym_object_name,
  [16388] = 1,
    ACTIONS(2784), 1,
      sym_object_name,
  [16392] = 1,
    ACTIONS(2786), 1,
      sym_object_name,
  [16396] = 1,
    ACTIONS(2788), 1,
      aux_sym_insert_statement_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 92,
  [SMALL_STATE(4)] = 184,
  [SMALL_STATE(5)] = 221,
  [SMALL_STATE(6)] = 253,
  [SMALL_STATE(7)] = 288,
  [SMALL_STATE(8)] = 323,
  [SMALL_STATE(9)] = 358,
  [SMALL_STATE(10)] = 393,
  [SMALL_STATE(11)] = 428,
  [SMALL_STATE(12)] = 463,
  [SMALL_STATE(13)] = 498,
  [SMALL_STATE(14)] = 533,
  [SMALL_STATE(15)] = 568,
  [SMALL_STATE(16)] = 603,
  [SMALL_STATE(17)] = 638,
  [SMALL_STATE(18)] = 673,
  [SMALL_STATE(19)] = 708,
  [SMALL_STATE(20)] = 743,
  [SMALL_STATE(21)] = 778,
  [SMALL_STATE(22)] = 813,
  [SMALL_STATE(23)] = 848,
  [SMALL_STATE(24)] = 883,
  [SMALL_STATE(25)] = 918,
  [SMALL_STATE(26)] = 953,
  [SMALL_STATE(27)] = 988,
  [SMALL_STATE(28)] = 1023,
  [SMALL_STATE(29)] = 1058,
  [SMALL_STATE(30)] = 1093,
  [SMALL_STATE(31)] = 1128,
  [SMALL_STATE(32)] = 1163,
  [SMALL_STATE(33)] = 1198,
  [SMALL_STATE(34)] = 1233,
  [SMALL_STATE(35)] = 1268,
  [SMALL_STATE(36)] = 1303,
  [SMALL_STATE(37)] = 1338,
  [SMALL_STATE(38)] = 1373,
  [SMALL_STATE(39)] = 1408,
  [SMALL_STATE(40)] = 1443,
  [SMALL_STATE(41)] = 1478,
  [SMALL_STATE(42)] = 1513,
  [SMALL_STATE(43)] = 1548,
  [SMALL_STATE(44)] = 1583,
  [SMALL_STATE(45)] = 1618,
  [SMALL_STATE(46)] = 1653,
  [SMALL_STATE(47)] = 1688,
  [SMALL_STATE(48)] = 1723,
  [SMALL_STATE(49)] = 1758,
  [SMALL_STATE(50)] = 1793,
  [SMALL_STATE(51)] = 1828,
  [SMALL_STATE(52)] = 1863,
  [SMALL_STATE(53)] = 1898,
  [SMALL_STATE(54)] = 1933,
  [SMALL_STATE(55)] = 1968,
  [SMALL_STATE(56)] = 2003,
  [SMALL_STATE(57)] = 2038,
  [SMALL_STATE(58)] = 2070,
  [SMALL_STATE(59)] = 2102,
  [SMALL_STATE(60)] = 2132,
  [SMALL_STATE(61)] = 2164,
  [SMALL_STATE(62)] = 2195,
  [SMALL_STATE(63)] = 2222,
  [SMALL_STATE(64)] = 2253,
  [SMALL_STATE(65)] = 2284,
  [SMALL_STATE(66)] = 2311,
  [SMALL_STATE(67)] = 2342,
  [SMALL_STATE(68)] = 2369,
  [SMALL_STATE(69)] = 2395,
  [SMALL_STATE(70)] = 2435,
  [SMALL_STATE(71)] = 2465,
  [SMALL_STATE(72)] = 2505,
  [SMALL_STATE(73)] = 2545,
  [SMALL_STATE(74)] = 2575,
  [SMALL_STATE(75)] = 2600,
  [SMALL_STATE(76)] = 2625,
  [SMALL_STATE(77)] = 2654,
  [SMALL_STATE(78)] = 2693,
  [SMALL_STATE(79)] = 2718,
  [SMALL_STATE(80)] = 2747,
  [SMALL_STATE(81)] = 2772,
  [SMALL_STATE(82)] = 2797,
  [SMALL_STATE(83)] = 2822,
  [SMALL_STATE(84)] = 2847,
  [SMALL_STATE(85)] = 2872,
  [SMALL_STATE(86)] = 2897,
  [SMALL_STATE(87)] = 2922,
  [SMALL_STATE(88)] = 2946,
  [SMALL_STATE(89)] = 2970,
  [SMALL_STATE(90)] = 2994,
  [SMALL_STATE(91)] = 3028,
  [SMALL_STATE(92)] = 3052,
  [SMALL_STATE(93)] = 3086,
  [SMALL_STATE(94)] = 3120,
  [SMALL_STATE(95)] = 3143,
  [SMALL_STATE(96)] = 3168,
  [SMALL_STATE(97)] = 3193,
  [SMALL_STATE(98)] = 3218,
  [SMALL_STATE(99)] = 3243,
  [SMALL_STATE(100)] = 3270,
  [SMALL_STATE(101)] = 3295,
  [SMALL_STATE(102)] = 3323,
  [SMALL_STATE(103)] = 3351,
  [SMALL_STATE(104)] = 3377,
  [SMALL_STATE(105)] = 3403,
  [SMALL_STATE(106)] = 3425,
  [SMALL_STATE(107)] = 3453,
  [SMALL_STATE(108)] = 3481,
  [SMALL_STATE(109)] = 3503,
  [SMALL_STATE(110)] = 3525,
  [SMALL_STATE(111)] = 3547,
  [SMALL_STATE(112)] = 3575,
  [SMALL_STATE(113)] = 3597,
  [SMALL_STATE(114)] = 3625,
  [SMALL_STATE(115)] = 3647,
  [SMALL_STATE(116)] = 3669,
  [SMALL_STATE(117)] = 3697,
  [SMALL_STATE(118)] = 3723,
  [SMALL_STATE(119)] = 3749,
  [SMALL_STATE(120)] = 3771,
  [SMALL_STATE(121)] = 3797,
  [SMALL_STATE(122)] = 3823,
  [SMALL_STATE(123)] = 3847,
  [SMALL_STATE(124)] = 3869,
  [SMALL_STATE(125)] = 3894,
  [SMALL_STATE(126)] = 3919,
  [SMALL_STATE(127)] = 3940,
  [SMALL_STATE(128)] = 3965,
  [SMALL_STATE(129)] = 3990,
  [SMALL_STATE(130)] = 4015,
  [SMALL_STATE(131)] = 4036,
  [SMALL_STATE(132)] = 4061,
  [SMALL_STATE(133)] = 4084,
  [SMALL_STATE(134)] = 4109,
  [SMALL_STATE(135)] = 4130,
  [SMALL_STATE(136)] = 4155,
  [SMALL_STATE(137)] = 4180,
  [SMALL_STATE(138)] = 4205,
  [SMALL_STATE(139)] = 4228,
  [SMALL_STATE(140)] = 4253,
  [SMALL_STATE(141)] = 4278,
  [SMALL_STATE(142)] = 4303,
  [SMALL_STATE(143)] = 4324,
  [SMALL_STATE(144)] = 4345,
  [SMALL_STATE(145)] = 4366,
  [SMALL_STATE(146)] = 4387,
  [SMALL_STATE(147)] = 4412,
  [SMALL_STATE(148)] = 4437,
  [SMALL_STATE(149)] = 4462,
  [SMALL_STATE(150)] = 4487,
  [SMALL_STATE(151)] = 4512,
  [SMALL_STATE(152)] = 4537,
  [SMALL_STATE(153)] = 4562,
  [SMALL_STATE(154)] = 4583,
  [SMALL_STATE(155)] = 4608,
  [SMALL_STATE(156)] = 4633,
  [SMALL_STATE(157)] = 4658,
  [SMALL_STATE(158)] = 4683,
  [SMALL_STATE(159)] = 4708,
  [SMALL_STATE(160)] = 4733,
  [SMALL_STATE(161)] = 4758,
  [SMALL_STATE(162)] = 4779,
  [SMALL_STATE(163)] = 4800,
  [SMALL_STATE(164)] = 4821,
  [SMALL_STATE(165)] = 4846,
  [SMALL_STATE(166)] = 4871,
  [SMALL_STATE(167)] = 4892,
  [SMALL_STATE(168)] = 4917,
  [SMALL_STATE(169)] = 4942,
  [SMALL_STATE(170)] = 4963,
  [SMALL_STATE(171)] = 4998,
  [SMALL_STATE(172)] = 5019,
  [SMALL_STATE(173)] = 5040,
  [SMALL_STATE(174)] = 5065,
  [SMALL_STATE(175)] = 5090,
  [SMALL_STATE(176)] = 5115,
  [SMALL_STATE(177)] = 5150,
  [SMALL_STATE(178)] = 5175,
  [SMALL_STATE(179)] = 5200,
  [SMALL_STATE(180)] = 5225,
  [SMALL_STATE(181)] = 5246,
  [SMALL_STATE(182)] = 5271,
  [SMALL_STATE(183)] = 5296,
  [SMALL_STATE(184)] = 5321,
  [SMALL_STATE(185)] = 5342,
  [SMALL_STATE(186)] = 5367,
  [SMALL_STATE(187)] = 5392,
  [SMALL_STATE(188)] = 5417,
  [SMALL_STATE(189)] = 5438,
  [SMALL_STATE(190)] = 5463,
  [SMALL_STATE(191)] = 5488,
  [SMALL_STATE(192)] = 5513,
  [SMALL_STATE(193)] = 5538,
  [SMALL_STATE(194)] = 5563,
  [SMALL_STATE(195)] = 5588,
  [SMALL_STATE(196)] = 5613,
  [SMALL_STATE(197)] = 5638,
  [SMALL_STATE(198)] = 5663,
  [SMALL_STATE(199)] = 5688,
  [SMALL_STATE(200)] = 5713,
  [SMALL_STATE(201)] = 5738,
  [SMALL_STATE(202)] = 5759,
  [SMALL_STATE(203)] = 5784,
  [SMALL_STATE(204)] = 5806,
  [SMALL_STATE(205)] = 5828,
  [SMALL_STATE(206)] = 5848,
  [SMALL_STATE(207)] = 5870,
  [SMALL_STATE(208)] = 5892,
  [SMALL_STATE(209)] = 5912,
  [SMALL_STATE(210)] = 5932,
  [SMALL_STATE(211)] = 5952,
  [SMALL_STATE(212)] = 5972,
  [SMALL_STATE(213)] = 5994,
  [SMALL_STATE(214)] = 6026,
  [SMALL_STATE(215)] = 6046,
  [SMALL_STATE(216)] = 6066,
  [SMALL_STATE(217)] = 6088,
  [SMALL_STATE(218)] = 6110,
  [SMALL_STATE(219)] = 6132,
  [SMALL_STATE(220)] = 6154,
  [SMALL_STATE(221)] = 6176,
  [SMALL_STATE(222)] = 6196,
  [SMALL_STATE(223)] = 6216,
  [SMALL_STATE(224)] = 6238,
  [SMALL_STATE(225)] = 6260,
  [SMALL_STATE(226)] = 6280,
  [SMALL_STATE(227)] = 6302,
  [SMALL_STATE(228)] = 6324,
  [SMALL_STATE(229)] = 6346,
  [SMALL_STATE(230)] = 6368,
  [SMALL_STATE(231)] = 6390,
  [SMALL_STATE(232)] = 6412,
  [SMALL_STATE(233)] = 6434,
  [SMALL_STATE(234)] = 6456,
  [SMALL_STATE(235)] = 6478,
  [SMALL_STATE(236)] = 6500,
  [SMALL_STATE(237)] = 6522,
  [SMALL_STATE(238)] = 6544,
  [SMALL_STATE(239)] = 6564,
  [SMALL_STATE(240)] = 6586,
  [SMALL_STATE(241)] = 6608,
  [SMALL_STATE(242)] = 6630,
  [SMALL_STATE(243)] = 6649,
  [SMALL_STATE(244)] = 6668,
  [SMALL_STATE(245)] = 6687,
  [SMALL_STATE(246)] = 6706,
  [SMALL_STATE(247)] = 6725,
  [SMALL_STATE(248)] = 6744,
  [SMALL_STATE(249)] = 6763,
  [SMALL_STATE(250)] = 6782,
  [SMALL_STATE(251)] = 6801,
  [SMALL_STATE(252)] = 6820,
  [SMALL_STATE(253)] = 6839,
  [SMALL_STATE(254)] = 6858,
  [SMALL_STATE(255)] = 6877,
  [SMALL_STATE(256)] = 6896,
  [SMALL_STATE(257)] = 6915,
  [SMALL_STATE(258)] = 6934,
  [SMALL_STATE(259)] = 6953,
  [SMALL_STATE(260)] = 6972,
  [SMALL_STATE(261)] = 6991,
  [SMALL_STATE(262)] = 7010,
  [SMALL_STATE(263)] = 7029,
  [SMALL_STATE(264)] = 7048,
  [SMALL_STATE(265)] = 7067,
  [SMALL_STATE(266)] = 7086,
  [SMALL_STATE(267)] = 7105,
  [SMALL_STATE(268)] = 7124,
  [SMALL_STATE(269)] = 7143,
  [SMALL_STATE(270)] = 7162,
  [SMALL_STATE(271)] = 7181,
  [SMALL_STATE(272)] = 7200,
  [SMALL_STATE(273)] = 7219,
  [SMALL_STATE(274)] = 7238,
  [SMALL_STATE(275)] = 7257,
  [SMALL_STATE(276)] = 7276,
  [SMALL_STATE(277)] = 7295,
  [SMALL_STATE(278)] = 7314,
  [SMALL_STATE(279)] = 7333,
  [SMALL_STATE(280)] = 7352,
  [SMALL_STATE(281)] = 7371,
  [SMALL_STATE(282)] = 7390,
  [SMALL_STATE(283)] = 7409,
  [SMALL_STATE(284)] = 7428,
  [SMALL_STATE(285)] = 7447,
  [SMALL_STATE(286)] = 7466,
  [SMALL_STATE(287)] = 7485,
  [SMALL_STATE(288)] = 7504,
  [SMALL_STATE(289)] = 7525,
  [SMALL_STATE(290)] = 7544,
  [SMALL_STATE(291)] = 7563,
  [SMALL_STATE(292)] = 7582,
  [SMALL_STATE(293)] = 7601,
  [SMALL_STATE(294)] = 7620,
  [SMALL_STATE(295)] = 7639,
  [SMALL_STATE(296)] = 7658,
  [SMALL_STATE(297)] = 7677,
  [SMALL_STATE(298)] = 7696,
  [SMALL_STATE(299)] = 7715,
  [SMALL_STATE(300)] = 7734,
  [SMALL_STATE(301)] = 7753,
  [SMALL_STATE(302)] = 7772,
  [SMALL_STATE(303)] = 7791,
  [SMALL_STATE(304)] = 7810,
  [SMALL_STATE(305)] = 7829,
  [SMALL_STATE(306)] = 7848,
  [SMALL_STATE(307)] = 7867,
  [SMALL_STATE(308)] = 7886,
  [SMALL_STATE(309)] = 7905,
  [SMALL_STATE(310)] = 7924,
  [SMALL_STATE(311)] = 7943,
  [SMALL_STATE(312)] = 7962,
  [SMALL_STATE(313)] = 7981,
  [SMALL_STATE(314)] = 8000,
  [SMALL_STATE(315)] = 8019,
  [SMALL_STATE(316)] = 8038,
  [SMALL_STATE(317)] = 8057,
  [SMALL_STATE(318)] = 8076,
  [SMALL_STATE(319)] = 8095,
  [SMALL_STATE(320)] = 8114,
  [SMALL_STATE(321)] = 8133,
  [SMALL_STATE(322)] = 8152,
  [SMALL_STATE(323)] = 8171,
  [SMALL_STATE(324)] = 8190,
  [SMALL_STATE(325)] = 8209,
  [SMALL_STATE(326)] = 8228,
  [SMALL_STATE(327)] = 8247,
  [SMALL_STATE(328)] = 8266,
  [SMALL_STATE(329)] = 8285,
  [SMALL_STATE(330)] = 8304,
  [SMALL_STATE(331)] = 8323,
  [SMALL_STATE(332)] = 8342,
  [SMALL_STATE(333)] = 8361,
  [SMALL_STATE(334)] = 8380,
  [SMALL_STATE(335)] = 8399,
  [SMALL_STATE(336)] = 8418,
  [SMALL_STATE(337)] = 8437,
  [SMALL_STATE(338)] = 8456,
  [SMALL_STATE(339)] = 8475,
  [SMALL_STATE(340)] = 8494,
  [SMALL_STATE(341)] = 8513,
  [SMALL_STATE(342)] = 8532,
  [SMALL_STATE(343)] = 8551,
  [SMALL_STATE(344)] = 8570,
  [SMALL_STATE(345)] = 8589,
  [SMALL_STATE(346)] = 8608,
  [SMALL_STATE(347)] = 8627,
  [SMALL_STATE(348)] = 8646,
  [SMALL_STATE(349)] = 8665,
  [SMALL_STATE(350)] = 8684,
  [SMALL_STATE(351)] = 8703,
  [SMALL_STATE(352)] = 8722,
  [SMALL_STATE(353)] = 8741,
  [SMALL_STATE(354)] = 8760,
  [SMALL_STATE(355)] = 8779,
  [SMALL_STATE(356)] = 8798,
  [SMALL_STATE(357)] = 8817,
  [SMALL_STATE(358)] = 8836,
  [SMALL_STATE(359)] = 8855,
  [SMALL_STATE(360)] = 8874,
  [SMALL_STATE(361)] = 8893,
  [SMALL_STATE(362)] = 8912,
  [SMALL_STATE(363)] = 8931,
  [SMALL_STATE(364)] = 8950,
  [SMALL_STATE(365)] = 8969,
  [SMALL_STATE(366)] = 8988,
  [SMALL_STATE(367)] = 9007,
  [SMALL_STATE(368)] = 9026,
  [SMALL_STATE(369)] = 9045,
  [SMALL_STATE(370)] = 9064,
  [SMALL_STATE(371)] = 9083,
  [SMALL_STATE(372)] = 9102,
  [SMALL_STATE(373)] = 9121,
  [SMALL_STATE(374)] = 9140,
  [SMALL_STATE(375)] = 9159,
  [SMALL_STATE(376)] = 9178,
  [SMALL_STATE(377)] = 9197,
  [SMALL_STATE(378)] = 9216,
  [SMALL_STATE(379)] = 9235,
  [SMALL_STATE(380)] = 9254,
  [SMALL_STATE(381)] = 9273,
  [SMALL_STATE(382)] = 9292,
  [SMALL_STATE(383)] = 9311,
  [SMALL_STATE(384)] = 9330,
  [SMALL_STATE(385)] = 9349,
  [SMALL_STATE(386)] = 9368,
  [SMALL_STATE(387)] = 9387,
  [SMALL_STATE(388)] = 9406,
  [SMALL_STATE(389)] = 9425,
  [SMALL_STATE(390)] = 9444,
  [SMALL_STATE(391)] = 9463,
  [SMALL_STATE(392)] = 9482,
  [SMALL_STATE(393)] = 9501,
  [SMALL_STATE(394)] = 9520,
  [SMALL_STATE(395)] = 9539,
  [SMALL_STATE(396)] = 9558,
  [SMALL_STATE(397)] = 9577,
  [SMALL_STATE(398)] = 9596,
  [SMALL_STATE(399)] = 9615,
  [SMALL_STATE(400)] = 9634,
  [SMALL_STATE(401)] = 9653,
  [SMALL_STATE(402)] = 9672,
  [SMALL_STATE(403)] = 9691,
  [SMALL_STATE(404)] = 9721,
  [SMALL_STATE(405)] = 9739,
  [SMALL_STATE(406)] = 9764,
  [SMALL_STATE(407)] = 9789,
  [SMALL_STATE(408)] = 9814,
  [SMALL_STATE(409)] = 9839,
  [SMALL_STATE(410)] = 9864,
  [SMALL_STATE(411)] = 9889,
  [SMALL_STATE(412)] = 9914,
  [SMALL_STATE(413)] = 9939,
  [SMALL_STATE(414)] = 9964,
  [SMALL_STATE(415)] = 9992,
  [SMALL_STATE(416)] = 10018,
  [SMALL_STATE(417)] = 10041,
  [SMALL_STATE(418)] = 10075,
  [SMALL_STATE(419)] = 10101,
  [SMALL_STATE(420)] = 10121,
  [SMALL_STATE(421)] = 10141,
  [SMALL_STATE(422)] = 10161,
  [SMALL_STATE(423)] = 10181,
  [SMALL_STATE(424)] = 10204,
  [SMALL_STATE(425)] = 10221,
  [SMALL_STATE(426)] = 10238,
  [SMALL_STATE(427)] = 10257,
  [SMALL_STATE(428)] = 10280,
  [SMALL_STATE(429)] = 10311,
  [SMALL_STATE(430)] = 10330,
  [SMALL_STATE(431)] = 10346,
  [SMALL_STATE(432)] = 10362,
  [SMALL_STATE(433)] = 10378,
  [SMALL_STATE(434)] = 10394,
  [SMALL_STATE(435)] = 10410,
  [SMALL_STATE(436)] = 10426,
  [SMALL_STATE(437)] = 10442,
  [SMALL_STATE(438)] = 10458,
  [SMALL_STATE(439)] = 10474,
  [SMALL_STATE(440)] = 10490,
  [SMALL_STATE(441)] = 10506,
  [SMALL_STATE(442)] = 10526,
  [SMALL_STATE(443)] = 10547,
  [SMALL_STATE(444)] = 10568,
  [SMALL_STATE(445)] = 10589,
  [SMALL_STATE(446)] = 10610,
  [SMALL_STATE(447)] = 10631,
  [SMALL_STATE(448)] = 10653,
  [SMALL_STATE(449)] = 10667,
  [SMALL_STATE(450)] = 10689,
  [SMALL_STATE(451)] = 10711,
  [SMALL_STATE(452)] = 10731,
  [SMALL_STATE(453)] = 10749,
  [SMALL_STATE(454)] = 10771,
  [SMALL_STATE(455)] = 10785,
  [SMALL_STATE(456)] = 10805,
  [SMALL_STATE(457)] = 10820,
  [SMALL_STATE(458)] = 10839,
  [SMALL_STATE(459)] = 10856,
  [SMALL_STATE(460)] = 10867,
  [SMALL_STATE(461)] = 10886,
  [SMALL_STATE(462)] = 10902,
  [SMALL_STATE(463)] = 10918,
  [SMALL_STATE(464)] = 10934,
  [SMALL_STATE(465)] = 10946,
  [SMALL_STATE(466)] = 10954,
  [SMALL_STATE(467)] = 10970,
  [SMALL_STATE(468)] = 10984,
  [SMALL_STATE(469)] = 10992,
  [SMALL_STATE(470)] = 11004,
  [SMALL_STATE(471)] = 11012,
  [SMALL_STATE(472)] = 11020,
  [SMALL_STATE(473)] = 11036,
  [SMALL_STATE(474)] = 11052,
  [SMALL_STATE(475)] = 11066,
  [SMALL_STATE(476)] = 11082,
  [SMALL_STATE(477)] = 11094,
  [SMALL_STATE(478)] = 11108,
  [SMALL_STATE(479)] = 11122,
  [SMALL_STATE(480)] = 11130,
  [SMALL_STATE(481)] = 11146,
  [SMALL_STATE(482)] = 11158,
  [SMALL_STATE(483)] = 11174,
  [SMALL_STATE(484)] = 11182,
  [SMALL_STATE(485)] = 11198,
  [SMALL_STATE(486)] = 11206,
  [SMALL_STATE(487)] = 11219,
  [SMALL_STATE(488)] = 11228,
  [SMALL_STATE(489)] = 11241,
  [SMALL_STATE(490)] = 11254,
  [SMALL_STATE(491)] = 11267,
  [SMALL_STATE(492)] = 11280,
  [SMALL_STATE(493)] = 11287,
  [SMALL_STATE(494)] = 11300,
  [SMALL_STATE(495)] = 11313,
  [SMALL_STATE(496)] = 11326,
  [SMALL_STATE(497)] = 11339,
  [SMALL_STATE(498)] = 11352,
  [SMALL_STATE(499)] = 11365,
  [SMALL_STATE(500)] = 11378,
  [SMALL_STATE(501)] = 11391,
  [SMALL_STATE(502)] = 11404,
  [SMALL_STATE(503)] = 11417,
  [SMALL_STATE(504)] = 11430,
  [SMALL_STATE(505)] = 11443,
  [SMALL_STATE(506)] = 11456,
  [SMALL_STATE(507)] = 11469,
  [SMALL_STATE(508)] = 11480,
  [SMALL_STATE(509)] = 11493,
  [SMALL_STATE(510)] = 11506,
  [SMALL_STATE(511)] = 11519,
  [SMALL_STATE(512)] = 11532,
  [SMALL_STATE(513)] = 11545,
  [SMALL_STATE(514)] = 11558,
  [SMALL_STATE(515)] = 11571,
  [SMALL_STATE(516)] = 11584,
  [SMALL_STATE(517)] = 11597,
  [SMALL_STATE(518)] = 11604,
  [SMALL_STATE(519)] = 11617,
  [SMALL_STATE(520)] = 11630,
  [SMALL_STATE(521)] = 11643,
  [SMALL_STATE(522)] = 11656,
  [SMALL_STATE(523)] = 11669,
  [SMALL_STATE(524)] = 11682,
  [SMALL_STATE(525)] = 11695,
  [SMALL_STATE(526)] = 11708,
  [SMALL_STATE(527)] = 11721,
  [SMALL_STATE(528)] = 11732,
  [SMALL_STATE(529)] = 11745,
  [SMALL_STATE(530)] = 11756,
  [SMALL_STATE(531)] = 11769,
  [SMALL_STATE(532)] = 11782,
  [SMALL_STATE(533)] = 11795,
  [SMALL_STATE(534)] = 11808,
  [SMALL_STATE(535)] = 11821,
  [SMALL_STATE(536)] = 11834,
  [SMALL_STATE(537)] = 11847,
  [SMALL_STATE(538)] = 11860,
  [SMALL_STATE(539)] = 11873,
  [SMALL_STATE(540)] = 11886,
  [SMALL_STATE(541)] = 11896,
  [SMALL_STATE(542)] = 11906,
  [SMALL_STATE(543)] = 11916,
  [SMALL_STATE(544)] = 11926,
  [SMALL_STATE(545)] = 11936,
  [SMALL_STATE(546)] = 11946,
  [SMALL_STATE(547)] = 11956,
  [SMALL_STATE(548)] = 11966,
  [SMALL_STATE(549)] = 11976,
  [SMALL_STATE(550)] = 11984,
  [SMALL_STATE(551)] = 11994,
  [SMALL_STATE(552)] = 12002,
  [SMALL_STATE(553)] = 12012,
  [SMALL_STATE(554)] = 12022,
  [SMALL_STATE(555)] = 12032,
  [SMALL_STATE(556)] = 12042,
  [SMALL_STATE(557)] = 12052,
  [SMALL_STATE(558)] = 12062,
  [SMALL_STATE(559)] = 12072,
  [SMALL_STATE(560)] = 12082,
  [SMALL_STATE(561)] = 12092,
  [SMALL_STATE(562)] = 12102,
  [SMALL_STATE(563)] = 12112,
  [SMALL_STATE(564)] = 12122,
  [SMALL_STATE(565)] = 12132,
  [SMALL_STATE(566)] = 12142,
  [SMALL_STATE(567)] = 12152,
  [SMALL_STATE(568)] = 12162,
  [SMALL_STATE(569)] = 12172,
  [SMALL_STATE(570)] = 12182,
  [SMALL_STATE(571)] = 12192,
  [SMALL_STATE(572)] = 12202,
  [SMALL_STATE(573)] = 12212,
  [SMALL_STATE(574)] = 12222,
  [SMALL_STATE(575)] = 12232,
  [SMALL_STATE(576)] = 12242,
  [SMALL_STATE(577)] = 12252,
  [SMALL_STATE(578)] = 12262,
  [SMALL_STATE(579)] = 12272,
  [SMALL_STATE(580)] = 12282,
  [SMALL_STATE(581)] = 12292,
  [SMALL_STATE(582)] = 12302,
  [SMALL_STATE(583)] = 12312,
  [SMALL_STATE(584)] = 12322,
  [SMALL_STATE(585)] = 12332,
  [SMALL_STATE(586)] = 12342,
  [SMALL_STATE(587)] = 12352,
  [SMALL_STATE(588)] = 12362,
  [SMALL_STATE(589)] = 12372,
  [SMALL_STATE(590)] = 12382,
  [SMALL_STATE(591)] = 12392,
  [SMALL_STATE(592)] = 12402,
  [SMALL_STATE(593)] = 12412,
  [SMALL_STATE(594)] = 12422,
  [SMALL_STATE(595)] = 12432,
  [SMALL_STATE(596)] = 12442,
  [SMALL_STATE(597)] = 12452,
  [SMALL_STATE(598)] = 12462,
  [SMALL_STATE(599)] = 12472,
  [SMALL_STATE(600)] = 12482,
  [SMALL_STATE(601)] = 12492,
  [SMALL_STATE(602)] = 12502,
  [SMALL_STATE(603)] = 12512,
  [SMALL_STATE(604)] = 12522,
  [SMALL_STATE(605)] = 12532,
  [SMALL_STATE(606)] = 12542,
  [SMALL_STATE(607)] = 12552,
  [SMALL_STATE(608)] = 12562,
  [SMALL_STATE(609)] = 12572,
  [SMALL_STATE(610)] = 12582,
  [SMALL_STATE(611)] = 12592,
  [SMALL_STATE(612)] = 12602,
  [SMALL_STATE(613)] = 12612,
  [SMALL_STATE(614)] = 12622,
  [SMALL_STATE(615)] = 12632,
  [SMALL_STATE(616)] = 12642,
  [SMALL_STATE(617)] = 12652,
  [SMALL_STATE(618)] = 12662,
  [SMALL_STATE(619)] = 12672,
  [SMALL_STATE(620)] = 12682,
  [SMALL_STATE(621)] = 12692,
  [SMALL_STATE(622)] = 12702,
  [SMALL_STATE(623)] = 12712,
  [SMALL_STATE(624)] = 12722,
  [SMALL_STATE(625)] = 12728,
  [SMALL_STATE(626)] = 12736,
  [SMALL_STATE(627)] = 12746,
  [SMALL_STATE(628)] = 12756,
  [SMALL_STATE(629)] = 12766,
  [SMALL_STATE(630)] = 12776,
  [SMALL_STATE(631)] = 12786,
  [SMALL_STATE(632)] = 12796,
  [SMALL_STATE(633)] = 12806,
  [SMALL_STATE(634)] = 12816,
  [SMALL_STATE(635)] = 12826,
  [SMALL_STATE(636)] = 12836,
  [SMALL_STATE(637)] = 12846,
  [SMALL_STATE(638)] = 12856,
  [SMALL_STATE(639)] = 12862,
  [SMALL_STATE(640)] = 12872,
  [SMALL_STATE(641)] = 12882,
  [SMALL_STATE(642)] = 12892,
  [SMALL_STATE(643)] = 12902,
  [SMALL_STATE(644)] = 12912,
  [SMALL_STATE(645)] = 12922,
  [SMALL_STATE(646)] = 12932,
  [SMALL_STATE(647)] = 12942,
  [SMALL_STATE(648)] = 12952,
  [SMALL_STATE(649)] = 12962,
  [SMALL_STATE(650)] = 12972,
  [SMALL_STATE(651)] = 12982,
  [SMALL_STATE(652)] = 12992,
  [SMALL_STATE(653)] = 13002,
  [SMALL_STATE(654)] = 13012,
  [SMALL_STATE(655)] = 13022,
  [SMALL_STATE(656)] = 13032,
  [SMALL_STATE(657)] = 13042,
  [SMALL_STATE(658)] = 13052,
  [SMALL_STATE(659)] = 13062,
  [SMALL_STATE(660)] = 13072,
  [SMALL_STATE(661)] = 13080,
  [SMALL_STATE(662)] = 13090,
  [SMALL_STATE(663)] = 13100,
  [SMALL_STATE(664)] = 13110,
  [SMALL_STATE(665)] = 13120,
  [SMALL_STATE(666)] = 13130,
  [SMALL_STATE(667)] = 13140,
  [SMALL_STATE(668)] = 13148,
  [SMALL_STATE(669)] = 13158,
  [SMALL_STATE(670)] = 13168,
  [SMALL_STATE(671)] = 13178,
  [SMALL_STATE(672)] = 13188,
  [SMALL_STATE(673)] = 13198,
  [SMALL_STATE(674)] = 13208,
  [SMALL_STATE(675)] = 13218,
  [SMALL_STATE(676)] = 13228,
  [SMALL_STATE(677)] = 13238,
  [SMALL_STATE(678)] = 13246,
  [SMALL_STATE(679)] = 13256,
  [SMALL_STATE(680)] = 13266,
  [SMALL_STATE(681)] = 13276,
  [SMALL_STATE(682)] = 13286,
  [SMALL_STATE(683)] = 13296,
  [SMALL_STATE(684)] = 13306,
  [SMALL_STATE(685)] = 13316,
  [SMALL_STATE(686)] = 13323,
  [SMALL_STATE(687)] = 13330,
  [SMALL_STATE(688)] = 13335,
  [SMALL_STATE(689)] = 13342,
  [SMALL_STATE(690)] = 13347,
  [SMALL_STATE(691)] = 13354,
  [SMALL_STATE(692)] = 13361,
  [SMALL_STATE(693)] = 13368,
  [SMALL_STATE(694)] = 13375,
  [SMALL_STATE(695)] = 13382,
  [SMALL_STATE(696)] = 13387,
  [SMALL_STATE(697)] = 13394,
  [SMALL_STATE(698)] = 13401,
  [SMALL_STATE(699)] = 13408,
  [SMALL_STATE(700)] = 13413,
  [SMALL_STATE(701)] = 13420,
  [SMALL_STATE(702)] = 13427,
  [SMALL_STATE(703)] = 13434,
  [SMALL_STATE(704)] = 13441,
  [SMALL_STATE(705)] = 13448,
  [SMALL_STATE(706)] = 13455,
  [SMALL_STATE(707)] = 13462,
  [SMALL_STATE(708)] = 13469,
  [SMALL_STATE(709)] = 13474,
  [SMALL_STATE(710)] = 13481,
  [SMALL_STATE(711)] = 13486,
  [SMALL_STATE(712)] = 13493,
  [SMALL_STATE(713)] = 13500,
  [SMALL_STATE(714)] = 13507,
  [SMALL_STATE(715)] = 13512,
  [SMALL_STATE(716)] = 13519,
  [SMALL_STATE(717)] = 13526,
  [SMALL_STATE(718)] = 13533,
  [SMALL_STATE(719)] = 13540,
  [SMALL_STATE(720)] = 13545,
  [SMALL_STATE(721)] = 13550,
  [SMALL_STATE(722)] = 13557,
  [SMALL_STATE(723)] = 13564,
  [SMALL_STATE(724)] = 13571,
  [SMALL_STATE(725)] = 13578,
  [SMALL_STATE(726)] = 13585,
  [SMALL_STATE(727)] = 13590,
  [SMALL_STATE(728)] = 13597,
  [SMALL_STATE(729)] = 13602,
  [SMALL_STATE(730)] = 13609,
  [SMALL_STATE(731)] = 13616,
  [SMALL_STATE(732)] = 13623,
  [SMALL_STATE(733)] = 13628,
  [SMALL_STATE(734)] = 13633,
  [SMALL_STATE(735)] = 13640,
  [SMALL_STATE(736)] = 13647,
  [SMALL_STATE(737)] = 13654,
  [SMALL_STATE(738)] = 13661,
  [SMALL_STATE(739)] = 13668,
  [SMALL_STATE(740)] = 13675,
  [SMALL_STATE(741)] = 13680,
  [SMALL_STATE(742)] = 13687,
  [SMALL_STATE(743)] = 13694,
  [SMALL_STATE(744)] = 13701,
  [SMALL_STATE(745)] = 13708,
  [SMALL_STATE(746)] = 13715,
  [SMALL_STATE(747)] = 13720,
  [SMALL_STATE(748)] = 13727,
  [SMALL_STATE(749)] = 13734,
  [SMALL_STATE(750)] = 13741,
  [SMALL_STATE(751)] = 13748,
  [SMALL_STATE(752)] = 13755,
  [SMALL_STATE(753)] = 13762,
  [SMALL_STATE(754)] = 13769,
  [SMALL_STATE(755)] = 13776,
  [SMALL_STATE(756)] = 13781,
  [SMALL_STATE(757)] = 13786,
  [SMALL_STATE(758)] = 13793,
  [SMALL_STATE(759)] = 13800,
  [SMALL_STATE(760)] = 13807,
  [SMALL_STATE(761)] = 13814,
  [SMALL_STATE(762)] = 13819,
  [SMALL_STATE(763)] = 13826,
  [SMALL_STATE(764)] = 13833,
  [SMALL_STATE(765)] = 13840,
  [SMALL_STATE(766)] = 13845,
  [SMALL_STATE(767)] = 13852,
  [SMALL_STATE(768)] = 13857,
  [SMALL_STATE(769)] = 13862,
  [SMALL_STATE(770)] = 13869,
  [SMALL_STATE(771)] = 13874,
  [SMALL_STATE(772)] = 13881,
  [SMALL_STATE(773)] = 13888,
  [SMALL_STATE(774)] = 13893,
  [SMALL_STATE(775)] = 13900,
  [SMALL_STATE(776)] = 13907,
  [SMALL_STATE(777)] = 13912,
  [SMALL_STATE(778)] = 13919,
  [SMALL_STATE(779)] = 13926,
  [SMALL_STATE(780)] = 13931,
  [SMALL_STATE(781)] = 13938,
  [SMALL_STATE(782)] = 13943,
  [SMALL_STATE(783)] = 13950,
  [SMALL_STATE(784)] = 13957,
  [SMALL_STATE(785)] = 13964,
  [SMALL_STATE(786)] = 13971,
  [SMALL_STATE(787)] = 13978,
  [SMALL_STATE(788)] = 13985,
  [SMALL_STATE(789)] = 13992,
  [SMALL_STATE(790)] = 13999,
  [SMALL_STATE(791)] = 14006,
  [SMALL_STATE(792)] = 14013,
  [SMALL_STATE(793)] = 14020,
  [SMALL_STATE(794)] = 14027,
  [SMALL_STATE(795)] = 14034,
  [SMALL_STATE(796)] = 14041,
  [SMALL_STATE(797)] = 14048,
  [SMALL_STATE(798)] = 14055,
  [SMALL_STATE(799)] = 14060,
  [SMALL_STATE(800)] = 14067,
  [SMALL_STATE(801)] = 14074,
  [SMALL_STATE(802)] = 14081,
  [SMALL_STATE(803)] = 14088,
  [SMALL_STATE(804)] = 14093,
  [SMALL_STATE(805)] = 14100,
  [SMALL_STATE(806)] = 14107,
  [SMALL_STATE(807)] = 14112,
  [SMALL_STATE(808)] = 14119,
  [SMALL_STATE(809)] = 14126,
  [SMALL_STATE(810)] = 14133,
  [SMALL_STATE(811)] = 14140,
  [SMALL_STATE(812)] = 14145,
  [SMALL_STATE(813)] = 14152,
  [SMALL_STATE(814)] = 14159,
  [SMALL_STATE(815)] = 14166,
  [SMALL_STATE(816)] = 14171,
  [SMALL_STATE(817)] = 14178,
  [SMALL_STATE(818)] = 14185,
  [SMALL_STATE(819)] = 14190,
  [SMALL_STATE(820)] = 14197,
  [SMALL_STATE(821)] = 14204,
  [SMALL_STATE(822)] = 14211,
  [SMALL_STATE(823)] = 14218,
  [SMALL_STATE(824)] = 14225,
  [SMALL_STATE(825)] = 14232,
  [SMALL_STATE(826)] = 14239,
  [SMALL_STATE(827)] = 14246,
  [SMALL_STATE(828)] = 14253,
  [SMALL_STATE(829)] = 14260,
  [SMALL_STATE(830)] = 14265,
  [SMALL_STATE(831)] = 14272,
  [SMALL_STATE(832)] = 14279,
  [SMALL_STATE(833)] = 14286,
  [SMALL_STATE(834)] = 14293,
  [SMALL_STATE(835)] = 14298,
  [SMALL_STATE(836)] = 14305,
  [SMALL_STATE(837)] = 14312,
  [SMALL_STATE(838)] = 14319,
  [SMALL_STATE(839)] = 14326,
  [SMALL_STATE(840)] = 14331,
  [SMALL_STATE(841)] = 14336,
  [SMALL_STATE(842)] = 14340,
  [SMALL_STATE(843)] = 14344,
  [SMALL_STATE(844)] = 14348,
  [SMALL_STATE(845)] = 14352,
  [SMALL_STATE(846)] = 14356,
  [SMALL_STATE(847)] = 14360,
  [SMALL_STATE(848)] = 14364,
  [SMALL_STATE(849)] = 14368,
  [SMALL_STATE(850)] = 14372,
  [SMALL_STATE(851)] = 14376,
  [SMALL_STATE(852)] = 14380,
  [SMALL_STATE(853)] = 14384,
  [SMALL_STATE(854)] = 14388,
  [SMALL_STATE(855)] = 14392,
  [SMALL_STATE(856)] = 14396,
  [SMALL_STATE(857)] = 14400,
  [SMALL_STATE(858)] = 14404,
  [SMALL_STATE(859)] = 14408,
  [SMALL_STATE(860)] = 14412,
  [SMALL_STATE(861)] = 14416,
  [SMALL_STATE(862)] = 14420,
  [SMALL_STATE(863)] = 14424,
  [SMALL_STATE(864)] = 14428,
  [SMALL_STATE(865)] = 14432,
  [SMALL_STATE(866)] = 14436,
  [SMALL_STATE(867)] = 14440,
  [SMALL_STATE(868)] = 14444,
  [SMALL_STATE(869)] = 14448,
  [SMALL_STATE(870)] = 14452,
  [SMALL_STATE(871)] = 14456,
  [SMALL_STATE(872)] = 14460,
  [SMALL_STATE(873)] = 14464,
  [SMALL_STATE(874)] = 14468,
  [SMALL_STATE(875)] = 14472,
  [SMALL_STATE(876)] = 14476,
  [SMALL_STATE(877)] = 14480,
  [SMALL_STATE(878)] = 14484,
  [SMALL_STATE(879)] = 14488,
  [SMALL_STATE(880)] = 14492,
  [SMALL_STATE(881)] = 14496,
  [SMALL_STATE(882)] = 14500,
  [SMALL_STATE(883)] = 14504,
  [SMALL_STATE(884)] = 14508,
  [SMALL_STATE(885)] = 14512,
  [SMALL_STATE(886)] = 14516,
  [SMALL_STATE(887)] = 14520,
  [SMALL_STATE(888)] = 14524,
  [SMALL_STATE(889)] = 14528,
  [SMALL_STATE(890)] = 14532,
  [SMALL_STATE(891)] = 14536,
  [SMALL_STATE(892)] = 14540,
  [SMALL_STATE(893)] = 14544,
  [SMALL_STATE(894)] = 14548,
  [SMALL_STATE(895)] = 14552,
  [SMALL_STATE(896)] = 14556,
  [SMALL_STATE(897)] = 14560,
  [SMALL_STATE(898)] = 14564,
  [SMALL_STATE(899)] = 14568,
  [SMALL_STATE(900)] = 14572,
  [SMALL_STATE(901)] = 14576,
  [SMALL_STATE(902)] = 14580,
  [SMALL_STATE(903)] = 14584,
  [SMALL_STATE(904)] = 14588,
  [SMALL_STATE(905)] = 14592,
  [SMALL_STATE(906)] = 14596,
  [SMALL_STATE(907)] = 14600,
  [SMALL_STATE(908)] = 14604,
  [SMALL_STATE(909)] = 14608,
  [SMALL_STATE(910)] = 14612,
  [SMALL_STATE(911)] = 14616,
  [SMALL_STATE(912)] = 14620,
  [SMALL_STATE(913)] = 14624,
  [SMALL_STATE(914)] = 14628,
  [SMALL_STATE(915)] = 14632,
  [SMALL_STATE(916)] = 14636,
  [SMALL_STATE(917)] = 14640,
  [SMALL_STATE(918)] = 14644,
  [SMALL_STATE(919)] = 14648,
  [SMALL_STATE(920)] = 14652,
  [SMALL_STATE(921)] = 14656,
  [SMALL_STATE(922)] = 14660,
  [SMALL_STATE(923)] = 14664,
  [SMALL_STATE(924)] = 14668,
  [SMALL_STATE(925)] = 14672,
  [SMALL_STATE(926)] = 14676,
  [SMALL_STATE(927)] = 14680,
  [SMALL_STATE(928)] = 14684,
  [SMALL_STATE(929)] = 14688,
  [SMALL_STATE(930)] = 14692,
  [SMALL_STATE(931)] = 14696,
  [SMALL_STATE(932)] = 14700,
  [SMALL_STATE(933)] = 14704,
  [SMALL_STATE(934)] = 14708,
  [SMALL_STATE(935)] = 14712,
  [SMALL_STATE(936)] = 14716,
  [SMALL_STATE(937)] = 14720,
  [SMALL_STATE(938)] = 14724,
  [SMALL_STATE(939)] = 14728,
  [SMALL_STATE(940)] = 14732,
  [SMALL_STATE(941)] = 14736,
  [SMALL_STATE(942)] = 14740,
  [SMALL_STATE(943)] = 14744,
  [SMALL_STATE(944)] = 14748,
  [SMALL_STATE(945)] = 14752,
  [SMALL_STATE(946)] = 14756,
  [SMALL_STATE(947)] = 14760,
  [SMALL_STATE(948)] = 14764,
  [SMALL_STATE(949)] = 14768,
  [SMALL_STATE(950)] = 14772,
  [SMALL_STATE(951)] = 14776,
  [SMALL_STATE(952)] = 14780,
  [SMALL_STATE(953)] = 14784,
  [SMALL_STATE(954)] = 14788,
  [SMALL_STATE(955)] = 14792,
  [SMALL_STATE(956)] = 14796,
  [SMALL_STATE(957)] = 14800,
  [SMALL_STATE(958)] = 14804,
  [SMALL_STATE(959)] = 14808,
  [SMALL_STATE(960)] = 14812,
  [SMALL_STATE(961)] = 14816,
  [SMALL_STATE(962)] = 14820,
  [SMALL_STATE(963)] = 14824,
  [SMALL_STATE(964)] = 14828,
  [SMALL_STATE(965)] = 14832,
  [SMALL_STATE(966)] = 14836,
  [SMALL_STATE(967)] = 14840,
  [SMALL_STATE(968)] = 14844,
  [SMALL_STATE(969)] = 14848,
  [SMALL_STATE(970)] = 14852,
  [SMALL_STATE(971)] = 14856,
  [SMALL_STATE(972)] = 14860,
  [SMALL_STATE(973)] = 14864,
  [SMALL_STATE(974)] = 14868,
  [SMALL_STATE(975)] = 14872,
  [SMALL_STATE(976)] = 14876,
  [SMALL_STATE(977)] = 14880,
  [SMALL_STATE(978)] = 14884,
  [SMALL_STATE(979)] = 14888,
  [SMALL_STATE(980)] = 14892,
  [SMALL_STATE(981)] = 14896,
  [SMALL_STATE(982)] = 14900,
  [SMALL_STATE(983)] = 14904,
  [SMALL_STATE(984)] = 14908,
  [SMALL_STATE(985)] = 14912,
  [SMALL_STATE(986)] = 14916,
  [SMALL_STATE(987)] = 14920,
  [SMALL_STATE(988)] = 14924,
  [SMALL_STATE(989)] = 14928,
  [SMALL_STATE(990)] = 14932,
  [SMALL_STATE(991)] = 14936,
  [SMALL_STATE(992)] = 14940,
  [SMALL_STATE(993)] = 14944,
  [SMALL_STATE(994)] = 14948,
  [SMALL_STATE(995)] = 14952,
  [SMALL_STATE(996)] = 14956,
  [SMALL_STATE(997)] = 14960,
  [SMALL_STATE(998)] = 14964,
  [SMALL_STATE(999)] = 14968,
  [SMALL_STATE(1000)] = 14972,
  [SMALL_STATE(1001)] = 14976,
  [SMALL_STATE(1002)] = 14980,
  [SMALL_STATE(1003)] = 14984,
  [SMALL_STATE(1004)] = 14988,
  [SMALL_STATE(1005)] = 14992,
  [SMALL_STATE(1006)] = 14996,
  [SMALL_STATE(1007)] = 15000,
  [SMALL_STATE(1008)] = 15004,
  [SMALL_STATE(1009)] = 15008,
  [SMALL_STATE(1010)] = 15012,
  [SMALL_STATE(1011)] = 15016,
  [SMALL_STATE(1012)] = 15020,
  [SMALL_STATE(1013)] = 15024,
  [SMALL_STATE(1014)] = 15028,
  [SMALL_STATE(1015)] = 15032,
  [SMALL_STATE(1016)] = 15036,
  [SMALL_STATE(1017)] = 15040,
  [SMALL_STATE(1018)] = 15044,
  [SMALL_STATE(1019)] = 15048,
  [SMALL_STATE(1020)] = 15052,
  [SMALL_STATE(1021)] = 15056,
  [SMALL_STATE(1022)] = 15060,
  [SMALL_STATE(1023)] = 15064,
  [SMALL_STATE(1024)] = 15068,
  [SMALL_STATE(1025)] = 15072,
  [SMALL_STATE(1026)] = 15076,
  [SMALL_STATE(1027)] = 15080,
  [SMALL_STATE(1028)] = 15084,
  [SMALL_STATE(1029)] = 15088,
  [SMALL_STATE(1030)] = 15092,
  [SMALL_STATE(1031)] = 15096,
  [SMALL_STATE(1032)] = 15100,
  [SMALL_STATE(1033)] = 15104,
  [SMALL_STATE(1034)] = 15108,
  [SMALL_STATE(1035)] = 15112,
  [SMALL_STATE(1036)] = 15116,
  [SMALL_STATE(1037)] = 15120,
  [SMALL_STATE(1038)] = 15124,
  [SMALL_STATE(1039)] = 15128,
  [SMALL_STATE(1040)] = 15132,
  [SMALL_STATE(1041)] = 15136,
  [SMALL_STATE(1042)] = 15140,
  [SMALL_STATE(1043)] = 15144,
  [SMALL_STATE(1044)] = 15148,
  [SMALL_STATE(1045)] = 15152,
  [SMALL_STATE(1046)] = 15156,
  [SMALL_STATE(1047)] = 15160,
  [SMALL_STATE(1048)] = 15164,
  [SMALL_STATE(1049)] = 15168,
  [SMALL_STATE(1050)] = 15172,
  [SMALL_STATE(1051)] = 15176,
  [SMALL_STATE(1052)] = 15180,
  [SMALL_STATE(1053)] = 15184,
  [SMALL_STATE(1054)] = 15188,
  [SMALL_STATE(1055)] = 15192,
  [SMALL_STATE(1056)] = 15196,
  [SMALL_STATE(1057)] = 15200,
  [SMALL_STATE(1058)] = 15204,
  [SMALL_STATE(1059)] = 15208,
  [SMALL_STATE(1060)] = 15212,
  [SMALL_STATE(1061)] = 15216,
  [SMALL_STATE(1062)] = 15220,
  [SMALL_STATE(1063)] = 15224,
  [SMALL_STATE(1064)] = 15228,
  [SMALL_STATE(1065)] = 15232,
  [SMALL_STATE(1066)] = 15236,
  [SMALL_STATE(1067)] = 15240,
  [SMALL_STATE(1068)] = 15244,
  [SMALL_STATE(1069)] = 15248,
  [SMALL_STATE(1070)] = 15252,
  [SMALL_STATE(1071)] = 15256,
  [SMALL_STATE(1072)] = 15260,
  [SMALL_STATE(1073)] = 15264,
  [SMALL_STATE(1074)] = 15268,
  [SMALL_STATE(1075)] = 15272,
  [SMALL_STATE(1076)] = 15276,
  [SMALL_STATE(1077)] = 15280,
  [SMALL_STATE(1078)] = 15284,
  [SMALL_STATE(1079)] = 15288,
  [SMALL_STATE(1080)] = 15292,
  [SMALL_STATE(1081)] = 15296,
  [SMALL_STATE(1082)] = 15300,
  [SMALL_STATE(1083)] = 15304,
  [SMALL_STATE(1084)] = 15308,
  [SMALL_STATE(1085)] = 15312,
  [SMALL_STATE(1086)] = 15316,
  [SMALL_STATE(1087)] = 15320,
  [SMALL_STATE(1088)] = 15324,
  [SMALL_STATE(1089)] = 15328,
  [SMALL_STATE(1090)] = 15332,
  [SMALL_STATE(1091)] = 15336,
  [SMALL_STATE(1092)] = 15340,
  [SMALL_STATE(1093)] = 15344,
  [SMALL_STATE(1094)] = 15348,
  [SMALL_STATE(1095)] = 15352,
  [SMALL_STATE(1096)] = 15356,
  [SMALL_STATE(1097)] = 15360,
  [SMALL_STATE(1098)] = 15364,
  [SMALL_STATE(1099)] = 15368,
  [SMALL_STATE(1100)] = 15372,
  [SMALL_STATE(1101)] = 15376,
  [SMALL_STATE(1102)] = 15380,
  [SMALL_STATE(1103)] = 15384,
  [SMALL_STATE(1104)] = 15388,
  [SMALL_STATE(1105)] = 15392,
  [SMALL_STATE(1106)] = 15396,
  [SMALL_STATE(1107)] = 15400,
  [SMALL_STATE(1108)] = 15404,
  [SMALL_STATE(1109)] = 15408,
  [SMALL_STATE(1110)] = 15412,
  [SMALL_STATE(1111)] = 15416,
  [SMALL_STATE(1112)] = 15420,
  [SMALL_STATE(1113)] = 15424,
  [SMALL_STATE(1114)] = 15428,
  [SMALL_STATE(1115)] = 15432,
  [SMALL_STATE(1116)] = 15436,
  [SMALL_STATE(1117)] = 15440,
  [SMALL_STATE(1118)] = 15444,
  [SMALL_STATE(1119)] = 15448,
  [SMALL_STATE(1120)] = 15452,
  [SMALL_STATE(1121)] = 15456,
  [SMALL_STATE(1122)] = 15460,
  [SMALL_STATE(1123)] = 15464,
  [SMALL_STATE(1124)] = 15468,
  [SMALL_STATE(1125)] = 15472,
  [SMALL_STATE(1126)] = 15476,
  [SMALL_STATE(1127)] = 15480,
  [SMALL_STATE(1128)] = 15484,
  [SMALL_STATE(1129)] = 15488,
  [SMALL_STATE(1130)] = 15492,
  [SMALL_STATE(1131)] = 15496,
  [SMALL_STATE(1132)] = 15500,
  [SMALL_STATE(1133)] = 15504,
  [SMALL_STATE(1134)] = 15508,
  [SMALL_STATE(1135)] = 15512,
  [SMALL_STATE(1136)] = 15516,
  [SMALL_STATE(1137)] = 15520,
  [SMALL_STATE(1138)] = 15524,
  [SMALL_STATE(1139)] = 15528,
  [SMALL_STATE(1140)] = 15532,
  [SMALL_STATE(1141)] = 15536,
  [SMALL_STATE(1142)] = 15540,
  [SMALL_STATE(1143)] = 15544,
  [SMALL_STATE(1144)] = 15548,
  [SMALL_STATE(1145)] = 15552,
  [SMALL_STATE(1146)] = 15556,
  [SMALL_STATE(1147)] = 15560,
  [SMALL_STATE(1148)] = 15564,
  [SMALL_STATE(1149)] = 15568,
  [SMALL_STATE(1150)] = 15572,
  [SMALL_STATE(1151)] = 15576,
  [SMALL_STATE(1152)] = 15580,
  [SMALL_STATE(1153)] = 15584,
  [SMALL_STATE(1154)] = 15588,
  [SMALL_STATE(1155)] = 15592,
  [SMALL_STATE(1156)] = 15596,
  [SMALL_STATE(1157)] = 15600,
  [SMALL_STATE(1158)] = 15604,
  [SMALL_STATE(1159)] = 15608,
  [SMALL_STATE(1160)] = 15612,
  [SMALL_STATE(1161)] = 15616,
  [SMALL_STATE(1162)] = 15620,
  [SMALL_STATE(1163)] = 15624,
  [SMALL_STATE(1164)] = 15628,
  [SMALL_STATE(1165)] = 15632,
  [SMALL_STATE(1166)] = 15636,
  [SMALL_STATE(1167)] = 15640,
  [SMALL_STATE(1168)] = 15644,
  [SMALL_STATE(1169)] = 15648,
  [SMALL_STATE(1170)] = 15652,
  [SMALL_STATE(1171)] = 15656,
  [SMALL_STATE(1172)] = 15660,
  [SMALL_STATE(1173)] = 15664,
  [SMALL_STATE(1174)] = 15668,
  [SMALL_STATE(1175)] = 15672,
  [SMALL_STATE(1176)] = 15676,
  [SMALL_STATE(1177)] = 15680,
  [SMALL_STATE(1178)] = 15684,
  [SMALL_STATE(1179)] = 15688,
  [SMALL_STATE(1180)] = 15692,
  [SMALL_STATE(1181)] = 15696,
  [SMALL_STATE(1182)] = 15700,
  [SMALL_STATE(1183)] = 15704,
  [SMALL_STATE(1184)] = 15708,
  [SMALL_STATE(1185)] = 15712,
  [SMALL_STATE(1186)] = 15716,
  [SMALL_STATE(1187)] = 15720,
  [SMALL_STATE(1188)] = 15724,
  [SMALL_STATE(1189)] = 15728,
  [SMALL_STATE(1190)] = 15732,
  [SMALL_STATE(1191)] = 15736,
  [SMALL_STATE(1192)] = 15740,
  [SMALL_STATE(1193)] = 15744,
  [SMALL_STATE(1194)] = 15748,
  [SMALL_STATE(1195)] = 15752,
  [SMALL_STATE(1196)] = 15756,
  [SMALL_STATE(1197)] = 15760,
  [SMALL_STATE(1198)] = 15764,
  [SMALL_STATE(1199)] = 15768,
  [SMALL_STATE(1200)] = 15772,
  [SMALL_STATE(1201)] = 15776,
  [SMALL_STATE(1202)] = 15780,
  [SMALL_STATE(1203)] = 15784,
  [SMALL_STATE(1204)] = 15788,
  [SMALL_STATE(1205)] = 15792,
  [SMALL_STATE(1206)] = 15796,
  [SMALL_STATE(1207)] = 15800,
  [SMALL_STATE(1208)] = 15804,
  [SMALL_STATE(1209)] = 15808,
  [SMALL_STATE(1210)] = 15812,
  [SMALL_STATE(1211)] = 15816,
  [SMALL_STATE(1212)] = 15820,
  [SMALL_STATE(1213)] = 15824,
  [SMALL_STATE(1214)] = 15828,
  [SMALL_STATE(1215)] = 15832,
  [SMALL_STATE(1216)] = 15836,
  [SMALL_STATE(1217)] = 15840,
  [SMALL_STATE(1218)] = 15844,
  [SMALL_STATE(1219)] = 15848,
  [SMALL_STATE(1220)] = 15852,
  [SMALL_STATE(1221)] = 15856,
  [SMALL_STATE(1222)] = 15860,
  [SMALL_STATE(1223)] = 15864,
  [SMALL_STATE(1224)] = 15868,
  [SMALL_STATE(1225)] = 15872,
  [SMALL_STATE(1226)] = 15876,
  [SMALL_STATE(1227)] = 15880,
  [SMALL_STATE(1228)] = 15884,
  [SMALL_STATE(1229)] = 15888,
  [SMALL_STATE(1230)] = 15892,
  [SMALL_STATE(1231)] = 15896,
  [SMALL_STATE(1232)] = 15900,
  [SMALL_STATE(1233)] = 15904,
  [SMALL_STATE(1234)] = 15908,
  [SMALL_STATE(1235)] = 15912,
  [SMALL_STATE(1236)] = 15916,
  [SMALL_STATE(1237)] = 15920,
  [SMALL_STATE(1238)] = 15924,
  [SMALL_STATE(1239)] = 15928,
  [SMALL_STATE(1240)] = 15932,
  [SMALL_STATE(1241)] = 15936,
  [SMALL_STATE(1242)] = 15940,
  [SMALL_STATE(1243)] = 15944,
  [SMALL_STATE(1244)] = 15948,
  [SMALL_STATE(1245)] = 15952,
  [SMALL_STATE(1246)] = 15956,
  [SMALL_STATE(1247)] = 15960,
  [SMALL_STATE(1248)] = 15964,
  [SMALL_STATE(1249)] = 15968,
  [SMALL_STATE(1250)] = 15972,
  [SMALL_STATE(1251)] = 15976,
  [SMALL_STATE(1252)] = 15980,
  [SMALL_STATE(1253)] = 15984,
  [SMALL_STATE(1254)] = 15988,
  [SMALL_STATE(1255)] = 15992,
  [SMALL_STATE(1256)] = 15996,
  [SMALL_STATE(1257)] = 16000,
  [SMALL_STATE(1258)] = 16004,
  [SMALL_STATE(1259)] = 16008,
  [SMALL_STATE(1260)] = 16012,
  [SMALL_STATE(1261)] = 16016,
  [SMALL_STATE(1262)] = 16020,
  [SMALL_STATE(1263)] = 16024,
  [SMALL_STATE(1264)] = 16028,
  [SMALL_STATE(1265)] = 16032,
  [SMALL_STATE(1266)] = 16036,
  [SMALL_STATE(1267)] = 16040,
  [SMALL_STATE(1268)] = 16044,
  [SMALL_STATE(1269)] = 16048,
  [SMALL_STATE(1270)] = 16052,
  [SMALL_STATE(1271)] = 16056,
  [SMALL_STATE(1272)] = 16060,
  [SMALL_STATE(1273)] = 16064,
  [SMALL_STATE(1274)] = 16068,
  [SMALL_STATE(1275)] = 16072,
  [SMALL_STATE(1276)] = 16076,
  [SMALL_STATE(1277)] = 16080,
  [SMALL_STATE(1278)] = 16084,
  [SMALL_STATE(1279)] = 16088,
  [SMALL_STATE(1280)] = 16092,
  [SMALL_STATE(1281)] = 16096,
  [SMALL_STATE(1282)] = 16100,
  [SMALL_STATE(1283)] = 16104,
  [SMALL_STATE(1284)] = 16108,
  [SMALL_STATE(1285)] = 16112,
  [SMALL_STATE(1286)] = 16116,
  [SMALL_STATE(1287)] = 16120,
  [SMALL_STATE(1288)] = 16124,
  [SMALL_STATE(1289)] = 16128,
  [SMALL_STATE(1290)] = 16132,
  [SMALL_STATE(1291)] = 16136,
  [SMALL_STATE(1292)] = 16140,
  [SMALL_STATE(1293)] = 16144,
  [SMALL_STATE(1294)] = 16148,
  [SMALL_STATE(1295)] = 16152,
  [SMALL_STATE(1296)] = 16156,
  [SMALL_STATE(1297)] = 16160,
  [SMALL_STATE(1298)] = 16164,
  [SMALL_STATE(1299)] = 16168,
  [SMALL_STATE(1300)] = 16172,
  [SMALL_STATE(1301)] = 16176,
  [SMALL_STATE(1302)] = 16180,
  [SMALL_STATE(1303)] = 16184,
  [SMALL_STATE(1304)] = 16188,
  [SMALL_STATE(1305)] = 16192,
  [SMALL_STATE(1306)] = 16196,
  [SMALL_STATE(1307)] = 16200,
  [SMALL_STATE(1308)] = 16204,
  [SMALL_STATE(1309)] = 16208,
  [SMALL_STATE(1310)] = 16212,
  [SMALL_STATE(1311)] = 16216,
  [SMALL_STATE(1312)] = 16220,
  [SMALL_STATE(1313)] = 16224,
  [SMALL_STATE(1314)] = 16228,
  [SMALL_STATE(1315)] = 16232,
  [SMALL_STATE(1316)] = 16236,
  [SMALL_STATE(1317)] = 16240,
  [SMALL_STATE(1318)] = 16244,
  [SMALL_STATE(1319)] = 16248,
  [SMALL_STATE(1320)] = 16252,
  [SMALL_STATE(1321)] = 16256,
  [SMALL_STATE(1322)] = 16260,
  [SMALL_STATE(1323)] = 16264,
  [SMALL_STATE(1324)] = 16268,
  [SMALL_STATE(1325)] = 16272,
  [SMALL_STATE(1326)] = 16276,
  [SMALL_STATE(1327)] = 16280,
  [SMALL_STATE(1328)] = 16284,
  [SMALL_STATE(1329)] = 16288,
  [SMALL_STATE(1330)] = 16292,
  [SMALL_STATE(1331)] = 16296,
  [SMALL_STATE(1332)] = 16300,
  [SMALL_STATE(1333)] = 16304,
  [SMALL_STATE(1334)] = 16308,
  [SMALL_STATE(1335)] = 16312,
  [SMALL_STATE(1336)] = 16316,
  [SMALL_STATE(1337)] = 16320,
  [SMALL_STATE(1338)] = 16324,
  [SMALL_STATE(1339)] = 16328,
  [SMALL_STATE(1340)] = 16332,
  [SMALL_STATE(1341)] = 16336,
  [SMALL_STATE(1342)] = 16340,
  [SMALL_STATE(1343)] = 16344,
  [SMALL_STATE(1344)] = 16348,
  [SMALL_STATE(1345)] = 16352,
  [SMALL_STATE(1346)] = 16356,
  [SMALL_STATE(1347)] = 16360,
  [SMALL_STATE(1348)] = 16364,
  [SMALL_STATE(1349)] = 16368,
  [SMALL_STATE(1350)] = 16372,
  [SMALL_STATE(1351)] = 16376,
  [SMALL_STATE(1352)] = 16380,
  [SMALL_STATE(1353)] = 16384,
  [SMALL_STATE(1354)] = 16388,
  [SMALL_STATE(1355)] = 16392,
  [SMALL_STATE(1356)] = 16396,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1356),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1354),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1353),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1352),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(453),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(463),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(625),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1356),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(542),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(417),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(428),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1354),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1353),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(424),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(425),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(457),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(421),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1352),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 21),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 21),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1236),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(817),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 46),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 46),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 17),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 46),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(458),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1122),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8, .production_id = 46),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_element, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1021),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1078),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9, .production_id = 46),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1310),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1056),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1345),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 38),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1346),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(1126),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 39),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1344),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 17),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 40),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2, .production_id = 46),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 29),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1166),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_options_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_options_repeat1, 2), SHIFT_REPEAT(558),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 8),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 56),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 57),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6, .production_id = 9),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2, .production_id = 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 56),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 9),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3, .production_id = 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 26),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 120),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2, .production_id = 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1126),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1, .production_id = 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 38),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3, .production_id = 46),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 8, .production_id = 26),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 38),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priviledge, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3, .production_id = 6),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 56),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4, .production_id = 46),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 61),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 100),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 101),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 56),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 105),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(478),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 9),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(810),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3, .production_id = 6),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4, .production_id = 18),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(703),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 116),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2), SHIFT_REPEAT(1080),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 115),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 111),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 9),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 26),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15, .production_id = 88),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 11, .production_id = 72),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 38),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 26),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6, .production_id = 43),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_name, 1, .production_id = 19),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3, .production_id = 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2, .production_id = 22),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_options, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 52),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 53),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3, .production_id = 14),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 8),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 59),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 30),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1349),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 44),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3, .production_id = 12),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 25),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1355),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 10),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4, .production_id = 18),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 67),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 27),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3, .production_id = 13),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3, .production_id = 9),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 45),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 3, .production_id = 46),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 33),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1347),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5, .production_id = 35),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1335),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 36),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1334),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 46),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 26),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 18),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 9),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 23, .production_id = 120),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 21, .production_id = 119),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 38),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 69),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 68),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 9),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9, .production_id = 65),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6, .production_id = 26),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 43),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 43),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10, .production_id = 61),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 21, .production_id = 118),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 3),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9, .production_id = 26),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4, .production_id = 6),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 116),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 45),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 6),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4, .production_id = 9),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 115),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4, .production_id = 6),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 71),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 65),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 56),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4, .production_id = 14),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 6),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 43),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 20),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 20, .production_id = 117),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 5),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 111),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 9),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 114),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 113),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 11),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 112),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8, .production_id = 45),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 4),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 105),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 110),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 109),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18, .production_id = 108),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7, .production_id = 9),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 11, .production_id = 71),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 107),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7, .production_id = 43),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 11, .production_id = 74),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 106),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 38),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 56),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 11),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 101),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 100),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 92),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 104),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7, .production_id = 47),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 8, .production_id = 60),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 7, .production_id = 48),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 58),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8, .production_id = 47),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 12, .production_id = 72),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 7, .production_id = 49),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 77),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 103),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 7, .production_id = 50),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 102),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 7, .production_id = 51),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 3),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 98),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 12, .production_id = 78),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 97),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 96),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 95),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 26),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 54),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 79),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3, .production_id = 6),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 81),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3, .production_id = 11),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 26),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 91),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 28),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5, .production_id = 29),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 13, .production_id = 78),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 31),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5, .production_id = 32),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 34),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 7, .production_id = 55),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 79),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 14),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 82),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 37),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 83),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 16, .production_id = 88),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 94),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6, .production_id = 37),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 84),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 85),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 86),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 87),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 93),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 89),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 90),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(818),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1204),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1325),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1316),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1127),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1301),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1240),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1245),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1249),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1252),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(855),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(843),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(856),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(858),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1305),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1284),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1279),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1277),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1275),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(836),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [1077] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2), SHIFT_REPEAT(440),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1, .production_id = 1),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1257),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1256),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1225),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1217),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1225),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1105),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(899),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1248),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 1),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 1),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 1),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1260),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 3),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1285),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1290),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(827),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 2),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1271),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1268),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(700),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1247),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1, .production_id = 1),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1077),
  [1263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1202),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1198),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(57),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1165),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [1292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1164),
  [1294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1150),
  [1304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1136),
  [1314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2), SHIFT_REPEAT(1165),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1085),
  [1345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(691),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(759),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(422),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(833),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(739),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1336),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(439),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 1),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1, .production_id = 73),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(777),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(751),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1208),
  [1469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(213),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(606),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2), SHIFT_REPEAT(736),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1097),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2, .production_id = 75),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1, .production_id = 76),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1120),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(420),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2, .production_id = 80),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(1044),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(890),
  [1544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1343),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1342),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1341),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1327),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 15),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 7),
  [1596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(922),
  [1598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(791),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 16),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1267),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1204),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 1),
  [1638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 99),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [1642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 42),
  [1650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1094),
  [1652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(973),
  [1656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [1658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1113),
  [1666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1118),
  [1670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 70),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [1686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1103),
  [1688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1206),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1039),
  [1698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [1700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1041),
  [1702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 6),
  [1714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1131),
  [1716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4, .production_id = 23),
  [1720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1140),
  [1722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1168),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1167),
  [1728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 3, .production_id = 66),
  [1730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1157),
  [1732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1176),
  [1738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(727),
  [1740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1181),
  [1742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [1744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1189),
  [1746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(741),
  [1748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1234),
  [1750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 64),
  [1778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 63),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 62),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [1788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1205),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [1926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1282),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1306),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1308),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1161),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1098),
  [2066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1311),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [2108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1312),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1076),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1314),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 24),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1321),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1333),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1339),
  [2178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 73),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1230),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1111),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1125),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [2238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1, .production_id = 41),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1332),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1138),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1141),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1142),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1145),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1147),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1328),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1323),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1154),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1155),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1158),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1159),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1162),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1169),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1171),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1179),
  [2350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1182),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1183),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1188),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1191),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [2376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1192),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1193),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1196),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1197),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1199),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1201),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1278),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1211),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1212),
  [2420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [2422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [2432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1219),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1222),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1223),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1224),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1227),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [2458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1229),
  [2460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1231),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1232),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1233),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1235),
  [2474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, .production_id = 5),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1237),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [2490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [2492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [2496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1250),
  [2498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [2500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1253),
  [2504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1258),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [2514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1261),
  [2518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1262),
  [2520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1263),
  [2522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [2524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1265),
  [2526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1266),
  [2528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 4),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [2532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1269),
  [2536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1270),
  [2538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [2540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [2542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1273),
  [2544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1274),
  [2546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [2548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [2550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [2552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1276),
  [2554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [2556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [2558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1243),
  [2560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [2562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [2564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [2566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [2568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [2570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [2572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [2574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [2576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1241),
  [2578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1287),
  [2580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1288),
  [2582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 1),
  [2584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [2586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [2588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [2590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [2592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [2594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1295),
  [2596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1296),
  [2598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [2602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1299),
  [2604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1300),
  [2606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [2608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [2610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1302),
  [2612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [2614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [2616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1304),
  [2618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [2620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [2622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [2624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1307),
  [2628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [2630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [2632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [2634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [2636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [2638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [2640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1238),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [2644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [2646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [2648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1215),
  [2650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1309),
  [2652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [2654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [2656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [2658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1214),
  [2660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [2662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [2664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [2668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1318),
  [2670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1319),
  [2672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1320),
  [2674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [2676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [2678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1322),
  [2680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [2682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [2684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1324),
  [2686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [2688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [2690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [2692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [2694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1329),
  [2696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [2698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1178),
  [2700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [2702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [2704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1174),
  [2706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [2708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [2710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [2712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [2714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1337),
  [2716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1338),
  [2718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [2722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [2724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1340),
  [2726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [2728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [2730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [2732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [2734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [2736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [2738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [2740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1146),
  [2744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [2746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [2748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [2750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [2752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1348),
  [2754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [2756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [2758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [2760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1128),
  [2762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [2764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [2766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [2768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [2770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [2772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [2774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [2776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [2778] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [2782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [2784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [2786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
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
