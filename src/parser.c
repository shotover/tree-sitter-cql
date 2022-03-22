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
#define STATE_COUNT 1350
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
  sym_alter_table_drop_column_list = 269,
  sym_alter_table_drop_compact_storage = 270,
  sym_alter_table_rename = 271,
  sym_alter_table_with = 272,
  sym_alter_type = 273,
  sym_alter_type_operation = 274,
  sym_alter_type_alter_type = 275,
  sym_alter_type_add = 276,
  sym_alter_type_rename = 277,
  sym_alter_type_rename_list = 278,
  sym_alter_type_rename_item = 279,
  sym_alter_user = 280,
  sym_apply_batch = 281,
  aux_sym_source_file_repeat1 = 282,
  aux_sym_select_elements_repeat1 = 283,
  aux_sym_function_args_repeat1 = 284,
  aux_sym_relation_elements_repeat1 = 285,
  aux_sym_relation_element_repeat1 = 286,
  aux_sym_relation_element_repeat2 = 287,
  aux_sym_delete_column_list_repeat1 = 288,
  aux_sym_if_condition_list_repeat1 = 289,
  aux_sym_expression_list_repeat1 = 290,
  aux_sym_assignment_map_repeat1 = 291,
  aux_sym_assignment_set_repeat1 = 292,
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
  aux_sym_table_options_repeat1 = 304,
  aux_sym_create_type_repeat1 = 305,
  aux_sym_replication_list_repeat1 = 306,
  aux_sym_alter_table_column_definition_repeat1 = 307,
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
  [aux_sym_alter_table_column_definition_repeat1] = "alter_table_column_definition_repeat1",
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
  [aux_sym_alter_table_column_definition_repeat1] = aux_sym_alter_table_column_definition_repeat1,
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
  [1349] = 1349,
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
      if (lookahead == '+') ADVANCE(650);
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '-') ADVANCE(651);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == ';') ADVANCE(556);
      if (lookahead == '<') ADVANCE(596);
      if (lookahead == '=') ADVANCE(599);
      if (lookahead == '>') ADVANCE(600);
      if (lookahead == 'X') ADVANCE(29);
      if (lookahead == '[') ADVANCE(620);
      if (lookahead == ']') ADVANCE(621);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == '}') ADVANCE(631);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(43);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(44);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(376);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(193);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(422);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(116);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(38);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(336);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(195);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(152);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(312);
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
      if (lookahead == '-') ADVANCE(514);
      if (lookahead == '0') ADVANCE(578);
      if (lookahead == 'X') ADVANCE(757);
      if (lookahead == '[') ADVANCE(620);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(762);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(924);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(882);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(939);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(552);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(591);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '*') ADVANCE(565);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(819);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(896);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '*') ADVANCE(565);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(896);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '-') ADVANCE(516);
      if (lookahead == '[') ADVANCE(620);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(887);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(807);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(866);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(759);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(831);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(848);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(811);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(760);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(794);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(785);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(918);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(761);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(837);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(921);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(801);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(872);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(772);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(834);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(871);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(835);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(927);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(859);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(925);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(796);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(883);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(803);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(886);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(772);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(756);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(803);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(853);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(803);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(853);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
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
      if (lookahead == '_') ADVANCE(500);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(483);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(293);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(309);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(298);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(654);
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
          lookahead == 'a') ADVANCE(272);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(388);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(192);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(342);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(354);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(608);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(287);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(348);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(338);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(270);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(532);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(421);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(457);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(423);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(491);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(345);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(389);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(390);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(493);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(192);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(72);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(386);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(343);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
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
          lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
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
          lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(468);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(460);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(699);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(150);
      END_STATE();
    case 77:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(282);
      END_STATE();
    case 78:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(284);
      END_STATE();
    case 79:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(285);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(610);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(686);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(688);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(609);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(222);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(490);
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
          lookahead == 'c') ADVANCE(447);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(449);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(451);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(479);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(400);
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
          lookahead == 'c') ADVANCE(471);
      END_STATE();
    case 99:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 100:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(474);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(204);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(367);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(568);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(436);
      END_STATE();
    case 102:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(753);
      END_STATE();
    case 103:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(595);
      END_STATE();
    case 104:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(737);
      END_STATE();
    case 105:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(739);
      END_STATE();
    case 106:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(617);
      END_STATE();
    case 107:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(689);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(743);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(727);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(618);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(678);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 115:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(652);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(611);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(754);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(749);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(532);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(532);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(477);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(355);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(370);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
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
          lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
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
          lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(426);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 193:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(612);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(602);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(692);
      END_STATE();
    case 194:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(612);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(603);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(692);
      END_STATE();
    case 195:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(675);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(638);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(458);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(684);
      END_STATE();
    case 196:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(675);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 197:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(506);
      END_STATE();
    case 198:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(487);
      END_STATE();
    case 199:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(204);
      END_STATE();
    case 200:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(210);
      END_STATE();
    case 201:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(622);
      END_STATE();
    case 202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(563);
      END_STATE();
    case 203:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(750);
      END_STATE();
    case 204:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(401);
      END_STATE();
    case 205:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(232);
      END_STATE();
    case 206:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 207:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(246);
      END_STATE();
    case 208:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(211);
      END_STATE();
    case 209:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(492);
      END_STATE();
    case 210:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(165);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 212:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 213:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 214:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 215:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(213);
      END_STATE();
    case 216:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(693);
      END_STATE();
    case 218:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(619);
      END_STATE();
    case 219:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(183);
      END_STATE();
    case 220:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(183);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(453);
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
          lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(512);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(208);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(455);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(480);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(339);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(109);
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
          lookahead == 'i') ADVANCE(444);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(513);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 242:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(424);
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
          lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 253:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 254:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(135);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(436);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(656);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(632);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(644);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(707);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(279);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(367);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(532);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(279);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(367);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(505);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(481);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 273:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(361);
      END_STATE();
    case 274:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 275:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 276:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 277:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 278:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(648);
      END_STATE();
    case 279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(346);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      END_STATE();
    case 280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 285:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 286:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 287:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(473);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 288:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 289:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 290:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 291:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(592);
      END_STATE();
    case 292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(592);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(167);
      END_STATE();
    case 293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(368);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(459);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(333);
      END_STATE();
    case 294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(364);
      END_STATE();
    case 295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(238);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(439);
      END_STATE();
    case 296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(242);
      END_STATE();
    case 297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 298:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(123);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(510);
      END_STATE();
    case 299:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 300:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(560);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(616);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(744);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(713);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(701);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(669);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(741);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(454);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(158);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(273);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(115);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(119);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(459);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(48);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(261);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(478);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(340);
      END_STATE();
    case 317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 318:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 319:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 320:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 321:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 322:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
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
          lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(442);
      END_STATE();
    case 328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(418);
      END_STATE();
    case 330:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(450);
      END_STATE();
    case 332:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 333:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(462);
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
          lookahead == 'o') ADVANCE(394);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 337:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(654);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(476);
      END_STATE();
    case 338:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 339:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(626);
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
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 343:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 344:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 345:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 346:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 347:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
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
          lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 352:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 353:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 354:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 355:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(395);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(372);
      END_STATE();
    case 356:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(396);
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
          lookahead == 'o') ADVANCE(313);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(532);
      END_STATE();
    case 360:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 361:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 362:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(719);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 363:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(646);
      END_STATE();
    case 364:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(623);
      END_STATE();
    case 365:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(115);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 366:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(115);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 367:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(265);
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
          lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 372:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 373:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(283);
      END_STATE();
    case 374:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 375:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(191);
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
          lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 379:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 380:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(607);
      END_STATE();
    case 381:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(703);
      END_STATE();
    case 382:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(680);
      END_STATE();
    case 383:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(733);
      END_STATE();
    case 384:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(745);
      END_STATE();
    case 385:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(752);
      END_STATE();
    case 386:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(683);
      END_STATE();
    case 387:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(682);
      END_STATE();
    case 388:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 389:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 390:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 391:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 392:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 393:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 394:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(494);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(627);
      END_STATE();
    case 395:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 396:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 397:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 398:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 399:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 400:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 401:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 402:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 403:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 404:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 405:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 406:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 407:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 408:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(489);
      END_STATE();
    case 409:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(614);
      END_STATE();
    case 410:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(628);
      END_STATE();
    case 411:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(642);
      END_STATE();
    case 412:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(746);
      END_STATE();
    case 413:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(694);
      END_STATE();
    case 414:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(604);
      END_STATE();
    case 415:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(658);
      END_STATE();
    case 416:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(742);
      END_STATE();
    case 417:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(668);
      END_STATE();
    case 418:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(664);
      END_STATE();
    case 419:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(667);
      END_STATE();
    case 420:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(499);
      END_STATE();
    case 421:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(420);
      END_STATE();
    case 422:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(344);
      END_STATE();
    case 423:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(470);
      END_STATE();
    case 424:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(433);
      END_STATE();
    case 425:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(456);
      END_STATE();
    case 426:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      END_STATE();
    case 427:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(226);
      END_STATE();
    case 428:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 429:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 430:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 431:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(181);
      END_STATE();
    case 432:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(374);
      END_STATE();
    case 433:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(244);
      END_STATE();
    case 434:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(369);
      END_STATE();
    case 435:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(475);
      END_STATE();
    case 436:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      END_STATE();
    case 437:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 438:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(715);
      END_STATE();
    case 439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(673);
      END_STATE();
    case 440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(723);
      END_STATE();
    case 441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(711);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(653);
      END_STATE();
    case 443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(740);
      END_STATE();
    case 444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(564);
      END_STATE();
    case 445:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(697);
      END_STATE();
    case 446:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(625);
      END_STATE();
    case 447:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(557);
      END_STATE();
    case 448:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      END_STATE();
    case 449:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(747);
      END_STATE();
    case 450:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(729);
      END_STATE();
    case 451:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(558);
      END_STATE();
    case 452:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(721);
      END_STATE();
    case 453:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      END_STATE();
    case 454:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(391);
      END_STATE();
    case 455:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 456:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(409);
      END_STATE();
    case 457:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 458:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 459:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 460:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 461:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      END_STATE();
    case 462:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 463:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 464:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 465:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 466:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 467:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 468:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 469:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 470:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      END_STATE();
    case 471:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 472:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(237);
      END_STATE();
    case 473:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 474:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 475:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      END_STATE();
    case 476:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 477:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 478:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(405);
      END_STATE();
    case 479:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(398);
      END_STATE();
    case 480:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(443);
      END_STATE();
    case 481:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 482:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 483:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(435);
      END_STATE();
    case 484:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 485:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(429);
      END_STATE();
    case 486:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(430);
      END_STATE();
    case 487:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(322);
      END_STATE();
    case 488:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(335);
      END_STATE();
    case 489:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 490:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(466);
      END_STATE();
    case 491:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 492:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 493:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(311);
      END_STATE();
    case 494:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(375);
      END_STATE();
    case 495:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(340);
      END_STATE();
    case 496:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(146);
      END_STATE();
    case 497:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(679);
      END_STATE();
    case 498:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(562);
      END_STATE();
    case 499:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(353);
      END_STATE();
    case 500:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(399);
      END_STATE();
    case 501:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(637);
      END_STATE();
    case 502:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(440);
      END_STATE();
    case 503:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(157);
      END_STATE();
    case 504:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(606);
      END_STATE();
    case 505:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(755);
      END_STATE();
    case 506:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(663);
      END_STATE();
    case 507:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(690);
      END_STATE();
    case 508:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(605);
      END_STATE();
    case 509:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(432);
      END_STATE();
    case 510:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(250);
      END_STATE();
    case 511:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 512:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(145);
      END_STATE();
    case 513:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(173);
      END_STATE();
    case 514:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      END_STATE();
    case 515:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
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
      if (lookahead == ',') ADVANCE(566);
      if (lookahead == '-') ADVANCE(514);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '0') ADVANCE(578);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == ';') ADVANCE(556);
      if (lookahead == '<') ADVANCE(596);
      if (lookahead == '=') ADVANCE(599);
      if (lookahead == '>') ADVANCE(600);
      if (lookahead == 'X') ADVANCE(29);
      if (lookahead == '[') ADVANCE(620);
      if (lookahead == ']') ADVANCE(621);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == '}') ADVANCE(631);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(147);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(359);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(148);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(538);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(45);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(376);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(194);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(422);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(223);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(482);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(196);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(377);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(365);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(58);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(553)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(586);
      END_STATE();
    case 554:
      if (eof) ADVANCE(555);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == '-') ADVANCE(516);
      if (lookahead == ';') ADVANCE(556);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(151);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(388);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(149);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(488);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(376);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(166);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(223);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(408);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(554)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
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
      if (lookahead == '.') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(515);
      if (lookahead == 'X') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(532);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(519);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(522);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(526);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == '.') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(532);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__code_block);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(597);
      if (lookahead == '>') ADVANCE(598);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(601);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(455);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(480);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(717);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token1);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_relation_contains_key_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(640);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_order_spec_token3);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_order_spec_token4);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token2);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
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
      ACCEPT_TOKEN(aux_sym_using_ttl_timestamp_token1);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_index_full_spec_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_update_token1);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_update_token2);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_update_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_use_token1);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_grant_token1);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_grant_token2);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_revoke_token1);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_privilege_token1);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_privilege_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_privilege_token2);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_privilege_token3);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_privilege_token4);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_privilege_token5);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_privilege_token6);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_privilege_token7);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_resource_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_resource_token3);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_resource_token4);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_resource_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_resource_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_list_roles_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_list_roles_token2);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_list_roles_token3);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_drop_aggregate_token1);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token1);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_drop_materialized_view_token2);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_drop_trigger_token1);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_drop_type_token1);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_drop_user_token1);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token2);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token3);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token4);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token5);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_create_aggregate_token6);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token1);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_create_materialized_view_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_column_not_null_token1);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_materialized_view_options_token1);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_create_function_token1);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_create_function_token2);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_data_type_name_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_data_type_name_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_data_type_name_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_data_type_name_token4);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_data_type_name_token5);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_data_type_name_token6);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_data_type_name_token7);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_data_type_name_token8);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_data_type_name_token9);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_data_type_name_token10);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_data_type_name_token11);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_data_type_name_token12);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_data_type_name_token13);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_data_type_name_token14);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_data_type_name_token15);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(912);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(922);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_data_type_name_token16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(461);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(484);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_data_type_name_token17);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_data_type_name_token18);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_data_type_name_token19);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_data_type_name_token20);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_data_type_name_token21);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_data_type_name_token22);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_return_mode_token1);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_return_mode_token2);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_create_keyspace_token1);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_durable_writes_token1);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_role_with_option_token1);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_role_with_option_token2);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_role_with_option_token3);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_role_with_option_token4);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_compact_storage_token1);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_compact_storage_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_compact_storage_token2);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_clustering_order_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_user_super_user_token1);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_alter_table_add_token1);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_alter_table_rename_token1);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_apply_batch_token1);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(521);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '-') ADVANCE(545);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(898);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(778);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(919);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(873);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(878);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(938);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(779);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(829);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(844);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(781);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(880);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(824);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(850);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(903);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(881);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(775);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(700);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(838);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(840);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(806);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(856);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(816);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(809);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(908);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(914);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(793);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(909);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(738);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(728);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(926);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(843);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(877);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(706);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(725);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(732);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(710);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(590);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(672);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(635);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(899);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(764);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(929);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(900);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(718);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(849);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(889);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(769);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(930);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(885);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(613);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(751);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(813);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(767);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(805);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(863);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(864);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(783);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(846);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(696);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(891);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(784);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(855);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(869);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(854);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(810);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(799);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(893);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(894);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(857);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(858);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(862);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(708);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(574);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(645);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(657);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(937);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(841);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(800);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(868);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(865);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(825);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(788);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(920);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(845);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(920);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(826);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(827);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(789);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(791);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(792);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(822);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(593);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(787);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(931);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(874);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(875);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(768);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(771);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(797);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(714);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(702);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(670);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(561);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(639);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(804);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(904);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(905);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(906);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(907);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(910);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(911);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(780);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(782);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(773);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(830);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(932);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(917);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(842);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(770);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(851);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(852);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(845);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(839);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(720);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(624);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(763);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(766);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(833);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(776);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(704);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(734);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(928);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(923);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(867);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(817);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(815);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(818);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(777);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(641);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(643);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(615);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(901);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(790);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(915);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(913);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(876);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(870);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(916);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(786);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(649);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(716);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(674);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(724);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(712);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(698);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(736);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(730);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(722);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(748);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(559);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(884);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(795);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(765);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(890);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(814);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(823);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(802);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(860);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(808);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(774);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(897);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(861);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(812);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(790);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(832);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(836);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(902);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(820);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(691);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(888);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(895);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(821);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(798);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(940);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(758);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(933);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(934);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(935);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(936);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(937);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(938);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(940);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(940);
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
  [4] = {.lex_state = 553},
  [5] = {.lex_state = 553},
  [6] = {.lex_state = 553},
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
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 553},
  [61] = {.lex_state = 553},
  [62] = {.lex_state = 553},
  [63] = {.lex_state = 553},
  [64] = {.lex_state = 553},
  [65] = {.lex_state = 553},
  [66] = {.lex_state = 553},
  [67] = {.lex_state = 553},
  [68] = {.lex_state = 553},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 553},
  [72] = {.lex_state = 553},
  [73] = {.lex_state = 553},
  [74] = {.lex_state = 553},
  [75] = {.lex_state = 553},
  [76] = {.lex_state = 553},
  [77] = {.lex_state = 553},
  [78] = {.lex_state = 553},
  [79] = {.lex_state = 553},
  [80] = {.lex_state = 553},
  [81] = {.lex_state = 553},
  [82] = {.lex_state = 553},
  [83] = {.lex_state = 553},
  [84] = {.lex_state = 553},
  [85] = {.lex_state = 553},
  [86] = {.lex_state = 553},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 553},
  [89] = {.lex_state = 553},
  [90] = {.lex_state = 553},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 553},
  [94] = {.lex_state = 553},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 553},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 554},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 553},
  [105] = {.lex_state = 553},
  [106] = {.lex_state = 553},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 553},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 553},
  [118] = {.lex_state = 553},
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
  [148] = {.lex_state = 553},
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
  [172] = {.lex_state = 553},
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
  [204] = {.lex_state = 553},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 553},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 553},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 553},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 553},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 553},
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
  [390] = {.lex_state = 1},
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
  [419] = {.lex_state = 42},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 553},
  [422] = {.lex_state = 553},
  [423] = {.lex_state = 54},
  [424] = {.lex_state = 42},
  [425] = {.lex_state = 553},
  [426] = {.lex_state = 553},
  [427] = {.lex_state = 553},
  [428] = {.lex_state = 553},
  [429] = {.lex_state = 553},
  [430] = {.lex_state = 42},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 553},
  [433] = {.lex_state = 553},
  [434] = {.lex_state = 553},
  [435] = {.lex_state = 553},
  [436] = {.lex_state = 553},
  [437] = {.lex_state = 54},
  [438] = {.lex_state = 553},
  [439] = {.lex_state = 553},
  [440] = {.lex_state = 553},
  [441] = {.lex_state = 19},
  [442] = {.lex_state = 19},
  [443] = {.lex_state = 15},
  [444] = {.lex_state = 15},
  [445] = {.lex_state = 19},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 19},
  [448] = {.lex_state = 15},
  [449] = {.lex_state = 15},
  [450] = {.lex_state = 14},
  [451] = {.lex_state = 553},
  [452] = {.lex_state = 553},
  [453] = {.lex_state = 10},
  [454] = {.lex_state = 15},
  [455] = {.lex_state = 14},
  [456] = {.lex_state = 13},
  [457] = {.lex_state = 11},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 14},
  [460] = {.lex_state = 10},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 10},
  [463] = {.lex_state = 54},
  [464] = {.lex_state = 12},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 17},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 10},
  [470] = {.lex_state = 17},
  [471] = {.lex_state = 20},
  [472] = {.lex_state = 10},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 553},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 17},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 25},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 10},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 20},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 18},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 18},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 18},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 18},
  [504] = {.lex_state = 18},
  [505] = {.lex_state = 18},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 18},
  [509] = {.lex_state = 27},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 18},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 18},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 18},
  [516] = {.lex_state = 18},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 18},
  [520] = {.lex_state = 18},
  [521] = {.lex_state = 18},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 18},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 18},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 22},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 22},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 10},
  [553] = {.lex_state = 554},
  [554] = {.lex_state = 10},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 23},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 16},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 10},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 10},
  [565] = {.lex_state = 10},
  [566] = {.lex_state = 10},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 10},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 10},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 10},
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
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 554},
  [607] = {.lex_state = 10},
  [608] = {.lex_state = 10},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 21},
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
  [627] = {.lex_state = 10},
  [628] = {.lex_state = 554},
  [629] = {.lex_state = 10},
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
  [640] = {.lex_state = 10},
  [641] = {.lex_state = 10},
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
  [662] = {.lex_state = 21},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 10},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 10},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 21},
  [677] = {.lex_state = 10},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 21},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 21},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 554},
  [686] = {.lex_state = 10},
  [687] = {.lex_state = 10},
  [688] = {.lex_state = 26},
  [689] = {.lex_state = 10},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 13},
  [693] = {.lex_state = 13},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 21},
  [697] = {.lex_state = 21},
  [698] = {.lex_state = 21},
  [699] = {.lex_state = 21},
  [700] = {.lex_state = 21},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 21},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 21},
  [707] = {.lex_state = 21},
  [708] = {.lex_state = 10},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 21},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 21},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 10},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 10},
  [721] = {.lex_state = 10},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 10},
  [726] = {.lex_state = 10},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 10},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 10},
  [732] = {.lex_state = 10},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 10},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 10},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 10},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 10},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 10},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 10},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 10},
  [763] = {.lex_state = 10},
  [764] = {.lex_state = 10},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 10},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 10},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 10},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 10},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 553},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 10},
  [781] = {.lex_state = 10},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 10},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 10},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 10},
  [791] = {.lex_state = 21},
  [792] = {.lex_state = 21},
  [793] = {.lex_state = 10},
  [794] = {.lex_state = 10},
  [795] = {.lex_state = 10},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 10},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 21},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 21},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 28},
  [812] = {.lex_state = 10},
  [813] = {.lex_state = 28},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 10},
  [816] = {.lex_state = 10},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 10},
  [820] = {.lex_state = 10},
  [821] = {.lex_state = 21},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 10},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 28},
  [833] = {.lex_state = 10},
  [834] = {.lex_state = 10},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 10},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 10},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 10},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 10},
  [850] = {.lex_state = 10},
  [851] = {.lex_state = 10},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 10},
  [854] = {.lex_state = 554},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 10},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 10},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 10},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 10},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 10},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 554},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 10},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 10},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 10},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 10},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 10},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 10},
  [902] = {.lex_state = 13},
  [903] = {.lex_state = 13},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 10},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 10},
  [910] = {.lex_state = 10},
  [911] = {.lex_state = 10},
  [912] = {.lex_state = 10},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 10},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 10},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 10},
  [928] = {.lex_state = 10},
  [929] = {.lex_state = 0},
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
  [940] = {.lex_state = 10},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 10},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 10},
  [953] = {.lex_state = 10},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 10},
  [958] = {.lex_state = 10},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 10},
  [962] = {.lex_state = 42},
  [963] = {.lex_state = 0},
  [964] = {.lex_state = 10},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 0},
  [967] = {.lex_state = 0},
  [968] = {.lex_state = 0},
  [969] = {.lex_state = 0},
  [970] = {.lex_state = 0},
  [971] = {.lex_state = 0},
  [972] = {.lex_state = 0},
  [973] = {.lex_state = 10},
  [974] = {.lex_state = 0},
  [975] = {.lex_state = 10},
  [976] = {.lex_state = 10},
  [977] = {.lex_state = 0},
  [978] = {.lex_state = 10},
  [979] = {.lex_state = 10},
  [980] = {.lex_state = 10},
  [981] = {.lex_state = 10},
  [982] = {.lex_state = 10},
  [983] = {.lex_state = 10},
  [984] = {.lex_state = 10},
  [985] = {.lex_state = 0},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 10},
  [988] = {.lex_state = 10},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 10},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 0},
  [993] = {.lex_state = 0},
  [994] = {.lex_state = 10},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 0},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 0},
  [999] = {.lex_state = 0},
  [1000] = {.lex_state = 0},
  [1001] = {.lex_state = 10},
  [1002] = {.lex_state = 0},
  [1003] = {.lex_state = 0},
  [1004] = {.lex_state = 0},
  [1005] = {.lex_state = 0},
  [1006] = {.lex_state = 10},
  [1007] = {.lex_state = 0},
  [1008] = {.lex_state = 0},
  [1009] = {.lex_state = 0},
  [1010] = {.lex_state = 10},
  [1011] = {.lex_state = 0},
  [1012] = {.lex_state = 10},
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 0},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 553},
  [1018] = {.lex_state = 0},
  [1019] = {.lex_state = 0},
  [1020] = {.lex_state = 0},
  [1021] = {.lex_state = 0},
  [1022] = {.lex_state = 0},
  [1023] = {.lex_state = 0},
  [1024] = {.lex_state = 0},
  [1025] = {.lex_state = 0},
  [1026] = {.lex_state = 0},
  [1027] = {.lex_state = 10},
  [1028] = {.lex_state = 0},
  [1029] = {.lex_state = 0},
  [1030] = {.lex_state = 0},
  [1031] = {.lex_state = 0},
  [1032] = {.lex_state = 10},
  [1033] = {.lex_state = 0},
  [1034] = {.lex_state = 0},
  [1035] = {.lex_state = 10},
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
  [1049] = {.lex_state = 553},
  [1050] = {.lex_state = 10},
  [1051] = {.lex_state = 0},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 0},
  [1054] = {.lex_state = 10},
  [1055] = {.lex_state = 0},
  [1056] = {.lex_state = 0},
  [1057] = {.lex_state = 0},
  [1058] = {.lex_state = 0},
  [1059] = {.lex_state = 10},
  [1060] = {.lex_state = 10},
  [1061] = {.lex_state = 0},
  [1062] = {.lex_state = 554},
  [1063] = {.lex_state = 0},
  [1064] = {.lex_state = 10},
  [1065] = {.lex_state = 10},
  [1066] = {.lex_state = 0},
  [1067] = {.lex_state = 0},
  [1068] = {.lex_state = 0},
  [1069] = {.lex_state = 0},
  [1070] = {.lex_state = 0},
  [1071] = {.lex_state = 0},
  [1072] = {.lex_state = 0},
  [1073] = {.lex_state = 10},
  [1074] = {.lex_state = 10},
  [1075] = {.lex_state = 0},
  [1076] = {.lex_state = 0},
  [1077] = {.lex_state = 0},
  [1078] = {.lex_state = 0},
  [1079] = {.lex_state = 0},
  [1080] = {.lex_state = 0},
  [1081] = {.lex_state = 10},
  [1082] = {.lex_state = 0},
  [1083] = {.lex_state = 0},
  [1084] = {.lex_state = 10},
  [1085] = {.lex_state = 0},
  [1086] = {.lex_state = 0},
  [1087] = {.lex_state = 10},
  [1088] = {.lex_state = 0},
  [1089] = {.lex_state = 0},
  [1090] = {.lex_state = 0},
  [1091] = {.lex_state = 0},
  [1092] = {.lex_state = 10},
  [1093] = {.lex_state = 0},
  [1094] = {.lex_state = 10},
  [1095] = {.lex_state = 0},
  [1096] = {.lex_state = 0},
  [1097] = {.lex_state = 10},
  [1098] = {.lex_state = 0},
  [1099] = {.lex_state = 0},
  [1100] = {.lex_state = 10},
  [1101] = {.lex_state = 0},
  [1102] = {.lex_state = 0},
  [1103] = {.lex_state = 0},
  [1104] = {.lex_state = 10},
  [1105] = {.lex_state = 0},
  [1106] = {.lex_state = 0},
  [1107] = {.lex_state = 0},
  [1108] = {.lex_state = 0},
  [1109] = {.lex_state = 10},
  [1110] = {.lex_state = 0},
  [1111] = {.lex_state = 10},
  [1112] = {.lex_state = 10},
  [1113] = {.lex_state = 0},
  [1114] = {.lex_state = 0},
  [1115] = {.lex_state = 553},
  [1116] = {.lex_state = 553},
  [1117] = {.lex_state = 0},
  [1118] = {.lex_state = 0},
  [1119] = {.lex_state = 10},
  [1120] = {.lex_state = 0},
  [1121] = {.lex_state = 10},
  [1122] = {.lex_state = 0},
  [1123] = {.lex_state = 0},
  [1124] = {.lex_state = 0},
  [1125] = {.lex_state = 0},
  [1126] = {.lex_state = 0},
  [1127] = {.lex_state = 0},
  [1128] = {.lex_state = 0},
  [1129] = {.lex_state = 0},
  [1130] = {.lex_state = 10},
  [1131] = {.lex_state = 0},
  [1132] = {.lex_state = 0},
  [1133] = {.lex_state = 0},
  [1134] = {.lex_state = 0},
  [1135] = {.lex_state = 10},
  [1136] = {.lex_state = 0},
  [1137] = {.lex_state = 0},
  [1138] = {.lex_state = 0},
  [1139] = {.lex_state = 10},
  [1140] = {.lex_state = 0},
  [1141] = {.lex_state = 10},
  [1142] = {.lex_state = 0},
  [1143] = {.lex_state = 10},
  [1144] = {.lex_state = 0},
  [1145] = {.lex_state = 0},
  [1146] = {.lex_state = 10},
  [1147] = {.lex_state = 0},
  [1148] = {.lex_state = 0},
  [1149] = {.lex_state = 0},
  [1150] = {.lex_state = 0},
  [1151] = {.lex_state = 10},
  [1152] = {.lex_state = 10},
  [1153] = {.lex_state = 554},
  [1154] = {.lex_state = 10},
  [1155] = {.lex_state = 10},
  [1156] = {.lex_state = 10},
  [1157] = {.lex_state = 0},
  [1158] = {.lex_state = 10},
  [1159] = {.lex_state = 553},
  [1160] = {.lex_state = 0},
  [1161] = {.lex_state = 0},
  [1162] = {.lex_state = 0},
  [1163] = {.lex_state = 10},
  [1164] = {.lex_state = 0},
  [1165] = {.lex_state = 0},
  [1166] = {.lex_state = 0},
  [1167] = {.lex_state = 0},
  [1168] = {.lex_state = 10},
  [1169] = {.lex_state = 10},
  [1170] = {.lex_state = 0},
  [1171] = {.lex_state = 10},
  [1172] = {.lex_state = 0},
  [1173] = {.lex_state = 10},
  [1174] = {.lex_state = 0},
  [1175] = {.lex_state = 10},
  [1176] = {.lex_state = 0},
  [1177] = {.lex_state = 0},
  [1178] = {.lex_state = 10},
  [1179] = {.lex_state = 10},
  [1180] = {.lex_state = 0},
  [1181] = {.lex_state = 554},
  [1182] = {.lex_state = 0},
  [1183] = {.lex_state = 10},
  [1184] = {.lex_state = 0},
  [1185] = {.lex_state = 0},
  [1186] = {.lex_state = 0},
  [1187] = {.lex_state = 0},
  [1188] = {.lex_state = 13},
  [1189] = {.lex_state = 0},
  [1190] = {.lex_state = 0},
  [1191] = {.lex_state = 554},
  [1192] = {.lex_state = 13},
  [1193] = {.lex_state = 10},
  [1194] = {.lex_state = 0},
  [1195] = {.lex_state = 10},
  [1196] = {.lex_state = 10},
  [1197] = {.lex_state = 10},
  [1198] = {.lex_state = 10},
  [1199] = {.lex_state = 0},
  [1200] = {.lex_state = 0},
  [1201] = {.lex_state = 0},
  [1202] = {.lex_state = 553},
  [1203] = {.lex_state = 10},
  [1204] = {.lex_state = 0},
  [1205] = {.lex_state = 10},
  [1206] = {.lex_state = 0},
  [1207] = {.lex_state = 10},
  [1208] = {.lex_state = 0},
  [1209] = {.lex_state = 0},
  [1210] = {.lex_state = 10},
  [1211] = {.lex_state = 0},
  [1212] = {.lex_state = 0},
  [1213] = {.lex_state = 0},
  [1214] = {.lex_state = 10},
  [1215] = {.lex_state = 10},
  [1216] = {.lex_state = 0},
  [1217] = {.lex_state = 0},
  [1218] = {.lex_state = 0},
  [1219] = {.lex_state = 10},
  [1220] = {.lex_state = 10},
  [1221] = {.lex_state = 0},
  [1222] = {.lex_state = 0},
  [1223] = {.lex_state = 10},
  [1224] = {.lex_state = 0},
  [1225] = {.lex_state = 0},
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
  [1239] = {.lex_state = 0},
  [1240] = {.lex_state = 553},
  [1241] = {.lex_state = 553},
  [1242] = {.lex_state = 10},
  [1243] = {.lex_state = 0},
  [1244] = {.lex_state = 0},
  [1245] = {.lex_state = 0},
  [1246] = {.lex_state = 0},
  [1247] = {.lex_state = 0},
  [1248] = {.lex_state = 10},
  [1249] = {.lex_state = 0},
  [1250] = {.lex_state = 0},
  [1251] = {.lex_state = 0},
  [1252] = {.lex_state = 0},
  [1253] = {.lex_state = 10},
  [1254] = {.lex_state = 0},
  [1255] = {.lex_state = 0},
  [1256] = {.lex_state = 0},
  [1257] = {.lex_state = 0},
  [1258] = {.lex_state = 0},
  [1259] = {.lex_state = 10},
  [1260] = {.lex_state = 554},
  [1261] = {.lex_state = 0},
  [1262] = {.lex_state = 13},
  [1263] = {.lex_state = 0},
  [1264] = {.lex_state = 0},
  [1265] = {.lex_state = 10},
  [1266] = {.lex_state = 554},
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
  [1285] = {.lex_state = 0},
  [1286] = {.lex_state = 10},
  [1287] = {.lex_state = 0},
  [1288] = {.lex_state = 0},
  [1289] = {.lex_state = 0},
  [1290] = {.lex_state = 0},
  [1291] = {.lex_state = 554},
  [1292] = {.lex_state = 0},
  [1293] = {.lex_state = 0},
  [1294] = {.lex_state = 554},
  [1295] = {.lex_state = 0},
  [1296] = {.lex_state = 0},
  [1297] = {.lex_state = 0},
  [1298] = {.lex_state = 0},
  [1299] = {.lex_state = 553},
  [1300] = {.lex_state = 0},
  [1301] = {.lex_state = 0},
  [1302] = {.lex_state = 0},
  [1303] = {.lex_state = 0},
  [1304] = {.lex_state = 0},
  [1305] = {.lex_state = 0},
  [1306] = {.lex_state = 0},
  [1307] = {.lex_state = 0},
  [1308] = {.lex_state = 0},
  [1309] = {.lex_state = 0},
  [1310] = {.lex_state = 10},
  [1311] = {.lex_state = 0},
  [1312] = {.lex_state = 0},
  [1313] = {.lex_state = 0},
  [1314] = {.lex_state = 10},
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
  [1331] = {.lex_state = 10},
  [1332] = {.lex_state = 554},
  [1333] = {.lex_state = 554},
  [1334] = {.lex_state = 10},
  [1335] = {.lex_state = 0},
  [1336] = {.lex_state = 10},
  [1337] = {.lex_state = 10},
  [1338] = {.lex_state = 0},
  [1339] = {.lex_state = 0},
  [1340] = {.lex_state = 0},
  [1341] = {.lex_state = 0},
  [1342] = {.lex_state = 0},
  [1343] = {.lex_state = 0},
  [1344] = {.lex_state = 0},
  [1345] = {.lex_state = 0},
  [1346] = {.lex_state = 0},
  [1347] = {.lex_state = 0},
  [1348] = {.lex_state = 10},
  [1349] = {.lex_state = 10},
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
    [sym_source_file] = STATE(1346),
    [sym__statement] = STATE(2),
    [sym_select_statement] = STATE(320),
    [sym_delete_statement] = STATE(320),
    [sym_begin_batch] = STATE(588),
    [sym_insert_statement] = STATE(320),
    [sym_truncate] = STATE(320),
    [sym_create_index] = STATE(320),
    [sym_drop_index] = STATE(320),
    [sym_update] = STATE(320),
    [sym_use] = STATE(320),
    [sym_grant] = STATE(320),
    [sym_revoke] = STATE(320),
    [sym_list_roles] = STATE(320),
    [sym_list_permissions] = STATE(320),
    [sym_drop_aggregate] = STATE(320),
    [sym_drop_materialized_view] = STATE(320),
    [sym_drop_function] = STATE(320),
    [sym_drop_keyspace] = STATE(320),
    [sym_drop_role] = STATE(320),
    [sym_drop_table] = STATE(320),
    [sym_drop_trigger] = STATE(320),
    [sym_drop_type] = STATE(320),
    [sym_drop_user] = STATE(320),
    [sym_create_aggregate] = STATE(320),
    [sym_create_materialized_view] = STATE(320),
    [sym_create_function] = STATE(320),
    [sym_create_keyspace] = STATE(320),
    [sym_create_role] = STATE(320),
    [sym_create_table] = STATE(320),
    [sym_create_trigger] = STATE(320),
    [sym_create_type] = STATE(320),
    [sym_create_user] = STATE(320),
    [sym_alter_materialized_view] = STATE(320),
    [sym_alter_keyspace] = STATE(320),
    [sym_alter_role] = STATE(320),
    [sym_alter_table] = STATE(320),
    [sym_alter_type] = STATE(320),
    [sym_alter_user] = STATE(320),
    [sym_apply_batch] = STATE(320),
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
    [aux_sym_privilege_token3] = ACTIONS(27),
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
      aux_sym_privilege_token3,
    ACTIONS(29), 1,
      aux_sym_list_roles_token1,
    ACTIONS(31), 1,
      aux_sym_apply_batch_token1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(588), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(320), 37,
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
      aux_sym_privilege_token3,
    ACTIONS(73), 1,
      aux_sym_list_roles_token1,
    ACTIONS(76), 1,
      aux_sym_apply_batch_token1,
    STATE(588), 1,
      sym_begin_batch,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(320), 37,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1069), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1249), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1206), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1028), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1190), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(218), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1085), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1184), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(373), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(935), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(888), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(941), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(753), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(788), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1180), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(905), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(998), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(946), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(949), 1,
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
    STATE(70), 1,
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
  [985] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(857), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(966), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(970), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1174), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(916), 1,
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
    STATE(70), 1,
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
  [1195] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1051), 1,
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
    STATE(70), 1,
      sym_data_type_name,
    STATE(1211), 1,
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
  [1265] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1089), 1,
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
  [1300] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1170), 1,
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
  [1335] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(181), 1,
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
  [1370] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(537), 1,
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
  [1405] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(622), 1,
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
  [1440] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1142), 1,
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
  [1475] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(189), 1,
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
  [1510] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1287), 1,
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
  [1545] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(868), 1,
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
  [1580] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1131), 1,
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
  [1615] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1127), 1,
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
  [1650] = 3,
    STATE(70), 1,
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
  [1685] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(546), 1,
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
  [1720] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1293), 1,
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
  [1755] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1055), 1,
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
  [1790] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(604), 1,
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
  [1825] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1061), 1,
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
  [1860] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1080), 1,
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
  [1895] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1002), 1,
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
  [1930] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1108), 1,
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
  [1965] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1101), 1,
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
  [2000] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(1218), 1,
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
  [2035] = 3,
    STATE(70), 1,
      sym_data_type_name,
    STATE(593), 1,
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
  [2070] = 2,
    STATE(651), 1,
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
  [2102] = 2,
    STATE(767), 1,
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
  [2134] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
    ACTIONS(89), 23,
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
  [2166] = 2,
    ACTIONS(96), 1,
      anon_sym_DOT,
    ACTIONS(94), 24,
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
      aux_sym_apply_batch_token1,
  [2196] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(60), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2227] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(66), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2258] = 1,
    ACTIONS(89), 24,
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
  [2285] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2312] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(60), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2343] = 3,
    ACTIONS(100), 1,
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
  [2374] = 1,
    ACTIONS(108), 24,
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
  [2401] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_aggregate_token5,
      aux_sym_create_materialized_view_token1,
      aux_sym_create_function_token2,
      aux_sym_apply_batch_token1,
  [2427] = 3,
    ACTIONS(114), 1,
      anon_sym_LT,
    STATE(87), 1,
      sym_data_type_definition,
    ACTIONS(112), 21,
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
  [2457] = 8,
    ACTIONS(118), 1,
      aux_sym_select_statement_token4,
    ACTIONS(120), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(124), 1,
      aux_sym_order_spec_token1,
    STATE(93), 1,
      sym_where_spec,
    STATE(105), 1,
      sym_order_spec,
    STATE(231), 1,
      sym_limit_spec,
    ACTIONS(116), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2497] = 8,
    ACTIONS(120), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(124), 1,
      aux_sym_order_spec_token1,
    ACTIONS(128), 1,
      aux_sym_select_statement_token4,
    STATE(90), 1,
      sym_where_spec,
    STATE(114), 1,
      sym_order_spec,
    STATE(204), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2537] = 3,
    ACTIONS(132), 1,
      aux_sym_relation_elements_token1,
    STATE(73), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(130), 21,
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
  [2567] = 8,
    ACTIONS(120), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(124), 1,
      aux_sym_order_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(89), 1,
      sym_where_spec,
    STATE(117), 1,
      sym_order_spec,
    STATE(214), 1,
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
  [2607] = 3,
    ACTIONS(141), 1,
      aux_sym_relation_elements_token1,
    STATE(83), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(139), 20,
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
  [2636] = 1,
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
  [2661] = 1,
    ACTIONS(145), 22,
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
  [2686] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2711] = 1,
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
  [2736] = 1,
    ACTIONS(130), 22,
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
  [2761] = 1,
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
  [2786] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2811] = 3,
    ACTIONS(141), 1,
      aux_sym_relation_elements_token1,
    STATE(73), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [2840] = 1,
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
  [2865] = 1,
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
  [2890] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_create_materialized_view_token1,
      aux_sym_apply_batch_token1,
  [2915] = 1,
    ACTIONS(161), 21,
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
  [2939] = 1,
    ACTIONS(163), 21,
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
  [2963] = 6,
    ACTIONS(120), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(124), 1,
      aux_sym_order_spec_token1,
    ACTIONS(167), 1,
      aux_sym_select_statement_token4,
    STATE(104), 1,
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
  [2997] = 6,
    ACTIONS(118), 1,
      aux_sym_select_statement_token4,
    ACTIONS(120), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(124), 1,
      aux_sym_order_spec_token1,
    STATE(105), 1,
      sym_order_spec,
    STATE(231), 1,
      sym_limit_spec,
    ACTIONS(116), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3031] = 1,
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
  [3055] = 1,
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
  [3079] = 6,
    ACTIONS(120), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(124), 1,
      aux_sym_order_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(117), 1,
      sym_order_spec,
    STATE(214), 1,
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
  [3113] = 2,
    ACTIONS(175), 1,
      aux_sym_relation_element_token1,
    ACTIONS(173), 19,
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
  [3138] = 2,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(177), 19,
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
  [3163] = 1,
    ACTIONS(181), 20,
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
  [3186] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3211] = 2,
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
  [3236] = 2,
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
  [3261] = 3,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(195), 18,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3288] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3310] = 1,
    ACTIONS(202), 19,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3332] = 1,
    ACTIONS(204), 19,
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
  [3354] = 4,
    ACTIONS(120), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(208), 1,
      aux_sym_select_statement_token4,
    STATE(222), 1,
      sym_limit_spec,
    ACTIONS(206), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3382] = 4,
    ACTIONS(120), 1,
      aux_sym_limit_spec_token1,
    ACTIONS(137), 1,
      aux_sym_select_statement_token4,
    STATE(214), 1,
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
  [3410] = 9,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(639), 1,
      sym_expression,
    STATE(1033), 1,
      sym_expression_list,
    STATE(751), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [3448] = 4,
    ACTIONS(222), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(224), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(364), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3476] = 4,
    ACTIONS(224), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(228), 1,
      aux_sym_delete_statement_token2,
    STATE(323), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3504] = 4,
    ACTIONS(224), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(232), 1,
      aux_sym_delete_statement_token2,
    STATE(324), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3532] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3554] = 3,
    STATE(287), 1,
      sym_user_super_user,
    ACTIONS(238), 2,
      aux_sym_role_with_option_token3,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3580] = 1,
    ACTIONS(240), 19,
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
  [3602] = 1,
    ACTIONS(173), 19,
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
  [3624] = 4,
    ACTIONS(118), 1,
      aux_sym_select_statement_token4,
    ACTIONS(120), 1,
      aux_sym_limit_spec_token1,
    STATE(231), 1,
      sym_limit_spec,
    ACTIONS(116), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3652] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3674] = 2,
    ACTIONS(246), 1,
      aux_sym_privilege_token2,
    ACTIONS(244), 18,
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
  [3698] = 4,
    ACTIONS(120), 1,
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
  [3726] = 9,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(639), 1,
      sym_expression,
    STATE(943), 1,
      sym_expression_list,
    STATE(751), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [3764] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [3786] = 1,
    ACTIONS(250), 18,
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
  [3807] = 3,
    ACTIONS(254), 1,
      aux_sym_materialized_view_options_token1,
    STATE(318), 1,
      sym_role_with,
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
  [3832] = 3,
    ACTIONS(258), 1,
      aux_sym_materialized_view_options_token1,
    STATE(309), 1,
      sym_materialized_view_options,
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
  [3857] = 3,
    ACTIONS(262), 1,
      aux_sym_delete_statement_token2,
    STATE(386), 1,
      sym_if_spec,
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
  [3882] = 3,
    ACTIONS(266), 1,
      aux_sym_materialized_view_options_token1,
    STATE(328), 1,
      sym_with_element,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3907] = 3,
    ACTIONS(270), 1,
      aux_sym_delete_statement_token2,
    STATE(363), 1,
      sym_if_spec,
    ACTIONS(268), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3932] = 3,
    ACTIONS(258), 1,
      aux_sym_materialized_view_options_token1,
    STATE(347), 1,
      sym_materialized_view_options,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3957] = 3,
    ACTIONS(276), 1,
      aux_sym_delete_statement_token2,
    STATE(367), 1,
      sym_if_spec,
    ACTIONS(274), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [3982] = 3,
    ACTIONS(280), 1,
      aux_sym_delete_statement_token2,
    STATE(401), 1,
      sym_if_spec,
    ACTIONS(278), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4007] = 3,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(282), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4032] = 1,
    ACTIONS(287), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [4053] = 3,
    ACTIONS(258), 1,
      aux_sym_materialized_view_options_token1,
    STATE(261), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4078] = 3,
    ACTIONS(293), 1,
      anon_sym_DOT,
    ACTIONS(295), 1,
      aux_sym_materialized_view_options_token1,
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
  [4103] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4124] = 3,
    ACTIONS(301), 1,
      aux_sym_delete_statement_token2,
    STATE(350), 1,
      sym_if_spec,
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
  [4149] = 3,
    ACTIONS(305), 1,
      aux_sym_relation_elements_token1,
    STATE(169), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4174] = 3,
    ACTIONS(309), 1,
      aux_sym_delete_statement_token2,
    STATE(361), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4199] = 3,
    ACTIONS(313), 1,
      aux_sym_relation_elements_token1,
    STATE(137), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4224] = 3,
    ACTIONS(254), 1,
      aux_sym_materialized_view_options_token1,
    STATE(329), 1,
      sym_role_with,
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
  [4249] = 3,
    ACTIONS(320), 1,
      aux_sym_relation_elements_token1,
    STATE(183), 1,
      aux_sym_materialized_view_options_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4274] = 1,
    ACTIONS(322), 18,
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
  [4295] = 3,
    ACTIONS(326), 1,
      aux_sym_delete_statement_token2,
    STATE(388), 1,
      sym_if_spec,
    ACTIONS(324), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4320] = 3,
    ACTIONS(258), 1,
      aux_sym_materialized_view_options_token1,
    STATE(249), 1,
      sym_materialized_view_options,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4345] = 3,
    ACTIONS(224), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(252), 1,
      sym_using_ttl_timestamp,
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
  [4370] = 3,
    ACTIONS(258), 1,
      aux_sym_materialized_view_options_token1,
    STATE(251), 1,
      sym_materialized_view_options,
    ACTIONS(332), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4395] = 1,
    ACTIONS(334), 18,
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
  [4416] = 3,
    ACTIONS(266), 1,
      aux_sym_materialized_view_options_token1,
    STATE(319), 1,
      sym_with_element,
    ACTIONS(336), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4441] = 1,
    ACTIONS(338), 18,
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
  [4462] = 8,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(733), 1,
      sym_expression,
    STATE(751), 5,
      sym_constant,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
      sym_assignment_tuple,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [4497] = 3,
    ACTIONS(224), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(340), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4522] = 1,
    ACTIONS(342), 18,
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
  [4543] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_list_roles_token2,
      aux_sym_apply_batch_token1,
  [4564] = 3,
    ACTIONS(348), 1,
      aux_sym_relation_elements_token1,
    STATE(137), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4589] = 3,
    ACTIONS(352), 1,
      aux_sym_relation_elements_token1,
    STATE(153), 1,
      aux_sym_materialized_view_options_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4614] = 3,
    ACTIONS(357), 1,
      aux_sym_delete_statement_token2,
    STATE(266), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4639] = 3,
    ACTIONS(361), 1,
      aux_sym_delete_statement_token2,
    STATE(265), 1,
      sym_if_spec,
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
  [4664] = 3,
    ACTIONS(254), 1,
      aux_sym_materialized_view_options_token1,
    STATE(275), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4689] = 3,
    ACTIONS(348), 1,
      aux_sym_relation_elements_token1,
    STATE(152), 1,
      aux_sym_if_condition_list_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4714] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4735] = 3,
    ACTIONS(371), 1,
      aux_sym_delete_statement_token2,
    STATE(331), 1,
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
  [4760] = 1,
    ACTIONS(373), 18,
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
  [4781] = 1,
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
  [4802] = 3,
    ACTIONS(379), 1,
      aux_sym_delete_statement_token2,
    STATE(311), 1,
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
  [4827] = 3,
    ACTIONS(383), 1,
      aux_sym_relation_elements_token1,
    STATE(164), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
  [4852] = 3,
    ACTIONS(387), 1,
      aux_sym_relation_elements_token1,
    STATE(164), 1,
      aux_sym_alter_type_rename_list_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4877] = 3,
    ACTIONS(383), 1,
      aux_sym_relation_elements_token1,
    STATE(163), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4902] = 3,
    ACTIONS(305), 1,
      aux_sym_relation_elements_token1,
    STATE(135), 1,
      aux_sym_role_with_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4927] = 3,
    ACTIONS(396), 1,
      aux_sym_create_index_token3,
    ACTIONS(398), 1,
      aux_sym_list_roles_token2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4952] = 3,
    ACTIONS(402), 1,
      aux_sym_list_roles_token2,
    ACTIONS(404), 1,
      aux_sym_list_roles_token3,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [4977] = 3,
    ACTIONS(408), 1,
      aux_sym_relation_elements_token1,
    STATE(169), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5002] = 3,
    ACTIONS(413), 1,
      aux_sym_relation_elements_token1,
    STATE(182), 1,
      aux_sym_table_options_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5027] = 3,
    ACTIONS(258), 1,
      aux_sym_materialized_view_options_token1,
    STATE(335), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5052] = 1,
    ACTIONS(417), 18,
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
  [5073] = 3,
    ACTIONS(258), 1,
      aux_sym_materialized_view_options_token1,
    STATE(315), 1,
      sym_materialized_view_options,
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
  [5098] = 3,
    ACTIONS(258), 1,
      aux_sym_materialized_view_options_token1,
    STATE(348), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5123] = 3,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_relation_element_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5148] = 1,
    ACTIONS(244), 18,
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
  [5169] = 3,
    ACTIONS(429), 1,
      aux_sym_delete_statement_token2,
    STATE(268), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5194] = 3,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(431), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5219] = 3,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_alter_table_column_definition_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5244] = 3,
    ACTIONS(439), 1,
      aux_sym_relation_elements_token1,
    STATE(180), 1,
      aux_sym_table_options_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5269] = 3,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_alter_table_column_definition_repeat1,
    ACTIONS(442), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5294] = 3,
    ACTIONS(413), 1,
      aux_sym_relation_elements_token1,
    STATE(180), 1,
      aux_sym_table_options_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5319] = 3,
    ACTIONS(448), 1,
      aux_sym_relation_elements_token1,
    STATE(153), 1,
      aux_sym_materialized_view_options_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5344] = 3,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_relation_element_repeat1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5369] = 3,
    ACTIONS(454), 1,
      aux_sym_delete_statement_token2,
    STATE(306), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5394] = 3,
    ACTIONS(224), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(267), 1,
      sym_using_ttl_timestamp,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5419] = 3,
    ACTIONS(460), 1,
      aux_sym_delete_statement_token2,
    STATE(263), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5444] = 3,
    ACTIONS(464), 1,
      aux_sym_delete_statement_token2,
    STATE(296), 1,
      sym_if_spec,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5469] = 3,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    STATE(179), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5494] = 3,
    ACTIONS(470), 1,
      aux_sym_delete_statement_token2,
    STATE(312), 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5519] = 2,
    ACTIONS(474), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(472), 17,
      ts_builtin_sym_end,
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
  [5542] = 2,
    ACTIONS(478), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(476), 17,
      ts_builtin_sym_end,
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
  [5565] = 2,
    ACTIONS(482), 1,
      aux_sym_relation_elements_token1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5587] = 1,
    ACTIONS(484), 17,
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
  [5607] = 2,
    ACTIONS(488), 1,
      anon_sym_DOT,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5629] = 2,
    ACTIONS(492), 1,
      anon_sym_DOT,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5651] = 1,
    ACTIONS(494), 17,
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
  [5671] = 2,
    ACTIONS(498), 1,
      anon_sym_DOT,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5693] = 2,
    ACTIONS(502), 1,
      anon_sym_DOT,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5715] = 2,
    ACTIONS(506), 1,
      aux_sym_materialized_view_options_token1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5737] = 2,
    ACTIONS(510), 1,
      anon_sym_DOT,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5759] = 1,
    ACTIONS(437), 17,
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
  [5779] = 2,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(512), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5801] = 2,
    ACTIONS(118), 1,
      aux_sym_select_statement_token4,
    ACTIONS(116), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5823] = 1,
    ACTIONS(516), 17,
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
  [5843] = 1,
    ACTIONS(518), 17,
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
  [5863] = 2,
    ACTIONS(522), 1,
      anon_sym_DOT,
    ACTIONS(520), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5885] = 2,
    ACTIONS(526), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(524), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5907] = 1,
    ACTIONS(528), 17,
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
  [5927] = 1,
    ACTIONS(406), 17,
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
  [5947] = 1,
    ACTIONS(530), 17,
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
  [5967] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [5987] = 1,
    ACTIONS(532), 17,
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
  [6007] = 2,
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
  [6029] = 1,
    ACTIONS(534), 17,
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
  [6049] = 1,
    ACTIONS(536), 17,
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
  [6069] = 2,
    ACTIONS(540), 1,
      anon_sym_DOT,
    ACTIONS(538), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6091] = 1,
    ACTIONS(542), 17,
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
  [6111] = 2,
    ACTIONS(546), 1,
      anon_sym_DOT,
    ACTIONS(544), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6133] = 2,
    ACTIONS(550), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(548), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6155] = 1,
    ACTIONS(552), 17,
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
  [6175] = 2,
    ACTIONS(556), 1,
      aux_sym_select_statement_token4,
    ACTIONS(554), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6197] = 2,
    ACTIONS(560), 1,
      anon_sym_DOT,
    ACTIONS(558), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6219] = 1,
    ACTIONS(350), 17,
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
  [6239] = 2,
    ACTIONS(564), 1,
      anon_sym_DOT,
    ACTIONS(562), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6261] = 1,
    ACTIONS(566), 17,
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
  [6281] = 2,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(568), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6303] = 1,
    ACTIONS(572), 17,
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
  [6323] = 2,
    ACTIONS(576), 1,
      anon_sym_DOT,
    ACTIONS(574), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6345] = 1,
    ACTIONS(311), 17,
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
  [6365] = 2,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6387] = 1,
    ACTIONS(578), 17,
      ts_builtin_sym_end,
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
  [6407] = 1,
    ACTIONS(580), 17,
      ts_builtin_sym_end,
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
  [6427] = 2,
    ACTIONS(584), 1,
      aux_sym_list_roles_token2,
    ACTIONS(582), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6449] = 2,
    ACTIONS(588), 1,
      aux_sym_list_roles_token3,
    ACTIONS(586), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6471] = 2,
    ACTIONS(208), 1,
      aux_sym_select_statement_token4,
    ACTIONS(206), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6493] = 1,
    ACTIONS(590), 17,
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
  [6513] = 2,
    ACTIONS(594), 1,
      anon_sym_DOT,
    ACTIONS(592), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6535] = 1,
    ACTIONS(596), 17,
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
  [6555] = 2,
    ACTIONS(600), 1,
      anon_sym_DOT,
    ACTIONS(598), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6577] = 1,
    ACTIONS(602), 17,
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
  [6597] = 1,
    ACTIONS(604), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
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
  [6617] = 2,
    ACTIONS(608), 1,
      anon_sym_DOT,
    ACTIONS(606), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6639] = 1,
    ACTIONS(610), 17,
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
  [6659] = 1,
    ACTIONS(612), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6678] = 1,
    ACTIONS(614), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6697] = 1,
    ACTIONS(616), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6716] = 1,
    ACTIONS(618), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6735] = 1,
    ACTIONS(620), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6754] = 1,
    ACTIONS(622), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6773] = 1,
    ACTIONS(624), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6792] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6811] = 1,
    ACTIONS(626), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6830] = 1,
    ACTIONS(628), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6849] = 1,
    ACTIONS(630), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6868] = 1,
    ACTIONS(632), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6887] = 1,
    ACTIONS(634), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6906] = 1,
    ACTIONS(636), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6925] = 1,
    ACTIONS(638), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6944] = 1,
    ACTIONS(640), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6963] = 1,
    ACTIONS(642), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [6982] = 1,
    ACTIONS(644), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7001] = 1,
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
  [7020] = 1,
    ACTIONS(646), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7039] = 1,
    ACTIONS(648), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7058] = 1,
    ACTIONS(268), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7077] = 1,
    ACTIONS(650), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7096] = 1,
    ACTIONS(274), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7115] = 1,
    ACTIONS(652), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7134] = 1,
    ACTIONS(654), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7153] = 1,
    ACTIONS(656), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7172] = 1,
    ACTIONS(658), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7191] = 1,
    ACTIONS(660), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7210] = 1,
    ACTIONS(662), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7229] = 1,
    ACTIONS(664), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7248] = 1,
    ACTIONS(666), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7267] = 1,
    ACTIONS(668), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7286] = 1,
    ACTIONS(592), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7305] = 1,
    ACTIONS(670), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7324] = 1,
    ACTIONS(672), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7343] = 1,
    ACTIONS(674), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7362] = 1,
    ACTIONS(676), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7381] = 1,
    ACTIONS(678), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7400] = 1,
    ACTIONS(680), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7419] = 1,
    ACTIONS(682), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7438] = 1,
    ACTIONS(684), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7457] = 1,
    ACTIONS(686), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7476] = 1,
    ACTIONS(688), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7495] = 1,
    ACTIONS(690), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7514] = 1,
    ACTIONS(692), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7533] = 1,
    ACTIONS(694), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7552] = 1,
    ACTIONS(696), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7571] = 1,
    ACTIONS(698), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7590] = 1,
    ACTIONS(700), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7609] = 1,
    ACTIONS(702), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7628] = 1,
    ACTIONS(704), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7647] = 1,
    ACTIONS(706), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7666] = 1,
    ACTIONS(708), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7685] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7704] = 1,
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
  [7723] = 1,
    ACTIONS(710), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7742] = 1,
    ACTIONS(712), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7761] = 1,
    ACTIONS(714), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7780] = 1,
    ACTIONS(716), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7799] = 1,
    ACTIONS(206), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7818] = 1,
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
  [7837] = 1,
    ACTIONS(718), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7856] = 1,
    ACTIONS(720), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7875] = 1,
    ACTIONS(722), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7894] = 1,
    ACTIONS(724), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7913] = 1,
    ACTIONS(726), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7932] = 1,
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
  [7951] = 1,
    ACTIONS(728), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7970] = 1,
    ACTIONS(730), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [7989] = 1,
    ACTIONS(732), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8008] = 1,
    ACTIONS(734), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8027] = 1,
    ACTIONS(736), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8046] = 1,
    ACTIONS(738), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8065] = 1,
    ACTIONS(740), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8084] = 2,
    ACTIONS(744), 1,
      anon_sym_SEMI,
    ACTIONS(742), 15,
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
  [8105] = 1,
    ACTIONS(746), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8124] = 1,
    ACTIONS(748), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8143] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8162] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8181] = 1,
    ACTIONS(750), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8200] = 1,
    ACTIONS(752), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8219] = 1,
    ACTIONS(754), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8238] = 1,
    ACTIONS(756), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8257] = 1,
    ACTIONS(758), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8276] = 1,
    ACTIONS(760), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8295] = 1,
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
  [8314] = 1,
    ACTIONS(762), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8333] = 1,
    ACTIONS(764), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8352] = 1,
    ACTIONS(766), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8371] = 1,
    ACTIONS(768), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8390] = 1,
    ACTIONS(770), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8409] = 1,
    ACTIONS(772), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8428] = 1,
    ACTIONS(774), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8447] = 1,
    ACTIONS(776), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8466] = 1,
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
  [8485] = 1,
    ACTIONS(778), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8504] = 1,
    ACTIONS(780), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8523] = 1,
    ACTIONS(782), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8542] = 1,
    ACTIONS(784), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8561] = 1,
    ACTIONS(786), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8580] = 1,
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
  [8599] = 1,
    ACTIONS(788), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8618] = 1,
    ACTIONS(790), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8637] = 1,
    ACTIONS(792), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8656] = 1,
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
  [8675] = 1,
    ACTIONS(794), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8694] = 1,
    ACTIONS(796), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8713] = 1,
    ACTIONS(798), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8732] = 1,
    ACTIONS(800), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8751] = 1,
    ACTIONS(802), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8770] = 1,
    ACTIONS(804), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8789] = 1,
    ACTIONS(554), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8808] = 1,
    ACTIONS(806), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8827] = 1,
    ACTIONS(808), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8846] = 1,
    ACTIONS(810), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8865] = 1,
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
  [8884] = 1,
    ACTIONS(812), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8903] = 1,
    ACTIONS(814), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8922] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8941] = 1,
    ACTIONS(816), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8960] = 1,
    ACTIONS(818), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8979] = 1,
    ACTIONS(820), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [8998] = 1,
    ACTIONS(822), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9017] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9036] = 1,
    ACTIONS(824), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9055] = 1,
    ACTIONS(826), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9074] = 1,
    ACTIONS(828), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9093] = 1,
    ACTIONS(830), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9112] = 1,
    ACTIONS(832), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9131] = 1,
    ACTIONS(834), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9150] = 1,
    ACTIONS(836), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9169] = 1,
    ACTIONS(838), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9188] = 1,
    ACTIONS(840), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9207] = 1,
    ACTIONS(842), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9226] = 1,
    ACTIONS(844), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9245] = 1,
    ACTIONS(846), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9264] = 1,
    ACTIONS(848), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9283] = 1,
    ACTIONS(850), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9302] = 1,
    ACTIONS(852), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9321] = 1,
    ACTIONS(854), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9340] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9359] = 1,
    ACTIONS(856), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9378] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9397] = 1,
    ACTIONS(858), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9416] = 9,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(862), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(695), 1,
      sym_constant,
    ACTIONS(860), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(523), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
    ACTIONS(212), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9451] = 1,
    ACTIONS(864), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9470] = 1,
    ACTIONS(866), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9489] = 1,
    ACTIONS(868), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9508] = 1,
    ACTIONS(870), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9527] = 1,
    ACTIONS(872), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9546] = 1,
    ACTIONS(874), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9565] = 1,
    ACTIONS(876), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9584] = 1,
    ACTIONS(878), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9603] = 1,
    ACTIONS(880), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9622] = 1,
    ACTIONS(882), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9641] = 1,
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
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9660] = 1,
    ACTIONS(884), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_update_token1,
      aux_sym_use_token1,
      aux_sym_grant_token1,
      aux_sym_revoke_token1,
      aux_sym_privilege_token3,
      aux_sym_list_roles_token1,
      aux_sym_apply_batch_token1,
  [9679] = 1,
    ACTIONS(886), 15,
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
  [9697] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(888), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(274), 1,
      sym_init_cond_definition,
    STATE(133), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9725] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(888), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(297), 1,
      sym_init_cond_definition,
    STATE(133), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9753] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(888), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(345), 1,
      sym_init_cond_definition,
    STATE(133), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9781] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(888), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(710), 1,
      sym_init_cond_definition,
    STATE(133), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9809] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(888), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(284), 1,
      sym_init_cond_definition,
    STATE(133), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9837] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(888), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(308), 1,
      sym_init_cond_definition,
    STATE(133), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9865] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(888), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(402), 1,
      sym_init_cond_definition,
    STATE(133), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9893] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(888), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(292), 1,
      sym_init_cond_definition,
    STATE(133), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9921] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(888), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(246), 1,
      sym_init_cond_definition,
    STATE(133), 4,
      sym_constant,
      sym_init_cond_list,
      sym_init_cond_list_nested,
      sym_init_cond_hash,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [9949] = 8,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(890), 1,
      anon_sym_STAR,
    ACTIONS(892), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(1270), 1,
      sym_function_args,
    ACTIONS(860), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(681), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(212), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [9980] = 9,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(894), 1,
      anon_sym_LPAREN,
    ACTIONS(896), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(542), 1,
      sym_init_cond_list,
    STATE(543), 1,
      sym_constant,
    STATE(682), 1,
      sym_init_cond_hash_item,
    ACTIONS(860), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    ACTIONS(212), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10013] = 7,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(892), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(944), 1,
      sym_function_args,
    ACTIONS(860), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(681), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(212), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10041] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(898), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    ACTIONS(860), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(739), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(212), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10066] = 5,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(894), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(730), 2,
      sym_constant,
      sym_init_cond_list,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10089] = 6,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(900), 1,
      sym_object_name,
    STATE(5), 1,
      sym__decimal_literal,
    ACTIONS(860), 2,
      aux_sym_constant_token2,
      sym__boolean_literal,
    STATE(79), 2,
      sym_function_call,
      sym_constant,
    ACTIONS(212), 5,
      aux_sym_constant_token1,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__code_block,
  [10114] = 4,
    ACTIONS(904), 1,
      aux_sym_privilege_token1,
    ACTIONS(906), 1,
      aux_sym_resource_token4,
    STATE(167), 1,
      sym_privilege,
    ACTIONS(902), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [10134] = 7,
    ACTIONS(908), 1,
      anon_sym_DOT,
    ACTIONS(910), 1,
      aux_sym_drop_index_token1,
    ACTIONS(912), 1,
      aux_sym_materialized_view_options_token1,
    ACTIONS(914), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(916), 1,
      aux_sym_alter_table_rename_token1,
    STATE(272), 1,
      sym_alter_table_operation,
    STATE(273), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10160] = 5,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(918), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(492), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10182] = 5,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(920), 1,
      aux_sym_relation_contains_key_token2,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(85), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10204] = 11,
    ACTIONS(922), 1,
      aux_sym_truncate_token2,
    ACTIONS(924), 1,
      aux_sym_create_index_token2,
    ACTIONS(926), 1,
      aux_sym_resource_token2,
    ACTIONS(928), 1,
      aux_sym_resource_token5,
    ACTIONS(930), 1,
      aux_sym_resource_token6,
    ACTIONS(932), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(934), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(936), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(938), 1,
      aux_sym_drop_type_token1,
    ACTIONS(940), 1,
      aux_sym_drop_user_token1,
    ACTIONS(942), 1,
      aux_sym_create_aggregate_token1,
  [10238] = 3,
    ACTIONS(904), 1,
      aux_sym_privilege_token1,
    STATE(1339), 1,
      sym_privilege,
    ACTIONS(902), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [10255] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(724), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10274] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(237), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10293] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(161), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10312] = 6,
    ACTIONS(944), 1,
      anon_sym_LPAREN,
    ACTIONS(950), 1,
      aux_sym_relation_element_token1,
    ACTIONS(952), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(954), 1,
      aux_sym_column_not_null_token1,
    ACTIONS(946), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(948), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10335] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(985), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10354] = 3,
    ACTIONS(904), 1,
      aux_sym_privilege_token1,
    STATE(1338), 1,
      sym_privilege,
    ACTIONS(902), 8,
      aux_sym_select_statement_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
      aux_sym_privilege_token3,
      aux_sym_privilege_token4,
      aux_sym_privilege_token5,
      aux_sym_privilege_token6,
      aux_sym_privilege_token7,
  [10371] = 6,
    ACTIONS(910), 1,
      aux_sym_drop_index_token1,
    ACTIONS(912), 1,
      aux_sym_materialized_view_options_token1,
    ACTIONS(914), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(916), 1,
      aux_sym_alter_table_rename_token1,
    STATE(256), 1,
      sym_alter_table_operation,
    STATE(273), 5,
      sym_alter_table_add,
      sym_alter_table_drop_columns,
      sym_alter_table_drop_compact_storage,
      sym_alter_table_rename,
      sym_alter_table_with,
  [10394] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(81), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10413] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(543), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10432] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(600), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10451] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(84), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10470] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(527), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10489] = 10,
    ACTIONS(956), 1,
      aux_sym_truncate_token2,
    ACTIONS(958), 1,
      aux_sym_create_index_token2,
    ACTIONS(960), 1,
      aux_sym_resource_token2,
    ACTIONS(962), 1,
      aux_sym_resource_token5,
    ACTIONS(964), 1,
      aux_sym_resource_token6,
    ACTIONS(966), 1,
      aux_sym_drop_aggregate_token1,
    ACTIONS(968), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(970), 1,
      aux_sym_drop_trigger_token1,
    ACTIONS(972), 1,
      aux_sym_drop_type_token1,
    ACTIONS(974), 1,
      aux_sym_drop_user_token1,
  [10520] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(549), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10539] = 4,
    ACTIONS(214), 1,
      aux_sym__decimal_literal_token1,
    STATE(5), 1,
      sym__decimal_literal,
    STATE(695), 1,
      sym_constant,
    ACTIONS(212), 7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      sym__string_literal,
      sym__float_literal,
      sym__boolean_literal,
      sym__code_block,
  [10558] = 5,
    ACTIONS(944), 1,
      anon_sym_LPAREN,
    ACTIONS(950), 1,
      aux_sym_relation_element_token1,
    ACTIONS(952), 1,
      aux_sym_relation_contains_key_token1,
    ACTIONS(946), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(948), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10578] = 6,
    ACTIONS(976), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(978), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(980), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(982), 1,
      sym_object_name,
    STATE(926), 1,
      sym_index_column_spec,
    STATE(1016), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10599] = 6,
    ACTIONS(976), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(978), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(980), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(982), 1,
      sym_object_name,
    STATE(1018), 1,
      sym_index_column_spec,
    STATE(1016), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10620] = 6,
    ACTIONS(984), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(986), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(988), 1,
      sym_object_name,
    STATE(392), 1,
      sym_table_options,
    STATE(1046), 1,
      sym_table_option_name,
    STATE(170), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [10641] = 6,
    ACTIONS(984), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(986), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(988), 1,
      sym_object_name,
    STATE(280), 1,
      sym_table_options,
    STATE(1046), 1,
      sym_table_option_name,
    STATE(170), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [10662] = 6,
    ACTIONS(976), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(978), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(980), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(982), 1,
      sym_object_name,
    STATE(923), 1,
      sym_index_column_spec,
    STATE(1016), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10683] = 6,
    ACTIONS(990), 1,
      anon_sym_DOT,
    ACTIONS(992), 1,
      aux_sym_privilege_token3,
    ACTIONS(994), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(996), 1,
      aux_sym_alter_table_rename_token1,
    STATE(281), 1,
      sym_alter_type_operation,
    STATE(282), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10704] = 6,
    ACTIONS(976), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(978), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(980), 1,
      aux_sym_index_full_spec_token1,
    ACTIONS(982), 1,
      sym_object_name,
    STATE(844), 1,
      sym_index_column_spec,
    STATE(1016), 3,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [10725] = 6,
    ACTIONS(984), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(986), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(988), 1,
      sym_object_name,
    STATE(337), 1,
      sym_table_options,
    STATE(1046), 1,
      sym_table_option_name,
    STATE(170), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [10746] = 6,
    ACTIONS(984), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(986), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(988), 1,
      sym_object_name,
    STATE(248), 1,
      sym_table_options,
    STATE(1046), 1,
      sym_table_option_name,
    STATE(170), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [10767] = 7,
    ACTIONS(998), 1,
      aux_sym_truncate_token2,
    ACTIONS(1000), 1,
      aux_sym_privilege_token1,
    ACTIONS(1002), 1,
      aux_sym_resource_token2,
    ACTIONS(1004), 1,
      aux_sym_resource_token5,
    ACTIONS(1006), 1,
      aux_sym_resource_token6,
    ACTIONS(1008), 1,
      sym_object_name,
    STATE(234), 1,
      sym_resource,
  [10789] = 3,
    ACTIONS(1014), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1010), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1012), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10803] = 3,
    ACTIONS(1020), 1,
      aux_sym_relation_element_token1,
    ACTIONS(1016), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1018), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10817] = 6,
    ACTIONS(1022), 1,
      anon_sym_LPAREN,
    ACTIONS(1024), 1,
      sym_object_name,
    STATE(80), 1,
      sym_relation_element,
    STATE(461), 1,
      sym_function_call,
    STATE(743), 1,
      sym_column_not_null,
    STATE(76), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10837] = 5,
    ACTIONS(984), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(986), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(988), 1,
      sym_object_name,
    STATE(1046), 1,
      sym_table_option_name,
    STATE(202), 3,
      sym_table_option_item,
      sym_compact_storage,
      sym_clustering_order,
  [10855] = 7,
    ACTIONS(998), 1,
      aux_sym_truncate_token2,
    ACTIONS(1000), 1,
      aux_sym_privilege_token1,
    ACTIONS(1002), 1,
      aux_sym_resource_token2,
    ACTIONS(1004), 1,
      aux_sym_resource_token5,
    ACTIONS(1006), 1,
      aux_sym_resource_token6,
    ACTIONS(1008), 1,
      sym_object_name,
    STATE(1166), 1,
      sym_resource,
  [10877] = 5,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(1026), 1,
      aux_sym__decimal_literal_token1,
    STATE(802), 1,
      sym__decimal_literal,
    STATE(803), 3,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [10895] = 7,
    ACTIONS(1028), 1,
      aux_sym_select_statement_token2,
    ACTIONS(1030), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1032), 1,
      anon_sym_STAR,
    ACTIONS(1034), 1,
      sym_object_name,
    STATE(598), 1,
      sym_select_element,
    STATE(603), 1,
      sym_function_call,
    STATE(770), 1,
      sym_select_elements,
  [10917] = 5,
    ACTIONS(992), 1,
      aux_sym_privilege_token3,
    ACTIONS(994), 1,
      aux_sym_alter_table_add_token1,
    ACTIONS(996), 1,
      aux_sym_alter_table_rename_token1,
    STATE(247), 1,
      sym_alter_type_operation,
    STATE(282), 3,
      sym_alter_type_alter_type,
      sym_alter_type_add,
      sym_alter_type_rename,
  [10935] = 7,
    ACTIONS(998), 1,
      aux_sym_truncate_token2,
    ACTIONS(1000), 1,
      aux_sym_privilege_token1,
    ACTIONS(1002), 1,
      aux_sym_resource_token2,
    ACTIONS(1004), 1,
      aux_sym_resource_token5,
    ACTIONS(1006), 1,
      aux_sym_resource_token6,
    ACTIONS(1008), 1,
      sym_object_name,
    STATE(1164), 1,
      sym_resource,
  [10957] = 6,
    ACTIONS(1022), 1,
      anon_sym_LPAREN,
    ACTIONS(1036), 1,
      sym_object_name,
    STATE(75), 1,
      sym_relation_element,
    STATE(96), 1,
      sym_relation_elements,
    STATE(461), 1,
      sym_function_call,
    STATE(76), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [10977] = 2,
    ACTIONS(1038), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1040), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [10988] = 5,
    ACTIONS(1022), 1,
      anon_sym_LPAREN,
    ACTIONS(1036), 1,
      sym_object_name,
    STATE(80), 1,
      sym_relation_element,
    STATE(461), 1,
      sym_function_call,
    STATE(76), 2,
      sym_relation_contains_key,
      sym_relation_contains,
  [11005] = 6,
    ACTIONS(1042), 1,
      aux_sym_truncate_token2,
    ACTIONS(1044), 1,
      aux_sym_resource_token2,
    ACTIONS(1046), 1,
      aux_sym_resource_token6,
    ACTIONS(1048), 1,
      aux_sym_drop_materialized_view_token1,
    ACTIONS(1050), 1,
      aux_sym_drop_type_token1,
    ACTIONS(1052), 1,
      aux_sym_drop_user_token1,
  [11024] = 6,
    ACTIONS(1032), 1,
      anon_sym_STAR,
    ACTIONS(1034), 1,
      sym_object_name,
    ACTIONS(1054), 1,
      aux_sym_select_statement_token3,
    STATE(598), 1,
      sym_select_element,
    STATE(603), 1,
      sym_function_call,
    STATE(756), 1,
      sym_select_elements,
  [11043] = 1,
    ACTIONS(1056), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11051] = 3,
    ACTIONS(1060), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(592), 1,
      sym_using_timestamp_spec,
    ACTIONS(1058), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11063] = 5,
    ACTIONS(986), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(988), 1,
      sym_object_name,
    STATE(224), 1,
      sym_table_option_item,
    STATE(316), 1,
      sym_clustering_order,
    STATE(1046), 1,
      sym_table_option_name,
  [11079] = 4,
    ACTIONS(944), 1,
      anon_sym_LPAREN,
    ACTIONS(1064), 1,
      anon_sym_DOT,
    ACTIONS(1066), 1,
      aux_sym_select_element_token1,
    ACTIONS(1062), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [11093] = 5,
    ACTIONS(1032), 1,
      anon_sym_STAR,
    ACTIONS(1068), 1,
      sym_object_name,
    STATE(598), 1,
      sym_select_element,
    STATE(603), 1,
      sym_function_call,
    STATE(756), 1,
      sym_select_elements,
  [11109] = 5,
    ACTIONS(986), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(988), 1,
      sym_object_name,
    STATE(224), 1,
      sym_table_option_item,
    STATE(360), 1,
      sym_clustering_order,
    STATE(1046), 1,
      sym_table_option_name,
  [11125] = 5,
    ACTIONS(1070), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1072), 1,
      sym_object_name,
    STATE(494), 1,
      sym_from_spec,
    STATE(646), 1,
      sym_delete_column_item,
    STATE(746), 1,
      sym_delete_column_list,
  [11141] = 4,
    ACTIONS(1074), 1,
      anon_sym_LPAREN,
    ACTIONS(1076), 1,
      sym_object_name,
    STATE(920), 1,
      sym_primary_key_definition,
    STATE(921), 2,
      sym_compound_key,
      sym_composite_key,
  [11155] = 5,
    ACTIONS(1078), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(1080), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(1082), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(1084), 1,
      aux_sym_role_with_option_token4,
    STATE(166), 1,
      sym_role_with_option,
  [11171] = 3,
    ACTIONS(1088), 1,
      anon_sym_LBRACE,
    ACTIONS(1086), 2,
      sym__string_literal,
      sym__float_literal,
    STATE(206), 2,
      sym_option_hash,
      sym_table_option_value,
  [11183] = 1,
    ACTIONS(1090), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11191] = 3,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    STATE(476), 1,
      aux_sym_assignment_set_repeat1,
    ACTIONS(1095), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11203] = 1,
    ACTIONS(1097), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11211] = 1,
    ACTIONS(1099), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11219] = 5,
    ACTIONS(1101), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1103), 1,
      anon_sym_LPAREN,
    ACTIONS(1105), 1,
      aux_sym_insert_values_spec_token1,
    STATE(108), 1,
      sym_insert_values_spec,
    STATE(668), 1,
      sym_insert_column_spec,
  [11235] = 5,
    ACTIONS(986), 1,
      aux_sym_clustering_order_token1,
    ACTIONS(988), 1,
      sym_object_name,
    STATE(139), 1,
      sym_table_option_item,
    STATE(299), 1,
      sym_clustering_order,
    STATE(1046), 1,
      sym_table_option_name,
  [11251] = 1,
    ACTIONS(1107), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11259] = 1,
    ACTIONS(1109), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11267] = 1,
    ACTIONS(1111), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_where_spec_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11275] = 5,
    ACTIONS(1113), 1,
      sym__string_literal,
    ACTIONS(1115), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1117), 1,
      aux_sym_create_index_token3,
    ACTIONS(1119), 1,
      sym_object_name,
    STATE(1316), 1,
      sym_index_name,
  [11291] = 5,
    ACTIONS(1078), 1,
      aux_sym_role_with_option_token1,
    ACTIONS(1080), 1,
      aux_sym_role_with_option_token2,
    ACTIONS(1082), 1,
      aux_sym_role_with_option_token3,
    ACTIONS(1084), 1,
      aux_sym_role_with_option_token4,
    STATE(210), 1,
      sym_role_with_option,
  [11307] = 5,
    ACTIONS(1032), 1,
      anon_sym_STAR,
    ACTIONS(1068), 1,
      sym_object_name,
    STATE(598), 1,
      sym_select_element,
    STATE(603), 1,
      sym_function_call,
    STATE(709), 1,
      sym_select_elements,
  [11323] = 3,
    ACTIONS(1060), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(690), 1,
      sym_using_timestamp_spec,
    ACTIONS(1121), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11335] = 5,
    ACTIONS(1070), 1,
      aux_sym_from_spec_token1,
    ACTIONS(1072), 1,
      sym_object_name,
    STATE(496), 1,
      sym_from_spec,
    STATE(646), 1,
      sym_delete_column_item,
    STATE(729), 1,
      sym_delete_column_list,
  [11351] = 5,
    ACTIONS(1101), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1103), 1,
      anon_sym_LPAREN,
    ACTIONS(1105), 1,
      aux_sym_insert_values_spec_token1,
    STATE(109), 1,
      sym_insert_values_spec,
    STATE(671), 1,
      sym_insert_column_spec,
  [11367] = 4,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      sym_where_spec,
    STATE(499), 1,
      aux_sym_update_repeat1,
  [11380] = 4,
    ACTIONS(1125), 1,
      aux_sym_delete_statement_token3,
    ACTIONS(1127), 1,
      sym_object_name,
    STATE(157), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [11393] = 4,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
    ACTIONS(1131), 1,
      anon_sym_COLON,
    ACTIONS(1133), 1,
      anon_sym_RBRACE,
    STATE(657), 1,
      aux_sym_assignment_set_repeat1,
  [11406] = 4,
    ACTIONS(1135), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1137), 1,
      aux_sym_create_materialized_view_token1,
    STATE(514), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(691), 1,
      aux_sym_relation_elements_repeat1,
  [11419] = 4,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1060), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(141), 1,
      sym_where_spec,
    STATE(772), 1,
      sym_using_timestamp_spec,
  [11432] = 1,
    ACTIONS(1139), 4,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [11439] = 4,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1060), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(190), 1,
      sym_where_spec,
    STATE(701), 1,
      sym_using_timestamp_spec,
  [11452] = 4,
    ACTIONS(1127), 1,
      sym_object_name,
    ACTIONS(1141), 1,
      aux_sym_delete_statement_token3,
    STATE(157), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [11465] = 4,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      sym_where_spec,
    STATE(502), 1,
      aux_sym_update_repeat1,
  [11478] = 4,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      sym_where_spec,
    STATE(548), 1,
      aux_sym_update_repeat1,
  [11491] = 4,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      sym_where_spec,
    STATE(548), 1,
      aux_sym_update_repeat1,
  [11504] = 4,
    ACTIONS(1127), 1,
      sym_object_name,
    ACTIONS(1143), 1,
      aux_sym_delete_statement_token3,
    STATE(157), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [11517] = 4,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      sym_where_spec,
    STATE(548), 1,
      aux_sym_update_repeat1,
  [11530] = 4,
    ACTIONS(1127), 1,
      sym_object_name,
    ACTIONS(1145), 1,
      aux_sym_delete_statement_token3,
    STATE(157), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [11543] = 4,
    ACTIONS(1127), 1,
      sym_object_name,
    ACTIONS(1147), 1,
      aux_sym_delete_statement_token3,
    STATE(157), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [11556] = 4,
    ACTIONS(1127), 1,
      sym_object_name,
    ACTIONS(1149), 1,
      aux_sym_delete_statement_token3,
    STATE(157), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [11569] = 4,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      sym_where_spec,
    STATE(517), 1,
      aux_sym_update_repeat1,
  [11582] = 4,
    ACTIONS(224), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1151), 1,
      anon_sym_DOT,
    ACTIONS(1153), 1,
      aux_sym_update_token2,
    STATE(1150), 1,
      sym_using_ttl_timestamp,
  [11595] = 4,
    ACTIONS(1127), 1,
      sym_object_name,
    ACTIONS(1155), 1,
      aux_sym_delete_statement_token3,
    STATE(157), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [11608] = 4,
    ACTIONS(1113), 1,
      sym__string_literal,
    ACTIONS(1119), 1,
      sym_object_name,
    ACTIONS(1157), 1,
      aux_sym_create_index_token3,
    STATE(1024), 1,
      sym_index_name,
  [11621] = 4,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1060), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(159), 1,
      sym_where_spec,
    STATE(719), 1,
      sym_using_timestamp_spec,
  [11634] = 4,
    ACTIONS(1127), 1,
      sym_object_name,
    ACTIONS(1159), 1,
      aux_sym_delete_statement_token3,
    STATE(157), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [11647] = 4,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      sym_where_spec,
    STATE(548), 1,
      aux_sym_update_repeat1,
  [11660] = 4,
    ACTIONS(1127), 1,
      sym_object_name,
    ACTIONS(1161), 1,
      aux_sym_delete_statement_token3,
    STATE(157), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [11673] = 4,
    ACTIONS(1135), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1163), 1,
      aux_sym_create_materialized_view_token1,
    STATE(624), 1,
      aux_sym_materialized_view_where_repeat1,
    STATE(643), 1,
      aux_sym_relation_elements_repeat1,
  [11686] = 4,
    ACTIONS(1127), 1,
      sym_object_name,
    ACTIONS(1165), 1,
      aux_sym_delete_statement_token3,
    STATE(157), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [11699] = 4,
    ACTIONS(1127), 1,
      sym_object_name,
    ACTIONS(1167), 1,
      aux_sym_delete_statement_token3,
    STATE(157), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [11712] = 4,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      sym_where_spec,
    STATE(548), 1,
      aux_sym_update_repeat1,
  [11725] = 4,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      sym_where_spec,
    STATE(512), 1,
      aux_sym_update_repeat1,
  [11738] = 4,
    ACTIONS(1127), 1,
      sym_object_name,
    ACTIONS(1169), 1,
      aux_sym_delete_statement_token3,
    STATE(157), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [11751] = 4,
    ACTIONS(1127), 1,
      sym_object_name,
    ACTIONS(1171), 1,
      aux_sym_delete_statement_token3,
    STATE(157), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [11764] = 4,
    ACTIONS(1127), 1,
      sym_object_name,
    ACTIONS(1173), 1,
      aux_sym_delete_statement_token3,
    STATE(157), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [11777] = 4,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      sym_where_spec,
    STATE(538), 1,
      aux_sym_update_repeat1,
  [11790] = 2,
    ACTIONS(1175), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
    ACTIONS(1177), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11799] = 4,
    ACTIONS(1127), 1,
      sym_object_name,
    ACTIONS(1179), 1,
      aux_sym_delete_statement_token3,
    STATE(157), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [11812] = 4,
    ACTIONS(224), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1181), 1,
      anon_sym_DOT,
    ACTIONS(1183), 1,
      aux_sym_update_token2,
    STATE(1275), 1,
      sym_using_ttl_timestamp,
  [11825] = 4,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      sym_where_spec,
    STATE(548), 1,
      aux_sym_update_repeat1,
  [11838] = 1,
    ACTIONS(1095), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11845] = 4,
    ACTIONS(1127), 1,
      sym_object_name,
    ACTIONS(1185), 1,
      aux_sym_delete_statement_token3,
    STATE(157), 1,
      sym_if_condition,
    STATE(314), 1,
      sym_if_condition_list,
  [11858] = 4,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      sym_where_spec,
    STATE(532), 1,
      aux_sym_update_repeat1,
  [11871] = 3,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1187), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11882] = 3,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    STATE(530), 1,
      aux_sym_relation_element_repeat1,
    ACTIONS(1189), 2,
      anon_sym_RPAREN,
      aux_sym_from_spec_token1,
  [11893] = 4,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      sym_where_spec,
    STATE(548), 1,
      aux_sym_update_repeat1,
  [11906] = 4,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      sym_where_spec,
    STATE(500), 1,
      aux_sym_update_repeat1,
  [11919] = 4,
    ACTIONS(944), 1,
      anon_sym_LPAREN,
    ACTIONS(1191), 1,
      anon_sym_COMMA,
    ACTIONS(1193), 1,
      anon_sym_RPAREN,
    STATE(569), 1,
      aux_sym_function_args_repeat1,
  [11932] = 4,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      sym_where_spec,
    STATE(526), 1,
      aux_sym_update_repeat1,
  [11945] = 4,
    ACTIONS(1195), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1197), 1,
      sym_object_name,
    STATE(765), 1,
      sym_column_definition,
    STATE(932), 1,
      sym_primary_key_element,
  [11958] = 3,
    ACTIONS(1201), 1,
      aux_sym_create_materialized_view_token1,
    STATE(769), 1,
      sym_primary_key_column,
    ACTIONS(1199), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11969] = 4,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      sym_where_spec,
    STATE(548), 1,
      aux_sym_update_repeat1,
  [11982] = 4,
    ACTIONS(1195), 1,
      aux_sym_create_materialized_view_token1,
    ACTIONS(1197), 1,
      sym_object_name,
    STATE(765), 1,
      sym_column_definition,
    STATE(891), 1,
      sym_primary_key_element,
  [11995] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(1025), 1,
      sym_return_mode,
  [12005] = 3,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1209), 1,
      anon_sym_RPAREN,
    STATE(574), 1,
      aux_sym_create_function_repeat1,
  [12015] = 3,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
    ACTIONS(1213), 1,
      anon_sym_RPAREN,
    STATE(573), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12025] = 3,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
    ACTIONS(1215), 1,
      anon_sym_RPAREN,
    STATE(570), 1,
      aux_sym_assignment_set_repeat1,
  [12035] = 2,
    ACTIONS(1219), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(1217), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [12043] = 3,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
    ACTIONS(1223), 1,
      anon_sym_RPAREN,
    STATE(673), 1,
      aux_sym_clustering_key_list_repeat1,
  [12053] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1227), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      aux_sym_create_type_repeat1,
  [12063] = 3,
    ACTIONS(224), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1229), 1,
      aux_sym_update_token2,
    STATE(1070), 1,
      sym_using_ttl_timestamp,
  [12073] = 3,
    ACTIONS(1231), 1,
      anon_sym_COMMA,
    ACTIONS(1234), 1,
      aux_sym_where_spec_token1,
    STATE(548), 1,
      aux_sym_update_repeat1,
  [12083] = 3,
    ACTIONS(1236), 1,
      anon_sym_COMMA,
    ACTIONS(1238), 1,
      anon_sym_RBRACE,
    STATE(647), 1,
      aux_sym_assignment_map_repeat1,
  [12093] = 3,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1240), 1,
      anon_sym_RPAREN,
    STATE(612), 1,
      aux_sym_create_function_repeat1,
  [12103] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(1021), 1,
      sym_return_mode,
  [12113] = 3,
    ACTIONS(1242), 1,
      sym_object_name,
    STATE(535), 1,
      sym_assignment_element,
    STATE(1185), 1,
      sym_indexed_column,
  [12123] = 2,
    ACTIONS(1244), 1,
      aux_sym_resource_token1,
    ACTIONS(1246), 2,
      aux_sym_resource_token3,
      aux_sym_resource_token4,
  [12131] = 3,
    ACTIONS(1248), 1,
      anon_sym_RPAREN,
    ACTIONS(1250), 1,
      sym_object_name,
    STATE(652), 1,
      sym_param,
  [12141] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(1208), 1,
      sym_return_mode,
  [12151] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(1252), 1,
      anon_sym_RPAREN,
    STATE(656), 1,
      aux_sym_relation_element_repeat2,
  [12161] = 3,
    ACTIONS(1254), 1,
      aux_sym_truncate_token2,
    ACTIONS(1256), 1,
      sym_object_name,
    STATE(351), 1,
      sym_table_name,
  [12171] = 3,
    ACTIONS(1258), 1,
      anon_sym_COMMA,
    ACTIONS(1260), 1,
      anon_sym_RBRACE,
    STATE(620), 1,
      aux_sym_replication_list_repeat1,
  [12181] = 3,
    ACTIONS(1262), 1,
      aux_sym_compact_storage_token1,
    ACTIONS(1264), 1,
      sym_object_name,
    STATE(396), 1,
      sym_alter_table_drop_column_list,
  [12191] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1266), 1,
      anon_sym_RPAREN,
    STATE(590), 1,
      aux_sym_create_type_repeat1,
  [12201] = 3,
    ACTIONS(1268), 1,
      anon_sym_DOT,
    ACTIONS(1270), 1,
      aux_sym_where_spec_token1,
    STATE(1199), 1,
      sym_materialized_view_where,
  [12211] = 3,
    ACTIONS(1272), 1,
      sym_object_name,
    STATE(165), 1,
      sym_alter_type_rename_item,
    STATE(366), 1,
      sym_alter_type_rename_list,
  [12221] = 3,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1277), 1,
      anon_sym_RBRACE,
    STATE(563), 1,
      aux_sym_assignment_map_repeat1,
  [12231] = 3,
    ACTIONS(1242), 1,
      sym_object_name,
    STATE(490), 1,
      sym_assignment_element,
    STATE(1185), 1,
      sym_indexed_column,
  [12241] = 3,
    ACTIONS(1250), 1,
      sym_object_name,
    ACTIONS(1279), 1,
      anon_sym_RPAREN,
    STATE(666), 1,
      sym_param,
  [12251] = 3,
    ACTIONS(1250), 1,
      sym_object_name,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
    STATE(541), 1,
      sym_param,
  [12261] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(1283), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
  [12271] = 3,
    ACTIONS(1242), 1,
      sym_object_name,
    STATE(533), 1,
      sym_assignment_element,
    STATE(1185), 1,
      sym_indexed_column,
  [12281] = 3,
    ACTIONS(1191), 1,
      anon_sym_COMMA,
    ACTIONS(1285), 1,
      anon_sym_RPAREN,
    STATE(650), 1,
      aux_sym_function_args_repeat1,
  [12291] = 3,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
    ACTIONS(1287), 1,
      anon_sym_RPAREN,
    STATE(476), 1,
      aux_sym_assignment_set_repeat1,
  [12301] = 3,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1289), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_create_function_repeat1,
  [12311] = 3,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(1291), 1,
      anon_sym_RPAREN,
    STATE(649), 1,
      aux_sym_relation_element_repeat1,
  [12321] = 3,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
    ACTIONS(1293), 1,
      anon_sym_RPAREN,
    STATE(596), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12331] = 3,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1295), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_create_function_repeat1,
  [12341] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(933), 1,
      sym_return_mode,
  [12351] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(1048), 1,
      sym_return_mode,
  [12361] = 3,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1297), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_create_function_repeat1,
  [12371] = 3,
    ACTIONS(1242), 1,
      sym_object_name,
    STATE(506), 1,
      sym_assignment_element,
    STATE(1185), 1,
      sym_indexed_column,
  [12381] = 3,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1299), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_create_function_repeat1,
  [12391] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(937), 1,
      sym_return_mode,
  [12401] = 3,
    ACTIONS(1301), 1,
      anon_sym_COMMA,
    ACTIONS(1304), 1,
      aux_sym_from_spec_token1,
    STATE(581), 1,
      aux_sym_delete_column_list_repeat1,
  [12411] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
    STATE(621), 1,
      aux_sym_init_cond_hash_repeat1,
  [12421] = 3,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1310), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_create_function_repeat1,
  [12431] = 3,
    ACTIONS(1312), 1,
      anon_sym_COMMA,
    ACTIONS(1315), 1,
      anon_sym_RBRACE,
    STATE(584), 1,
      aux_sym_option_hash_repeat1,
  [12441] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(918), 1,
      sym_return_mode,
  [12451] = 3,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_create_function_repeat1,
  [12461] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(884), 1,
      sym_return_mode,
  [12471] = 3,
    ACTIONS(1319), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(1321), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(1323), 1,
      aux_sym_update_token1,
  [12481] = 3,
    ACTIONS(1250), 1,
      sym_object_name,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
    STATE(644), 1,
      sym_param,
  [12491] = 3,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
    STATE(590), 1,
      aux_sym_create_type_repeat1,
  [12501] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(1167), 1,
      sym_return_mode,
  [12511] = 1,
    ACTIONS(1121), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [12517] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1332), 1,
      anon_sym_RPAREN,
    STATE(633), 1,
      aux_sym_create_type_repeat1,
  [12527] = 3,
    ACTIONS(1250), 1,
      sym_object_name,
    ACTIONS(1334), 1,
      anon_sym_RPAREN,
    STATE(631), 1,
      sym_param,
  [12537] = 3,
    ACTIONS(1336), 1,
      anon_sym_COMMA,
    ACTIONS(1338), 1,
      aux_sym_from_spec_token1,
    STATE(581), 1,
      aux_sym_delete_column_list_repeat1,
  [12547] = 3,
    ACTIONS(1340), 1,
      anon_sym_COMMA,
    ACTIONS(1343), 1,
      anon_sym_RPAREN,
    STATE(596), 1,
      aux_sym_init_cond_list_nested_repeat1,
  [12557] = 3,
    ACTIONS(1345), 1,
      anon_sym_COMMA,
    ACTIONS(1347), 1,
      anon_sym_RPAREN,
    STATE(616), 1,
      aux_sym_column_definition_list_repeat1,
  [12567] = 3,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    ACTIONS(1351), 1,
      aux_sym_from_spec_token1,
    STATE(625), 1,
      aux_sym_select_elements_repeat1,
  [12577] = 3,
    ACTIONS(1353), 1,
      anon_sym_COMMA,
    ACTIONS(1355), 1,
      anon_sym_RBRACE,
    STATE(584), 1,
      aux_sym_option_hash_repeat1,
  [12587] = 3,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
    ACTIONS(1357), 1,
      anon_sym_RBRACK,
    STATE(660), 1,
      aux_sym_assignment_set_repeat1,
  [12597] = 3,
    ACTIONS(1270), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1359), 1,
      anon_sym_DOT,
    STATE(1066), 1,
      sym_materialized_view_where,
  [12607] = 3,
    ACTIONS(1361), 1,
      anon_sym_COMMA,
    ACTIONS(1363), 1,
      anon_sym_GT,
    STATE(614), 1,
      aux_sym_data_type_definition_repeat1,
  [12617] = 2,
    ACTIONS(1367), 1,
      aux_sym_select_element_token1,
    ACTIONS(1365), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12625] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1369), 1,
      anon_sym_RPAREN,
    STATE(678), 1,
      aux_sym_create_type_repeat1,
  [12635] = 3,
    ACTIONS(1371), 1,
      anon_sym_COMMA,
    ACTIONS(1373), 1,
      anon_sym_RPAREN,
    STATE(655), 1,
      aux_sym_expression_list_repeat1,
  [12645] = 3,
    ACTIONS(1026), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1375), 1,
      sym__string_literal,
    STATE(1267), 1,
      sym__decimal_literal,
  [12655] = 3,
    ACTIONS(1250), 1,
      sym_object_name,
    ACTIONS(1377), 1,
      anon_sym_RPAREN,
    STATE(670), 1,
      sym_param,
  [12665] = 3,
    ACTIONS(1379), 1,
      sym_object_name,
    STATE(597), 1,
      sym_column_definition,
    STATE(893), 1,
      sym_column_definition_list,
  [12675] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(1000), 1,
      sym_return_mode,
  [12685] = 2,
    ACTIONS(1383), 1,
      anon_sym_LBRACK,
    ACTIONS(1381), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [12693] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(1078), 1,
      sym_return_mode,
  [12703] = 3,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1385), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_create_function_repeat1,
  [12713] = 3,
    ACTIONS(1353), 1,
      anon_sym_COMMA,
    ACTIONS(1387), 1,
      anon_sym_RBRACE,
    STATE(599), 1,
      aux_sym_option_hash_repeat1,
  [12723] = 3,
    ACTIONS(1389), 1,
      anon_sym_COMMA,
    ACTIONS(1392), 1,
      anon_sym_GT,
    STATE(614), 1,
      aux_sym_data_type_definition_repeat1,
  [12733] = 3,
    ACTIONS(1394), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1396), 1,
      sym_object_name,
    STATE(827), 1,
      sym_user_name,
  [12743] = 3,
    ACTIONS(1398), 1,
      anon_sym_COMMA,
    ACTIONS(1400), 1,
      anon_sym_RPAREN,
    STATE(617), 1,
      aux_sym_column_definition_list_repeat1,
  [12753] = 3,
    ACTIONS(1402), 1,
      anon_sym_COMMA,
    ACTIONS(1405), 1,
      anon_sym_RPAREN,
    STATE(617), 1,
      aux_sym_column_definition_list_repeat1,
  [12763] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(995), 1,
      sym_return_mode,
  [12773] = 3,
    ACTIONS(1270), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1407), 1,
      anon_sym_DOT,
    STATE(955), 1,
      sym_materialized_view_where,
  [12783] = 3,
    ACTIONS(1409), 1,
      anon_sym_COMMA,
    ACTIONS(1412), 1,
      anon_sym_RBRACE,
    STATE(620), 1,
      aux_sym_replication_list_repeat1,
  [12793] = 3,
    ACTIONS(1414), 1,
      anon_sym_COMMA,
    ACTIONS(1417), 1,
      anon_sym_RPAREN,
    STATE(621), 1,
      aux_sym_init_cond_hash_repeat1,
  [12803] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1419), 1,
      anon_sym_RPAREN,
    STATE(560), 1,
      aux_sym_create_type_repeat1,
  [12813] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(1082), 1,
      sym_return_mode,
  [12823] = 3,
    ACTIONS(1421), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1424), 1,
      aux_sym_create_materialized_view_token1,
    STATE(624), 1,
      aux_sym_materialized_view_where_repeat1,
  [12833] = 3,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    ACTIONS(1426), 1,
      aux_sym_from_spec_token1,
    STATE(672), 1,
      aux_sym_select_elements_repeat1,
  [12843] = 3,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1428), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_create_function_repeat1,
  [12853] = 3,
    ACTIONS(1068), 1,
      sym_object_name,
    STATE(603), 1,
      sym_function_call,
    STATE(716), 1,
      sym_select_element,
  [12863] = 3,
    ACTIONS(1026), 1,
      aux_sym__decimal_literal_token1,
    ACTIONS(1430), 1,
      sym__string_literal,
    STATE(760), 1,
      sym__decimal_literal,
  [12873] = 3,
    ACTIONS(1250), 1,
      sym_object_name,
    ACTIONS(1432), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      sym_param,
  [12883] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(878), 1,
      sym_return_mode,
  [12893] = 3,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1434), 1,
      anon_sym_RPAREN,
    STATE(626), 1,
      aux_sym_create_function_repeat1,
  [12903] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(852), 1,
      sym_return_mode,
  [12913] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1436), 1,
      anon_sym_RPAREN,
    STATE(590), 1,
      aux_sym_create_type_repeat1,
  [12923] = 3,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1438), 1,
      anon_sym_RPAREN,
    STATE(577), 1,
      aux_sym_create_function_repeat1,
  [12933] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(848), 1,
      sym_return_mode,
  [12943] = 3,
    ACTIONS(1258), 1,
      anon_sym_COMMA,
    ACTIONS(1440), 1,
      anon_sym_RBRACE,
    STATE(558), 1,
      aux_sym_replication_list_repeat1,
  [12953] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(873), 1,
      sym_return_mode,
  [12963] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    ACTIONS(1445), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      aux_sym_create_function_repeat1,
  [12973] = 3,
    ACTIONS(1371), 1,
      anon_sym_COMMA,
    ACTIONS(1447), 1,
      anon_sym_RPAREN,
    STATE(605), 1,
      aux_sym_expression_list_repeat1,
  [12983] = 3,
    ACTIONS(1242), 1,
      sym_object_name,
    STATE(529), 1,
      sym_assignment_element,
    STATE(1185), 1,
      sym_indexed_column,
  [12993] = 3,
    ACTIONS(1250), 1,
      sym_object_name,
    ACTIONS(1449), 1,
      anon_sym_RPAREN,
    STATE(550), 1,
      sym_param,
  [13003] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(963), 1,
      sym_return_mode,
  [13013] = 3,
    ACTIONS(141), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1451), 1,
      aux_sym_create_materialized_view_token1,
    STATE(73), 1,
      aux_sym_relation_elements_repeat1,
  [13023] = 3,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1453), 1,
      anon_sym_RPAREN,
    STATE(571), 1,
      aux_sym_create_function_repeat1,
  [13033] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(968), 1,
      sym_return_mode,
  [13043] = 3,
    ACTIONS(1336), 1,
      anon_sym_COMMA,
    ACTIONS(1455), 1,
      aux_sym_from_spec_token1,
    STATE(595), 1,
      aux_sym_delete_column_list_repeat1,
  [13053] = 3,
    ACTIONS(1236), 1,
      anon_sym_COMMA,
    ACTIONS(1457), 1,
      anon_sym_RBRACE,
    STATE(563), 1,
      aux_sym_assignment_map_repeat1,
  [13063] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(1009), 1,
      sym_return_mode,
  [13073] = 3,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(1459), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_relation_element_repeat1,
  [13083] = 3,
    ACTIONS(1461), 1,
      anon_sym_COMMA,
    ACTIONS(1464), 1,
      anon_sym_RPAREN,
    STATE(650), 1,
      aux_sym_function_args_repeat1,
  [13093] = 3,
    ACTIONS(1361), 1,
      anon_sym_COMMA,
    ACTIONS(1466), 1,
      anon_sym_GT,
    STATE(602), 1,
      aux_sym_data_type_definition_repeat1,
  [13103] = 3,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1468), 1,
      anon_sym_RPAREN,
    STATE(583), 1,
      aux_sym_create_function_repeat1,
  [13113] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(1470), 1,
      anon_sym_RPAREN,
    STATE(567), 1,
      aux_sym_relation_element_repeat2,
  [13123] = 3,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
    ACTIONS(1472), 1,
      anon_sym_RPAREN,
    STATE(658), 1,
      aux_sym_clustering_key_list_repeat1,
  [13133] = 3,
    ACTIONS(1474), 1,
      anon_sym_COMMA,
    ACTIONS(1477), 1,
      anon_sym_RPAREN,
    STATE(655), 1,
      aux_sym_expression_list_repeat1,
  [13143] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(1470), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_relation_element_repeat2,
  [13153] = 3,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
    ACTIONS(1479), 1,
      anon_sym_RBRACE,
    STATE(476), 1,
      aux_sym_assignment_set_repeat1,
  [13163] = 3,
    ACTIONS(1481), 1,
      anon_sym_COMMA,
    ACTIONS(1484), 1,
      anon_sym_RPAREN,
    STATE(658), 1,
      aux_sym_clustering_key_list_repeat1,
  [13173] = 2,
    ACTIONS(944), 1,
      anon_sym_LPAREN,
    ACTIONS(1464), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13181] = 3,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
    ACTIONS(1486), 1,
      anon_sym_RBRACK,
    STATE(476), 1,
      aux_sym_assignment_set_repeat1,
  [13191] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1488), 1,
      anon_sym_RPAREN,
    STATE(590), 1,
      aux_sym_create_type_repeat1,
  [13201] = 3,
    ACTIONS(1256), 1,
      sym_object_name,
    ACTIONS(1490), 1,
      aux_sym_delete_statement_token2,
    STATE(1322), 1,
      sym_table_name,
  [13211] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(1129), 1,
      sym_return_mode,
  [13221] = 3,
    ACTIONS(1242), 1,
      sym_object_name,
    STATE(498), 1,
      sym_assignment_element,
    STATE(1185), 1,
      sym_indexed_column,
  [13231] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(859), 1,
      sym_return_mode,
  [13241] = 3,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1492), 1,
      anon_sym_RPAREN,
    STATE(586), 1,
      aux_sym_create_function_repeat1,
  [13251] = 3,
    ACTIONS(224), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(1494), 1,
      aux_sym_update_token2,
    STATE(956), 1,
      sym_using_ttl_timestamp,
  [13261] = 3,
    ACTIONS(1101), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1105), 1,
      aux_sym_insert_values_spec_token1,
    STATE(107), 1,
      sym_insert_values_spec,
  [13271] = 3,
    ACTIONS(1379), 1,
      sym_object_name,
    STATE(597), 1,
      sym_column_definition,
    STATE(1125), 1,
      sym_column_definition_list,
  [13281] = 3,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1496), 1,
      anon_sym_RPAREN,
    STATE(579), 1,
      aux_sym_create_function_repeat1,
  [13291] = 3,
    ACTIONS(1101), 1,
      aux_sym_select_statement_token3,
    ACTIONS(1105), 1,
      aux_sym_insert_values_spec_token1,
    STATE(108), 1,
      sym_insert_values_spec,
  [13301] = 3,
    ACTIONS(1498), 1,
      anon_sym_COMMA,
    ACTIONS(1501), 1,
      aux_sym_from_spec_token1,
    STATE(672), 1,
      aux_sym_select_elements_repeat1,
  [13311] = 3,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
    ACTIONS(1503), 1,
      anon_sym_RPAREN,
    STATE(658), 1,
      aux_sym_clustering_key_list_repeat1,
  [13321] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(1124), 1,
      sym_return_mode,
  [13331] = 3,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
    ACTIONS(1505), 1,
      anon_sym_RPAREN,
    STATE(654), 1,
      aux_sym_clustering_key_list_repeat1,
  [13341] = 3,
    ACTIONS(1396), 1,
      sym_object_name,
    ACTIONS(1507), 1,
      aux_sym_delete_statement_token2,
    STATE(321), 1,
      sym_user_name,
  [13351] = 3,
    ACTIONS(1242), 1,
      sym_object_name,
    STATE(518), 1,
      sym_assignment_element,
    STATE(1185), 1,
      sym_indexed_column,
  [13361] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1509), 1,
      anon_sym_RPAREN,
    STATE(590), 1,
      aux_sym_create_type_repeat1,
  [13371] = 3,
    ACTIONS(1203), 1,
      aux_sym_create_function_token1,
    ACTIONS(1205), 1,
      aux_sym_return_mode_token1,
    STATE(1098), 1,
      sym_return_mode,
  [13381] = 3,
    ACTIONS(1511), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1513), 1,
      sym_object_name,
    STATE(1311), 1,
      sym_keyspace_name,
  [13391] = 3,
    ACTIONS(1191), 1,
      anon_sym_COMMA,
    ACTIONS(1193), 1,
      anon_sym_RPAREN,
    STATE(569), 1,
      aux_sym_function_args_repeat1,
  [13401] = 3,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1515), 1,
      anon_sym_RPAREN,
    STATE(582), 1,
      aux_sym_init_cond_hash_repeat1,
  [13411] = 3,
    ACTIONS(1517), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1519), 1,
      sym_object_name,
    STATE(1302), 1,
      sym_trigger_name,
  [13421] = 3,
    ACTIONS(1270), 1,
      aux_sym_where_spec_token1,
    ACTIONS(1521), 1,
      anon_sym_DOT,
    STATE(1113), 1,
      sym_materialized_view_where,
  [13431] = 2,
    ACTIONS(1523), 1,
      anon_sym_RPAREN,
    ACTIONS(1525), 2,
      aux_sym_order_spec_token3,
      aux_sym_order_spec_token4,
  [13439] = 3,
    ACTIONS(1527), 1,
      sym_object_name,
    STATE(224), 1,
      sym_table_option_item,
    STATE(1046), 1,
      sym_table_option_name,
  [13449] = 3,
    ACTIONS(1242), 1,
      sym_object_name,
    STATE(835), 1,
      sym_assignment_element,
    STATE(1185), 1,
      sym_indexed_column,
  [13459] = 3,
    ACTIONS(1529), 1,
      sym__string_literal,
    ACTIONS(1531), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1533), 1,
      sym_object_name,
  [13469] = 3,
    ACTIONS(1242), 1,
      sym_object_name,
    STATE(522), 1,
      sym_assignment_element,
    STATE(1185), 1,
      sym_indexed_column,
  [13479] = 1,
    ACTIONS(1535), 3,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_update_token1,
  [13485] = 3,
    ACTIONS(141), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(1163), 1,
      aux_sym_create_materialized_view_token1,
    STATE(73), 1,
      aux_sym_relation_elements_repeat1,
  [13495] = 2,
    ACTIONS(1026), 1,
      aux_sym__decimal_literal_token1,
    STATE(965), 1,
      sym__decimal_literal,
  [13502] = 2,
    ACTIONS(1026), 1,
      aux_sym__decimal_literal_token1,
    STATE(226), 1,
      sym__decimal_literal,
  [13509] = 1,
    ACTIONS(1537), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13514] = 1,
    ACTIONS(1175), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [13519] = 2,
    ACTIONS(1539), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1541), 1,
      sym_object_name,
  [13526] = 2,
    ACTIONS(1543), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1545), 1,
      sym_object_name,
  [13533] = 2,
    ACTIONS(1547), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1549), 1,
      sym_object_name,
  [13540] = 2,
    ACTIONS(1551), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1553), 1,
      sym_object_name,
  [13547] = 2,
    ACTIONS(1555), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1557), 1,
      sym_object_name,
  [13554] = 2,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    STATE(159), 1,
      sym_where_spec,
  [13561] = 1,
    ACTIONS(1304), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13566] = 2,
    ACTIONS(1559), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1561), 1,
      sym_object_name,
  [13573] = 2,
    ACTIONS(1563), 1,
      anon_sym_DOT,
    ACTIONS(1565), 1,
      aux_sym_create_index_token3,
  [13580] = 2,
    ACTIONS(1567), 1,
      anon_sym_DOT,
    ACTIONS(1569), 1,
      anon_sym_LPAREN,
  [13587] = 2,
    ACTIONS(1571), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1573), 1,
      sym_object_name,
  [13594] = 2,
    ACTIONS(1575), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1577), 1,
      sym_object_name,
  [13601] = 2,
    ACTIONS(1579), 1,
      sym_object_name,
    STATE(1128), 1,
      sym_column_list,
  [13608] = 2,
    ACTIONS(1581), 1,
      aux_sym_from_spec_token1,
    STATE(74), 1,
      sym_from_spec,
  [13615] = 1,
    ACTIONS(1583), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13620] = 2,
    ACTIONS(1585), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1587), 1,
      sym_object_name,
  [13627] = 2,
    ACTIONS(1589), 1,
      anon_sym_DOT,
    ACTIONS(1591), 1,
      anon_sym_LPAREN,
  [13634] = 1,
    ACTIONS(1593), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13639] = 2,
    ACTIONS(1595), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1597), 1,
      sym_object_name,
  [13646] = 1,
    ACTIONS(1599), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13651] = 1,
    ACTIONS(1501), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [13656] = 2,
    ACTIONS(1601), 1,
      sym_object_name,
    STATE(828), 1,
      sym_user_name,
  [13663] = 2,
    ACTIONS(1603), 1,
      anon_sym_DOT,
    ACTIONS(1605), 1,
      anon_sym_LPAREN,
  [13670] = 2,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    STATE(162), 1,
      sym_where_spec,
  [13677] = 2,
    ACTIONS(1607), 1,
      sym_object_name,
    STATE(479), 1,
      sym_table_name,
  [13684] = 2,
    ACTIONS(1609), 1,
      sym_object_name,
    STATE(992), 1,
      sym_trigger_name,
  [13691] = 2,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    STATE(556), 1,
      sym_assignment_tuple,
  [13698] = 2,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_assignment_tuple,
  [13705] = 1,
    ACTIONS(1611), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13710] = 2,
    ACTIONS(1607), 1,
      sym_object_name,
    STATE(310), 1,
      sym_table_name,
  [13717] = 2,
    ACTIONS(1607), 1,
      sym_object_name,
    STATE(489), 1,
      sym_table_name,
  [13724] = 1,
    ACTIONS(1484), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13729] = 2,
    ACTIONS(1607), 1,
      sym_object_name,
    STATE(1123), 1,
      sym_table_name,
  [13736] = 2,
    ACTIONS(1581), 1,
      aux_sym_from_spec_token1,
    STATE(510), 1,
      sym_from_spec,
  [13743] = 1,
    ACTIONS(1343), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13748] = 2,
    ACTIONS(1613), 1,
      sym_object_name,
    STATE(1140), 1,
      sym_clustering_key_list,
  [13755] = 2,
    ACTIONS(1615), 1,
      sym_object_name,
    STATE(1274), 1,
      sym_keyspace_name,
  [13762] = 1,
    ACTIONS(1477), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13767] = 2,
    ACTIONS(1579), 1,
      sym_object_name,
    STATE(1343), 1,
      sym_column_list,
  [13774] = 2,
    ACTIONS(1617), 1,
      sym__string_literal,
    STATE(326), 1,
      sym_trigger_class,
  [13781] = 2,
    ACTIONS(1579), 1,
      sym_object_name,
    STATE(1279), 1,
      sym_column_list,
  [13788] = 2,
    ACTIONS(1270), 1,
      aux_sym_where_spec_token1,
    STATE(1160), 1,
      sym_materialized_view_where,
  [13795] = 1,
    ACTIONS(1619), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13800] = 1,
    ACTIONS(1464), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13805] = 2,
    ACTIONS(1270), 1,
      aux_sym_where_spec_token1,
    STATE(1276), 1,
      sym_materialized_view_where,
  [13812] = 2,
    ACTIONS(1621), 1,
      anon_sym_DOT,
    ACTIONS(1623), 1,
      aux_sym_select_element_token1,
  [13819] = 2,
    ACTIONS(1379), 1,
      sym_object_name,
    STATE(765), 1,
      sym_column_definition,
  [13826] = 1,
    ACTIONS(1424), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [13831] = 2,
    ACTIONS(1601), 1,
      sym_object_name,
    STATE(745), 1,
      sym_user_name,
  [13838] = 2,
    ACTIONS(1625), 1,
      aux_sym_materialized_view_options_token1,
    STATE(283), 1,
      sym_user_with,
  [13845] = 2,
    ACTIONS(1581), 1,
      aux_sym_from_spec_token1,
    STATE(496), 1,
      sym_from_spec,
  [13852] = 1,
    ACTIONS(1417), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13857] = 2,
    ACTIONS(1627), 1,
      sym_object_name,
    STATE(230), 1,
      sym_if_condition,
  [13864] = 2,
    ACTIONS(1629), 1,
      sym__string_literal,
    STATE(613), 1,
      sym_option_hash_item,
  [13871] = 1,
    ACTIONS(1631), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [13876] = 1,
    ACTIONS(1633), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13881] = 2,
    ACTIONS(1635), 1,
      aux_sym_durable_writes_token1,
    STATE(271), 1,
      sym_durable_writes,
  [13888] = 1,
    ACTIONS(1637), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13893] = 2,
    ACTIONS(1639), 1,
      aux_sym_using_timestamp_spec_token2,
    ACTIONS(1641), 1,
      aux_sym_using_ttl_timestamp_token1,
  [13900] = 1,
    ACTIONS(1445), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13905] = 2,
    ACTIONS(1581), 1,
      aux_sym_from_spec_token1,
    STATE(71), 1,
      sym_from_spec,
  [13912] = 2,
    ACTIONS(1643), 1,
      sym_object_name,
    STATE(989), 1,
      sym_partition_key_list,
  [13919] = 2,
    ACTIONS(1645), 1,
      anon_sym_COMMA,
    ACTIONS(1647), 1,
      anon_sym_RPAREN,
  [13926] = 2,
    ACTIONS(1649), 1,
      sym__string_literal,
    STATE(636), 1,
      sym_replication_list_item,
  [13933] = 1,
    ACTIONS(1651), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13938] = 1,
    ACTIONS(1412), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13943] = 2,
    ACTIONS(1615), 1,
      sym_object_name,
    STATE(1014), 1,
      sym_keyspace_name,
  [13950] = 2,
    ACTIONS(1579), 1,
      sym_object_name,
    STATE(951), 1,
      sym_column_list,
  [13957] = 2,
    ACTIONS(1607), 1,
      sym_object_name,
    STATE(890), 1,
      sym_table_name,
  [13964] = 1,
    ACTIONS(1405), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13969] = 2,
    ACTIONS(1607), 1,
      sym_object_name,
    STATE(931), 1,
      sym_table_name,
  [13976] = 1,
    ACTIONS(1392), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13981] = 2,
    ACTIONS(1607), 1,
      sym_object_name,
    STATE(88), 1,
      sym_table_name,
  [13988] = 1,
    ACTIONS(1653), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13993] = 2,
    ACTIONS(1581), 1,
      aux_sym_from_spec_token1,
    STATE(72), 1,
      sym_from_spec,
  [14000] = 2,
    ACTIONS(1579), 1,
      sym_object_name,
    STATE(1165), 1,
      sym_column_list,
  [14007] = 2,
    ACTIONS(122), 1,
      aux_sym_where_spec_token1,
    STATE(190), 1,
      sym_where_spec,
  [14014] = 2,
    ACTIONS(1270), 1,
      aux_sym_where_spec_token1,
    STATE(1067), 1,
      sym_materialized_view_where,
  [14021] = 1,
    ACTIONS(1655), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14026] = 2,
    ACTIONS(1579), 1,
      sym_object_name,
    STATE(872), 1,
      sym_column_list,
  [14033] = 2,
    ACTIONS(1629), 1,
      sym__string_literal,
    STATE(782), 1,
      sym_option_hash_item,
  [14040] = 2,
    ACTIONS(1657), 1,
      anon_sym_LBRACE,
    STATE(193), 1,
      sym_replication_list,
  [14047] = 1,
    ACTIONS(1659), 2,
      sym__string_literal,
      sym__float_literal,
  [14052] = 2,
    ACTIONS(1661), 1,
      anon_sym_DOT,
    ACTIONS(1663), 1,
      anon_sym_LPAREN,
  [14059] = 2,
    ACTIONS(1665), 1,
      sym_object_name,
    STATE(702), 1,
      sym_delete_column_item,
  [14066] = 2,
    ACTIONS(1607), 1,
      sym_object_name,
    STATE(1026), 1,
      sym_table_name,
  [14073] = 1,
    ACTIONS(1315), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14078] = 2,
    ACTIONS(1579), 1,
      sym_object_name,
    STATE(1063), 1,
      sym_column_list,
  [14085] = 2,
    ACTIONS(1667), 1,
      anon_sym_DOT,
    ACTIONS(1669), 1,
      anon_sym_LPAREN,
  [14092] = 2,
    ACTIONS(1579), 1,
      sym_object_name,
    STATE(1303), 1,
      sym_column_list,
  [14099] = 2,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_assignment_tuple,
  [14106] = 2,
    ACTIONS(1671), 1,
      anon_sym_DOT,
    ACTIONS(1673), 1,
      aux_sym_create_index_token3,
  [14113] = 1,
    ACTIONS(1675), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14118] = 2,
    ACTIONS(1677), 1,
      anon_sym_DOT,
    ACTIONS(1679), 1,
      anon_sym_LPAREN,
  [14125] = 2,
    ACTIONS(1250), 1,
      sym_object_name,
    STATE(755), 1,
      sym_param,
  [14132] = 2,
    ACTIONS(1681), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1683), 1,
      sym_object_name,
  [14139] = 2,
    ACTIONS(1685), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1687), 1,
      sym_object_name,
  [14146] = 2,
    ACTIONS(1689), 1,
      sym_object_name,
    STATE(747), 1,
      sym_init_cond_hash_item,
  [14153] = 2,
    ACTIONS(1691), 1,
      sym_object_name,
    STATE(493), 1,
      sym_column_not_null,
  [14160] = 2,
    ACTIONS(1607), 1,
      sym_object_name,
    STATE(1254), 1,
      sym_table_name,
  [14167] = 2,
    ACTIONS(1088), 1,
      anon_sym_LBRACE,
    STATE(215), 1,
      sym_option_hash,
  [14174] = 2,
    ACTIONS(1693), 1,
      anon_sym_DOT,
    ACTIONS(1695), 1,
      aux_sym_select_element_token1,
  [14181] = 2,
    ACTIONS(1617), 1,
      sym__string_literal,
    STATE(356), 1,
      sym_trigger_class,
  [14188] = 2,
    ACTIONS(1272), 1,
      sym_object_name,
    STATE(212), 1,
      sym_alter_type_rename_item,
  [14195] = 1,
    ACTIONS(1697), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [14200] = 1,
    ACTIONS(1699), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [14205] = 1,
    ACTIONS(1701), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14210] = 1,
    ACTIONS(1703), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14215] = 2,
    ACTIONS(1705), 1,
      anon_sym_DOT,
    ACTIONS(1707), 1,
      anon_sym_LPAREN,
  [14222] = 2,
    ACTIONS(1709), 1,
      aux_sym_role_with_option_token1,
    STATE(111), 1,
      sym_user_password,
  [14229] = 2,
    ACTIONS(1711), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1713), 1,
      sym_object_name,
  [14236] = 2,
    ACTIONS(1715), 1,
      anon_sym_DOT,
    ACTIONS(1717), 1,
      anon_sym_LPAREN,
  [14243] = 2,
    ACTIONS(1719), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1721), 1,
      sym_object_name,
  [14250] = 2,
    ACTIONS(1657), 1,
      anon_sym_LBRACE,
    STATE(208), 1,
      sym_replication_list,
  [14257] = 2,
    ACTIONS(1635), 1,
      aux_sym_durable_writes_token1,
    STATE(391), 1,
      sym_durable_writes,
  [14264] = 2,
    ACTIONS(1723), 1,
      sym__string_literal,
    ACTIONS(1725), 1,
      sym_object_name,
  [14271] = 2,
    ACTIONS(1613), 1,
      sym_object_name,
    STATE(1045), 1,
      sym_clustering_key_list,
  [14278] = 2,
    ACTIONS(1727), 1,
      sym__string_literal,
    ACTIONS(1729), 1,
      sym_object_name,
  [14285] = 2,
    ACTIONS(1731), 1,
      anon_sym_DOT,
    ACTIONS(1733), 1,
      anon_sym_LPAREN,
  [14292] = 2,
    ACTIONS(1735), 1,
      sym_object_name,
    STATE(383), 1,
      sym_alter_table_column_definition,
  [14299] = 2,
    ACTIONS(1579), 1,
      sym_object_name,
    STATE(913), 1,
      sym_column_list,
  [14306] = 2,
    ACTIONS(1270), 1,
      aux_sym_where_spec_token1,
    STATE(1200), 1,
      sym_materialized_view_where,
  [14313] = 1,
    ACTIONS(1737), 2,
      aux_sym_relation_elements_token1,
      aux_sym_create_materialized_view_token1,
  [14318] = 2,
    ACTIONS(1691), 1,
      sym_object_name,
    STATE(743), 1,
      sym_column_not_null,
  [14325] = 2,
    ACTIONS(1579), 1,
      sym_object_name,
    STATE(1245), 1,
      sym_column_list,
  [14332] = 2,
    ACTIONS(1739), 1,
      aux_sym_delete_statement_token2,
    ACTIONS(1741), 1,
      sym_object_name,
  [14339] = 2,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_assignment_tuple,
  [14346] = 2,
    ACTIONS(1743), 1,
      anon_sym_DOT,
    ACTIONS(1745), 1,
      aux_sym_using_timestamp_spec_token1,
  [14353] = 2,
    ACTIONS(1747), 1,
      anon_sym_DOT,
    ACTIONS(1749), 1,
      anon_sym_LPAREN,
  [14360] = 2,
    ACTIONS(1635), 1,
      aux_sym_durable_writes_token1,
    STATE(394), 1,
      sym_durable_writes,
  [14367] = 2,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    STATE(653), 1,
      sym_assignment_tuple,
  [14374] = 2,
    ACTIONS(1625), 1,
      aux_sym_materialized_view_options_token1,
    STATE(295), 1,
      sym_user_with,
  [14381] = 2,
    ACTIONS(1625), 1,
      aux_sym_materialized_view_options_token1,
    STATE(353), 1,
      sym_user_with,
  [14388] = 2,
    ACTIONS(1579), 1,
      sym_object_name,
    STATE(1321), 1,
      sym_column_list,
  [14395] = 2,
    ACTIONS(1751), 1,
      aux_sym_resource_token5,
    ACTIONS(1753), 1,
      aux_sym_drop_aggregate_token1,
  [14402] = 2,
    ACTIONS(1755), 1,
      anon_sym_EQ,
    ACTIONS(1757), 1,
      anon_sym_LBRACK,
  [14409] = 2,
    ACTIONS(1759), 1,
      sym__string_literal,
    ACTIONS(1761), 1,
      sym_object_name,
  [14416] = 2,
    ACTIONS(1579), 1,
      sym_object_name,
    STATE(1320), 1,
      sym_column_list,
  [14423] = 2,
    ACTIONS(1601), 1,
      sym_object_name,
    STATE(385), 1,
      sym_user_name,
  [14430] = 1,
    ACTIONS(1234), 2,
      anon_sym_COMMA,
      aux_sym_where_spec_token1,
  [14435] = 2,
    ACTIONS(1579), 1,
      sym_object_name,
    STATE(1244), 1,
      sym_column_list,
  [14442] = 2,
    ACTIONS(1649), 1,
      sym__string_literal,
    STATE(761), 1,
      sym_replication_list_item,
  [14449] = 2,
    ACTIONS(1657), 1,
      anon_sym_LBRACE,
    STATE(220), 1,
      sym_replication_list,
  [14456] = 1,
    ACTIONS(1763), 1,
      sym_object_name,
  [14460] = 1,
    ACTIONS(1765), 1,
      anon_sym_RPAREN,
  [14464] = 1,
    ACTIONS(1767), 1,
      anon_sym_RPAREN,
  [14468] = 1,
    ACTIONS(1769), 1,
      sym_object_name,
  [14472] = 1,
    ACTIONS(1771), 1,
      anon_sym_RPAREN,
  [14476] = 1,
    ACTIONS(1773), 1,
      anon_sym_RPAREN,
  [14480] = 1,
    ACTIONS(1775), 1,
      anon_sym_EQ,
  [14484] = 1,
    ACTIONS(1777), 1,
      aux_sym_select_statement_token5,
  [14488] = 1,
    ACTIONS(1779), 1,
      aux_sym_delete_statement_token3,
  [14492] = 1,
    ACTIONS(1781), 1,
      aux_sym_create_function_token1,
  [14496] = 1,
    ACTIONS(1783), 1,
      sym_object_name,
  [14500] = 1,
    ACTIONS(1785), 1,
      sym_object_name,
  [14504] = 1,
    ACTIONS(1787), 1,
      sym_object_name,
  [14508] = 1,
    ACTIONS(1789), 1,
      aux_sym_create_function_token1,
  [14512] = 1,
    ACTIONS(1791), 1,
      sym_object_name,
  [14516] = 1,
    ACTIONS(1793), 1,
      aux_sym_return_mode_token2,
  [14520] = 1,
    ACTIONS(1795), 1,
      aux_sym_create_function_token1,
  [14524] = 1,
    ACTIONS(1797), 1,
      sym_object_name,
  [14528] = 1,
    ACTIONS(1799), 1,
      aux_sym_create_function_token2,
  [14532] = 1,
    ACTIONS(1801), 1,
      aux_sym_create_aggregate_token3,
  [14536] = 1,
    ACTIONS(1803), 1,
      aux_sym_create_function_token1,
  [14540] = 1,
    ACTIONS(1805), 1,
      anon_sym_LPAREN,
  [14544] = 1,
    ACTIONS(1807), 1,
      sym_object_name,
  [14548] = 1,
    ACTIONS(1809), 1,
      aux_sym_select_statement_token1,
  [14552] = 1,
    ACTIONS(1811), 1,
      sym_object_name,
  [14556] = 1,
    ACTIONS(1813), 1,
      aux_sym_create_aggregate_token3,
  [14560] = 1,
    ACTIONS(1815), 1,
      sym_object_name,
  [14564] = 1,
    ACTIONS(1817), 1,
      aux_sym_create_aggregate_token4,
  [14568] = 1,
    ACTIONS(1819), 1,
      aux_sym_create_aggregate_token3,
  [14572] = 1,
    ACTIONS(1821), 1,
      anon_sym_RPAREN,
  [14576] = 1,
    ACTIONS(1823), 1,
      anon_sym_LPAREN,
  [14580] = 1,
    ACTIONS(1825), 1,
      aux_sym_select_element_token1,
  [14584] = 1,
    ACTIONS(1827), 1,
      anon_sym_COLON,
  [14588] = 1,
    ACTIONS(1829), 1,
      aux_sym_from_spec_token1,
  [14592] = 1,
    ACTIONS(1831), 1,
      aux_sym_create_function_token1,
  [14596] = 1,
    ACTIONS(1833), 1,
      sym_object_name,
  [14600] = 1,
    ACTIONS(1835), 1,
      aux_sym_create_function_token2,
  [14604] = 1,
    ACTIONS(1837), 1,
      aux_sym_return_mode_token2,
  [14608] = 1,
    ACTIONS(1839), 1,
      aux_sym_constant_token2,
  [14612] = 1,
    ACTIONS(1841), 1,
      aux_sym_create_function_token1,
  [14616] = 1,
    ACTIONS(1843), 1,
      sym_object_name,
  [14620] = 1,
    ACTIONS(1845), 1,
      anon_sym_LPAREN,
  [14624] = 1,
    ACTIONS(1847), 1,
      anon_sym_COLON,
  [14628] = 1,
    ACTIONS(1849), 1,
      anon_sym_EQ,
  [14632] = 1,
    ACTIONS(1851), 1,
      anon_sym_RPAREN,
  [14636] = 1,
    ACTIONS(1853), 1,
      aux_sym_create_function_token1,
  [14640] = 1,
    ACTIONS(1855), 1,
      anon_sym_RPAREN,
  [14644] = 1,
    ACTIONS(1857), 1,
      sym_object_name,
  [14648] = 1,
    ACTIONS(1859), 1,
      anon_sym_RPAREN,
  [14652] = 1,
    ACTIONS(1861), 1,
      anon_sym_RPAREN,
  [14656] = 1,
    ACTIONS(1863), 1,
      sym_object_name,
  [14660] = 1,
    ACTIONS(1865), 1,
      anon_sym_LPAREN,
  [14664] = 1,
    ACTIONS(1867), 1,
      anon_sym_RPAREN,
  [14668] = 1,
    ACTIONS(1869), 1,
      anon_sym_LPAREN,
  [14672] = 1,
    ACTIONS(1871), 1,
      anon_sym_RPAREN,
  [14676] = 1,
    ACTIONS(1873), 1,
      anon_sym_LPAREN,
  [14680] = 1,
    ACTIONS(1875), 1,
      aux_sym_select_statement_token5,
  [14684] = 1,
    ACTIONS(1877), 1,
      aux_sym_insert_statement_token3,
  [14688] = 1,
    ACTIONS(1879), 1,
      sym_object_name,
  [14692] = 1,
    ACTIONS(1881), 1,
      anon_sym_LPAREN,
  [14696] = 1,
    ACTIONS(1883), 1,
      sym_object_name,
  [14700] = 1,
    ACTIONS(1885), 1,
      anon_sym_EQ,
  [14704] = 1,
    ACTIONS(1887), 1,
      sym_object_name,
  [14708] = 1,
    ACTIONS(1889), 1,
      aux_sym__decimal_literal_token1,
  [14712] = 1,
    ACTIONS(1891), 1,
      aux_sym__decimal_literal_token1,
  [14716] = 1,
    ACTIONS(1893), 1,
      aux_sym_create_index_token3,
  [14720] = 1,
    ACTIONS(1895), 1,
      anon_sym_RPAREN,
  [14724] = 1,
    ACTIONS(1897), 1,
      anon_sym_LPAREN,
  [14728] = 1,
    ACTIONS(1899), 1,
      sym_object_name,
  [14732] = 1,
    ACTIONS(1901), 1,
      anon_sym_LPAREN,
  [14736] = 1,
    ACTIONS(1903), 1,
      sym_object_name,
  [14740] = 1,
    ACTIONS(1905), 1,
      sym_object_name,
  [14744] = 1,
    ACTIONS(1907), 1,
      sym_object_name,
  [14748] = 1,
    ACTIONS(1909), 1,
      sym_object_name,
  [14752] = 1,
    ACTIONS(1911), 1,
      aux_sym_from_spec_token1,
  [14756] = 1,
    ACTIONS(1913), 1,
      aux_sym_select_statement_token1,
  [14760] = 1,
    ACTIONS(1915), 1,
      sym_object_name,
  [14764] = 1,
    ACTIONS(1917), 1,
      anon_sym_RPAREN,
  [14768] = 1,
    ACTIONS(1919), 1,
      aux_sym_using_timestamp_spec_token2,
  [14772] = 1,
    ACTIONS(1921), 1,
      aux_sym_create_function_token1,
  [14776] = 1,
    ACTIONS(1923), 1,
      aux_sym_constant_token2,
  [14780] = 1,
    ACTIONS(1925), 1,
      anon_sym_RPAREN,
  [14784] = 1,
    ACTIONS(1927), 1,
      anon_sym_RPAREN,
  [14788] = 1,
    ACTIONS(1929), 1,
      aux_sym_create_index_token3,
  [14792] = 1,
    ACTIONS(1931), 1,
      anon_sym_RPAREN,
  [14796] = 1,
    ACTIONS(1933), 1,
      sym_object_name,
  [14800] = 1,
    ACTIONS(1935), 1,
      aux_sym_create_keyspace_token1,
  [14804] = 1,
    ACTIONS(1937), 1,
      anon_sym_RPAREN,
  [14808] = 1,
    ACTIONS(1939), 1,
      sym_object_name,
  [14812] = 1,
    ACTIONS(1941), 1,
      sym_object_name,
  [14816] = 1,
    ACTIONS(1943), 1,
      sym__boolean_literal,
  [14820] = 1,
    ACTIONS(1945), 1,
      sym_object_name,
  [14824] = 1,
    ACTIONS(1947), 1,
      anon_sym_LPAREN,
  [14828] = 1,
    ACTIONS(1949), 1,
      anon_sym_RPAREN,
  [14832] = 1,
    ACTIONS(1951), 1,
      aux_sym_create_function_token1,
  [14836] = 1,
    ACTIONS(1953), 1,
      aux_sym_relation_contains_key_token2,
  [14840] = 1,
    ACTIONS(1955), 1,
      aux_sym_create_function_token2,
  [14844] = 1,
    ACTIONS(1957), 1,
      aux_sym_relation_contains_key_token2,
  [14848] = 1,
    ACTIONS(1959), 1,
      aux_sym_create_function_token1,
  [14852] = 1,
    ACTIONS(1961), 1,
      aux_sym_create_function_token1,
  [14856] = 1,
    ACTIONS(1963), 1,
      aux_sym_select_element_token1,
  [14860] = 1,
    ACTIONS(1965), 1,
      sym_object_name,
  [14864] = 1,
    ACTIONS(1967), 1,
      aux_sym_create_function_token2,
  [14868] = 1,
    ACTIONS(1969), 1,
      aux_sym_delete_statement_token3,
  [14872] = 1,
    ACTIONS(1971), 1,
      anon_sym_RPAREN,
  [14876] = 1,
    ACTIONS(1973), 1,
      anon_sym_RPAREN,
  [14880] = 1,
    ACTIONS(1975), 1,
      anon_sym_LPAREN,
  [14884] = 1,
    ACTIONS(1977), 1,
      anon_sym_RPAREN,
  [14888] = 1,
    ACTIONS(1979), 1,
      sym_object_name,
  [14892] = 1,
    ACTIONS(1981), 1,
      aux_sym_create_aggregate_token4,
  [14896] = 1,
    ACTIONS(1983), 1,
      aux_sym_create_aggregate_token5,
  [14900] = 1,
    ACTIONS(1985), 1,
      aux_sym_select_statement_token1,
  [14904] = 1,
    ACTIONS(1987), 1,
      aux_sym_from_spec_token1,
  [14908] = 1,
    ACTIONS(1989), 1,
      sym_object_name,
  [14912] = 1,
    ACTIONS(1991), 1,
      sym_object_name,
  [14916] = 1,
    ACTIONS(1993), 1,
      aux_sym_select_statement_token5,
  [14920] = 1,
    ACTIONS(1995), 1,
      aux_sym_create_materialized_view_token1,
  [14924] = 1,
    ACTIONS(1997), 1,
      aux_sym_update_token2,
  [14928] = 1,
    ACTIONS(1999), 1,
      sym_object_name,
  [14932] = 1,
    ACTIONS(2001), 1,
      sym_object_name,
  [14936] = 1,
    ACTIONS(2003), 1,
      aux_sym_order_spec_token2,
  [14940] = 1,
    ACTIONS(2005), 1,
      anon_sym_LPAREN,
  [14944] = 1,
    ACTIONS(2007), 1,
      sym_object_name,
  [14948] = 1,
    ACTIONS(2009), 1,
      aux_sym_resource_token2,
  [14952] = 1,
    ACTIONS(2011), 1,
      aux_sym_create_function_token1,
  [14956] = 1,
    ACTIONS(2013), 1,
      sym_object_name,
  [14960] = 1,
    ACTIONS(2015), 1,
      anon_sym_RBRACK,
  [14964] = 1,
    ACTIONS(2017), 1,
      aux_sym_create_function_token2,
  [14968] = 1,
    ACTIONS(2019), 1,
      aux_sym_delete_statement_token3,
  [14972] = 1,
    ACTIONS(2021), 1,
      aux_sym_create_function_token1,
  [14976] = 1,
    ACTIONS(2023), 1,
      anon_sym_LPAREN,
  [14980] = 1,
    ACTIONS(2025), 1,
      anon_sym_RPAREN,
  [14984] = 1,
    ACTIONS(2027), 1,
      aux_sym_create_aggregate_token3,
  [14988] = 1,
    ACTIONS(2029), 1,
      aux_sym_create_aggregate_token4,
  [14992] = 1,
    ACTIONS(2031), 1,
      sym_object_name,
  [14996] = 1,
    ACTIONS(2033), 1,
      aux_sym_using_ttl_timestamp_token1,
  [15000] = 1,
    ACTIONS(2035), 1,
      sym_object_name,
  [15004] = 1,
    ACTIONS(2037), 1,
      sym_object_name,
  [15008] = 1,
    ACTIONS(2039), 1,
      anon_sym_RPAREN,
  [15012] = 1,
    ACTIONS(2041), 1,
      sym_object_name,
  [15016] = 1,
    ACTIONS(2043), 1,
      sym_object_name,
  [15020] = 1,
    ACTIONS(2045), 1,
      sym_object_name,
  [15024] = 1,
    ACTIONS(2047), 1,
      sym_object_name,
  [15028] = 1,
    ACTIONS(2049), 1,
      sym_object_name,
  [15032] = 1,
    ACTIONS(2051), 1,
      sym_object_name,
  [15036] = 1,
    ACTIONS(2053), 1,
      sym_object_name,
  [15040] = 1,
    ACTIONS(2055), 1,
      anon_sym_COLON,
  [15044] = 1,
    ACTIONS(2057), 1,
      aux_sym_delete_statement_token3,
  [15048] = 1,
    ACTIONS(2059), 1,
      sym_object_name,
  [15052] = 1,
    ACTIONS(2061), 1,
      sym_object_name,
  [15056] = 1,
    ACTIONS(2063), 1,
      anon_sym_RPAREN,
  [15060] = 1,
    ACTIONS(2065), 1,
      sym_object_name,
  [15064] = 1,
    ACTIONS(2067), 1,
      anon_sym_RPAREN,
  [15068] = 1,
    ACTIONS(2069), 1,
      aux_sym_using_timestamp_spec_token1,
  [15072] = 1,
    ACTIONS(2071), 1,
      aux_sym_select_element_token1,
  [15076] = 1,
    ACTIONS(2073), 1,
      sym_object_name,
  [15080] = 1,
    ACTIONS(2075), 1,
      aux_sym_create_function_token1,
  [15084] = 1,
    ACTIONS(2077), 1,
      aux_sym_create_aggregate_token3,
  [15088] = 1,
    ACTIONS(2079), 1,
      sym__boolean_literal,
  [15092] = 1,
    ACTIONS(2081), 1,
      aux_sym_create_function_token2,
  [15096] = 1,
    ACTIONS(2083), 1,
      sym__boolean_literal,
  [15100] = 1,
    ACTIONS(2085), 1,
      aux_sym_create_function_token1,
  [15104] = 1,
    ACTIONS(2087), 1,
      sym_object_name,
  [15108] = 1,
    ACTIONS(2089), 1,
      aux_sym_create_function_token2,
  [15112] = 1,
    ACTIONS(2091), 1,
      sym__string_literal,
  [15116] = 1,
    ACTIONS(2093), 1,
      sym__code_block,
  [15120] = 1,
    ACTIONS(2095), 1,
      aux_sym_select_element_token1,
  [15124] = 1,
    ACTIONS(2097), 1,
      sym_object_name,
  [15128] = 1,
    ACTIONS(2099), 1,
      aux_sym_create_aggregate_token3,
  [15132] = 1,
    ACTIONS(2101), 1,
      aux_sym_create_aggregate_token4,
  [15136] = 1,
    ACTIONS(2103), 1,
      aux_sym_create_function_token1,
  [15140] = 1,
    ACTIONS(2105), 1,
      sym_object_name,
  [15144] = 1,
    ACTIONS(2107), 1,
      aux_sym_create_index_token3,
  [15148] = 1,
    ACTIONS(2109), 1,
      sym_object_name,
  [15152] = 1,
    ACTIONS(2111), 1,
      aux_sym_constant_token2,
  [15156] = 1,
    ACTIONS(2113), 1,
      aux_sym_materialized_view_options_token1,
  [15160] = 1,
    ACTIONS(954), 1,
      aux_sym_column_not_null_token1,
  [15164] = 1,
    ACTIONS(2115), 1,
      anon_sym_RPAREN,
  [15168] = 1,
    ACTIONS(2117), 1,
      aux_sym_relation_contains_key_token2,
  [15172] = 1,
    ACTIONS(2119), 1,
      anon_sym_RPAREN,
  [15176] = 1,
    ACTIONS(2121), 1,
      anon_sym_RPAREN,
  [15180] = 1,
    ACTIONS(2123), 1,
      anon_sym_LPAREN,
  [15184] = 1,
    ACTIONS(2125), 1,
      aux_sym_create_function_token1,
  [15188] = 1,
    ACTIONS(2127), 1,
      anon_sym_LPAREN,
  [15192] = 1,
    ACTIONS(2129), 1,
      anon_sym_LPAREN,
  [15196] = 1,
    ACTIONS(2131), 1,
      aux_sym_create_index_token3,
  [15200] = 1,
    ACTIONS(2133), 1,
      aux_sym_create_function_token1,
  [15204] = 1,
    ACTIONS(2135), 1,
      anon_sym_LPAREN,
  [15208] = 1,
    ACTIONS(2137), 1,
      sym_object_name,
  [15212] = 1,
    ACTIONS(2139), 1,
      aux_sym_create_function_token2,
  [15216] = 1,
    ACTIONS(2141), 1,
      aux_sym_delete_statement_token3,
  [15220] = 1,
    ACTIONS(2143), 1,
      aux_sym_insert_statement_token3,
  [15224] = 1,
    ACTIONS(2145), 1,
      aux_sym_create_aggregate_token3,
  [15228] = 1,
    ACTIONS(2147), 1,
      sym_object_name,
  [15232] = 1,
    ACTIONS(2149), 1,
      anon_sym_RPAREN,
  [15236] = 1,
    ACTIONS(944), 1,
      anon_sym_LPAREN,
  [15240] = 1,
    ACTIONS(2151), 1,
      sym_object_name,
  [15244] = 1,
    ACTIONS(2153), 1,
      aux_sym_select_statement_token5,
  [15248] = 1,
    ACTIONS(2155), 1,
      sym_object_name,
  [15252] = 1,
    ACTIONS(2157), 1,
      aux_sym_grant_token2,
  [15256] = 1,
    ACTIONS(2159), 1,
      aux_sym_drop_type_token1,
  [15260] = 1,
    ACTIONS(2161), 1,
      sym_object_name,
  [15264] = 1,
    ACTIONS(2163), 1,
      sym_object_name,
  [15268] = 1,
    ACTIONS(2165), 1,
      anon_sym_EQ,
  [15272] = 1,
    ACTIONS(2167), 1,
      anon_sym_COMMA,
  [15276] = 1,
    ACTIONS(2169), 1,
      aux_sym_grant_token2,
  [15280] = 1,
    ACTIONS(2171), 1,
      anon_sym_RPAREN,
  [15284] = 1,
    ACTIONS(2173), 1,
      anon_sym_EQ,
  [15288] = 1,
    ACTIONS(2175), 1,
      anon_sym_EQ,
  [15292] = 1,
    ACTIONS(2177), 1,
      aux_sym_create_function_token1,
  [15296] = 1,
    ACTIONS(2179), 1,
      aux_sym_order_spec_token1,
  [15300] = 1,
    ACTIONS(2181), 1,
      sym_object_name,
  [15304] = 1,
    ACTIONS(2183), 1,
      aux_sym_create_function_token2,
  [15308] = 1,
    ACTIONS(2185), 1,
      aux_sym_compact_storage_token2,
  [15312] = 1,
    ACTIONS(2187), 1,
      aux_sym_select_element_token1,
  [15316] = 1,
    ACTIONS(2189), 1,
      sym_object_name,
  [15320] = 1,
    ACTIONS(2191), 1,
      aux_sym_create_function_token2,
  [15324] = 1,
    ACTIONS(2193), 1,
      aux_sym_compact_storage_token2,
  [15328] = 1,
    ACTIONS(2195), 1,
      sym__code_block,
  [15332] = 1,
    ACTIONS(2197), 1,
      aux_sym_select_element_token1,
  [15336] = 1,
    ACTIONS(2199), 1,
      sym_object_name,
  [15340] = 1,
    ACTIONS(2201), 1,
      sym_object_name,
  [15344] = 1,
    ACTIONS(2203), 1,
      aux_sym_create_aggregate_token5,
  [15348] = 1,
    ACTIONS(2205), 1,
      aux_sym_create_aggregate_token6,
  [15352] = 1,
    ACTIONS(2207), 1,
      aux_sym_from_spec_token1,
  [15356] = 1,
    ACTIONS(2209), 1,
      sym_object_name,
  [15360] = 1,
    ACTIONS(2211), 1,
      sym_object_name,
  [15364] = 1,
    ACTIONS(2213), 1,
      aux_sym_create_materialized_view_token1,
  [15368] = 1,
    ACTIONS(2215), 1,
      aux_sym_create_materialized_view_token1,
  [15372] = 1,
    ACTIONS(2217), 1,
      aux_sym_insert_statement_token3,
  [15376] = 1,
    ACTIONS(2219), 1,
      anon_sym_RPAREN,
  [15380] = 1,
    ACTIONS(2221), 1,
      aux_sym_update_token2,
  [15384] = 1,
    ACTIONS(2223), 1,
      aux_sym_create_index_token3,
  [15388] = 1,
    ACTIONS(2225), 1,
      anon_sym_LPAREN,
  [15392] = 1,
    ACTIONS(2227), 1,
      sym_object_name,
  [15396] = 1,
    ACTIONS(2229), 1,
      sym_object_name,
  [15400] = 1,
    ACTIONS(2231), 1,
      aux_sym_insert_statement_token3,
  [15404] = 1,
    ACTIONS(2233), 1,
      aux_sym_insert_statement_token3,
  [15408] = 1,
    ACTIONS(2235), 1,
      sym__string_literal,
  [15412] = 1,
    ACTIONS(2237), 1,
      aux_sym_create_function_token1,
  [15416] = 1,
    ACTIONS(2239), 1,
      anon_sym_LPAREN,
  [15420] = 1,
    ACTIONS(2241), 1,
      aux_sym_create_function_token2,
  [15424] = 1,
    ACTIONS(2243), 1,
      sym_object_name,
  [15428] = 1,
    ACTIONS(2245), 1,
      aux_sym_create_function_token1,
  [15432] = 1,
    ACTIONS(2247), 1,
      aux_sym_select_element_token1,
  [15436] = 1,
    ACTIONS(2249), 1,
      sym_object_name,
  [15440] = 1,
    ACTIONS(2251), 1,
      aux_sym_create_function_token2,
  [15444] = 1,
    ACTIONS(2253), 1,
      anon_sym_RPAREN,
  [15448] = 1,
    ACTIONS(2255), 1,
      sym_object_name,
  [15452] = 1,
    ACTIONS(2257), 1,
      aux_sym_create_aggregate_token4,
  [15456] = 1,
    ACTIONS(2259), 1,
      aux_sym_create_aggregate_token5,
  [15460] = 1,
    ACTIONS(2261), 1,
      aux_sym_using_timestamp_spec_token1,
  [15464] = 1,
    ACTIONS(2263), 1,
      aux_sym_select_statement_token1,
  [15468] = 1,
    ACTIONS(2265), 1,
      sym_object_name,
  [15472] = 1,
    ACTIONS(2267), 1,
      aux_sym_delete_statement_token3,
  [15476] = 1,
    ACTIONS(2269), 1,
      sym_object_name,
  [15480] = 1,
    ACTIONS(2271), 1,
      anon_sym_LPAREN,
  [15484] = 1,
    ACTIONS(2273), 1,
      aux_sym_create_function_token2,
  [15488] = 1,
    ACTIONS(2275), 1,
      sym_object_name,
  [15492] = 1,
    ACTIONS(2277), 1,
      aux_sym_create_function_token1,
  [15496] = 1,
    ACTIONS(2279), 1,
      aux_sym_select_element_token1,
  [15500] = 1,
    ACTIONS(2281), 1,
      sym_object_name,
  [15504] = 1,
    ACTIONS(2283), 1,
      aux_sym_create_function_token2,
  [15508] = 1,
    ACTIONS(2285), 1,
      sym__code_block,
  [15512] = 1,
    ACTIONS(2287), 1,
      aux_sym_select_element_token1,
  [15516] = 1,
    ACTIONS(2289), 1,
      sym_object_name,
  [15520] = 1,
    ACTIONS(2291), 1,
      anon_sym_EQ,
  [15524] = 1,
    ACTIONS(2293), 1,
      sym__code_block,
  [15528] = 1,
    ACTIONS(2295), 1,
      aux_sym_create_aggregate_token4,
  [15532] = 1,
    ACTIONS(2297), 1,
      aux_sym_create_aggregate_token5,
  [15536] = 1,
    ACTIONS(2299), 1,
      sym_object_name,
  [15540] = 1,
    ACTIONS(2301), 1,
      anon_sym_EQ,
  [15544] = 1,
    ACTIONS(2303), 1,
      sym_object_name,
  [15548] = 1,
    ACTIONS(2305), 1,
      sym_object_name,
  [15552] = 1,
    ACTIONS(2307), 1,
      aux_sym_create_materialized_view_token1,
  [15556] = 1,
    ACTIONS(2309), 1,
      anon_sym_EQ,
  [15560] = 1,
    ACTIONS(2311), 1,
      aux_sym_relation_contains_key_token2,
  [15564] = 1,
    ACTIONS(2313), 1,
      aux_sym_relation_contains_key_token2,
  [15568] = 1,
    ACTIONS(2315), 1,
      aux_sym_constant_token2,
  [15572] = 1,
    ACTIONS(2317), 1,
      anon_sym_EQ,
  [15576] = 1,
    ACTIONS(2319), 1,
      sym_object_name,
  [15580] = 1,
    ACTIONS(2321), 1,
      anon_sym_LPAREN,
  [15584] = 1,
    ACTIONS(2323), 1,
      sym_object_name,
  [15588] = 1,
    ACTIONS(2325), 1,
      anon_sym_EQ,
  [15592] = 1,
    ACTIONS(2327), 1,
      anon_sym_LPAREN,
  [15596] = 1,
    ACTIONS(2329), 1,
      aux_sym_create_function_token1,
  [15600] = 1,
    ACTIONS(2331), 1,
      anon_sym_RPAREN,
  [15604] = 1,
    ACTIONS(2333), 1,
      aux_sym_insert_statement_token3,
  [15608] = 1,
    ACTIONS(2335), 1,
      aux_sym_create_function_token2,
  [15612] = 1,
    ACTIONS(2337), 1,
      anon_sym_RPAREN,
  [15616] = 1,
    ACTIONS(2339), 1,
      aux_sym_create_function_token1,
  [15620] = 1,
    ACTIONS(2341), 1,
      sym_object_name,
  [15624] = 1,
    ACTIONS(2343), 1,
      aux_sym_create_function_token2,
  [15628] = 1,
    ACTIONS(2345), 1,
      anon_sym_EQ,
  [15632] = 1,
    ACTIONS(2347), 1,
      sym__code_block,
  [15636] = 1,
    ACTIONS(2349), 1,
      aux_sym_select_element_token1,
  [15640] = 1,
    ACTIONS(2351), 1,
      sym_object_name,
  [15644] = 1,
    ACTIONS(2353), 1,
      aux_sym_create_aggregate_token3,
  [15648] = 1,
    ACTIONS(2355), 1,
      aux_sym_create_aggregate_token4,
  [15652] = 1,
    ACTIONS(2357), 1,
      anon_sym_LPAREN,
  [15656] = 1,
    ACTIONS(2359), 1,
      sym_object_name,
  [15660] = 1,
    ACTIONS(2361), 1,
      anon_sym_RPAREN,
  [15664] = 1,
    ACTIONS(2363), 1,
      sym_object_name,
  [15668] = 1,
    ACTIONS(2365), 1,
      aux_sym_create_function_token2,
  [15672] = 1,
    ACTIONS(2367), 1,
      sym_object_name,
  [15676] = 1,
    ACTIONS(2369), 1,
      sym__code_block,
  [15680] = 1,
    ACTIONS(2371), 1,
      aux_sym_select_element_token1,
  [15684] = 1,
    ACTIONS(2373), 1,
      sym_object_name,
  [15688] = 1,
    ACTIONS(2375), 1,
      aux_sym_select_statement_token5,
  [15692] = 1,
    ACTIONS(2377), 1,
      sym__code_block,
  [15696] = 1,
    ACTIONS(2379), 1,
      aux_sym_select_element_token1,
  [15700] = 1,
    ACTIONS(2381), 1,
      aux_sym_update_token2,
  [15704] = 1,
    ACTIONS(2383), 1,
      sym_object_name,
  [15708] = 1,
    ACTIONS(2385), 1,
      sym_object_name,
  [15712] = 1,
    ACTIONS(2387), 1,
      aux_sym_create_aggregate_token6,
  [15716] = 1,
    ACTIONS(2389), 1,
      sym_object_name,
  [15720] = 1,
    ACTIONS(2391), 1,
      sym_object_name,
  [15724] = 1,
    ACTIONS(2393), 1,
      sym_object_name,
  [15728] = 1,
    ACTIONS(2395), 1,
      aux_sym_create_keyspace_token1,
  [15732] = 1,
    ACTIONS(2397), 1,
      sym_object_name,
  [15736] = 1,
    ACTIONS(2399), 1,
      aux_sym_relation_contains_key_token2,
  [15740] = 1,
    ACTIONS(2401), 1,
      aux_sym_create_materialized_view_token1,
  [15744] = 1,
    ACTIONS(2403), 1,
      anon_sym_LPAREN,
  [15748] = 1,
    ACTIONS(2405), 1,
      anon_sym_LPAREN,
  [15752] = 1,
    ACTIONS(2407), 1,
      sym_object_name,
  [15756] = 1,
    ACTIONS(2409), 1,
      aux_sym_from_spec_token1,
  [15760] = 1,
    ACTIONS(2411), 1,
      anon_sym_RPAREN,
  [15764] = 1,
    ACTIONS(2413), 1,
      aux_sym_grant_token2,
  [15768] = 1,
    ACTIONS(2415), 1,
      aux_sym_create_function_token1,
  [15772] = 1,
    ACTIONS(2417), 1,
      sym_object_name,
  [15776] = 1,
    ACTIONS(2419), 1,
      sym_object_name,
  [15780] = 1,
    ACTIONS(2421), 1,
      aux_sym_create_function_token2,
  [15784] = 1,
    ACTIONS(2423), 1,
      sym_object_name,
  [15788] = 1,
    ACTIONS(2425), 1,
      aux_sym_select_element_token1,
  [15792] = 1,
    ACTIONS(2427), 1,
      sym_object_name,
  [15796] = 1,
    ACTIONS(2429), 1,
      aux_sym_create_function_token2,
  [15800] = 1,
    ACTIONS(2431), 1,
      sym_object_name,
  [15804] = 1,
    ACTIONS(2433), 1,
      sym__code_block,
  [15808] = 1,
    ACTIONS(2435), 1,
      aux_sym_select_element_token1,
  [15812] = 1,
    ACTIONS(2437), 1,
      sym_object_name,
  [15816] = 1,
    ACTIONS(2439), 1,
      sym_object_name,
  [15820] = 1,
    ACTIONS(2441), 1,
      aux_sym_create_aggregate_token5,
  [15824] = 1,
    ACTIONS(2443), 1,
      aux_sym_create_aggregate_token6,
  [15828] = 1,
    ACTIONS(2445), 1,
      aux_sym_select_element_token1,
  [15832] = 1,
    ACTIONS(2447), 1,
      sym_object_name,
  [15836] = 1,
    ACTIONS(2449), 1,
      aux_sym_create_function_token2,
  [15840] = 1,
    ACTIONS(2451), 1,
      anon_sym_EQ,
  [15844] = 1,
    ACTIONS(2453), 1,
      sym__code_block,
  [15848] = 1,
    ACTIONS(2455), 1,
      aux_sym_select_element_token1,
  [15852] = 1,
    ACTIONS(2457), 1,
      aux_sym__decimal_literal_token1,
  [15856] = 1,
    ACTIONS(2459), 1,
      sym__code_block,
  [15860] = 1,
    ACTIONS(2461), 1,
      aux_sym_create_aggregate_token5,
  [15864] = 1,
    ACTIONS(2463), 1,
      aux_sym_create_aggregate_token6,
  [15868] = 1,
    ACTIONS(2465), 1,
      aux_sym__decimal_literal_token1,
  [15872] = 1,
    ACTIONS(2467), 1,
      sym_object_name,
  [15876] = 1,
    ACTIONS(2469), 1,
      anon_sym_COLON,
  [15880] = 1,
    ACTIONS(2471), 1,
      sym_object_name,
  [15884] = 1,
    ACTIONS(2473), 1,
      sym_object_name,
  [15888] = 1,
    ACTIONS(2475), 1,
      sym_object_name,
  [15892] = 1,
    ACTIONS(2477), 1,
      sym_object_name,
  [15896] = 1,
    ACTIONS(2479), 1,
      aux_sym_create_materialized_view_token1,
  [15900] = 1,
    ACTIONS(2481), 1,
      aux_sym_create_materialized_view_token1,
  [15904] = 1,
    ACTIONS(2483), 1,
      anon_sym_LPAREN,
  [15908] = 1,
    ACTIONS(2485), 1,
      aux_sym_relation_contains_key_token2,
  [15912] = 1,
    ACTIONS(2487), 1,
      sym_object_name,
  [15916] = 1,
    ACTIONS(2489), 1,
      aux_sym_delete_statement_token3,
  [15920] = 1,
    ACTIONS(2491), 1,
      sym_object_name,
  [15924] = 1,
    ACTIONS(2493), 1,
      aux_sym_create_function_token2,
  [15928] = 1,
    ACTIONS(2495), 1,
      sym_object_name,
  [15932] = 1,
    ACTIONS(2497), 1,
      aux_sym_create_function_token1,
  [15936] = 1,
    ACTIONS(2499), 1,
      aux_sym_select_element_token1,
  [15940] = 1,
    ACTIONS(2501), 1,
      sym_object_name,
  [15944] = 1,
    ACTIONS(2503), 1,
      aux_sym_create_function_token2,
  [15948] = 1,
    ACTIONS(2505), 1,
      sym__code_block,
  [15952] = 1,
    ACTIONS(2507), 1,
      aux_sym_select_element_token1,
  [15956] = 1,
    ACTIONS(2509), 1,
      sym_object_name,
  [15960] = 1,
    ACTIONS(2511), 1,
      sym_object_name,
  [15964] = 1,
    ACTIONS(2513), 1,
      sym__code_block,
  [15968] = 1,
    ACTIONS(2515), 1,
      aux_sym_create_aggregate_token4,
  [15972] = 1,
    ACTIONS(2517), 1,
      aux_sym_create_aggregate_token5,
  [15976] = 1,
    ACTIONS(2519), 1,
      sym_object_name,
  [15980] = 1,
    ACTIONS(2521), 1,
      sym_object_name,
  [15984] = 1,
    ACTIONS(2523), 1,
      sym__code_block,
  [15988] = 1,
    ACTIONS(2525), 1,
      aux_sym_select_element_token1,
  [15992] = 1,
    ACTIONS(2527), 1,
      sym_object_name,
  [15996] = 1,
    ACTIONS(2529), 1,
      aux_sym_delete_statement_token3,
  [16000] = 1,
    ACTIONS(2531), 1,
      sym__code_block,
  [16004] = 1,
    ACTIONS(2533), 1,
      sym_object_name,
  [16008] = 1,
    ACTIONS(2535), 1,
      sym_object_name,
  [16012] = 1,
    ACTIONS(2537), 1,
      sym_object_name,
  [16016] = 1,
    ACTIONS(2539), 1,
      sym_object_name,
  [16020] = 1,
    ACTIONS(2541), 1,
      aux_sym_delete_statement_token3,
  [16024] = 1,
    ACTIONS(2543), 1,
      sym_object_name,
  [16028] = 1,
    ACTIONS(2545), 1,
      sym_object_name,
  [16032] = 1,
    ACTIONS(2547), 1,
      aux_sym_delete_statement_token3,
  [16036] = 1,
    ACTIONS(2549), 1,
      sym_object_name,
  [16040] = 1,
    ACTIONS(2551), 1,
      aux_sym_delete_statement_token3,
  [16044] = 1,
    ACTIONS(2553), 1,
      aux_sym_insert_statement_token3,
  [16048] = 1,
    ACTIONS(2555), 1,
      sym_object_name,
  [16052] = 1,
    ACTIONS(2557), 1,
      aux_sym_delete_statement_token3,
  [16056] = 1,
    ACTIONS(2559), 1,
      aux_sym_delete_statement_token3,
  [16060] = 1,
    ACTIONS(2561), 1,
      aux_sym_relation_contains_key_token2,
  [16064] = 1,
    ACTIONS(2563), 1,
      aux_sym_relation_contains_key_token2,
  [16068] = 1,
    ACTIONS(2565), 1,
      sym_object_name,
  [16072] = 1,
    ACTIONS(2567), 1,
      anon_sym_LPAREN,
  [16076] = 1,
    ACTIONS(2569), 1,
      anon_sym_RPAREN,
  [16080] = 1,
    ACTIONS(2571), 1,
      anon_sym_RPAREN,
  [16084] = 1,
    ACTIONS(2573), 1,
      aux_sym_delete_statement_token3,
  [16088] = 1,
    ACTIONS(2575), 1,
      aux_sym_create_keyspace_token1,
  [16092] = 1,
    ACTIONS(2577), 1,
      sym_object_name,
  [16096] = 1,
    ACTIONS(2579), 1,
      aux_sym_create_function_token2,
  [16100] = 1,
    ACTIONS(2581), 1,
      aux_sym_delete_statement_token3,
  [16104] = 1,
    ACTIONS(2583), 1,
      sym__code_block,
  [16108] = 1,
    ACTIONS(2585), 1,
      aux_sym_select_element_token1,
  [16112] = 1,
    ACTIONS(2587), 1,
      sym_object_name,
  [16116] = 1,
    ACTIONS(2589), 1,
      anon_sym_LPAREN,
  [16120] = 1,
    ACTIONS(2591), 1,
      sym__code_block,
  [16124] = 1,
    ACTIONS(2593), 1,
      aux_sym_select_element_token1,
  [16128] = 1,
    ACTIONS(2595), 1,
      aux_sym_delete_statement_token3,
  [16132] = 1,
    ACTIONS(2597), 1,
      aux_sym_delete_statement_token3,
  [16136] = 1,
    ACTIONS(2599), 1,
      sym_object_name,
  [16140] = 1,
    ACTIONS(2601), 1,
      aux_sym_create_aggregate_token6,
  [16144] = 1,
    ACTIONS(2603), 1,
      anon_sym_LPAREN,
  [16148] = 1,
    ACTIONS(2605), 1,
      aux_sym__decimal_literal_token1,
  [16152] = 1,
    ACTIONS(2607), 1,
      sym__code_block,
  [16156] = 1,
    ACTIONS(2609), 1,
      aux_sym_select_element_token1,
  [16160] = 1,
    ACTIONS(2611), 1,
      sym_object_name,
  [16164] = 1,
    ACTIONS(2613), 1,
      aux_sym_create_aggregate_token6,
  [16168] = 1,
    ACTIONS(2615), 1,
      anon_sym_RBRACK,
  [16172] = 1,
    ACTIONS(2617), 1,
      aux_sym_order_spec_token2,
  [16176] = 1,
    ACTIONS(2619), 1,
      aux_sym_select_statement_token5,
  [16180] = 1,
    ACTIONS(2621), 1,
      anon_sym_RPAREN,
  [16184] = 1,
    ACTIONS(2623), 1,
      sym_object_name,
  [16188] = 1,
    ACTIONS(2625), 1,
      sym_object_name,
  [16192] = 1,
    ACTIONS(2627), 1,
      sym_object_name,
  [16196] = 1,
    ACTIONS(2629), 1,
      aux_sym_materialized_view_options_token1,
  [16200] = 1,
    ACTIONS(2631), 1,
      aux_sym_update_token2,
  [16204] = 1,
    ACTIONS(2633), 1,
      aux_sym_create_materialized_view_token1,
  [16208] = 1,
    ACTIONS(2635), 1,
      anon_sym_LPAREN,
  [16212] = 1,
    ACTIONS(2637), 1,
      anon_sym_LPAREN,
  [16216] = 1,
    ACTIONS(2639), 1,
      anon_sym_RPAREN,
  [16220] = 1,
    ACTIONS(2641), 1,
      sym_object_name,
  [16224] = 1,
    ACTIONS(2643), 1,
      aux_sym_delete_statement_token3,
  [16228] = 1,
    ACTIONS(2645), 1,
      aux_sym_delete_statement_token3,
  [16232] = 1,
    ACTIONS(2647), 1,
      aux_sym_delete_statement_token3,
  [16236] = 1,
    ACTIONS(2649), 1,
      aux_sym_delete_statement_token3,
  [16240] = 1,
    ACTIONS(2651), 1,
      aux_sym_select_element_token1,
  [16244] = 1,
    ACTIONS(2653), 1,
      sym_object_name,
  [16248] = 1,
    ACTIONS(2655), 1,
      aux_sym_create_function_token2,
  [16252] = 1,
    ACTIONS(2657), 1,
      aux_sym_delete_statement_token3,
  [16256] = 1,
    ACTIONS(2659), 1,
      sym__code_block,
  [16260] = 1,
    ACTIONS(2661), 1,
      aux_sym_select_element_token1,
  [16264] = 1,
    ACTIONS(2663), 1,
      aux_sym_insert_statement_token2,
  [16268] = 1,
    ACTIONS(2665), 1,
      sym__code_block,
  [16272] = 1,
    ACTIONS(2667), 1,
      aux_sym_create_aggregate_token5,
  [16276] = 1,
    ACTIONS(2669), 1,
      aux_sym_create_aggregate_token6,
  [16280] = 1,
    ACTIONS(2671), 1,
      aux_sym_delete_statement_token3,
  [16284] = 1,
    ACTIONS(2673), 1,
      aux_sym_delete_statement_token3,
  [16288] = 1,
    ACTIONS(2675), 1,
      sym__code_block,
  [16292] = 1,
    ACTIONS(2677), 1,
      aux_sym_delete_statement_token3,
  [16296] = 1,
    ACTIONS(2679), 1,
      aux_sym_relation_contains_key_token2,
  [16300] = 1,
    ACTIONS(2681), 1,
      aux_sym_insert_statement_token3,
  [16304] = 1,
    ACTIONS(2683), 1,
      aux_sym_insert_statement_token3,
  [16308] = 1,
    ACTIONS(2685), 1,
      aux_sym_using_timestamp_spec_token1,
  [16312] = 1,
    ACTIONS(2687), 1,
      anon_sym_RPAREN,
  [16316] = 1,
    ACTIONS(2689), 1,
      aux_sym_insert_statement_token3,
  [16320] = 1,
    ACTIONS(2691), 1,
      aux_sym_insert_statement_token3,
  [16324] = 1,
    ACTIONS(2693), 1,
      aux_sym_insert_statement_token3,
  [16328] = 1,
    ACTIONS(2695), 1,
      aux_sym_insert_statement_token3,
  [16332] = 1,
    ACTIONS(2697), 1,
      sym__code_block,
  [16336] = 1,
    ACTIONS(2699), 1,
      aux_sym_select_element_token1,
  [16340] = 1,
    ACTIONS(2701), 1,
      sym_object_name,
  [16344] = 1,
    ACTIONS(2703), 1,
      aux_sym_materialized_view_options_token1,
  [16348] = 1,
    ACTIONS(2705), 1,
      sym__code_block,
  [16352] = 1,
    ACTIONS(2707), 1,
      aux_sym_materialized_view_options_token1,
  [16356] = 1,
    ACTIONS(2709), 1,
      sym_object_name,
  [16360] = 1,
    ACTIONS(2711), 1,
      aux_sym_insert_statement_token3,
  [16364] = 1,
    ACTIONS(2713), 1,
      aux_sym_create_index_token3,
  [16368] = 1,
    ACTIONS(2715), 1,
      aux_sym_insert_statement_token3,
  [16372] = 1,
    ACTIONS(2717), 1,
      aux_sym_create_index_token3,
  [16376] = 1,
    ACTIONS(2719), 1,
      anon_sym_LPAREN,
  [16380] = 1,
    ACTIONS(2721), 1,
      anon_sym_RPAREN,
  [16384] = 1,
    ACTIONS(2723), 1,
      anon_sym_RPAREN,
  [16388] = 1,
    ACTIONS(2725), 1,
      anon_sym_LPAREN,
  [16392] = 1,
    ACTIONS(2727), 1,
      aux_sym_insert_statement_token3,
  [16396] = 1,
    ACTIONS(2729), 1,
      sym_object_name,
  [16400] = 1,
    ACTIONS(2731), 1,
      aux_sym_using_timestamp_spec_token2,
  [16404] = 1,
    ACTIONS(2733), 1,
      sym_object_name,
  [16408] = 1,
    ACTIONS(2735), 1,
      sym_object_name,
  [16412] = 1,
    ACTIONS(2737), 1,
      anon_sym_STAR,
  [16416] = 1,
    ACTIONS(2739), 1,
      sym__code_block,
  [16420] = 1,
    ACTIONS(2741), 1,
      aux_sym_select_element_token1,
  [16424] = 1,
    ACTIONS(2743), 1,
      sym_object_name,
  [16428] = 1,
    ACTIONS(2745), 1,
      aux_sym_create_aggregate_token6,
  [16432] = 1,
    ACTIONS(2747), 1,
      aux_sym_insert_statement_token2,
  [16436] = 1,
    ACTIONS(2749), 1,
      sym_object_name,
  [16440] = 1,
    ACTIONS(2751), 1,
      aux_sym_drop_materialized_view_token2,
  [16444] = 1,
    ACTIONS(2753), 1,
      sym_object_name,
  [16448] = 1,
    ACTIONS(2755), 1,
      sym_object_name,
  [16452] = 1,
    ACTIONS(2757), 1,
      aux_sym_create_index_token3,
  [16456] = 1,
    ACTIONS(2759), 1,
      aux_sym_create_index_token3,
  [16460] = 1,
    ACTIONS(2761), 1,
      aux_sym_drop_materialized_view_token2,
  [16464] = 1,
    ACTIONS(2763), 1,
      sym__code_block,
  [16468] = 1,
    ACTIONS(2765), 1,
      aux_sym_create_aggregate_token2,
  [16472] = 1,
    ACTIONS(2767), 1,
      anon_sym_RPAREN,
  [16476] = 1,
    ACTIONS(2769), 1,
      aux_sym_drop_materialized_view_token2,
  [16480] = 1,
    ACTIONS(2771), 1,
      aux_sym_begin_batch_token4,
  [16484] = 1,
    ACTIONS(2773), 1,
      ts_builtin_sym_end,
  [16488] = 1,
    ACTIONS(2775), 1,
      aux_sym_begin_batch_token4,
  [16492] = 1,
    ACTIONS(2777), 1,
      sym_object_name,
  [16496] = 1,
    ACTIONS(2779), 1,
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
  [SMALL_STATE(36)] = 1300,
  [SMALL_STATE(37)] = 1335,
  [SMALL_STATE(38)] = 1370,
  [SMALL_STATE(39)] = 1405,
  [SMALL_STATE(40)] = 1440,
  [SMALL_STATE(41)] = 1475,
  [SMALL_STATE(42)] = 1510,
  [SMALL_STATE(43)] = 1545,
  [SMALL_STATE(44)] = 1580,
  [SMALL_STATE(45)] = 1615,
  [SMALL_STATE(46)] = 1650,
  [SMALL_STATE(47)] = 1685,
  [SMALL_STATE(48)] = 1720,
  [SMALL_STATE(49)] = 1755,
  [SMALL_STATE(50)] = 1790,
  [SMALL_STATE(51)] = 1825,
  [SMALL_STATE(52)] = 1860,
  [SMALL_STATE(53)] = 1895,
  [SMALL_STATE(54)] = 1930,
  [SMALL_STATE(55)] = 1965,
  [SMALL_STATE(56)] = 2000,
  [SMALL_STATE(57)] = 2035,
  [SMALL_STATE(58)] = 2070,
  [SMALL_STATE(59)] = 2102,
  [SMALL_STATE(60)] = 2134,
  [SMALL_STATE(61)] = 2166,
  [SMALL_STATE(62)] = 2196,
  [SMALL_STATE(63)] = 2227,
  [SMALL_STATE(64)] = 2258,
  [SMALL_STATE(65)] = 2285,
  [SMALL_STATE(66)] = 2312,
  [SMALL_STATE(67)] = 2343,
  [SMALL_STATE(68)] = 2374,
  [SMALL_STATE(69)] = 2401,
  [SMALL_STATE(70)] = 2427,
  [SMALL_STATE(71)] = 2457,
  [SMALL_STATE(72)] = 2497,
  [SMALL_STATE(73)] = 2537,
  [SMALL_STATE(74)] = 2567,
  [SMALL_STATE(75)] = 2607,
  [SMALL_STATE(76)] = 2636,
  [SMALL_STATE(77)] = 2661,
  [SMALL_STATE(78)] = 2686,
  [SMALL_STATE(79)] = 2711,
  [SMALL_STATE(80)] = 2736,
  [SMALL_STATE(81)] = 2761,
  [SMALL_STATE(82)] = 2786,
  [SMALL_STATE(83)] = 2811,
  [SMALL_STATE(84)] = 2840,
  [SMALL_STATE(85)] = 2865,
  [SMALL_STATE(86)] = 2890,
  [SMALL_STATE(87)] = 2915,
  [SMALL_STATE(88)] = 2939,
  [SMALL_STATE(89)] = 2963,
  [SMALL_STATE(90)] = 2997,
  [SMALL_STATE(91)] = 3031,
  [SMALL_STATE(92)] = 3055,
  [SMALL_STATE(93)] = 3079,
  [SMALL_STATE(94)] = 3113,
  [SMALL_STATE(95)] = 3138,
  [SMALL_STATE(96)] = 3163,
  [SMALL_STATE(97)] = 3186,
  [SMALL_STATE(98)] = 3211,
  [SMALL_STATE(99)] = 3236,
  [SMALL_STATE(100)] = 3261,
  [SMALL_STATE(101)] = 3288,
  [SMALL_STATE(102)] = 3310,
  [SMALL_STATE(103)] = 3332,
  [SMALL_STATE(104)] = 3354,
  [SMALL_STATE(105)] = 3382,
  [SMALL_STATE(106)] = 3410,
  [SMALL_STATE(107)] = 3448,
  [SMALL_STATE(108)] = 3476,
  [SMALL_STATE(109)] = 3504,
  [SMALL_STATE(110)] = 3532,
  [SMALL_STATE(111)] = 3554,
  [SMALL_STATE(112)] = 3580,
  [SMALL_STATE(113)] = 3602,
  [SMALL_STATE(114)] = 3624,
  [SMALL_STATE(115)] = 3652,
  [SMALL_STATE(116)] = 3674,
  [SMALL_STATE(117)] = 3698,
  [SMALL_STATE(118)] = 3726,
  [SMALL_STATE(119)] = 3764,
  [SMALL_STATE(120)] = 3786,
  [SMALL_STATE(121)] = 3807,
  [SMALL_STATE(122)] = 3832,
  [SMALL_STATE(123)] = 3857,
  [SMALL_STATE(124)] = 3882,
  [SMALL_STATE(125)] = 3907,
  [SMALL_STATE(126)] = 3932,
  [SMALL_STATE(127)] = 3957,
  [SMALL_STATE(128)] = 3982,
  [SMALL_STATE(129)] = 4007,
  [SMALL_STATE(130)] = 4032,
  [SMALL_STATE(131)] = 4053,
  [SMALL_STATE(132)] = 4078,
  [SMALL_STATE(133)] = 4103,
  [SMALL_STATE(134)] = 4124,
  [SMALL_STATE(135)] = 4149,
  [SMALL_STATE(136)] = 4174,
  [SMALL_STATE(137)] = 4199,
  [SMALL_STATE(138)] = 4224,
  [SMALL_STATE(139)] = 4249,
  [SMALL_STATE(140)] = 4274,
  [SMALL_STATE(141)] = 4295,
  [SMALL_STATE(142)] = 4320,
  [SMALL_STATE(143)] = 4345,
  [SMALL_STATE(144)] = 4370,
  [SMALL_STATE(145)] = 4395,
  [SMALL_STATE(146)] = 4416,
  [SMALL_STATE(147)] = 4441,
  [SMALL_STATE(148)] = 4462,
  [SMALL_STATE(149)] = 4497,
  [SMALL_STATE(150)] = 4522,
  [SMALL_STATE(151)] = 4543,
  [SMALL_STATE(152)] = 4564,
  [SMALL_STATE(153)] = 4589,
  [SMALL_STATE(154)] = 4614,
  [SMALL_STATE(155)] = 4639,
  [SMALL_STATE(156)] = 4664,
  [SMALL_STATE(157)] = 4689,
  [SMALL_STATE(158)] = 4714,
  [SMALL_STATE(159)] = 4735,
  [SMALL_STATE(160)] = 4760,
  [SMALL_STATE(161)] = 4781,
  [SMALL_STATE(162)] = 4802,
  [SMALL_STATE(163)] = 4827,
  [SMALL_STATE(164)] = 4852,
  [SMALL_STATE(165)] = 4877,
  [SMALL_STATE(166)] = 4902,
  [SMALL_STATE(167)] = 4927,
  [SMALL_STATE(168)] = 4952,
  [SMALL_STATE(169)] = 4977,
  [SMALL_STATE(170)] = 5002,
  [SMALL_STATE(171)] = 5027,
  [SMALL_STATE(172)] = 5052,
  [SMALL_STATE(173)] = 5073,
  [SMALL_STATE(174)] = 5098,
  [SMALL_STATE(175)] = 5123,
  [SMALL_STATE(176)] = 5148,
  [SMALL_STATE(177)] = 5169,
  [SMALL_STATE(178)] = 5194,
  [SMALL_STATE(179)] = 5219,
  [SMALL_STATE(180)] = 5244,
  [SMALL_STATE(181)] = 5269,
  [SMALL_STATE(182)] = 5294,
  [SMALL_STATE(183)] = 5319,
  [SMALL_STATE(184)] = 5344,
  [SMALL_STATE(185)] = 5369,
  [SMALL_STATE(186)] = 5394,
  [SMALL_STATE(187)] = 5419,
  [SMALL_STATE(188)] = 5444,
  [SMALL_STATE(189)] = 5469,
  [SMALL_STATE(190)] = 5494,
  [SMALL_STATE(191)] = 5519,
  [SMALL_STATE(192)] = 5542,
  [SMALL_STATE(193)] = 5565,
  [SMALL_STATE(194)] = 5587,
  [SMALL_STATE(195)] = 5607,
  [SMALL_STATE(196)] = 5629,
  [SMALL_STATE(197)] = 5651,
  [SMALL_STATE(198)] = 5671,
  [SMALL_STATE(199)] = 5693,
  [SMALL_STATE(200)] = 5715,
  [SMALL_STATE(201)] = 5737,
  [SMALL_STATE(202)] = 5759,
  [SMALL_STATE(203)] = 5779,
  [SMALL_STATE(204)] = 5801,
  [SMALL_STATE(205)] = 5823,
  [SMALL_STATE(206)] = 5843,
  [SMALL_STATE(207)] = 5863,
  [SMALL_STATE(208)] = 5885,
  [SMALL_STATE(209)] = 5907,
  [SMALL_STATE(210)] = 5927,
  [SMALL_STATE(211)] = 5947,
  [SMALL_STATE(212)] = 5967,
  [SMALL_STATE(213)] = 5987,
  [SMALL_STATE(214)] = 6007,
  [SMALL_STATE(215)] = 6029,
  [SMALL_STATE(216)] = 6049,
  [SMALL_STATE(217)] = 6069,
  [SMALL_STATE(218)] = 6091,
  [SMALL_STATE(219)] = 6111,
  [SMALL_STATE(220)] = 6133,
  [SMALL_STATE(221)] = 6155,
  [SMALL_STATE(222)] = 6175,
  [SMALL_STATE(223)] = 6197,
  [SMALL_STATE(224)] = 6219,
  [SMALL_STATE(225)] = 6239,
  [SMALL_STATE(226)] = 6261,
  [SMALL_STATE(227)] = 6281,
  [SMALL_STATE(228)] = 6303,
  [SMALL_STATE(229)] = 6323,
  [SMALL_STATE(230)] = 6345,
  [SMALL_STATE(231)] = 6365,
  [SMALL_STATE(232)] = 6387,
  [SMALL_STATE(233)] = 6407,
  [SMALL_STATE(234)] = 6427,
  [SMALL_STATE(235)] = 6449,
  [SMALL_STATE(236)] = 6471,
  [SMALL_STATE(237)] = 6493,
  [SMALL_STATE(238)] = 6513,
  [SMALL_STATE(239)] = 6535,
  [SMALL_STATE(240)] = 6555,
  [SMALL_STATE(241)] = 6577,
  [SMALL_STATE(242)] = 6597,
  [SMALL_STATE(243)] = 6617,
  [SMALL_STATE(244)] = 6639,
  [SMALL_STATE(245)] = 6659,
  [SMALL_STATE(246)] = 6678,
  [SMALL_STATE(247)] = 6697,
  [SMALL_STATE(248)] = 6716,
  [SMALL_STATE(249)] = 6735,
  [SMALL_STATE(250)] = 6754,
  [SMALL_STATE(251)] = 6773,
  [SMALL_STATE(252)] = 6792,
  [SMALL_STATE(253)] = 6811,
  [SMALL_STATE(254)] = 6830,
  [SMALL_STATE(255)] = 6849,
  [SMALL_STATE(256)] = 6868,
  [SMALL_STATE(257)] = 6887,
  [SMALL_STATE(258)] = 6906,
  [SMALL_STATE(259)] = 6925,
  [SMALL_STATE(260)] = 6944,
  [SMALL_STATE(261)] = 6963,
  [SMALL_STATE(262)] = 6982,
  [SMALL_STATE(263)] = 7001,
  [SMALL_STATE(264)] = 7020,
  [SMALL_STATE(265)] = 7039,
  [SMALL_STATE(266)] = 7058,
  [SMALL_STATE(267)] = 7077,
  [SMALL_STATE(268)] = 7096,
  [SMALL_STATE(269)] = 7115,
  [SMALL_STATE(270)] = 7134,
  [SMALL_STATE(271)] = 7153,
  [SMALL_STATE(272)] = 7172,
  [SMALL_STATE(273)] = 7191,
  [SMALL_STATE(274)] = 7210,
  [SMALL_STATE(275)] = 7229,
  [SMALL_STATE(276)] = 7248,
  [SMALL_STATE(277)] = 7267,
  [SMALL_STATE(278)] = 7286,
  [SMALL_STATE(279)] = 7305,
  [SMALL_STATE(280)] = 7324,
  [SMALL_STATE(281)] = 7343,
  [SMALL_STATE(282)] = 7362,
  [SMALL_STATE(283)] = 7381,
  [SMALL_STATE(284)] = 7400,
  [SMALL_STATE(285)] = 7419,
  [SMALL_STATE(286)] = 7438,
  [SMALL_STATE(287)] = 7457,
  [SMALL_STATE(288)] = 7476,
  [SMALL_STATE(289)] = 7495,
  [SMALL_STATE(290)] = 7514,
  [SMALL_STATE(291)] = 7533,
  [SMALL_STATE(292)] = 7552,
  [SMALL_STATE(293)] = 7571,
  [SMALL_STATE(294)] = 7590,
  [SMALL_STATE(295)] = 7609,
  [SMALL_STATE(296)] = 7628,
  [SMALL_STATE(297)] = 7647,
  [SMALL_STATE(298)] = 7666,
  [SMALL_STATE(299)] = 7685,
  [SMALL_STATE(300)] = 7704,
  [SMALL_STATE(301)] = 7723,
  [SMALL_STATE(302)] = 7742,
  [SMALL_STATE(303)] = 7761,
  [SMALL_STATE(304)] = 7780,
  [SMALL_STATE(305)] = 7799,
  [SMALL_STATE(306)] = 7818,
  [SMALL_STATE(307)] = 7837,
  [SMALL_STATE(308)] = 7856,
  [SMALL_STATE(309)] = 7875,
  [SMALL_STATE(310)] = 7894,
  [SMALL_STATE(311)] = 7913,
  [SMALL_STATE(312)] = 7932,
  [SMALL_STATE(313)] = 7951,
  [SMALL_STATE(314)] = 7970,
  [SMALL_STATE(315)] = 7989,
  [SMALL_STATE(316)] = 8008,
  [SMALL_STATE(317)] = 8027,
  [SMALL_STATE(318)] = 8046,
  [SMALL_STATE(319)] = 8065,
  [SMALL_STATE(320)] = 8084,
  [SMALL_STATE(321)] = 8105,
  [SMALL_STATE(322)] = 8124,
  [SMALL_STATE(323)] = 8143,
  [SMALL_STATE(324)] = 8162,
  [SMALL_STATE(325)] = 8181,
  [SMALL_STATE(326)] = 8200,
  [SMALL_STATE(327)] = 8219,
  [SMALL_STATE(328)] = 8238,
  [SMALL_STATE(329)] = 8257,
  [SMALL_STATE(330)] = 8276,
  [SMALL_STATE(331)] = 8295,
  [SMALL_STATE(332)] = 8314,
  [SMALL_STATE(333)] = 8333,
  [SMALL_STATE(334)] = 8352,
  [SMALL_STATE(335)] = 8371,
  [SMALL_STATE(336)] = 8390,
  [SMALL_STATE(337)] = 8409,
  [SMALL_STATE(338)] = 8428,
  [SMALL_STATE(339)] = 8447,
  [SMALL_STATE(340)] = 8466,
  [SMALL_STATE(341)] = 8485,
  [SMALL_STATE(342)] = 8504,
  [SMALL_STATE(343)] = 8523,
  [SMALL_STATE(344)] = 8542,
  [SMALL_STATE(345)] = 8561,
  [SMALL_STATE(346)] = 8580,
  [SMALL_STATE(347)] = 8599,
  [SMALL_STATE(348)] = 8618,
  [SMALL_STATE(349)] = 8637,
  [SMALL_STATE(350)] = 8656,
  [SMALL_STATE(351)] = 8675,
  [SMALL_STATE(352)] = 8694,
  [SMALL_STATE(353)] = 8713,
  [SMALL_STATE(354)] = 8732,
  [SMALL_STATE(355)] = 8751,
  [SMALL_STATE(356)] = 8770,
  [SMALL_STATE(357)] = 8789,
  [SMALL_STATE(358)] = 8808,
  [SMALL_STATE(359)] = 8827,
  [SMALL_STATE(360)] = 8846,
  [SMALL_STATE(361)] = 8865,
  [SMALL_STATE(362)] = 8884,
  [SMALL_STATE(363)] = 8903,
  [SMALL_STATE(364)] = 8922,
  [SMALL_STATE(365)] = 8941,
  [SMALL_STATE(366)] = 8960,
  [SMALL_STATE(367)] = 8979,
  [SMALL_STATE(368)] = 8998,
  [SMALL_STATE(369)] = 9017,
  [SMALL_STATE(370)] = 9036,
  [SMALL_STATE(371)] = 9055,
  [SMALL_STATE(372)] = 9074,
  [SMALL_STATE(373)] = 9093,
  [SMALL_STATE(374)] = 9112,
  [SMALL_STATE(375)] = 9131,
  [SMALL_STATE(376)] = 9150,
  [SMALL_STATE(377)] = 9169,
  [SMALL_STATE(378)] = 9188,
  [SMALL_STATE(379)] = 9207,
  [SMALL_STATE(380)] = 9226,
  [SMALL_STATE(381)] = 9245,
  [SMALL_STATE(382)] = 9264,
  [SMALL_STATE(383)] = 9283,
  [SMALL_STATE(384)] = 9302,
  [SMALL_STATE(385)] = 9321,
  [SMALL_STATE(386)] = 9340,
  [SMALL_STATE(387)] = 9359,
  [SMALL_STATE(388)] = 9378,
  [SMALL_STATE(389)] = 9397,
  [SMALL_STATE(390)] = 9416,
  [SMALL_STATE(391)] = 9451,
  [SMALL_STATE(392)] = 9470,
  [SMALL_STATE(393)] = 9489,
  [SMALL_STATE(394)] = 9508,
  [SMALL_STATE(395)] = 9527,
  [SMALL_STATE(396)] = 9546,
  [SMALL_STATE(397)] = 9565,
  [SMALL_STATE(398)] = 9584,
  [SMALL_STATE(399)] = 9603,
  [SMALL_STATE(400)] = 9622,
  [SMALL_STATE(401)] = 9641,
  [SMALL_STATE(402)] = 9660,
  [SMALL_STATE(403)] = 9679,
  [SMALL_STATE(404)] = 9697,
  [SMALL_STATE(405)] = 9725,
  [SMALL_STATE(406)] = 9753,
  [SMALL_STATE(407)] = 9781,
  [SMALL_STATE(408)] = 9809,
  [SMALL_STATE(409)] = 9837,
  [SMALL_STATE(410)] = 9865,
  [SMALL_STATE(411)] = 9893,
  [SMALL_STATE(412)] = 9921,
  [SMALL_STATE(413)] = 9949,
  [SMALL_STATE(414)] = 9980,
  [SMALL_STATE(415)] = 10013,
  [SMALL_STATE(416)] = 10041,
  [SMALL_STATE(417)] = 10066,
  [SMALL_STATE(418)] = 10089,
  [SMALL_STATE(419)] = 10114,
  [SMALL_STATE(420)] = 10134,
  [SMALL_STATE(421)] = 10160,
  [SMALL_STATE(422)] = 10182,
  [SMALL_STATE(423)] = 10204,
  [SMALL_STATE(424)] = 10238,
  [SMALL_STATE(425)] = 10255,
  [SMALL_STATE(426)] = 10274,
  [SMALL_STATE(427)] = 10293,
  [SMALL_STATE(428)] = 10312,
  [SMALL_STATE(429)] = 10335,
  [SMALL_STATE(430)] = 10354,
  [SMALL_STATE(431)] = 10371,
  [SMALL_STATE(432)] = 10394,
  [SMALL_STATE(433)] = 10413,
  [SMALL_STATE(434)] = 10432,
  [SMALL_STATE(435)] = 10451,
  [SMALL_STATE(436)] = 10470,
  [SMALL_STATE(437)] = 10489,
  [SMALL_STATE(438)] = 10520,
  [SMALL_STATE(439)] = 10539,
  [SMALL_STATE(440)] = 10558,
  [SMALL_STATE(441)] = 10578,
  [SMALL_STATE(442)] = 10599,
  [SMALL_STATE(443)] = 10620,
  [SMALL_STATE(444)] = 10641,
  [SMALL_STATE(445)] = 10662,
  [SMALL_STATE(446)] = 10683,
  [SMALL_STATE(447)] = 10704,
  [SMALL_STATE(448)] = 10725,
  [SMALL_STATE(449)] = 10746,
  [SMALL_STATE(450)] = 10767,
  [SMALL_STATE(451)] = 10789,
  [SMALL_STATE(452)] = 10803,
  [SMALL_STATE(453)] = 10817,
  [SMALL_STATE(454)] = 10837,
  [SMALL_STATE(455)] = 10855,
  [SMALL_STATE(456)] = 10877,
  [SMALL_STATE(457)] = 10895,
  [SMALL_STATE(458)] = 10917,
  [SMALL_STATE(459)] = 10935,
  [SMALL_STATE(460)] = 10957,
  [SMALL_STATE(461)] = 10977,
  [SMALL_STATE(462)] = 10988,
  [SMALL_STATE(463)] = 11005,
  [SMALL_STATE(464)] = 11024,
  [SMALL_STATE(465)] = 11043,
  [SMALL_STATE(466)] = 11051,
  [SMALL_STATE(467)] = 11063,
  [SMALL_STATE(468)] = 11079,
  [SMALL_STATE(469)] = 11093,
  [SMALL_STATE(470)] = 11109,
  [SMALL_STATE(471)] = 11125,
  [SMALL_STATE(472)] = 11141,
  [SMALL_STATE(473)] = 11155,
  [SMALL_STATE(474)] = 11171,
  [SMALL_STATE(475)] = 11183,
  [SMALL_STATE(476)] = 11191,
  [SMALL_STATE(477)] = 11203,
  [SMALL_STATE(478)] = 11211,
  [SMALL_STATE(479)] = 11219,
  [SMALL_STATE(480)] = 11235,
  [SMALL_STATE(481)] = 11251,
  [SMALL_STATE(482)] = 11259,
  [SMALL_STATE(483)] = 11267,
  [SMALL_STATE(484)] = 11275,
  [SMALL_STATE(485)] = 11291,
  [SMALL_STATE(486)] = 11307,
  [SMALL_STATE(487)] = 11323,
  [SMALL_STATE(488)] = 11335,
  [SMALL_STATE(489)] = 11351,
  [SMALL_STATE(490)] = 11367,
  [SMALL_STATE(491)] = 11380,
  [SMALL_STATE(492)] = 11393,
  [SMALL_STATE(493)] = 11406,
  [SMALL_STATE(494)] = 11419,
  [SMALL_STATE(495)] = 11432,
  [SMALL_STATE(496)] = 11439,
  [SMALL_STATE(497)] = 11452,
  [SMALL_STATE(498)] = 11465,
  [SMALL_STATE(499)] = 11478,
  [SMALL_STATE(500)] = 11491,
  [SMALL_STATE(501)] = 11504,
  [SMALL_STATE(502)] = 11517,
  [SMALL_STATE(503)] = 11530,
  [SMALL_STATE(504)] = 11543,
  [SMALL_STATE(505)] = 11556,
  [SMALL_STATE(506)] = 11569,
  [SMALL_STATE(507)] = 11582,
  [SMALL_STATE(508)] = 11595,
  [SMALL_STATE(509)] = 11608,
  [SMALL_STATE(510)] = 11621,
  [SMALL_STATE(511)] = 11634,
  [SMALL_STATE(512)] = 11647,
  [SMALL_STATE(513)] = 11660,
  [SMALL_STATE(514)] = 11673,
  [SMALL_STATE(515)] = 11686,
  [SMALL_STATE(516)] = 11699,
  [SMALL_STATE(517)] = 11712,
  [SMALL_STATE(518)] = 11725,
  [SMALL_STATE(519)] = 11738,
  [SMALL_STATE(520)] = 11751,
  [SMALL_STATE(521)] = 11764,
  [SMALL_STATE(522)] = 11777,
  [SMALL_STATE(523)] = 11790,
  [SMALL_STATE(524)] = 11799,
  [SMALL_STATE(525)] = 11812,
  [SMALL_STATE(526)] = 11825,
  [SMALL_STATE(527)] = 11838,
  [SMALL_STATE(528)] = 11845,
  [SMALL_STATE(529)] = 11858,
  [SMALL_STATE(530)] = 11871,
  [SMALL_STATE(531)] = 11882,
  [SMALL_STATE(532)] = 11893,
  [SMALL_STATE(533)] = 11906,
  [SMALL_STATE(534)] = 11919,
  [SMALL_STATE(535)] = 11932,
  [SMALL_STATE(536)] = 11945,
  [SMALL_STATE(537)] = 11958,
  [SMALL_STATE(538)] = 11969,
  [SMALL_STATE(539)] = 11982,
  [SMALL_STATE(540)] = 11995,
  [SMALL_STATE(541)] = 12005,
  [SMALL_STATE(542)] = 12015,
  [SMALL_STATE(543)] = 12025,
  [SMALL_STATE(544)] = 12035,
  [SMALL_STATE(545)] = 12043,
  [SMALL_STATE(546)] = 12053,
  [SMALL_STATE(547)] = 12063,
  [SMALL_STATE(548)] = 12073,
  [SMALL_STATE(549)] = 12083,
  [SMALL_STATE(550)] = 12093,
  [SMALL_STATE(551)] = 12103,
  [SMALL_STATE(552)] = 12113,
  [SMALL_STATE(553)] = 12123,
  [SMALL_STATE(554)] = 12131,
  [SMALL_STATE(555)] = 12141,
  [SMALL_STATE(556)] = 12151,
  [SMALL_STATE(557)] = 12161,
  [SMALL_STATE(558)] = 12171,
  [SMALL_STATE(559)] = 12181,
  [SMALL_STATE(560)] = 12191,
  [SMALL_STATE(561)] = 12201,
  [SMALL_STATE(562)] = 12211,
  [SMALL_STATE(563)] = 12221,
  [SMALL_STATE(564)] = 12231,
  [SMALL_STATE(565)] = 12241,
  [SMALL_STATE(566)] = 12251,
  [SMALL_STATE(567)] = 12261,
  [SMALL_STATE(568)] = 12271,
  [SMALL_STATE(569)] = 12281,
  [SMALL_STATE(570)] = 12291,
  [SMALL_STATE(571)] = 12301,
  [SMALL_STATE(572)] = 12311,
  [SMALL_STATE(573)] = 12321,
  [SMALL_STATE(574)] = 12331,
  [SMALL_STATE(575)] = 12341,
  [SMALL_STATE(576)] = 12351,
  [SMALL_STATE(577)] = 12361,
  [SMALL_STATE(578)] = 12371,
  [SMALL_STATE(579)] = 12381,
  [SMALL_STATE(580)] = 12391,
  [SMALL_STATE(581)] = 12401,
  [SMALL_STATE(582)] = 12411,
  [SMALL_STATE(583)] = 12421,
  [SMALL_STATE(584)] = 12431,
  [SMALL_STATE(585)] = 12441,
  [SMALL_STATE(586)] = 12451,
  [SMALL_STATE(587)] = 12461,
  [SMALL_STATE(588)] = 12471,
  [SMALL_STATE(589)] = 12481,
  [SMALL_STATE(590)] = 12491,
  [SMALL_STATE(591)] = 12501,
  [SMALL_STATE(592)] = 12511,
  [SMALL_STATE(593)] = 12517,
  [SMALL_STATE(594)] = 12527,
  [SMALL_STATE(595)] = 12537,
  [SMALL_STATE(596)] = 12547,
  [SMALL_STATE(597)] = 12557,
  [SMALL_STATE(598)] = 12567,
  [SMALL_STATE(599)] = 12577,
  [SMALL_STATE(600)] = 12587,
  [SMALL_STATE(601)] = 12597,
  [SMALL_STATE(602)] = 12607,
  [SMALL_STATE(603)] = 12617,
  [SMALL_STATE(604)] = 12625,
  [SMALL_STATE(605)] = 12635,
  [SMALL_STATE(606)] = 12645,
  [SMALL_STATE(607)] = 12655,
  [SMALL_STATE(608)] = 12665,
  [SMALL_STATE(609)] = 12675,
  [SMALL_STATE(610)] = 12685,
  [SMALL_STATE(611)] = 12693,
  [SMALL_STATE(612)] = 12703,
  [SMALL_STATE(613)] = 12713,
  [SMALL_STATE(614)] = 12723,
  [SMALL_STATE(615)] = 12733,
  [SMALL_STATE(616)] = 12743,
  [SMALL_STATE(617)] = 12753,
  [SMALL_STATE(618)] = 12763,
  [SMALL_STATE(619)] = 12773,
  [SMALL_STATE(620)] = 12783,
  [SMALL_STATE(621)] = 12793,
  [SMALL_STATE(622)] = 12803,
  [SMALL_STATE(623)] = 12813,
  [SMALL_STATE(624)] = 12823,
  [SMALL_STATE(625)] = 12833,
  [SMALL_STATE(626)] = 12843,
  [SMALL_STATE(627)] = 12853,
  [SMALL_STATE(628)] = 12863,
  [SMALL_STATE(629)] = 12873,
  [SMALL_STATE(630)] = 12883,
  [SMALL_STATE(631)] = 12893,
  [SMALL_STATE(632)] = 12903,
  [SMALL_STATE(633)] = 12913,
  [SMALL_STATE(634)] = 12923,
  [SMALL_STATE(635)] = 12933,
  [SMALL_STATE(636)] = 12943,
  [SMALL_STATE(637)] = 12953,
  [SMALL_STATE(638)] = 12963,
  [SMALL_STATE(639)] = 12973,
  [SMALL_STATE(640)] = 12983,
  [SMALL_STATE(641)] = 12993,
  [SMALL_STATE(642)] = 13003,
  [SMALL_STATE(643)] = 13013,
  [SMALL_STATE(644)] = 13023,
  [SMALL_STATE(645)] = 13033,
  [SMALL_STATE(646)] = 13043,
  [SMALL_STATE(647)] = 13053,
  [SMALL_STATE(648)] = 13063,
  [SMALL_STATE(649)] = 13073,
  [SMALL_STATE(650)] = 13083,
  [SMALL_STATE(651)] = 13093,
  [SMALL_STATE(652)] = 13103,
  [SMALL_STATE(653)] = 13113,
  [SMALL_STATE(654)] = 13123,
  [SMALL_STATE(655)] = 13133,
  [SMALL_STATE(656)] = 13143,
  [SMALL_STATE(657)] = 13153,
  [SMALL_STATE(658)] = 13163,
  [SMALL_STATE(659)] = 13173,
  [SMALL_STATE(660)] = 13181,
  [SMALL_STATE(661)] = 13191,
  [SMALL_STATE(662)] = 13201,
  [SMALL_STATE(663)] = 13211,
  [SMALL_STATE(664)] = 13221,
  [SMALL_STATE(665)] = 13231,
  [SMALL_STATE(666)] = 13241,
  [SMALL_STATE(667)] = 13251,
  [SMALL_STATE(668)] = 13261,
  [SMALL_STATE(669)] = 13271,
  [SMALL_STATE(670)] = 13281,
  [SMALL_STATE(671)] = 13291,
  [SMALL_STATE(672)] = 13301,
  [SMALL_STATE(673)] = 13311,
  [SMALL_STATE(674)] = 13321,
  [SMALL_STATE(675)] = 13331,
  [SMALL_STATE(676)] = 13341,
  [SMALL_STATE(677)] = 13351,
  [SMALL_STATE(678)] = 13361,
  [SMALL_STATE(679)] = 13371,
  [SMALL_STATE(680)] = 13381,
  [SMALL_STATE(681)] = 13391,
  [SMALL_STATE(682)] = 13401,
  [SMALL_STATE(683)] = 13411,
  [SMALL_STATE(684)] = 13421,
  [SMALL_STATE(685)] = 13431,
  [SMALL_STATE(686)] = 13439,
  [SMALL_STATE(687)] = 13449,
  [SMALL_STATE(688)] = 13459,
  [SMALL_STATE(689)] = 13469,
  [SMALL_STATE(690)] = 13479,
  [SMALL_STATE(691)] = 13485,
  [SMALL_STATE(692)] = 13495,
  [SMALL_STATE(693)] = 13502,
  [SMALL_STATE(694)] = 13509,
  [SMALL_STATE(695)] = 13514,
  [SMALL_STATE(696)] = 13519,
  [SMALL_STATE(697)] = 13526,
  [SMALL_STATE(698)] = 13533,
  [SMALL_STATE(699)] = 13540,
  [SMALL_STATE(700)] = 13547,
  [SMALL_STATE(701)] = 13554,
  [SMALL_STATE(702)] = 13561,
  [SMALL_STATE(703)] = 13566,
  [SMALL_STATE(704)] = 13573,
  [SMALL_STATE(705)] = 13580,
  [SMALL_STATE(706)] = 13587,
  [SMALL_STATE(707)] = 13594,
  [SMALL_STATE(708)] = 13601,
  [SMALL_STATE(709)] = 13608,
  [SMALL_STATE(710)] = 13615,
  [SMALL_STATE(711)] = 13620,
  [SMALL_STATE(712)] = 13627,
  [SMALL_STATE(713)] = 13634,
  [SMALL_STATE(714)] = 13639,
  [SMALL_STATE(715)] = 13646,
  [SMALL_STATE(716)] = 13651,
  [SMALL_STATE(717)] = 13656,
  [SMALL_STATE(718)] = 13663,
  [SMALL_STATE(719)] = 13670,
  [SMALL_STATE(720)] = 13677,
  [SMALL_STATE(721)] = 13684,
  [SMALL_STATE(722)] = 13691,
  [SMALL_STATE(723)] = 13698,
  [SMALL_STATE(724)] = 13705,
  [SMALL_STATE(725)] = 13710,
  [SMALL_STATE(726)] = 13717,
  [SMALL_STATE(727)] = 13724,
  [SMALL_STATE(728)] = 13729,
  [SMALL_STATE(729)] = 13736,
  [SMALL_STATE(730)] = 13743,
  [SMALL_STATE(731)] = 13748,
  [SMALL_STATE(732)] = 13755,
  [SMALL_STATE(733)] = 13762,
  [SMALL_STATE(734)] = 13767,
  [SMALL_STATE(735)] = 13774,
  [SMALL_STATE(736)] = 13781,
  [SMALL_STATE(737)] = 13788,
  [SMALL_STATE(738)] = 13795,
  [SMALL_STATE(739)] = 13800,
  [SMALL_STATE(740)] = 13805,
  [SMALL_STATE(741)] = 13812,
  [SMALL_STATE(742)] = 13819,
  [SMALL_STATE(743)] = 13826,
  [SMALL_STATE(744)] = 13831,
  [SMALL_STATE(745)] = 13838,
  [SMALL_STATE(746)] = 13845,
  [SMALL_STATE(747)] = 13852,
  [SMALL_STATE(748)] = 13857,
  [SMALL_STATE(749)] = 13864,
  [SMALL_STATE(750)] = 13871,
  [SMALL_STATE(751)] = 13876,
  [SMALL_STATE(752)] = 13881,
  [SMALL_STATE(753)] = 13888,
  [SMALL_STATE(754)] = 13893,
  [SMALL_STATE(755)] = 13900,
  [SMALL_STATE(756)] = 13905,
  [SMALL_STATE(757)] = 13912,
  [SMALL_STATE(758)] = 13919,
  [SMALL_STATE(759)] = 13926,
  [SMALL_STATE(760)] = 13933,
  [SMALL_STATE(761)] = 13938,
  [SMALL_STATE(762)] = 13943,
  [SMALL_STATE(763)] = 13950,
  [SMALL_STATE(764)] = 13957,
  [SMALL_STATE(765)] = 13964,
  [SMALL_STATE(766)] = 13969,
  [SMALL_STATE(767)] = 13976,
  [SMALL_STATE(768)] = 13981,
  [SMALL_STATE(769)] = 13988,
  [SMALL_STATE(770)] = 13993,
  [SMALL_STATE(771)] = 14000,
  [SMALL_STATE(772)] = 14007,
  [SMALL_STATE(773)] = 14014,
  [SMALL_STATE(774)] = 14021,
  [SMALL_STATE(775)] = 14026,
  [SMALL_STATE(776)] = 14033,
  [SMALL_STATE(777)] = 14040,
  [SMALL_STATE(778)] = 14047,
  [SMALL_STATE(779)] = 14052,
  [SMALL_STATE(780)] = 14059,
  [SMALL_STATE(781)] = 14066,
  [SMALL_STATE(782)] = 14073,
  [SMALL_STATE(783)] = 14078,
  [SMALL_STATE(784)] = 14085,
  [SMALL_STATE(785)] = 14092,
  [SMALL_STATE(786)] = 14099,
  [SMALL_STATE(787)] = 14106,
  [SMALL_STATE(788)] = 14113,
  [SMALL_STATE(789)] = 14118,
  [SMALL_STATE(790)] = 14125,
  [SMALL_STATE(791)] = 14132,
  [SMALL_STATE(792)] = 14139,
  [SMALL_STATE(793)] = 14146,
  [SMALL_STATE(794)] = 14153,
  [SMALL_STATE(795)] = 14160,
  [SMALL_STATE(796)] = 14167,
  [SMALL_STATE(797)] = 14174,
  [SMALL_STATE(798)] = 14181,
  [SMALL_STATE(799)] = 14188,
  [SMALL_STATE(800)] = 14195,
  [SMALL_STATE(801)] = 14200,
  [SMALL_STATE(802)] = 14205,
  [SMALL_STATE(803)] = 14210,
  [SMALL_STATE(804)] = 14215,
  [SMALL_STATE(805)] = 14222,
  [SMALL_STATE(806)] = 14229,
  [SMALL_STATE(807)] = 14236,
  [SMALL_STATE(808)] = 14243,
  [SMALL_STATE(809)] = 14250,
  [SMALL_STATE(810)] = 14257,
  [SMALL_STATE(811)] = 14264,
  [SMALL_STATE(812)] = 14271,
  [SMALL_STATE(813)] = 14278,
  [SMALL_STATE(814)] = 14285,
  [SMALL_STATE(815)] = 14292,
  [SMALL_STATE(816)] = 14299,
  [SMALL_STATE(817)] = 14306,
  [SMALL_STATE(818)] = 14313,
  [SMALL_STATE(819)] = 14318,
  [SMALL_STATE(820)] = 14325,
  [SMALL_STATE(821)] = 14332,
  [SMALL_STATE(822)] = 14339,
  [SMALL_STATE(823)] = 14346,
  [SMALL_STATE(824)] = 14353,
  [SMALL_STATE(825)] = 14360,
  [SMALL_STATE(826)] = 14367,
  [SMALL_STATE(827)] = 14374,
  [SMALL_STATE(828)] = 14381,
  [SMALL_STATE(829)] = 14388,
  [SMALL_STATE(830)] = 14395,
  [SMALL_STATE(831)] = 14402,
  [SMALL_STATE(832)] = 14409,
  [SMALL_STATE(833)] = 14416,
  [SMALL_STATE(834)] = 14423,
  [SMALL_STATE(835)] = 14430,
  [SMALL_STATE(836)] = 14435,
  [SMALL_STATE(837)] = 14442,
  [SMALL_STATE(838)] = 14449,
  [SMALL_STATE(839)] = 14456,
  [SMALL_STATE(840)] = 14460,
  [SMALL_STATE(841)] = 14464,
  [SMALL_STATE(842)] = 14468,
  [SMALL_STATE(843)] = 14472,
  [SMALL_STATE(844)] = 14476,
  [SMALL_STATE(845)] = 14480,
  [SMALL_STATE(846)] = 14484,
  [SMALL_STATE(847)] = 14488,
  [SMALL_STATE(848)] = 14492,
  [SMALL_STATE(849)] = 14496,
  [SMALL_STATE(850)] = 14500,
  [SMALL_STATE(851)] = 14504,
  [SMALL_STATE(852)] = 14508,
  [SMALL_STATE(853)] = 14512,
  [SMALL_STATE(854)] = 14516,
  [SMALL_STATE(855)] = 14520,
  [SMALL_STATE(856)] = 14524,
  [SMALL_STATE(857)] = 14528,
  [SMALL_STATE(858)] = 14532,
  [SMALL_STATE(859)] = 14536,
  [SMALL_STATE(860)] = 14540,
  [SMALL_STATE(861)] = 14544,
  [SMALL_STATE(862)] = 14548,
  [SMALL_STATE(863)] = 14552,
  [SMALL_STATE(864)] = 14556,
  [SMALL_STATE(865)] = 14560,
  [SMALL_STATE(866)] = 14564,
  [SMALL_STATE(867)] = 14568,
  [SMALL_STATE(868)] = 14572,
  [SMALL_STATE(869)] = 14576,
  [SMALL_STATE(870)] = 14580,
  [SMALL_STATE(871)] = 14584,
  [SMALL_STATE(872)] = 14588,
  [SMALL_STATE(873)] = 14592,
  [SMALL_STATE(874)] = 14596,
  [SMALL_STATE(875)] = 14600,
  [SMALL_STATE(876)] = 14604,
  [SMALL_STATE(877)] = 14608,
  [SMALL_STATE(878)] = 14612,
  [SMALL_STATE(879)] = 14616,
  [SMALL_STATE(880)] = 14620,
  [SMALL_STATE(881)] = 14624,
  [SMALL_STATE(882)] = 14628,
  [SMALL_STATE(883)] = 14632,
  [SMALL_STATE(884)] = 14636,
  [SMALL_STATE(885)] = 14640,
  [SMALL_STATE(886)] = 14644,
  [SMALL_STATE(887)] = 14648,
  [SMALL_STATE(888)] = 14652,
  [SMALL_STATE(889)] = 14656,
  [SMALL_STATE(890)] = 14660,
  [SMALL_STATE(891)] = 14664,
  [SMALL_STATE(892)] = 14668,
  [SMALL_STATE(893)] = 14672,
  [SMALL_STATE(894)] = 14676,
  [SMALL_STATE(895)] = 14680,
  [SMALL_STATE(896)] = 14684,
  [SMALL_STATE(897)] = 14688,
  [SMALL_STATE(898)] = 14692,
  [SMALL_STATE(899)] = 14696,
  [SMALL_STATE(900)] = 14700,
  [SMALL_STATE(901)] = 14704,
  [SMALL_STATE(902)] = 14708,
  [SMALL_STATE(903)] = 14712,
  [SMALL_STATE(904)] = 14716,
  [SMALL_STATE(905)] = 14720,
  [SMALL_STATE(906)] = 14724,
  [SMALL_STATE(907)] = 14728,
  [SMALL_STATE(908)] = 14732,
  [SMALL_STATE(909)] = 14736,
  [SMALL_STATE(910)] = 14740,
  [SMALL_STATE(911)] = 14744,
  [SMALL_STATE(912)] = 14748,
  [SMALL_STATE(913)] = 14752,
  [SMALL_STATE(914)] = 14756,
  [SMALL_STATE(915)] = 14760,
  [SMALL_STATE(916)] = 14764,
  [SMALL_STATE(917)] = 14768,
  [SMALL_STATE(918)] = 14772,
  [SMALL_STATE(919)] = 14776,
  [SMALL_STATE(920)] = 14780,
  [SMALL_STATE(921)] = 14784,
  [SMALL_STATE(922)] = 14788,
  [SMALL_STATE(923)] = 14792,
  [SMALL_STATE(924)] = 14796,
  [SMALL_STATE(925)] = 14800,
  [SMALL_STATE(926)] = 14804,
  [SMALL_STATE(927)] = 14808,
  [SMALL_STATE(928)] = 14812,
  [SMALL_STATE(929)] = 14816,
  [SMALL_STATE(930)] = 14820,
  [SMALL_STATE(931)] = 14824,
  [SMALL_STATE(932)] = 14828,
  [SMALL_STATE(933)] = 14832,
  [SMALL_STATE(934)] = 14836,
  [SMALL_STATE(935)] = 14840,
  [SMALL_STATE(936)] = 14844,
  [SMALL_STATE(937)] = 14848,
  [SMALL_STATE(938)] = 14852,
  [SMALL_STATE(939)] = 14856,
  [SMALL_STATE(940)] = 14860,
  [SMALL_STATE(941)] = 14864,
  [SMALL_STATE(942)] = 14868,
  [SMALL_STATE(943)] = 14872,
  [SMALL_STATE(944)] = 14876,
  [SMALL_STATE(945)] = 14880,
  [SMALL_STATE(946)] = 14884,
  [SMALL_STATE(947)] = 14888,
  [SMALL_STATE(948)] = 14892,
  [SMALL_STATE(949)] = 14896,
  [SMALL_STATE(950)] = 14900,
  [SMALL_STATE(951)] = 14904,
  [SMALL_STATE(952)] = 14908,
  [SMALL_STATE(953)] = 14912,
  [SMALL_STATE(954)] = 14916,
  [SMALL_STATE(955)] = 14920,
  [SMALL_STATE(956)] = 14924,
  [SMALL_STATE(957)] = 14928,
  [SMALL_STATE(958)] = 14932,
  [SMALL_STATE(959)] = 14936,
  [SMALL_STATE(960)] = 14940,
  [SMALL_STATE(961)] = 14944,
  [SMALL_STATE(962)] = 14948,
  [SMALL_STATE(963)] = 14952,
  [SMALL_STATE(964)] = 14956,
  [SMALL_STATE(965)] = 14960,
  [SMALL_STATE(966)] = 14964,
  [SMALL_STATE(967)] = 14968,
  [SMALL_STATE(968)] = 14972,
  [SMALL_STATE(969)] = 14976,
  [SMALL_STATE(970)] = 14980,
  [SMALL_STATE(971)] = 14984,
  [SMALL_STATE(972)] = 14988,
  [SMALL_STATE(973)] = 14992,
  [SMALL_STATE(974)] = 14996,
  [SMALL_STATE(975)] = 15000,
  [SMALL_STATE(976)] = 15004,
  [SMALL_STATE(977)] = 15008,
  [SMALL_STATE(978)] = 15012,
  [SMALL_STATE(979)] = 15016,
  [SMALL_STATE(980)] = 15020,
  [SMALL_STATE(981)] = 15024,
  [SMALL_STATE(982)] = 15028,
  [SMALL_STATE(983)] = 15032,
  [SMALL_STATE(984)] = 15036,
  [SMALL_STATE(985)] = 15040,
  [SMALL_STATE(986)] = 15044,
  [SMALL_STATE(987)] = 15048,
  [SMALL_STATE(988)] = 15052,
  [SMALL_STATE(989)] = 15056,
  [SMALL_STATE(990)] = 15060,
  [SMALL_STATE(991)] = 15064,
  [SMALL_STATE(992)] = 15068,
  [SMALL_STATE(993)] = 15072,
  [SMALL_STATE(994)] = 15076,
  [SMALL_STATE(995)] = 15080,
  [SMALL_STATE(996)] = 15084,
  [SMALL_STATE(997)] = 15088,
  [SMALL_STATE(998)] = 15092,
  [SMALL_STATE(999)] = 15096,
  [SMALL_STATE(1000)] = 15100,
  [SMALL_STATE(1001)] = 15104,
  [SMALL_STATE(1002)] = 15108,
  [SMALL_STATE(1003)] = 15112,
  [SMALL_STATE(1004)] = 15116,
  [SMALL_STATE(1005)] = 15120,
  [SMALL_STATE(1006)] = 15124,
  [SMALL_STATE(1007)] = 15128,
  [SMALL_STATE(1008)] = 15132,
  [SMALL_STATE(1009)] = 15136,
  [SMALL_STATE(1010)] = 15140,
  [SMALL_STATE(1011)] = 15144,
  [SMALL_STATE(1012)] = 15148,
  [SMALL_STATE(1013)] = 15152,
  [SMALL_STATE(1014)] = 15156,
  [SMALL_STATE(1015)] = 15160,
  [SMALL_STATE(1016)] = 15164,
  [SMALL_STATE(1017)] = 15168,
  [SMALL_STATE(1018)] = 15172,
  [SMALL_STATE(1019)] = 15176,
  [SMALL_STATE(1020)] = 15180,
  [SMALL_STATE(1021)] = 15184,
  [SMALL_STATE(1022)] = 15188,
  [SMALL_STATE(1023)] = 15192,
  [SMALL_STATE(1024)] = 15196,
  [SMALL_STATE(1025)] = 15200,
  [SMALL_STATE(1026)] = 15204,
  [SMALL_STATE(1027)] = 15208,
  [SMALL_STATE(1028)] = 15212,
  [SMALL_STATE(1029)] = 15216,
  [SMALL_STATE(1030)] = 15220,
  [SMALL_STATE(1031)] = 15224,
  [SMALL_STATE(1032)] = 15228,
  [SMALL_STATE(1033)] = 15232,
  [SMALL_STATE(1034)] = 15236,
  [SMALL_STATE(1035)] = 15240,
  [SMALL_STATE(1036)] = 15244,
  [SMALL_STATE(1037)] = 15248,
  [SMALL_STATE(1038)] = 15252,
  [SMALL_STATE(1039)] = 15256,
  [SMALL_STATE(1040)] = 15260,
  [SMALL_STATE(1041)] = 15264,
  [SMALL_STATE(1042)] = 15268,
  [SMALL_STATE(1043)] = 15272,
  [SMALL_STATE(1044)] = 15276,
  [SMALL_STATE(1045)] = 15280,
  [SMALL_STATE(1046)] = 15284,
  [SMALL_STATE(1047)] = 15288,
  [SMALL_STATE(1048)] = 15292,
  [SMALL_STATE(1049)] = 15296,
  [SMALL_STATE(1050)] = 15300,
  [SMALL_STATE(1051)] = 15304,
  [SMALL_STATE(1052)] = 15308,
  [SMALL_STATE(1053)] = 15312,
  [SMALL_STATE(1054)] = 15316,
  [SMALL_STATE(1055)] = 15320,
  [SMALL_STATE(1056)] = 15324,
  [SMALL_STATE(1057)] = 15328,
  [SMALL_STATE(1058)] = 15332,
  [SMALL_STATE(1059)] = 15336,
  [SMALL_STATE(1060)] = 15340,
  [SMALL_STATE(1061)] = 15344,
  [SMALL_STATE(1062)] = 15348,
  [SMALL_STATE(1063)] = 15352,
  [SMALL_STATE(1064)] = 15356,
  [SMALL_STATE(1065)] = 15360,
  [SMALL_STATE(1066)] = 15364,
  [SMALL_STATE(1067)] = 15368,
  [SMALL_STATE(1068)] = 15372,
  [SMALL_STATE(1069)] = 15376,
  [SMALL_STATE(1070)] = 15380,
  [SMALL_STATE(1071)] = 15384,
  [SMALL_STATE(1072)] = 15388,
  [SMALL_STATE(1073)] = 15392,
  [SMALL_STATE(1074)] = 15396,
  [SMALL_STATE(1075)] = 15400,
  [SMALL_STATE(1076)] = 15404,
  [SMALL_STATE(1077)] = 15408,
  [SMALL_STATE(1078)] = 15412,
  [SMALL_STATE(1079)] = 15416,
  [SMALL_STATE(1080)] = 15420,
  [SMALL_STATE(1081)] = 15424,
  [SMALL_STATE(1082)] = 15428,
  [SMALL_STATE(1083)] = 15432,
  [SMALL_STATE(1084)] = 15436,
  [SMALL_STATE(1085)] = 15440,
  [SMALL_STATE(1086)] = 15444,
  [SMALL_STATE(1087)] = 15448,
  [SMALL_STATE(1088)] = 15452,
  [SMALL_STATE(1089)] = 15456,
  [SMALL_STATE(1090)] = 15460,
  [SMALL_STATE(1091)] = 15464,
  [SMALL_STATE(1092)] = 15468,
  [SMALL_STATE(1093)] = 15472,
  [SMALL_STATE(1094)] = 15476,
  [SMALL_STATE(1095)] = 15480,
  [SMALL_STATE(1096)] = 15484,
  [SMALL_STATE(1097)] = 15488,
  [SMALL_STATE(1098)] = 15492,
  [SMALL_STATE(1099)] = 15496,
  [SMALL_STATE(1100)] = 15500,
  [SMALL_STATE(1101)] = 15504,
  [SMALL_STATE(1102)] = 15508,
  [SMALL_STATE(1103)] = 15512,
  [SMALL_STATE(1104)] = 15516,
  [SMALL_STATE(1105)] = 15520,
  [SMALL_STATE(1106)] = 15524,
  [SMALL_STATE(1107)] = 15528,
  [SMALL_STATE(1108)] = 15532,
  [SMALL_STATE(1109)] = 15536,
  [SMALL_STATE(1110)] = 15540,
  [SMALL_STATE(1111)] = 15544,
  [SMALL_STATE(1112)] = 15548,
  [SMALL_STATE(1113)] = 15552,
  [SMALL_STATE(1114)] = 15556,
  [SMALL_STATE(1115)] = 15560,
  [SMALL_STATE(1116)] = 15564,
  [SMALL_STATE(1117)] = 15568,
  [SMALL_STATE(1118)] = 15572,
  [SMALL_STATE(1119)] = 15576,
  [SMALL_STATE(1120)] = 15580,
  [SMALL_STATE(1121)] = 15584,
  [SMALL_STATE(1122)] = 15588,
  [SMALL_STATE(1123)] = 15592,
  [SMALL_STATE(1124)] = 15596,
  [SMALL_STATE(1125)] = 15600,
  [SMALL_STATE(1126)] = 15604,
  [SMALL_STATE(1127)] = 15608,
  [SMALL_STATE(1128)] = 15612,
  [SMALL_STATE(1129)] = 15616,
  [SMALL_STATE(1130)] = 15620,
  [SMALL_STATE(1131)] = 15624,
  [SMALL_STATE(1132)] = 15628,
  [SMALL_STATE(1133)] = 15632,
  [SMALL_STATE(1134)] = 15636,
  [SMALL_STATE(1135)] = 15640,
  [SMALL_STATE(1136)] = 15644,
  [SMALL_STATE(1137)] = 15648,
  [SMALL_STATE(1138)] = 15652,
  [SMALL_STATE(1139)] = 15656,
  [SMALL_STATE(1140)] = 15660,
  [SMALL_STATE(1141)] = 15664,
  [SMALL_STATE(1142)] = 15668,
  [SMALL_STATE(1143)] = 15672,
  [SMALL_STATE(1144)] = 15676,
  [SMALL_STATE(1145)] = 15680,
  [SMALL_STATE(1146)] = 15684,
  [SMALL_STATE(1147)] = 15688,
  [SMALL_STATE(1148)] = 15692,
  [SMALL_STATE(1149)] = 15696,
  [SMALL_STATE(1150)] = 15700,
  [SMALL_STATE(1151)] = 15704,
  [SMALL_STATE(1152)] = 15708,
  [SMALL_STATE(1153)] = 15712,
  [SMALL_STATE(1154)] = 15716,
  [SMALL_STATE(1155)] = 15720,
  [SMALL_STATE(1156)] = 15724,
  [SMALL_STATE(1157)] = 15728,
  [SMALL_STATE(1158)] = 15732,
  [SMALL_STATE(1159)] = 15736,
  [SMALL_STATE(1160)] = 15740,
  [SMALL_STATE(1161)] = 15744,
  [SMALL_STATE(1162)] = 15748,
  [SMALL_STATE(1163)] = 15752,
  [SMALL_STATE(1164)] = 15756,
  [SMALL_STATE(1165)] = 15760,
  [SMALL_STATE(1166)] = 15764,
  [SMALL_STATE(1167)] = 15768,
  [SMALL_STATE(1168)] = 15772,
  [SMALL_STATE(1169)] = 15776,
  [SMALL_STATE(1170)] = 15780,
  [SMALL_STATE(1171)] = 15784,
  [SMALL_STATE(1172)] = 15788,
  [SMALL_STATE(1173)] = 15792,
  [SMALL_STATE(1174)] = 15796,
  [SMALL_STATE(1175)] = 15800,
  [SMALL_STATE(1176)] = 15804,
  [SMALL_STATE(1177)] = 15808,
  [SMALL_STATE(1178)] = 15812,
  [SMALL_STATE(1179)] = 15816,
  [SMALL_STATE(1180)] = 15820,
  [SMALL_STATE(1181)] = 15824,
  [SMALL_STATE(1182)] = 15828,
  [SMALL_STATE(1183)] = 15832,
  [SMALL_STATE(1184)] = 15836,
  [SMALL_STATE(1185)] = 15840,
  [SMALL_STATE(1186)] = 15844,
  [SMALL_STATE(1187)] = 15848,
  [SMALL_STATE(1188)] = 15852,
  [SMALL_STATE(1189)] = 15856,
  [SMALL_STATE(1190)] = 15860,
  [SMALL_STATE(1191)] = 15864,
  [SMALL_STATE(1192)] = 15868,
  [SMALL_STATE(1193)] = 15872,
  [SMALL_STATE(1194)] = 15876,
  [SMALL_STATE(1195)] = 15880,
  [SMALL_STATE(1196)] = 15884,
  [SMALL_STATE(1197)] = 15888,
  [SMALL_STATE(1198)] = 15892,
  [SMALL_STATE(1199)] = 15896,
  [SMALL_STATE(1200)] = 15900,
  [SMALL_STATE(1201)] = 15904,
  [SMALL_STATE(1202)] = 15908,
  [SMALL_STATE(1203)] = 15912,
  [SMALL_STATE(1204)] = 15916,
  [SMALL_STATE(1205)] = 15920,
  [SMALL_STATE(1206)] = 15924,
  [SMALL_STATE(1207)] = 15928,
  [SMALL_STATE(1208)] = 15932,
  [SMALL_STATE(1209)] = 15936,
  [SMALL_STATE(1210)] = 15940,
  [SMALL_STATE(1211)] = 15944,
  [SMALL_STATE(1212)] = 15948,
  [SMALL_STATE(1213)] = 15952,
  [SMALL_STATE(1214)] = 15956,
  [SMALL_STATE(1215)] = 15960,
  [SMALL_STATE(1216)] = 15964,
  [SMALL_STATE(1217)] = 15968,
  [SMALL_STATE(1218)] = 15972,
  [SMALL_STATE(1219)] = 15976,
  [SMALL_STATE(1220)] = 15980,
  [SMALL_STATE(1221)] = 15984,
  [SMALL_STATE(1222)] = 15988,
  [SMALL_STATE(1223)] = 15992,
  [SMALL_STATE(1224)] = 15996,
  [SMALL_STATE(1225)] = 16000,
  [SMALL_STATE(1226)] = 16004,
  [SMALL_STATE(1227)] = 16008,
  [SMALL_STATE(1228)] = 16012,
  [SMALL_STATE(1229)] = 16016,
  [SMALL_STATE(1230)] = 16020,
  [SMALL_STATE(1231)] = 16024,
  [SMALL_STATE(1232)] = 16028,
  [SMALL_STATE(1233)] = 16032,
  [SMALL_STATE(1234)] = 16036,
  [SMALL_STATE(1235)] = 16040,
  [SMALL_STATE(1236)] = 16044,
  [SMALL_STATE(1237)] = 16048,
  [SMALL_STATE(1238)] = 16052,
  [SMALL_STATE(1239)] = 16056,
  [SMALL_STATE(1240)] = 16060,
  [SMALL_STATE(1241)] = 16064,
  [SMALL_STATE(1242)] = 16068,
  [SMALL_STATE(1243)] = 16072,
  [SMALL_STATE(1244)] = 16076,
  [SMALL_STATE(1245)] = 16080,
  [SMALL_STATE(1246)] = 16084,
  [SMALL_STATE(1247)] = 16088,
  [SMALL_STATE(1248)] = 16092,
  [SMALL_STATE(1249)] = 16096,
  [SMALL_STATE(1250)] = 16100,
  [SMALL_STATE(1251)] = 16104,
  [SMALL_STATE(1252)] = 16108,
  [SMALL_STATE(1253)] = 16112,
  [SMALL_STATE(1254)] = 16116,
  [SMALL_STATE(1255)] = 16120,
  [SMALL_STATE(1256)] = 16124,
  [SMALL_STATE(1257)] = 16128,
  [SMALL_STATE(1258)] = 16132,
  [SMALL_STATE(1259)] = 16136,
  [SMALL_STATE(1260)] = 16140,
  [SMALL_STATE(1261)] = 16144,
  [SMALL_STATE(1262)] = 16148,
  [SMALL_STATE(1263)] = 16152,
  [SMALL_STATE(1264)] = 16156,
  [SMALL_STATE(1265)] = 16160,
  [SMALL_STATE(1266)] = 16164,
  [SMALL_STATE(1267)] = 16168,
  [SMALL_STATE(1268)] = 16172,
  [SMALL_STATE(1269)] = 16176,
  [SMALL_STATE(1270)] = 16180,
  [SMALL_STATE(1271)] = 16184,
  [SMALL_STATE(1272)] = 16188,
  [SMALL_STATE(1273)] = 16192,
  [SMALL_STATE(1274)] = 16196,
  [SMALL_STATE(1275)] = 16200,
  [SMALL_STATE(1276)] = 16204,
  [SMALL_STATE(1277)] = 16208,
  [SMALL_STATE(1278)] = 16212,
  [SMALL_STATE(1279)] = 16216,
  [SMALL_STATE(1280)] = 16220,
  [SMALL_STATE(1281)] = 16224,
  [SMALL_STATE(1282)] = 16228,
  [SMALL_STATE(1283)] = 16232,
  [SMALL_STATE(1284)] = 16236,
  [SMALL_STATE(1285)] = 16240,
  [SMALL_STATE(1286)] = 16244,
  [SMALL_STATE(1287)] = 16248,
  [SMALL_STATE(1288)] = 16252,
  [SMALL_STATE(1289)] = 16256,
  [SMALL_STATE(1290)] = 16260,
  [SMALL_STATE(1291)] = 16264,
  [SMALL_STATE(1292)] = 16268,
  [SMALL_STATE(1293)] = 16272,
  [SMALL_STATE(1294)] = 16276,
  [SMALL_STATE(1295)] = 16280,
  [SMALL_STATE(1296)] = 16284,
  [SMALL_STATE(1297)] = 16288,
  [SMALL_STATE(1298)] = 16292,
  [SMALL_STATE(1299)] = 16296,
  [SMALL_STATE(1300)] = 16300,
  [SMALL_STATE(1301)] = 16304,
  [SMALL_STATE(1302)] = 16308,
  [SMALL_STATE(1303)] = 16312,
  [SMALL_STATE(1304)] = 16316,
  [SMALL_STATE(1305)] = 16320,
  [SMALL_STATE(1306)] = 16324,
  [SMALL_STATE(1307)] = 16328,
  [SMALL_STATE(1308)] = 16332,
  [SMALL_STATE(1309)] = 16336,
  [SMALL_STATE(1310)] = 16340,
  [SMALL_STATE(1311)] = 16344,
  [SMALL_STATE(1312)] = 16348,
  [SMALL_STATE(1313)] = 16352,
  [SMALL_STATE(1314)] = 16356,
  [SMALL_STATE(1315)] = 16360,
  [SMALL_STATE(1316)] = 16364,
  [SMALL_STATE(1317)] = 16368,
  [SMALL_STATE(1318)] = 16372,
  [SMALL_STATE(1319)] = 16376,
  [SMALL_STATE(1320)] = 16380,
  [SMALL_STATE(1321)] = 16384,
  [SMALL_STATE(1322)] = 16388,
  [SMALL_STATE(1323)] = 16392,
  [SMALL_STATE(1324)] = 16396,
  [SMALL_STATE(1325)] = 16400,
  [SMALL_STATE(1326)] = 16404,
  [SMALL_STATE(1327)] = 16408,
  [SMALL_STATE(1328)] = 16412,
  [SMALL_STATE(1329)] = 16416,
  [SMALL_STATE(1330)] = 16420,
  [SMALL_STATE(1331)] = 16424,
  [SMALL_STATE(1332)] = 16428,
  [SMALL_STATE(1333)] = 16432,
  [SMALL_STATE(1334)] = 16436,
  [SMALL_STATE(1335)] = 16440,
  [SMALL_STATE(1336)] = 16444,
  [SMALL_STATE(1337)] = 16448,
  [SMALL_STATE(1338)] = 16452,
  [SMALL_STATE(1339)] = 16456,
  [SMALL_STATE(1340)] = 16460,
  [SMALL_STATE(1341)] = 16464,
  [SMALL_STATE(1342)] = 16468,
  [SMALL_STATE(1343)] = 16472,
  [SMALL_STATE(1344)] = 16476,
  [SMALL_STATE(1345)] = 16480,
  [SMALL_STATE(1346)] = 16484,
  [SMALL_STATE(1347)] = 16488,
  [SMALL_STATE(1348)] = 16492,
  [SMALL_STATE(1349)] = 16496,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1291),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1349),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1348),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1347),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(457),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(471),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(544),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1291),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(557),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(423),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(437),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1349),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1348),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(424),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(430),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(463),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(419),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(1347),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 20),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 20),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(822),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1, .production_id = 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1324),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 6, .production_id = 47),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 3, .production_id = 17),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7, .production_id = 47),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 47),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_name, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1147),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1268),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1269),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(462),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9, .production_id = 47),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8, .production_id = 47),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains_key, 4, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_contains, 3, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_definition, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(962),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 39),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 40),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, .production_id = 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(1035),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2, .production_id = 47),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 29),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1126),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 61),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 60),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 41),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, .production_id = 17),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 3, .production_id = 6),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 109),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 39),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 9),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 9),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 15, .production_id = 92),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 26),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 26),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 2), SHIFT_REPEAT(897),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_password, 2, .production_id = 44),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 22, .production_id = 124),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 4, .production_id = 18),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_definition, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 60),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 6, .production_id = 9),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(748),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 6, .production_id = 43),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 105),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 17, .production_id = 104),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_privilege, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_options_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_options_repeat1, 2), SHIFT_REPEAT(686),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 9),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 60),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 3, .production_id = 6),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_list_nested, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_type_rename_list_repeat1, 2), SHIFT_REPEAT(799),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_list, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1271),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1272),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_role_with_repeat1, 2), SHIFT_REPEAT(485),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 119),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 120),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 115),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 1, .production_id = 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 26),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 4, .production_id = 47),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 3, .production_id = 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_options_repeat1, 2), SHIFT_REPEAT(454),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_add, 3, .production_id = 47),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_options, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_column_list, 2, .production_id = 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 60),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 5, .production_id = 39),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 7, .production_id = 39),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_column_definition, 2, .production_id = 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 38),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 3, .production_id = 23),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 7),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 5, .production_id = 35),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 33),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 49),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 27),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 25),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 46),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 4, .production_id = 18),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 57),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_value, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_item, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 56),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 7),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compact_storage, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename_item, 3, .production_id = 63),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 7, .production_id = 79),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 50),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 30),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_table_column_definition_repeat1, 3, .production_id = 47),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 3, .production_id = 9),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1228),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 10),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list, 4),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 3, .production_id = 14),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1193),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 73),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_spec, 2, .production_id = 21),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 3, .production_id = 13),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1205),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 3),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 3, .production_id = 12),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 65),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 6, .production_id = 66),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 4, .production_id = 19),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3, .production_id = 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 10),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash, 4),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 36),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_with_option, 3, .production_id = 48),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name, 1, .production_id = 8),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 45),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_order, 6, .production_id = 79),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 99),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 6, .production_id = 37),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 6, .production_id = 18),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 105),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 78),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 18, .production_id = 104),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_compact_storage, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 91),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 90),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 6, .production_id = 26),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revoke, 6, .production_id = 43),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant, 6, .production_id = 43),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 89),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 10, .production_id = 71),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 23, .production_id = 124),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 15, .production_id = 93),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 60),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 6, .production_id = 46),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 10, .production_id = 9),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 9),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table, 4, .production_id = 9),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_operation, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 14, .production_id = 88),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_role, 4, .production_id = 6),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 108),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 94),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 8),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_materialized_view, 8, .production_id = 46),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type, 4, .production_id = 14),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_operation, 1),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_user, 4),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 21, .production_id = 123),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 95),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 4, .production_id = 19),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_with, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_super_user, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 87),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 14, .production_id = 86),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 18, .production_id = 112),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 3, .production_id = 11),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durable_writes, 3, .production_id = 80),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 4),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 8, .production_id = 39),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 16, .production_id = 96),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 106),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 111),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_permissions, 6, .production_id = 43),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 3, .production_id = 6),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 21, .production_id = 122),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 113),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 114),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 19, .production_id = 109),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 11, .production_id = 78),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 120),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 4),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_materialized_view, 8, .production_id = 64),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 4, .production_id = 6),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 7),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 8, .production_id = 51),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 8),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 13, .production_id = 84),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 10),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_role, 7, .production_id = 43),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 116),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 9, .production_id = 71),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 19, .production_id = 117),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 21, .production_id = 119),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 74),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_element, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 9, .production_id = 75),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 107),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 3),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 13, .production_id = 85),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_batch, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 11, .production_id = 81),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 19, .production_id = 118),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 16, .production_id = 92),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_materialized_view, 20, .production_id = 115),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 7, .production_id = 51),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 12, .production_id = 26),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_user, 7),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 97),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_class, 1),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_trigger, 5),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 60),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 16, .production_id = 98),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_options, 5),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 9),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_roles, 5, .production_id = 19),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_rename, 2),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 11, .production_id = 26),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 5, .production_id = 26),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_table, 7, .production_id = 52),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 28),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keyspace, 5, .production_id = 29),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_type_alter_type, 4, .production_id = 47),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 5, .production_id = 31),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_role, 5, .production_id = 32),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 7, .production_id = 53),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 5, .production_id = 34),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type, 12, .production_id = 84),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_function, 7, .production_id = 54),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_rename, 4, .production_id = 62),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 9, .production_id = 39),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 20, .production_id = 121),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_add, 2),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 5, .production_id = 37),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_user, 5),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_aggregate, 7, .production_id = 55),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2, .production_id = 3),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(801),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_keyspace, 9),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_with, 2),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 18, .production_id = 110),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_keyspace, 12),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_trigger, 7, .production_id = 58),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_table_drop_columns, 2),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_type, 7, .production_id = 59),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 12, .production_id = 83),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 100),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function, 17, .production_id = 101),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_aggregate, 17, .production_id = 102),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1270),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1194),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1034),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1158),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1344),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1342),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1138),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1340),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1023),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1022),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1020),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1019),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1052),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1049),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1047),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1155),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1154),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1179),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1094),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1171),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1168),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1265),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1337),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1336),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1335),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1334),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1325),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1, .production_id = 1),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1328),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1327),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1105),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [1092] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2), SHIFT_REPEAT(436),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_set_repeat1, 2),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1261),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1318),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1317),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(795),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1318),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1132),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 2),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 3, .production_id = 23),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 3),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 3),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1280),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2, .production_id = 1),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1, .production_id = 1),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(934),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 1),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1345),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 1),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2), SHIFT_REPEAT(687),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_repeat1, 2),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [1256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1056),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [1274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(429),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(780),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2), SHIFT_REPEAT(776),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_hash_repeat1, 2),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1333),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1331),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2), SHIFT_REPEAT(910),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 2),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [1340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2), SHIFT_REPEAT(417),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_list_nested_repeat1, 2),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 1),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1326),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1267),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1, .production_id = 1),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2), SHIFT_REPEAT(59),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_type_definition_repeat1, 2),
  [1394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1300),
  [1396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 2),
  [1402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2), SHIFT_REPEAT(742),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_list_repeat1, 2),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [1409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2), SHIFT_REPEAT(837),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_replication_list_repeat1, 2),
  [1414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2), SHIFT_REPEAT(793),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_cond_hash_repeat1, 2),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2), SHIFT_REPEAT(819),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_materialized_view_where_repeat1, 2),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2), SHIFT_REPEAT(790),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_repeat1, 2),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_materialized_view_where, 4),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(416),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 2),
  [1474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(148),
  [1477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2), SHIFT_REPEAT(1041),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clustering_key_list_repeat1, 2),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1323),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(627),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partition_key_list, 2),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clustering_key_list, 1),
  [1507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1281),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1315),
  [1513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1313),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1304),
  [1519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1296),
  [1533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 16),
  [1539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1284),
  [1541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1288),
  [1545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1224),
  [1549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1295),
  [1553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1298),
  [1557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1301),
  [1561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1305),
  [1573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(814),
  [1575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1306),
  [1577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_cond_hash_item, 3, .production_id = 103),
  [1585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1283),
  [1587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3, .production_id = 15),
  [1595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1282),
  [1597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1313),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_column, 2),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_type_repeat1, 3, .production_id = 72),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1192),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1188),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1, .production_id = 76),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replication_list_item, 3, .production_id = 77),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 1),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_hash_item, 3, .production_id = 77),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1197),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1196),
  [1675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 42),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1204),
  [1683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1307),
  [1687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(804),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [1697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4, .production_id = 22),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5, .production_id = 67),
  [1703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_element, 5),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1077),
  [1711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1076),
  [1713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1232),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1231),
  [1719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1075),
  [1721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1237),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_not_null, 4),
  [1739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1236),
  [1741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1234),
  [1745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 1, .production_id = 7),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4, .production_id = 69),
  [1767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4, .production_id = 70),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4, .production_id = 68),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [1795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 4),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 4),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_column, 4, .production_id = 10),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [1927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_definition, 1),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition_list, 3),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_mode, 5),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [2067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_element, 5),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [2075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [2083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [2089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [2105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [2107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [2115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [2117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [2119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [2121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1, .production_id = 1),
  [2123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [2125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [2129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [2131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [2133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [2137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [2139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [2143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [2145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [2147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [2149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [2151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [2153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [2155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [2159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [2163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [2165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [2167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [2169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [2171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_key, 3, .production_id = 82),
  [2173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [2175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_option_name, 1),
  [2177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [2179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [2181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [2183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [2185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [2187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [2189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [2191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1104),
  [2193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [2195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [2197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1106),
  [2199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [2201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [2205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [2207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1111),
  [2209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [2211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [2213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [2215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1116),
  [2217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [2219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [2221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [2223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [2225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [2227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [2229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [2231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
  [2233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [2235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [2237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [2241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1130),
  [2243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [2245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [2249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [2251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [2253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1136),
  [2255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1137),
  [2257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1139),
  [2261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_name, 3, .production_id = 24),
  [2263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [2265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [2267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [2269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [2271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1141),
  [2275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [2277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [2279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [2281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1145),
  [2283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1146),
  [2285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [2287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [2289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1149),
  [2291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [2293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [2295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [2297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1152),
  [2299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [2301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [2303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [2305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [2307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1159),
  [2309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [2311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1161),
  [2313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1162),
  [2315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [2317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [2319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [2321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [2323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [2325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [2327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [2329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [2331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [2333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [2335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1169),
  [2337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [2339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [2343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1173),
  [2345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [2347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [2349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1176),
  [2351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [2353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1178),
  [2355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [2357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [2359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1181),
  [2361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_key, 5),
  [2363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1182),
  [2365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1183),
  [2367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [2369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [2371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [2373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [2375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [2377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [2379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1189),
  [2381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [2383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [2385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1191),
  [2387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [2389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [2393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [2395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [2397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [2399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1201),
  [2401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1202),
  [2403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [2405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [2407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [2409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [2411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [2413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [2415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [2417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [2419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1209),
  [2421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1210),
  [2423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [2425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1212),
  [2427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1213),
  [2429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1214),
  [2431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [2433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [2435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1216),
  [2437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1217),
  [2439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [2441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1219),
  [2443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [2445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1221),
  [2447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1222),
  [2449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1223),
  [2451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [2453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [2455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1225),
  [2457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [2459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [2461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1227),
  [2463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [2465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [2467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [2469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [2471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [2473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [2475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1071),
  [2477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [2479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1240),
  [2481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1241),
  [2483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [2485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1243),
  [2487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [2489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [2491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [2493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1248),
  [2495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [2497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [2501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1252),
  [2503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1253),
  [2505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [2507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1255),
  [2509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1256),
  [2511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [2513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [2515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1259),
  [2519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1260),
  [2521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [2523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [2525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1263),
  [2527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1264),
  [2529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1175),
  [2531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [2533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [2535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1266),
  [2537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [2539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [2541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [2543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1079),
  [2547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [2549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1090),
  [2551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [2553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1093),
  [2555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [2557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1097),
  [2559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [2561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1277),
  [2563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1278),
  [2565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1120),
  [2567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [2569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [2571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [2573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [2575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1122),
  [2577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1285),
  [2579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1286),
  [2581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [2583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [2585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1289),
  [2587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1290),
  [2589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [2591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [2593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1292),
  [2595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [2597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [2599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1294),
  [2601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [2603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [2605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [2607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [2609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1297),
  [2611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [2613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [2615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [2617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [2619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [2621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [2625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [2627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [2629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1157),
  [2631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [2633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1299),
  [2635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [2637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [2639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [2641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [2643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [2645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [2647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1203),
  [2649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1207),
  [2651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1308),
  [2653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1309),
  [2655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1310),
  [2657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1215),
  [2659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [2661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1312),
  [2663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [2665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [2667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1314),
  [2669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [2671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [2673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [2675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [2677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1229),
  [2679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1319),
  [2681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1230),
  [2683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1233),
  [2685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [2687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [2689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1235),
  [2691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1238),
  [2693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1239),
  [2695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1246),
  [2697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1329),
  [2701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1330),
  [2703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1247),
  [2705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace_name, 1, .production_id = 5),
  [2709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1332),
  [2711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1250),
  [2713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [2715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1257),
  [2717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1, .production_id = 4),
  [2719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [2721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [2723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [2725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [2727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1258),
  [2729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [2731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1262),
  [2733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [2735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [2737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [2739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [2741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1341),
  [2743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [2745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [2747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [2749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [2751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1273),
  [2753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [2755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [2757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [2759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [2761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [2763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [2765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [2767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [2769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [2771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [2773] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [2777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [2779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
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
