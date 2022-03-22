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
#define STATE_COUNT 1349
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 309
#define ALIAS_COUNT 31
#define TOKEN_COUNT 145
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 23
#define PRODUCTION_ID_COUNT 125

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
  aux_sym__decimal_literal_token1 = 18,
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
  aux_sym_using_timestamp_spec_token2 = 48,
  aux_sym_insert_statement_token1 = 49,
  aux_sym_insert_statement_token2 = 50,
  aux_sym_insert_statement_token3 = 51,
  aux_sym_insert_values_spec_token1 = 52,
  anon_sym_LBRACE = 53,
  anon_sym_COLON = 54,
  anon_sym_RBRACE = 55,
  aux_sym_using_ttl_timestamp_token1 = 56,
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
  aux_sym_privilege_token1 = 74,
  aux_sym_privilege_token2 = 75,
  aux_sym_privilege_token3 = 76,
  aux_sym_privilege_token4 = 77,
  aux_sym_privilege_token5 = 78,
  aux_sym_privilege_token6 = 79,
  aux_sym_privilege_token7 = 80,
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
  aux_sym_role_with_option_token1 = 133,
  aux_sym_role_with_option_token2 = 134,
  aux_sym_role_with_option_token3 = 135,
  aux_sym_role_with_option_token4 = 136,
  aux_sym_compact_storage_token1 = 137,
  aux_sym_compact_storage_token2 = 138,
  aux_sym_clustering_order_token1 = 139,
  aux_sym_user_super_user_token1 = 140,
  aux_sym_alter_table_add_token1 = 141,
  aux_sym_alter_table_rename_token1 = 142,
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
  sym__decimal_literal = 154,
  sym_from_spec = 155,
  sym_table_name = 156,
  sym_where_spec = 157,
  sym_relation_elements = 158,
  sym_relation_element = 159,
  sym_relation_contains_key = 160,
  sym_relation_contains = 161,
  sym_order_spec = 162,
  sym_delete_statement = 163,
  sym_begin_batch = 164,
  sym_delete_column_list = 165,
  sym_delete_column_item = 166,
  sym_using_timestamp_spec = 167,
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
  sym_truncate = 182,
  sym_create_index = 183,
  sym_index_name = 184,
  sym_index_column_spec = 185,
  sym_index_keys_spec = 186,
  sym_index_entries_s_spec = 187,
  sym_index_full_spec = 188,
  sym_drop_index = 189,
  sym_update = 190,
  sym_assignment_element = 191,
  sym_indexed_column = 192,
  sym_use = 193,
  sym_grant = 194,
  sym_revoke = 195,
  sym_privilege = 196,
  sym_resource = 197,
  sym_list_roles = 198,
  sym_list_permissions = 199,
  sym_drop_aggregate = 200,
  sym_drop_materialized_view = 201,
  sym_drop_function = 202,
  sym_drop_keyspace = 203,
  sym_drop_role = 204,
  sym_drop_table = 205,
  sym_drop_trigger = 206,
  sym_drop_type = 207,
  sym_drop_user = 208,
  sym_create_aggregate = 209,
  sym_init_cond_definition = 210,
  sym_init_cond_list = 211,
  sym_init_cond_list_nested = 212,
  sym_init_cond_hash = 213,
  sym_init_cond_hash_item = 214,
  sym_create_materialized_view = 215,
  sym_materialized_view_where = 216,
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
  sym_role_with_option = 230,
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
  sym_compact_storage = 248,
  sym_clustering_order = 249,
  sym_create_trigger = 250,
  sym_trigger_name = 251,
  sym_trigger_class = 252,
  sym_create_type = 253,
  sym_create_user = 254,
  sym_user_name = 255,
  sym_user_with = 256,
  sym_user_password = 257,
  sym_user_super_user = 258,
  sym_alter_materialized_view = 259,
  sym_alter_keyspace = 260,
  sym_keyspace_name = 261,
  sym_replication_list = 262,
  sym_alter_role = 263,
  sym_alter_table = 264,
  sym_alter_table_operation = 265,
  sym_alter_table_add = 266,
  sym_alter_table_column_definition = 267,
  sym_alter_table_drop_columns = 268,
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
  aux_sym_table_options_repeat1 = 303,
  aux_sym_create_type_repeat1 = 304,
  aux_sym_replication_list_repeat1 = 305,
  aux_sym_alter_table_add_repeat1 = 306,
  aux_sym_alter_type_add_repeat1 = 307,
  aux_sym_alter_type_rename_list_repeat1 = 308,
  anon_alias_sym_aggregate = 309,
  anon_alias_sym_alias = 310,
  anon_alias_sym_assignment_operand = 311,
  anon_alias_sym_column = 312,
  anon_alias_sym_data_type = 313,
  anon_alias_sym_entry = 314,
  anon_alias_sym_finalfunc = 315,
  anon_alias_sym_full = 316,
  anon_alias_sym_function = 317,
  anon_alias_sym_function_name = 318,
  anon_alias_sym_hash_key = 319,
  anon_alias_sym_index = 320,
  anon_alias_sym_key = 321,
  anon_alias_sym_keyspace = 322,
  anon_alias_sym_language = 323,
  anon_alias_sym_limit_value = 324,
  anon_alias_sym_login = 325,
  anon_alias_sym_materialized_view = 326,
  anon_alias_sym_param_name = 327,
  anon_alias_sym_partition_key = 328,
  anon_alias_sym_password = 329,
  anon_alias_sym_primary_key = 330,
  anon_alias_sym_role = 331,
  anon_alias_sym_sfunc = 332,
  anon_alias_sym_table = 333,
  anon_alias_sym_time = 334,
  anon_alias_sym_trigger = 335,
  anon_alias_sym_ttl = 336,
  anon_alias_sym_type = 337,
  anon_alias_sym_user = 338,
  anon_alias_sym_value = 339,
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
  [aux_sym__decimal_literal_token1] = "_decimal_literal_token1",
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
  [aux_sym_using_timestamp_spec_token2] = "TIMESTAMP",
  [aux_sym_insert_statement_token1] = "INSERT",
  [aux_sym_insert_statement_token2] = "INTO",
  [aux_sym_insert_statement_token3] = "NOT",
  [aux_sym_insert_values_spec_token1] = "VALUES",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [aux_sym_using_ttl_timestamp_token1] = "TTL",
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
  [aux_sym_privilege_token1] = "ALL",
  [aux_sym_privilege_token2] = "PERMISSIONS",
  [aux_sym_privilege_token3] = "ALTER",
  [aux_sym_privilege_token4] = "AUTHORIZE",
  [aux_sym_privilege_token5] = "DESCRIBE",
  [aux_sym_privilege_token6] = "EXECUTE",
  [aux_sym_privilege_token7] = "MODIFY",
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
  [aux_sym_role_with_option_token1] = "PASSWORD",
  [aux_sym_role_with_option_token2] = "LOGIN",
  [aux_sym_role_with_option_token3] = "SUPERUSER",
  [aux_sym_role_with_option_token4] = "OPTIONS",
  [aux_sym_compact_storage_token1] = "COMPACT",
  [aux_sym_compact_storage_token2] = "STORAGE",
  [aux_sym_clustering_order_token1] = "CLUSTERING",
  [aux_sym_user_super_user_token1] = "NOSUPERUSER",
  [aux_sym_alter_table_add_token1] = "ADD",
  [aux_sym_alter_table_rename_token1] = "RENAME",
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
  [sym__decimal_literal] = "_decimal_literal",
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
  [sym_indexed_column] = "indexed_column",
  [sym_use] = "use",
  [sym_grant] = "grant",
  [sym_revoke] = "revoke",
  [sym_privilege] = "privilege",
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
  [sym_role_with_option] = "role_with_option",
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
  [sym_compact_storage] = "compact_storage",
  [sym_clustering_order] = "clustering_order",
  [sym_create_trigger] = "create_trigger",
  [sym_trigger_name] = "trigger_name",
  [sym_trigger_class] = "trigger_class",
  [sym_create_type] = "create_type",
  [sym_create_user] = "create_user",
  [sym_user_name] = "user_name",
  [sym_user_with] = "user_with",
  [sym_user_password] = "user_password",
  [sym_user_super_user] = "user_super_user",
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
  [aux_sym_table_options_repeat1] = "table_options_repeat1",
  [aux_sym_create_type_repeat1] = "create_type_repeat1",
  [aux_sym_replication_list_repeat1] = "replication_list_repeat1",
  [aux_sym_alter_table_add_repeat1] = "alter_table_add_repeat1",
  [aux_sym_alter_type_add_repeat1] = "alter_type_add_repeat1",
  [aux_sym_alter_type_rename_list_repeat1] = "alter_type_rename_list_repeat1",
  [anon_alias_sym_aggregate] = "aggregate",
  [anon_alias_sym_alias] = "alias",
  [anon_alias_sym_assignment_operand] = "assignment_operand",
  [anon_alias_sym_column] = "column",
  [anon_alias_sym_data_type] = "data_type",
  [anon_alias_sym_entry] = "entry",
  [anon_alias_sym_finalfunc] = "finalfunc",
  [anon_alias_sym_full] = "full",
  [anon_alias_sym_function] = "function",
  [anon_alias_sym_function_name] = "function_name",
  [anon_alias_sym_hash_key] = "hash_key",
  [anon_alias_sym_index] = "index",
  [anon_alias_sym_key] = "key",
  [anon_alias_sym_keyspace] = "keyspace",
  [anon_alias_sym_language] = "language",
  [anon_alias_sym_limit_value] = "limit_value",
  [anon_alias_sym_login] = "login",
  [anon_alias_sym_materialized_view] = "materialized_view",
  [anon_alias_sym_param_name] = "param_name",
  [anon_alias_sym_partition_key] = "partition_key",
  [anon_alias_sym_password] = "password",
  [anon_alias_sym_primary_key] = "primary_key",
  [anon_alias_sym_role] = "role",
  [anon_alias_sym_sfunc] = "sfunc",
  [anon_alias_sym_table] = "table",
  [anon_alias_sym_time] = "time",
  [anon_alias_sym_trigger] = "trigger",
  [anon_alias_sym_ttl] = "ttl",
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
  [aux_sym__decimal_literal_token1] = aux_sym__decimal_literal_token1,
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
  [aux_sym_using_timestamp_spec_token2] = aux_sym_using_timestamp_spec_token2,
  [aux_sym_insert_statement_token1] = aux_sym_insert_statement_token1,
  [aux_sym_insert_statement_token2] = aux_sym_insert_statement_token2,
  [aux_sym_insert_statement_token3] = aux_sym_insert_statement_token3,
  [aux_sym_insert_values_spec_token1] = aux_sym_insert_values_spec_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_using_ttl_timestamp_token1] = aux_sym_using_ttl_timestamp_token1,
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
  [aux_sym_privilege_token1] = aux_sym_privilege_token1,
  [aux_sym_privilege_token2] = aux_sym_privilege_token2,
  [aux_sym_privilege_token3] = aux_sym_privilege_token3,
  [aux_sym_privilege_token4] = aux_sym_privilege_token4,
  [aux_sym_privilege_token5] = aux_sym_privilege_token5,
  [aux_sym_privilege_token6] = aux_sym_privilege_token6,
  [aux_sym_privilege_token7] = aux_sym_privilege_token7,
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
  [aux_sym_role_with_option_token1] = aux_sym_role_with_option_token1,
  [aux_sym_role_with_option_token2] = aux_sym_role_with_option_token2,
  [aux_sym_role_with_option_token3] = aux_sym_role_with_option_token3,
  [aux_sym_role_with_option_token4] = aux_sym_role_with_option_token4,
  [aux_sym_compact_storage_token1] = aux_sym_compact_storage_token1,
  [aux_sym_compact_storage_token2] = aux_sym_compact_storage_token2,
  [aux_sym_clustering_order_token1] = aux_sym_clustering_order_token1,
  [aux_sym_user_super_user_token1] = aux_sym_user_super_user_token1,
  [aux_sym_alter_table_add_token1] = aux_sym_alter_table_add_token1,
  [aux_sym_alter_table_rename_token1] = aux_sym_alter_table_rename_token1,
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
  [sym__decimal_literal] = sym__decimal_literal,
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
  [sym_indexed_column] = sym_indexed_column,
  [sym_use] = sym_use,
  [sym_grant] = sym_grant,
  [sym_revoke] = sym_revoke,
  [sym_privilege] = sym_privilege,
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
  [sym_role_with_option] = sym_role_with_option,
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
  [sym_compact_storage] = sym_compact_storage,
  [sym_clustering_order] = sym_clustering_order,
  [sym_create_trigger] = sym_create_trigger,
  [sym_trigger_name] = sym_trigger_name,
  [sym_trigger_class] = sym_trigger_class,
  [sym_create_type] = sym_create_type,
  [sym_create_user] = sym_create_user,
  [sym_user_name] = sym_user_name,
  [sym_user_with] = sym_user_with,
  [sym_user_password] = sym_user_password,
  [sym_user_super_user] = sym_user_super_user,
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
  [aux_sym_table_options_repeat1] = aux_sym_table_options_repeat1,
  [aux_sym_create_type_repeat1] = aux_sym_create_type_repeat1,
  [aux_sym_replication_list_repeat1] = aux_sym_replication_list_repeat1,
  [aux_sym_alter_table_add_repeat1] = aux_sym_alter_table_add_repeat1,
  [aux_sym_alter_type_add_repeat1] = aux_sym_alter_type_add_repeat1,
  [aux_sym_alter_type_rename_list_repeat1] = aux_sym_alter_type_rename_list_repeat1,
  [anon_alias_sym_aggregate] = anon_alias_sym_aggregate,
  [anon_alias_sym_alias] = anon_alias_sym_alias,
  [anon_alias_sym_assignment_operand] = anon_alias_sym_assignment_operand,
  [anon_alias_sym_column] = anon_alias_sym_column,
  [anon_alias_sym_data_type] = anon_alias_sym_data_type,
  [anon_alias_sym_entry] = anon_alias_sym_entry,
  [anon_alias_sym_finalfunc] = anon_alias_sym_finalfunc,
  [anon_alias_sym_full] = anon_alias_sym_full,
  [anon_alias_sym_function] = anon_alias_sym_function,
  [anon_alias_sym_function_name] = anon_alias_sym_function_name,
  [anon_alias_sym_hash_key] = anon_alias_sym_hash_key,
  [anon_alias_sym_index] = anon_alias_sym_index,
  [anon_alias_sym_key] = anon_alias_sym_key,
  [anon_alias_sym_keyspace] = anon_alias_sym_keyspace,
  [anon_alias_sym_language] = anon_alias_sym_language,
  [anon_alias_sym_limit_value] = anon_alias_sym_limit_value,
  [anon_alias_sym_login] = anon_alias_sym_login,
  [anon_alias_sym_materialized_view] = anon_alias_sym_materialized_view,
  [anon_alias_sym_param_name] = anon_alias_sym_param_name,
  [anon_alias_sym_partition_key] = anon_alias_sym_partition_key,
  [anon_alias_sym_password] = anon_alias_sym_password,
  [anon_alias_sym_primary_key] = anon_alias_sym_primary_key,
  [anon_alias_sym_role] = anon_alias_sym_role,
  [anon_alias_sym_sfunc] = anon_alias_sym_sfunc,
  [anon_alias_sym_table] = anon_alias_sym_table,
  [anon_alias_sym_time] = anon_alias_sym_time,
  [anon_alias_sym_trigger] = anon_alias_sym_trigger,
  [anon_alias_sym_ttl] = anon_alias_sym_ttl,
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
  [aux_sym__decimal_literal_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym_using_timestamp_spec_token2] = {
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
  [aux_sym_using_ttl_timestamp_token1] = {
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
  [aux_sym_privilege_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_privilege_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_privilege_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_privilege_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_privilege_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_privilege_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_privilege_token7] = {
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
  [aux_sym_role_with_option_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_role_with_option_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_role_with_option_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_role_with_option_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_compact_storage_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_compact_storage_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_clustering_order_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_user_super_user_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_alter_table_add_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_alter_table_rename_token1] = {
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
  [sym__decimal_literal] = {
    .visible = false,
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
  [sym_indexed_column] = {
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
  [sym_privilege] = {
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
  [sym_role_with_option] = {
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
  [sym_compact_storage] = {
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
  [sym_user_with] = {
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
  [aux_sym_alter_table_add_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alter_type_add_repeat1] = {
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
  [anon_alias_sym_assignment_operand] = {
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
  [anon_alias_sym_entry] = {
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
  [anon_alias_sym_key] = {
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
  [anon_alias_sym_login] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_materialized_view] = {
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
  [anon_alias_sym_password] = {
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
  [anon_alias_sym_time] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_trigger] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_ttl] = {
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
    [3] = anon_alias_sym_role,
  },
  [20] = {
    [0] = anon_alias_sym_function_name,
  },
  [21] = {
    [1] = anon_alias_sym_limit_value,
  },
  [22] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_index,
  },
  [23] = {
    [2] = anon_alias_sym_time,
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
    [2] = anon_alias_sym_ttl,
  },
  [39] = {
    [1] = anon_alias_sym_table,
  },
  [40] = {
    [1] = anon_alias_sym_function,
  },
  [41] = {
    [1] = anon_alias_sym_role,
  },
  [42] = {
    [0] = anon_alias_sym_param_name,
  },
  [43] = {
    [5] = anon_alias_sym_role,
  },
  [44] = {
    [1] = anon_alias_sym_password,
  },
  [45] = {
    [5] = anon_alias_sym_materialized_view,
  },
  [46] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
  },
  [47] = {
    [1] = anon_alias_sym_column,
  },
  [48] = {
    [2] = anon_alias_sym_password,
  },
  [49] = {
    [2] = anon_alias_sym_login,
  },
  [50] = {
    [2] = anon_alias_sym_user,
  },
  [51] = {
    [2] = anon_alias_sym_type,
    [4] = anon_alias_sym_column,
    [5] = anon_alias_sym_data_type,
  },
  [52] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_table,
  },
  [53] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_index,
  },
  [54] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
  },
  [55] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
  },
  [56] = {
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_table,
  },
  [57] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_trigger,
    [6] = anon_alias_sym_table,
  },
  [58] = {
    [2] = anon_alias_sym_trigger,
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_table,
  },
  [59] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_type,
  },
  [60] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_table,
  },
  [61] = {
    [1] = anon_alias_sym_keyspace,
    [3] = anon_alias_sym_function,
  },
  [62] = {
    [1] = anon_alias_sym_column,
    [3] = anon_alias_sym_column,
  },
  [63] = {
    [0] = anon_alias_sym_column,
    [2] = anon_alias_sym_column,
  },
  [64] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_materialized_view,
  },
  [65] = {
    [2] = anon_alias_sym_time,
    [5] = anon_alias_sym_ttl,
  },
  [66] = {
    [2] = anon_alias_sym_ttl,
    [5] = anon_alias_sym_time,
  },
  [67] = {
    [4] = anon_alias_sym_assignment_operand,
  },
  [68] = {
    [2] = anon_alias_sym_key,
  },
  [69] = {
    [2] = anon_alias_sym_entry,
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
    [0] = anon_alias_sym_key,
    [2] = anon_alias_sym_value,
  },
  [78] = {
    [5] = anon_alias_sym_type,
    [7] = anon_alias_sym_column,
    [8] = anon_alias_sym_data_type,
  },
  [79] = {
    [4] = anon_alias_sym_column,
  },
  [80] = {
    [2] = anon_alias_sym_value,
  },
  [81] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_trigger,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
  },
  [82] = {
    [0] = anon_alias_sym_partition_key,
  },
  [83] = {
    [2] = anon_alias_sym_function,
    [9] = anon_alias_sym_language,
  },
  [84] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_type,
    [9] = anon_alias_sym_column,
    [10] = anon_alias_sym_data_type,
  },
  [85] = {
    [2] = anon_alias_sym_function,
    [10] = anon_alias_sym_language,
  },
  [86] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [87] = {
    [2] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [88] = {
    [2] = anon_alias_sym_aggregate,
    [7] = anon_alias_sym_sfunc,
    [11] = anon_alias_sym_finalfunc,
  },
  [89] = {
    [4] = anon_alias_sym_function,
    [11] = anon_alias_sym_language,
  },
  [90] = {
    [5] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [91] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [92] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_table,
    [13] = anon_alias_sym_primary_key,
  },
  [93] = {
    [4] = anon_alias_sym_function,
    [12] = anon_alias_sym_language,
  },
  [94] = {
    [5] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [95] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [96] = {
    [2] = anon_alias_sym_keyspace,
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [97] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [98] = {
    [4] = anon_alias_sym_function,
    [13] = anon_alias_sym_language,
  },
  [99] = {
    [4] = anon_alias_sym_aggregate,
    [9] = anon_alias_sym_sfunc,
    [13] = anon_alias_sym_finalfunc,
  },
  [100] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [101] = {
    [5] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [102] = {
    [5] = anon_alias_sym_aggregate,
    [10] = anon_alias_sym_sfunc,
    [14] = anon_alias_sym_finalfunc,
  },
  [103] = {
    [0] = anon_alias_sym_hash_key,
  },
  [104] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
    [10] = anon_alias_sym_table,
    [15] = anon_alias_sym_primary_key,
  },
  [105] = {
    [3] = anon_alias_sym_materialized_view,
    [8] = anon_alias_sym_keyspace,
    [10] = anon_alias_sym_table,
    [15] = anon_alias_sym_primary_key,
  },
  [106] = {
    [7] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [107] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [14] = anon_alias_sym_language,
  },
  [108] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [109] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_table,
    [16] = anon_alias_sym_primary_key,
  },
  [110] = {
    [7] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [111] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_function,
    [15] = anon_alias_sym_language,
  },
  [112] = {
    [4] = anon_alias_sym_keyspace,
    [6] = anon_alias_sym_aggregate,
    [11] = anon_alias_sym_sfunc,
    [15] = anon_alias_sym_finalfunc,
  },
  [113] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [114] = {
    [5] = anon_alias_sym_keyspace,
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [115] = {
    [3] = anon_alias_sym_keyspace,
    [5] = anon_alias_sym_materialized_view,
    [10] = anon_alias_sym_keyspace,
    [12] = anon_alias_sym_table,
    [17] = anon_alias_sym_primary_key,
  },
  [116] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [117] = {
    [7] = anon_alias_sym_function,
    [16] = anon_alias_sym_language,
  },
  [118] = {
    [7] = anon_alias_sym_aggregate,
    [12] = anon_alias_sym_sfunc,
    [16] = anon_alias_sym_finalfunc,
  },
  [119] = {
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_materialized_view,
    [13] = anon_alias_sym_table,
    [18] = anon_alias_sym_primary_key,
  },
  [120] = {
    [6] = anon_alias_sym_materialized_view,
    [11] = anon_alias_sym_keyspace,
    [13] = anon_alias_sym_table,
    [18] = anon_alias_sym_primary_key,
  },
  [121] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [17] = anon_alias_sym_language,
  },
  [122] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_function,
    [18] = anon_alias_sym_language,
  },
  [123] = {
    [7] = anon_alias_sym_keyspace,
    [9] = anon_alias_sym_aggregate,
    [14] = anon_alias_sym_sfunc,
    [18] = anon_alias_sym_finalfunc,
  },
  [124] = {
    [6] = anon_alias_sym_keyspace,
    [8] = anon_alias_sym_materialized_view,
    [13] = anon_alias_sym_keyspace,
    [15] = anon_alias_sym_table,
    [20] = anon_alias_sym_primary_key,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__decimal_literal, 5,
    sym__decimal_literal,
    anon_alias_sym_assignment_operand,
    anon_alias_sym_index,
    anon_alias_sym_limit_value,
    anon_alias_sym_value,
  sym_column_list, 2,
    sym_column_list,
    anon_alias_sym_primary_key,
  sym_data_type, 2,
    sym_data_type,
    anon_alias_sym_data_type,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(555);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(569);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == '*') ADVANCE(565);
      if (lookahead == '+') ADVANCE(649);
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '-') ADVANCE(650);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == ':') ADVANCE(629);
      if (lookahead == ';') ADVANCE(556);
      if (lookahead == '<') ADVANCE(595);
      if (lookahead == '=') ADVANCE(598);
      if (lookahead == '>') ADVANCE(599);
      if (lookahead == 'X') ADVANCE(29);
      if (lookahead == '[') ADVANCE(619);
      if (lookahead == ']') ADVANCE(620);
      if (lookahead == '{') ADVANCE(628);
      if (lookahead == '}') ADVANCE(630);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(45);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(46);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(376);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(194);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(424);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(117);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(38);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(336);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(196);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(47);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(153);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(311);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(41);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(569);
      if (lookahead == '*') ADVANCE(565);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '0') ADVANCE(578);
      if (lookahead == 'X') ADVANCE(756);
      if (lookahead == '[') ADVANCE(619);
      if (lookahead == '{') ADVANCE(628);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(761);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(923);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(881);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(938);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(552);
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
      if (lookahead == '\'') ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(576);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(576);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(518);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(569);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == '*') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '*') ADVANCE(565);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(818);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(895);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '*') ADVANCE(565);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(895);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(886);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(806);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(865);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(758);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(830);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(810);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(759);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(793);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(784);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(917);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(760);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(836);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(920);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(801);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(871);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(771);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(833);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(870);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(834);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(926);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(858);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(924);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(795);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(882);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(802);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(885);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(771);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(802);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(852);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(802);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(852);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(521);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(534);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(540);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(550);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(545);
      END_STATE();
    case 34:
      if (lookahead == 'X') ADVANCE(517);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(501);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(485);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(292);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(653);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(231);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(373);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(371);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(371);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(532);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(388);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(494);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(193);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(72);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(386);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(343);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(388);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(342);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(208);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(354);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(607);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(286);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(348);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(338);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(459);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(425);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(492);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(345);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(390);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(391);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(474);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(698);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(151);
      END_STATE();
    case 77:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(281);
      END_STATE();
    case 78:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(283);
      END_STATE();
    case 79:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(284);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(609);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(685);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(687);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(608);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(222);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(491);
      END_STATE();
    case 87:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(350);
      END_STATE();
    case 88:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 89:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(449);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(451);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(453);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(481);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 97:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(241);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      END_STATE();
    case 98:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(473);
      END_STATE();
    case 99:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 100:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(476);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(205);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(367);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(568);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(438);
      END_STATE();
    case 102:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(278);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(367);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(568);
      END_STATE();
    case 103:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(752);
      END_STATE();
    case 104:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(594);
      END_STATE();
    case 105:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(736);
      END_STATE();
    case 106:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(738);
      END_STATE();
    case 107:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(616);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(688);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(742);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(726);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(617);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(677);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 115:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 116:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(651);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(588);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(686);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(730);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(753);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(654);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(532);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(532);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(479);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(355);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(370);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(427);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(428);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 194:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(611);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(601);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(691);
      END_STATE();
    case 195:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(611);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(602);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(691);
      END_STATE();
    case 196:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(674);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(637);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(460);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(683);
      END_STATE();
    case 197:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(674);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 198:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(507);
      END_STATE();
    case 199:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(489);
      END_STATE();
    case 200:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(205);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(438);
      END_STATE();
    case 201:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(211);
      END_STATE();
    case 202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(621);
      END_STATE();
    case 203:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(563);
      END_STATE();
    case 204:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(749);
      END_STATE();
    case 205:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(404);
      END_STATE();
    case 206:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(232);
      END_STATE();
    case 207:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 208:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(246);
      END_STATE();
    case 209:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(212);
      END_STATE();
    case 210:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(493);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(165);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 212:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 213:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(141);
      END_STATE();
    case 214:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 215:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 216:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(214);
      END_STATE();
    case 217:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 218:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(692);
      END_STATE();
    case 219:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(618);
      END_STATE();
    case 220:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(183);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(455);
      END_STATE();
    case 221:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(356);
      END_STATE();
    case 222:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(513);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(457);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(482);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(339);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(446);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(514);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 242:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(426);
      END_STATE();
    case 243:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 245:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 246:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 247:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 248:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 249:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 250:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 251:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 252:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(471);
      END_STATE();
    case 253:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 254:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(136);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(438);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(655);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(631);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(643);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(706);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(278);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(367);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(532);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(506);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(430);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(483);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(361);
      END_STATE();
    case 273:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 274:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 275:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 276:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 277:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(647);
      END_STATE();
    case 278:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(346);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      END_STATE();
    case 279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 285:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 286:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(475);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 287:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 288:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 289:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(591);
      END_STATE();
    case 291:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(591);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(167);
      END_STATE();
    case 292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(368);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(461);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(333);
      END_STATE();
    case 293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(364);
      END_STATE();
    case 294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(238);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(441);
      END_STATE();
    case 295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(242);
      END_STATE();
    case 296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(124);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(511);
      END_STATE();
    case 298:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 299:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(560);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(615);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(743);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(712);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(700);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(668);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(740);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(456);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(158);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(272);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(116);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(120);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(461);
      END_STATE();
    case 313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(261);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(480);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(340);
      END_STATE();
    case 316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(340);
      END_STATE();
    case 317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 318:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 319:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 320:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 321:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 322:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 323:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 324:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 325:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(417);
      END_STATE();
    case 326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(420);
      END_STATE();
    case 330:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(450);
      END_STATE();
    case 331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 332:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(454);
      END_STATE();
    case 333:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(464);
      END_STATE();
    case 334:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 335:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 336:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(395);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 337:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(653);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(490);
      END_STATE();
    case 338:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 339:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(625);
      END_STATE();
    case 340:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 341:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 342:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 343:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 344:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 345:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 346:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 347:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 348:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 349:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 350:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 351:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 352:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 353:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 354:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 355:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(396);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(372);
      END_STATE();
    case 356:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(397);
      END_STATE();
    case 357:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 358:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 359:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(312);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 360:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 361:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 362:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(718);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 363:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(645);
      END_STATE();
    case 364:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(622);
      END_STATE();
    case 365:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(116);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 366:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(116);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 367:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(264);
      END_STATE();
    case 368:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 369:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 370:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 371:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 372:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 373:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(282);
      END_STATE();
    case 374:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 375:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 376:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 377:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 378:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 379:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(658);
      END_STATE();
    case 380:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(606);
      END_STATE();
    case 381:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(702);
      END_STATE();
    case 382:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(679);
      END_STATE();
    case 383:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(732);
      END_STATE();
    case 384:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(744);
      END_STATE();
    case 385:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(751);
      END_STATE();
    case 386:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(682);
      END_STATE();
    case 387:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(681);
      END_STATE();
    case 388:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 389:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(532);
      END_STATE();
    case 390:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 391:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(508);
      END_STATE();
    case 392:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 393:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 394:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 395:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(495);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(626);
      END_STATE();
    case 396:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 397:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 398:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 399:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 400:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 401:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 402:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(347);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(335);
      END_STATE();
    case 403:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 404:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 405:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 406:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 407:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 408:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 409:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 410:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 411:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      END_STATE();
    case 412:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(627);
      END_STATE();
    case 413:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(641);
      END_STATE();
    case 414:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(745);
      END_STATE();
    case 415:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(693);
      END_STATE();
    case 416:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(603);
      END_STATE();
    case 417:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(657);
      END_STATE();
    case 418:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(741);
      END_STATE();
    case 419:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(667);
      END_STATE();
    case 420:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(663);
      END_STATE();
    case 421:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(666);
      END_STATE();
    case 422:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(500);
      END_STATE();
    case 423:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(422);
      END_STATE();
    case 424:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(344);
      END_STATE();
    case 425:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(472);
      END_STATE();
    case 426:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(435);
      END_STATE();
    case 427:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(458);
      END_STATE();
    case 428:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      END_STATE();
    case 429:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(226);
      END_STATE();
    case 430:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 431:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 432:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 433:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(181);
      END_STATE();
    case 434:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(374);
      END_STATE();
    case 435:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(244);
      END_STATE();
    case 436:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(369);
      END_STATE();
    case 437:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(477);
      END_STATE();
    case 438:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      END_STATE();
    case 439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(714);
      END_STATE();
    case 441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(672);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(722);
      END_STATE();
    case 443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(710);
      END_STATE();
    case 444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(652);
      END_STATE();
    case 445:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(739);
      END_STATE();
    case 446:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(564);
      END_STATE();
    case 447:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(696);
      END_STATE();
    case 448:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(624);
      END_STATE();
    case 449:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(557);
      END_STATE();
    case 450:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(734);
      END_STATE();
    case 451:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(746);
      END_STATE();
    case 452:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(728);
      END_STATE();
    case 453:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(558);
      END_STATE();
    case 454:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(720);
      END_STATE();
    case 455:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      END_STATE();
    case 456:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(392);
      END_STATE();
    case 457:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 458:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(411);
      END_STATE();
    case 459:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 460:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 461:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 462:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 463:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      END_STATE();
    case 464:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 465:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 466:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 467:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 468:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 469:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 470:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 471:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 472:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      END_STATE();
    case 473:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 474:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(237);
      END_STATE();
    case 475:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 476:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 477:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 478:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 479:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 480:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(408);
      END_STATE();
    case 481:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(400);
      END_STATE();
    case 482:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(445);
      END_STATE();
    case 483:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 484:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 485:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(437);
      END_STATE();
    case 486:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 487:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(431);
      END_STATE();
    case 488:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 489:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(322);
      END_STATE();
    case 490:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 491:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(468);
      END_STATE();
    case 492:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 493:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 494:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 495:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(375);
      END_STATE();
    case 496:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(340);
      END_STATE();
    case 497:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(147);
      END_STATE();
    case 498:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(678);
      END_STATE();
    case 499:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(562);
      END_STATE();
    case 500:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(353);
      END_STATE();
    case 501:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(401);
      END_STATE();
    case 502:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(636);
      END_STATE();
    case 503:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(442);
      END_STATE();
    case 504:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(157);
      END_STATE();
    case 505:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(605);
      END_STATE();
    case 506:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(754);
      END_STATE();
    case 507:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(662);
      END_STATE();
    case 508:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(689);
      END_STATE();
    case 509:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(604);
      END_STATE();
    case 510:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 511:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(250);
      END_STATE();
    case 512:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(436);
      END_STATE();
    case 513:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(146);
      END_STATE();
    case 514:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(173);
      END_STATE();
    case 515:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      END_STATE();
    case 516:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      END_STATE();
    case 517:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(572);
      END_STATE();
    case 518:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 519:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 520:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(575);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 530:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 531:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(530);
      END_STATE();
    case 532:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 533:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(537);
      END_STATE();
    case 540:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(539);
      END_STATE();
    case 541:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      END_STATE();
    case 542:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 546:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(541);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(549);
      END_STATE();
    case 551:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 552:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(5);
      END_STATE();
    case 553:
      if (eof) ADVANCE(555);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(569);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '0') ADVANCE(578);
      if (lookahead == ';') ADVANCE(556);
      if (lookahead == 'X') ADVANCE(29);
      if (lookahead == '[') ADVANCE(619);
      if (lookahead == '{') ADVANCE(628);
      if (lookahead == '}') ADVANCE(630);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(149);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(389);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(150);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(538);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(42);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(376);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(307);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(166);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(223);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(484);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(398);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(553)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(586);
      END_STATE();
    case 554:
      if (eof) ADVANCE(555);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(569);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(629);
      if (lookahead == ';') ADVANCE(556);
      if (lookahead == '<') ADVANCE(595);
      if (lookahead == '=') ADVANCE(598);
      if (lookahead == '>') ADVANCE(599);
      if (lookahead == '[') ADVANCE(619);
      if (lookahead == ']') ADVANCE(620);
      if (lookahead == '{') ADVANCE(628);
      if (lookahead == '}') ADVANCE(630);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(102);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(152);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(359);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(189);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(402);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(376);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(424);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(223);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(197);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(377);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(365);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(58);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(554)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
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
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_limit_spec_token1);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__string_literal);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '-') ADVANCE(545);
      if (lookahead == '.') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(516);
      if (lookahead == 'X') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(532);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(519);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(522);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(526);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(532);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
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
          lookahead == 'd') ADVANCE(154);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(457);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(482);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(716);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
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
          lookahead == 's') ADVANCE(639);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_order_spec_token3);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_order_spec_token4);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_delete_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_delete_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
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
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token2);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_insert_statement_token3);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_using_ttl_timestamp_token1);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_update_token2);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_update_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_privilege_token1);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_privilege_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_privilege_token2);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_privilege_token3);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_privilege_token4);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_privilege_token5);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_privilege_token6);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_privilege_token7);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_resource_token3);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_resource_token4);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_drop_aggregate_token1);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token1);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token2);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_drop_trigger_token1);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_drop_type_token1);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token2);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token3);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token4);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token5);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token6);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token1);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_column_not_null_token1);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_materialized_view_options_token1);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_data_type_name_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(625);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(910);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(921);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(463);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(486);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_return_mode_token1);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_return_mode_token2);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token1);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_durable_writes_token1);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_role_with_option_token1);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_role_with_option_token2);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_role_with_option_token3);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_role_with_option_token4);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_compact_storage_token1);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_compact_storage_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_compact_storage_token2);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_user_super_user_token1);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_alter_table_add_token1);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_alter_table_rename_token1);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_apply_batch_token1);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(521);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '-') ADVANCE(545);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(897);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(777);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(918);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(872);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(877);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(937);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(778);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(828);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(843);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(780);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(879);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(823);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(849);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(902);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(880);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(774);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(699);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(837);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(839);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(805);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(855);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(815);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(808);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(907);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(913);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(792);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(908);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(737);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(727);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(925);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(842);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(876);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(724);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(731);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(709);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(671);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(634);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(898);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(763);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(878);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(928);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(899);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(717);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(848);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(768);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(883);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(888);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(929);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(750);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(812);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(766);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(804);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(862);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(863);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(782);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(845);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(695);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(890);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(783);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(854);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(868);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(853);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(809);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(800);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(846);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(892);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(893);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(856);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(857);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(707);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(574);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(644);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(656);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(936);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(840);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(798);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(867);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(824);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(787);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(919);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(844);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(919);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(825);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(826);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(788);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(790);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(791);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(821);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(786);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(930);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(873);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(874);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(767);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(770);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(796);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(713);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(701);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(669);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(561);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(638);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(803);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(903);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(904);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(905);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(906);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(915);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(909);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(779);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(781);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(772);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(829);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(931);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(916);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(841);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(769);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(850);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(851);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(844);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(838);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(719);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(623);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(762);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(765);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(832);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(775);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(703);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(733);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(927);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(922);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(866);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(814);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(816);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(817);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(776);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(642);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(614);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(900);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(789);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(914);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(911);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(869);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(912);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(785);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(648);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(715);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(673);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(723);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(711);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(697);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(729);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(721);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(747);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(559);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(794);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(764);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(889);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(799);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(813);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(822);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(884);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(859);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(807);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(773);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(896);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(860);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(811);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(789);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(831);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(835);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(901);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(819);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(690);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(887);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(894);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(820);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(797);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(939);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(757);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(932);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(933);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(934);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(935);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(936);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(937);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
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
  [4] = {.lex_state = 554},
  [5] = {.lex_state = 554},
  [6] = {.lex_state = 554},
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
  [35] = {.lex_state = 554},
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
  [59] = {.lex_state = 554},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 554},
  [63] = {.lex_state = 554},
  [64] = {.lex_state = 554},
  [65] = {.lex_state = 554},
  [66] = {.lex_state = 554},
  [67] = {.lex_state = 554},
  [68] = {.lex_state = 554},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 554},
  [71] = {.lex_state = 554},
  [72] = {.lex_state = 554},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 554},
  [75] = {.lex_state = 554},
  [76] = {.lex_state = 554},
  [77] = {.lex_state = 554},
  [78] = {.lex_state = 554},
  [79] = {.lex_state = 554},
  [80] = {.lex_state = 554},
  [81] = {.lex_state = 554},
  [82] = {.lex_state = 554},
  [83] = {.lex_state = 554},
  [84] = {.lex_state = 554},
  [85] = {.lex_state = 554},
  [86] = {.lex_state = 554},
  [87] = {.lex_state = 554},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 554},
  [90] = {.lex_state = 554},
  [91] = {.lex_state = 554},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 554},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 554},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 553},
  [100] = {.lex_state = 553},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 554},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 554},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 554},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 553},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 554},
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
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 554},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 553},
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
  [199] = {.lex_state = 554},
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
  [230] = {.lex_state = 554},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 554},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 554},
  [244] = {.lex_state = 554},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 554},
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
  [389] = {.lex_state = 1},
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
  [404] = {.lex_state = 553},
  [405] = {.lex_state = 553},
  [406] = {.lex_state = 553},
  [407] = {.lex_state = 553},
  [408] = {.lex_state = 553},
  [409] = {.lex_state = 553},
  [410] = {.lex_state = 553},
  [411] = {.lex_state = 553},
  [412] = {.lex_state = 553},
  [413] = {.lex_state = 1},
  [414] = {.lex_state = 1},
  [415] = {.lex_state = 1},
  [416] = {.lex_state = 1},
  [417] = {.lex_state = 553},
  [418] = {.lex_state = 1},
  [419] = {.lex_state = 553},
  [420] = {.lex_state = 43},
  [421] = {.lex_state = 553},
  [422] = {.lex_state = 44},
  [423] = {.lex_state = 553},
  [424] = {.lex_state = 553},
  [425] = {.lex_state = 553},
  [426] = {.lex_state = 553},
  [427] = {.lex_state = 553},
  [428] = {.lex_state = 553},
  [429] = {.lex_state = 553},
  [430] = {.lex_state = 553},
  [431] = {.lex_state = 43},
  [432] = {.lex_state = 553},
  [433] = {.lex_state = 43},
  [434] = {.lex_state = 554},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 553},
  [437] = {.lex_state = 43},
  [438] = {.lex_state = 553},
  [439] = {.lex_state = 554},
  [440] = {.lex_state = 15},
  [441] = {.lex_state = 19},
  [442] = {.lex_state = 19},
  [443] = {.lex_state = 15},
  [444] = {.lex_state = 15},
  [445] = {.lex_state = 19},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 15},
  [448] = {.lex_state = 19},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 554},
  [451] = {.lex_state = 554},
  [452] = {.lex_state = 10},
  [453] = {.lex_state = 10},
  [454] = {.lex_state = 15},
  [455] = {.lex_state = 14},
  [456] = {.lex_state = 554},
  [457] = {.lex_state = 11},
  [458] = {.lex_state = 14},
  [459] = {.lex_state = 14},
  [460] = {.lex_state = 43},
  [461] = {.lex_state = 10},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 12},
  [464] = {.lex_state = 20},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 17},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 10},
  [472] = {.lex_state = 17},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 10},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 17},
  [482] = {.lex_state = 10},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 25},
  [486] = {.lex_state = 20},
  [487] = {.lex_state = 554},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 18},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 18},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 18},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 18},
  [503] = {.lex_state = 18},
  [504] = {.lex_state = 18},
  [505] = {.lex_state = 22},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 22},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 18},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 18},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 18},
  [524] = {.lex_state = 18},
  [525] = {.lex_state = 18},
  [526] = {.lex_state = 18},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 18},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 18},
  [532] = {.lex_state = 18},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 18},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 27},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 10},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 21},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 10},
  [545] = {.lex_state = 10},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 21},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 10},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 21},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 553},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 21},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 10},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 10},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 26},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 10},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 10},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 10},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 554},
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
  [618] = {.lex_state = 21},
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
  [632] = {.lex_state = 10},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 10},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 10},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 10},
  [645] = {.lex_state = 554},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
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
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 10},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 10},
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
  [680] = {.lex_state = 23},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 10},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 10},
  [690] = {.lex_state = 554},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 10},
  [694] = {.lex_state = 0},
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
  [705] = {.lex_state = 10},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 21},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 10},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 554},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 10},
  [721] = {.lex_state = 10},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 10},
  [728] = {.lex_state = 10},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 10},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 10},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 10},
  [742] = {.lex_state = 10},
  [743] = {.lex_state = 10},
  [744] = {.lex_state = 10},
  [745] = {.lex_state = 10},
  [746] = {.lex_state = 21},
  [747] = {.lex_state = 21},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 28},
  [751] = {.lex_state = 10},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 28},
  [756] = {.lex_state = 10},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 21},
  [759] = {.lex_state = 10},
  [760] = {.lex_state = 10},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 21},
  [763] = {.lex_state = 10},
  [764] = {.lex_state = 21},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 21},
  [770] = {.lex_state = 21},
  [771] = {.lex_state = 10},
  [772] = {.lex_state = 21},
  [773] = {.lex_state = 21},
  [774] = {.lex_state = 16},
  [775] = {.lex_state = 10},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 10},
  [778] = {.lex_state = 554},
  [779] = {.lex_state = 21},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 21},
  [782] = {.lex_state = 10},
  [783] = {.lex_state = 10},
  [784] = {.lex_state = 21},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 10},
  [789] = {.lex_state = 10},
  [790] = {.lex_state = 10},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 21},
  [793] = {.lex_state = 21},
  [794] = {.lex_state = 10},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 10},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 10},
  [803] = {.lex_state = 10},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 10},
  [807] = {.lex_state = 10},
  [808] = {.lex_state = 28},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 10},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 10},
  [818] = {.lex_state = 10},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 554},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 10},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 10},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 10},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 10},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 10},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 10},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 10},
  [852] = {.lex_state = 10},
  [853] = {.lex_state = 10},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 553},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 10},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 10},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 10},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 10},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 10},
  [877] = {.lex_state = 553},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 10},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 10},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 10},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 10},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 10},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 10},
  [903] = {.lex_state = 554},
  [904] = {.lex_state = 554},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 10},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 10},
  [911] = {.lex_state = 10},
  [912] = {.lex_state = 10},
  [913] = {.lex_state = 10},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 10},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 10},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 10},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 10},
  [929] = {.lex_state = 10},
  [930] = {.lex_state = 10},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 553},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 553},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
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
  [949] = {.lex_state = 10},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 10},
  [955] = {.lex_state = 10},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 10},
  [959] = {.lex_state = 10},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 10},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 10},
  [964] = {.lex_state = 43},
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
  [975] = {.lex_state = 10},
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 10},
  [978] = {.lex_state = 10},
  [979] = {.lex_state = 0},
  [980] = {.lex_state = 10},
  [981] = {.lex_state = 10},
  [982] = {.lex_state = 10},
  [983] = {.lex_state = 10},
  [984] = {.lex_state = 10},
  [985] = {.lex_state = 10},
  [986] = {.lex_state = 10},
  [987] = {.lex_state = 0},
  [988] = {.lex_state = 0},
  [989] = {.lex_state = 10},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 10},
  [993] = {.lex_state = 0},
  [994] = {.lex_state = 0},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 10},
  [997] = {.lex_state = 0},
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
  [1008] = {.lex_state = 10},
  [1009] = {.lex_state = 0},
  [1010] = {.lex_state = 0},
  [1011] = {.lex_state = 0},
  [1012] = {.lex_state = 10},
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 10},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 0},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 553},
  [1020] = {.lex_state = 0},
  [1021] = {.lex_state = 0},
  [1022] = {.lex_state = 0},
  [1023] = {.lex_state = 0},
  [1024] = {.lex_state = 0},
  [1025] = {.lex_state = 0},
  [1026] = {.lex_state = 0},
  [1027] = {.lex_state = 0},
  [1028] = {.lex_state = 0},
  [1029] = {.lex_state = 10},
  [1030] = {.lex_state = 0},
  [1031] = {.lex_state = 0},
  [1032] = {.lex_state = 0},
  [1033] = {.lex_state = 0},
  [1034] = {.lex_state = 10},
  [1035] = {.lex_state = 0},
  [1036] = {.lex_state = 0},
  [1037] = {.lex_state = 10},
  [1038] = {.lex_state = 0},
  [1039] = {.lex_state = 10},
  [1040] = {.lex_state = 0},
  [1041] = {.lex_state = 0},
  [1042] = {.lex_state = 10},
  [1043] = {.lex_state = 0},
  [1044] = {.lex_state = 0},
  [1045] = {.lex_state = 0},
  [1046] = {.lex_state = 0},
  [1047] = {.lex_state = 0},
  [1048] = {.lex_state = 0},
  [1049] = {.lex_state = 0},
  [1050] = {.lex_state = 554},
  [1051] = {.lex_state = 10},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 0},
  [1054] = {.lex_state = 0},
  [1055] = {.lex_state = 10},
  [1056] = {.lex_state = 0},
  [1057] = {.lex_state = 0},
  [1058] = {.lex_state = 0},
  [1059] = {.lex_state = 0},
  [1060] = {.lex_state = 10},
  [1061] = {.lex_state = 10},
  [1062] = {.lex_state = 0},
  [1063] = {.lex_state = 553},
  [1064] = {.lex_state = 0},
  [1065] = {.lex_state = 10},
  [1066] = {.lex_state = 10},
  [1067] = {.lex_state = 0},
  [1068] = {.lex_state = 0},
  [1069] = {.lex_state = 0},
  [1070] = {.lex_state = 10},
  [1071] = {.lex_state = 0},
  [1072] = {.lex_state = 0},
  [1073] = {.lex_state = 0},
  [1074] = {.lex_state = 10},
  [1075] = {.lex_state = 10},
  [1076] = {.lex_state = 0},
  [1077] = {.lex_state = 0},
  [1078] = {.lex_state = 0},
  [1079] = {.lex_state = 0},
  [1080] = {.lex_state = 0},
  [1081] = {.lex_state = 0},
  [1082] = {.lex_state = 10},
  [1083] = {.lex_state = 0},
  [1084] = {.lex_state = 0},
  [1085] = {.lex_state = 10},
  [1086] = {.lex_state = 0},
  [1087] = {.lex_state = 0},
  [1088] = {.lex_state = 10},
  [1089] = {.lex_state = 0},
  [1090] = {.lex_state = 0},
  [1091] = {.lex_state = 0},
  [1092] = {.lex_state = 0},
  [1093] = {.lex_state = 10},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 0},
  [1096] = {.lex_state = 0},
  [1097] = {.lex_state = 0},
  [1098] = {.lex_state = 0},
  [1099] = {.lex_state = 10},
  [1100] = {.lex_state = 0},
  [1101] = {.lex_state = 0},
  [1102] = {.lex_state = 0},
  [1103] = {.lex_state = 10},
  [1104] = {.lex_state = 0},
  [1105] = {.lex_state = 0},
  [1106] = {.lex_state = 0},
  [1107] = {.lex_state = 0},
  [1108] = {.lex_state = 10},
  [1109] = {.lex_state = 10},
  [1110] = {.lex_state = 10},
  [1111] = {.lex_state = 10},
  [1112] = {.lex_state = 0},
  [1113] = {.lex_state = 0},
  [1114] = {.lex_state = 553},
  [1115] = {.lex_state = 553},
  [1116] = {.lex_state = 0},
  [1117] = {.lex_state = 0},
  [1118] = {.lex_state = 0},
  [1119] = {.lex_state = 0},
  [1120] = {.lex_state = 10},
  [1121] = {.lex_state = 0},
  [1122] = {.lex_state = 10},
  [1123] = {.lex_state = 0},
  [1124] = {.lex_state = 0},
  [1125] = {.lex_state = 0},
  [1126] = {.lex_state = 0},
  [1127] = {.lex_state = 0},
  [1128] = {.lex_state = 0},
  [1129] = {.lex_state = 10},
  [1130] = {.lex_state = 0},
  [1131] = {.lex_state = 0},
  [1132] = {.lex_state = 0},
  [1133] = {.lex_state = 0},
  [1134] = {.lex_state = 10},
  [1135] = {.lex_state = 0},
  [1136] = {.lex_state = 0},
  [1137] = {.lex_state = 0},
  [1138] = {.lex_state = 10},
  [1139] = {.lex_state = 0},
  [1140] = {.lex_state = 10},
  [1141] = {.lex_state = 0},
  [1142] = {.lex_state = 0},
  [1143] = {.lex_state = 0},
  [1144] = {.lex_state = 0},
  [1145] = {.lex_state = 10},
  [1146] = {.lex_state = 0},
  [1147] = {.lex_state = 0},
  [1148] = {.lex_state = 0},
  [1149] = {.lex_state = 10},
  [1150] = {.lex_state = 0},
  [1151] = {.lex_state = 10},
  [1152] = {.lex_state = 553},
  [1153] = {.lex_state = 0},
  [1154] = {.lex_state = 10},
  [1155] = {.lex_state = 10},
  [1156] = {.lex_state = 10},
  [1157] = {.lex_state = 10},
  [1158] = {.lex_state = 553},
  [1159] = {.lex_state = 0},
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
  [1170] = {.lex_state = 10},
  [1171] = {.lex_state = 0},
  [1172] = {.lex_state = 10},
  [1173] = {.lex_state = 0},
  [1174] = {.lex_state = 10},
  [1175] = {.lex_state = 0},
  [1176] = {.lex_state = 0},
  [1177] = {.lex_state = 10},
  [1178] = {.lex_state = 10},
  [1179] = {.lex_state = 0},
  [1180] = {.lex_state = 553},
  [1181] = {.lex_state = 0},
  [1182] = {.lex_state = 10},
  [1183] = {.lex_state = 0},
  [1184] = {.lex_state = 10},
  [1185] = {.lex_state = 0},
  [1186] = {.lex_state = 0},
  [1187] = {.lex_state = 0},
  [1188] = {.lex_state = 0},
  [1189] = {.lex_state = 0},
  [1190] = {.lex_state = 553},
  [1191] = {.lex_state = 554},
  [1192] = {.lex_state = 554},
  [1193] = {.lex_state = 0},
  [1194] = {.lex_state = 10},
  [1195] = {.lex_state = 10},
  [1196] = {.lex_state = 10},
  [1197] = {.lex_state = 10},
  [1198] = {.lex_state = 0},
  [1199] = {.lex_state = 0},
  [1200] = {.lex_state = 0},
  [1201] = {.lex_state = 553},
  [1202] = {.lex_state = 10},
  [1203] = {.lex_state = 10},
  [1204] = {.lex_state = 0},
  [1205] = {.lex_state = 0},
  [1206] = {.lex_state = 10},
  [1207] = {.lex_state = 0},
  [1208] = {.lex_state = 0},
  [1209] = {.lex_state = 10},
  [1210] = {.lex_state = 0},
  [1211] = {.lex_state = 0},
  [1212] = {.lex_state = 0},
  [1213] = {.lex_state = 10},
  [1214] = {.lex_state = 10},
  [1215] = {.lex_state = 0},
  [1216] = {.lex_state = 0},
  [1217] = {.lex_state = 0},
  [1218] = {.lex_state = 10},
  [1219] = {.lex_state = 10},
  [1220] = {.lex_state = 0},
  [1221] = {.lex_state = 0},
  [1222] = {.lex_state = 10},
  [1223] = {.lex_state = 0},
  [1224] = {.lex_state = 0},
  [1225] = {.lex_state = 10},
  [1226] = {.lex_state = 10},
  [1227] = {.lex_state = 10},
  [1228] = {.lex_state = 10},
  [1229] = {.lex_state = 10},
  [1230] = {.lex_state = 0},
  [1231] = {.lex_state = 10},
  [1232] = {.lex_state = 10},
  [1233] = {.lex_state = 0},
  [1234] = {.lex_state = 10},
  [1235] = {.lex_state = 0},
  [1236] = {.lex_state = 0},
  [1237] = {.lex_state = 10},
  [1238] = {.lex_state = 0},
  [1239] = {.lex_state = 553},
  [1240] = {.lex_state = 553},
  [1241] = {.lex_state = 0},
  [1242] = {.lex_state = 0},
  [1243] = {.lex_state = 0},
  [1244] = {.lex_state = 0},
  [1245] = {.lex_state = 10},
  [1246] = {.lex_state = 0},
  [1247] = {.lex_state = 10},
  [1248] = {.lex_state = 0},
  [1249] = {.lex_state = 0},
  [1250] = {.lex_state = 0},
  [1251] = {.lex_state = 0},
  [1252] = {.lex_state = 10},
  [1253] = {.lex_state = 0},
  [1254] = {.lex_state = 0},
  [1255] = {.lex_state = 0},
  [1256] = {.lex_state = 0},
  [1257] = {.lex_state = 0},
  [1258] = {.lex_state = 10},
  [1259] = {.lex_state = 553},
  [1260] = {.lex_state = 0},
  [1261] = {.lex_state = 0},
  [1262] = {.lex_state = 0},
  [1263] = {.lex_state = 0},
  [1264] = {.lex_state = 554},
  [1265] = {.lex_state = 553},
  [1266] = {.lex_state = 10},
  [1267] = {.lex_state = 0},
  [1268] = {.lex_state = 0},
  [1269] = {.lex_state = 0},
  [1270] = {.lex_state = 0},
  [1271] = {.lex_state = 10},
  [1272] = {.lex_state = 10},
  [1273] = {.lex_state = 10},
  [1274] = {.lex_state = 0},
  [1275] = {.lex_state = 0},
  [1276] = {.lex_state = 0},
  [1277] = {.lex_state = 0},
  [1278] = {.lex_state = 0},
  [1279] = {.lex_state = 0},
  [1280] = {.lex_state = 10},
  [1281] = {.lex_state = 0},
  [1282] = {.lex_state = 0},
  [1283] = {.lex_state = 0},
  [1284] = {.lex_state = 0},
  [1285] = {.lex_state = 10},
  [1286] = {.lex_state = 0},
  [1287] = {.lex_state = 0},
  [1288] = {.lex_state = 0},
  [1289] = {.lex_state = 0},
  [1290] = {.lex_state = 0},
  [1291] = {.lex_state = 0},
  [1292] = {.lex_state = 0},
  [1293] = {.lex_state = 553},
  [1294] = {.lex_state = 553},
  [1295] = {.lex_state = 0},
  [1296] = {.lex_state = 0},
  [1297] = {.lex_state = 0},
  [1298] = {.lex_state = 553},
  [1299] = {.lex_state = 0},
  [1300] = {.lex_state = 0},
  [1301] = {.lex_state = 0},
  [1302] = {.lex_state = 0},
  [1303] = {.lex_state = 0},
  [1304] = {.lex_state = 0},
  [1305] = {.lex_state = 0},
  [1306] = {.lex_state = 0},
  [1307] = {.lex_state = 0},
  [1308] = {.lex_state = 0},
  [1309] = {.lex_state = 10},
  [1310] = {.lex_state = 0},
  [1311] = {.lex_state = 0},
  [1312] = {.lex_state = 0},
  [1313] = {.lex_state = 10},
  [1314] = {.lex_state = 0},
  [1315] = {.lex_state = 0},
  [1316] = {.lex_state = 0},
  [1317] = {.lex_state = 0},
  [1318] = {.lex_state = 0},
  [1319] = {.lex_state = 0},
  [1320] = {.lex_state = 0},
  [1321] = {.lex_state = 0},
  [1322] = {.lex_state = 0},
  [1323] = {.lex_state = 0},
  [1324] = {.lex_state = 10},
  [1325] = {.lex_state = 0},
  [1326] = {.lex_state = 10},
  [1327] = {.lex_state = 10},
  [1328] = {.lex_state = 0},
  [1329] = {.lex_state = 0},
  [1330] = {.lex_state = 0},
  [1331] = {.lex_state = 553},
  [1332] = {.lex_state = 10},
  [1333] = {.lex_state = 553},
  [1334] = {.lex_state = 10},
  [1335] = {.lex_state = 0},
  [1336] = {.lex_state = 10},
  [1337] = {.lex_state = 0},
  [1338] = {.lex_state = 0},
  [1339] = {.lex_state = 0},
  [1340] = {.lex_state = 0},
  [1341] = {.lex_state = 0},
  [1342] = {.lex_state = 0},
  [1343] = {.lex_state = 0},
  [1344] = {.lex_state = 0},
  [1345] = {.lex_state = 0},
  [1346] = {.lex_state = 0},
  [1347] = {.lex_state = 10},
  [1348] = {.lex_state = 10},
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
    [aux_sym_using_timestamp_spec_token2] = ACTIONS(1),
    [aux_sym_insert_statement_token1] = ACTIONS(1),
    [aux_sym_insert_statement_token2] = ACTIONS(1),
    [aux_sym_insert_statement_token3] = ACTIONS(1),
    [aux_sym_insert_values_spec_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_using_ttl_timestamp_token1] = ACTIONS(1),
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
    [aux_sym_privilege_token1] = ACTIONS(1),
    [aux_sym_privilege_token2] = ACTIONS(1),
    [aux_sym_privilege_token3] = ACTIONS(1),
    [aux_sym_privilege_token4] = ACTIONS(1),
    [aux_sym_privilege_token6] = ACTIONS(1),
    [aux_sym_privilege_token7] = ACTIONS(1),
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
    [aux_sym_role_with_option_token1] = ACTIONS(1),
    [aux_sym_role_with_option_token2] = ACTIONS(1),
    [aux_sym_role_with_option_token3] = ACTIONS(1),
    [aux_sym_role_with_option_token4] = ACTIONS(1),
    [aux_sym_compact_storage_token1] = ACTIONS(1),
    [aux_sym_compact_storage_token2] = ACTIONS(1),
    [aux_sym_clustering_order_token1] = ACTIONS(1),
    [aux_sym_user_super_user_token1] = ACTIONS(1),
    [aux_sym_alter_table_add_token1] = ACTIONS(1),
    [aux_sym_alter_table_rename_token1] = ACTIONS(1),
    [aux_sym_apply_batch_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(1345),
    [sym__statement] = STATE(3),
    [sym_select_statement] = STATE(319),
    [sym_delete_statement] = STATE(319),
    [sym_begin_batch] = STATE(656),
    [sym_insert_statement] = STATE(319),
    [sym_truncate] = STATE(319),
    [sym_create_index] = STATE(319),
    [sym_drop_index] = STATE(319),
    [sym_update] = STATE(319),
    [sym_use] = STATE(319),
    [sym_grant] = STATE(319),
    [sym_revoke] = STATE(319),
    [sym_list_roles] = STATE(319),
    [sym_list_permissions] = STATE(319),
    [sym_drop_aggregate] = STATE(319),
    [sym_drop_materialized_view] = STATE(319),
    [sym_drop_function] = STATE(319),
    [sym_drop_keyspace] = STATE(319),
    [sym_drop_role] = STATE(319),
    [sym_drop_table] = STATE(319),
    [sym_drop_trigger] = STATE(319),
    [sym_drop_type] = STATE(319),
    [sym_drop_user] = STATE(319),
    [sym_create_aggregate] = STATE(319),
    [sym_create_materialized_view] = STATE(319),
    [sym_create_function] = STATE(319),
    [sym_create_keyspace] = STATE(319),
    [sym_create_role] = STATE(319),
    [sym_create_table] = STATE(319),
    [sym_create_trigger] = STATE(319),
    [sym_create_type] = STATE(319),
    [sym_create_user] = STATE(319),
    [sym_alter_materialized_view] = STATE(319),
    [sym_alter_keyspace] = STATE(319),
    [sym_alter_role] = STATE(319),
    [sym_alter_table] = STATE(319),
    [sym_alter_type] = STATE(319),
    [sym_alter_user] = STATE(319),
    [sym_apply_batch] = STATE(319),
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
    [aux_sym_privilege_token3] = ACTIONS(27),
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
      aux_sym_privilege_token3,
    ACTIONS(71), 1,
      aux_sym_list_roles_token1,
    ACTIONS(74), 1,
      aux_sym_apply_batch_token1,
    STATE(656), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(319), 37,
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
      aux_sym_privilege_token3,
    ACTIONS(29), 1,
      aux_sym_list_roles_token1,
    ACTIONS(31), 1,
      aux_sym_apply_batch_token1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(656), 1,
      sym_begin_batch,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(319), 37,
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
      aux_sym_privilege_token3,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [253] = 1,
    ACTIONS(85), 29,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [285] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(752), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [320] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1126), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [355] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1248), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [390] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1000), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [425] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1004), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [460] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1217), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [495] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1087), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [530] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1210), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [565] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1086), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [600] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(167), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [635] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1081), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [670] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1205), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [705] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(245), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [740] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1095), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [775] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(541), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [810] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1107), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [845] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1062), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [880] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(943), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [915] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1189), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [950] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(234), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [985] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1090), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1020] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(571), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1055] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1183), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1090] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(670), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1125] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1179), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1160] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1056), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1195] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1052), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1230] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(917), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1265] = 2,
    ACTIONS(91), 1,
      anon_sym_DOT,
    ACTIONS(89), 27,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_materialized_view_options_token1,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [1298] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1173), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1333] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1169), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1368] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(508), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1403] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(937), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1438] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(890), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1473] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1292), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1508] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(875), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1543] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(906), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1578] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(594), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1613] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(285), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1648] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(972), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1683] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1100), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1718] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1130), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1753] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(869), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1788] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1096), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1823] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(948), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1858] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(951), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1893] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1286), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1928] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(859), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1963] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(827), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [1998] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1030), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [2033] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(968), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [2068] = 3,
    STATE(69), 1,
      sym_data_type_name,
    STATE(1141), 1,
      sym_data_type,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [2103] = 1,
    ACTIONS(93), 27,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_materialized_view_options_token1,
      aux_sym_alter_table_add_token1,
      aux_sym_alter_table_rename_token1,
      aux_sym_apply_batch_token1,
  [2133] = 2,
    STATE(768), 1,
      sym_data_type_name,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [2165] = 2,
    STATE(650), 1,
      sym_data_type_name,
    ACTIONS(87), 26,
      aux_sym_using_timestamp_spec_token2,
      aux_sym_update_token2,
      aux_sym_list_roles_token1,
      aux_sym_data_type_name_token1,
      aux_sym_data_type_name_token2,
      aux_sym_data_type_name_token3,
      aux_sym_data_type_name_token4,
      aux_sym_data_type_name_token5,
      aux_sym_data_type_name_token6,
      aux_sym_data_type_name_token7,
      aux_sym_data_type_name_token8,
      aux_sym_data_type_name_token9,
      aux_sym_data_type_name_token10,
      aux_sym_data_type_name_token11,
      aux_sym_data_type_name_token12,
      aux_sym_data_type_name_token13,
      aux_sym_data_type_name_token14,
      aux_sym_data_type_name_token15,
      aux_sym_data_type_name_token16,
      aux_sym_data_type_name_token17,
      aux_sym_data_type_name_token18,
      aux_sym_data_type_name_token19,
      aux_sym_data_type_name_token20,
      aux_sym_data_type_name_token21,
      aux_sym_data_type_name_token22,
      sym_object_name,
  [2197] = 3,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(95), 23,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2229] = 1,
    ACTIONS(95), 24,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2256] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2283] = 3,
    ACTIONS(104), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2314] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(65), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2345] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(62), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2376] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(67), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2407] = 3,
    ACTIONS(112), 1,
      anon_sym_LT,
    STATE(92), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [2437] = 3,
    ACTIONS(116), 1,
      aux_sym_relation_elements_token1,
    STATE(70), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(114), 21,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2467] = 8,
    ACTIONS(121), 1,
      aux_sym_select_statement_token4,
    ACTIONS(123), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(127), 1,
      aux_sym_order_spec_token1,
    STATE(90), 1,
      sym_where_spec,
    STATE(103), 1,
      sym_order_spec,
    STATE(243), 1,
      sym_limit_spec,
    ACTIONS(119), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2507] = 8,
    ACTIONS(123), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(127), 1,
      aux_sym_order_spec_token1,
    ACTIONS(131), 1,
      aux_sym_select_statement_token4,
    STATE(89), 1,
      sym_where_spec,
    STATE(116), 1,
      sym_order_spec,
    STATE(199), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2547] = 1,
    ACTIONS(133), 23,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [2573] = 8,
    ACTIONS(123), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(127), 1,
      aux_sym_order_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(91), 1,
      sym_where_spec,
    STATE(111), 1,
      sym_order_spec,
    STATE(230), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2613] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2638] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2663] = 1,
    ACTIONS(143), 22,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2688] = 3,
    ACTIONS(147), 1,
      aux_sym_relation_elements_token1,
    STATE(86), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(145), 20,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2717] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2742] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2767] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2792] = 1,
    ACTIONS(114), 22,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2817] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2842] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2867] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2892] = 3,
    ACTIONS(147), 1,
      aux_sym_relation_elements_token1,
    STATE(70), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(159), 20,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2921] = 1,
    ACTIONS(161), 21,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2945] = 1,
    ACTIONS(163), 21,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [2969] = 6,
    ACTIONS(123), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(127), 1,
      aux_sym_order_spec_token1,
    ACTIONS(167), 1,
      aux_sym_select_statement_token4,
    STATE(109), 1,
      sym_order_spec,
    STATE(236), 1,
      sym_limit_spec,
    ACTIONS(165), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3003] = 6,
    ACTIONS(123), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(127), 1,
      aux_sym_order_spec_token1,
    ACTIONS(131), 1,
      aux_sym_select_statement_token4,
    STATE(116), 1,
      sym_order_spec,
    STATE(199), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3037] = 6,
    ACTIONS(121), 1,
      aux_sym_select_statement_token4,
    ACTIONS(123), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(127), 1,
      aux_sym_order_spec_token1,
    STATE(103), 1,
      sym_order_spec,
    STATE(243), 1,
      sym_limit_spec,
    ACTIONS(119), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3071] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [3095] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [3119] = 1,
    ACTIONS(173), 20,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3142] = 2,
    ACTIONS(177), 1,
      anon_sym_DOT,
    ACTIONS(175), 19,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3167] = 2,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(179), 19,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3192] = 2,
    ACTIONS(185), 1,
      aux_sym_relation_element_token1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3217] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3242] = 2,
    ACTIONS(193), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
    ACTIONS(191), 18,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3267] = 9,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(682), 1,
      sym_expression,
    STATE(1035), 1,
      sym_expression_list,
    STATE(836), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [3305] = 3,
    STATE(363), 1,
      sym_user_super_user,
    ACTIONS(207), 2,
      aux_sym_role_with_option_token3,
      aux_sym_user_super_user_token1,
    ACTIONS(205), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3331] = 4,
    ACTIONS(211), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(213), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(323), 1,
      sym_using_ttl_timestamp,
    ACTIONS(209), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3359] = 4,
    ACTIONS(123), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(131), 1,
      aux_sym_select_statement_token4,
    STATE(199), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3387] = 2,
    ACTIONS(217), 1,
      aux_sym_privilege_token2,
    ACTIONS(215), 18,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3411] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_clustering_key_list_repeat1,
    ACTIONS(219), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3437] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3459] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3481] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3503] = 4,
    ACTIONS(123), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(230), 1,
      aux_sym_select_statement_token4,
    STATE(244), 1,
      sym_limit_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3531] = 4,
    ACTIONS(213), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(234), 1,
      aux_sym_delete_statement_token2,
    STATE(310), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3559] = 4,
    ACTIONS(121), 1,
      aux_sym_select_statement_token4,
    ACTIONS(123), 1,
      aux_sym_limit_spec_token1,
    STATE(243), 1,
      sym_limit_spec,
    ACTIONS(119), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3587] = 1,
    ACTIONS(236), 19,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3609] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3631] = 9,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(682), 1,
      sym_expression,
    STATE(944), 1,
      sym_expression_list,
    STATE(836), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [3669] = 4,
    ACTIONS(213), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(242), 1,
      aux_sym_delete_statement_token2,
    STATE(333), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3697] = 4,
    ACTIONS(123), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(167), 1,
      aux_sym_select_statement_token4,
    STATE(236), 1,
      sym_limit_spec,
    ACTIONS(165), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3725] = 1,
    ACTIONS(244), 19,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3747] = 1,
    ACTIONS(246), 19,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3769] = 3,
    ACTIONS(250), 1,
      aux_sym_delete_statement_token2,
    STATE(318), 1,
      sym_if_spec,
    ACTIONS(248), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3794] = 3,
    ACTIONS(254), 1,
      aux_sym_delete_statement_token2,
    STATE(313), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3819] = 3,
    ACTIONS(258), 1,
      aux_sym_materialized_view_options_token1,
    STATE(326), 1,
      sym_with_element,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3844] = 3,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_alter_table_add_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3869] = 3,
    ACTIONS(267), 1,
      aux_sym_materialized_view_options_token1,
    STATE(257), 1,
      sym_materialized_view_options,
    ACTIONS(265), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3894] = 3,
    ACTIONS(271), 1,
      aux_sym_relation_elements_token1,
    STATE(178), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3919] = 3,
    ACTIONS(275), 1,
      aux_sym_relation_elements_token1,
    STATE(168), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3944] = 3,
    ACTIONS(258), 1,
      aux_sym_materialized_view_options_token1,
    STATE(256), 1,
      sym_with_element,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3969] = 3,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_alter_table_add_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3994] = 3,
    ACTIONS(285), 1,
      aux_sym_relation_elements_token1,
    STATE(157), 1,
      aux_sym_table_options_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4019] = 3,
    ACTIONS(289), 1,
      aux_sym_delete_statement_token2,
    STATE(322), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4044] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_clustering_key_list_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4069] = 3,
    ACTIONS(297), 1,
      aux_sym_delete_statement_token2,
    STATE(287), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4094] = 3,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym_alter_type_add_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4119] = 3,
    ACTIONS(306), 1,
      aux_sym_materialized_view_options_token1,
    STATE(341), 1,
      sym_role_with,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4144] = 3,
    ACTIONS(310), 1,
      aux_sym_delete_statement_token2,
    STATE(337), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4169] = 3,
    ACTIONS(314), 1,
      aux_sym_delete_statement_token2,
    STATE(270), 1,
      sym_if_spec,
    ACTIONS(312), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4194] = 3,
    ACTIONS(318), 1,
      aux_sym_relation_elements_token1,
    STATE(188), 1,
      aux_sym_role_with_repeat1,
    ACTIONS(316), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4219] = 2,
    ACTIONS(322), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(320), 17,
      ts_builtin_sym_end,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4242] = 2,
    ACTIONS(326), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(324), 17,
      ts_builtin_sym_end,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4265] = 1,
    ACTIONS(328), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_role_with_option_token3,
      aux_sym_user_super_user_token1,
      aux_sym_apply_batch_token1,
  [4286] = 3,
    ACTIONS(332), 1,
      aux_sym_relation_elements_token1,
    STATE(189), 1,
      aux_sym_materialized_view_options_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4311] = 3,
    ACTIONS(336), 1,
      aux_sym_relation_elements_token1,
    STATE(141), 1,
      aux_sym_table_options_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4336] = 3,
    ACTIONS(267), 1,
      aux_sym_materialized_view_options_token1,
    STATE(282), 1,
      sym_materialized_view_options,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4361] = 3,
    ACTIONS(343), 1,
      aux_sym_delete_statement_token2,
    STATE(308), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4386] = 3,
    ACTIONS(267), 1,
      aux_sym_materialized_view_options_token1,
    STATE(298), 1,
      sym_materialized_view_options,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4411] = 3,
    ACTIONS(318), 1,
      aux_sym_relation_elements_token1,
    STATE(136), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4436] = 1,
    ACTIONS(215), 18,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [4457] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_clustering_key_list_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4482] = 3,
    ACTIONS(267), 1,
      aux_sym_materialized_view_options_token1,
    STATE(309), 1,
      sym_materialized_view_options,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4507] = 1,
    ACTIONS(219), 18,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4528] = 1,
    ACTIONS(353), 18,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [4549] = 3,
    ACTIONS(267), 1,
      aux_sym_materialized_view_options_token1,
    STATE(372), 1,
      sym_materialized_view_options,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4574] = 3,
    ACTIONS(267), 1,
      aux_sym_materialized_view_options_token1,
    STATE(397), 1,
      sym_materialized_view_options,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4599] = 3,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4624] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4645] = 3,
    ACTIONS(306), 1,
      aux_sym_materialized_view_options_token1,
    STATE(283), 1,
      sym_role_with,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4670] = 3,
    ACTIONS(371), 1,
      aux_sym_delete_statement_token2,
    STATE(398), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4695] = 3,
    ACTIONS(285), 1,
      aux_sym_relation_elements_token1,
    STATE(141), 1,
      aux_sym_table_options_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4720] = 1,
    ACTIONS(375), 18,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4741] = 3,
    ACTIONS(379), 1,
      aux_sym_delete_statement_token2,
    STATE(266), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4766] = 3,
    ACTIONS(271), 1,
      aux_sym_relation_elements_token1,
    STATE(124), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4791] = 3,
    ACTIONS(385), 1,
      aux_sym_create_index_token3,
    ACTIONS(387), 1,
      aux_sym_list_roles_token2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4816] = 1,
    ACTIONS(389), 18,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4837] = 3,
    ACTIONS(213), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(347), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4862] = 3,
    ACTIONS(395), 1,
      aux_sym_delete_statement_token2,
    STATE(380), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4887] = 3,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_alter_table_add_repeat1,
    ACTIONS(397), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4912] = 3,
    ACTIONS(213), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(255), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4937] = 3,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_alter_type_add_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4962] = 3,
    ACTIONS(275), 1,
      aux_sym_relation_elements_token1,
    STATE(186), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4987] = 1,
    ACTIONS(407), 18,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5008] = 3,
    ACTIONS(411), 1,
      aux_sym_delete_statement_token2,
    STATE(265), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5033] = 3,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      aux_sym_materialized_view_options_token1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5058] = 3,
    ACTIONS(421), 1,
      aux_sym_relation_elements_token1,
    STATE(172), 1,
      aux_sym_materialized_view_options_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5083] = 3,
    ACTIONS(426), 1,
      aux_sym_delete_statement_token2,
    STATE(339), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5108] = 3,
    ACTIONS(430), 1,
      aux_sym_delete_statement_token2,
    STATE(262), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5133] = 3,
    ACTIONS(434), 1,
      aux_sym_delete_statement_token2,
    STATE(369), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5158] = 1,
    ACTIONS(436), 18,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5179] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5200] = 3,
    ACTIONS(442), 1,
      aux_sym_relation_elements_token1,
    STATE(178), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5225] = 3,
    ACTIONS(447), 1,
      aux_sym_delete_statement_token2,
    STATE(249), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5250] = 3,
    ACTIONS(213), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(307), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5275] = 3,
    ACTIONS(306), 1,
      aux_sym_materialized_view_options_token1,
    STATE(343), 1,
      sym_role_with,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5300] = 3,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym_alter_type_add_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5325] = 8,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(735), 1,
      sym_expression,
    STATE(836), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [5360] = 3,
    ACTIONS(267), 1,
      aux_sym_materialized_view_options_token1,
    STATE(352), 1,
      sym_materialized_view_options,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5385] = 1,
    ACTIONS(457), 18,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5406] = 3,
    ACTIONS(461), 1,
      aux_sym_relation_elements_token1,
    STATE(186), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5431] = 1,
    ACTIONS(464), 18,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5452] = 3,
    ACTIONS(468), 1,
      aux_sym_relation_elements_token1,
    STATE(188), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5477] = 3,
    ACTIONS(473), 1,
      aux_sym_relation_elements_token1,
    STATE(172), 1,
      aux_sym_materialized_view_options_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5502] = 3,
    ACTIONS(477), 1,
      aux_sym_delete_statement_token2,
    STATE(387), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5527] = 1,
    ACTIONS(479), 18,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5548] = 1,
    ACTIONS(481), 18,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5569] = 3,
    ACTIONS(267), 1,
      aux_sym_materialized_view_options_token1,
    STATE(335), 1,
      sym_materialized_view_options,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5594] = 2,
    ACTIONS(487), 1,
      anon_sym_DOT,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5616] = 2,
    ACTIONS(491), 1,
      anon_sym_DOT,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5638] = 1,
    ACTIONS(493), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_materialized_view_options_token1,
      aux_sym_apply_batch_token1,
  [5658] = 1,
    ACTIONS(260), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5678] = 1,
    ACTIONS(495), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5698] = 2,
    ACTIONS(167), 1,
      aux_sym_select_statement_token4,
    ACTIONS(165), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5720] = 1,
    ACTIONS(497), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5740] = 1,
    ACTIONS(499), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5760] = 1,
    ACTIONS(501), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5780] = 2,
    ACTIONS(505), 1,
      anon_sym_DOT,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5802] = 2,
    ACTIONS(509), 1,
      anon_sym_DOT,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5824] = 1,
    ACTIONS(511), 17,
      ts_builtin_sym_end,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5844] = 1,
    ACTIONS(513), 17,
      ts_builtin_sym_end,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5864] = 2,
    ACTIONS(517), 1,
      anon_sym_DOT,
    ACTIONS(515), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5886] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5908] = 1,
    ACTIONS(523), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5928] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5950] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5970] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5992] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6014] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6036] = 2,
    ACTIONS(543), 1,
      anon_sym_DOT,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6058] = 2,
    ACTIONS(547), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6080] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6102] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6122] = 1,
    ACTIONS(419), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6142] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6164] = 1,
    ACTIONS(334), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6184] = 1,
    ACTIONS(466), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6204] = 1,
    ACTIONS(559), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6224] = 1,
    ACTIONS(561), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6244] = 1,
    ACTIONS(563), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6264] = 1,
    ACTIONS(565), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6284] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6304] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6326] = 1,
    ACTIONS(573), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6346] = 2,
    ACTIONS(121), 1,
      aux_sym_select_statement_token4,
    ACTIONS(119), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6368] = 2,
    ACTIONS(577), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6390] = 2,
    ACTIONS(581), 1,
      aux_sym_list_roles_token3,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6412] = 2,
    ACTIONS(585), 1,
      aux_sym_list_roles_token2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6434] = 1,
    ACTIONS(587), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6454] = 2,
    ACTIONS(591), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6476] = 2,
    ACTIONS(230), 1,
      aux_sym_select_statement_token4,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6498] = 1,
    ACTIONS(593), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6518] = 1,
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
      aux_sym_privilege_token3,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6560] = 1,
    ACTIONS(440), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6580] = 1,
    ACTIONS(601), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6600] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6622] = 2,
    ACTIONS(131), 1,
      aux_sym_select_statement_token4,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6644] = 2,
    ACTIONS(609), 1,
      aux_sym_select_statement_token4,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6666] = 1,
    ACTIONS(611), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6686] = 2,
    ACTIONS(615), 1,
      aux_sym_materialized_view_options_token1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6708] = 1,
    ACTIONS(617), 17,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6728] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6747] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6766] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6785] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6804] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6823] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6842] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6861] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6880] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6899] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6918] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6937] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6956] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6975] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6994] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7013] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7032] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7051] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7070] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7089] = 1,
    ACTIONS(165), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7108] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7127] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7146] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7165] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7184] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7203] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7222] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7241] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7260] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7279] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7298] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7317] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7336] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7355] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7374] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7393] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7412] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7431] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7450] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7469] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7488] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7507] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7526] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7545] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7564] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7583] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7602] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7621] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7640] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7659] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7678] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7697] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7716] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7735] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7754] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7773] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7792] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7811] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7830] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7849] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7868] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7887] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7906] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7925] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7944] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7963] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7982] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8001] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8020] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8039] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8058] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8077] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8098] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8117] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8136] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8155] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8174] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8193] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8212] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8231] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8250] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8269] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8288] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8307] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8326] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8345] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8364] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8383] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8402] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8421] = 1,
    ACTIONS(248), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8440] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8459] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8478] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8497] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8516] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8535] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8554] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8573] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8592] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8611] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8630] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8649] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8668] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8687] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8706] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8725] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8744] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8763] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8782] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8801] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8820] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8839] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8858] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8877] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8896] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8915] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8934] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8953] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8972] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8991] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9010] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9029] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9048] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9067] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9086] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9105] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9124] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9143] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9162] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9181] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9200] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9219] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9238] = 1,
    ACTIONS(312), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9257] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9276] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9295] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9314] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9333] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9352] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9371] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9390] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9409] = 9,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(861), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(796), 1,
      sym_constant,
    ACTIONS(859), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(539), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(197), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9444] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9463] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9482] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9501] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9520] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9539] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9558] = 1,
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
      aux_sym_privilege_token3,
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
      aux_sym_privilege_token3,
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
      aux_sym_privilege_token3,
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
      aux_sym_privilege_token3,
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
      aux_sym_privilege_token3,
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
      aux_sym_privilege_token3,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9691] = 1,
    ACTIONS(887), 15,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9709] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(889), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(300), 1,
      sym_init_cond_definition,
    STATE(169), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9737] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(889), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(716), 1,
      sym_init_cond_definition,
    STATE(169), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9765] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(889), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(388), 1,
      sym_init_cond_definition,
    STATE(169), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9793] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(889), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(251), 1,
      sym_init_cond_definition,
    STATE(169), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9821] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(889), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(276), 1,
      sym_init_cond_definition,
    STATE(169), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9849] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(889), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(382), 1,
      sym_init_cond_definition,
    STATE(169), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9877] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(889), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(254), 1,
      sym_init_cond_definition,
    STATE(169), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9905] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(889), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(286), 1,
      sym_init_cond_definition,
    STATE(169), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9933] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(889), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(375), 1,
      sym_init_cond_definition,
    STATE(169), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9961] = 8,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(891), 1,
      anon_sym_STAR,
    ACTIONS(893), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(1270), 1,
      sym_function_args,
    ACTIONS(859), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(671), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(197), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9992] = 9,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
    ACTIONS(897), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(602), 1,
      sym_constant,
    STATE(603), 1,
      sym_init_cond_list,
    STATE(606), 1,
      sym_init_cond_hash_item,
    ACTIONS(859), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    ACTIONS(197), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10025] = 7,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(893), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(945), 1,
      sym_function_args,
    ACTIONS(859), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(671), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(197), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10053] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(899), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    ACTIONS(859), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(839), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(197), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10078] = 5,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(714), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10101] = 6,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(901), 1,
      sym_object_name,
    STATE(6), 1,
      sym__decimal_literal,
    ACTIONS(859), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(81), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(197), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10126] = 5,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(903), 1,
      aux_sym_relation_contains_key_token2,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(84), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10148] = 11,
    ACTIONS(905), 1,
      aux_sym_truncate_token2,
    ACTIONS(907), 1,
      aux_sym_create_index_token2,
    ACTIONS(909), 1,
      aux_sym_resource_token2,
    ACTIONS(911), 1,
      aux_sym_resource_token5,
    ACTIONS(913), 1,
      aux_sym_resource_token6,
    ACTIONS(915), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(917), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(919), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(921), 1,
      aux_sym_drop_type_token1,
    ACTIONS(923), 1,
      aux_sym_drop_user_token1,
    ACTIONS(925), 1,
      aux_sym_create_aggregate_token1,
  [10182] = 5,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(927), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(511), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10204] = 4,
    ACTIONS(931), 1,
      aux_sym_privilege_token1,
    ACTIONS(933), 1,
      aux_sym_resource_token4,
    STATE(161), 1,
      sym_privilege,
    ACTIONS(929), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [10224] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(496), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10243] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(83), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10262] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(76), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10281] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(796), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10300] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(677), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10319] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(241), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10338] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(801), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10357] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(599), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10376] = 3,
    ACTIONS(931), 1,
      aux_sym_privilege_token1,
    STATE(1337), 1,
      sym_privilege,
    ACTIONS(929), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [10393] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(158), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10412] = 3,
    ACTIONS(931), 1,
      aux_sym_privilege_token1,
    STATE(1338), 1,
      sym_privilege,
    ACTIONS(929), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [10429] = 6,
    ACTIONS(935), 1,
      anon_sym_LPAREN,
    ACTIONS(941), 1,
      aux_sym_relation_element_token1,
    ACTIONS(943), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(945), 1,
      aux_sym_column_not_null_token1,
    ACTIONS(937), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(939), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10452] = 6,
    ACTIONS(947), 1,
      aux_sym_drop_index_token1,
    ACTIONS(949), 1,
      aux_sym_materialized_view_options_token1,
    ACTIONS(951), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(953), 1,
      aux_sym_alter_table_rename_token1,
    STATE(280), 1,
      sym_alter_table_operation,
    STATE(281), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10475] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(602), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10494] = 10,
    ACTIONS(955), 1,
      aux_sym_truncate_token2,
    ACTIONS(957), 1,
      aux_sym_create_index_token2,
    ACTIONS(959), 1,
      aux_sym_resource_token2,
    ACTIONS(961), 1,
      aux_sym_resource_token5,
    ACTIONS(963), 1,
      aux_sym_resource_token6,
    ACTIONS(965), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(967), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(969), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(971), 1,
      aux_sym_drop_type_token1,
    ACTIONS(973), 1,
      aux_sym_drop_user_token1,
  [10525] = 4,
    ACTIONS(199), 1,
      aux_sym__decimal_literal_token1,
    STATE(6), 1,
      sym__decimal_literal,
    STATE(987), 1,
      sym_constant,
    ACTIONS(197), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10544] = 5,
    ACTIONS(935), 1,
      anon_sym_LPAREN,
    ACTIONS(941), 1,
      aux_sym_relation_element_token1,
    ACTIONS(943), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(937), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(939), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10564] = 6,
    ACTIONS(975), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(977), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(979), 1,
      sym_object_name,
    STATE(349), 1,
      sym_table_options,
    STATE(1047), 1,
      sym_table_option_name,
    STATE(128), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [10585] = 6,
    ACTIONS(981), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(983), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(985), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(987), 1,
      sym_object_name,
    STATE(842), 1,
      sym_index_column_spec,
    STATE(1018), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10606] = 6,
    ACTIONS(981), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(983), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(985), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(987), 1,
      sym_object_name,
    STATE(1020), 1,
      sym_index_column_spec,
    STATE(1018), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10627] = 6,
    ACTIONS(975), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(977), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(979), 1,
      sym_object_name,
    STATE(400), 1,
      sym_table_options,
    STATE(1047), 1,
      sym_table_option_name,
    STATE(128), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [10648] = 6,
    ACTIONS(975), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(977), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(979), 1,
      sym_object_name,
    STATE(395), 1,
      sym_table_options,
    STATE(1047), 1,
      sym_table_option_name,
    STATE(128), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [10669] = 6,
    ACTIONS(981), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(983), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(985), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(987), 1,
      sym_object_name,
    STATE(925), 1,
      sym_index_column_spec,
    STATE(1018), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10690] = 6,
    ACTIONS(989), 1,
      anon_sym_DOT,
    ACTIONS(991), 1,
      aux_sym_privilege_token3,
    ACTIONS(993), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(995), 1,
      aux_sym_alter_table_rename_token1,
    STATE(289), 1,
      sym_alter_type_operation,
    STATE(290), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10711] = 6,
    ACTIONS(975), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(977), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(979), 1,
      sym_object_name,
    STATE(305), 1,
      sym_table_options,
    STATE(1047), 1,
      sym_table_option_name,
    STATE(128), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [10732] = 6,
    ACTIONS(981), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(983), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(985), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(987), 1,
      sym_object_name,
    STATE(927), 1,
      sym_index_column_spec,
    STATE(1018), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10753] = 5,
    ACTIONS(991), 1,
      aux_sym_privilege_token3,
    ACTIONS(993), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(995), 1,
      aux_sym_alter_table_rename_token1,
    STATE(302), 1,
      sym_alter_type_operation,
    STATE(290), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10771] = 3,
    ACTIONS(1001), 1,
      aux_sym_relation_element_token1,
    ACTIONS(997), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(999), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10785] = 3,
    ACTIONS(1007), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1003), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1005), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10799] = 6,
    ACTIONS(1009), 1,
      anon_sym_LPAREN,
    ACTIONS(1011), 1,
      sym_object_name,
    STATE(78), 1,
      sym_relation_element,
    STATE(94), 1,
      sym_relation_elements,
    STATE(462), 1,
      sym_function_call,
    STATE(75), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10819] = 6,
    ACTIONS(1009), 1,
      anon_sym_LPAREN,
    ACTIONS(1013), 1,
      sym_object_name,
    STATE(82), 1,
      sym_relation_element,
    STATE(462), 1,
      sym_function_call,
    STATE(798), 1,
      sym_column_not_null,
    STATE(75), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10839] = 5,
    ACTIONS(975), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(977), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(979), 1,
      sym_object_name,
    STATE(1047), 1,
      sym_table_option_name,
    STATE(221), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [10857] = 7,
    ACTIONS(1015), 1,
      aux_sym_truncate_token2,
    ACTIONS(1017), 1,
      aux_sym_privilege_token1,
    ACTIONS(1019), 1,
      aux_sym_resource_token2,
    ACTIONS(1021), 1,
      aux_sym_resource_token5,
    ACTIONS(1023), 1,
      aux_sym_resource_token6,
    ACTIONS(1025), 1,
      sym_object_name,
    STATE(233), 1,
      sym_resource,
  [10879] = 5,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(1027), 1,
      aux_sym__decimal_literal_token1,
    STATE(804), 1,
      sym__decimal_literal,
    STATE(805), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [10897] = 7,
    ACTIONS(1029), 1,
      aux_sym_select_statement_token2,
    ACTIONS(1031), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1033), 1,
      anon_sym_STAR,
    ACTIONS(1035), 1,
      sym_object_name,
    STATE(623), 1,
      sym_function_call,
    STATE(641), 1,
      sym_select_element,
    STATE(816), 1,
      sym_select_elements,
  [10919] = 7,
    ACTIONS(1015), 1,
      aux_sym_truncate_token2,
    ACTIONS(1017), 1,
      aux_sym_privilege_token1,
    ACTIONS(1019), 1,
      aux_sym_resource_token2,
    ACTIONS(1021), 1,
      aux_sym_resource_token5,
    ACTIONS(1023), 1,
      aux_sym_resource_token6,
    ACTIONS(1025), 1,
      sym_object_name,
    STATE(1167), 1,
      sym_resource,
  [10941] = 7,
    ACTIONS(1015), 1,
      aux_sym_truncate_token2,
    ACTIONS(1017), 1,
      aux_sym_privilege_token1,
    ACTIONS(1019), 1,
      aux_sym_resource_token2,
    ACTIONS(1021), 1,
      aux_sym_resource_token5,
    ACTIONS(1023), 1,
      aux_sym_resource_token6,
    ACTIONS(1025), 1,
      sym_object_name,
    STATE(1165), 1,
      sym_resource,
  [10963] = 6,
    ACTIONS(1037), 1,
      aux_sym_truncate_token2,
    ACTIONS(1039), 1,
      aux_sym_resource_token2,
    ACTIONS(1041), 1,
      aux_sym_resource_token6,
    ACTIONS(1043), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1045), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1047), 1,
      aux_sym_drop_user_token1,
  [10982] = 5,
    ACTIONS(1009), 1,
      anon_sym_LPAREN,
    ACTIONS(1011), 1,
      sym_object_name,
    STATE(82), 1,
      sym_relation_element,
    STATE(462), 1,
      sym_function_call,
    STATE(75), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10999] = 2,
    ACTIONS(1049), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1051), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [11010] = 6,
    ACTIONS(1033), 1,
      anon_sym_STAR,
    ACTIONS(1035), 1,
      sym_object_name,
    ACTIONS(1053), 1,
      aux_sym_select_statement_token3,
    STATE(623), 1,
      sym_function_call,
    STATE(641), 1,
      sym_select_element,
    STATE(737), 1,
      sym_select_elements,
  [11029] = 5,
    ACTIONS(1055), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1057), 1,
      sym_object_name,
    STATE(493), 1,
      sym_from_spec,
    STATE(581), 1,
      sym_delete_column_item,
    STATE(694), 1,
      sym_delete_column_list,
  [11045] = 5,
    ACTIONS(1059), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(1061), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(1063), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(1065), 1,
      aux_sym_role_with_option_token4,
    STATE(145), 1,
      sym_role_with_option,
  [11061] = 1,
    ACTIONS(1067), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11069] = 1,
    ACTIONS(1069), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11077] = 5,
    ACTIONS(977), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(979), 1,
      sym_object_name,
    STATE(140), 1,
      sym_table_option_item,
    STATE(390), 1,
      sym_clustering_order,
    STATE(1047), 1,
      sym_table_option_name,
  [11093] = 4,
    ACTIONS(935), 1,
      anon_sym_LPAREN,
    ACTIONS(1073), 1,
      anon_sym_DOT,
    ACTIONS(1075), 1,
      aux_sym_select_element_token1,
    ACTIONS(1071), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11107] = 1,
    ACTIONS(1077), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11115] = 5,
    ACTIONS(1033), 1,
      anon_sym_STAR,
    ACTIONS(1079), 1,
      sym_object_name,
    STATE(623), 1,
      sym_function_call,
    STATE(641), 1,
      sym_select_element,
    STATE(692), 1,
      sym_select_elements,
  [11131] = 5,
    ACTIONS(977), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(979), 1,
      sym_object_name,
    STATE(219), 1,
      sym_table_option_item,
    STATE(274), 1,
      sym_clustering_order,
    STATE(1047), 1,
      sym_table_option_name,
  [11147] = 1,
    ACTIONS(1081), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11155] = 1,
    ACTIONS(1083), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11163] = 5,
    ACTIONS(1085), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1087), 1,
      anon_sym_LPAREN,
    ACTIONS(1089), 1,
      aux_sym_insert_values_spec_token1,
    STATE(102), 1,
      sym_insert_values_spec,
    STATE(655), 1,
      sym_insert_column_spec,
  [11179] = 5,
    ACTIONS(1033), 1,
      anon_sym_STAR,
    ACTIONS(1079), 1,
      sym_object_name,
    STATE(623), 1,
      sym_function_call,
    STATE(641), 1,
      sym_select_element,
    STATE(737), 1,
      sym_select_elements,
  [11195] = 5,
    ACTIONS(1085), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1087), 1,
      anon_sym_LPAREN,
    ACTIONS(1089), 1,
      aux_sym_insert_values_spec_token1,
    STATE(110), 1,
      sym_insert_values_spec,
    STATE(681), 1,
      sym_insert_column_spec,
  [11211] = 5,
    ACTIONS(1059), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(1061), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(1063), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(1065), 1,
      aux_sym_role_with_option_token4,
    STATE(222), 1,
      sym_role_with_option,
  [11227] = 3,
    ACTIONS(1093), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(661), 1,
      sym_using_timestamp_spec,
    ACTIONS(1091), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11239] = 3,
    ACTIONS(1095), 1,
      anon_sym_COMMA,
    STATE(480), 1,
      aux_sym_assignment_set_repeat1,
    ACTIONS(1098), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11251] = 5,
    ACTIONS(977), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(979), 1,
      sym_object_name,
    STATE(219), 1,
      sym_table_option_item,
    STATE(336), 1,
      sym_clustering_order,
    STATE(1047), 1,
      sym_table_option_name,
  [11267] = 4,
    ACTIONS(1100), 1,
      anon_sym_LPAREN,
    ACTIONS(1102), 1,
      sym_object_name,
    STATE(922), 1,
      sym_primary_key_definition,
    STATE(923), 2,
      sym_compound_key,
      sym_composite_key,
  [11281] = 1,
    ACTIONS(1104), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11289] = 1,
    ACTIONS(1106), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11297] = 5,
    ACTIONS(1108), 1,
      sym__string_literal,
    ACTIONS(1110), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1112), 1,
      aux_sym_create_index_token3,
    ACTIONS(1114), 1,
      sym_object_name,
    STATE(1316), 1,
      sym_index_name,
  [11313] = 5,
    ACTIONS(1055), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1057), 1,
      sym_object_name,
    STATE(490), 1,
      sym_from_spec,
    STATE(581), 1,
      sym_delete_column_item,
    STATE(809), 1,
      sym_delete_column_list,
  [11329] = 3,
    ACTIONS(1118), 1,
      anon_sym_LBRACE,
    ACTIONS(1116), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(198), 2,
      sym_option_hash,
      sym_table_option_value,
  [11341] = 3,
    ACTIONS(1093), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(657), 1,
      sym_using_timestamp_spec,
    ACTIONS(1120), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11353] = 4,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      sym_where_spec,
    STATE(536), 1,
      aux_sym_update_repeat1,
  [11366] = 4,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1093), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(175), 1,
      sym_where_spec,
    STATE(723), 1,
      sym_using_timestamp_spec,
  [11379] = 4,
    ACTIONS(1124), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(1126), 1,
      sym_object_name,
    STATE(160), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11392] = 4,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      sym_where_spec,
    STATE(553), 1,
      aux_sym_update_repeat1,
  [11405] = 4,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1093), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(120), 1,
      sym_where_spec,
    STATE(718), 1,
      sym_using_timestamp_spec,
  [11418] = 4,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      sym_where_spec,
    STATE(553), 1,
      aux_sym_update_repeat1,
  [11431] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1128), 1,
      aux_sym_delete_statement_token3,
    STATE(160), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11444] = 1,
    ACTIONS(1098), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11451] = 4,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      sym_where_spec,
    STATE(553), 1,
      aux_sym_update_repeat1,
  [11464] = 4,
    ACTIONS(1130), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1132), 1,
      aux_sym_create_materialized_view_token1,
    STATE(513), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(631), 1,
      aux_sym_relation_elements_repeat1,
  [11477] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1134), 1,
      aux_sym_delete_statement_token3,
    STATE(160), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11490] = 4,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      sym_where_spec,
    STATE(507), 1,
      aux_sym_update_repeat1,
  [11503] = 4,
    ACTIONS(935), 1,
      anon_sym_LPAREN,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    STATE(569), 1,
      aux_sym_function_args_repeat1,
  [11516] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1140), 1,
      aux_sym_delete_statement_token3,
    STATE(160), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11529] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1142), 1,
      aux_sym_delete_statement_token3,
    STATE(160), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11542] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1144), 1,
      aux_sym_delete_statement_token3,
    STATE(160), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11555] = 4,
    ACTIONS(1146), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1148), 1,
      sym_object_name,
    STATE(753), 1,
      sym_column_definition,
    STATE(933), 1,
      sym_primary_key_element,
  [11568] = 4,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      sym_where_spec,
    STATE(497), 1,
      aux_sym_update_repeat1,
  [11581] = 4,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      sym_where_spec,
    STATE(553), 1,
      aux_sym_update_repeat1,
  [11594] = 3,
    ACTIONS(1152), 1,
      aux_sym_create_materialized_view_token1,
    STATE(757), 1,
      sym_primary_key_column,
    ACTIONS(1150), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11605] = 4,
    ACTIONS(213), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1154), 1,
      anon_sym_DOT,
    ACTIONS(1156), 1,
      aux_sym_update_token2,
    STATE(1279), 1,
      sym_using_ttl_timestamp,
  [11618] = 4,
    ACTIONS(1146), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1148), 1,
      sym_object_name,
    STATE(753), 1,
      sym_column_definition,
    STATE(892), 1,
      sym_primary_key_element,
  [11631] = 4,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    ACTIONS(1160), 1,
      anon_sym_COLON,
    ACTIONS(1162), 1,
      anon_sym_RBRACE,
    STATE(627), 1,
      aux_sym_assignment_set_repeat1,
  [11644] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1164), 1,
      aux_sym_delete_statement_token3,
    STATE(160), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11657] = 4,
    ACTIONS(1130), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1166), 1,
      aux_sym_create_materialized_view_token1,
    STATE(551), 1,
      aux_sym_relation_elements_repeat1,
    STATE(557), 1,
      aux_sym_materialized_view_where_repeat1,
  [11670] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1168), 1,
      aux_sym_delete_statement_token3,
    STATE(160), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11683] = 4,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      sym_where_spec,
    STATE(494), 1,
      aux_sym_update_repeat1,
  [11696] = 3,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    STATE(516), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1173), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11707] = 4,
    ACTIONS(213), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1175), 1,
      anon_sym_DOT,
    ACTIONS(1177), 1,
      aux_sym_update_token2,
    STATE(1153), 1,
      sym_using_ttl_timestamp,
  [11720] = 4,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      sym_where_spec,
    STATE(553), 1,
      aux_sym_update_repeat1,
  [11733] = 4,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      sym_where_spec,
    STATE(492), 1,
      aux_sym_update_repeat1,
  [11746] = 4,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      sym_where_spec,
    STATE(553), 1,
      aux_sym_update_repeat1,
  [11759] = 4,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1093), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(159), 1,
      sym_where_spec,
    STATE(835), 1,
      sym_using_timestamp_spec,
  [11772] = 4,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      sym_where_spec,
    STATE(527), 1,
      aux_sym_update_repeat1,
  [11785] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1179), 1,
      aux_sym_delete_statement_token3,
    STATE(160), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11798] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1181), 1,
      aux_sym_delete_statement_token3,
    STATE(160), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11811] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1183), 1,
      aux_sym_delete_statement_token3,
    STATE(160), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11824] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1185), 1,
      aux_sym_delete_statement_token3,
    STATE(160), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11837] = 4,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      sym_where_spec,
    STATE(553), 1,
      aux_sym_update_repeat1,
  [11850] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1187), 1,
      aux_sym_delete_statement_token3,
    STATE(160), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11863] = 4,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      sym_where_spec,
    STATE(520), 1,
      aux_sym_update_repeat1,
  [11876] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    STATE(516), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1191), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11887] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1193), 1,
      aux_sym_delete_statement_token3,
    STATE(160), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11900] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1195), 1,
      aux_sym_delete_statement_token3,
    STATE(160), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11913] = 4,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      sym_where_spec,
    STATE(518), 1,
      aux_sym_update_repeat1,
  [11926] = 1,
    ACTIONS(1197), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11933] = 4,
    ACTIONS(1126), 1,
      sym_object_name,
    ACTIONS(1199), 1,
      aux_sym_delete_statement_token3,
    STATE(160), 1,
      sym_if_condition,
    STATE(315), 1,
      sym_if_condition_list,
  [11946] = 4,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      sym_where_spec,
    STATE(553), 1,
      aux_sym_update_repeat1,
  [11959] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    STATE(530), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1201), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11970] = 4,
    ACTIONS(1108), 1,
      sym__string_literal,
    ACTIONS(1114), 1,
      sym_object_name,
    ACTIONS(1203), 1,
      aux_sym_create_index_token3,
    STATE(1026), 1,
      sym_index_name,
  [11983] = 2,
    ACTIONS(1205), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1207), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11992] = 3,
    ACTIONS(1209), 1,
      sym_object_name,
    STATE(529), 1,
      sym_assignment_element,
    STATE(1187), 1,
      sym_indexed_column,
  [12002] = 3,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
    ACTIONS(1213), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      aux_sym_create_type_repeat1,
  [12012] = 3,
    ACTIONS(1215), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1217), 1,
      sym_object_name,
    STATE(1322), 1,
      sym_table_name,
  [12022] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_clustering_key_list_repeat1,
  [12032] = 3,
    ACTIONS(1209), 1,
      sym_object_name,
    STATE(522), 1,
      sym_assignment_element,
    STATE(1187), 1,
      sym_indexed_column,
  [12042] = 3,
    ACTIONS(1221), 1,
      anon_sym_RPAREN,
    ACTIONS(1223), 1,
      sym_object_name,
    STATE(612), 1,
      sym_param,
  [12052] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1227), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [12062] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(935), 1,
      sym_return_mode,
  [12072] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1233), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [12082] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(1027), 1,
      sym_return_mode,
  [12092] = 3,
    ACTIONS(1235), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1237), 1,
      sym_object_name,
    STATE(1312), 1,
      sym_keyspace_name,
  [12102] = 3,
    ACTIONS(147), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1239), 1,
      aux_sym_create_materialized_view_token1,
    STATE(70), 1,
      aux_sym_relation_elements_repeat1,
  [12112] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1241), 1,
      anon_sym_RPAREN,
    STATE(648), 1,
      aux_sym_create_function_repeat1,
  [12122] = 3,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    ACTIONS(1246), 1,
      aux_sym_where_spec_token1,
    STATE(553), 1,
      aux_sym_update_repeat1,
  [12132] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1248), 1,
      anon_sym_RPAREN,
    STATE(675), 1,
      aux_sym_create_function_repeat1,
  [12142] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(1023), 1,
      sym_return_mode,
  [12152] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(1011), 1,
      sym_return_mode,
  [12162] = 3,
    ACTIONS(1250), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1253), 1,
      aux_sym_create_materialized_view_token1,
    STATE(557), 1,
      aux_sym_materialized_view_where_repeat1,
  [12172] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [12182] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(886), 1,
      sym_return_mode,
  [12192] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(1166), 1,
      sym_return_mode,
  [12202] = 3,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
    ACTIONS(1257), 1,
      anon_sym_RPAREN,
    STATE(566), 1,
      aux_sym_create_type_repeat1,
  [12212] = 3,
    ACTIONS(1259), 1,
      anon_sym_COMMA,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
    STATE(678), 1,
      aux_sym_column_definition_list_repeat1,
  [12222] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1263), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [12232] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(939), 1,
      sym_return_mode,
  [12242] = 3,
    ACTIONS(1223), 1,
      sym_object_name,
    ACTIONS(1265), 1,
      anon_sym_RPAREN,
    STATE(620), 1,
      sym_param,
  [12252] = 3,
    ACTIONS(1267), 1,
      anon_sym_COMMA,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
    STATE(566), 1,
      aux_sym_create_type_repeat1,
  [12262] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
    STATE(573), 1,
      aux_sym_relation_element_repeat1,
  [12272] = 3,
    ACTIONS(1274), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1276), 1,
      sym_object_name,
    STATE(1303), 1,
      sym_trigger_name,
  [12282] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1278), 1,
      anon_sym_RPAREN,
    STATE(643), 1,
      aux_sym_function_args_repeat1,
  [12292] = 2,
    ACTIONS(1280), 1,
      anon_sym_RPAREN,
    ACTIONS(1282), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
  [12300] = 3,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
    ACTIONS(1284), 1,
      anon_sym_RPAREN,
    STATE(610), 1,
      aux_sym_create_type_repeat1,
  [12310] = 3,
    ACTIONS(1286), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1288), 1,
      sym_object_name,
    STATE(702), 1,
      sym_user_name,
  [12320] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
    STATE(516), 1,
      aux_sym_relation_element_repeat1,
  [12330] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
    STATE(563), 1,
      aux_sym_create_function_repeat1,
  [12340] = 3,
    ACTIONS(1294), 1,
      sym_object_name,
    STATE(125), 1,
      sym_alter_type_rename_item,
    STATE(306), 1,
      sym_alter_type_rename_list,
  [12350] = 3,
    ACTIONS(1296), 1,
      anon_sym_DOT,
    ACTIONS(1298), 1,
      aux_sym_where_spec_token1,
    STATE(1198), 1,
      sym_materialized_view_where,
  [12360] = 3,
    ACTIONS(1209), 1,
      sym_object_name,
    STATE(500), 1,
      sym_assignment_element,
    STATE(1187), 1,
      sym_indexed_column,
  [12370] = 3,
    ACTIONS(1300), 1,
      anon_sym_COMMA,
    ACTIONS(1303), 1,
      anon_sym_RBRACE,
    STATE(578), 1,
      aux_sym_option_hash_repeat1,
  [12380] = 3,
    ACTIONS(1305), 1,
      sym__string_literal,
    ACTIONS(1307), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1309), 1,
      sym_object_name,
  [12390] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(1123), 1,
      sym_return_mode,
  [12400] = 3,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    ACTIONS(1313), 1,
      aux_sym_from_spec_token1,
    STATE(654), 1,
      aux_sym_delete_column_list_repeat1,
  [12410] = 3,
    ACTIONS(1209), 1,
      sym_object_name,
    STATE(489), 1,
      sym_assignment_element,
    STATE(1187), 1,
      sym_indexed_column,
  [12420] = 3,
    ACTIONS(1315), 1,
      anon_sym_COMMA,
    ACTIONS(1317), 1,
      anon_sym_GT,
    STATE(589), 1,
      aux_sym_data_type_definition_repeat1,
  [12430] = 3,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1321), 1,
      anon_sym_RBRACE,
    STATE(578), 1,
      aux_sym_option_hash_repeat1,
  [12440] = 3,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1323), 1,
      anon_sym_RBRACE,
    STATE(584), 1,
      aux_sym_option_hash_repeat1,
  [12450] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(1207), 1,
      sym_return_mode,
  [12460] = 1,
    ACTIONS(1325), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [12466] = 3,
    ACTIONS(1327), 1,
      sym_object_name,
    STATE(219), 1,
      sym_table_option_item,
    STATE(1047), 1,
      sym_table_option_name,
  [12476] = 3,
    ACTIONS(1329), 1,
      anon_sym_COMMA,
    ACTIONS(1332), 1,
      anon_sym_GT,
    STATE(589), 1,
      aux_sym_data_type_definition_repeat1,
  [12486] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(1334), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_relation_element_repeat2,
  [12496] = 3,
    ACTIONS(1223), 1,
      sym_object_name,
    ACTIONS(1336), 1,
      anon_sym_RPAREN,
    STATE(665), 1,
      sym_param,
  [12506] = 3,
    ACTIONS(1298), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1338), 1,
      anon_sym_DOT,
    STATE(957), 1,
      sym_materialized_view_where,
  [12516] = 2,
    ACTIONS(1340), 1,
      aux_sym_resource_token1,
    ACTIONS(1342), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [12524] = 3,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
    STATE(561), 1,
      aux_sym_create_type_repeat1,
  [12534] = 3,
    ACTIONS(1346), 1,
      anon_sym_COMMA,
    ACTIONS(1349), 1,
      anon_sym_RBRACE,
    STATE(595), 1,
      aux_sym_assignment_map_repeat1,
  [12544] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1351), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [12554] = 3,
    ACTIONS(213), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1353), 1,
      aux_sym_update_token2,
    STATE(1071), 1,
      sym_using_ttl_timestamp,
  [12564] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(854), 1,
      sym_return_mode,
  [12574] = 3,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    ACTIONS(1355), 1,
      anon_sym_RBRACK,
    STATE(634), 1,
      aux_sym_assignment_set_repeat1,
  [12584] = 3,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
    STATE(566), 1,
      aux_sym_create_type_repeat1,
  [12594] = 2,
    ACTIONS(1361), 1,
      anon_sym_LBRACK,
    ACTIONS(1359), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12602] = 3,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    ACTIONS(1363), 1,
      anon_sym_RPAREN,
    STATE(626), 1,
      aux_sym_assignment_set_repeat1,
  [12612] = 3,
    ACTIONS(1365), 1,
      anon_sym_COMMA,
    ACTIONS(1367), 1,
      anon_sym_RPAREN,
    STATE(633), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12622] = 3,
    ACTIONS(1369), 1,
      anon_sym_COMMA,
    ACTIONS(1371), 1,
      anon_sym_RPAREN,
    STATE(625), 1,
      aux_sym_expression_list_repeat1,
  [12632] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(1002), 1,
      sym_return_mode,
  [12642] = 3,
    ACTIONS(1373), 1,
      anon_sym_COMMA,
    ACTIONS(1375), 1,
      anon_sym_RPAREN,
    STATE(640), 1,
      aux_sym_init_cond_hash_repeat1,
  [12652] = 3,
    ACTIONS(1377), 1,
      sym_object_name,
    STATE(562), 1,
      sym_column_definition,
    STATE(894), 1,
      sym_column_definition_list,
  [12662] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1379), 1,
      anon_sym_RPAREN,
    STATE(548), 1,
      aux_sym_create_function_repeat1,
  [12672] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(850), 1,
      sym_return_mode,
  [12682] = 3,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
    ACTIONS(1381), 1,
      anon_sym_RPAREN,
    STATE(566), 1,
      aux_sym_create_type_repeat1,
  [12692] = 3,
    ACTIONS(1383), 1,
      anon_sym_COMMA,
    ACTIONS(1385), 1,
      anon_sym_RBRACE,
    STATE(624), 1,
      aux_sym_replication_list_repeat1,
  [12702] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1387), 1,
      anon_sym_RPAREN,
    STATE(647), 1,
      aux_sym_create_function_repeat1,
  [12712] = 3,
    ACTIONS(1223), 1,
      sym_object_name,
    ACTIONS(1389), 1,
      anon_sym_RPAREN,
    STATE(554), 1,
      sym_param,
  [12722] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(997), 1,
      sym_return_mode,
  [12732] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(1128), 1,
      sym_return_mode,
  [12742] = 3,
    ACTIONS(1391), 1,
      anon_sym_COMMA,
    ACTIONS(1394), 1,
      anon_sym_RPAREN,
    STATE(616), 1,
      aux_sym_column_definition_list_repeat1,
  [12752] = 3,
    ACTIONS(1396), 1,
      anon_sym_COMMA,
    ACTIONS(1399), 1,
      anon_sym_RBRACE,
    STATE(617), 1,
      aux_sym_replication_list_repeat1,
  [12762] = 3,
    ACTIONS(1288), 1,
      sym_object_name,
    ACTIONS(1401), 1,
      aux_sym_delete_statement_token2,
    STATE(356), 1,
      sym_user_name,
  [12772] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(965), 1,
      sym_return_mode,
  [12782] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1403), 1,
      anon_sym_RPAREN,
    STATE(546), 1,
      aux_sym_create_function_repeat1,
  [12792] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(1405), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      aux_sym_clustering_key_list_repeat1,
  [12802] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(970), 1,
      sym_return_mode,
  [12812] = 2,
    ACTIONS(1409), 1,
      aux_sym_select_element_token1,
    ACTIONS(1407), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12820] = 3,
    ACTIONS(1383), 1,
      anon_sym_COMMA,
    ACTIONS(1411), 1,
      anon_sym_RBRACE,
    STATE(617), 1,
      aux_sym_replication_list_repeat1,
  [12830] = 3,
    ACTIONS(1413), 1,
      anon_sym_COMMA,
    ACTIONS(1416), 1,
      anon_sym_RPAREN,
    STATE(625), 1,
      aux_sym_expression_list_repeat1,
  [12840] = 3,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    ACTIONS(1418), 1,
      anon_sym_RPAREN,
    STATE(480), 1,
      aux_sym_assignment_set_repeat1,
  [12850] = 3,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    ACTIONS(1420), 1,
      anon_sym_RBRACE,
    STATE(480), 1,
      aux_sym_assignment_set_repeat1,
  [12860] = 3,
    ACTIONS(1223), 1,
      sym_object_name,
    ACTIONS(1422), 1,
      anon_sym_RPAREN,
    STATE(608), 1,
      sym_param,
  [12870] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(879), 1,
      sym_return_mode,
  [12880] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1424), 1,
      anon_sym_RPAREN,
    STATE(596), 1,
      aux_sym_create_function_repeat1,
  [12890] = 3,
    ACTIONS(147), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1166), 1,
      aux_sym_create_materialized_view_token1,
    STATE(70), 1,
      aux_sym_relation_elements_repeat1,
  [12900] = 3,
    ACTIONS(1079), 1,
      sym_object_name,
    STATE(623), 1,
      sym_function_call,
    STATE(711), 1,
      sym_select_element,
  [12910] = 3,
    ACTIONS(1365), 1,
      anon_sym_COMMA,
    ACTIONS(1426), 1,
      anon_sym_RPAREN,
    STATE(687), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12920] = 3,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    ACTIONS(1428), 1,
      anon_sym_RBRACK,
    STATE(480), 1,
      aux_sym_assignment_set_repeat1,
  [12930] = 3,
    ACTIONS(1430), 1,
      anon_sym_COMMA,
    ACTIONS(1432), 1,
      anon_sym_RBRACE,
    STATE(595), 1,
      aux_sym_assignment_map_repeat1,
  [12940] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(873), 1,
      sym_return_mode,
  [12950] = 3,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    ACTIONS(1437), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [12960] = 3,
    ACTIONS(1209), 1,
      sym_object_name,
    STATE(533), 1,
      sym_assignment_element,
    STATE(1187), 1,
      sym_indexed_column,
  [12970] = 3,
    ACTIONS(1439), 1,
      anon_sym_COMMA,
    ACTIONS(1441), 1,
      aux_sym_from_spec_token1,
    STATE(676), 1,
      aux_sym_select_elements_repeat1,
  [12980] = 3,
    ACTIONS(1373), 1,
      anon_sym_COMMA,
    ACTIONS(1443), 1,
      anon_sym_RPAREN,
    STATE(685), 1,
      aux_sym_init_cond_hash_repeat1,
  [12990] = 3,
    ACTIONS(1439), 1,
      anon_sym_COMMA,
    ACTIONS(1445), 1,
      aux_sym_from_spec_token1,
    STATE(639), 1,
      aux_sym_select_elements_repeat1,
  [13000] = 3,
    ACTIONS(1209), 1,
      sym_object_name,
    STATE(795), 1,
      sym_assignment_element,
    STATE(1187), 1,
      sym_indexed_column,
  [13010] = 3,
    ACTIONS(1447), 1,
      anon_sym_COMMA,
    ACTIONS(1450), 1,
      anon_sym_RPAREN,
    STATE(643), 1,
      aux_sym_function_args_repeat1,
  [13020] = 3,
    ACTIONS(1223), 1,
      sym_object_name,
    ACTIONS(1452), 1,
      anon_sym_RPAREN,
    STATE(552), 1,
      sym_param,
  [13030] = 3,
    ACTIONS(1027), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1454), 1,
      sym__string_literal,
    STATE(1267), 1,
      sym__decimal_literal,
  [13040] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(1049), 1,
      sym_return_mode,
  [13050] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1456), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [13060] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1458), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [13070] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(1460), 1,
      anon_sym_RPAREN,
    STATE(590), 1,
      aux_sym_relation_element_repeat2,
  [13080] = 3,
    ACTIONS(1315), 1,
      anon_sym_COMMA,
    ACTIONS(1462), 1,
      anon_sym_GT,
    STATE(583), 1,
      aux_sym_data_type_definition_repeat1,
  [13090] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(919), 1,
      sym_return_mode,
  [13100] = 3,
    ACTIONS(1377), 1,
      sym_object_name,
    STATE(562), 1,
      sym_column_definition,
    STATE(1127), 1,
      sym_column_definition_list,
  [13110] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(1460), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_relation_element_repeat2,
  [13120] = 3,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    ACTIONS(1464), 1,
      aux_sym_from_spec_token1,
    STATE(658), 1,
      aux_sym_delete_column_list_repeat1,
  [13130] = 3,
    ACTIONS(1085), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1089), 1,
      aux_sym_insert_values_spec_token1,
    STATE(110), 1,
      sym_insert_values_spec,
  [13140] = 3,
    ACTIONS(1466), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1468), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1470), 1,
      aux_sym_update_token1,
  [13150] = 1,
    ACTIONS(1472), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13156] = 3,
    ACTIONS(1474), 1,
      anon_sym_COMMA,
    ACTIONS(1477), 1,
      aux_sym_from_spec_token1,
    STATE(658), 1,
      aux_sym_delete_column_list_repeat1,
  [13166] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(1479), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_relation_element_repeat2,
  [13176] = 3,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
    ACTIONS(1481), 1,
      anon_sym_RPAREN,
    STATE(566), 1,
      aux_sym_create_type_repeat1,
  [13186] = 1,
    ACTIONS(1120), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13192] = 3,
    ACTIONS(1298), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1483), 1,
      anon_sym_DOT,
    STATE(1112), 1,
      sym_materialized_view_where,
  [13202] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(1097), 1,
      sym_return_mode,
  [13212] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(860), 1,
      sym_return_mode,
  [13222] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1485), 1,
      anon_sym_RPAREN,
    STATE(558), 1,
      aux_sym_create_function_repeat1,
  [13232] = 3,
    ACTIONS(1223), 1,
      sym_object_name,
    ACTIONS(1487), 1,
      anon_sym_RPAREN,
    STATE(630), 1,
      sym_param,
  [13242] = 3,
    ACTIONS(1298), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1489), 1,
      anon_sym_DOT,
    STATE(1067), 1,
      sym_materialized_view_where,
  [13252] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(1491), 1,
      anon_sym_RPAREN,
    STATE(543), 1,
      aux_sym_clustering_key_list_repeat1,
  [13262] = 3,
    ACTIONS(1209), 1,
      sym_object_name,
    STATE(506), 1,
      sym_assignment_element,
    STATE(1187), 1,
      sym_indexed_column,
  [13272] = 3,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
    ACTIONS(1493), 1,
      anon_sym_RPAREN,
    STATE(600), 1,
      aux_sym_create_type_repeat1,
  [13282] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    STATE(569), 1,
      aux_sym_function_args_repeat1,
  [13292] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(1495), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_clustering_key_list_repeat1,
  [13302] = 3,
    ACTIONS(1223), 1,
      sym_object_name,
    ACTIONS(1497), 1,
      anon_sym_RPAREN,
    STATE(574), 1,
      sym_param,
  [13312] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(1079), 1,
      sym_return_mode,
  [13322] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1499), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      aux_sym_create_function_repeat1,
  [13332] = 3,
    ACTIONS(1501), 1,
      anon_sym_COMMA,
    ACTIONS(1504), 1,
      aux_sym_from_spec_token1,
    STATE(676), 1,
      aux_sym_select_elements_repeat1,
  [13342] = 3,
    ACTIONS(1430), 1,
      anon_sym_COMMA,
    ACTIONS(1506), 1,
      anon_sym_RBRACE,
    STATE(635), 1,
      aux_sym_assignment_map_repeat1,
  [13352] = 3,
    ACTIONS(1508), 1,
      anon_sym_COMMA,
    ACTIONS(1510), 1,
      anon_sym_RPAREN,
    STATE(616), 1,
      aux_sym_column_definition_list_repeat1,
  [13362] = 3,
    ACTIONS(1229), 1,
      aux_sym_create_function_token1,
    ACTIONS(1231), 1,
      aux_sym_return_mode_token1,
    STATE(1083), 1,
      sym_return_mode,
  [13372] = 3,
    ACTIONS(1217), 1,
      sym_object_name,
    ACTIONS(1512), 1,
      aux_sym_truncate_token2,
    STATE(386), 1,
      sym_table_name,
  [13382] = 3,
    ACTIONS(1085), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1089), 1,
      aux_sym_insert_values_spec_token1,
    STATE(115), 1,
      sym_insert_values_spec,
  [13392] = 3,
    ACTIONS(1369), 1,
      anon_sym_COMMA,
    ACTIONS(1514), 1,
      anon_sym_RPAREN,
    STATE(604), 1,
      aux_sym_expression_list_repeat1,
  [13402] = 3,
    ACTIONS(213), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1516), 1,
      aux_sym_update_token2,
    STATE(956), 1,
      sym_using_ttl_timestamp,
  [13412] = 2,
    ACTIONS(1520), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1518), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [13420] = 3,
    ACTIONS(1522), 1,
      anon_sym_COMMA,
    ACTIONS(1525), 1,
      anon_sym_RPAREN,
    STATE(685), 1,
      aux_sym_init_cond_hash_repeat1,
  [13430] = 3,
    ACTIONS(1209), 1,
      sym_object_name,
    STATE(519), 1,
      sym_assignment_element,
    STATE(1187), 1,
      sym_indexed_column,
  [13440] = 3,
    ACTIONS(1527), 1,
      anon_sym_COMMA,
    ACTIONS(1530), 1,
      anon_sym_RPAREN,
    STATE(687), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [13450] = 2,
    ACTIONS(935), 1,
      anon_sym_LPAREN,
    ACTIONS(1450), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13458] = 3,
    ACTIONS(1209), 1,
      sym_object_name,
    STATE(515), 1,
      sym_assignment_element,
    STATE(1187), 1,
      sym_indexed_column,
  [13468] = 3,
    ACTIONS(1027), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1532), 1,
      sym__string_literal,
    STATE(748), 1,
      sym__decimal_literal,
  [13478] = 2,
    ACTIONS(1298), 1,
      aux_sym_where_spec_token1,
    STATE(1275), 1,
      sym_materialized_view_where,
  [13485] = 2,
    ACTIONS(1534), 1,
      aux_sym_from_spec_token1,
    STATE(72), 1,
      sym_from_spec,
  [13492] = 2,
    ACTIONS(1536), 1,
      sym_object_name,
    STATE(477), 1,
      sym_table_name,
  [13499] = 2,
    ACTIONS(1534), 1,
      aux_sym_from_spec_token1,
    STATE(521), 1,
      sym_from_spec,
  [13506] = 2,
    ACTIONS(1538), 1,
      aux_sym_materialized_view_options_token1,
    STATE(291), 1,
      sym_user_with,
  [13513] = 1,
    ACTIONS(1525), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13518] = 2,
    ACTIONS(1540), 1,
      aux_sym_using_timestamp_spec_token2,
    ACTIONS(1542), 1,
      aux_sym_using_ttl_timestamp_token1,
  [13525] = 2,
    ACTIONS(1544), 1,
      sym_object_name,
    STATE(1302), 1,
      sym_column_list,
  [13532] = 2,
    ACTIONS(1546), 1,
      anon_sym_DOT,
    ACTIONS(1548), 1,
      aux_sym_create_index_token3,
  [13539] = 2,
    ACTIONS(1536), 1,
      sym_object_name,
    STATE(1256), 1,
      sym_table_name,
  [13546] = 2,
    ACTIONS(1550), 1,
      aux_sym_resource_token5,
    ACTIONS(1552), 1,
      aux_sym_drop_aggregate_token1,
  [13553] = 2,
    ACTIONS(1538), 1,
      aux_sym_materialized_view_options_token1,
    STATE(252), 1,
      sym_user_with,
  [13560] = 2,
    ACTIONS(1544), 1,
      sym_object_name,
    STATE(1319), 1,
      sym_column_list,
  [13567] = 2,
    ACTIONS(1554), 1,
      anon_sym_DOT,
    ACTIONS(1556), 1,
      anon_sym_LPAREN,
  [13574] = 2,
    ACTIONS(1544), 1,
      sym_object_name,
    STATE(1320), 1,
      sym_column_list,
  [13581] = 2,
    ACTIONS(1558), 1,
      anon_sym_DOT,
    ACTIONS(1560), 1,
      aux_sym_using_timestamp_spec_token1,
  [13588] = 2,
    ACTIONS(1562), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1564), 1,
      sym_object_name,
  [13595] = 2,
    ACTIONS(1566), 1,
      anon_sym_DOT,
    ACTIONS(1568), 1,
      anon_sym_LPAREN,
  [13602] = 2,
    ACTIONS(1570), 1,
      anon_sym_DOT,
    ACTIONS(1572), 1,
      anon_sym_LPAREN,
  [13609] = 1,
    ACTIONS(1574), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13614] = 1,
    ACTIONS(1504), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13619] = 2,
    ACTIONS(1576), 1,
      sym_object_name,
    STATE(127), 1,
      sym_alter_table_column_definition,
  [13626] = 1,
    ACTIONS(1578), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13631] = 1,
    ACTIONS(1530), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13636] = 2,
    ACTIONS(1027), 1,
      aux_sym__decimal_literal_token1,
    STATE(247), 1,
      sym__decimal_literal,
  [13643] = 1,
    ACTIONS(1580), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13648] = 1,
    ACTIONS(1582), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13653] = 2,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    STATE(159), 1,
      sym_where_spec,
  [13660] = 1,
    ACTIONS(1477), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13665] = 2,
    ACTIONS(1544), 1,
      sym_object_name,
    STATE(1137), 1,
      sym_column_list,
  [13672] = 2,
    ACTIONS(1584), 1,
      sym_object_name,
    STATE(719), 1,
      sym_delete_column_item,
  [13679] = 2,
    ACTIONS(1586), 1,
      sym__string_literal,
    STATE(360), 1,
      sym_trigger_class,
  [13686] = 2,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    STATE(120), 1,
      sym_where_spec,
  [13693] = 2,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    STATE(659), 1,
      sym_assignment_tuple,
  [13700] = 2,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_assignment_tuple,
  [13707] = 2,
    ACTIONS(1588), 1,
      anon_sym_DOT,
    ACTIONS(1590), 1,
      aux_sym_select_element_token1,
  [13714] = 2,
    ACTIONS(1536), 1,
      sym_object_name,
    STATE(1125), 1,
      sym_table_name,
  [13721] = 2,
    ACTIONS(1544), 1,
      sym_object_name,
    STATE(1278), 1,
      sym_column_list,
  [13728] = 2,
    ACTIONS(1592), 1,
      sym__string_literal,
    STATE(585), 1,
      sym_option_hash_item,
  [13735] = 2,
    ACTIONS(1594), 1,
      sym_object_name,
    STATE(696), 1,
      sym_init_cond_hash_item,
  [13742] = 2,
    ACTIONS(1596), 1,
      anon_sym_DOT,
    ACTIONS(1598), 1,
      aux_sym_select_element_token1,
  [13749] = 1,
    ACTIONS(1437), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13754] = 2,
    ACTIONS(1586), 1,
      sym__string_literal,
    STATE(355), 1,
      sym_trigger_class,
  [13761] = 2,
    ACTIONS(1600), 1,
      sym_object_name,
    STATE(991), 1,
      sym_partition_key_list,
  [13768] = 1,
    ACTIONS(1416), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13773] = 2,
    ACTIONS(1602), 1,
      anon_sym_COMMA,
    ACTIONS(1604), 1,
      anon_sym_RPAREN,
  [13780] = 2,
    ACTIONS(1534), 1,
      aux_sym_from_spec_token1,
    STATE(71), 1,
      sym_from_spec,
  [13787] = 2,
    ACTIONS(1606), 1,
      sym__string_literal,
    STATE(611), 1,
      sym_replication_list_item,
  [13794] = 2,
    ACTIONS(1608), 1,
      aux_sym_role_with_option_token1,
    STATE(101), 1,
      sym_user_password,
  [13801] = 1,
    ACTIONS(1610), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13806] = 2,
    ACTIONS(1612), 1,
      sym_object_name,
    STATE(695), 1,
      sym_user_name,
  [13813] = 2,
    ACTIONS(1544), 1,
      sym_object_name,
    STATE(1342), 1,
      sym_column_list,
  [13820] = 2,
    ACTIONS(1614), 1,
      sym_object_name,
    STATE(1274), 1,
      sym_keyspace_name,
  [13827] = 2,
    ACTIONS(1377), 1,
      sym_object_name,
    STATE(753), 1,
      sym_column_definition,
  [13834] = 2,
    ACTIONS(1536), 1,
      sym_object_name,
    STATE(435), 1,
      sym_table_name,
  [13841] = 2,
    ACTIONS(1616), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1618), 1,
      sym_object_name,
  [13848] = 2,
    ACTIONS(1620), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1622), 1,
      sym_object_name,
  [13855] = 1,
    ACTIONS(1624), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13860] = 1,
    ACTIONS(1399), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13865] = 2,
    ACTIONS(1626), 1,
      sym__string_literal,
    ACTIONS(1628), 1,
      sym_object_name,
  [13872] = 2,
    ACTIONS(1536), 1,
      sym_object_name,
    STATE(889), 1,
      sym_table_name,
  [13879] = 1,
    ACTIONS(1630), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13884] = 1,
    ACTIONS(1394), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13889] = 2,
    ACTIONS(1632), 1,
      aux_sym_durable_writes_token1,
    STATE(399), 1,
      sym_durable_writes,
  [13896] = 2,
    ACTIONS(1634), 1,
      sym__string_literal,
    ACTIONS(1636), 1,
      sym_object_name,
  [13903] = 2,
    ACTIONS(1544), 1,
      sym_object_name,
    STATE(1244), 1,
      sym_column_list,
  [13910] = 1,
    ACTIONS(1638), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13915] = 2,
    ACTIONS(1640), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1642), 1,
      sym_object_name,
  [13922] = 2,
    ACTIONS(1544), 1,
      sym_object_name,
    STATE(1243), 1,
      sym_column_list,
  [13929] = 2,
    ACTIONS(1612), 1,
      sym_object_name,
    STATE(384), 1,
      sym_user_name,
  [13936] = 2,
    ACTIONS(1644), 1,
      anon_sym_EQ,
    ACTIONS(1646), 1,
      anon_sym_LBRACK,
  [13943] = 2,
    ACTIONS(1648), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1650), 1,
      sym_object_name,
  [13950] = 2,
    ACTIONS(1544), 1,
      sym_object_name,
    STATE(953), 1,
      sym_column_list,
  [13957] = 2,
    ACTIONS(1652), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1654), 1,
      sym_object_name,
  [13964] = 1,
    ACTIONS(1656), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13969] = 1,
    ACTIONS(1303), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13974] = 2,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_assignment_tuple,
  [13981] = 1,
    ACTIONS(1332), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13986] = 2,
    ACTIONS(1658), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1660), 1,
      sym_object_name,
  [13993] = 2,
    ACTIONS(1662), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1664), 1,
      sym_object_name,
  [14000] = 2,
    ACTIONS(1666), 1,
      sym_object_name,
    STATE(798), 1,
      sym_column_not_null,
  [14007] = 2,
    ACTIONS(1668), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1670), 1,
      sym_object_name,
  [14014] = 2,
    ACTIONS(1672), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1674), 1,
      sym_object_name,
  [14021] = 2,
    ACTIONS(1676), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(1678), 1,
      sym_object_name,
  [14028] = 2,
    ACTIONS(1680), 1,
      sym_object_name,
    STATE(240), 1,
      sym_if_condition,
  [14035] = 2,
    ACTIONS(1592), 1,
      sym__string_literal,
    STATE(766), 1,
      sym_option_hash_item,
  [14042] = 2,
    ACTIONS(1544), 1,
      sym_object_name,
    STATE(874), 1,
      sym_column_list,
  [14049] = 1,
    ACTIONS(1682), 2,
      sym__string_literal,
      sym__float_literal,
  [14054] = 2,
    ACTIONS(1684), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1686), 1,
      sym_object_name,
  [14061] = 2,
    ACTIONS(1298), 1,
      aux_sym_where_spec_token1,
    STATE(1199), 1,
      sym_materialized_view_where,
  [14068] = 2,
    ACTIONS(1688), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1690), 1,
      sym_object_name,
  [14075] = 2,
    ACTIONS(1294), 1,
      sym_object_name,
    STATE(211), 1,
      sym_alter_type_rename_item,
  [14082] = 2,
    ACTIONS(1666), 1,
      sym_object_name,
    STATE(498), 1,
      sym_column_not_null,
  [14089] = 2,
    ACTIONS(1692), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1694), 1,
      sym_object_name,
  [14096] = 1,
    ACTIONS(1696), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14101] = 2,
    ACTIONS(1698), 1,
      anon_sym_DOT,
    ACTIONS(1700), 1,
      anon_sym_LPAREN,
  [14108] = 2,
    ACTIONS(1702), 1,
      anon_sym_LBRACE,
    STATE(216), 1,
      sym_replication_list,
  [14115] = 2,
    ACTIONS(1576), 1,
      sym_object_name,
    STATE(197), 1,
      sym_alter_table_column_definition,
  [14122] = 2,
    ACTIONS(1536), 1,
      sym_object_name,
    STATE(1028), 1,
      sym_table_name,
  [14129] = 2,
    ACTIONS(1614), 1,
      sym_object_name,
    STATE(1016), 1,
      sym_keyspace_name,
  [14136] = 2,
    ACTIONS(1704), 1,
      anon_sym_DOT,
    ACTIONS(1706), 1,
      anon_sym_LPAREN,
  [14143] = 2,
    ACTIONS(1708), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1710), 1,
      sym_object_name,
  [14150] = 2,
    ACTIONS(1712), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1714), 1,
      sym_object_name,
  [14157] = 2,
    ACTIONS(1544), 1,
      sym_object_name,
    STATE(1164), 1,
      sym_column_list,
  [14164] = 1,
    ACTIONS(1246), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14169] = 1,
    ACTIONS(1205), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14174] = 1,
    ACTIONS(1716), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [14179] = 1,
    ACTIONS(1253), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [14184] = 2,
    ACTIONS(1298), 1,
      aux_sym_where_spec_token1,
    STATE(1159), 1,
      sym_materialized_view_where,
  [14191] = 2,
    ACTIONS(1718), 1,
      sym_object_name,
    STATE(1139), 1,
      sym_clustering_key_list,
  [14198] = 1,
    ACTIONS(1720), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14203] = 2,
    ACTIONS(1536), 1,
      sym_object_name,
    STATE(357), 1,
      sym_table_name,
  [14210] = 2,
    ACTIONS(1536), 1,
      sym_object_name,
    STATE(475), 1,
      sym_table_name,
  [14217] = 1,
    ACTIONS(1722), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14222] = 1,
    ACTIONS(1724), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14227] = 2,
    ACTIONS(1726), 1,
      sym_object_name,
    STATE(994), 1,
      sym_trigger_name,
  [14234] = 2,
    ACTIONS(1612), 1,
      sym_object_name,
    STATE(814), 1,
      sym_user_name,
  [14241] = 2,
    ACTIONS(1728), 1,
      sym__string_literal,
    ACTIONS(1730), 1,
      sym_object_name,
  [14248] = 2,
    ACTIONS(1534), 1,
      aux_sym_from_spec_token1,
    STATE(493), 1,
      sym_from_spec,
  [14255] = 2,
    ACTIONS(1632), 1,
      aux_sym_durable_writes_token1,
    STATE(317), 1,
      sym_durable_writes,
  [14262] = 2,
    ACTIONS(1732), 1,
      anon_sym_DOT,
    ACTIONS(1734), 1,
      anon_sym_LPAREN,
  [14269] = 2,
    ACTIONS(1736), 1,
      anon_sym_DOT,
    ACTIONS(1738), 1,
      anon_sym_LPAREN,
  [14276] = 2,
    ACTIONS(1536), 1,
      sym_object_name,
    STATE(87), 1,
      sym_table_name,
  [14283] = 2,
    ACTIONS(1538), 1,
      aux_sym_materialized_view_options_token1,
    STATE(325), 1,
      sym_user_with,
  [14290] = 2,
    ACTIONS(1740), 1,
      anon_sym_DOT,
    ACTIONS(1742), 1,
      anon_sym_LPAREN,
  [14297] = 2,
    ACTIONS(1534), 1,
      aux_sym_from_spec_token1,
    STATE(74), 1,
      sym_from_spec,
  [14304] = 2,
    ACTIONS(1718), 1,
      sym_object_name,
    STATE(1046), 1,
      sym_clustering_key_list,
  [14311] = 2,
    ACTIONS(1544), 1,
      sym_object_name,
    STATE(914), 1,
      sym_column_list,
  [14318] = 2,
    ACTIONS(1744), 1,
      anon_sym_DOT,
    ACTIONS(1746), 1,
      aux_sym_create_index_token3,
  [14325] = 2,
    ACTIONS(1632), 1,
      aux_sym_durable_writes_token1,
    STATE(361), 1,
      sym_durable_writes,
  [14332] = 1,
    ACTIONS(1748), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [14337] = 2,
    ACTIONS(1027), 1,
      aux_sym__decimal_literal_token1,
    STATE(967), 1,
      sym__decimal_literal,
  [14344] = 2,
    ACTIONS(1750), 1,
      anon_sym_DOT,
    ACTIONS(1752), 1,
      anon_sym_LPAREN,
  [14351] = 2,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_assignment_tuple,
  [14358] = 2,
    ACTIONS(1118), 1,
      anon_sym_LBRACE,
    STATE(223), 1,
      sym_option_hash,
  [14365] = 2,
    ACTIONS(1223), 1,
      sym_object_name,
    STATE(732), 1,
      sym_param,
  [14372] = 1,
    ACTIONS(1754), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14377] = 2,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    STATE(649), 1,
      sym_assignment_tuple,
  [14384] = 2,
    ACTIONS(1544), 1,
      sym_object_name,
    STATE(1064), 1,
      sym_column_list,
  [14391] = 2,
    ACTIONS(1756), 1,
      anon_sym_DOT,
    ACTIONS(1758), 1,
      anon_sym_LPAREN,
  [14398] = 2,
    ACTIONS(1702), 1,
      anon_sym_LBRACE,
    STATE(231), 1,
      sym_replication_list,
  [14405] = 2,
    ACTIONS(1298), 1,
      aux_sym_where_spec_token1,
    STATE(1068), 1,
      sym_materialized_view_where,
  [14412] = 2,
    ACTIONS(1536), 1,
      sym_object_name,
    STATE(932), 1,
      sym_table_name,
  [14419] = 2,
    ACTIONS(1606), 1,
      sym__string_literal,
    STATE(749), 1,
      sym_replication_list_item,
  [14426] = 2,
    ACTIONS(125), 1,
      aux_sym_where_spec_token1,
    STATE(170), 1,
      sym_where_spec,
  [14433] = 1,
    ACTIONS(1760), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14438] = 1,
    ACTIONS(1762), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [14443] = 2,
    ACTIONS(1702), 1,
      anon_sym_LBRACE,
    STATE(235), 1,
      sym_replication_list,
  [14450] = 1,
    ACTIONS(1450), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14455] = 1,
    ACTIONS(1764), 1,
      sym_object_name,
  [14459] = 1,
    ACTIONS(1766), 1,
      anon_sym_RPAREN,
  [14463] = 1,
    ACTIONS(1768), 1,
      anon_sym_RPAREN,
  [14467] = 1,
    ACTIONS(1770), 1,
      anon_sym_RPAREN,
  [14471] = 1,
    ACTIONS(1772), 1,
      anon_sym_RPAREN,
  [14475] = 1,
    ACTIONS(1774), 1,
      sym_object_name,
  [14479] = 1,
    ACTIONS(1776), 1,
      aux_sym_select_statement_token5,
  [14483] = 1,
    ACTIONS(1778), 1,
      anon_sym_EQ,
  [14487] = 1,
    ACTIONS(1780), 1,
      aux_sym_delete_statement_token3,
  [14491] = 1,
    ACTIONS(1782), 1,
      sym_object_name,
  [14495] = 1,
    ACTIONS(1784), 1,
      aux_sym_create_function_token1,
  [14499] = 1,
    ACTIONS(1786), 1,
      sym_object_name,
  [14503] = 1,
    ACTIONS(1788), 1,
      sym_object_name,
  [14507] = 1,
    ACTIONS(1790), 1,
      sym_object_name,
  [14511] = 1,
    ACTIONS(1792), 1,
      aux_sym_create_function_token1,
  [14515] = 1,
    ACTIONS(1794), 1,
      aux_sym_create_aggregate_token3,
  [14519] = 1,
    ACTIONS(1796), 1,
      aux_sym_return_mode_token2,
  [14523] = 1,
    ACTIONS(1798), 1,
      aux_sym_create_function_token1,
  [14527] = 1,
    ACTIONS(1800), 1,
      sym_object_name,
  [14531] = 1,
    ACTIONS(1802), 1,
      aux_sym_create_function_token2,
  [14535] = 1,
    ACTIONS(1804), 1,
      aux_sym_create_function_token1,
  [14539] = 1,
    ACTIONS(1806), 1,
      anon_sym_LPAREN,
  [14543] = 1,
    ACTIONS(1808), 1,
      sym_object_name,
  [14547] = 1,
    ACTIONS(1810), 1,
      aux_sym_select_statement_token1,
  [14551] = 1,
    ACTIONS(1812), 1,
      sym_object_name,
  [14555] = 1,
    ACTIONS(1814), 1,
      aux_sym_create_aggregate_token4,
  [14559] = 1,
    ACTIONS(1816), 1,
      aux_sym_create_aggregate_token3,
  [14563] = 1,
    ACTIONS(1818), 1,
      sym_object_name,
  [14567] = 1,
    ACTIONS(1820), 1,
      aux_sym_create_aggregate_token3,
  [14571] = 1,
    ACTIONS(1822), 1,
      anon_sym_RPAREN,
  [14575] = 1,
    ACTIONS(1824), 1,
      anon_sym_LPAREN,
  [14579] = 1,
    ACTIONS(1826), 1,
      anon_sym_COLON,
  [14583] = 1,
    ACTIONS(1828), 1,
      aux_sym_select_element_token1,
  [14587] = 1,
    ACTIONS(1830), 1,
      aux_sym_create_function_token1,
  [14591] = 1,
    ACTIONS(1832), 1,
      aux_sym_from_spec_token1,
  [14595] = 1,
    ACTIONS(1834), 1,
      aux_sym_create_function_token2,
  [14599] = 1,
    ACTIONS(1836), 1,
      sym_object_name,
  [14603] = 1,
    ACTIONS(1838), 1,
      aux_sym_return_mode_token2,
  [14607] = 1,
    ACTIONS(1840), 1,
      aux_sym_constant_token2,
  [14611] = 1,
    ACTIONS(1842), 1,
      aux_sym_create_function_token1,
  [14615] = 1,
    ACTIONS(1844), 1,
      anon_sym_LPAREN,
  [14619] = 1,
    ACTIONS(1846), 1,
      sym_object_name,
  [14623] = 1,
    ACTIONS(1848), 1,
      anon_sym_COLON,
  [14627] = 1,
    ACTIONS(1850), 1,
      anon_sym_EQ,
  [14631] = 1,
    ACTIONS(1852), 1,
      anon_sym_RPAREN,
  [14635] = 1,
    ACTIONS(1854), 1,
      anon_sym_RPAREN,
  [14639] = 1,
    ACTIONS(1856), 1,
      aux_sym_create_function_token1,
  [14643] = 1,
    ACTIONS(1858), 1,
      anon_sym_RPAREN,
  [14647] = 1,
    ACTIONS(1860), 1,
      sym_object_name,
  [14651] = 1,
    ACTIONS(1862), 1,
      anon_sym_LPAREN,
  [14655] = 1,
    ACTIONS(1864), 1,
      anon_sym_RPAREN,
  [14659] = 1,
    ACTIONS(1866), 1,
      sym_object_name,
  [14663] = 1,
    ACTIONS(1868), 1,
      anon_sym_RPAREN,
  [14667] = 1,
    ACTIONS(1870), 1,
      anon_sym_LPAREN,
  [14671] = 1,
    ACTIONS(1872), 1,
      anon_sym_RPAREN,
  [14675] = 1,
    ACTIONS(1874), 1,
      anon_sym_LPAREN,
  [14679] = 1,
    ACTIONS(1876), 1,
      aux_sym_select_statement_token5,
  [14683] = 1,
    ACTIONS(1878), 1,
      aux_sym_insert_statement_token3,
  [14687] = 1,
    ACTIONS(1880), 1,
      sym_object_name,
  [14691] = 1,
    ACTIONS(1882), 1,
      anon_sym_LPAREN,
  [14695] = 1,
    ACTIONS(1884), 1,
      sym_object_name,
  [14699] = 1,
    ACTIONS(1886), 1,
      anon_sym_EQ,
  [14703] = 1,
    ACTIONS(1888), 1,
      sym_object_name,
  [14707] = 1,
    ACTIONS(1890), 1,
      aux_sym__decimal_literal_token1,
  [14711] = 1,
    ACTIONS(1892), 1,
      aux_sym__decimal_literal_token1,
  [14715] = 1,
    ACTIONS(1894), 1,
      aux_sym_create_index_token3,
  [14719] = 1,
    ACTIONS(1896), 1,
      anon_sym_RPAREN,
  [14723] = 1,
    ACTIONS(1898), 1,
      anon_sym_LPAREN,
  [14727] = 1,
    ACTIONS(1900), 1,
      sym_object_name,
  [14731] = 1,
    ACTIONS(1902), 1,
      anon_sym_LPAREN,
  [14735] = 1,
    ACTIONS(1904), 1,
      sym_object_name,
  [14739] = 1,
    ACTIONS(1906), 1,
      sym_object_name,
  [14743] = 1,
    ACTIONS(1908), 1,
      sym_object_name,
  [14747] = 1,
    ACTIONS(1910), 1,
      sym_object_name,
  [14751] = 1,
    ACTIONS(1912), 1,
      aux_sym_from_spec_token1,
  [14755] = 1,
    ACTIONS(1914), 1,
      aux_sym_select_statement_token1,
  [14759] = 1,
    ACTIONS(1916), 1,
      sym_object_name,
  [14763] = 1,
    ACTIONS(1918), 1,
      anon_sym_RPAREN,
  [14767] = 1,
    ACTIONS(1920), 1,
      sym_object_name,
  [14771] = 1,
    ACTIONS(1922), 1,
      aux_sym_create_function_token1,
  [14775] = 1,
    ACTIONS(1924), 1,
      aux_sym_constant_token2,
  [14779] = 1,
    ACTIONS(1926), 1,
      aux_sym_create_index_token3,
  [14783] = 1,
    ACTIONS(1928), 1,
      anon_sym_RPAREN,
  [14787] = 1,
    ACTIONS(1930), 1,
      anon_sym_RPAREN,
  [14791] = 1,
    ACTIONS(1932), 1,
      sym_object_name,
  [14795] = 1,
    ACTIONS(1934), 1,
      anon_sym_RPAREN,
  [14799] = 1,
    ACTIONS(1936), 1,
      aux_sym_create_keyspace_token1,
  [14803] = 1,
    ACTIONS(1938), 1,
      anon_sym_RPAREN,
  [14807] = 1,
    ACTIONS(1940), 1,
      sym_object_name,
  [14811] = 1,
    ACTIONS(1942), 1,
      sym_object_name,
  [14815] = 1,
    ACTIONS(1944), 1,
      sym_object_name,
  [14819] = 1,
    ACTIONS(1946), 1,
      sym__boolean_literal,
  [14823] = 1,
    ACTIONS(1948), 1,
      anon_sym_LPAREN,
  [14827] = 1,
    ACTIONS(1950), 1,
      anon_sym_RPAREN,
  [14831] = 1,
    ACTIONS(1952), 1,
      aux_sym_relation_contains_key_token2,
  [14835] = 1,
    ACTIONS(1954), 1,
      aux_sym_create_function_token1,
  [14839] = 1,
    ACTIONS(1956), 1,
      aux_sym_relation_contains_key_token2,
  [14843] = 1,
    ACTIONS(1958), 1,
      aux_sym_create_function_token2,
  [14847] = 1,
    ACTIONS(1960), 1,
      aux_sym_delete_statement_token3,
  [14851] = 1,
    ACTIONS(1962), 1,
      aux_sym_create_function_token1,
  [14855] = 1,
    ACTIONS(1964), 1,
      aux_sym_create_function_token1,
  [14859] = 1,
    ACTIONS(1966), 1,
      aux_sym_select_element_token1,
  [14863] = 1,
    ACTIONS(1968), 1,
      sym_object_name,
  [14867] = 1,
    ACTIONS(1970), 1,
      aux_sym_create_function_token2,
  [14871] = 1,
    ACTIONS(1972), 1,
      anon_sym_RPAREN,
  [14875] = 1,
    ACTIONS(1974), 1,
      anon_sym_RPAREN,
  [14879] = 1,
    ACTIONS(1976), 1,
      anon_sym_LPAREN,
  [14883] = 1,
    ACTIONS(1978), 1,
      aux_sym_select_statement_token5,
  [14887] = 1,
    ACTIONS(1980), 1,
      anon_sym_RPAREN,
  [14891] = 1,
    ACTIONS(1982), 1,
      sym_object_name,
  [14895] = 1,
    ACTIONS(1984), 1,
      aux_sym_create_aggregate_token4,
  [14899] = 1,
    ACTIONS(1986), 1,
      aux_sym_create_aggregate_token5,
  [14903] = 1,
    ACTIONS(1988), 1,
      aux_sym_select_statement_token1,
  [14907] = 1,
    ACTIONS(1990), 1,
      aux_sym_from_spec_token1,
  [14911] = 1,
    ACTIONS(1992), 1,
      sym_object_name,
  [14915] = 1,
    ACTIONS(1994), 1,
      sym_object_name,
  [14919] = 1,
    ACTIONS(1996), 1,
      aux_sym_update_token2,
  [14923] = 1,
    ACTIONS(1998), 1,
      aux_sym_create_materialized_view_token1,
  [14927] = 1,
    ACTIONS(2000), 1,
      sym_object_name,
  [14931] = 1,
    ACTIONS(2002), 1,
      sym_object_name,
  [14935] = 1,
    ACTIONS(2004), 1,
      aux_sym_order_spec_token2,
  [14939] = 1,
    ACTIONS(2006), 1,
      sym_object_name,
  [14943] = 1,
    ACTIONS(2008), 1,
      anon_sym_LPAREN,
  [14947] = 1,
    ACTIONS(2010), 1,
      sym_object_name,
  [14951] = 1,
    ACTIONS(2012), 1,
      aux_sym_resource_token2,
  [14955] = 1,
    ACTIONS(2014), 1,
      aux_sym_create_function_token1,
  [14959] = 1,
    ACTIONS(2016), 1,
      sym_object_name,
  [14963] = 1,
    ACTIONS(2018), 1,
      anon_sym_RBRACK,
  [14967] = 1,
    ACTIONS(2020), 1,
      aux_sym_create_function_token2,
  [14971] = 1,
    ACTIONS(2022), 1,
      aux_sym_using_timestamp_spec_token2,
  [14975] = 1,
    ACTIONS(2024), 1,
      aux_sym_create_function_token1,
  [14979] = 1,
    ACTIONS(2026), 1,
      anon_sym_LPAREN,
  [14983] = 1,
    ACTIONS(2028), 1,
      anon_sym_RPAREN,
  [14987] = 1,
    ACTIONS(2030), 1,
      aux_sym_create_aggregate_token3,
  [14991] = 1,
    ACTIONS(2032), 1,
      aux_sym_create_aggregate_token4,
  [14995] = 1,
    ACTIONS(2034), 1,
      sym_object_name,
  [14999] = 1,
    ACTIONS(2036), 1,
      aux_sym_using_ttl_timestamp_token1,
  [15003] = 1,
    ACTIONS(2038), 1,
      sym_object_name,
  [15007] = 1,
    ACTIONS(2040), 1,
      sym_object_name,
  [15011] = 1,
    ACTIONS(2042), 1,
      anon_sym_RPAREN,
  [15015] = 1,
    ACTIONS(2044), 1,
      sym_object_name,
  [15019] = 1,
    ACTIONS(2046), 1,
      sym_object_name,
  [15023] = 1,
    ACTIONS(2048), 1,
      sym_object_name,
  [15027] = 1,
    ACTIONS(2050), 1,
      sym_object_name,
  [15031] = 1,
    ACTIONS(2052), 1,
      sym_object_name,
  [15035] = 1,
    ACTIONS(2054), 1,
      sym_object_name,
  [15039] = 1,
    ACTIONS(2056), 1,
      sym_object_name,
  [15043] = 1,
    ACTIONS(2058), 1,
      anon_sym_COLON,
  [15047] = 1,
    ACTIONS(2060), 1,
      aux_sym_delete_statement_token3,
  [15051] = 1,
    ACTIONS(2062), 1,
      sym_object_name,
  [15055] = 1,
    ACTIONS(2064), 1,
      aux_sym_delete_statement_token3,
  [15059] = 1,
    ACTIONS(2066), 1,
      anon_sym_RPAREN,
  [15063] = 1,
    ACTIONS(2068), 1,
      sym_object_name,
  [15067] = 1,
    ACTIONS(2070), 1,
      anon_sym_RPAREN,
  [15071] = 1,
    ACTIONS(2072), 1,
      aux_sym_using_timestamp_spec_token1,
  [15075] = 1,
    ACTIONS(2074), 1,
      aux_sym_select_element_token1,
  [15079] = 1,
    ACTIONS(2076), 1,
      sym_object_name,
  [15083] = 1,
    ACTIONS(2078), 1,
      aux_sym_create_function_token1,
  [15087] = 1,
    ACTIONS(2080), 1,
      aux_sym_create_aggregate_token3,
  [15091] = 1,
    ACTIONS(2082), 1,
      sym__boolean_literal,
  [15095] = 1,
    ACTIONS(2084), 1,
      aux_sym_create_function_token2,
  [15099] = 1,
    ACTIONS(2086), 1,
      sym__boolean_literal,
  [15103] = 1,
    ACTIONS(2088), 1,
      aux_sym_create_function_token1,
  [15107] = 1,
    ACTIONS(2090), 1,
      sym_object_name,
  [15111] = 1,
    ACTIONS(2092), 1,
      aux_sym_create_function_token2,
  [15115] = 1,
    ACTIONS(2094), 1,
      sym__string_literal,
  [15119] = 1,
    ACTIONS(2096), 1,
      sym__code_block,
  [15123] = 1,
    ACTIONS(2098), 1,
      aux_sym_select_element_token1,
  [15127] = 1,
    ACTIONS(2100), 1,
      sym_object_name,
  [15131] = 1,
    ACTIONS(2102), 1,
      aux_sym_create_aggregate_token3,
  [15135] = 1,
    ACTIONS(2104), 1,
      aux_sym_create_aggregate_token4,
  [15139] = 1,
    ACTIONS(2106), 1,
      aux_sym_create_function_token1,
  [15143] = 1,
    ACTIONS(2108), 1,
      sym_object_name,
  [15147] = 1,
    ACTIONS(2110), 1,
      aux_sym_create_index_token3,
  [15151] = 1,
    ACTIONS(2112), 1,
      sym_object_name,
  [15155] = 1,
    ACTIONS(2114), 1,
      aux_sym_constant_token2,
  [15159] = 1,
    ACTIONS(2116), 1,
      aux_sym_materialized_view_options_token1,
  [15163] = 1,
    ACTIONS(945), 1,
      aux_sym_column_not_null_token1,
  [15167] = 1,
    ACTIONS(2118), 1,
      anon_sym_RPAREN,
  [15171] = 1,
    ACTIONS(2120), 1,
      aux_sym_relation_contains_key_token2,
  [15175] = 1,
    ACTIONS(2122), 1,
      anon_sym_RPAREN,
  [15179] = 1,
    ACTIONS(2124), 1,
      anon_sym_RPAREN,
  [15183] = 1,
    ACTIONS(2126), 1,
      anon_sym_LPAREN,
  [15187] = 1,
    ACTIONS(2128), 1,
      aux_sym_create_function_token1,
  [15191] = 1,
    ACTIONS(2130), 1,
      anon_sym_LPAREN,
  [15195] = 1,
    ACTIONS(2132), 1,
      anon_sym_LPAREN,
  [15199] = 1,
    ACTIONS(2134), 1,
      aux_sym_create_index_token3,
  [15203] = 1,
    ACTIONS(2136), 1,
      aux_sym_create_function_token1,
  [15207] = 1,
    ACTIONS(2138), 1,
      anon_sym_LPAREN,
  [15211] = 1,
    ACTIONS(2140), 1,
      sym_object_name,
  [15215] = 1,
    ACTIONS(2142), 1,
      aux_sym_create_function_token2,
  [15219] = 1,
    ACTIONS(2144), 1,
      aux_sym_delete_statement_token3,
  [15223] = 1,
    ACTIONS(2146), 1,
      aux_sym_insert_statement_token3,
  [15227] = 1,
    ACTIONS(2148), 1,
      aux_sym_create_aggregate_token3,
  [15231] = 1,
    ACTIONS(2150), 1,
      sym_object_name,
  [15235] = 1,
    ACTIONS(2152), 1,
      anon_sym_RPAREN,
  [15239] = 1,
    ACTIONS(935), 1,
      anon_sym_LPAREN,
  [15243] = 1,
    ACTIONS(2154), 1,
      sym_object_name,
  [15247] = 1,
    ACTIONS(2156), 1,
      aux_sym_select_statement_token5,
  [15251] = 1,
    ACTIONS(2158), 1,
      sym_object_name,
  [15255] = 1,
    ACTIONS(2160), 1,
      aux_sym_grant_token2,
  [15259] = 1,
    ACTIONS(2162), 1,
      aux_sym_drop_type_token1,
  [15263] = 1,
    ACTIONS(2164), 1,
      sym_object_name,
  [15267] = 1,
    ACTIONS(2166), 1,
      anon_sym_EQ,
  [15271] = 1,
    ACTIONS(2168), 1,
      anon_sym_COMMA,
  [15275] = 1,
    ACTIONS(2170), 1,
      aux_sym_grant_token2,
  [15279] = 1,
    ACTIONS(2172), 1,
      anon_sym_RPAREN,
  [15283] = 1,
    ACTIONS(2174), 1,
      anon_sym_EQ,
  [15287] = 1,
    ACTIONS(2176), 1,
      anon_sym_EQ,
  [15291] = 1,
    ACTIONS(2178), 1,
      aux_sym_create_function_token1,
  [15295] = 1,
    ACTIONS(2180), 1,
      aux_sym_order_spec_token1,
  [15299] = 1,
    ACTIONS(2182), 1,
      sym_object_name,
  [15303] = 1,
    ACTIONS(2184), 1,
      aux_sym_create_function_token2,
  [15307] = 1,
    ACTIONS(2186), 1,
      aux_sym_compact_storage_token2,
  [15311] = 1,
    ACTIONS(2188), 1,
      aux_sym_select_element_token1,
  [15315] = 1,
    ACTIONS(2190), 1,
      sym_object_name,
  [15319] = 1,
    ACTIONS(2192), 1,
      aux_sym_create_function_token2,
  [15323] = 1,
    ACTIONS(2194), 1,
      aux_sym_compact_storage_token2,
  [15327] = 1,
    ACTIONS(2196), 1,
      sym__code_block,
  [15331] = 1,
    ACTIONS(2198), 1,
      aux_sym_select_element_token1,
  [15335] = 1,
    ACTIONS(2200), 1,
      sym_object_name,
  [15339] = 1,
    ACTIONS(2202), 1,
      sym_object_name,
  [15343] = 1,
    ACTIONS(2204), 1,
      aux_sym_create_aggregate_token5,
  [15347] = 1,
    ACTIONS(2206), 1,
      aux_sym_create_aggregate_token6,
  [15351] = 1,
    ACTIONS(2208), 1,
      aux_sym_from_spec_token1,
  [15355] = 1,
    ACTIONS(2210), 1,
      sym_object_name,
  [15359] = 1,
    ACTIONS(2212), 1,
      sym_object_name,
  [15363] = 1,
    ACTIONS(2214), 1,
      aux_sym_create_materialized_view_token1,
  [15367] = 1,
    ACTIONS(2216), 1,
      aux_sym_create_materialized_view_token1,
  [15371] = 1,
    ACTIONS(2218), 1,
      aux_sym_insert_statement_token3,
  [15375] = 1,
    ACTIONS(2220), 1,
      sym_object_name,
  [15379] = 1,
    ACTIONS(2222), 1,
      aux_sym_update_token2,
  [15383] = 1,
    ACTIONS(2224), 1,
      aux_sym_create_index_token3,
  [15387] = 1,
    ACTIONS(2226), 1,
      anon_sym_LPAREN,
  [15391] = 1,
    ACTIONS(2228), 1,
      sym_object_name,
  [15395] = 1,
    ACTIONS(2230), 1,
      sym_object_name,
  [15399] = 1,
    ACTIONS(2232), 1,
      aux_sym_insert_statement_token3,
  [15403] = 1,
    ACTIONS(2234), 1,
      aux_sym_insert_statement_token3,
  [15407] = 1,
    ACTIONS(2236), 1,
      sym__string_literal,
  [15411] = 1,
    ACTIONS(2238), 1,
      aux_sym_create_function_token1,
  [15415] = 1,
    ACTIONS(2240), 1,
      anon_sym_LPAREN,
  [15419] = 1,
    ACTIONS(2242), 1,
      aux_sym_create_function_token2,
  [15423] = 1,
    ACTIONS(2244), 1,
      sym_object_name,
  [15427] = 1,
    ACTIONS(2246), 1,
      aux_sym_create_function_token1,
  [15431] = 1,
    ACTIONS(2248), 1,
      aux_sym_select_element_token1,
  [15435] = 1,
    ACTIONS(2250), 1,
      sym_object_name,
  [15439] = 1,
    ACTIONS(2252), 1,
      aux_sym_create_function_token2,
  [15443] = 1,
    ACTIONS(2254), 1,
      anon_sym_RPAREN,
  [15447] = 1,
    ACTIONS(2256), 1,
      sym_object_name,
  [15451] = 1,
    ACTIONS(2258), 1,
      aux_sym_create_aggregate_token4,
  [15455] = 1,
    ACTIONS(2260), 1,
      aux_sym_create_aggregate_token5,
  [15459] = 1,
    ACTIONS(2262), 1,
      aux_sym_using_timestamp_spec_token1,
  [15463] = 1,
    ACTIONS(2264), 1,
      aux_sym_select_statement_token1,
  [15467] = 1,
    ACTIONS(2266), 1,
      sym_object_name,
  [15471] = 1,
    ACTIONS(2268), 1,
      aux_sym_delete_statement_token3,
  [15475] = 1,
    ACTIONS(2270), 1,
      aux_sym_create_function_token2,
  [15479] = 1,
    ACTIONS(2272), 1,
      anon_sym_RPAREN,
  [15483] = 1,
    ACTIONS(2274), 1,
      aux_sym_create_function_token1,
  [15487] = 1,
    ACTIONS(2276), 1,
      aux_sym_select_element_token1,
  [15491] = 1,
    ACTIONS(2278), 1,
      sym_object_name,
  [15495] = 1,
    ACTIONS(2280), 1,
      aux_sym_create_function_token2,
  [15499] = 1,
    ACTIONS(2282), 1,
      sym__code_block,
  [15503] = 1,
    ACTIONS(2284), 1,
      aux_sym_select_element_token1,
  [15507] = 1,
    ACTIONS(2286), 1,
      sym_object_name,
  [15511] = 1,
    ACTIONS(2288), 1,
      anon_sym_LPAREN,
  [15515] = 1,
    ACTIONS(2290), 1,
      sym__code_block,
  [15519] = 1,
    ACTIONS(2292), 1,
      aux_sym_create_aggregate_token4,
  [15523] = 1,
    ACTIONS(2294), 1,
      aux_sym_create_aggregate_token5,
  [15527] = 1,
    ACTIONS(2296), 1,
      sym_object_name,
  [15531] = 1,
    ACTIONS(2298), 1,
      sym_object_name,
  [15535] = 1,
    ACTIONS(2300), 1,
      sym_object_name,
  [15539] = 1,
    ACTIONS(2302), 1,
      sym_object_name,
  [15543] = 1,
    ACTIONS(2304), 1,
      aux_sym_create_materialized_view_token1,
  [15547] = 1,
    ACTIONS(2306), 1,
      anon_sym_EQ,
  [15551] = 1,
    ACTIONS(2308), 1,
      aux_sym_relation_contains_key_token2,
  [15555] = 1,
    ACTIONS(2310), 1,
      aux_sym_relation_contains_key_token2,
  [15559] = 1,
    ACTIONS(2312), 1,
      aux_sym_constant_token2,
  [15563] = 1,
    ACTIONS(2314), 1,
      anon_sym_EQ,
  [15567] = 1,
    ACTIONS(2316), 1,
      anon_sym_EQ,
  [15571] = 1,
    ACTIONS(2318), 1,
      anon_sym_EQ,
  [15575] = 1,
    ACTIONS(2320), 1,
      sym_object_name,
  [15579] = 1,
    ACTIONS(2322), 1,
      anon_sym_LPAREN,
  [15583] = 1,
    ACTIONS(2324), 1,
      sym_object_name,
  [15587] = 1,
    ACTIONS(2326), 1,
      aux_sym_create_function_token1,
  [15591] = 1,
    ACTIONS(2328), 1,
      anon_sym_EQ,
  [15595] = 1,
    ACTIONS(2330), 1,
      anon_sym_LPAREN,
  [15599] = 1,
    ACTIONS(2332), 1,
      aux_sym_create_function_token2,
  [15603] = 1,
    ACTIONS(2334), 1,
      anon_sym_RPAREN,
  [15607] = 1,
    ACTIONS(2336), 1,
      aux_sym_create_function_token1,
  [15611] = 1,
    ACTIONS(2338), 1,
      sym_object_name,
  [15615] = 1,
    ACTIONS(2340), 1,
      aux_sym_create_function_token2,
  [15619] = 1,
    ACTIONS(2342), 1,
      aux_sym_insert_statement_token3,
  [15623] = 1,
    ACTIONS(2344), 1,
      sym__code_block,
  [15627] = 1,
    ACTIONS(2346), 1,
      aux_sym_select_element_token1,
  [15631] = 1,
    ACTIONS(2348), 1,
      sym_object_name,
  [15635] = 1,
    ACTIONS(2350), 1,
      aux_sym_create_aggregate_token3,
  [15639] = 1,
    ACTIONS(2352), 1,
      aux_sym_create_aggregate_token4,
  [15643] = 1,
    ACTIONS(2354), 1,
      anon_sym_RPAREN,
  [15647] = 1,
    ACTIONS(2356), 1,
      sym_object_name,
  [15651] = 1,
    ACTIONS(2358), 1,
      anon_sym_RPAREN,
  [15655] = 1,
    ACTIONS(2360), 1,
      sym_object_name,
  [15659] = 1,
    ACTIONS(2362), 1,
      aux_sym_create_function_token2,
  [15663] = 1,
    ACTIONS(2364), 1,
      anon_sym_EQ,
  [15667] = 1,
    ACTIONS(2366), 1,
      sym__code_block,
  [15671] = 1,
    ACTIONS(2368), 1,
      aux_sym_select_element_token1,
  [15675] = 1,
    ACTIONS(2370), 1,
      sym_object_name,
  [15679] = 1,
    ACTIONS(2372), 1,
      anon_sym_LPAREN,
  [15683] = 1,
    ACTIONS(2374), 1,
      sym__code_block,
  [15687] = 1,
    ACTIONS(2376), 1,
      aux_sym_select_element_token1,
  [15691] = 1,
    ACTIONS(2378), 1,
      sym_object_name,
  [15695] = 1,
    ACTIONS(2380), 1,
      aux_sym_select_statement_token5,
  [15699] = 1,
    ACTIONS(2382), 1,
      sym_object_name,
  [15703] = 1,
    ACTIONS(2384), 1,
      aux_sym_create_aggregate_token6,
  [15707] = 1,
    ACTIONS(2386), 1,
      aux_sym_update_token2,
  [15711] = 1,
    ACTIONS(2388), 1,
      sym_object_name,
  [15715] = 1,
    ACTIONS(2390), 1,
      sym_object_name,
  [15719] = 1,
    ACTIONS(2392), 1,
      sym_object_name,
  [15723] = 1,
    ACTIONS(2394), 1,
      sym_object_name,
  [15727] = 1,
    ACTIONS(2396), 1,
      aux_sym_relation_contains_key_token2,
  [15731] = 1,
    ACTIONS(2398), 1,
      aux_sym_create_materialized_view_token1,
  [15735] = 1,
    ACTIONS(2400), 1,
      anon_sym_LPAREN,
  [15739] = 1,
    ACTIONS(2402), 1,
      anon_sym_LPAREN,
  [15743] = 1,
    ACTIONS(2404), 1,
      aux_sym_create_keyspace_token1,
  [15747] = 1,
    ACTIONS(2406), 1,
      sym_object_name,
  [15751] = 1,
    ACTIONS(2408), 1,
      anon_sym_RPAREN,
  [15755] = 1,
    ACTIONS(2410), 1,
      aux_sym_from_spec_token1,
  [15759] = 1,
    ACTIONS(2412), 1,
      aux_sym_create_function_token1,
  [15763] = 1,
    ACTIONS(2414), 1,
      aux_sym_grant_token2,
  [15767] = 1,
    ACTIONS(2416), 1,
      sym_object_name,
  [15771] = 1,
    ACTIONS(2418), 1,
      aux_sym_create_function_token2,
  [15775] = 1,
    ACTIONS(2420), 1,
      sym_object_name,
  [15779] = 1,
    ACTIONS(2422), 1,
      aux_sym_select_element_token1,
  [15783] = 1,
    ACTIONS(2424), 1,
      sym_object_name,
  [15787] = 1,
    ACTIONS(2426), 1,
      aux_sym_create_function_token2,
  [15791] = 1,
    ACTIONS(2428), 1,
      sym_object_name,
  [15795] = 1,
    ACTIONS(2430), 1,
      sym__code_block,
  [15799] = 1,
    ACTIONS(2432), 1,
      aux_sym_select_element_token1,
  [15803] = 1,
    ACTIONS(2434), 1,
      sym_object_name,
  [15807] = 1,
    ACTIONS(2436), 1,
      sym_object_name,
  [15811] = 1,
    ACTIONS(2438), 1,
      aux_sym_create_aggregate_token5,
  [15815] = 1,
    ACTIONS(2440), 1,
      aux_sym_create_aggregate_token6,
  [15819] = 1,
    ACTIONS(2442), 1,
      aux_sym_select_element_token1,
  [15823] = 1,
    ACTIONS(2444), 1,
      sym_object_name,
  [15827] = 1,
    ACTIONS(2446), 1,
      aux_sym_create_function_token2,
  [15831] = 1,
    ACTIONS(2448), 1,
      sym_object_name,
  [15835] = 1,
    ACTIONS(2450), 1,
      sym__code_block,
  [15839] = 1,
    ACTIONS(2452), 1,
      aux_sym_select_element_token1,
  [15843] = 1,
    ACTIONS(2454), 1,
      anon_sym_EQ,
  [15847] = 1,
    ACTIONS(2456), 1,
      sym__code_block,
  [15851] = 1,
    ACTIONS(2458), 1,
      aux_sym_create_aggregate_token5,
  [15855] = 1,
    ACTIONS(2460), 1,
      aux_sym_create_aggregate_token6,
  [15859] = 1,
    ACTIONS(2462), 1,
      aux_sym__decimal_literal_token1,
  [15863] = 1,
    ACTIONS(2464), 1,
      aux_sym__decimal_literal_token1,
  [15867] = 1,
    ACTIONS(2466), 1,
      anon_sym_COLON,
  [15871] = 1,
    ACTIONS(2468), 1,
      sym_object_name,
  [15875] = 1,
    ACTIONS(2470), 1,
      sym_object_name,
  [15879] = 1,
    ACTIONS(2472), 1,
      sym_object_name,
  [15883] = 1,
    ACTIONS(2474), 1,
      sym_object_name,
  [15887] = 1,
    ACTIONS(2476), 1,
      aux_sym_create_materialized_view_token1,
  [15891] = 1,
    ACTIONS(2478), 1,
      aux_sym_create_materialized_view_token1,
  [15895] = 1,
    ACTIONS(2480), 1,
      anon_sym_LPAREN,
  [15899] = 1,
    ACTIONS(2482), 1,
      aux_sym_relation_contains_key_token2,
  [15903] = 1,
    ACTIONS(2484), 1,
      sym_object_name,
  [15907] = 1,
    ACTIONS(2486), 1,
      sym_object_name,
  [15911] = 1,
    ACTIONS(2488), 1,
      aux_sym_delete_statement_token3,
  [15915] = 1,
    ACTIONS(2490), 1,
      aux_sym_create_function_token2,
  [15919] = 1,
    ACTIONS(2492), 1,
      sym_object_name,
  [15923] = 1,
    ACTIONS(2494), 1,
      aux_sym_create_function_token1,
  [15927] = 1,
    ACTIONS(2496), 1,
      aux_sym_select_element_token1,
  [15931] = 1,
    ACTIONS(2498), 1,
      sym_object_name,
  [15935] = 1,
    ACTIONS(2500), 1,
      aux_sym_create_function_token2,
  [15939] = 1,
    ACTIONS(2502), 1,
      sym__code_block,
  [15943] = 1,
    ACTIONS(2504), 1,
      aux_sym_select_element_token1,
  [15947] = 1,
    ACTIONS(2506), 1,
      sym_object_name,
  [15951] = 1,
    ACTIONS(2508), 1,
      sym_object_name,
  [15955] = 1,
    ACTIONS(2510), 1,
      sym__code_block,
  [15959] = 1,
    ACTIONS(2512), 1,
      aux_sym_create_aggregate_token4,
  [15963] = 1,
    ACTIONS(2514), 1,
      aux_sym_create_aggregate_token5,
  [15967] = 1,
    ACTIONS(2516), 1,
      sym_object_name,
  [15971] = 1,
    ACTIONS(2518), 1,
      sym_object_name,
  [15975] = 1,
    ACTIONS(2520), 1,
      sym__code_block,
  [15979] = 1,
    ACTIONS(2522), 1,
      aux_sym_select_element_token1,
  [15983] = 1,
    ACTIONS(2524), 1,
      sym_object_name,
  [15987] = 1,
    ACTIONS(2526), 1,
      aux_sym_delete_statement_token3,
  [15991] = 1,
    ACTIONS(2528), 1,
      sym__code_block,
  [15995] = 1,
    ACTIONS(2530), 1,
      sym_object_name,
  [15999] = 1,
    ACTIONS(2532), 1,
      sym_object_name,
  [16003] = 1,
    ACTIONS(2534), 1,
      sym_object_name,
  [16007] = 1,
    ACTIONS(2536), 1,
      sym_object_name,
  [16011] = 1,
    ACTIONS(2538), 1,
      sym_object_name,
  [16015] = 1,
    ACTIONS(2540), 1,
      aux_sym_delete_statement_token3,
  [16019] = 1,
    ACTIONS(2542), 1,
      sym_object_name,
  [16023] = 1,
    ACTIONS(2544), 1,
      sym_object_name,
  [16027] = 1,
    ACTIONS(2546), 1,
      aux_sym_delete_statement_token3,
  [16031] = 1,
    ACTIONS(2548), 1,
      sym_object_name,
  [16035] = 1,
    ACTIONS(2550), 1,
      aux_sym_delete_statement_token3,
  [16039] = 1,
    ACTIONS(2552), 1,
      aux_sym_insert_statement_token3,
  [16043] = 1,
    ACTIONS(2554), 1,
      sym_object_name,
  [16047] = 1,
    ACTIONS(2556), 1,
      aux_sym_delete_statement_token3,
  [16051] = 1,
    ACTIONS(2558), 1,
      aux_sym_relation_contains_key_token2,
  [16055] = 1,
    ACTIONS(2560), 1,
      aux_sym_relation_contains_key_token2,
  [16059] = 1,
    ACTIONS(2562), 1,
      aux_sym_delete_statement_token3,
  [16063] = 1,
    ACTIONS(2564), 1,
      anon_sym_LPAREN,
  [16067] = 1,
    ACTIONS(2566), 1,
      anon_sym_RPAREN,
  [16071] = 1,
    ACTIONS(2568), 1,
      anon_sym_RPAREN,
  [16075] = 1,
    ACTIONS(2570), 1,
      sym_object_name,
  [16079] = 1,
    ACTIONS(2572), 1,
      aux_sym_delete_statement_token3,
  [16083] = 1,
    ACTIONS(2574), 1,
      sym_object_name,
  [16087] = 1,
    ACTIONS(2576), 1,
      aux_sym_create_function_token2,
  [16091] = 1,
    ACTIONS(2578), 1,
      aux_sym_create_keyspace_token1,
  [16095] = 1,
    ACTIONS(2580), 1,
      sym__code_block,
  [16099] = 1,
    ACTIONS(2582), 1,
      aux_sym_select_element_token1,
  [16103] = 1,
    ACTIONS(2584), 1,
      sym_object_name,
  [16107] = 1,
    ACTIONS(2586), 1,
      aux_sym_delete_statement_token3,
  [16111] = 1,
    ACTIONS(2588), 1,
      sym__code_block,
  [16115] = 1,
    ACTIONS(2590), 1,
      aux_sym_select_element_token1,
  [16119] = 1,
    ACTIONS(2592), 1,
      anon_sym_LPAREN,
  [16123] = 1,
    ACTIONS(2594), 1,
      aux_sym_delete_statement_token3,
  [16127] = 1,
    ACTIONS(2596), 1,
      sym_object_name,
  [16131] = 1,
    ACTIONS(2598), 1,
      aux_sym_create_aggregate_token6,
  [16135] = 1,
    ACTIONS(2600), 1,
      aux_sym_delete_statement_token3,
  [16139] = 1,
    ACTIONS(2602), 1,
      anon_sym_LPAREN,
  [16143] = 1,
    ACTIONS(2604), 1,
      sym__code_block,
  [16147] = 1,
    ACTIONS(2606), 1,
      aux_sym_select_element_token1,
  [16151] = 1,
    ACTIONS(2608), 1,
      aux_sym__decimal_literal_token1,
  [16155] = 1,
    ACTIONS(2610), 1,
      aux_sym_create_aggregate_token6,
  [16159] = 1,
    ACTIONS(2612), 1,
      sym_object_name,
  [16163] = 1,
    ACTIONS(2614), 1,
      anon_sym_RBRACK,
  [16167] = 1,
    ACTIONS(2616), 1,
      aux_sym_order_spec_token2,
  [16171] = 1,
    ACTIONS(2618), 1,
      aux_sym_select_statement_token5,
  [16175] = 1,
    ACTIONS(2620), 1,
      anon_sym_RPAREN,
  [16179] = 1,
    ACTIONS(2622), 1,
      sym_object_name,
  [16183] = 1,
    ACTIONS(2624), 1,
      sym_object_name,
  [16187] = 1,
    ACTIONS(2626), 1,
      sym_object_name,
  [16191] = 1,
    ACTIONS(2628), 1,
      aux_sym_materialized_view_options_token1,
  [16195] = 1,
    ACTIONS(2630), 1,
      aux_sym_create_materialized_view_token1,
  [16199] = 1,
    ACTIONS(2632), 1,
      anon_sym_LPAREN,
  [16203] = 1,
    ACTIONS(2634), 1,
      anon_sym_LPAREN,
  [16207] = 1,
    ACTIONS(2636), 1,
      anon_sym_RPAREN,
  [16211] = 1,
    ACTIONS(2638), 1,
      aux_sym_update_token2,
  [16215] = 1,
    ACTIONS(2640), 1,
      sym_object_name,
  [16219] = 1,
    ACTIONS(2642), 1,
      aux_sym_delete_statement_token3,
  [16223] = 1,
    ACTIONS(2644), 1,
      aux_sym_delete_statement_token3,
  [16227] = 1,
    ACTIONS(2646), 1,
      aux_sym_delete_statement_token3,
  [16231] = 1,
    ACTIONS(2648), 1,
      aux_sym_select_element_token1,
  [16235] = 1,
    ACTIONS(2650), 1,
      sym_object_name,
  [16239] = 1,
    ACTIONS(2652), 1,
      aux_sym_create_function_token2,
  [16243] = 1,
    ACTIONS(2654), 1,
      aux_sym_delete_statement_token3,
  [16247] = 1,
    ACTIONS(2656), 1,
      sym__code_block,
  [16251] = 1,
    ACTIONS(2658), 1,
      aux_sym_select_element_token1,
  [16255] = 1,
    ACTIONS(2660), 1,
      aux_sym_delete_statement_token3,
  [16259] = 1,
    ACTIONS(2662), 1,
      sym__code_block,
  [16263] = 1,
    ACTIONS(2664), 1,
      aux_sym_create_aggregate_token5,
  [16267] = 1,
    ACTIONS(2666), 1,
      aux_sym_create_aggregate_token6,
  [16271] = 1,
    ACTIONS(2668), 1,
      aux_sym_insert_statement_token2,
  [16275] = 1,
    ACTIONS(2670), 1,
      aux_sym_delete_statement_token3,
  [16279] = 1,
    ACTIONS(2672), 1,
      sym__code_block,
  [16283] = 1,
    ACTIONS(2674), 1,
      aux_sym_delete_statement_token3,
  [16287] = 1,
    ACTIONS(2676), 1,
      aux_sym_relation_contains_key_token2,
  [16291] = 1,
    ACTIONS(2678), 1,
      aux_sym_delete_statement_token3,
  [16295] = 1,
    ACTIONS(2680), 1,
      aux_sym_insert_statement_token3,
  [16299] = 1,
    ACTIONS(2682), 1,
      aux_sym_insert_statement_token3,
  [16303] = 1,
    ACTIONS(2684), 1,
      anon_sym_RPAREN,
  [16307] = 1,
    ACTIONS(2686), 1,
      aux_sym_using_timestamp_spec_token1,
  [16311] = 1,
    ACTIONS(2688), 1,
      aux_sym_insert_statement_token3,
  [16315] = 1,
    ACTIONS(2690), 1,
      aux_sym_insert_statement_token3,
  [16319] = 1,
    ACTIONS(2692), 1,
      aux_sym_insert_statement_token3,
  [16323] = 1,
    ACTIONS(2694), 1,
      sym__code_block,
  [16327] = 1,
    ACTIONS(2696), 1,
      aux_sym_select_element_token1,
  [16331] = 1,
    ACTIONS(2698), 1,
      sym_object_name,
  [16335] = 1,
    ACTIONS(2700), 1,
      aux_sym_insert_statement_token3,
  [16339] = 1,
    ACTIONS(2702), 1,
      sym__code_block,
  [16343] = 1,
    ACTIONS(2704), 1,
      aux_sym_materialized_view_options_token1,
  [16347] = 1,
    ACTIONS(2706), 1,
      sym_object_name,
  [16351] = 1,
    ACTIONS(2708), 1,
      aux_sym_materialized_view_options_token1,
  [16355] = 1,
    ACTIONS(2710), 1,
      aux_sym_insert_statement_token3,
  [16359] = 1,
    ACTIONS(2712), 1,
      aux_sym_create_index_token3,
  [16363] = 1,
    ACTIONS(2714), 1,
      aux_sym_insert_statement_token3,
  [16367] = 1,
    ACTIONS(2716), 1,
      anon_sym_LPAREN,
  [16371] = 1,
    ACTIONS(2718), 1,
      anon_sym_RPAREN,
  [16375] = 1,
    ACTIONS(2720), 1,
      anon_sym_RPAREN,
  [16379] = 1,
    ACTIONS(2722), 1,
      aux_sym_create_index_token3,
  [16383] = 1,
    ACTIONS(2724), 1,
      anon_sym_LPAREN,
  [16387] = 1,
    ACTIONS(2726), 1,
      aux_sym_insert_statement_token3,
  [16391] = 1,
    ACTIONS(2728), 1,
      sym_object_name,
  [16395] = 1,
    ACTIONS(2730), 1,
      aux_sym_using_timestamp_spec_token2,
  [16399] = 1,
    ACTIONS(2732), 1,
      sym_object_name,
  [16403] = 1,
    ACTIONS(2734), 1,
      sym_object_name,
  [16407] = 1,
    ACTIONS(2736), 1,
      sym__code_block,
  [16411] = 1,
    ACTIONS(2738), 1,
      aux_sym_select_element_token1,
  [16415] = 1,
    ACTIONS(2740), 1,
      anon_sym_STAR,
  [16419] = 1,
    ACTIONS(2742), 1,
      aux_sym_create_aggregate_token6,
  [16423] = 1,
    ACTIONS(2744), 1,
      sym_object_name,
  [16427] = 1,
    ACTIONS(2746), 1,
      aux_sym_insert_statement_token2,
  [16431] = 1,
    ACTIONS(2748), 1,
      sym_object_name,
  [16435] = 1,
    ACTIONS(2750), 1,
      aux_sym_drop_materialized_view_token2,
  [16439] = 1,
    ACTIONS(2752), 1,
      sym_object_name,
  [16443] = 1,
    ACTIONS(2754), 1,
      aux_sym_create_index_token3,
  [16447] = 1,
    ACTIONS(2756), 1,
      aux_sym_create_index_token3,
  [16451] = 1,
    ACTIONS(2758), 1,
      aux_sym_drop_materialized_view_token2,
  [16455] = 1,
    ACTIONS(2760), 1,
      sym__code_block,
  [16459] = 1,
    ACTIONS(2762), 1,
      aux_sym_create_aggregate_token2,
  [16463] = 1,
    ACTIONS(2764), 1,
      anon_sym_RPAREN,
  [16467] = 1,
    ACTIONS(2766), 1,
      aux_sym_drop_materialized_view_token2,
  [16471] = 1,
    ACTIONS(2768), 1,
      aux_sym_begin_batch_token4,
  [16475] = 1,
    ACTIONS(2770), 1,
      ts_builtin_sym_end,
  [16479] = 1,
    ACTIONS(2772), 1,
      aux_sym_begin_batch_token4,
  [16483] = 1,
    ACTIONS(2774), 1,
      sym_object_name,
  [16487] = 1,
    ACTIONS(2776), 1,
      sym_object_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 92,
  [SMALL_STATE(4)] = 184,
  [SMALL_STATE(5)] = 221,
  [SMALL_STATE(6)] = 253,
  [SMALL_STATE(7)] = 285,
  [SMALL_STATE(8)] = 320,
  [SMALL_STATE(9)] = 355,
  [SMALL_STATE(10)] = 390,
  [SMALL_STATE(11)] = 425,
  [SMALL_STATE(12)] = 460,
  [SMALL_STATE(13)] = 495,
  [SMALL_STATE(14)] = 530,
  [SMALL_STATE(15)] = 565,
  [SMALL_STATE(16)] = 600,
  [SMALL_STATE(17)] = 635,
  [SMALL_STATE(18)] = 670,
  [SMALL_STATE(19)] = 705,
  [SMALL_STATE(20)] = 740,
  [SMALL_STATE(21)] = 775,
  [SMALL_STATE(22)] = 810,
  [SMALL_STATE(23)] = 845,
  [SMALL_STATE(24)] = 880,
  [SMALL_STATE(25)] = 915,
  [SMALL_STATE(26)] = 950,
  [SMALL_STATE(27)] = 985,
  [SMALL_STATE(28)] = 1020,
  [SMALL_STATE(29)] = 1055,
  [SMALL_STATE(30)] = 1090,
  [SMALL_STATE(31)] = 1125,
  [SMALL_STATE(32)] = 1160,
  [SMALL_STATE(33)] = 1195,
  [SMALL_STATE(34)] = 1230,
  [SMALL_STATE(35)] = 1265,
  [SMALL_STATE(36)] = 1298,
  [SMALL_STATE(37)] = 1333,
  [SMALL_STATE(38)] = 1368,
  [SMALL_STATE(39)] = 1403,
  [SMALL_STATE(40)] = 1438,
  [SMALL_STATE(41)] = 1473,
  [SMALL_STATE(42)] = 1508,
  [SMALL_STATE(43)] = 1543,
  [SMALL_STATE(44)] = 1578,
  [SMALL_STATE(45)] = 1613,
  [SMALL_STATE(46)] = 1648,
  [SMALL_STATE(47)] = 1683,
  [SMALL_STATE(48)] = 1718,
  [SMALL_STATE(49)] = 1753,
  [SMALL_STATE(50)] = 1788,
  [SMALL_STATE(51)] = 1823,
  [SMALL_STATE(52)] = 1858,
  [SMALL_STATE(53)] = 1893,
  [SMALL_STATE(54)] = 1928,
  [SMALL_STATE(55)] = 1963,
  [SMALL_STATE(56)] = 1998,
  [SMALL_STATE(57)] = 2033,
  [SMALL_STATE(58)] = 2068,
  [SMALL_STATE(59)] = 2103,
  [SMALL_STATE(60)] = 2133,
  [SMALL_STATE(61)] = 2165,
  [SMALL_STATE(62)] = 2197,
  [SMALL_STATE(63)] = 2229,
  [SMALL_STATE(64)] = 2256,
  [SMALL_STATE(65)] = 2283,
  [SMALL_STATE(66)] = 2314,
  [SMALL_STATE(67)] = 2345,
  [SMALL_STATE(68)] = 2376,
  [SMALL_STATE(69)] = 2407,
  [SMALL_STATE(70)] = 2437,
  [SMALL_STATE(71)] = 2467,
  [SMALL_STATE(72)] = 2507,
  [SMALL_STATE(73)] = 2547,
  [SMALL_STATE(74)] = 2573,
  [SMALL_STATE(75)] = 2613,
  [SMALL_STATE(76)] = 2638,
  [SMALL_STATE(77)] = 2663,
  [SMALL_STATE(78)] = 2688,
  [SMALL_STATE(79)] = 2717,
  [SMALL_STATE(80)] = 2742,
  [SMALL_STATE(81)] = 2767,
  [SMALL_STATE(82)] = 2792,
  [SMALL_STATE(83)] = 2817,
  [SMALL_STATE(84)] = 2842,
  [SMALL_STATE(85)] = 2867,
  [SMALL_STATE(86)] = 2892,
  [SMALL_STATE(87)] = 2921,
  [SMALL_STATE(88)] = 2945,
  [SMALL_STATE(89)] = 2969,
  [SMALL_STATE(90)] = 3003,
  [SMALL_STATE(91)] = 3037,
  [SMALL_STATE(92)] = 3071,
  [SMALL_STATE(93)] = 3095,
  [SMALL_STATE(94)] = 3119,
  [SMALL_STATE(95)] = 3142,
  [SMALL_STATE(96)] = 3167,
  [SMALL_STATE(97)] = 3192,
  [SMALL_STATE(98)] = 3217,
  [SMALL_STATE(99)] = 3242,
  [SMALL_STATE(100)] = 3267,
  [SMALL_STATE(101)] = 3305,
  [SMALL_STATE(102)] = 3331,
  [SMALL_STATE(103)] = 3359,
  [SMALL_STATE(104)] = 3387,
  [SMALL_STATE(105)] = 3411,
  [SMALL_STATE(106)] = 3437,
  [SMALL_STATE(107)] = 3459,
  [SMALL_STATE(108)] = 3481,
  [SMALL_STATE(109)] = 3503,
  [SMALL_STATE(110)] = 3531,
  [SMALL_STATE(111)] = 3559,
  [SMALL_STATE(112)] = 3587,
  [SMALL_STATE(113)] = 3609,
  [SMALL_STATE(114)] = 3631,
  [SMALL_STATE(115)] = 3669,
  [SMALL_STATE(116)] = 3697,
  [SMALL_STATE(117)] = 3725,
  [SMALL_STATE(118)] = 3747,
  [SMALL_STATE(119)] = 3769,
  [SMALL_STATE(120)] = 3794,
  [SMALL_STATE(121)] = 3819,
  [SMALL_STATE(122)] = 3844,
  [SMALL_STATE(123)] = 3869,
  [SMALL_STATE(124)] = 3894,
  [SMALL_STATE(125)] = 3919,
  [SMALL_STATE(126)] = 3944,
  [SMALL_STATE(127)] = 3969,
  [SMALL_STATE(128)] = 3994,
  [SMALL_STATE(129)] = 4019,
  [SMALL_STATE(130)] = 4044,
  [SMALL_STATE(131)] = 4069,
  [SMALL_STATE(132)] = 4094,
  [SMALL_STATE(133)] = 4119,
  [SMALL_STATE(134)] = 4144,
  [SMALL_STATE(135)] = 4169,
  [SMALL_STATE(136)] = 4194,
  [SMALL_STATE(137)] = 4219,
  [SMALL_STATE(138)] = 4242,
  [SMALL_STATE(139)] = 4265,
  [SMALL_STATE(140)] = 4286,
  [SMALL_STATE(141)] = 4311,
  [SMALL_STATE(142)] = 4336,
  [SMALL_STATE(143)] = 4361,
  [SMALL_STATE(144)] = 4386,
  [SMALL_STATE(145)] = 4411,
  [SMALL_STATE(146)] = 4436,
  [SMALL_STATE(147)] = 4457,
  [SMALL_STATE(148)] = 4482,
  [SMALL_STATE(149)] = 4507,
  [SMALL_STATE(150)] = 4528,
  [SMALL_STATE(151)] = 4549,
  [SMALL_STATE(152)] = 4574,
  [SMALL_STATE(153)] = 4599,
  [SMALL_STATE(154)] = 4624,
  [SMALL_STATE(155)] = 4645,
  [SMALL_STATE(156)] = 4670,
  [SMALL_STATE(157)] = 4695,
  [SMALL_STATE(158)] = 4720,
  [SMALL_STATE(159)] = 4741,
  [SMALL_STATE(160)] = 4766,
  [SMALL_STATE(161)] = 4791,
  [SMALL_STATE(162)] = 4816,
  [SMALL_STATE(163)] = 4837,
  [SMALL_STATE(164)] = 4862,
  [SMALL_STATE(165)] = 4887,
  [SMALL_STATE(166)] = 4912,
  [SMALL_STATE(167)] = 4937,
  [SMALL_STATE(168)] = 4962,
  [SMALL_STATE(169)] = 4987,
  [SMALL_STATE(170)] = 5008,
  [SMALL_STATE(171)] = 5033,
  [SMALL_STATE(172)] = 5058,
  [SMALL_STATE(173)] = 5083,
  [SMALL_STATE(174)] = 5108,
  [SMALL_STATE(175)] = 5133,
  [SMALL_STATE(176)] = 5158,
  [SMALL_STATE(177)] = 5179,
  [SMALL_STATE(178)] = 5200,
  [SMALL_STATE(179)] = 5225,
  [SMALL_STATE(180)] = 5250,
  [SMALL_STATE(181)] = 5275,
  [SMALL_STATE(182)] = 5300,
  [SMALL_STATE(183)] = 5325,
  [SMALL_STATE(184)] = 5360,
  [SMALL_STATE(185)] = 5385,
  [SMALL_STATE(186)] = 5406,
  [SMALL_STATE(187)] = 5431,
  [SMALL_STATE(188)] = 5452,
  [SMALL_STATE(189)] = 5477,
  [SMALL_STATE(190)] = 5502,
  [SMALL_STATE(191)] = 5527,
  [SMALL_STATE(192)] = 5548,
  [SMALL_STATE(193)] = 5569,
  [SMALL_STATE(194)] = 5594,
  [SMALL_STATE(195)] = 5616,
  [SMALL_STATE(196)] = 5638,
  [SMALL_STATE(197)] = 5658,
  [SMALL_STATE(198)] = 5678,
  [SMALL_STATE(199)] = 5698,
  [SMALL_STATE(200)] = 5720,
  [SMALL_STATE(201)] = 5740,
  [SMALL_STATE(202)] = 5760,
  [SMALL_STATE(203)] = 5780,
  [SMALL_STATE(204)] = 5802,
  [SMALL_STATE(205)] = 5824,
  [SMALL_STATE(206)] = 5844,
  [SMALL_STATE(207)] = 5864,
  [SMALL_STATE(208)] = 5886,
  [SMALL_STATE(209)] = 5908,
  [SMALL_STATE(210)] = 5928,
  [SMALL_STATE(211)] = 5950,
  [SMALL_STATE(212)] = 5970,
  [SMALL_STATE(213)] = 5992,
  [SMALL_STATE(214)] = 6014,
  [SMALL_STATE(215)] = 6036,
  [SMALL_STATE(216)] = 6058,
  [SMALL_STATE(217)] = 6080,
  [SMALL_STATE(218)] = 6102,
  [SMALL_STATE(219)] = 6122,
  [SMALL_STATE(220)] = 6142,
  [SMALL_STATE(221)] = 6164,
  [SMALL_STATE(222)] = 6184,
  [SMALL_STATE(223)] = 6204,
  [SMALL_STATE(224)] = 6224,
  [SMALL_STATE(225)] = 6244,
  [SMALL_STATE(226)] = 6264,
  [SMALL_STATE(227)] = 6284,
  [SMALL_STATE(228)] = 6304,
  [SMALL_STATE(229)] = 6326,
  [SMALL_STATE(230)] = 6346,
  [SMALL_STATE(231)] = 6368,
  [SMALL_STATE(232)] = 6390,
  [SMALL_STATE(233)] = 6412,
  [SMALL_STATE(234)] = 6434,
  [SMALL_STATE(235)] = 6454,
  [SMALL_STATE(236)] = 6476,
  [SMALL_STATE(237)] = 6498,
  [SMALL_STATE(238)] = 6518,
  [SMALL_STATE(239)] = 6538,
  [SMALL_STATE(240)] = 6560,
  [SMALL_STATE(241)] = 6580,
  [SMALL_STATE(242)] = 6600,
  [SMALL_STATE(243)] = 6622,
  [SMALL_STATE(244)] = 6644,
  [SMALL_STATE(245)] = 6666,
  [SMALL_STATE(246)] = 6686,
  [SMALL_STATE(247)] = 6708,
  [SMALL_STATE(248)] = 6728,
  [SMALL_STATE(249)] = 6747,
  [SMALL_STATE(250)] = 6766,
  [SMALL_STATE(251)] = 6785,
  [SMALL_STATE(252)] = 6804,
  [SMALL_STATE(253)] = 6823,
  [SMALL_STATE(254)] = 6842,
  [SMALL_STATE(255)] = 6861,
  [SMALL_STATE(256)] = 6880,
  [SMALL_STATE(257)] = 6899,
  [SMALL_STATE(258)] = 6918,
  [SMALL_STATE(259)] = 6937,
  [SMALL_STATE(260)] = 6956,
  [SMALL_STATE(261)] = 6975,
  [SMALL_STATE(262)] = 6994,
  [SMALL_STATE(263)] = 7013,
  [SMALL_STATE(264)] = 7032,
  [SMALL_STATE(265)] = 7051,
  [SMALL_STATE(266)] = 7070,
  [SMALL_STATE(267)] = 7089,
  [SMALL_STATE(268)] = 7108,
  [SMALL_STATE(269)] = 7127,
  [SMALL_STATE(270)] = 7146,
  [SMALL_STATE(271)] = 7165,
  [SMALL_STATE(272)] = 7184,
  [SMALL_STATE(273)] = 7203,
  [SMALL_STATE(274)] = 7222,
  [SMALL_STATE(275)] = 7241,
  [SMALL_STATE(276)] = 7260,
  [SMALL_STATE(277)] = 7279,
  [SMALL_STATE(278)] = 7298,
  [SMALL_STATE(279)] = 7317,
  [SMALL_STATE(280)] = 7336,
  [SMALL_STATE(281)] = 7355,
  [SMALL_STATE(282)] = 7374,
  [SMALL_STATE(283)] = 7393,
  [SMALL_STATE(284)] = 7412,
  [SMALL_STATE(285)] = 7431,
  [SMALL_STATE(286)] = 7450,
  [SMALL_STATE(287)] = 7469,
  [SMALL_STATE(288)] = 7488,
  [SMALL_STATE(289)] = 7507,
  [SMALL_STATE(290)] = 7526,
  [SMALL_STATE(291)] = 7545,
  [SMALL_STATE(292)] = 7564,
  [SMALL_STATE(293)] = 7583,
  [SMALL_STATE(294)] = 7602,
  [SMALL_STATE(295)] = 7621,
  [SMALL_STATE(296)] = 7640,
  [SMALL_STATE(297)] = 7659,
  [SMALL_STATE(298)] = 7678,
  [SMALL_STATE(299)] = 7697,
  [SMALL_STATE(300)] = 7716,
  [SMALL_STATE(301)] = 7735,
  [SMALL_STATE(302)] = 7754,
  [SMALL_STATE(303)] = 7773,
  [SMALL_STATE(304)] = 7792,
  [SMALL_STATE(305)] = 7811,
  [SMALL_STATE(306)] = 7830,
  [SMALL_STATE(307)] = 7849,
  [SMALL_STATE(308)] = 7868,
  [SMALL_STATE(309)] = 7887,
  [SMALL_STATE(310)] = 7906,
  [SMALL_STATE(311)] = 7925,
  [SMALL_STATE(312)] = 7944,
  [SMALL_STATE(313)] = 7963,
  [SMALL_STATE(314)] = 7982,
  [SMALL_STATE(315)] = 8001,
  [SMALL_STATE(316)] = 8020,
  [SMALL_STATE(317)] = 8039,
  [SMALL_STATE(318)] = 8058,
  [SMALL_STATE(319)] = 8077,
  [SMALL_STATE(320)] = 8098,
  [SMALL_STATE(321)] = 8117,
  [SMALL_STATE(322)] = 8136,
  [SMALL_STATE(323)] = 8155,
  [SMALL_STATE(324)] = 8174,
  [SMALL_STATE(325)] = 8193,
  [SMALL_STATE(326)] = 8212,
  [SMALL_STATE(327)] = 8231,
  [SMALL_STATE(328)] = 8250,
  [SMALL_STATE(329)] = 8269,
  [SMALL_STATE(330)] = 8288,
  [SMALL_STATE(331)] = 8307,
  [SMALL_STATE(332)] = 8326,
  [SMALL_STATE(333)] = 8345,
  [SMALL_STATE(334)] = 8364,
  [SMALL_STATE(335)] = 8383,
  [SMALL_STATE(336)] = 8402,
  [SMALL_STATE(337)] = 8421,
  [SMALL_STATE(338)] = 8440,
  [SMALL_STATE(339)] = 8459,
  [SMALL_STATE(340)] = 8478,
  [SMALL_STATE(341)] = 8497,
  [SMALL_STATE(342)] = 8516,
  [SMALL_STATE(343)] = 8535,
  [SMALL_STATE(344)] = 8554,
  [SMALL_STATE(345)] = 8573,
  [SMALL_STATE(346)] = 8592,
  [SMALL_STATE(347)] = 8611,
  [SMALL_STATE(348)] = 8630,
  [SMALL_STATE(349)] = 8649,
  [SMALL_STATE(350)] = 8668,
  [SMALL_STATE(351)] = 8687,
  [SMALL_STATE(352)] = 8706,
  [SMALL_STATE(353)] = 8725,
  [SMALL_STATE(354)] = 8744,
  [SMALL_STATE(355)] = 8763,
  [SMALL_STATE(356)] = 8782,
  [SMALL_STATE(357)] = 8801,
  [SMALL_STATE(358)] = 8820,
  [SMALL_STATE(359)] = 8839,
  [SMALL_STATE(360)] = 8858,
  [SMALL_STATE(361)] = 8877,
  [SMALL_STATE(362)] = 8896,
  [SMALL_STATE(363)] = 8915,
  [SMALL_STATE(364)] = 8934,
  [SMALL_STATE(365)] = 8953,
  [SMALL_STATE(366)] = 8972,
  [SMALL_STATE(367)] = 8991,
  [SMALL_STATE(368)] = 9010,
  [SMALL_STATE(369)] = 9029,
  [SMALL_STATE(370)] = 9048,
  [SMALL_STATE(371)] = 9067,
  [SMALL_STATE(372)] = 9086,
  [SMALL_STATE(373)] = 9105,
  [SMALL_STATE(374)] = 9124,
  [SMALL_STATE(375)] = 9143,
  [SMALL_STATE(376)] = 9162,
  [SMALL_STATE(377)] = 9181,
  [SMALL_STATE(378)] = 9200,
  [SMALL_STATE(379)] = 9219,
  [SMALL_STATE(380)] = 9238,
  [SMALL_STATE(381)] = 9257,
  [SMALL_STATE(382)] = 9276,
  [SMALL_STATE(383)] = 9295,
  [SMALL_STATE(384)] = 9314,
  [SMALL_STATE(385)] = 9333,
  [SMALL_STATE(386)] = 9352,
  [SMALL_STATE(387)] = 9371,
  [SMALL_STATE(388)] = 9390,
  [SMALL_STATE(389)] = 9409,
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
  [SMALL_STATE(404)] = 9709,
  [SMALL_STATE(405)] = 9737,
  [SMALL_STATE(406)] = 9765,
  [SMALL_STATE(407)] = 9793,
  [SMALL_STATE(408)] = 9821,
  [SMALL_STATE(409)] = 9849,
  [SMALL_STATE(410)] = 9877,
  [SMALL_STATE(411)] = 9905,
  [SMALL_STATE(412)] = 9933,
  [SMALL_STATE(413)] = 9961,
  [SMALL_STATE(414)] = 9992,
  [SMALL_STATE(415)] = 10025,
  [SMALL_STATE(416)] = 10053,
  [SMALL_STATE(417)] = 10078,
  [SMALL_STATE(418)] = 10101,
  [SMALL_STATE(419)] = 10126,
  [SMALL_STATE(420)] = 10148,
  [SMALL_STATE(421)] = 10182,
  [SMALL_STATE(422)] = 10204,
  [SMALL_STATE(423)] = 10224,
  [SMALL_STATE(424)] = 10243,
  [SMALL_STATE(425)] = 10262,
  [SMALL_STATE(426)] = 10281,
  [SMALL_STATE(427)] = 10300,
  [SMALL_STATE(428)] = 10319,
  [SMALL_STATE(429)] = 10338,
  [SMALL_STATE(430)] = 10357,
  [SMALL_STATE(431)] = 10376,
  [SMALL_STATE(432)] = 10393,
  [SMALL_STATE(433)] = 10412,
  [SMALL_STATE(434)] = 10429,
  [SMALL_STATE(435)] = 10452,
  [SMALL_STATE(436)] = 10475,
  [SMALL_STATE(437)] = 10494,
  [SMALL_STATE(438)] = 10525,
  [SMALL_STATE(439)] = 10544,
  [SMALL_STATE(440)] = 10564,
  [SMALL_STATE(441)] = 10585,
  [SMALL_STATE(442)] = 10606,
  [SMALL_STATE(443)] = 10627,
  [SMALL_STATE(444)] = 10648,
  [SMALL_STATE(445)] = 10669,
  [SMALL_STATE(446)] = 10690,
  [SMALL_STATE(447)] = 10711,
  [SMALL_STATE(448)] = 10732,
  [SMALL_STATE(449)] = 10753,
  [SMALL_STATE(450)] = 10771,
  [SMALL_STATE(451)] = 10785,
  [SMALL_STATE(452)] = 10799,
  [SMALL_STATE(453)] = 10819,
  [SMALL_STATE(454)] = 10839,
  [SMALL_STATE(455)] = 10857,
  [SMALL_STATE(456)] = 10879,
  [SMALL_STATE(457)] = 10897,
  [SMALL_STATE(458)] = 10919,
  [SMALL_STATE(459)] = 10941,
  [SMALL_STATE(460)] = 10963,
  [SMALL_STATE(461)] = 10982,
  [SMALL_STATE(462)] = 10999,
  [SMALL_STATE(463)] = 11010,
  [SMALL_STATE(464)] = 11029,
  [SMALL_STATE(465)] = 11045,
  [SMALL_STATE(466)] = 11061,
  [SMALL_STATE(467)] = 11069,
  [SMALL_STATE(468)] = 11077,
  [SMALL_STATE(469)] = 11093,
  [SMALL_STATE(470)] = 11107,
  [SMALL_STATE(471)] = 11115,
  [SMALL_STATE(472)] = 11131,
  [SMALL_STATE(473)] = 11147,
  [SMALL_STATE(474)] = 11155,
  [SMALL_STATE(475)] = 11163,
  [SMALL_STATE(476)] = 11179,
  [SMALL_STATE(477)] = 11195,
  [SMALL_STATE(478)] = 11211,
  [SMALL_STATE(479)] = 11227,
  [SMALL_STATE(480)] = 11239,
  [SMALL_STATE(481)] = 11251,
  [SMALL_STATE(482)] = 11267,
  [SMALL_STATE(483)] = 11281,
  [SMALL_STATE(484)] = 11289,
  [SMALL_STATE(485)] = 11297,
  [SMALL_STATE(486)] = 11313,
  [SMALL_STATE(487)] = 11329,
  [SMALL_STATE(488)] = 11341,
  [SMALL_STATE(489)] = 11353,
  [SMALL_STATE(490)] = 11366,
  [SMALL_STATE(491)] = 11379,
  [SMALL_STATE(492)] = 11392,
  [SMALL_STATE(493)] = 11405,
  [SMALL_STATE(494)] = 11418,
  [SMALL_STATE(495)] = 11431,
  [SMALL_STATE(496)] = 11444,
  [SMALL_STATE(497)] = 11451,
  [SMALL_STATE(498)] = 11464,
  [SMALL_STATE(499)] = 11477,
  [SMALL_STATE(500)] = 11490,
  [SMALL_STATE(501)] = 11503,
  [SMALL_STATE(502)] = 11516,
  [SMALL_STATE(503)] = 11529,
  [SMALL_STATE(504)] = 11542,
  [SMALL_STATE(505)] = 11555,
  [SMALL_STATE(506)] = 11568,
  [SMALL_STATE(507)] = 11581,
  [SMALL_STATE(508)] = 11594,
  [SMALL_STATE(509)] = 11605,
  [SMALL_STATE(510)] = 11618,
  [SMALL_STATE(511)] = 11631,
  [SMALL_STATE(512)] = 11644,
  [SMALL_STATE(513)] = 11657,
  [SMALL_STATE(514)] = 11670,
  [SMALL_STATE(515)] = 11683,
  [SMALL_STATE(516)] = 11696,
  [SMALL_STATE(517)] = 11707,
  [SMALL_STATE(518)] = 11720,
  [SMALL_STATE(519)] = 11733,
  [SMALL_STATE(520)] = 11746,
  [SMALL_STATE(521)] = 11759,
  [SMALL_STATE(522)] = 11772,
  [SMALL_STATE(523)] = 11785,
  [SMALL_STATE(524)] = 11798,
  [SMALL_STATE(525)] = 11811,
  [SMALL_STATE(526)] = 11824,
  [SMALL_STATE(527)] = 11837,
  [SMALL_STATE(528)] = 11850,
  [SMALL_STATE(529)] = 11863,
  [SMALL_STATE(530)] = 11876,
  [SMALL_STATE(531)] = 11887,
  [SMALL_STATE(532)] = 11900,
  [SMALL_STATE(533)] = 11913,
  [SMALL_STATE(534)] = 11926,
  [SMALL_STATE(535)] = 11933,
  [SMALL_STATE(536)] = 11946,
  [SMALL_STATE(537)] = 11959,
  [SMALL_STATE(538)] = 11970,
  [SMALL_STATE(539)] = 11983,
  [SMALL_STATE(540)] = 11992,
  [SMALL_STATE(541)] = 12002,
  [SMALL_STATE(542)] = 12012,
  [SMALL_STATE(543)] = 12022,
  [SMALL_STATE(544)] = 12032,
  [SMALL_STATE(545)] = 12042,
  [SMALL_STATE(546)] = 12052,
  [SMALL_STATE(547)] = 12062,
  [SMALL_STATE(548)] = 12072,
  [SMALL_STATE(549)] = 12082,
  [SMALL_STATE(550)] = 12092,
  [SMALL_STATE(551)] = 12102,
  [SMALL_STATE(552)] = 12112,
  [SMALL_STATE(553)] = 12122,
  [SMALL_STATE(554)] = 12132,
  [SMALL_STATE(555)] = 12142,
  [SMALL_STATE(556)] = 12152,
  [SMALL_STATE(557)] = 12162,
  [SMALL_STATE(558)] = 12172,
  [SMALL_STATE(559)] = 12182,
  [SMALL_STATE(560)] = 12192,
  [SMALL_STATE(561)] = 12202,
  [SMALL_STATE(562)] = 12212,
  [SMALL_STATE(563)] = 12222,
  [SMALL_STATE(564)] = 12232,
  [SMALL_STATE(565)] = 12242,
  [SMALL_STATE(566)] = 12252,
  [SMALL_STATE(567)] = 12262,
  [SMALL_STATE(568)] = 12272,
  [SMALL_STATE(569)] = 12282,
  [SMALL_STATE(570)] = 12292,
  [SMALL_STATE(571)] = 12300,
  [SMALL_STATE(572)] = 12310,
  [SMALL_STATE(573)] = 12320,
  [SMALL_STATE(574)] = 12330,
  [SMALL_STATE(575)] = 12340,
  [SMALL_STATE(576)] = 12350,
  [SMALL_STATE(577)] = 12360,
  [SMALL_STATE(578)] = 12370,
  [SMALL_STATE(579)] = 12380,
  [SMALL_STATE(580)] = 12390,
  [SMALL_STATE(581)] = 12400,
  [SMALL_STATE(582)] = 12410,
  [SMALL_STATE(583)] = 12420,
  [SMALL_STATE(584)] = 12430,
  [SMALL_STATE(585)] = 12440,
  [SMALL_STATE(586)] = 12450,
  [SMALL_STATE(587)] = 12460,
  [SMALL_STATE(588)] = 12466,
  [SMALL_STATE(589)] = 12476,
  [SMALL_STATE(590)] = 12486,
  [SMALL_STATE(591)] = 12496,
  [SMALL_STATE(592)] = 12506,
  [SMALL_STATE(593)] = 12516,
  [SMALL_STATE(594)] = 12524,
  [SMALL_STATE(595)] = 12534,
  [SMALL_STATE(596)] = 12544,
  [SMALL_STATE(597)] = 12554,
  [SMALL_STATE(598)] = 12564,
  [SMALL_STATE(599)] = 12574,
  [SMALL_STATE(600)] = 12584,
  [SMALL_STATE(601)] = 12594,
  [SMALL_STATE(602)] = 12602,
  [SMALL_STATE(603)] = 12612,
  [SMALL_STATE(604)] = 12622,
  [SMALL_STATE(605)] = 12632,
  [SMALL_STATE(606)] = 12642,
  [SMALL_STATE(607)] = 12652,
  [SMALL_STATE(608)] = 12662,
  [SMALL_STATE(609)] = 12672,
  [SMALL_STATE(610)] = 12682,
  [SMALL_STATE(611)] = 12692,
  [SMALL_STATE(612)] = 12702,
  [SMALL_STATE(613)] = 12712,
  [SMALL_STATE(614)] = 12722,
  [SMALL_STATE(615)] = 12732,
  [SMALL_STATE(616)] = 12742,
  [SMALL_STATE(617)] = 12752,
  [SMALL_STATE(618)] = 12762,
  [SMALL_STATE(619)] = 12772,
  [SMALL_STATE(620)] = 12782,
  [SMALL_STATE(621)] = 12792,
  [SMALL_STATE(622)] = 12802,
  [SMALL_STATE(623)] = 12812,
  [SMALL_STATE(624)] = 12820,
  [SMALL_STATE(625)] = 12830,
  [SMALL_STATE(626)] = 12840,
  [SMALL_STATE(627)] = 12850,
  [SMALL_STATE(628)] = 12860,
  [SMALL_STATE(629)] = 12870,
  [SMALL_STATE(630)] = 12880,
  [SMALL_STATE(631)] = 12890,
  [SMALL_STATE(632)] = 12900,
  [SMALL_STATE(633)] = 12910,
  [SMALL_STATE(634)] = 12920,
  [SMALL_STATE(635)] = 12930,
  [SMALL_STATE(636)] = 12940,
  [SMALL_STATE(637)] = 12950,
  [SMALL_STATE(638)] = 12960,
  [SMALL_STATE(639)] = 12970,
  [SMALL_STATE(640)] = 12980,
  [SMALL_STATE(641)] = 12990,
  [SMALL_STATE(642)] = 13000,
  [SMALL_STATE(643)] = 13010,
  [SMALL_STATE(644)] = 13020,
  [SMALL_STATE(645)] = 13030,
  [SMALL_STATE(646)] = 13040,
  [SMALL_STATE(647)] = 13050,
  [SMALL_STATE(648)] = 13060,
  [SMALL_STATE(649)] = 13070,
  [SMALL_STATE(650)] = 13080,
  [SMALL_STATE(651)] = 13090,
  [SMALL_STATE(652)] = 13100,
  [SMALL_STATE(653)] = 13110,
  [SMALL_STATE(654)] = 13120,
  [SMALL_STATE(655)] = 13130,
  [SMALL_STATE(656)] = 13140,
  [SMALL_STATE(657)] = 13150,
  [SMALL_STATE(658)] = 13156,
  [SMALL_STATE(659)] = 13166,
  [SMALL_STATE(660)] = 13176,
  [SMALL_STATE(661)] = 13186,
  [SMALL_STATE(662)] = 13192,
  [SMALL_STATE(663)] = 13202,
  [SMALL_STATE(664)] = 13212,
  [SMALL_STATE(665)] = 13222,
  [SMALL_STATE(666)] = 13232,
  [SMALL_STATE(667)] = 13242,
  [SMALL_STATE(668)] = 13252,
  [SMALL_STATE(669)] = 13262,
  [SMALL_STATE(670)] = 13272,
  [SMALL_STATE(671)] = 13282,
  [SMALL_STATE(672)] = 13292,
  [SMALL_STATE(673)] = 13302,
  [SMALL_STATE(674)] = 13312,
  [SMALL_STATE(675)] = 13322,
  [SMALL_STATE(676)] = 13332,
  [SMALL_STATE(677)] = 13342,
  [SMALL_STATE(678)] = 13352,
  [SMALL_STATE(679)] = 13362,
  [SMALL_STATE(680)] = 13372,
  [SMALL_STATE(681)] = 13382,
  [SMALL_STATE(682)] = 13392,
  [SMALL_STATE(683)] = 13402,
  [SMALL_STATE(684)] = 13412,
  [SMALL_STATE(685)] = 13420,
  [SMALL_STATE(686)] = 13430,
  [SMALL_STATE(687)] = 13440,
  [SMALL_STATE(688)] = 13450,
  [SMALL_STATE(689)] = 13458,
  [SMALL_STATE(690)] = 13468,
  [SMALL_STATE(691)] = 13478,
  [SMALL_STATE(692)] = 13485,
  [SMALL_STATE(693)] = 13492,
  [SMALL_STATE(694)] = 13499,
  [SMALL_STATE(695)] = 13506,
  [SMALL_STATE(696)] = 13513,
  [SMALL_STATE(697)] = 13518,
  [SMALL_STATE(698)] = 13525,
  [SMALL_STATE(699)] = 13532,
  [SMALL_STATE(700)] = 13539,
  [SMALL_STATE(701)] = 13546,
  [SMALL_STATE(702)] = 13553,
  [SMALL_STATE(703)] = 13560,
  [SMALL_STATE(704)] = 13567,
  [SMALL_STATE(705)] = 13574,
  [SMALL_STATE(706)] = 13581,
  [SMALL_STATE(707)] = 13588,
  [SMALL_STATE(708)] = 13595,
  [SMALL_STATE(709)] = 13602,
  [SMALL_STATE(710)] = 13609,
  [SMALL_STATE(711)] = 13614,
  [SMALL_STATE(712)] = 13619,
  [SMALL_STATE(713)] = 13626,
  [SMALL_STATE(714)] = 13631,
  [SMALL_STATE(715)] = 13636,
  [SMALL_STATE(716)] = 13643,
  [SMALL_STATE(717)] = 13648,
  [SMALL_STATE(718)] = 13653,
  [SMALL_STATE(719)] = 13660,
  [SMALL_STATE(720)] = 13665,
  [SMALL_STATE(721)] = 13672,
  [SMALL_STATE(722)] = 13679,
  [SMALL_STATE(723)] = 13686,
  [SMALL_STATE(724)] = 13693,
  [SMALL_STATE(725)] = 13700,
  [SMALL_STATE(726)] = 13707,
  [SMALL_STATE(727)] = 13714,
  [SMALL_STATE(728)] = 13721,
  [SMALL_STATE(729)] = 13728,
  [SMALL_STATE(730)] = 13735,
  [SMALL_STATE(731)] = 13742,
  [SMALL_STATE(732)] = 13749,
  [SMALL_STATE(733)] = 13754,
  [SMALL_STATE(734)] = 13761,
  [SMALL_STATE(735)] = 13768,
  [SMALL_STATE(736)] = 13773,
  [SMALL_STATE(737)] = 13780,
  [SMALL_STATE(738)] = 13787,
  [SMALL_STATE(739)] = 13794,
  [SMALL_STATE(740)] = 13801,
  [SMALL_STATE(741)] = 13806,
  [SMALL_STATE(742)] = 13813,
  [SMALL_STATE(743)] = 13820,
  [SMALL_STATE(744)] = 13827,
  [SMALL_STATE(745)] = 13834,
  [SMALL_STATE(746)] = 13841,
  [SMALL_STATE(747)] = 13848,
  [SMALL_STATE(748)] = 13855,
  [SMALL_STATE(749)] = 13860,
  [SMALL_STATE(750)] = 13865,
  [SMALL_STATE(751)] = 13872,
  [SMALL_STATE(752)] = 13879,
  [SMALL_STATE(753)] = 13884,
  [SMALL_STATE(754)] = 13889,
  [SMALL_STATE(755)] = 13896,
  [SMALL_STATE(756)] = 13903,
  [SMALL_STATE(757)] = 13910,
  [SMALL_STATE(758)] = 13915,
  [SMALL_STATE(759)] = 13922,
  [SMALL_STATE(760)] = 13929,
  [SMALL_STATE(761)] = 13936,
  [SMALL_STATE(762)] = 13943,
  [SMALL_STATE(763)] = 13950,
  [SMALL_STATE(764)] = 13957,
  [SMALL_STATE(765)] = 13964,
  [SMALL_STATE(766)] = 13969,
  [SMALL_STATE(767)] = 13974,
  [SMALL_STATE(768)] = 13981,
  [SMALL_STATE(769)] = 13986,
  [SMALL_STATE(770)] = 13993,
  [SMALL_STATE(771)] = 14000,
  [SMALL_STATE(772)] = 14007,
  [SMALL_STATE(773)] = 14014,
  [SMALL_STATE(774)] = 14021,
  [SMALL_STATE(775)] = 14028,
  [SMALL_STATE(776)] = 14035,
  [SMALL_STATE(777)] = 14042,
  [SMALL_STATE(778)] = 14049,
  [SMALL_STATE(779)] = 14054,
  [SMALL_STATE(780)] = 14061,
  [SMALL_STATE(781)] = 14068,
  [SMALL_STATE(782)] = 14075,
  [SMALL_STATE(783)] = 14082,
  [SMALL_STATE(784)] = 14089,
  [SMALL_STATE(785)] = 14096,
  [SMALL_STATE(786)] = 14101,
  [SMALL_STATE(787)] = 14108,
  [SMALL_STATE(788)] = 14115,
  [SMALL_STATE(789)] = 14122,
  [SMALL_STATE(790)] = 14129,
  [SMALL_STATE(791)] = 14136,
  [SMALL_STATE(792)] = 14143,
  [SMALL_STATE(793)] = 14150,
  [SMALL_STATE(794)] = 14157,
  [SMALL_STATE(795)] = 14164,
  [SMALL_STATE(796)] = 14169,
  [SMALL_STATE(797)] = 14174,
  [SMALL_STATE(798)] = 14179,
  [SMALL_STATE(799)] = 14184,
  [SMALL_STATE(800)] = 14191,
  [SMALL_STATE(801)] = 14198,
  [SMALL_STATE(802)] = 14203,
  [SMALL_STATE(803)] = 14210,
  [SMALL_STATE(804)] = 14217,
  [SMALL_STATE(805)] = 14222,
  [SMALL_STATE(806)] = 14227,
  [SMALL_STATE(807)] = 14234,
  [SMALL_STATE(808)] = 14241,
  [SMALL_STATE(809)] = 14248,
  [SMALL_STATE(810)] = 14255,
  [SMALL_STATE(811)] = 14262,
  [SMALL_STATE(812)] = 14269,
  [SMALL_STATE(813)] = 14276,
  [SMALL_STATE(814)] = 14283,
  [SMALL_STATE(815)] = 14290,
  [SMALL_STATE(816)] = 14297,
  [SMALL_STATE(817)] = 14304,
  [SMALL_STATE(818)] = 14311,
  [SMALL_STATE(819)] = 14318,
  [SMALL_STATE(820)] = 14325,
  [SMALL_STATE(821)] = 14332,
  [SMALL_STATE(822)] = 14337,
  [SMALL_STATE(823)] = 14344,
  [SMALL_STATE(824)] = 14351,
  [SMALL_STATE(825)] = 14358,
  [SMALL_STATE(826)] = 14365,
  [SMALL_STATE(827)] = 14372,
  [SMALL_STATE(828)] = 14377,
  [SMALL_STATE(829)] = 14384,
  [SMALL_STATE(830)] = 14391,
  [SMALL_STATE(831)] = 14398,
  [SMALL_STATE(832)] = 14405,
  [SMALL_STATE(833)] = 14412,
  [SMALL_STATE(834)] = 14419,
  [SMALL_STATE(835)] = 14426,
  [SMALL_STATE(836)] = 14433,
  [SMALL_STATE(837)] = 14438,
  [SMALL_STATE(838)] = 14443,
  [SMALL_STATE(839)] = 14450,
  [SMALL_STATE(840)] = 14455,
  [SMALL_STATE(841)] = 14459,
  [SMALL_STATE(842)] = 14463,
  [SMALL_STATE(843)] = 14467,
  [SMALL_STATE(844)] = 14471,
  [SMALL_STATE(845)] = 14475,
  [SMALL_STATE(846)] = 14479,
  [SMALL_STATE(847)] = 14483,
  [SMALL_STATE(848)] = 14487,
  [SMALL_STATE(849)] = 14491,
  [SMALL_STATE(850)] = 14495,
  [SMALL_STATE(851)] = 14499,
  [SMALL_STATE(852)] = 14503,
  [SMALL_STATE(853)] = 14507,
  [SMALL_STATE(854)] = 14511,
  [SMALL_STATE(855)] = 14515,
  [SMALL_STATE(856)] = 14519,
  [SMALL_STATE(857)] = 14523,
  [SMALL_STATE(858)] = 14527,
  [SMALL_STATE(859)] = 14531,
  [SMALL_STATE(860)] = 14535,
  [SMALL_STATE(861)] = 14539,
  [SMALL_STATE(862)] = 14543,
  [SMALL_STATE(863)] = 14547,
  [SMALL_STATE(864)] = 14551,
  [SMALL_STATE(865)] = 14555,
  [SMALL_STATE(866)] = 14559,
  [SMALL_STATE(867)] = 14563,
  [SMALL_STATE(868)] = 14567,
  [SMALL_STATE(869)] = 14571,
  [SMALL_STATE(870)] = 14575,
  [SMALL_STATE(871)] = 14579,
  [SMALL_STATE(872)] = 14583,
  [SMALL_STATE(873)] = 14587,
  [SMALL_STATE(874)] = 14591,
  [SMALL_STATE(875)] = 14595,
  [SMALL_STATE(876)] = 14599,
  [SMALL_STATE(877)] = 14603,
  [SMALL_STATE(878)] = 14607,
  [SMALL_STATE(879)] = 14611,
  [SMALL_STATE(880)] = 14615,
  [SMALL_STATE(881)] = 14619,
  [SMALL_STATE(882)] = 14623,
  [SMALL_STATE(883)] = 14627,
  [SMALL_STATE(884)] = 14631,
  [SMALL_STATE(885)] = 14635,
  [SMALL_STATE(886)] = 14639,
  [SMALL_STATE(887)] = 14643,
  [SMALL_STATE(888)] = 14647,
  [SMALL_STATE(889)] = 14651,
  [SMALL_STATE(890)] = 14655,
  [SMALL_STATE(891)] = 14659,
  [SMALL_STATE(892)] = 14663,
  [SMALL_STATE(893)] = 14667,
  [SMALL_STATE(894)] = 14671,
  [SMALL_STATE(895)] = 14675,
  [SMALL_STATE(896)] = 14679,
  [SMALL_STATE(897)] = 14683,
  [SMALL_STATE(898)] = 14687,
  [SMALL_STATE(899)] = 14691,
  [SMALL_STATE(900)] = 14695,
  [SMALL_STATE(901)] = 14699,
  [SMALL_STATE(902)] = 14703,
  [SMALL_STATE(903)] = 14707,
  [SMALL_STATE(904)] = 14711,
  [SMALL_STATE(905)] = 14715,
  [SMALL_STATE(906)] = 14719,
  [SMALL_STATE(907)] = 14723,
  [SMALL_STATE(908)] = 14727,
  [SMALL_STATE(909)] = 14731,
  [SMALL_STATE(910)] = 14735,
  [SMALL_STATE(911)] = 14739,
  [SMALL_STATE(912)] = 14743,
  [SMALL_STATE(913)] = 14747,
  [SMALL_STATE(914)] = 14751,
  [SMALL_STATE(915)] = 14755,
  [SMALL_STATE(916)] = 14759,
  [SMALL_STATE(917)] = 14763,
  [SMALL_STATE(918)] = 14767,
  [SMALL_STATE(919)] = 14771,
  [SMALL_STATE(920)] = 14775,
  [SMALL_STATE(921)] = 14779,
  [SMALL_STATE(922)] = 14783,
  [SMALL_STATE(923)] = 14787,
  [SMALL_STATE(924)] = 14791,
  [SMALL_STATE(925)] = 14795,
  [SMALL_STATE(926)] = 14799,
  [SMALL_STATE(927)] = 14803,
  [SMALL_STATE(928)] = 14807,
  [SMALL_STATE(929)] = 14811,
  [SMALL_STATE(930)] = 14815,
  [SMALL_STATE(931)] = 14819,
  [SMALL_STATE(932)] = 14823,
  [SMALL_STATE(933)] = 14827,
  [SMALL_STATE(934)] = 14831,
  [SMALL_STATE(935)] = 14835,
  [SMALL_STATE(936)] = 14839,
  [SMALL_STATE(937)] = 14843,
  [SMALL_STATE(938)] = 14847,
  [SMALL_STATE(939)] = 14851,
  [SMALL_STATE(940)] = 14855,
  [SMALL_STATE(941)] = 14859,
  [SMALL_STATE(942)] = 14863,
  [SMALL_STATE(943)] = 14867,
  [SMALL_STATE(944)] = 14871,
  [SMALL_STATE(945)] = 14875,
  [SMALL_STATE(946)] = 14879,
  [SMALL_STATE(947)] = 14883,
  [SMALL_STATE(948)] = 14887,
  [SMALL_STATE(949)] = 14891,
  [SMALL_STATE(950)] = 14895,
  [SMALL_STATE(951)] = 14899,
  [SMALL_STATE(952)] = 14903,
  [SMALL_STATE(953)] = 14907,
  [SMALL_STATE(954)] = 14911,
  [SMALL_STATE(955)] = 14915,
  [SMALL_STATE(956)] = 14919,
  [SMALL_STATE(957)] = 14923,
  [SMALL_STATE(958)] = 14927,
  [SMALL_STATE(959)] = 14931,
  [SMALL_STATE(960)] = 14935,
  [SMALL_STATE(961)] = 14939,
  [SMALL_STATE(962)] = 14943,
  [SMALL_STATE(963)] = 14947,
  [SMALL_STATE(964)] = 14951,
  [SMALL_STATE(965)] = 14955,
  [SMALL_STATE(966)] = 14959,
  [SMALL_STATE(967)] = 14963,
  [SMALL_STATE(968)] = 14967,
  [SMALL_STATE(969)] = 14971,
  [SMALL_STATE(970)] = 14975,
  [SMALL_STATE(971)] = 14979,
  [SMALL_STATE(972)] = 14983,
  [SMALL_STATE(973)] = 14987,
  [SMALL_STATE(974)] = 14991,
  [SMALL_STATE(975)] = 14995,
  [SMALL_STATE(976)] = 14999,
  [SMALL_STATE(977)] = 15003,
  [SMALL_STATE(978)] = 15007,
  [SMALL_STATE(979)] = 15011,
  [SMALL_STATE(980)] = 15015,
  [SMALL_STATE(981)] = 15019,
  [SMALL_STATE(982)] = 15023,
  [SMALL_STATE(983)] = 15027,
  [SMALL_STATE(984)] = 15031,
  [SMALL_STATE(985)] = 15035,
  [SMALL_STATE(986)] = 15039,
  [SMALL_STATE(987)] = 15043,
  [SMALL_STATE(988)] = 15047,
  [SMALL_STATE(989)] = 15051,
  [SMALL_STATE(990)] = 15055,
  [SMALL_STATE(991)] = 15059,
  [SMALL_STATE(992)] = 15063,
  [SMALL_STATE(993)] = 15067,
  [SMALL_STATE(994)] = 15071,
  [SMALL_STATE(995)] = 15075,
  [SMALL_STATE(996)] = 15079,
  [SMALL_STATE(997)] = 15083,
  [SMALL_STATE(998)] = 15087,
  [SMALL_STATE(999)] = 15091,
  [SMALL_STATE(1000)] = 15095,
  [SMALL_STATE(1001)] = 15099,
  [SMALL_STATE(1002)] = 15103,
  [SMALL_STATE(1003)] = 15107,
  [SMALL_STATE(1004)] = 15111,
  [SMALL_STATE(1005)] = 15115,
  [SMALL_STATE(1006)] = 15119,
  [SMALL_STATE(1007)] = 15123,
  [SMALL_STATE(1008)] = 15127,
  [SMALL_STATE(1009)] = 15131,
  [SMALL_STATE(1010)] = 15135,
  [SMALL_STATE(1011)] = 15139,
  [SMALL_STATE(1012)] = 15143,
  [SMALL_STATE(1013)] = 15147,
  [SMALL_STATE(1014)] = 15151,
  [SMALL_STATE(1015)] = 15155,
  [SMALL_STATE(1016)] = 15159,
  [SMALL_STATE(1017)] = 15163,
  [SMALL_STATE(1018)] = 15167,
  [SMALL_STATE(1019)] = 15171,
  [SMALL_STATE(1020)] = 15175,
  [SMALL_STATE(1021)] = 15179,
  [SMALL_STATE(1022)] = 15183,
  [SMALL_STATE(1023)] = 15187,
  [SMALL_STATE(1024)] = 15191,
  [SMALL_STATE(1025)] = 15195,
  [SMALL_STATE(1026)] = 15199,
  [SMALL_STATE(1027)] = 15203,
  [SMALL_STATE(1028)] = 15207,
  [SMALL_STATE(1029)] = 15211,
  [SMALL_STATE(1030)] = 15215,
  [SMALL_STATE(1031)] = 15219,
  [SMALL_STATE(1032)] = 15223,
  [SMALL_STATE(1033)] = 15227,
  [SMALL_STATE(1034)] = 15231,
  [SMALL_STATE(1035)] = 15235,
  [SMALL_STATE(1036)] = 15239,
  [SMALL_STATE(1037)] = 15243,
  [SMALL_STATE(1038)] = 15247,
  [SMALL_STATE(1039)] = 15251,
  [SMALL_STATE(1040)] = 15255,
  [SMALL_STATE(1041)] = 15259,
  [SMALL_STATE(1042)] = 15263,
  [SMALL_STATE(1043)] = 15267,
  [SMALL_STATE(1044)] = 15271,
  [SMALL_STATE(1045)] = 15275,
  [SMALL_STATE(1046)] = 15279,
  [SMALL_STATE(1047)] = 15283,
  [SMALL_STATE(1048)] = 15287,
  [SMALL_STATE(1049)] = 15291,
  [SMALL_STATE(1050)] = 15295,
  [SMALL_STATE(1051)] = 15299,
  [SMALL_STATE(1052)] = 15303,
  [SMALL_STATE(1053)] = 15307,
  [SMALL_STATE(1054)] = 15311,
  [SMALL_STATE(1055)] = 15315,
  [SMALL_STATE(1056)] = 15319,
  [SMALL_STATE(1057)] = 15323,
  [SMALL_STATE(1058)] = 15327,
  [SMALL_STATE(1059)] = 15331,
  [SMALL_STATE(1060)] = 15335,
  [SMALL_STATE(1061)] = 15339,
  [SMALL_STATE(1062)] = 15343,
  [SMALL_STATE(1063)] = 15347,
  [SMALL_STATE(1064)] = 15351,
  [SMALL_STATE(1065)] = 15355,
  [SMALL_STATE(1066)] = 15359,
  [SMALL_STATE(1067)] = 15363,
  [SMALL_STATE(1068)] = 15367,
  [SMALL_STATE(1069)] = 15371,
  [SMALL_STATE(1070)] = 15375,
  [SMALL_STATE(1071)] = 15379,
  [SMALL_STATE(1072)] = 15383,
  [SMALL_STATE(1073)] = 15387,
  [SMALL_STATE(1074)] = 15391,
  [SMALL_STATE(1075)] = 15395,
  [SMALL_STATE(1076)] = 15399,
  [SMALL_STATE(1077)] = 15403,
  [SMALL_STATE(1078)] = 15407,
  [SMALL_STATE(1079)] = 15411,
  [SMALL_STATE(1080)] = 15415,
  [SMALL_STATE(1081)] = 15419,
  [SMALL_STATE(1082)] = 15423,
  [SMALL_STATE(1083)] = 15427,
  [SMALL_STATE(1084)] = 15431,
  [SMALL_STATE(1085)] = 15435,
  [SMALL_STATE(1086)] = 15439,
  [SMALL_STATE(1087)] = 15443,
  [SMALL_STATE(1088)] = 15447,
  [SMALL_STATE(1089)] = 15451,
  [SMALL_STATE(1090)] = 15455,
  [SMALL_STATE(1091)] = 15459,
  [SMALL_STATE(1092)] = 15463,
  [SMALL_STATE(1093)] = 15467,
  [SMALL_STATE(1094)] = 15471,
  [SMALL_STATE(1095)] = 15475,
  [SMALL_STATE(1096)] = 15479,
  [SMALL_STATE(1097)] = 15483,
  [SMALL_STATE(1098)] = 15487,
  [SMALL_STATE(1099)] = 15491,
  [SMALL_STATE(1100)] = 15495,
  [SMALL_STATE(1101)] = 15499,
  [SMALL_STATE(1102)] = 15503,
  [SMALL_STATE(1103)] = 15507,
  [SMALL_STATE(1104)] = 15511,
  [SMALL_STATE(1105)] = 15515,
  [SMALL_STATE(1106)] = 15519,
  [SMALL_STATE(1107)] = 15523,
  [SMALL_STATE(1108)] = 15527,
  [SMALL_STATE(1109)] = 15531,
  [SMALL_STATE(1110)] = 15535,
  [SMALL_STATE(1111)] = 15539,
  [SMALL_STATE(1112)] = 15543,
  [SMALL_STATE(1113)] = 15547,
  [SMALL_STATE(1114)] = 15551,
  [SMALL_STATE(1115)] = 15555,
  [SMALL_STATE(1116)] = 15559,
  [SMALL_STATE(1117)] = 15563,
  [SMALL_STATE(1118)] = 15567,
  [SMALL_STATE(1119)] = 15571,
  [SMALL_STATE(1120)] = 15575,
  [SMALL_STATE(1121)] = 15579,
  [SMALL_STATE(1122)] = 15583,
  [SMALL_STATE(1123)] = 15587,
  [SMALL_STATE(1124)] = 15591,
  [SMALL_STATE(1125)] = 15595,
  [SMALL_STATE(1126)] = 15599,
  [SMALL_STATE(1127)] = 15603,
  [SMALL_STATE(1128)] = 15607,
  [SMALL_STATE(1129)] = 15611,
  [SMALL_STATE(1130)] = 15615,
  [SMALL_STATE(1131)] = 15619,
  [SMALL_STATE(1132)] = 15623,
  [SMALL_STATE(1133)] = 15627,
  [SMALL_STATE(1134)] = 15631,
  [SMALL_STATE(1135)] = 15635,
  [SMALL_STATE(1136)] = 15639,
  [SMALL_STATE(1137)] = 15643,
  [SMALL_STATE(1138)] = 15647,
  [SMALL_STATE(1139)] = 15651,
  [SMALL_STATE(1140)] = 15655,
  [SMALL_STATE(1141)] = 15659,
  [SMALL_STATE(1142)] = 15663,
  [SMALL_STATE(1143)] = 15667,
  [SMALL_STATE(1144)] = 15671,
  [SMALL_STATE(1145)] = 15675,
  [SMALL_STATE(1146)] = 15679,
  [SMALL_STATE(1147)] = 15683,
  [SMALL_STATE(1148)] = 15687,
  [SMALL_STATE(1149)] = 15691,
  [SMALL_STATE(1150)] = 15695,
  [SMALL_STATE(1151)] = 15699,
  [SMALL_STATE(1152)] = 15703,
  [SMALL_STATE(1153)] = 15707,
  [SMALL_STATE(1154)] = 15711,
  [SMALL_STATE(1155)] = 15715,
  [SMALL_STATE(1156)] = 15719,
  [SMALL_STATE(1157)] = 15723,
  [SMALL_STATE(1158)] = 15727,
  [SMALL_STATE(1159)] = 15731,
  [SMALL_STATE(1160)] = 15735,
  [SMALL_STATE(1161)] = 15739,
  [SMALL_STATE(1162)] = 15743,
  [SMALL_STATE(1163)] = 15747,
  [SMALL_STATE(1164)] = 15751,
  [SMALL_STATE(1165)] = 15755,
  [SMALL_STATE(1166)] = 15759,
  [SMALL_STATE(1167)] = 15763,
  [SMALL_STATE(1168)] = 15767,
  [SMALL_STATE(1169)] = 15771,
  [SMALL_STATE(1170)] = 15775,
  [SMALL_STATE(1171)] = 15779,
  [SMALL_STATE(1172)] = 15783,
  [SMALL_STATE(1173)] = 15787,
  [SMALL_STATE(1174)] = 15791,
  [SMALL_STATE(1175)] = 15795,
  [SMALL_STATE(1176)] = 15799,
  [SMALL_STATE(1177)] = 15803,
  [SMALL_STATE(1178)] = 15807,
  [SMALL_STATE(1179)] = 15811,
  [SMALL_STATE(1180)] = 15815,
  [SMALL_STATE(1181)] = 15819,
  [SMALL_STATE(1182)] = 15823,
  [SMALL_STATE(1183)] = 15827,
  [SMALL_STATE(1184)] = 15831,
  [SMALL_STATE(1185)] = 15835,
  [SMALL_STATE(1186)] = 15839,
  [SMALL_STATE(1187)] = 15843,
  [SMALL_STATE(1188)] = 15847,
  [SMALL_STATE(1189)] = 15851,
  [SMALL_STATE(1190)] = 15855,
  [SMALL_STATE(1191)] = 15859,
  [SMALL_STATE(1192)] = 15863,
  [SMALL_STATE(1193)] = 15867,
  [SMALL_STATE(1194)] = 15871,
  [SMALL_STATE(1195)] = 15875,
  [SMALL_STATE(1196)] = 15879,
  [SMALL_STATE(1197)] = 15883,
  [SMALL_STATE(1198)] = 15887,
  [SMALL_STATE(1199)] = 15891,
  [SMALL_STATE(1200)] = 15895,
  [SMALL_STATE(1201)] = 15899,
  [SMALL_STATE(1202)] = 15903,
  [SMALL_STATE(1203)] = 15907,
  [SMALL_STATE(1204)] = 15911,
  [SMALL_STATE(1205)] = 15915,
  [SMALL_STATE(1206)] = 15919,
  [SMALL_STATE(1207)] = 15923,
  [SMALL_STATE(1208)] = 15927,
  [SMALL_STATE(1209)] = 15931,
  [SMALL_STATE(1210)] = 15935,
  [SMALL_STATE(1211)] = 15939,
  [SMALL_STATE(1212)] = 15943,
  [SMALL_STATE(1213)] = 15947,
  [SMALL_STATE(1214)] = 15951,
  [SMALL_STATE(1215)] = 15955,
  [SMALL_STATE(1216)] = 15959,
  [SMALL_STATE(1217)] = 15963,
  [SMALL_STATE(1218)] = 15967,
  [SMALL_STATE(1219)] = 15971,
  [SMALL_STATE(1220)] = 15975,
  [SMALL_STATE(1221)] = 15979,
  [SMALL_STATE(1222)] = 15983,
  [SMALL_STATE(1223)] = 15987,
  [SMALL_STATE(1224)] = 15991,
  [SMALL_STATE(1225)] = 15995,
  [SMALL_STATE(1226)] = 15999,
  [SMALL_STATE(1227)] = 16003,
  [SMALL_STATE(1228)] = 16007,
  [SMALL_STATE(1229)] = 16011,
  [SMALL_STATE(1230)] = 16015,
  [SMALL_STATE(1231)] = 16019,
  [SMALL_STATE(1232)] = 16023,
  [SMALL_STATE(1233)] = 16027,
  [SMALL_STATE(1234)] = 16031,
  [SMALL_STATE(1235)] = 16035,
  [SMALL_STATE(1236)] = 16039,
  [SMALL_STATE(1237)] = 16043,
  [SMALL_STATE(1238)] = 16047,
  [SMALL_STATE(1239)] = 16051,
  [SMALL_STATE(1240)] = 16055,
  [SMALL_STATE(1241)] = 16059,
  [SMALL_STATE(1242)] = 16063,
  [SMALL_STATE(1243)] = 16067,
  [SMALL_STATE(1244)] = 16071,
  [SMALL_STATE(1245)] = 16075,
  [SMALL_STATE(1246)] = 16079,
  [SMALL_STATE(1247)] = 16083,
  [SMALL_STATE(1248)] = 16087,
  [SMALL_STATE(1249)] = 16091,
  [SMALL_STATE(1250)] = 16095,
  [SMALL_STATE(1251)] = 16099,
  [SMALL_STATE(1252)] = 16103,
  [SMALL_STATE(1253)] = 16107,
  [SMALL_STATE(1254)] = 16111,
  [SMALL_STATE(1255)] = 16115,
  [SMALL_STATE(1256)] = 16119,
  [SMALL_STATE(1257)] = 16123,
  [SMALL_STATE(1258)] = 16127,
  [SMALL_STATE(1259)] = 16131,
  [SMALL_STATE(1260)] = 16135,
  [SMALL_STATE(1261)] = 16139,
  [SMALL_STATE(1262)] = 16143,
  [SMALL_STATE(1263)] = 16147,
  [SMALL_STATE(1264)] = 16151,
  [SMALL_STATE(1265)] = 16155,
  [SMALL_STATE(1266)] = 16159,
  [SMALL_STATE(1267)] = 16163,
  [SMALL_STATE(1268)] = 16167,
  [SMALL_STATE(1269)] = 16171,
  [SMALL_STATE(1270)] = 16175,
  [SMALL_STATE(1271)] = 16179,
  [SMALL_STATE(1272)] = 16183,
  [SMALL_STATE(1273)] = 16187,
  [SMALL_STATE(1274)] = 16191,
  [SMALL_STATE(1275)] = 16195,
  [SMALL_STATE(1276)] = 16199,
  [SMALL_STATE(1277)] = 16203,
  [SMALL_STATE(1278)] = 16207,
  [SMALL_STATE(1279)] = 16211,
  [SMALL_STATE(1280)] = 16215,
  [SMALL_STATE(1281)] = 16219,
  [SMALL_STATE(1282)] = 16223,
  [SMALL_STATE(1283)] = 16227,
  [SMALL_STATE(1284)] = 16231,
  [SMALL_STATE(1285)] = 16235,
  [SMALL_STATE(1286)] = 16239,
  [SMALL_STATE(1287)] = 16243,
  [SMALL_STATE(1288)] = 16247,
  [SMALL_STATE(1289)] = 16251,
  [SMALL_STATE(1290)] = 16255,
  [SMALL_STATE(1291)] = 16259,
  [SMALL_STATE(1292)] = 16263,
  [SMALL_STATE(1293)] = 16267,
  [SMALL_STATE(1294)] = 16271,
  [SMALL_STATE(1295)] = 16275,
  [SMALL_STATE(1296)] = 16279,
  [SMALL_STATE(1297)] = 16283,
  [SMALL_STATE(1298)] = 16287,
  [SMALL_STATE(1299)] = 16291,
  [SMALL_STATE(1300)] = 16295,
  [SMALL_STATE(1301)] = 16299,
  [SMALL_STATE(1302)] = 16303,
  [SMALL_STATE(1303)] = 16307,
  [SMALL_STATE(1304)] = 16311,
  [SMALL_STATE(1305)] = 16315,
  [SMALL_STATE(1306)] = 16319,
  [SMALL_STATE(1307)] = 16323,
  [SMALL_STATE(1308)] = 16327,
  [SMALL_STATE(1309)] = 16331,
  [SMALL_STATE(1310)] = 16335,
  [SMALL_STATE(1311)] = 16339,
  [SMALL_STATE(1312)] = 16343,
  [SMALL_STATE(1313)] = 16347,
  [SMALL_STATE(1314)] = 16351,
  [SMALL_STATE(1315)] = 16355,
  [SMALL_STATE(1316)] = 16359,
  [SMALL_STATE(1317)] = 16363,
  [SMALL_STATE(1318)] = 16367,
  [SMALL_STATE(1319)] = 16371,
  [SMALL_STATE(1320)] = 16375,
  [SMALL_STATE(1321)] = 16379,
  [SMALL_STATE(1322)] = 16383,
  [SMALL_STATE(1323)] = 16387,
  [SMALL_STATE(1324)] = 16391,
  [SMALL_STATE(1325)] = 16395,
  [SMALL_STATE(1326)] = 16399,
  [SMALL_STATE(1327)] = 16403,
  [SMALL_STATE(1328)] = 16407,
  [SMALL_STATE(1329)] = 16411,
  [SMALL_STATE(1330)] = 16415,
  [SMALL_STATE(1331)] = 16419,
  [SMALL_STATE(1332)] = 16423,
  [SMALL_STATE(1333)] = 16427,
  [SMALL_STATE(1334)] = 16431,
  [SMALL_STATE(1335)] = 16435,
  [SMALL_STATE(1336)] = 16439,
  [SMALL_STATE(1337)] = 16443,
  [SMALL_STATE(1338)] = 16447,
  [SMALL_STATE(1339)] = 16451,
  [SMALL_STATE(1340)] = 16455,
  [SMALL_STATE(1341)] = 16459,
  [SMALL_STATE(1342)] = 16463,
  [SMALL_STATE(1343)] = 16467,
  [SMALL_STATE(1344)] = 16471,
  [SMALL_STATE(1345)] = 16475,
  [SMALL_STATE(1346)] = 16479,
  [SMALL_STATE(1347)] = 16483,
  [SMALL_STATE(1348)] = 16487,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1294),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1348),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1347),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1346),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(457),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(486),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(684),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1294),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(680),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(420),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(437),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1348),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1347),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(433),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(431),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(460),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(422),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1346),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 20),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 20),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1324),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 17),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(824),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 47),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 47),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 47),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(461),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1268),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1269),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9, .production_id = 47),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8, .production_id = 47),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 40),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(964),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 39),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(961),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 29),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 17),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 41),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 60),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 61),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 39),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_add_repeat1, 2),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_add_repeat1, 2), SHIFT_REPEAT(788),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 124),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 9),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 26),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_add_repeat1, 2),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_add_repeat1, 2), SHIFT_REPEAT(898),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6, .production_id = 43),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 39),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 60),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 38),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 23),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2, .production_id = 44),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(454),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 105),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 26),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 104),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 120),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 109),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 119),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1272),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3, .production_id = 6),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 39),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1271),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 60),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3, .production_id = 47),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4, .production_id = 18),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_options_repeat1, 2),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_options_repeat1, 2), SHIFT_REPEAT(588),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 60),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 9),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(775),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 26),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3, .production_id = 6),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4, .production_id = 47),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15, .production_id = 92),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(782),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(478),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 9),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 115),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 25),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4, .production_id = 18),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 8),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 79),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 63),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3, .production_id = 9),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1228),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 10),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 66),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 65),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3, .production_id = 12),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1178),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3, .production_id = 13),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1206),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 36),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5, .production_id = 35),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 33),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 30),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 27),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 7),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3, .production_id = 14),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 45),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 50),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 49),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 79),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 48),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 73),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compact_storage, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 7),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4, .production_id = 19),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_add_repeat1, 3, .production_id = 47),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 4),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 56),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3, .production_id = 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 57),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2, .production_id = 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 46),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2, .production_id = 21),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 62),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 102),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 96),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 23, .production_id = 124),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 95),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 94),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 11, .production_id = 81),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 93),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 101),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 91),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 90),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 7, .production_id = 52),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 89),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 7, .production_id = 53),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 4),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 75),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 21, .production_id = 123),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 7, .production_id = 54),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 105),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4, .production_id = 6),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 7, .production_id = 55),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 47),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 88),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 43),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4, .production_id = 14),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 4),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 19),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 60),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 116),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 21, .production_id = 122),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 110),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 87),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 104),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 117),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 118),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5, .production_id = 19),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6, .production_id = 37),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 86),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 18),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 26),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 120),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 58),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 7, .production_id = 59),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 74),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 100),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 9),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 78),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 111),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 43),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 43),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 13, .production_id = 84),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 71),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 115),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 5),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 39),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 60),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7, .production_id = 43),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 11, .production_id = 78),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4, .production_id = 6),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 85),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 108),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 46),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 26),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 16, .production_id = 92),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9, .production_id = 71),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 20, .production_id = 121),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 9),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8, .production_id = 51),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 3),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 97),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 98),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 26),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 28),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5, .production_id = 29),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 109),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 31),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5, .production_id = 32),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 114),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 34),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 12, .production_id = 84),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 8, .production_id = 64),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 113),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 99),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 37),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3, .production_id = 80),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18, .production_id = 112),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3, .production_id = 6),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 106),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 83),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3, .production_id = 11),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7, .production_id = 51),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 119),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 39),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8, .production_id = 46),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 107),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1270),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1193),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1036),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1343),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1341),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1146),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1339),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1053),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1050),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1048),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1025),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1024),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1022),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1021),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1157),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1155),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(767),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1266),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1184),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1093),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1174),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1170),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1336),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1335),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1334),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1, .production_id = 1),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1330),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1327),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1261),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1325),
  [1095] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2), SHIFT_REPEAT(423),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1321),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1317),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1321),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1142),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(934),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 1),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1280),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 3),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [1170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(1037),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1154),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 1),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 3, .production_id = 23),
  [1199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 1),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(833),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1323),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1315),
  [1237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1314),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(642),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2), SHIFT_REPEAT(771),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2), SHIFT_REPEAT(911),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1304),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(706),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1300),
  [1288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1197),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(776),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1297),
  [1309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2, .production_id = 47),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [1329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(60),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(438),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1, .production_id = 1),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(744),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(834),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1281),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1326),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(183),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(826),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(416),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1267),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1333),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1332),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(721),
  [1477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1111),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(632),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(802),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1344),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(730),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(417),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1192),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1191),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1202),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1196),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1232),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1231),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1234),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 7),
  [1562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1236),
  [1564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1237),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1245),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 15),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 103),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 16),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1193),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 76),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1314),
  [1616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1077),
  [1618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [1620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1076),
  [1622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3, .production_id = 77),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 3, .production_id = 72),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 1),
  [1640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1282),
  [1642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1204),
  [1650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1283),
  [1654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [1656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3, .production_id = 77),
  [1658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1287),
  [1660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1290),
  [1664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [1668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1223),
  [1670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1295),
  [1674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [1676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1057),
  [1678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1142),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1299),
  [1686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [1688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1301),
  [1690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [1692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1305),
  [1694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(708),
  [1696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4, .production_id = 22),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1306),
  [1710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [1712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1310),
  [1714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5, .production_id = 67),
  [1724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [1748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 42),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 70),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 68),
  [1772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 69),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [1798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [1868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_column, 4, .production_id = 10),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [1930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [2118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [2124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 1),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [2172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 82),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [2176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1098),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1105),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1106),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1116),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1136),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1138),
  [2262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 24),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1140),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1145),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1147),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1152),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1158),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1160),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1161),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1168),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1171),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1175),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1176),
  [2350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1180),
  [2358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1181),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1182),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1185),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1188),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1190),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1201),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1208),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1209),
  [2420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [2422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1211),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1212),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1213),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [2432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1215),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1216),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1218),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1221),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1222),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1224),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [2458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [2460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1239),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1240),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1075),
  [2490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1247),
  [2492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [2496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1250),
  [2498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [2500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1252),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [2504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1254),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1255),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1258),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1259),
  [2518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [2520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [2522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1262),
  [2524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1263),
  [2526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1225),
  [2528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [2532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1265),
  [2534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [2536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [2538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [2540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [2542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [2546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1082),
  [2548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [2550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [2552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1094),
  [2554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1104),
  [2556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [2558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1276),
  [2560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1277),
  [2562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1120),
  [2564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [2566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [2568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [2570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [2572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1122),
  [2574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1284),
  [2576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1285),
  [2578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [2580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [2582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1288),
  [2584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1289),
  [2586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [2588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [2590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1291),
  [2592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [2594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [2596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1293),
  [2598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [2600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [2602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [2604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [2606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1296),
  [2608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [2610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [2612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [2614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [2616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1149),
  [2618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [2620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [2624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [2628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1162),
  [2630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1298),
  [2632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [2634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [2636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [2638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [2640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [2644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [2646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1203),
  [2648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1307),
  [2650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1308),
  [2652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1309),
  [2654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1214),
  [2656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [2658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1311),
  [2660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1219),
  [2662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [2664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1313),
  [2666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [2668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [2670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1227),
  [2672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [2674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [2676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1318),
  [2678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1229),
  [2680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1230),
  [2682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1233),
  [2684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [2686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1235),
  [2690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1238),
  [2692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1241),
  [2694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [2696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1328),
  [2698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1329),
  [2700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1246),
  [2702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [2704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1249),
  [2706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1331),
  [2708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, .production_id = 5),
  [2710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1253),
  [2712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [2714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1257),
  [2716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [2718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [2720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [2722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 4),
  [2724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [2726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1260),
  [2728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [2730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1264),
  [2732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [2734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [2736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [2738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1340),
  [2740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [2742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [2744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [2746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [2748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [2750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1273),
  [2752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [2754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [2756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [2758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [2760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [2762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [2764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [2766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [2768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [2770] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [2774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [2776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
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
